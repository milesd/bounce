// Decompile all functions and write C output to a file
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DecompileAll extends GhidraScript {
    public void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        decomp.setSimplificationStyle("decompile");

        PrintWriter out = new PrintWriter(new FileWriter("/tmp/bounce_decompiled.c"));
        ConsoleTaskMonitor monitor = new ConsoleTaskMonitor();

        FunctionIterator funcs = currentProgram.getListing().getFunctions(true);
        int count = 0;
        while (funcs.hasNext()) {
            Function f = funcs.next();
            DecompileResults result = decomp.decompileFunction(f, 60, monitor);
            if (result != null && result.decompileCompleted()) {
                String src = result.getDecompiledFunction().getC();
                if (src != null) {
                    out.println("/* --- " + f.getName() + " @ " + f.getEntryPoint() + " --- */");
                    out.println(src);
                    out.println();
                    count++;
                }
            }
        }
        out.close();
        decomp.dispose();
        println("Decompiled " + count + " functions to /tmp/bounce_decompiled.c");
    }
}
