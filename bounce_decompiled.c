/* --- entry @ 00001020 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_00004150();
  pcVar1 = (code *)swi(0x80);
  _DAT_0002a040 = (*pcVar1)();
  DAT_0002a048 = param_3;
  FUN_000042c0();
  FUN_00004300();
  FUN_00001148();
  FUN_00004340();
  do {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  } while( true );
}



/* --- FUN_00001148 @ 00001148 --- */

undefined4 FUN_00001148(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_00003fe0();
  iVar5 = 7000;
  iVar4 = 0;
  uVar3 = *param_2;
  param_2 = param_2 + 1;
  param_1 = param_1 + -1;
  while( true ) {
    while( true ) {
      while ((0 < param_1 &&
             (iVar2 = FUN_000043d0(*param_2,&DAT_0000111f,uVar3,iVar4,iVar5), iVar2 == 0))) {
        puVar1 = param_2 + 1;
        if (param_1 == 1) {
          FUN_00001368(uVar3);
        }
        param_2 = param_2 + 2;
        iVar2 = FUN_000013b8(*puVar1);
        if (iVar2 == 0) {
          FUN_00004340(1);
        }
        param_1 = param_1 + -2;
      }
      if ((param_1 < 1) ||
         (iVar2 = FUN_000043d0(*param_2,&DAT_00001122,uVar3,iVar4,iVar5), iVar2 != 0)) break;
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
      iVar4 = 1;
    }
    if ((param_1 < 1) ||
       (iVar2 = FUN_000043d0(*param_2,&DAT_00001125,uVar3,iVar4,iVar5), iVar2 != 0)) break;
    puVar1 = param_2 + 1;
    if (param_1 == 1) {
      FUN_00001368(uVar3);
    }
    param_2 = param_2 + 2;
    iVar5 = FUN_000043f8(*puVar1);
    param_1 = param_1 + -2;
    if ((iVar5 < 0) || (0xffff < iVar5)) {
      FUN_0000b478(s_Invalid_control_port_number__00001128);
      FUN_00001368(uVar3);
    }
  }
  if (0 < param_1) {
    FUN_00001368(uVar3);
  }
  if (iVar4 == 0) {
    FUN_00003e38();
  }
  FUN_00004410(2,FUN_00001918);
  FUN_00004410(0xf,FUN_00001918);
  DAT_0002a020 = FUN_00001608(iVar5);
  if (DAT_0002a020 < 0) {
    FUN_00001918();
    FUN_00004340(1);
  }
  FUN_00003438();
  FUN_00001918();
  return 0;
}



/* --- FUN_00001368 @ 00001368 --- */

void FUN_00001368(undefined4 param_1)

{
  FUN_0000b478(s_Usage___s___f_filename____p_port_0000133c,param_1);
  FUN_00004340(1);
  return;
}



/* --- FUN_000013b8 @ 000013b8 --- */

undefined4 FUN_000013b8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_418 [1024];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_8 = FUN_0000b4f8(param_1,&DAT_0000138c);
  if (local_8 == 0) {
    FUN_0000b598(param_1);
    uVar1 = 0;
  }
  else {
    do {
      local_c = FUN_0000b640(local_8,s__s__d__d_0000138e,local_418,&local_10,&local_14);
      local_18 = local_18 + 1;
      if (local_c == 3) {
        puVar2 = (undefined4 *)FUN_00004690(0x14);
        puVar2[4] = 0;
        puVar2[2] = local_10;
        puVar2[3] = local_14;
        uVar1 = FUN_00004b18(local_418);
        puVar2[1] = uVar1;
        *puVar2 = DAT_0002a024;
        DAT_0002a024 = puVar2;
      }
      else if (local_c != -1) {
        FUN_0000b478(s_Error___s_is_bad_on_line__d_00001398,param_1,local_18);
        FUN_0000b748(local_8);
        return 0;
      }
    } while (local_c != -1);
    FUN_0000b748(local_8);
    uVar1 = 1;
  }
  return uVar1;
}



/* --- FUN_00001608 @ 00001608 --- */

int FUN_00001608(undefined2 param_1)

{
  int iVar1;
  undefined4 *local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  int local_10;
  undefined4 local_8;
  
  local_10 = FUN_00004b68(2,1,0);
  if (local_10 < 0) {
    FUN_0000b598(s_bounce__socket_serv_sock__0000150c);
    local_10 = -1;
  }
  else {
    FUN_00004bb0(&local_20,0x10);
    local_20 = 2;
    local_1c = 0;
    local_1e = FUN_00004c10(param_1);
    local_8 = 1;
    iVar1 = FUN_00004c28(local_10,1,2,&local_8,4);
    if (iVar1 < 0) {
      FUN_0000b598(s_bounce__setsockopt_serv_sock__re_00001526);
      FUN_0000b748(local_10);
      local_10 = -1;
    }
    else {
      local_8 = 1;
      iVar1 = FUN_00004c28(local_10,1,9,&local_8,4);
      if (iVar1 < 0) {
        FUN_0000b598(s_bounce__setsockopt_serv_sock__ke_0000154f);
        FUN_0000b748(local_10);
        local_10 = -1;
      }
      else {
        iVar1 = FUN_00004c80(local_10,&local_20,0x10);
        if (iVar1 < 0) {
          FUN_0000b598(s_bounce__bind_serv_sock__00001578);
          FUN_0000b748(local_10);
          local_10 = -1;
        }
        else {
          FUN_00004cc8(local_10,2);
          for (local_24 = DAT_0002a024; local_24 != (undefined4 *)0x0;
              local_24 = (undefined4 *)*local_24) {
            iVar1 = FUN_00004b68(2,1,0);
            local_24[4] = iVar1;
            if (iVar1 < 0) {
              FUN_0000b598(s_bounce__socket_init_server__00001590);
              FUN_0000b748(local_10);
              return -1;
            }
            FUN_00004bb0(&local_20,0x10);
            local_20 = 2;
            local_1c = 0;
            local_1e = FUN_00004c10(*(undefined2 *)(local_24 + 3));
            local_8 = 1;
            iVar1 = FUN_00004c28(local_24[4],1,2,&local_8,4);
            if (iVar1 < 0) {
              FUN_0000b598(s_bounce__setsockopt_init_server__000015ac);
              FUN_0000b748(local_10);
              return -1;
            }
            local_8 = 1;
            iVar1 = FUN_00004c28(local_24[4],1,9,&local_8,4);
            if (iVar1 < 0) {
              FUN_0000b598(s_bounce__setsockopt_000015cc);
              FUN_0000b748(local_10);
              return -1;
            }
            iVar1 = FUN_00004c80(local_24[4],&local_20,0x10);
            if (iVar1 < 0) {
              FUN_0000b598(s_bounce__bind_init_server__000015df);
              FUN_0000b748(local_10);
              return -1;
            }
            FUN_00004cc8(local_24[4],5);
          }
        }
      }
    }
  }
  return local_10;
}



/* --- FUN_00001918 @ 00001918 --- */

void FUN_00001918(void)

{
  undefined4 *local_8;
  
  if (-1 < DAT_0002a020) {
    FUN_0000b748(DAT_0002a020);
  }
  for (local_8 = DAT_0002a024; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
    FUN_0000b748(local_8[4]);
  }
  FUN_00004340(0);
  return;
}



/* --- FUN_00001988 @ 00001988 --- */

undefined4 FUN_00001988(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  FUN_0000b748(param_1[1]);
  if (DAT_0002a02c == param_1) {
    DAT_0002a02c = (undefined4 *)*param_1;
  }
  else {
    for (local_8 = DAT_0002a02c;
        (local_8 != (undefined4 *)0x0 && (param_1 != (undefined4 *)*local_8));
        local_8 = (undefined4 *)*local_8) {
    }
    *local_8 = *param_1;
  }
  while (param_1[4] != 0) {
    puVar1 = (undefined4 *)param_1[4];
    param_1[4] = puVar1[4];
    FUN_00005058(*puVar1);
    FUN_00005058(puVar1);
  }
  while (param_1[5] != 0) {
    puVar1 = (undefined4 *)param_1[5];
    param_1[5] = puVar1[4];
    FUN_00005058(*puVar1);
    FUN_00005058(puVar1);
  }
  FUN_00005058(param_1[8]);
  FUN_00005058(param_1[3]);
  FUN_00005058(param_1);
  return 0;
}



/* --- FUN_00001ae8 @ 00001ae8 --- */

undefined4 FUN_00001ae8(undefined4 *param_1)

{
  undefined4 *local_8;
  
  FUN_0000b748(param_1[1]);
  FUN_0000b748(param_1[2]);
  if (DAT_0002a028 == param_1) {
    DAT_0002a028 = (undefined4 *)*param_1;
  }
  else {
    for (local_8 = DAT_0002a028;
        (local_8 != (undefined4 *)0x0 && (param_1 != (undefined4 *)*local_8));
        local_8 = (undefined4 *)*local_8) {
    }
    *local_8 = *param_1;
  }
  if (param_1[4] != 0) {
    FUN_00005058(param_1[4]);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_00005058(param_1);
  }
  return 0;
}



/* --- FUN_00001bd8 @ 00001bd8 --- */

undefined4 * FUN_00001bd8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short local_30 [2];
  undefined4 local_2c [7];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0x10;
  local_8 = FUN_00005098(param_1,local_30,&local_c);
  if (local_8 < 0) {
    FUN_0000b598(s_accept_00001bac);
    FUN_0000b748(local_8);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_0000b76c(local_8,4,0x800);
    if (iVar2 == -1) {
      FUN_0000b598(s_fcntl_00001bb3);
      FUN_0000b748(local_8);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_10 = 1;
      iVar2 = FUN_00004c28(local_8,1,9,&local_10,4);
      if (iVar2 < 0) {
        FUN_0000b598(s_setsockopt_add_connection__00001bb9);
        FUN_0000b748(local_8);
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = (undefined4 *)FUN_000070f0(local_2c,4,(int)local_30[0]);
        if (puVar1 == (undefined4 *)0x0) {
          uVar4 = FUN_00007d68(local_2c[0]);
        }
        else {
          uVar4 = *puVar1;
        }
        puVar1 = (undefined4 *)FUN_00004690(0x28,uVar4);
        puVar1[1] = local_8;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[2] = 1;
        uVar3 = FUN_00004690(0x201);
        puVar1[9] = uVar3;
        puVar1[8] = uVar3;
        uVar4 = FUN_00004b18(uVar4);
        puVar1[3] = uVar4;
        *puVar1 = DAT_0002a02c;
        DAT_0002a02c = puVar1;
        FUN_00002b88(puVar1,0);
      }
    }
  }
  return puVar1;
}



/* --- FUN_00001d98 @ 00001d98 --- */

void FUN_00001d98(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_10;
  
  local_10 = FUN_00007da0(param_2);
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar1 + 0xc) < local_10) {
      if (*(int *)(iVar1 + 0xc) != 0) {
        FUN_00007dc0(param_2,*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc))
        ;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0xc);
        local_10 = local_10 - *(int *)(iVar1 + 0xc);
        param_2 = param_2 + *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
    }
    else {
      FUN_00007dc0(param_2,*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8),local_10);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + local_10;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - local_10;
      local_10 = 0;
    }
  }
  if (local_10 != 0) {
    iVar1 = local_10;
    if (local_10 < 0x400) {
      iVar1 = 0x400;
    }
    puVar2 = (undefined4 *)FUN_00004690(0x14);
    uVar3 = FUN_00004690(iVar1);
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = local_10;
    puVar2[3] = iVar1 - local_10;
    FUN_00007dc0(param_2,puVar2[1],local_10);
    puVar2[4] = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 **)(param_1 + 0x14) = puVar2;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x10) = puVar2;
    }
    *(undefined4 **)(param_1 + 0x1c) = puVar2;
  }
  return;
}



/* --- FUN_00001f28 @ 00001f28 --- */

void FUN_00001f28(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00004690(0x14);
  uVar2 = FUN_00004b18(param_2);
  *puVar1 = uVar2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 **)(param_1 + 0x10) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x10) = puVar1;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}



/* --- FUN_00001f98 @ 00001f98 --- */

undefined4 FUN_00001f98(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_14;
  char *local_10;
  
  iVar2 = FUN_0000f8b8(*(undefined4 *)(param_1 + 4),&DAT_00038730,0x3ff);
  if (iVar2 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    local_10 = *(char **)(param_1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x20);
    for (local_14 = &DAT_00038730; local_14 < &DAT_00038730 + iVar2; local_14 = local_14 + 1) {
      if (*local_14 == '\n') {
        *local_10 = '\0';
        FUN_00001f28(param_1,*(undefined4 *)(param_1 + 0x20));
        local_10 = *(char **)(param_1 + 0x20);
      }
      else if ((*local_14 == '\b') && (*(char **)(param_1 + 0x20) < local_10)) {
        local_10 = local_10 + -1;
      }
      else if (local_10 < (char *)(iVar1 + 0x1ff)) {
        iVar4 = FUN_00007f38((int)*local_14);
        if (iVar4 != 0) {
          *local_10 = *local_14;
          local_10 = local_10 + 1;
        }
      }
    }
    *(char **)(param_1 + 0x24) = local_10;
    uVar3 = 0;
  }
  return uVar3;
}



/* --- FUN_000020c8 @ 000020c8 --- */

undefined4 FUN_000020c8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  while( true ) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    iVar2 = FUN_0000f8e4(*(undefined4 *)(param_1 + 4),puVar1[1],puVar1[2]);
    if (iVar2 < 0) break;
    if (iVar2 < (int)puVar1[2]) {
      puVar1[1] = puVar1[1] + iVar2;
      puVar1[2] = puVar1[2] - iVar2;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = puVar1[4];
    FUN_00005058(*puVar1);
    FUN_00005058(puVar1);
  }
  if (DAT_0002a0a0 != 0xb) {
    return 0xffffffff;
  }
  return 0;
}



/* --- FUN_000021e8 @ 000021e8 --- */

void FUN_000021e8(void)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *local_8;
  
  do {
    bVar2 = false;
    for (local_8 = DAT_0002a02c; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if (local_8[4] != 0) {
        puVar1 = (undefined4 *)local_8[4];
        local_8[4] = puVar1[4];
        FUN_00002b88(local_8,*puVar1);
        FUN_00005058(*puVar1);
        FUN_00005058(puVar1);
        if (local_8[4] != 0) {
          bVar2 = true;
        }
      }
    }
  } while (bVar2);
  return;
}



/* --- FUN_000022d8 @ 000022d8 --- */

void FUN_000022d8(undefined4 param_1)

{
  undefined1 local_40c [1024];
  int local_c;
  undefined4 *local_8;
  
  FUN_00001d98(param_1,s_Current_nodes__0000229c);
  local_c = 1;
  for (local_8 = DAT_0002a024; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
    FUN_0000f910(local_40c,s___3d___5d__>__s__d_000022af,local_c,local_8[3],local_8[1],local_8[2]);
    FUN_00001d98(param_1,local_40c);
    local_c = local_c + 1;
  }
  if (local_c == 1) {
    FUN_00001d98(param_1,s_None_defined_000022c6);
  }
  return;
}



/* --- FUN_00002428 @ 00002428 --- */

undefined4 FUN_00002428(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)FUN_00004690(0x14);
  local_c = (undefined1 *)FUN_0000f928(param_2,0x3a);
  if (local_c == (undefined1 *)0x0) {
    FUN_00001d98(param_1,s_Invalid_format_00002383);
    uVar1 = FUN_00005058(local_8);
  }
  else {
    *local_c = 0;
    local_c = local_c + 1;
    uVar1 = FUN_000043f8(param_2);
    local_8[3] = uVar1;
    local_10 = (undefined1 *)FUN_0000f928(local_c,0x3a);
    if (local_10 == (undefined1 *)0x0) {
      FUN_00001d98(param_1,s_Invalid_format_00002383);
      uVar1 = FUN_00005058(local_8);
    }
    else {
      *local_10 = 0;
      local_10 = local_10 + 1;
      uVar1 = FUN_00004b18(local_c);
      local_8[1] = uVar1;
      uVar1 = FUN_000043f8(local_10);
      local_8[2] = uVar1;
      iVar2 = FUN_00004b68(2,1,0);
      local_8[4] = iVar2;
      if (iVar2 < 0) {
        FUN_0000b598(s_bounce___add_node__00002394);
        FUN_00001d98(param_1,s_Can_t_open_socket_000023a7);
        if (local_8[1] != 0) {
          FUN_00005058(local_8[1]);
        }
        FUN_00005058(local_8);
        uVar1 = 0;
      }
      else {
        FUN_00004bb0(&local_24,0x10);
        local_24 = 2;
        local_20 = 0;
        local_22 = FUN_00004c10(*(undefined2 *)(local_8 + 3));
        local_14 = 1;
        iVar2 = FUN_00004c28(local_8[4],1,2,&local_14,4);
        if (iVar2 < 0) {
          FUN_0000b598(s_bounce__setsockopt_init_server__000015ac);
          FUN_00001d98(param_1,s_Can_t_set_socket_option_SO_REUSE_000023bb);
          FUN_0000b748(local_8[4]);
          if (local_8[1] != 0) {
            FUN_00005058(local_8[1]);
          }
          FUN_00005058(local_8);
          uVar1 = 0;
        }
        else {
          local_14 = 1;
          iVar2 = FUN_00004c28(local_8[4],1,9,&local_14,4);
          if (iVar2 < 0) {
            FUN_0000b598(s_bounce__setsockopt_000015cc);
            FUN_00001d98(param_1,s_Can_t_set_socket_option_SO_KEEPA_000023e2);
            FUN_0000b748(local_8[4]);
            if (local_8[1] != 0) {
              FUN_00005058(local_8[1]);
            }
            FUN_00005058(local_8);
            uVar1 = 0;
          }
          else {
            iVar2 = FUN_00004c80(local_8[4],&local_24,0x10);
            if (iVar2 < 0) {
              FUN_0000b598(s_bounce__bind_init_server__000015df);
              FUN_00001d98(param_1,s_Can_t_bind_socket_00002409);
              FUN_0000b748(local_8[4]);
              if (local_8[1] != 0) {
                FUN_00005058(local_8[1]);
              }
              FUN_00005058(local_8);
              uVar1 = 0;
            }
            else {
              FUN_00004cc8(local_8[4],5);
              *local_8 = DAT_0002a024;
              DAT_0002a024 = local_8;
              uVar1 = 0;
            }
          }
        }
      }
    }
  }
  return uVar1;
}



/* --- FUN_00002788 @ 00002788 --- */

undefined4 FUN_00002788(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_8;
  
  iVar1 = FUN_000043f8(param_2);
  if (iVar1 < 1) {
    FUN_00001d98(param_1,s_Number_must_be_greater_than_zero_0000274c);
  }
  else {
    local_8 = 1;
    for (local_10 = DAT_0002a024; (local_8 < iVar1 && (local_10 != (undefined4 *)0x0));
        local_10 = (undefined4 *)*local_10) {
      local_8 = local_8 + 1;
    }
    if (local_10 == (undefined4 *)0x0) {
      FUN_00001d98(param_1,s_Node_does_not_exist_0000276f);
    }
    else {
      FUN_0000b748(local_10[4]);
      FUN_00005058(local_10[1]);
      if (DAT_0002a024 == local_10) {
        DAT_0002a024 = (undefined4 *)*local_10;
      }
      else {
        for (local_14 = DAT_0002a024;
            (local_14 != (undefined4 *)0x0 && (local_10 != (undefined4 *)*local_14));
            local_14 = (undefined4 *)*local_14) {
        }
        *local_14 = *local_10;
      }
      FUN_00005058(local_10);
    }
  }
  return 0;
}



/* --- FUN_00002918 @ 00002918 --- */

undefined4 FUN_00002918(undefined4 param_1)

{
  int local_40c;
  undefined1 local_408 [1024];
  undefined4 *local_8;
  
  FUN_00001d98(param_1,s_Current_connections__000028cc);
  local_40c = 1;
  for (local_8 = DAT_0002a028; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
    FUN_0000f910(local_408,s___3d___s___u_bytes__000028e5,local_40c,local_8[4],local_8[0x105]);
    FUN_00001d98(param_1,local_408);
    local_40c = local_40c + 1;
  }
  if (local_40c == 1) {
    FUN_00001d98(param_1,s_No_connections_000028fd);
  }
  return 0;
}



/* --- FUN_000029e8 @ 000029e8 --- */

undefined4 FUN_000029e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *local_10;
  int local_8;
  
  iVar1 = FUN_000043f8(param_2);
  if (iVar1 < 1) {
    FUN_00001d98(param_1,s_Number_must_be_greater_than_zero_0000274c);
  }
  else {
    local_8 = 1;
    for (local_10 = DAT_0002a028; (local_8 < iVar1 && (local_10 != (undefined4 *)0x0));
        local_10 = (undefined4 *)*local_10) {
      local_8 = local_8 + 1;
    }
    if (local_10 == (undefined4 *)0x0) {
      FUN_00001d98(param_1,s_Connection_does_not_exist_000029cc);
    }
    else {
      FUN_00001ae8(local_10);
    }
  }
  return 0;
}



/* --- FUN_00002b88 @ 00002b88 --- */

undefined4 FUN_00002b88(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_c [2];
  undefined1 local_a;
  int local_8;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    FUN_00001d98(param_1,s_Bounce_Control_Central_00002aac);
    FUN_00001d98(param_1,s_Copyright__c__1993_by_Robert_Zie_00002acb);
    FUN_00001d98(param_1,s_All_rights_reserved__00002af2);
    FUN_00001d98(param_1,s_Enter_control_password__00002b0b);
    FUN_00001d98(param_1,&DAT_0002a00e);
    *(undefined4 *)(param_1 + 8) = 2;
    break;
  case 2:
    FUN_00001d98(param_1,&DAT_0002a008);
    uVar1 = FUN_0000f950();
    local_8 = FUN_00008040(uVar1);
    if (local_8 == 0) {
      FUN_00001988(param_1);
    }
    else {
      FUN_00008410(local_c,*(undefined4 *)(local_8 + 4),2);
      local_a = 0;
      uVar3 = FUN_00009790(param_2,&DAT_00002b24);
      iVar2 = FUN_000043d0(s_df8buVKD4ny7g_00002b27,uVar3);
      if (iVar2 == 0) {
        FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
        *(undefined4 *)(param_1 + 8) = 3;
      }
      else {
        FUN_00001988(param_1);
      }
    }
    break;
  case 3:
    uVar3 = FUN_000043f8(param_2);
    switch(uVar3) {
    case 1:
      FUN_000022d8(param_1);
      FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
      break;
    case 2:
      FUN_00001d98(param_1,s_Enter_node_lport_rhost_rport___00002b35);
      *(undefined4 *)(param_1 + 8) = 4;
      break;
    case 3:
      FUN_000022d8(param_1);
      FUN_00001d98(param_1,s_Node_to_delete__00002b55);
      *(undefined4 *)(param_1 + 8) = 5;
      break;
    case 4:
      FUN_00002918(param_1);
      FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
      break;
    case 5:
      FUN_00002918(param_1);
      FUN_00001d98(param_1,s_Connection_to_delete__00002b68);
      *(undefined4 *)(param_1 + 8) = 6;
      break;
    case 6:
      DAT_0002a01c = 1;
      break;
    case 7:
      FUN_00001988(param_1);
      break;
    default:
      FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
    }
    break;
  case 4:
    FUN_00002428(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = 3;
    FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
    break;
  case 5:
    FUN_00002788(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = 3;
    FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
    break;
  case 6:
    FUN_000029e8(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = 3;
    FUN_00001d98(param_1,PTR_s_Valid_options__1__List_nodelist_2_0002a014);
  }
  return 0;
}



/* --- FUN_00002f98 @ 00002f98 --- */

undefined4 * FUN_00002f98(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_40;
  short local_34 [2];
  undefined4 local_30 [3];
  undefined2 local_24;
  undefined2 local_22;
  int local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = 0x10;
  local_8 = FUN_00005098(param_1,local_34,&local_10);
  if (local_8 < 0) {
    FUN_0000b598(s_accept_00001bac);
    FUN_0000b748(local_8);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_0000b76c(local_8,4,0x800);
    if (iVar2 == -1) {
      FUN_0000b598(s_fcntl_00001bb3);
      FUN_0000b748(local_8);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_14 = 1;
      iVar2 = FUN_00004c28(local_8,1,9,&local_14,4);
      if (iVar2 < 0) {
        FUN_0000b598(s_setsockopt_add_connection__00001bb9);
        FUN_0000b748(local_8);
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = (undefined4 *)FUN_000070f0(local_30,4,(int)local_34[0]);
        if (puVar1 == (undefined4 *)0x0) {
          uVar3 = FUN_00007d68(local_30[0]);
          local_40 = FUN_00004b18(uVar3);
        }
        else {
          local_40 = FUN_00004b18(*puVar1);
        }
        FUN_00004bb0(&local_24,0x10);
        local_22 = FUN_00004c10(*(undefined2 *)(param_2 + 8));
        local_20[0] = FUN_00009ff8(*(undefined4 *)(param_2 + 4));
        if (local_20[0] == -1) {
          iVar2 = FUN_00006e10(*(undefined4 *)(param_2 + 4));
          if (iVar2 == 0) {
            FUN_0000b478(s__s__unknown_host_00002f0c,*(undefined4 *)(param_2 + 4));
            FUN_0000b748(local_8);
            FUN_00005058(local_40);
            return (undefined4 *)0x0;
          }
          local_24 = *(undefined2 *)(iVar2 + 8);
          FUN_00007dc0(**(undefined4 **)(iVar2 + 0x10),local_20,*(undefined4 *)(iVar2 + 0xc));
        }
        else {
          local_24 = 2;
        }
        local_c = FUN_00004b68(2,1,0);
        if (local_c < 0) {
          FUN_0000b598(s_bounce__socket_add_connection__00002f1e);
          FUN_0000b748(local_8);
          FUN_0000b748(local_c);
          FUN_00005058(local_40);
          puVar1 = (undefined4 *)0x0;
        }
        else {
          local_14 = 1;
          iVar2 = FUN_00004c28(local_c,1,9,&local_14,4);
          if (iVar2 < 0) {
            FUN_0000b598(s_bounce__setsockopt_add_connectio_00002f3d);
            FUN_0000b748(local_8);
            FUN_0000b748(local_c);
            FUN_00005058(local_40);
            puVar1 = (undefined4 *)0x0;
          }
          else {
            iVar2 = FUN_0000a1d8(local_c,&local_24,0x10);
            if (iVar2 < 0) {
              FUN_0000b598(s_bounce__connect_00002f60);
              FUN_0000b748(local_8);
              FUN_0000b748(local_c);
              FUN_00005058(local_40);
              puVar1 = (undefined4 *)0x0;
            }
            else {
              iVar2 = FUN_0000b76c(local_c,4,0x800);
              if (iVar2 == -1) {
                FUN_0000b598(s_bounce__fcntl_add_connection__00002f70);
                FUN_0000b748(local_8);
                FUN_0000b748(local_c);
                FUN_00005058(local_40);
                puVar1 = (undefined4 *)0x0;
              }
              else {
                puVar1 = (undefined4 *)FUN_00004690(0x418);
                puVar1[4] = local_40;
                puVar1[1] = local_8;
                puVar1[2] = local_c;
                puVar1[3] = 0;
                puVar1[0x105] = 0;
                *puVar1 = DAT_0002a028;
                DAT_0002a028 = puVar1;
              }
            }
          }
        }
      }
    }
  }
  return puVar1;
}



/* --- FUN_00003388 @ 00003388 --- */

int FUN_00003388(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_c;
  int local_8;
  
  local_8 = param_4;
  while( true ) {
    if (local_8 < 1) {
      *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + local_c * 2;
      return param_4 - local_8;
    }
    local_c = FUN_0000f8e4(param_2,param_3,local_8);
    if (local_c < 1) break;
    local_8 = local_8 - local_c;
    param_3 = param_3 + local_c;
  }
  return local_c;
}



/* --- FUN_00003438 @ 00003438 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003438(void)

{
  int iVar1;
  byte *pbVar2;
  uint local_48c;
  undefined1 local_47c [1028];
  undefined4 *local_78;
  byte local_74 [32];
  byte local_54 [32];
  byte local_34 [32];
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  _DAT_00038b30 = FUN_00010848();
  _DAT_00038b30 = _DAT_00038b30 + -6;
  do {
    if (DAT_0002a01c != 0) {
      return 0;
    }
    DAT_00038b34 = DAT_0002a020;
    pbVar2 = local_34;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2 = pbVar2 + 4;
    }
    pbVar2 = local_54;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2 = pbVar2 + 4;
    }
    pbVar2 = local_74;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2 = pbVar2 + 4;
    }
    for (local_78 = DAT_0002a024; local_78 != (undefined4 *)0x0; local_78 = (undefined4 *)*local_78)
    {
      local_34[(int)local_78[4] >> 3] =
           local_34[(int)local_78[4] >> 3] | '\x01' << (local_78[4] & 7);
      local_48c = DAT_00038b34;
      if ((int)DAT_00038b34 < (int)local_78[4]) {
        local_48c = local_78[4];
      }
      DAT_00038b34 = local_48c;
    }
    for (local_8 = DAT_0002a028; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      local_34[(int)local_8[1] >> 3] = local_34[(int)local_8[1] >> 3] | '\x01' << (local_8[1] & 7);
      local_74[(int)local_8[1] >> 3] = local_74[(int)local_8[1] >> 3] | '\x01' << (local_8[1] & 7);
      local_48c = DAT_00038b34;
      if ((int)DAT_00038b34 < (int)local_8[1]) {
        local_48c = local_8[1];
      }
      local_34[(int)local_8[2] >> 3] = local_34[(int)local_8[2] >> 3] | '\x01' << (local_8[2] & 7);
      local_74[(int)local_8[2] >> 3] = local_74[(int)local_8[2] >> 3] | '\x01' << (local_8[2] & 7);
      if ((int)local_48c < (int)local_8[2]) {
        local_48c = local_8[2];
      }
      DAT_00038b34 = local_48c;
    }
    for (local_10 = DAT_0002a02c; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (local_10[4] == 0) {
        local_34[(int)local_10[1] >> 3] =
             local_34[(int)local_10[1] >> 3] | '\x01' << (local_10[1] & 7);
      }
      if (local_10[5] != 0) {
        local_54[(int)local_10[1] >> 3] =
             local_54[(int)local_10[1] >> 3] | '\x01' << (local_10[1] & 7);
      }
      local_74[(int)local_10[1] >> 3] =
           local_74[(int)local_10[1] >> 3] | '\x01' << (local_10[1] & 7);
      local_48c = DAT_00038b34;
      if ((int)DAT_00038b34 < (int)local_10[1]) {
        local_48c = local_10[1];
      }
      DAT_00038b34 = local_48c;
    }
    local_34[(int)DAT_0002a020 >> 3] =
         local_34[(int)DAT_0002a020 >> 3] | '\x01' << (DAT_0002a020 & 7);
    iVar1 = FUN_00010858(DAT_00038b34 + 1,local_34,local_54,local_74,0);
    if ((iVar1 < 0) && (DAT_0002a0a0 != 4)) {
      FUN_0000b598(s_bounce__select_0000341f);
      return 0;
    }
    if ((local_34[(int)DAT_0002a020 >> 3] >> (DAT_0002a020 & 7) & 1) != 0) {
      local_14 = FUN_00001bd8(DAT_0002a020);
      if ((local_14 != 0) && ((int)DAT_00038b34 <= *(int *)(local_14 + 4))) {
        DAT_00038b34 = *(int *)(local_14 + 4) + 1;
      }
    }
    for (local_10 = DAT_0002a02c; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if ((local_74[(int)local_10[1] >> 3] >> (local_10[1] & 7) & 1) == 0) {
        if (((local_34[(int)local_10[1] >> 3] >> (local_10[1] & 7) & 1) == 0) ||
           (iVar1 = FUN_00001f98(local_10), -1 < iVar1)) {
          if (((local_54[(int)local_10[1] >> 3] >> (local_10[1] & 7) & 1) != 0) &&
             (iVar1 = FUN_000020c8(local_10), iVar1 < 0)) {
            FUN_00001988(local_10);
          }
        }
        else {
          FUN_00001988(local_10);
        }
      }
      else {
        FUN_00001988(local_10);
      }
    }
    FUN_000021e8();
    for (local_8 = DAT_0002a028; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if (((local_74[(int)local_8[2] >> 3] >> (local_8[2] & 7) & 1) != 0) ||
         ((local_74[(int)local_8[1] >> 3] >> (local_8[1] & 7) & 1) != 0)) {
        FUN_00001ae8(local_8);
        goto LAB_00003ce8;
      }
      if ((local_34[(int)local_8[2] >> 3] >> (local_8[2] & 7) & 1) == 0) {
LAB_00003ba8:
        if ((local_34[(int)local_8[1] >> 3] >> (local_8[1] & 7) & 1) != 0) {
          iVar1 = FUN_0000f8b8(local_8[1],local_47c,0x400);
          if (iVar1 < 1) {
            if (DAT_0002a0a0 != 0xb) {
              FUN_00001ae8(local_8);
            }
          }
          else {
            iVar1 = FUN_00003388(local_8,local_8[2],local_47c,iVar1);
            if ((iVar1 < 1) && (DAT_0002a0a0 != 0xb)) {
              FUN_00001ae8(local_8);
            }
          }
        }
      }
      else {
        iVar1 = FUN_0000f8b8(local_8[2],local_47c,0x400);
        if (iVar1 < 1) {
          if (DAT_0002a0a0 == 0xb) goto LAB_00003ba8;
          FUN_00001ae8(local_8);
        }
        else {
          iVar1 = FUN_00003388(local_8,local_8[1],local_47c,iVar1);
          if ((0 < iVar1) || (DAT_0002a0a0 == 0xb)) goto LAB_00003ba8;
          FUN_00001ae8(local_8);
        }
      }
LAB_00003ce8:
    }
    for (local_78 = DAT_0002a024; local_78 != (undefined4 *)0x0; local_78 = (undefined4 *)*local_78)
    {
      if ((local_34[(int)local_78[4] >> 3] >> (local_78[4] & 7) & 1) != 0) {
        local_c = FUN_00002f98(local_78[4],local_78);
        if ((local_c != 0) && ((int)DAT_00038b34 <= *(int *)(local_c + 4))) {
          DAT_00038b34 = *(int *)(local_c + 4) + 2;
        }
      }
    }
  } while( true );
}



/* --- FUN_00003e38 @ 00003e38 --- */

void FUN_00003e38(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = FUN_00010880();
  if (iVar1 != 1) {
    FUN_00004410(0x16,1);
    FUN_00004410(0x15,1);
    FUN_00004410(0x14,1);
    iVar1 = FUN_000108a0();
    if (iVar1 < 0) {
      FUN_0000b598(&DAT_00003e22);
      FUN_00004340(1);
    }
    else if (0 < iVar1) {
      FUN_00004340(0);
    }
    uVar2 = FUN_000108c0();
    iVar1 = FUN_0000a220(0,uVar2);
    if (iVar1 == -1) {
      FUN_0000b598(s_setpgrp_00003e27);
      FUN_00004340(1);
    }
  }
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    FUN_0000b748(local_8);
  }
  DAT_0002a0a0 = 0;
  FUN_000108e0(&DAT_00003e2f);
  FUN_00010904(0);
  return;
}



/* --- FUN_00003f60 @ 00003f60 --- */

void FUN_00003f60(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_00038b3c;
  iVar2 = DAT_00038b3c;
  while (iVar2 != 0) {
    pcVar1 = (code *)*piVar3;
    piVar3 = piVar3 + 1;
    (*pcVar1)();
    iVar2 = *piVar3;
  }
  return;
}



/* --- FUN_00003f90 @ 00003f90 --- */

void FUN_00003f90(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00038b40;
  if (DAT_00038b40 == -1) {
    iVar2 = 0;
    iVar1 = DAT_00038b44;
    while (iVar1 != 0) {
      iVar2 = iVar2 + 1;
      iVar1 = (&DAT_00038b44)[iVar2];
    }
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)(&DAT_00038b40)[iVar2])();
  }
  FUN_0000a248(FUN_00003f60);
  return;
}



/* --- FUN_00003fe0 @ 00003fe0 --- */

void FUN_00003fe0(void)

{
  if (DAT_0002bd00 == 0) {
    DAT_0002bd00 = 1;
    FUN_00003f90();
  }
  return;
}



/* --- FUN_00004000 @ 00004000 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004000(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    _DAT_0002a038 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004030 @ 00004030 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004030(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    _DAT_0002a038 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004060 @ 00004060 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004060(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    _DAT_0002a038 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004090 @ 00004090 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004090(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    _DAT_0002a038 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004150 @ 00004150 --- */

void FUN_00004150(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_70 [5];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [19];
  code *local_8;
  
  if (DAT_0002bcf8 == 0) {
    pcVar3 = s_statically_linked_0000412d;
    puVar6 = local_70;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      puVar6 = puVar6 + 1;
    }
    if (0 < param_1) {
      return;
    }
    FUN_00004060(2,local_70,0x13);
  }
  else {
    local_8 = (code *)0x62f00020;
    iVar2 = FUN_00004030(s__lib_ld_so_000040b8);
    if ((iVar2 != 0) && (iVar2 = FUN_00004030(s__usr_i486_linuxaout_lib_ld_so_000040c3), iVar2 != 0)
       ) {
      pcVar3 = (char *)*param_2;
      pcVar5 = s___can_t_load_dynamic_linker___li_000040e1;
      puVar6 = local_54;
      for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      if (pcVar3 != (char *)0x0) {
        cVar1 = *pcVar3;
        while (cVar1 != '\0') {
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar3;
        }
        FUN_00004060(2,*param_2,(int)pcVar3 - *param_2);
      }
      FUN_00004060(2,local_54,0x4b);
      do {
        FUN_00004000(0x80);
      } while( true );
    }
    uVar4 = 2;
    if (param_1 < 1) {
      uVar4 = 1;
    }
    (*local_8)(uVar4,&local_5c,*param_2,param_3,&DAT_0002bcf0,&DAT_0002bce0);
    FUN_00004090(local_5c,local_58);
  }
  if (0 < param_1) {
    return;
  }
  do {
    FUN_00004000(0);
  } while( true );
}



/* --- FUN_000042c0 @ 000042c0 --- */

void FUN_000042c0(void)

{
  return;
}



/* --- FUN_00004300 @ 00004300 --- */

void FUN_00004300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (DAT_00038b48 != 0) {
    puVar2 = &DAT_00038b4c;
    do {
      (*(code *)*puVar2)(param_1,param_2,param_3);
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_00038b48);
  }
  return;
}



/* --- FUN_00004340 @ 00004340 --- */

uint FUN_00004340(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *unaff_EBX;
  int iVar5;
  byte *unaff_ESI;
  int iVar6;
  bool bVar7;
  
  for (puVar4 = (undefined4 *)PTR_DAT_0002b048; puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    iVar5 = puVar4[1] + -1;
    if (puVar4[1] != 0) {
      iVar6 = iVar5 * 0xc + 8;
      do {
        piVar1 = (int *)(iVar6 + (int)puVar4);
        iVar3 = *piVar1;
        if (iVar3 == 1) {
          (*(code *)piVar1[1])(param_1,piVar1[2]);
        }
        else if ((iVar3 != 0) && (iVar3 == 2)) {
          (*(code *)piVar1[1])();
        }
        iVar6 = iVar6 + -0xc;
        bVar7 = iVar5 != 0;
        iVar5 = iVar5 + -1;
      } while (bVar7);
    }
  }
  FUN_0000ae20();
  FUN_0000b200(param_1);
  do {
    bVar2 = *unaff_EBX;
    if (bVar2 != *unaff_ESI) {
      return -(uint)(bVar2 < *unaff_ESI) | 1;
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_ESI = unaff_ESI + 1;
  } while (bVar2 != 0);
  return 0;
}



/* --- FUN_000043d0 @ 000043d0 --- */

uint FUN_000043d0(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  do {
    bVar1 = *param_1;
    if (bVar1 != *param_2) {
      return -(uint)(bVar1 < *param_2) | 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* --- FUN_000043f8 @ 000043f8 --- */

void FUN_000043f8(undefined4 param_1)

{
  FUN_0000b218(param_1,0,10);
  return;
}



/* --- FUN_00004410 @ 00004410 --- */

undefined4 FUN_00004410(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = 0;
  local_c = 0xe0000000;
  iVar1 = FUN_0000b498(param_1,&local_14,local_24);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar2 = local_24[0];
  }
  return uVar2;
}



/* --- FUN_00004450 @ 00004450 --- */

uint FUN_00004450(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_FUN_0002a058)(param_1);
  if ((uVar1 & 0xfff) != 0) {
    iVar2 = 0x1000 - (uVar1 & 0xfff);
    (*(code *)PTR_FUN_0002a058)(iVar2);
    uVar1 = uVar1 + iVar2;
  }
  return uVar1;
}



/* --- FUN_00004490 @ 00004490 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004490(void)

{
  DAT_0002bd08 = 0x400;
  DAT_00038b80 = (undefined4 *)FUN_00004450(0x3000);
  if (DAT_00038b80 != (undefined4 *)0x0) {
    FUN_0000b6b0(DAT_00038b80,0,DAT_0002bd08 * 0xc);
    _DAT_00038bf0 = DAT_00038b80;
    *DAT_00038b80 = 0;
    _DAT_00038bf0[2] = 0;
    _DAT_00038bf0[1] = 0;
    DAT_00038b88 = 0;
    DAT_0002bd0c = 1;
    return 1;
  }
  return 0;
}



/* --- FUN_00004520 @ 00004520 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_00004450(param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = (param_1 + iVar2) - _DAT_00038bf0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    if (DAT_0002bd08 < (iVar3 >> 0xc) + 1) {
      iVar3 = DAT_0002bd08;
      while( true ) {
        iVar4 = (param_1 + iVar2) - _DAT_00038bf0;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        if ((iVar4 >> 0xc) + 1 <= iVar3) break;
        iVar3 = iVar3 * 2;
      }
      iVar4 = FUN_00004450(iVar3 * 0xc);
      if (iVar4 == 0) {
        (*(code *)PTR_FUN_0002a058)(-param_1);
        return 0;
      }
      FUN_0000b6b0(iVar4,0,iVar3 * 0xc);
      FUN_0000b700(iVar4,DAT_00038b80,DAT_0002bd08 * 0xc);
      iVar1 = DAT_00038b80;
      iVar5 = DAT_00038b80 - _DAT_00038bf0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      *(undefined4 *)(iVar4 + 0xc + (iVar5 >> 0xc) * 0xc) = 0;
      iVar5 = DAT_00038b80 - _DAT_00038bf0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      *(uint *)(iVar4 + 0x10 + (iVar5 >> 0xc) * 0xc) = DAT_0002bd08 * 0xc + 0xfffU >> 0xc;
      DAT_00038b80 = iVar4;
      FUN_00004d08(iVar1);
      DAT_0002bd08 = iVar3;
    }
    iVar3 = (param_1 + iVar2) - _DAT_00038bf0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    DAT_00038b84 = (iVar3 >> 0xc) + 1;
  }
  return iVar2;
}



/* --- FUN_00004690 @ 00004690 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00004690(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *local_24;
  int local_8;
  
  if ((DAT_0002bd0c != 0) || (iVar2 = FUN_00004490(), iVar2 != 0)) {
    iVar2 = DAT_00038b88;
    if (param_1 < 8) {
      param_1 = 8;
    }
    if (0x800 < param_1) {
      uVar4 = param_1 + 0xfff >> 0xc;
      iVar9 = DAT_00038b88;
LAB_00004a20:
      do {
        iVar8 = DAT_00038b80;
        if ((int)uVar4 <= *(int *)(DAT_00038b80 + iVar9 * 0xc)) {
          local_24 = (uint *)((iVar9 + -1) * 0x1000 + _DAT_00038bf0);
          iVar2 = iVar9 * 0xc;
          if ((int)uVar4 < *(int *)(DAT_00038b80 + iVar2)) {
            iVar7 = uVar4 + iVar9;
            iVar10 = iVar7 * 0xc;
            *(uint *)(DAT_00038b80 + iVar10) = *(int *)(DAT_00038b80 + iVar2) - uVar4;
            *(undefined4 *)(iVar8 + 4 + iVar10) = *(undefined4 *)(iVar8 + 4 + iVar2);
            *(undefined4 *)(iVar8 + 8 + iVar10) = *(undefined4 *)(iVar8 + 8 + iVar2);
            iVar10 = *(int *)(iVar8 + 8 + iVar2);
            DAT_00038b88 = iVar7;
            *(int *)(iVar8 + 8 + *(int *)(iVar8 + 4 + iVar2) * 0xc) = iVar7;
            *(int *)(iVar8 + 4 + iVar10 * 0xc) = iVar7;
          }
          else {
            iVar2 = iVar9 * 0xc;
            *(undefined4 *)(DAT_00038b80 + 8 + *(int *)(DAT_00038b80 + 4 + iVar2) * 0xc) =
                 *(undefined4 *)(DAT_00038b80 + 8 + iVar2);
            DAT_00038b88 = *(int *)(iVar8 + 4 + iVar2);
            *(int *)(iVar8 + 4 + *(int *)(iVar8 + 8 + iVar2) * 0xc) = DAT_00038b88;
          }
          iVar9 = iVar9 * 3;
LAB_00004af9:
          iVar2 = DAT_00038b80;
          *(undefined4 *)(DAT_00038b80 + iVar9 * 4) = 0;
          *(uint *)(iVar2 + 4 + iVar9 * 4) = uVar4;
          return local_24;
        }
        iVar9 = *(int *)(DAT_00038b80 + 4 + iVar9 * 0xc);
      } while (iVar2 != iVar9);
      iVar8 = *(int *)(DAT_00038b80 + *(int *)(DAT_00038b80 + 8) * 0xc);
      if (((DAT_00038b84 != 0) &&
          (iVar9 = iVar8 + *(int *)(DAT_00038b80 + 8), DAT_00038b84 == iVar9)) &&
         (iVar10 = (*(code *)PTR_FUN_0002a058)(0), iVar10 == (iVar9 + -1) * 0x1000 + _DAT_00038bf0))
      {
        iVar8 = uVar4 - iVar8;
        iVar9 = FUN_00004520(iVar8 * 0x1000);
        if (iVar9 != 0) {
          iVar9 = *(int *)(DAT_00038b80 + 8);
          piVar5 = (int *)(DAT_00038b80 + iVar9 * 0xc);
          *piVar5 = *piVar5 + iVar8;
          goto LAB_00004a20;
        }
      }
      local_24 = (uint *)FUN_00004520(uVar4 << 0xc);
      if (local_24 == (uint *)0x0) {
        return (uint *)0x0;
      }
      iVar2 = (int)local_24 - _DAT_00038bf0;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      iVar9 = (iVar2 >> 0xc) * 3 + 3;
      goto LAB_00004af9;
    }
    param_1 = param_1 - 1;
    local_8 = 1;
    while (param_1 = param_1 >> 1, param_1 != 0) {
      local_8 = local_8 + 1;
    }
    puVar3 = *(uint **)(&DAT_00038b90 + local_8 * 8);
    bVar6 = (byte)local_8;
    if (puVar3 != (uint *)0x0) {
      *(uint *)puVar3[1] = *puVar3;
      if (*puVar3 != 0) {
        *(uint *)(*puVar3 + 4) = puVar3[1];
      }
      iVar9 = DAT_00038b80;
      iVar2 = (int)puVar3 - _DAT_00038bf0;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      iVar2 = ((iVar2 >> 0xc) * 3 + 3) * 4;
      piVar5 = (int *)(DAT_00038b80 + 4 + iVar2);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 != 0) {
        *(uint *)(iVar9 + 8 + iVar2) = (*puVar3 & 0xfff) >> (bVar6 & 0x1f);
        return puVar3;
      }
      return puVar3;
    }
    puVar3 = (uint *)FUN_00004690(0x1000);
    if (puVar3 != (uint *)0x0) {
      (&DAT_00038b50)[local_8] = (&DAT_00038b50)[local_8] + 1;
      iVar10 = 1 << (bVar6 & 0x1f);
      puVar11 = (undefined4 *)(iVar10 + (int)puVar3);
      *puVar11 = 0;
      iVar2 = local_8 * 8;
      puVar1 = &DAT_00038b90 + iVar2;
      puVar11[1] = puVar1;
      *(undefined4 **)(&DAT_00038b90 + iVar2) = puVar11;
      iVar8 = 2;
      iVar9 = 0x1000 >> (bVar6 & 0x1f);
      if (2 < iVar9) {
        uVar4 = iVar9 - 2U & 3;
        if (uVar4 != 0) {
          if (1 < uVar4) {
            if (2 < uVar4) {
              piVar5 = (int *)((2 << (bVar6 & 0x1f)) + (int)puVar3);
              *piVar5 = iVar10 + (int)puVar3;
              piVar5[1] = (int)puVar1;
              *(int **)(&DAT_00038b90 + iVar2) = piVar5;
              *(int **)(*piVar5 + 4) = piVar5;
              iVar8 = 3;
            }
            piVar5 = (int *)((iVar8 << (bVar6 & 0x1f)) + (int)puVar3);
            *piVar5 = *(int *)(&DAT_00038b90 + iVar2);
            piVar5[1] = (int)puVar1;
            *(int **)(&DAT_00038b90 + iVar2) = piVar5;
            *(int **)(*piVar5 + 4) = piVar5;
            iVar8 = iVar8 + 1;
          }
          piVar5 = (int *)((iVar8 << (bVar6 & 0x1f)) + (int)puVar3);
          *piVar5 = *(int *)(&DAT_00038b90 + iVar2);
          piVar5[1] = (int)puVar1;
          *(int **)(&DAT_00038b90 + iVar2) = piVar5;
          *(int **)(*piVar5 + 4) = piVar5;
          iVar8 = iVar8 + 1;
          if (iVar9 <= iVar8) goto LAB_00004905;
        }
        do {
          piVar5 = (int *)((iVar8 << (bVar6 & 0x1f)) + (int)puVar3);
          *piVar5 = *(int *)(&DAT_00038b90 + iVar2);
          piVar5[1] = (int)puVar1;
          *(int **)(&DAT_00038b90 + iVar2) = piVar5;
          *(int **)(*piVar5 + 4) = piVar5;
          piVar5 = (int *)((iVar8 + 1 << (bVar6 & 0x1f)) + (int)puVar3);
          *piVar5 = *(int *)(&DAT_00038b90 + iVar2);
          piVar5[1] = (int)puVar1;
          *(int **)(&DAT_00038b90 + iVar2) = piVar5;
          *(int **)(*piVar5 + 4) = piVar5;
          piVar5 = (int *)((iVar8 + 2 << (bVar6 & 0x1f)) + (int)puVar3);
          *piVar5 = *(int *)(&DAT_00038b90 + iVar2);
          piVar5[1] = (int)puVar1;
          *(int **)(&DAT_00038b90 + iVar2) = piVar5;
          *(int **)(*piVar5 + 4) = piVar5;
          piVar5 = (int *)((iVar8 + 3 << (bVar6 & 0x1f)) + (int)puVar3);
          *piVar5 = *(int *)(&DAT_00038b90 + iVar2);
          piVar5[1] = (int)puVar1;
          *(int **)(&DAT_00038b90 + iVar2) = piVar5;
          *(int **)(*piVar5 + 4) = piVar5;
          iVar8 = iVar8 + 4;
        } while (iVar8 < iVar9);
      }
LAB_00004905:
      iVar9 = DAT_00038b80;
      iVar2 = (int)puVar3 - _DAT_00038bf0;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      iVar2 = ((iVar2 >> 0xc) * 3 + 3) * 4;
      *(int *)(DAT_00038b80 + iVar2) = local_8;
      *(int *)(iVar9 + 4 + iVar2) = iVar8 + -1;
      *(int *)(iVar9 + 8 + iVar2) = iVar8 + -1;
      return puVar3;
    }
  }
  return (uint *)0x0;
}



/* --- FUN_00004b18 @ 00004b18 --- */

int FUN_00004b18(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_00004690(~uVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_0000b700(iVar2,param_1,~uVar3);
  }
  return iVar2;
}



/* --- FUN_00004b68 @ 00004b68 --- */

int FUN_00004b68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,param_2,param_3);
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004bb0 @ 00004bb0 --- */

void FUN_00004bb0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  if (0 < (int)param_2) {
    if (0xb < (int)param_2) {
      uVar1 = -(int)param_1 & 3;
      param_2 = param_2 - uVar1;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)param_1 = 0;
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_1 = 0;
        param_1 = param_1 + 1;
      }
      param_2 = param_2 & 3;
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}



/* --- FUN_00004bf0 @ 00004bf0 --- */

undefined4 FUN_00004bf0(undefined4 param_1)

{
  return CONCAT31(CONCAT21(CONCAT11((char)param_1,(char)((uint)param_1 >> 8)),
                           (char)((uint)param_1 >> 0x10)),(char)((uint)param_1 >> 0x18));
}



/* --- FUN_00004c10 @ 00004c10 --- */

undefined2 FUN_00004c10(undefined2 param_1)

{
  return CONCAT11((char)param_1,(char)((ushort)param_1 >> 8));
}



/* --- FUN_00004c28 @ 00004c28 --- */

int FUN_00004c28(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004c80 @ 00004c80 --- */

int FUN_00004c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,param_2,param_3);
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004cc8 @ 00004cc8 --- */

int FUN_00004cc8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,param_2);
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00004d08 @ 00004d08 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004d08(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = DAT_00038b80;
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar8 = (int)param_1 - _DAT_00038bf0;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xfff;
  }
  iVar8 = iVar8 >> 0xc;
  iVar9 = iVar8 + 1;
  iVar3 = *(int *)(DAT_00038b80 + iVar9 * 0xc);
  if (iVar3 == 0) {
    iVar8 = DAT_00038b88;
    if (iVar9 < DAT_00038b88) {
      do {
        iVar8 = *(int *)(DAT_00038b80 + 8 + iVar8 * 0xc);
      } while (iVar9 < iVar8);
    }
    else {
      do {
        iVar8 = *(int *)(DAT_00038b80 + 4 + iVar8 * 0xc);
        if (iVar8 < 1) break;
      } while (iVar8 < iVar9);
      iVar8 = *(int *)(DAT_00038b80 + 8 + iVar8 * 0xc);
    }
    if (iVar9 == iVar8 + *(int *)(DAT_00038b80 + iVar8 * 0xc)) {
      piVar1 = (int *)(DAT_00038b80 + iVar8 * 0xc);
      *piVar1 = *piVar1 + *(int *)(DAT_00038b80 + 4 + iVar9 * 0xc);
      iVar9 = iVar8;
    }
    else {
      iVar3 = iVar9 * 0xc;
      *(undefined4 *)(DAT_00038b80 + iVar3) = *(undefined4 *)(DAT_00038b80 + 4 + iVar3);
      *(undefined4 *)(iVar7 + 4 + iVar3) = *(undefined4 *)(iVar7 + 4 + iVar8 * 0xc);
      *(int *)(iVar7 + 8 + iVar3) = iVar8;
      *(int *)(iVar7 + 4 + iVar8 * 0xc) = iVar9;
      *(int *)(iVar7 + 8 + *(int *)(iVar7 + 4 + iVar3) * 0xc) = iVar9;
    }
    iVar8 = DAT_00038b80;
    iVar7 = iVar9 * 0xc;
    iVar3 = iVar9 + *(int *)(DAT_00038b80 + iVar7);
    if (*(int *)(DAT_00038b80 + 4 + iVar7) == iVar3) {
      *(int *)(DAT_00038b80 + iVar7) =
           *(int *)(DAT_00038b80 + iVar7) + *(int *)(DAT_00038b80 + iVar3 * 0xc);
      iVar3 = *(int *)(iVar8 + 4 + *(int *)(iVar8 + 4 + iVar7) * 0xc);
      *(int *)(iVar8 + 4 + iVar7) = iVar3;
      *(int *)(iVar8 + 8 + iVar3 * 0xc) = iVar9;
    }
    iVar8 = iVar9 * 0xc;
    iVar7 = *(int *)(DAT_00038b80 + iVar8);
    if (iVar7 < 8) {
      DAT_00038b88 = iVar9;
      return;
    }
    if (DAT_00038b84 != iVar7 + iVar9) {
      DAT_00038b88 = iVar9;
      return;
    }
    iVar3 = (*(code *)PTR_FUN_0002a058)(0);
    if (iVar3 != (iVar7 + iVar9 + -1) * 0x1000 + _DAT_00038bf0) {
      DAT_00038b88 = iVar9;
      return;
    }
    DAT_00038b84 = DAT_00038b84 - iVar7;
    (*(code *)PTR_FUN_0002a058)(iVar7 * -0x1000);
    iVar7 = DAT_00038b80;
    *(undefined4 *)(DAT_00038b80 + 4 + *(int *)(DAT_00038b80 + 8 + iVar8) * 0xc) =
         *(undefined4 *)(DAT_00038b80 + 4 + iVar8);
    *(undefined4 *)(iVar7 + 8 + *(int *)(iVar7 + 4 + iVar8) * 0xc) =
         *(undefined4 *)(iVar7 + 8 + iVar8);
    DAT_00038b88 = *(undefined4 *)(iVar7 + 8 + iVar8);
    return;
  }
  bVar5 = (byte)iVar3;
  piVar1 = (int *)(iVar8 * 0x1000 + _DAT_00038bf0 +
                  (*(int *)(DAT_00038b80 + 8 + iVar9 * 0xc) << (bVar5 & 0x1f)));
  iVar2 = 0x1000 >> (bVar5 & 0x1f);
  if ((*(uint *)(DAT_00038b80 + 4 + iVar9 * 0xc) != iVar2 - 1U) || ((int)(&DAT_00038b50)[iVar3] < 2)
     ) {
    if (*(int *)(DAT_00038b80 + 4 + iVar9 * 0xc) != 0) {
      *param_1 = *piVar1;
      param_1[1] = (int)piVar1;
      *piVar1 = (int)param_1;
      if (*param_1 != 0) {
        *(int **)(*param_1 + 4) = param_1;
      }
      piVar1 = (int *)(DAT_00038b80 + 4 + iVar9 * 0xc);
      *piVar1 = *piVar1 + 1;
      return;
    }
    *(undefined4 *)(DAT_00038b80 + 4 + iVar9 * 0xc) = 1;
    *(uint *)(iVar7 + 8 + iVar9 * 0xc) = ((uint)param_1 & 0xfff) >> (bVar5 & 0x1f);
    iVar3 = iVar3 * 8;
    *param_1 = *(int *)(&DAT_00038b90 + iVar3);
    param_1[1] = (int)(&DAT_00038b90 + iVar3);
    *(int **)(&DAT_00038b90 + iVar3) = param_1;
    if (*param_1 == 0) {
      return;
    }
    *(int **)(*param_1 + 4) = param_1;
    return;
  }
  (&DAT_00038b50)[iVar3] = (&DAT_00038b50)[iVar3] + -1;
  iVar7 = 1;
  piVar6 = piVar1;
  if (1 < iVar2) {
    uVar4 = iVar2 - 1U & 3;
    if (uVar4 != 0) {
      if (1 < uVar4) {
        if (2 < uVar4) {
          piVar6 = (int *)*piVar1;
          iVar7 = 2;
        }
        piVar6 = (int *)*piVar6;
        iVar7 = iVar7 + 1;
      }
      piVar6 = (int *)*piVar6;
      iVar7 = iVar7 + 1;
      if (iVar2 <= iVar7) goto LAB_00004f74;
    }
    do {
      piVar6 = *(int **)**(undefined4 **)*piVar6;
      iVar7 = iVar7 + 4;
    } while (iVar7 < iVar2);
  }
LAB_00004f74:
  *(int **)piVar1[1] = piVar6;
  if (piVar6 != (int *)0x0) {
    piVar6[1] = piVar1[1];
  }
  iVar7 = DAT_00038b80;
  *(undefined4 *)(DAT_00038b80 + iVar9 * 0xc) = 0;
  *(undefined4 *)(iVar7 + 4 + iVar9 * 0xc) = 1;
  FUN_00005058(iVar8 * 0x1000 + _DAT_00038bf0);
  return;
}



/* --- FUN_00005058 @ 00005058 --- */

void FUN_00005058(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0002a060;
  if (param_1 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_1) {
        puVar1[1] = 0;
        param_1 = puVar1[2];
        break;
      }
    }
    FUN_00004d08(param_1);
  }
  return;
}



/* --- FUN_00005098 @ 00005098 --- */

int FUN_00005098(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,param_2,param_3);
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00005110 @ 00005110 --- */

void FUN_00005110(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *local_8;
  
  iVar5 = 0;
  if (0 < DAT_0002a090) {
    local_8 = &DAT_0002cdb8;
    do {
      uVar3 = 0xffffffff;
      pcVar6 = (char *)*local_8;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar3 - 1;
      uVar3 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (iVar4 < (int)(~uVar3 - 1)) {
        iVar2 = FUN_0000b798(param_1 + ((~uVar3 - 1) - iVar4),(char *)*local_8);
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
          pcVar6 = param_1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          param_1[(~uVar3 - 1) - iVar4] = '\0';
        }
      }
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0002a090);
  }
  return;
}



/* --- FUN_000051b0 @ 000051b0 --- */

undefined4 * FUN_000051b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0002a090 != 0) {
    FUN_00005110(*param_1);
    iVar3 = 0;
    piVar1 = (int *)param_1[1];
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      FUN_00005110(piVar1[iVar3]);
      iVar3 = iVar3 + 1;
      piVar1 = (int *)param_1[1];
      iVar2 = piVar1[iVar3];
    }
  }
  return param_1;
}



/* --- FUN_00005200 @ 00005200 --- */

void FUN_00005200(int param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint local_158;
  undefined1 local_150 [4];
  uint local_14c;
  undefined1 *local_148;
  undefined1 local_144 [320];
  
  if (DAT_0002a094 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_0002a094 != 0xffffffff) goto LAB_000054b1;
  iVar3 = FUN_00004b68(2,1,0);
  if (iVar3 == -1) {
    return;
  }
  local_14c = 0x140;
  local_148 = local_144;
  iVar4 = FUN_000146e0(iVar3,0x8912,&local_14c);
  puVar7 = local_148;
  if (iVar4 == -1) {
    return;
  }
  local_158 = local_14c >> 5;
  DAT_0002be00 = &DAT_0002bd10;
  if (local_158 != 0) {
    if ((local_158 & 1) != 0) {
      FUN_0000b828(&DAT_0002bd10,local_148);
      iVar4 = FUN_000146e0(iVar3,0x891b,puVar7);
      if ((iVar4 != -1) && (*(short *)(puVar7 + 0x10) == 2)) {
        uVar5 = *(uint *)(puVar7 + 0x14);
        iVar4 = FUN_000146e0(iVar3,0x8915,puVar7);
        puVar2 = DAT_0002be00;
        if ((iVar4 != -1) &&
           ((*(short *)(puVar7 + 0x10) == 2 &&
            (uVar6 = uVar5 & *(uint *)(puVar7 + 0x14), uVar6 != 0)))) {
          *(uint *)(DAT_0002be00 + 0x10) = uVar6;
          *(uint *)(puVar2 + 0x14) = uVar5;
          if (DAT_0002a094 == 0xffffffff) {
            DAT_0002a094 = 0;
          }
          DAT_0002be00 = DAT_0002be00 + 0x18;
          DAT_0002a094 = DAT_0002a094 + 1;
        }
      }
      puVar7 = puVar7 + 0x20;
      local_158 = local_158 - 1;
      if (local_158 == 0) goto LAB_00005495;
    }
    do {
      FUN_0000b828(DAT_0002be00,puVar7);
      iVar4 = FUN_000146e0(iVar3,0x891b,puVar7);
      if ((iVar4 != -1) && (*(short *)(puVar7 + 0x10) == 2)) {
        uVar5 = *(uint *)(puVar7 + 0x14);
        iVar4 = FUN_000146e0(iVar3,0x8915,puVar7);
        puVar2 = DAT_0002be00;
        if ((iVar4 != -1) &&
           ((*(short *)(puVar7 + 0x10) == 2 &&
            (uVar6 = uVar5 & *(uint *)(puVar7 + 0x14), uVar6 != 0)))) {
          *(uint *)(DAT_0002be00 + 0x10) = uVar6;
          *(uint *)(puVar2 + 0x14) = uVar5;
          if (DAT_0002a094 == 0xffffffff) {
            DAT_0002a094 = 0;
          }
          DAT_0002be00 = DAT_0002be00 + 0x18;
          DAT_0002a094 = DAT_0002a094 + 1;
        }
      }
      puVar1 = puVar7 + 0x20;
      FUN_0000b828(DAT_0002be00,puVar1);
      iVar4 = FUN_000146e0(iVar3,0x891b,puVar1);
      if ((iVar4 != -1) && (*(short *)(puVar7 + 0x30) == 2)) {
        uVar5 = *(uint *)(puVar7 + 0x34);
        iVar4 = FUN_000146e0(iVar3,0x8915,puVar1);
        puVar2 = DAT_0002be00;
        if ((iVar4 != -1) &&
           ((*(short *)(puVar7 + 0x30) == 2 &&
            (uVar6 = uVar5 & *(uint *)(puVar7 + 0x34), uVar6 != 0)))) {
          *(uint *)(DAT_0002be00 + 0x10) = uVar6;
          *(uint *)(puVar2 + 0x14) = uVar5;
          if (DAT_0002a094 == 0xffffffff) {
            DAT_0002a094 = 0;
          }
          DAT_0002be00 = DAT_0002be00 + 0x18;
          DAT_0002a094 = DAT_0002a094 + 1;
        }
      }
      puVar7 = puVar7 + 0x40;
      local_158 = local_158 - 2;
    } while (local_158 != 0);
  }
LAB_00005495:
  FUN_0000b748(iVar3);
  if (DAT_0002a094 == 0) {
    return;
  }
LAB_000054b1:
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 != (int *)0x0) {
    do {
      if (*piVar8 == 0) {
        return;
      }
      DAT_0002be00 = &DAT_0002bd10;
      if (DAT_0002a094 != 0) {
        uVar5 = DAT_0002a094;
        if ((DAT_0002a094 & 1) != 0) {
          if (DAT_0002bd20 == (*(uint *)*piVar8 & DAT_0002bd24)) {
LAB_00005535:
            FUN_00007dc0(**(undefined4 **)(param_1 + 0x10),local_150,4);
            FUN_00007dc0(*piVar8,**(undefined4 **)(param_1 + 0x10),4);
            FUN_00007dc0(local_150,*piVar8,4);
            return;
          }
          DAT_0002be00 = &DAT_0002bd28;
          uVar5 = DAT_0002a094 - 1;
          if (uVar5 == 0) goto LAB_0000557c;
        }
        do {
          puVar2 = DAT_0002be00;
          if ((*(uint *)(DAT_0002be00 + 0x10) == (*(uint *)*piVar8 & *(uint *)(DAT_0002be00 + 0x14))
              ) || (DAT_0002be00 = DAT_0002be00 + 0x18,
                   *(uint *)(puVar2 + 0x28) == (*(uint *)*piVar8 & *(uint *)(puVar2 + 0x2c))))
          goto LAB_00005535;
          DAT_0002be00 = puVar2 + 0x30;
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
LAB_0000557c:
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)0x0);
  }
  return;
}



/* --- FUN_00005760 @ 00005760 --- */

void FUN_00005760(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  char *local_414;
  undefined *local_410;
  int local_408;
  byte local_404 [5];
  byte local_3ff;
  byte local_3fd;
  
  local_408 = 0;
  local_410 = &DAT_0002cdc8;
  FUN_0000b860();
  local_414 = (char *)FUN_0000b890(s_RESOLV_HOST_CONF_00005592);
  if (local_414 == (char *)0x0) {
    local_414 = s__etc_host_conf_000055a3;
  }
  iVar3 = FUN_0000b4f8(local_414,&DAT_000055b2);
  if (iVar3 == 0) {
    DAT_0002c838 = 1;
    DAT_0002c83c = 0;
  }
  else {
LAB_000057ec:
    iVar6 = FUN_000155a0(local_404,0x400,iVar3);
    if (iVar6 != 0) {
      puVar4 = (undefined1 *)FUN_00015600(local_404,10);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      if (local_404[0] != 0x23) {
        pbVar9 = local_404;
        bVar2 = local_404[0];
        while ((bVar2 != 0 && ((PTR_DAT_0002b058[(uint)*pbVar9 * 2] & 0x10) != 0))) {
          pbVar9 = pbVar9 + 1;
          if (pbVar9 == (byte *)0x0) goto LAB_000057ec;
          bVar2 = *pbVar9;
        }
        if ((pbVar9 != (byte *)0x0) && (*pbVar9 != 0)) {
          FUN_0000b828(local_404,pbVar9);
          iVar6 = FUN_0000b8f8(local_404,s_order_000055b4,5);
          if ((iVar6 == 0) &&
             ((local_3ff == 0 || ((PTR_DAT_0002b058[(uint)local_3ff * 2] & 0x10) != 0)))) {
            pcVar7 = (char *)FUN_0000ba50(local_404,&DAT_000055ba);
            if ((pcVar7 != (char *)0x0) && (pcVar7[1] != '\0')) {
              puVar11 = &DAT_0002c838 + local_408;
              do {
                for (; (*pcVar7 == ' ' || (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1) {
                }
                puVar4 = (undefined1 *)FUN_0000ba50(pcVar7,&DAT_000055ef);
                if (puVar4 != (undefined1 *)0x0) {
                  *puVar4 = 0;
                }
                iVar6 = FUN_0000b8f8(pcVar7,&DAT_000055f4,4);
                if ((iVar6 == 0) &&
                   ((pcVar7[4] == '\0' ||
                    ((PTR_DAT_0002b058[(uint)(byte)pcVar7[4] * 2] & 0x10) != 0)))) {
                  *puVar11 = 1;
LAB_000059cf:
                  puVar11 = puVar11 + 1;
                  local_408 = local_408 + 1;
                }
                else {
                  iVar6 = FUN_0000b8f8(pcVar7,s_hosts_000055f9,5);
                  if ((iVar6 == 0) &&
                     ((pcVar7[5] == '\0' ||
                      ((PTR_DAT_0002b058[(uint)(byte)pcVar7[5] * 2] & 0x10) != 0)))) {
                    *puVar11 = 2;
                    goto LAB_000059cf;
                  }
                  iVar6 = FUN_0000b8f8(pcVar7,&DAT_000055ff,3);
                  if ((iVar6 == 0) &&
                     ((pcVar7[3] == '\0' ||
                      ((PTR_DAT_0002b058[(uint)(byte)pcVar7[3] * 2] & 0x10) != 0)))) {
                    *puVar11 = 3;
                    goto LAB_000059cf;
                  }
                  uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xc,
                                       s_resolv____s____s__command_incorr_000055bd,local_414,
                                       s_order_000055b4);
                  FUN_00012f18(&DAT_0002b110,uVar5);
                  uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xd,
                                       s_resolv_____s__is_an_invalid_keyw_00005603,pcVar7);
                  FUN_00012f18(&DAT_0002b110,uVar5);
                  uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xe,
                                       s_resolv___valid_keywords_are___s__00005628,&DAT_000055f4,
                                       s_hosts_000055f9,&DAT_000055ff);
                  FUN_00012f18(&DAT_0002b110,uVar5);
                }
              } while ((puVar4 != (undefined1 *)0x0) && (pcVar7 = puVar4 + 1, pcVar7 != (char *)0x0)
                      );
              if (local_408 == 0) {
                uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xc,
                                     s_resolv____s____s__command_incorr_000055bd,local_414,
                                     s_order_000055b4);
                FUN_00012f18(&DAT_0002b110,uVar5);
                uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xf,
                                     s_resolv___search_order_not_specif_00005654);
                FUN_00012f18(&DAT_0002b110,uVar5);
              }
              goto LAB_000057ec;
            }
            pcVar7 = s_order_000055b4;
          }
          else {
            iVar6 = FUN_0000b8f8(local_404,s_multi_000056ad,5);
            if ((iVar6 == 0) &&
               ((local_3ff == 0 || ((PTR_DAT_0002b058[(uint)local_3ff * 2] & 0x10) != 0)))) {
              pbVar9 = (byte *)FUN_0000ba50(local_404,&DAT_000055ba);
              if (pbVar9 != (byte *)0x0) {
                bVar2 = *pbVar9;
                while ((bVar2 != 0 && ((PTR_DAT_0002b058[(uint)*pbVar9 * 2] & 0x10) != 0))) {
                  pbVar9 = pbVar9 + 1;
                  if (pbVar9 == (byte *)0x0) goto LAB_00005c40;
                  bVar2 = *pbVar9;
                }
                if ((pbVar9 != (byte *)0x0) && (*pbVar9 != 0)) {
                  iVar6 = -1;
                  pbVar10 = pbVar9;
                  do {
                    if (iVar6 == 0) break;
                    iVar6 = iVar6 + -1;
                    bVar2 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                  } while (bVar2 != 0);
                  if (((iVar6 == -4) && (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b3,2), iVar6 == 0))
                     && ((pbVar9[2] == 0 || ((PTR_DAT_0002b058[(uint)pbVar9[2] * 2] & 0x10) != 0))))
                  {
                    DAT_0002a080 = 1;
                  }
                  else {
                    iVar6 = -1;
                    pbVar10 = pbVar9;
                    do {
                      if (iVar6 == 0) break;
                      iVar6 = iVar6 + -1;
                      bVar2 = *pbVar10;
                      pbVar10 = pbVar10 + 1;
                    } while (bVar2 != 0);
                    if (((iVar6 == -5) && (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b6,3), iVar6 == 0)
                        ) && ((pbVar9[3] == 0 ||
                              ((PTR_DAT_0002b058[(uint)pbVar9[3] * 2] & 0x10) != 0)))) {
                      DAT_0002a080 = 0;
                    }
                    else {
                      pcVar7 = s_multi_000056ad;
LAB_00006085:
                      uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xc,
                                           s_resolv____s____s__command_incorr_000055bd,local_414,
                                           pcVar7);
                      FUN_00012f18(&DAT_0002b110,uVar5);
                      uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xd,
                                           s_resolv_____s__is_an_invalid_keyw_00005603,pbVar9);
                      FUN_00012f18(&DAT_0002b110,uVar5);
                    }
                  }
                  goto LAB_000057ec;
                }
              }
LAB_00005c40:
              pcVar7 = s_multi_000056ad;
            }
            else {
              iVar6 = FUN_0000b8f8(local_404,s_nospoof_000056ba,7);
              if ((iVar6 == 0) &&
                 ((local_3fd == 0 || ((PTR_DAT_0002b058[(uint)local_3fd * 2] & 0x10) != 0)))) {
                pbVar9 = (byte *)FUN_0000ba50(local_404,&DAT_000055ba);
                if (pbVar9 != (byte *)0x0) {
                  bVar2 = *pbVar9;
                  while ((bVar2 != 0 && ((PTR_DAT_0002b058[(uint)*pbVar9 * 2] & 0x10) != 0))) {
                    pbVar9 = pbVar9 + 1;
                    if (pbVar9 == (byte *)0x0) goto LAB_00005db0;
                    bVar2 = *pbVar9;
                  }
                  if ((pbVar9 != (byte *)0x0) && (*pbVar9 != 0)) {
                    iVar6 = -1;
                    pbVar10 = pbVar9;
                    do {
                      if (iVar6 == 0) break;
                      iVar6 = iVar6 + -1;
                      bVar2 = *pbVar10;
                      pbVar10 = pbVar10 + 1;
                    } while (bVar2 != 0);
                    if (((iVar6 == -4) && (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b3,2), iVar6 == 0)
                        ) && ((pbVar9[2] == 0 ||
                              ((PTR_DAT_0002b058[(uint)pbVar9[2] * 2] & 0x10) != 0)))) {
                      DAT_0002a084 = 1;
                    }
                    else {
                      iVar6 = -1;
                      pbVar10 = pbVar9;
                      do {
                        if (iVar6 == 0) break;
                        iVar6 = iVar6 + -1;
                        bVar2 = *pbVar10;
                        pbVar10 = pbVar10 + 1;
                      } while (bVar2 != 0);
                      if (((iVar6 != -5) ||
                          (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b6,3), iVar6 != 0)) ||
                         ((pbVar9[3] != 0 && ((PTR_DAT_0002b058[(uint)pbVar9[3] * 2] & 0x10) == 0)))
                         ) {
                        pcVar7 = s_nospoof_000056ba;
                        goto LAB_00006085;
                      }
                      DAT_0002a084 = 0;
                    }
                    goto LAB_000057ec;
                  }
                }
LAB_00005db0:
                pcVar7 = s_nospoof_000056ba;
              }
              else {
                iVar6 = FUN_0000b8f8(local_404,s_alert_000056c2,5);
                if ((iVar6 == 0) &&
                   ((local_3ff == 0 || ((PTR_DAT_0002b058[(uint)local_3ff * 2] & 0x10) != 0)))) {
                  pbVar9 = (byte *)FUN_0000ba50(local_404,&DAT_000055ba);
                  if (pbVar9 != (byte *)0x0) {
                    bVar2 = *pbVar9;
                    while ((bVar2 != 0 && ((PTR_DAT_0002b058[(uint)*pbVar9 * 2] & 0x10) != 0))) {
                      pbVar9 = pbVar9 + 1;
                      if (pbVar9 == (byte *)0x0) goto LAB_00005f20;
                      bVar2 = *pbVar9;
                    }
                    if ((pbVar9 != (byte *)0x0) && (*pbVar9 != 0)) {
                      iVar6 = -1;
                      pbVar10 = pbVar9;
                      do {
                        if (iVar6 == 0) break;
                        iVar6 = iVar6 + -1;
                        bVar2 = *pbVar10;
                        pbVar10 = pbVar10 + 1;
                      } while (bVar2 != 0);
                      if (((iVar6 == -4) &&
                          (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b3,2), iVar6 == 0)) &&
                         ((pbVar9[2] == 0 || ((PTR_DAT_0002b058[(uint)pbVar9[2] * 2] & 0x10) != 0)))
                         ) {
                        DAT_0002a088 = 1;
                      }
                      else {
                        iVar6 = -1;
                        pbVar10 = pbVar9;
                        do {
                          if (iVar6 == 0) break;
                          iVar6 = iVar6 + -1;
                          bVar2 = *pbVar10;
                          pbVar10 = pbVar10 + 1;
                        } while (bVar2 != 0);
                        if (((iVar6 != -5) ||
                            (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b6,3), iVar6 != 0)) ||
                           ((pbVar9[3] != 0 && ((PTR_DAT_0002b058[(uint)pbVar9[3] * 2] & 0x10) == 0)
                            ))) {
                          pcVar7 = s_alert_000056c2;
                          goto LAB_00006085;
                        }
                        DAT_0002a088 = 0;
                      }
                      goto LAB_000057ec;
                    }
                  }
LAB_00005f20:
                  pcVar7 = s_alert_000056c2;
                }
                else {
                  iVar6 = FUN_0000b8f8(local_404,s_reorder_000056c8,7);
                  if ((iVar6 == 0) &&
                     ((local_3fd == 0 || ((PTR_DAT_0002b058[(uint)local_3fd * 2] & 0x10) != 0)))) {
                    pbVar9 = (byte *)FUN_0000ba50(local_404,&DAT_000055ba);
                    if (pbVar9 != (byte *)0x0) {
                      bVar2 = *pbVar9;
                      while ((bVar2 != 0 && ((PTR_DAT_0002b058[(uint)*pbVar9 * 2] & 0x10) != 0))) {
                        pbVar9 = pbVar9 + 1;
                        if (pbVar9 == (byte *)0x0) goto LAB_000060f0;
                        bVar2 = *pbVar9;
                      }
                      if ((pbVar9 != (byte *)0x0) && (*pbVar9 != 0)) {
                        iVar6 = -1;
                        pbVar10 = pbVar9;
                        do {
                          if (iVar6 == 0) break;
                          iVar6 = iVar6 + -1;
                          bVar2 = *pbVar10;
                          pbVar10 = pbVar10 + 1;
                        } while (bVar2 != 0);
                        if (((iVar6 == -4) &&
                            (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b3,2), iVar6 == 0)) &&
                           ((pbVar9[2] == 0 || ((PTR_DAT_0002b058[(uint)pbVar9[2] * 2] & 0x10) != 0)
                            ))) {
                          DAT_0002a08c = 1;
                        }
                        else {
                          iVar6 = -1;
                          pbVar10 = pbVar9;
                          do {
                            if (iVar6 == 0) break;
                            iVar6 = iVar6 + -1;
                            bVar2 = *pbVar10;
                            pbVar10 = pbVar10 + 1;
                          } while (bVar2 != 0);
                          if (((iVar6 != -5) ||
                              (iVar6 = FUN_0000b8f8(pbVar9,&DAT_000056b6,3), iVar6 != 0)) ||
                             ((pbVar9[3] != 0 &&
                              ((PTR_DAT_0002b058[(uint)pbVar9[3] * 2] & 0x10) == 0)))) {
                            pcVar7 = s_reorder_000056c8;
                            goto LAB_00006085;
                          }
                          DAT_0002a08c = 0;
                        }
                        goto LAB_000057ec;
                      }
                    }
LAB_000060f0:
                    pcVar7 = s_reorder_000056c8;
                  }
                  else {
                    iVar6 = FUN_0000b8f8(local_404,&DAT_000056d0,4);
                    if ((iVar6 != 0) ||
                       ((local_404[4] != 0 &&
                        ((PTR_DAT_0002b058[(uint)local_404[4] * 2] & 0x10) == 0)))) {
                      puVar4 = (undefined1 *)FUN_0000ba50(local_404,&DAT_000055ba);
                      if (puVar4 != (undefined1 *)0x0) {
                        *puVar4 = 0;
                      }
                      uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xd,
                                           s_resolv_____s__is_an_invalid_keyw_00005603,local_404);
                      FUN_00012f18(&DAT_0002b110,uVar5);
                      goto LAB_000057ec;
                    }
                    if (3 < DAT_0002a090) goto LAB_000057ec;
                    pcVar7 = (char *)FUN_0000ba50(local_404,&DAT_000055ba);
                    if (pcVar7 != (char *)0x0) {
                      for (; (*pcVar7 == ' ' || (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1) {
                      }
                      if (pcVar7 != (char *)0x0) {
                        FUN_0000b828(local_410,pcVar7);
                        (&DAT_0002cdb8)[DAT_0002a090] = local_410;
                        DAT_0002a090 = DAT_0002a090 + 1;
                        uVar8 = 0xffffffff;
                        do {
                          if (uVar8 == 0) break;
                          uVar8 = uVar8 - 1;
                          cVar1 = *pcVar7;
                          pcVar7 = pcVar7 + 1;
                        } while (cVar1 != '\0');
                        local_410 = local_410 + ~uVar8;
                        goto LAB_000057ec;
                      }
                    }
                    pcVar7 = &DAT_000056d0;
                  }
                }
              }
            }
          }
          uVar5 = FUN_0000c030(DAT_0002b050,0xb,0xc,s_resolv____s____s__command_incorr_000055bd,
                               local_414,pcVar7);
          FUN_00012f18(&DAT_0002b110,uVar5);
        }
      }
      goto LAB_000057ec;
    }
    (&DAT_0002c838)[local_408] = 0;
    FUN_00015af8(iVar3);
  }
  iVar3 = FUN_0000b890(s_RESOLV_SERV_ORDER_000056d5);
  if (iVar3 != 0) {
    local_408 = 0;
    iVar3 = FUN_0000c4f0(iVar3,&DAT_000055ef);
    if (iVar3 != 0) {
      puVar11 = &DAT_0002c838;
      do {
        iVar6 = FUN_0000b8f8(iVar3,&DAT_000055f4,4);
        if ((iVar6 == 0) &&
           ((*(char *)(iVar3 + 4) == '\0' ||
            ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 4) * 2] & 0x10) != 0)))) {
          *puVar11 = 1;
LAB_0000639f:
          puVar11 = puVar11 + 1;
          local_408 = local_408 + 1;
        }
        else {
          iVar6 = FUN_0000b8f8(iVar3,s_hosts_000055f9,5);
          if ((iVar6 == 0) &&
             ((*(char *)(iVar3 + 5) == '\0' ||
              ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 5) * 2] & 0x10) != 0)))) {
            *puVar11 = 2;
            goto LAB_0000639f;
          }
          iVar6 = FUN_0000b8f8(iVar3,&DAT_000055ff,3);
          if ((iVar6 == 0) &&
             ((*(char *)(iVar3 + 3) == '\0' ||
              ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 3) * 2] & 0x10) != 0)))) {
            *puVar11 = 3;
            goto LAB_0000639f;
          }
        }
        iVar3 = FUN_0000c4f0(0,&DAT_000055ef);
      } while (iVar3 != 0);
      (&DAT_0002c838)[local_408] = 0;
    }
  }
  iVar3 = FUN_0000b890(s_RESOLV_SPOOF_CHECK_000056e7);
  if (iVar3 != 0) {
    iVar6 = FUN_0000b8f8(iVar3,&DAT_000056fa,4);
    if ((iVar6 == 0) &&
       ((*(char *)(iVar3 + 4) == '\0' ||
        ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 4) * 2] & 0x10) != 0)))) {
      DAT_0002a084 = 1;
      DAT_0002a088 = 1;
    }
    else {
      iVar6 = FUN_0000b8f8(iVar3,&DAT_000056b6,3);
      if ((iVar6 == 0) &&
         ((*(char *)(iVar3 + 3) == '\0' ||
          ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 3) * 2] & 0x10) != 0)))) {
        DAT_0002a084 = 0;
        DAT_0002a088 = 0;
      }
      else {
        iVar6 = FUN_0000b8f8(iVar3,s_warn_off_000056ff,8);
        if ((iVar6 == 0) &&
           ((*(char *)(iVar3 + 8) == '\0' ||
            ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 8) * 2] & 0x10) != 0)))) {
          DAT_0002a084 = 1;
          DAT_0002a088 = 0;
        }
        else {
          DAT_0002a084 = 1;
        }
      }
    }
  }
  iVar3 = FUN_0000b890(s_RESOLV_MULTI_00005708);
  if (iVar3 != 0) {
    iVar6 = FUN_0000b8f8(iVar3,&DAT_000056b3,2);
    if ((iVar6 == 0) &&
       ((*(char *)(iVar3 + 2) == '\0' ||
        ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 2) * 2] & 0x10) != 0)))) {
      DAT_0002a080 = 1;
    }
    else {
      DAT_0002a080 = 0;
    }
  }
  iVar3 = FUN_0000b890(s_RESOLV_REORDER_00005715);
  if (iVar3 != 0) {
    iVar6 = FUN_0000b8f8(iVar3,&DAT_000056b3,2);
    if ((iVar6 == 0) &&
       ((*(char *)(iVar3 + 2) == '\0' ||
        ((PTR_DAT_0002b058[(uint)*(byte *)(iVar3 + 2) * 2] & 0x10) != 0)))) {
      DAT_0002a08c = 1;
    }
    else {
      DAT_0002a08c = 0;
    }
  }
  iVar3 = FUN_0000b890(s_RESOLV_ADD_TRIM_DOMAINS_00005724);
  if (iVar3 != 0) {
    while (pcVar7 = (char *)FUN_0000c4f0(iVar3,&DAT_000055ef), pcVar7 != (char *)0x0) {
      if (DAT_0002a090 < 4) {
        FUN_0000b828(local_410,pcVar7);
        (&DAT_0002cdb8)[DAT_0002a090] = local_410;
        DAT_0002a090 = DAT_0002a090 + 1;
        uVar8 = 0xffffffff;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        local_410 = local_410 + ~uVar8;
      }
      iVar3 = 0;
    }
  }
  iVar3 = FUN_0000b890(s_RESOLV_OVERRIDE_TRIM_DOMAINS_0000573c);
  if (iVar3 != 0) {
    DAT_0002a090 = 0;
    local_410 = &DAT_0002cdc8;
    while (pcVar7 = (char *)FUN_0000c4f0(iVar3,&DAT_000055ef), pcVar7 != (char *)0x0) {
      if (DAT_0002a090 < 4) {
        FUN_0000b828(local_410,pcVar7);
        (&DAT_0002cdb8)[DAT_0002a090] = local_410;
        DAT_0002a090 = DAT_0002a090 + 1;
        uVar8 = 0xffffffff;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        local_410 = local_410 + ~uVar8;
      }
      iVar3 = 0;
    }
  }
  DAT_0002a068 = 1;
  if (((byte)DAT_0002b178 & 1) == 0) {
    FUN_0000c5f8();
  }
  return;
}



/* --- FUN_00006750 @ 00006750 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00006750(int param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  int local_130;
  int local_12c;
  int local_128;
  uint local_124;
  int local_120;
  undefined4 *local_118;
  undefined4 *local_114;
  char *local_110;
  char local_108 [260];
  
  local_130 = 0;
  DAT_0002c8d8 = (char *)0x0;
  uVar8 = param_1 + param_2;
  local_124 = (uint)CONCAT11((char)*(undefined2 *)(param_1 + 6),
                             (char)((ushort)*(undefined2 *)(param_1 + 6) >> 8));
  local_110 = &DAT_0002c980;
  local_120 = 0x401;
  if (CONCAT11((char)*(undefined2 *)(param_1 + 4),(char)((ushort)*(undefined2 *)(param_1 + 4) >> 8))
      == 1) {
    iVar2 = FUN_0000d5e0(param_1,uVar8,param_1 + 0xc,&DAT_0002c980,0x401);
    if (iVar2 < 0) {
      DAT_00038bf8 = 3;
    }
    else {
      FUN_0000b860();
      uVar11 = param_1 + 0x10 + iVar2;
      if (param_5 == 1) {
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0002c980;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        DAT_0002c8d8 = &DAT_0002c980;
        local_110 = &DAT_0002c980 + ~uVar7;
        local_120 = 0x401 - ~uVar7;
        param_3 = &DAT_0002c980;
      }
      local_114 = &DAT_0002c8f0;
      DAT_0002c8f0 = 0;
      _DAT_0002c8dc = &DAT_0002c8f0;
      local_118 = &DAT_0002c848;
      DAT_0002c848 = 0;
      DAT_0002c8e8 = &DAT_0002c848;
      local_128 = 0;
      local_12c = 0;
      if ((local_124 != 0) && (uVar11 < uVar8)) {
        do {
          local_124 = local_124 - 1;
          iVar2 = FUN_0000d5e0(param_1,uVar8,uVar11,local_110,local_120);
          if (iVar2 < 0) goto LAB_00006c78;
          iVar2 = uVar11 + iVar2;
          iVar3 = FUN_0000dc60(iVar2);
          iVar4 = FUN_0000dc60(iVar2 + 2);
          iVar5 = FUN_0000dc60(iVar2 + 8);
          uVar11 = iVar2 + 10;
          if (iVar4 == param_4) {
            if ((param_5 == 1) && (iVar3 == 5)) {
              if (local_114 < &DAT_0002c978) {
                iVar2 = FUN_0000d5e0(param_1,uVar8,uVar11,local_108,0x101);
                if (iVar2 < 0) {
LAB_00006c78:
                  local_12c = local_12c + 1;
                }
                else {
                  uVar11 = uVar11 + iVar2;
                  if ((DAT_0002c8d8 == (char *)0x0) ||
                     (iVar2 = FUN_0000b798(DAT_0002c8d8,local_110), iVar2 == 0)) {
                    *local_114 = local_110;
                    local_114 = local_114 + 1;
                    uVar7 = 0xffffffff;
                    pcVar10 = local_110;
                    do {
                      if (uVar7 == 0) break;
                      uVar7 = uVar7 - 1;
                      cVar1 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar1 != '\0');
                    pcVar9 = local_110 + ~uVar7;
                    local_120 = local_120 - ~uVar7;
                    uVar7 = 0xffffffff;
                    pcVar10 = local_108;
                    do {
                      if (uVar7 == 0) break;
                      uVar7 = uVar7 - 1;
                      cVar1 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar1 != '\0');
                    uVar7 = ~uVar7;
                    local_110 = pcVar9;
                    if (local_120 < (int)uVar7) goto LAB_00006c78;
                    FUN_0000b828(pcVar9,local_108);
                    local_110 = pcVar9 + uVar7;
                    local_120 = local_120 - uVar7;
                    DAT_0002c8d8 = pcVar9;
                  }
                  else {
                    uVar6 = FUN_0000c030(DAT_0002b050,0xb,0x1b,
                                         s_gethostby__getanswer__asked_for___000066b1,DAT_0002c8d8,
                                         local_110);
                    FUN_0000dd68(0x25,uVar6);
                  }
                }
              }
            }
            else if (param_5 == iVar3) {
              if (iVar3 == 1) {
                iVar2 = FUN_0000b798(DAT_0002c8d8,local_110);
                pcVar10 = DAT_0002c8d8;
                if (iVar2 != 0) {
LAB_00006b8d:
                  uVar6 = FUN_0000c030(DAT_0002b050,0xb,0x1a,
                                       s_gethostby__getanswer__asked_for___000050e0,pcVar10,
                                       local_110);
                  FUN_0000dd68(0x25,uVar6);
                  uVar11 = uVar11 + iVar5;
                  goto LAB_00006d1f;
                }
                if (local_128 == 0) {
                  if (iVar4 == 1) {
                    DAT_0002c8e0 = 2;
                  }
                  else {
                    DAT_0002c8e0 = 0;
                  }
                  DAT_0002c8d8 = local_110;
                  uVar7 = 0xffffffff;
                  pcVar10 = local_110;
                  do {
                    if (uVar7 == 0) break;
                    uVar7 = uVar7 - 1;
                    cVar1 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  local_110 = local_110 + ~uVar7;
                  local_120 = local_120 - ~uVar7;
                  DAT_0002c8e4 = iVar5;
                }
                else if (DAT_0002c8e4 != iVar5) goto LAB_00006cc3;
                local_110 = local_110 + (4 - ((uint)local_110 & 3));
                if ((char *)0x2cd80 < local_110 + iVar5) {
                  if (((byte)DAT_0002b178 & 2) != 0) {
                    FUN_0000b478(s_size___d__too_big_00006722,iVar5);
                  }
                  goto LAB_00006c78;
                }
                if ((undefined4 *)0x2c8cf < local_118) {
                  if ((((byte)DAT_0002b178 & 2) != 0) && (local_130 = local_130 + 1, local_130 == 1)
                     ) {
                    FUN_0000b478(s_Too_many_addresses___d__00006735,0x23);
                  }
                  goto LAB_00006cc3;
                }
                *local_118 = local_110;
                local_118 = local_118 + 1;
                FUN_00007dc0(uVar11,local_110,iVar5);
                local_110 = local_110 + iVar5;
                uVar11 = uVar11 + iVar5;
              }
              else if (iVar3 == 0xc) {
                iVar2 = FUN_0000b798(param_3,local_110);
                pcVar10 = param_3;
                if (iVar2 != 0) goto LAB_00006b8d;
                iVar2 = FUN_0000d5e0(param_1,uVar8,uVar11,local_110,local_120);
                if (-1 < iVar2) {
                  DAT_0002c8d8 = local_110;
                  goto LAB_00006b4c;
                }
                local_12c = local_12c + 1;
              }
              else {
                FUN_0000e148();
              }
              if (local_12c == 0) {
                local_128 = local_128 + 1;
              }
            }
            else {
              uVar6 = FUN_0000c030(DAT_0002b050,0xb,0x1c,
                                   s_gethostby__getanswer__asked_for_t_000066ea,param_5,param_3,
                                   iVar3,local_110);
              FUN_0000dd68(0x25,uVar6);
              uVar11 = uVar11 + iVar5;
            }
          }
          else {
LAB_00006cc3:
            uVar11 = uVar11 + iVar5;
          }
LAB_00006d1f:
        } while (((0 < (int)local_124) && (uVar11 < uVar8)) && (local_12c == 0));
      }
      if (local_128 != 0) {
        *local_114 = 0;
        *local_118 = 0;
        if ((((DAT_0002b2d4 & 0xf0) != 0) && (1 < local_128)) && ((param_4 == 1 && (param_5 == 1))))
        {
          FUN_00007ad0(&DAT_0002c848,local_128);
        }
        if (DAT_0002c8d8 == (char *)0x0) {
          FUN_0000b828(local_110,param_3);
          DAT_0002c8d8 = local_110;
        }
LAB_00006b4c:
        return &DAT_0002c8d8;
      }
      DAT_00038bf8 = 2;
    }
  }
  else {
    DAT_00038bf8 = 3;
  }
  return (undefined4 *)0x0;
}



/* --- FUN_00006e10 @ 00006e10 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00006e10(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int *piVar6;
  undefined1 local_404 [1024];
  
  if ((PTR_DAT_0002b058[(uint)*param_1 * 2] & 8) != 0) {
    pbVar2 = param_1;
    if (*param_1 == 0) {
      bVar1 = param_1[-1];
    }
    else {
      do {
        pbVar5 = pbVar2;
        if (((PTR_DAT_0002b058[(uint)*pbVar5 * 2] & 8) == 0) && (*pbVar5 != 0x2e))
        goto LAB_00006ef3;
        pbVar2 = pbVar5 + 1;
      } while (pbVar5[1] != 0);
      bVar1 = *pbVar5;
    }
    if (bVar1 != 0x2e) {
      _DAT_0002cd84 = FUN_00009ff8(param_1);
      if (_DAT_0002cd84 == -1) {
        _DAT_0002cd84 = 0xffffffff;
        DAT_00038bf8 = 1;
        return (undefined4 *)0x0;
      }
      _DAT_0002c8dc = &DAT_0002c8f0;
      DAT_0002c848 = &DAT_0002cd84;
      DAT_0002c8e8 = &DAT_0002c848;
      DAT_0002c84c = 0;
      DAT_0002c8d8 = param_1;
      DAT_0002c8e0 = 2;
      DAT_0002c8e4 = 4;
      DAT_0002c8f0 = 0;
      DAT_00038bf8 = 0;
      return &DAT_0002c8d8;
    }
  }
LAB_00006ef3:
  if (DAT_0002a068 == 0) {
    FUN_00005760();
  }
  if (DAT_0002c838 != 0) {
    piVar6 = &DAT_0002c838;
    do {
      if (0x2c844 < (int)piVar6) {
        return (undefined4 *)0x0;
      }
      iVar3 = *piVar6;
      if (iVar3 == 2) {
        puVar4 = (undefined4 *)FUN_00007620(param_1);
        if ((DAT_0002c84c != 0) && (DAT_0002a08c != 0)) {
          FUN_00005200(puVar4);
        }
        if (puVar4 != (undefined4 *)0x0) {
          return puVar4;
        }
LAB_00007040:
        DAT_00038bf8 = 1;
      }
      else if (iVar3 < 3) {
        if (iVar3 == 1) {
          iVar3 = FUN_0000d0b8(param_1,1,1,local_404,0x400);
          if ((iVar3 < 0) && (((byte)DAT_0002b178 & 2) != 0)) {
            FUN_0000b478(s_res_search_failed_00006de9);
          }
          iVar3 = FUN_00006750(local_404,iVar3,param_1,1,1);
          if ((DAT_0002c84c != 0) && (DAT_0002a08c != 0)) {
            FUN_00005200(iVar3);
          }
          if (iVar3 != 0) {
            puVar4 = (undefined4 *)FUN_000051b0(iVar3);
            return puVar4;
          }
        }
      }
      else if (iVar3 == 3) {
        puVar4 = (undefined4 *)FUN_00007930(param_1,s_hosts_byname_00006dfc);
        if ((DAT_0002c84c != 0) && (DAT_0002a08c != 0)) {
          FUN_00005200(puVar4);
        }
        if (puVar4 != (undefined4 *)0x0) {
          return puVar4;
        }
        goto LAB_00007040;
      }
      piVar6 = piVar6 + 1;
    } while (*piVar6 != 0);
  }
  return (undefined4 *)0x0;
}



/* --- FUN_000070f0 @ 000070f0 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000070f0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 local_60c;
  undefined1 local_608 [260];
  undefined1 local_504 [256];
  undefined1 local_404 [1024];
  
  if (param_3 != 2) {
    DAT_00038bf8 = 0xffffffff;
    return 0;
  }
  if (DAT_0002a068 == 0) {
    FUN_00005760();
  }
  FUN_0000b860();
  if (DAT_0002c838 == 0) {
    return 0;
  }
  local_60c = local_608;
  piVar6 = &DAT_0002c838;
  do {
    iVar2 = *piVar6;
    if (iVar2 == 2) {
      iVar2 = FUN_00007a80(param_1,param_2,2);
LAB_000073e1:
      if (iVar2 != 0) {
        return iVar2;
      }
LAB_000073e9:
      DAT_00038bf8 = 1;
    }
    else if (iVar2 < 3) {
      if (iVar2 == 1) {
        FUN_0000f910(local_504,s__u__u__u__u_in_addr_arpa_00007065,*(undefined1 *)((int)param_1 + 3)
                     ,*(undefined1 *)((int)param_1 + 2),*(undefined1 *)((int)param_1 + 1),
                     *(undefined1 *)param_1);
        iVar2 = FUN_0000cf08(local_504,1,0xc,local_404,0x400);
        if (-1 < iVar2) {
          puVar3 = (undefined4 *)FUN_00006750(local_404,iVar2,local_504,1,0xc);
          if (puVar3 == (undefined4 *)0x0) goto LAB_000073e9;
          if (DAT_0002a084 != 0) {
            uVar5 = 0xffffffff;
            pcVar7 = (char *)*puVar3;
            break;
          }
          puVar3[2] = 2;
          puVar3[3] = param_2;
          DAT_0002c848 = &DAT_0002cd84;
          DAT_0002c84c = 0;
          _DAT_0002cd84 = *param_1;
          goto LAB_0000737a;
        }
        if (((byte)DAT_0002b178 & 2) != 0) {
          FUN_0000b478(s_res_query_failed_0000707e);
        }
      }
    }
    else if (iVar2 == 3) {
      FUN_0000f910(local_504,s__u__u__u__u_000070d0,*(undefined1 *)param_1,
                   *(undefined1 *)((int)param_1 + 1),*(undefined1 *)((int)param_1 + 2),
                   *(undefined1 *)((int)param_1 + 3));
      iVar2 = FUN_00007930(local_504,s_hosts_byaddr_000070dc);
      goto LAB_000073e1;
    }
    piVar6 = piVar6 + 1;
    if (*piVar6 == 0) {
      return 0;
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  if ((int)(uVar5 - 1) < 0x100) {
    FUN_0000b828(local_60c,(char *)*puVar3);
    uVar4 = DAT_0002a090;
    local_608[uVar5 - 1] = 0x2e;
    local_608[uVar5] = 0;
    DAT_0002a090 = 0;
    puVar3 = (undefined4 *)FUN_00006e10(local_60c);
    local_608[uVar5 - 1] = 0;
    DAT_0002a090 = uVar4;
    if ((puVar3 == (undefined4 *)0x0) || (iVar2 = FUN_000043d0(local_60c,*puVar3), iVar2 != 0)) {
      DAT_00038bf8 = 1;
    }
    else {
      piVar6 = (int *)puVar3[4];
      iVar2 = *piVar6;
      while (iVar2 != 0) {
        iVar2 = FUN_0000e188(*piVar6,param_1,param_2);
        if (iVar2 == 0) {
LAB_0000737a:
          iVar2 = FUN_000051b0(puVar3);
          return iVar2;
        }
        piVar6 = piVar6 + 1;
        iVar2 = *piVar6;
      }
      DAT_00038bf8 = 1;
      if (DAT_0002a088 != 0) {
        FUN_0000e048(s_resolv_00007090,1,0x20);
        uVar4 = FUN_0000c030(DAT_0002b050,0xb,0x10,s_gethostbyaddr___s_____u__u__u__u_00007097,
                             *puVar3,*(undefined1 *)param_1,*(undefined1 *)((int)param_1 + 1),
                             *(undefined1 *)((int)param_1 + 2),*(undefined1 *)((int)param_1 + 3));
        FUN_0000dd68(5,uVar4);
      }
    }
  }
  return 0;
}



/* --- FUN_00007410 @ 00007410 --- */

void FUN_00007410(uint param_1)

{
  if (DAT_0002a078 == 0) {
    DAT_0002a078 = FUN_0000b4f8(s__etc_hosts_0002a06c,&DAT_000055b2);
  }
  else {
    FUN_0000e1c8(DAT_0002a078);
  }
  DAT_0002a07c = DAT_0002a07c | param_1;
  return;
}



/* --- FUN_00007460 @ 00007460 --- */

void FUN_00007460(void)

{
  if ((DAT_0002a078 != 0) && (DAT_0002a07c == 0)) {
    FUN_00015af8(DAT_0002a078);
    DAT_0002a078 = 0;
  }
  return;
}



/* --- FUN_000074a0 @ 000074a0 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000074a0(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if ((DAT_0002a078 == 0) &&
     (DAT_0002a078 = FUN_0000b4f8(s__etc_hosts_0002a06c,&DAT_000055b2), DAT_0002a078 == 0)) {
    DAT_00038bf8 = 0xffffffff;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    do {
      do {
        pcVar2 = (char *)FUN_000155a0(&DAT_0002c980,0x400,DAT_0002a078);
        if (pcVar2 == (char *)0x0) {
          DAT_00038bf8 = 1;
          return (undefined4 *)0x0;
        }
      } while ((*pcVar2 == '#') ||
              (puVar3 = (undefined1 *)FUN_0000ba50(pcVar2,&DAT_0000748e),
              puVar3 == (undefined1 *)0x0));
      *puVar3 = 0;
      pcVar4 = (char *)FUN_0000ba50(pcVar2,&DAT_000055ba);
    } while (pcVar4 == (char *)0x0);
    *pcVar4 = '\0';
    DAT_0002c8e8 = &DAT_0002cdb0;
    DAT_0002cdb0 = &DAT_0002cd88;
    uVar5 = FUN_00009ff8(pcVar2);
    *(undefined4 *)*DAT_0002c8e8 = uVar5;
    DAT_0002c8e4 = 4;
    DAT_0002c8e0 = 2;
    do {
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 == ' ');
    } while (*pcVar4 == '\t');
    _DAT_0002c8dc = &DAT_0002c8f0;
    puVar1 = &DAT_0002c8f0;
    DAT_0002c8d8 = pcVar4;
    while (pcVar4 = (char *)FUN_0000ba50(pcVar4,&DAT_000055ba), pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      do {
        pcVar4 = pcVar4 + 1;
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_000075f6;
      } while ((*pcVar4 == ' ') || (*pcVar4 == '\t'));
      if (puVar1 < &DAT_0002c978) {
        *puVar1 = pcVar4;
        puVar1 = puVar1 + 1;
      }
    }
LAB_000075f6:
    *puVar1 = 0;
    DAT_00038bf8 = 0;
    puVar1 = &DAT_0002c8d8;
  }
  return puVar1;
}



/* --- FUN_00007620 @ 00007620 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00007620(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int *local_78;
  uint local_74;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [64];
  
  iVar8 = 0;
  local_68 = 0;
  local_50 = &DAT_0002c618;
  local_54 = &DAT_0002c6a8;
  DAT_0002c618 = 0;
  DAT_0002c6a8 = 0;
  local_58 = &DAT_0002be08;
  local_5c = &DAT_0002c210;
  local_60 = 0x401;
  local_64 = 0x401;
  _DAT_0002c750 = 0;
  _DAT_0002c754 = 0;
  FUN_0000b828(&DAT_0002c7e0,param_1);
  FUN_00018dd8(local_44,0x40);
  FUN_00007410(0);
  do {
    puVar4 = (undefined4 *)FUN_000074a0();
    if (puVar4 == (undefined4 *)0x0) {
      FUN_00007460();
      if (DAT_0002c618 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        _DAT_0002c73c = &DAT_0002c750;
        _DAT_0002c738 = &DAT_0002c7e0;
        local_70 = 0;
        local_74 = 0xffffffff;
        if (DAT_0002c6a8 != 0) {
          local_78 = &DAT_0002c6a8;
          do {
            iVar8 = 0;
            if (DAT_0002c618 != 0) {
              piVar7 = &DAT_0002c618;
              do {
                FUN_00007dc0(*local_78,&local_48,DAT_0002c744);
                uVar1 = local_48 >> 8;
                uVar6 = (undefined1)local_48;
                uVar3 = local_48 >> 0x18;
                uVar2 = local_48 >> 0x10;
                FUN_00007dc0(*piVar7,&local_4c,DAT_0002c744);
                local_48 = CONCAT31(CONCAT21(CONCAT11(uVar6,(char)uVar1),(char)uVar2),(char)uVar3) ^
                           local_4c;
                if (local_48 < local_74) {
                  local_74 = local_48;
                  local_70 = iVar8;
                }
                piVar7 = piVar7 + 1;
                iVar8 = iVar8 + 1;
              } while (*piVar7 != 0);
            }
            local_78 = local_78 + 1;
          } while (*local_78 != 0);
        }
        if (local_70 != 0) {
          iVar8 = (&DAT_0002c618)[local_70];
          (&DAT_0002c618)[local_70] = DAT_0002c618;
          DAT_0002c618 = iVar8;
        }
        _DAT_0002c748 = &DAT_0002c618;
        puVar4 = (undefined4 *)&DAT_0002c738;
      }
      return puVar4;
    }
    iVar5 = FUN_0000b798(*puVar4,param_1);
    if (iVar5 == 0) {
      iVar8 = iVar8 + 1;
    }
    else {
      piVar7 = (int *)puVar4[1];
      iVar5 = *piVar7;
      while (iVar5 != 0) {
        iVar5 = FUN_0000b798(*piVar7,param_1);
        if (iVar5 == 0) {
          iVar8 = iVar8 + 1;
          _DAT_0002c750 = param_1;
          FUN_0000b828(&DAT_0002c7e0,*puVar4);
        }
        piVar7 = piVar7 + 1;
        iVar5 = *piVar7;
      }
    }
    iVar5 = FUN_0000b798(*puVar4,local_44);
    if (iVar5 == 0) {
      local_68 = local_68 + 1;
    }
    else {
      piVar7 = (int *)puVar4[1];
      iVar5 = *piVar7;
      while (iVar5 != 0) {
        iVar5 = FUN_0000b798(*piVar7,local_44);
        if (iVar5 == 0) {
          local_68 = local_68 + 1;
        }
        piVar7 = piVar7 + 1;
        iVar5 = *piVar7;
      }
    }
    if (iVar8 != 0) {
      if (DAT_0002a080 == 0) {
        FUN_00007460();
        return puVar4;
      }
      iVar8 = puVar4[3];
      _DAT_0002c740 = puVar4[2];
      DAT_0002c744 = puVar4[3];
      if (iVar8 <= local_60) {
        FUN_00007dc0(*(undefined4 *)puVar4[4],local_58,iVar8);
        *local_50 = local_58;
        local_50 = local_50 + 1;
        *local_50 = 0;
        local_58 = local_58 + iVar8;
        local_60 = local_60 - iVar8;
      }
      iVar8 = 0;
    }
    if (local_68 != 0) {
      iVar5 = puVar4[3];
      if (iVar5 <= local_64) {
        FUN_00007dc0(*(undefined4 *)puVar4[4],local_5c,iVar5);
        *local_54 = local_5c;
        local_54 = local_54 + 1;
        *local_54 = 0;
        local_5c = local_5c + iVar5;
        local_64 = local_64 - iVar5;
      }
      local_68 = 0;
    }
  } while( true );
}



/* --- FUN_00007930 @ 00007930 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00007930(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_c [4];
  undefined4 local_8;
  
  if ((DAT_0002a098 != 0) || (iVar2 = FUN_0000ebb8(&DAT_0002a098), iVar2 == 0)) {
    uVar6 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_0000e9b8(DAT_0002a098,param_2,param_1,~uVar6 - 1,&local_8,local_c);
    if (iVar2 == 0) {
      puVar3 = (undefined1 *)FUN_0000f928(local_8,10);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      pcVar4 = (char *)FUN_0000ba50(local_8,&DAT_000055ba);
      *pcVar4 = '\0';
      DAT_0002c830 = &DAT_0002cdb0;
      DAT_0002cdb0 = &DAT_0002cd88;
      uVar5 = FUN_00009ff8(local_8);
      *(undefined4 *)*DAT_0002c830 = uVar5;
      _DAT_0002c82c = 4;
      _DAT_0002c828 = 2;
      do {
        do {
          pcVar4 = pcVar4 + 1;
        } while (*pcVar4 == ' ');
      } while (*pcVar4 == '\t');
      _DAT_0002c824 = &DAT_0002c8f0;
      puVar7 = &DAT_0002c8f0;
      _DAT_0002c820 = pcVar4;
      while (pcVar4 = (char *)FUN_0000ba50(pcVar4,&DAT_000055ba), pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        do {
          pcVar4 = pcVar4 + 1;
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_00007a66;
        } while ((*pcVar4 == ' ') || (*pcVar4 == '\t'));
        if (puVar7 < &DAT_0002c978) {
          *puVar7 = pcVar4;
          puVar7 = puVar7 + 1;
        }
      }
LAB_00007a66:
      *puVar7 = 0;
      return &DAT_0002c820;
    }
  }
  return (undefined *)0x0;
}



/* --- FUN_00007a80 @ 00007a80 --- */

int FUN_00007a80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00007410(0);
  do {
    do {
      iVar1 = FUN_000074a0();
      if (iVar1 == 0) goto LAB_00007abf;
    } while (*(int *)(iVar1 + 8) != param_3);
    iVar2 = FUN_0000e188(**(undefined4 **)(iVar1 + 0x10),param_1,param_2);
  } while (iVar2 != 0);
LAB_00007abf:
  FUN_00007460();
  return iVar1;
}



/* --- FUN_00007ad0 @ 00007ad0 --- */

/* WARNING: Removing unreachable block (ram,0x00007b41) */
/* WARNING: Removing unreachable block (ram,0x00007b4a) */

void FUN_00007ad0(undefined4 *param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined4 *local_5c;
  int local_54;
  undefined4 local_50;
  short local_4c [36];
  
  local_54 = 0;
  local_50 = param_1;
  iVar3 = 0;
  if (0 < (int)param_2) {
    if ((param_2 & 1) != 0) {
      iVar3 = 0;
      if (DAT_0002b2d4 >> 4 != 0) {
        do {
          if ((&DAT_0002b2d8)[iVar3 * 2] == (*(uint *)*param_1 & (&DAT_0002b2dc)[iVar3 * 2])) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)(DAT_0002b2d4 >> 4));
      }
      local_4c[0] = (short)iVar3;
      iVar3 = 1;
      local_50 = param_1 + 1;
      if ((int)param_2 < 2) goto LAB_00007c20;
    }
    do {
      iVar4 = 0;
      if (DAT_0002b2d4 >> 4 != 0) {
        do {
          if ((&DAT_0002b2d8)[iVar4 * 2] == (*(uint *)*local_50 & (&DAT_0002b2dc)[iVar4 * 2]))
          break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)(DAT_0002b2d4 >> 4));
      }
      local_4c[iVar3] = (short)iVar4;
      if (((local_54 == 0) && (0 < iVar3)) && (iVar4 < *(short *)((int)&local_50 + iVar3 * 2 + 2)))
      {
        local_54 = iVar3;
      }
      iVar4 = iVar3 + 1;
      iVar5 = 0;
      if (DAT_0002b2d4 >> 4 != 0) {
        do {
          if ((&DAT_0002b2d8)[iVar5 * 2] == (*(uint *)local_50[1] & (&DAT_0002b2dc)[iVar5 * 2]))
          break;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)(DAT_0002b2d4 >> 4));
      }
      local_4c[iVar4] = (short)iVar5;
      if (((local_54 == 0) && (0 < iVar4)) && (iVar5 < *(short *)((int)&local_50 + iVar4 * 2 + 2)))
      {
        local_54 = iVar4;
      }
      iVar3 = iVar3 + 2;
      local_50 = local_50 + 2;
    } while (iVar3 < (int)param_2);
  }
LAB_00007c20:
  if ((local_54 != 0) && (local_54 < (int)param_2)) {
    if ((param_2 - local_54 & 1) != 0) {
      iVar3 = local_54 + -1;
      if (-1 < iVar3) {
        local_5c = param_1 + iVar3;
        psVar6 = local_4c + local_54;
        do {
          sVar1 = local_4c[iVar3];
          if (sVar1 <= *psVar6) break;
          local_4c[iVar3] = *psVar6;
          *psVar6 = sVar1;
          uVar2 = *local_5c;
          *local_5c = param_1[iVar3 + 1];
          param_1[iVar3 + 1] = uVar2;
          local_5c = local_5c + -1;
          psVar6 = psVar6 + -1;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      local_54 = local_54 + 1;
      if ((int)param_2 <= local_54) {
        return;
      }
    }
    do {
      iVar3 = local_54 + -1;
      if (-1 < iVar3) {
        local_5c = param_1 + iVar3;
        psVar6 = local_4c + local_54;
        do {
          sVar1 = local_4c[iVar3];
          if (sVar1 <= *psVar6) break;
          local_4c[iVar3] = *psVar6;
          *psVar6 = sVar1;
          uVar2 = *local_5c;
          *local_5c = param_1[iVar3 + 1];
          param_1[iVar3 + 1] = uVar2;
          local_5c = local_5c + -1;
          psVar6 = psVar6 + -1;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      if (-1 < local_54) {
        local_5c = param_1 + local_54;
        psVar6 = local_4c + local_54 + 1;
        iVar3 = local_54;
        do {
          sVar1 = local_4c[iVar3];
          if (sVar1 <= *psVar6) break;
          local_4c[iVar3] = *psVar6;
          *psVar6 = sVar1;
          uVar2 = *local_5c;
          *local_5c = param_1[iVar3 + 1];
          param_1[iVar3 + 1] = uVar2;
          local_5c = local_5c + -1;
          psVar6 = psVar6 + -1;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      local_54 = local_54 + 2;
    } while (local_54 < (int)param_2);
  }
  return;
}



/* --- FUN_00007d68 @ 00007d68 --- */

undefined * FUN_00007d68(undefined4 param_1)

{
  FUN_0000f898(&DAT_0002d1c8,0x12,s__d__d__d__d_00007d58,(undefined1)param_1,param_1._1_1_,
               param_1._2_1_,param_1._3_1_);
  return &DAT_0002d1c8;
}



/* --- FUN_00007da0 @ 00007da0 --- */

int FUN_00007da0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}



/* --- FUN_00007dc0 @ 00007dc0 --- */

void FUN_00007dc0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < (int)param_3) {
    if ((uint)((int)param_2 - (int)param_1) < param_3) {
      param_1 = (undefined4 *)((int)param_1 + param_3);
      param_2 = (undefined4 *)((int)param_2 + param_3);
      if (7 < (int)param_3) {
        uVar1 = (uint)param_2 & 3;
        iVar3 = param_3 - uVar1;
        while( true ) {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          *(undefined1 *)((int)param_2 + -1) = *(undefined1 *)((int)param_1 + -1);
          param_1 = (undefined4 *)((int)param_1 + -1);
          param_2 = (undefined4 *)((int)param_2 + -1);
        }
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = iVar3 + 3;
        }
        iVar2 = iVar2 >> 2;
        while( true ) {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          param_2[-1] = param_1[-1];
          param_1 = param_1 + -1;
          param_2 = param_2 + -1;
        }
        param_3 = iVar3 % 4;
      }
      while( true ) {
        param_2 = (undefined4 *)((int)param_2 + -1);
        param_1 = (undefined4 *)((int)param_1 + -1);
        if (param_3 == 0) break;
        param_3 = param_3 - 1;
        *(undefined1 *)param_2 = *(undefined1 *)param_1;
      }
    }
    else {
      if (7 < (int)param_3) {
        uVar1 = -(int)param_2 & 3;
        iVar3 = param_3 - uVar1;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)param_1;
          param_1 = (undefined4 *)((int)param_1 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = iVar3 + 3;
        }
        for (iVar2 = iVar2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_2 = *param_1;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        }
        param_3 = iVar3 % 4;
      }
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  return;
}



/* --- FUN_00007e78 @ 00007e78 --- */

ushort FUN_00007e78(int param_1)

{
  return *(ushort *)(PTR_DAT_0002b058 + param_1 * 2) & 0xb;
}



/* --- FUN_00007e98 @ 00007e98 --- */

ushort FUN_00007e98(int param_1)

{
  return *(ushort *)(PTR_DAT_0002b058 + param_1 * 2) & 3;
}



/* --- FUN_00007eb8 @ 00007eb8 --- */

byte FUN_00007eb8(int param_1)

{
  return PTR_DAT_0002b058[param_1 * 2] & 4;
}



/* --- FUN_00007ed8 @ 00007ed8 --- */

byte FUN_00007ed8(int param_1)

{
  return PTR_DAT_0002b058[param_1 * 2] & 8;
}



/* --- FUN_00007ef8 @ 00007ef8 --- */

byte FUN_00007ef8(int param_1)

{
  return PTR_DAT_0002b058[param_1 * 2] & 2;
}



/* --- FUN_00007f18 @ 00007f18 --- */

ushort FUN_00007f18(int param_1)

{
  return *(ushort *)(PTR_DAT_0002b058 + param_1 * 2) & 0x4b;
}



/* --- FUN_00007f38 @ 00007f38 --- */

ushort FUN_00007f38(int param_1)

{
  return *(ushort *)(PTR_DAT_0002b058 + param_1 * 2) & 0xcb;
}



/* --- FUN_00007f58 @ 00007f58 --- */

byte FUN_00007f58(int param_1)

{
  return PTR_DAT_0002b058[param_1 * 2] & 0x40;
}



/* --- FUN_00007f78 @ 00007f78 --- */

byte FUN_00007f78(int param_1)

{
  return PTR_DAT_0002b058[param_1 * 2] & 0x10;
}



/* --- FUN_00007f98 @ 00007f98 --- */

byte FUN_00007f98(int param_1)

{
  return PTR_DAT_0002b058[param_1 * 2] & 1;
}



/* --- FUN_00007fb8 @ 00007fb8 --- */

ushort FUN_00007fb8(int param_1)

{
  return *(ushort *)(PTR_DAT_0002b058 + param_1 * 2) & 0x28;
}



/* --- FUN_00007fd8 @ 00007fd8 --- */

uint FUN_00007fd8(uint param_1)

{
  if ((param_1 & 0xff) == param_1) {
    return (uint)(byte)PTR_DAT_0002b05c[param_1];
  }
  return param_1;
}



/* --- FUN_00008008 @ 00008008 --- */

uint FUN_00008008(uint param_1)

{
  if ((param_1 & 0xff) == param_1) {
    return (uint)(byte)PTR_DAT_0002b060[param_1];
  }
  return param_1;
}



/* --- FUN_00008040 @ 00008040 --- */

/* WARNING: Type propagation algorithm not settling */

int * FUN_00008040(short param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (((DAT_0002a0b0 == 0) && (DAT_0002a0b0 = FUN_0000f970(), DAT_0002a0b0 == 0)) ||
     (iVar1 = FUN_0000fe80(), iVar1 == 0)) {
    return (int *)0x0;
  }
LAB_000080d0:
  while( true ) {
    piVar2 = (int *)FUN_0000f9a0(iVar1,DAT_0002a0b0);
    if (piVar2 == (int *)0x0) goto LAB_00008287;
    if (DAT_0002a0ac == 0) {
      DAT_0002a0ac = FUN_0000fd60();
    }
    pcVar4 = (char *)*piVar2;
    if (((*pcVar4 != '-') || (pcVar4[1] != '@')) || (pcVar4[2] == '\0')) break;
    iVar3 = FUN_00008360(*piVar2 + 2,param_1,DAT_0002a0b0);
    if (iVar3 != 0) {
      return (int *)0x0;
    }
  }
  pcVar4 = (char *)*piVar2;
  if (((*pcVar4 == '+') && (pcVar4[1] == '@')) && (pcVar4[2] != '\0')) {
    FUN_0000fd30(DAT_0002a0ac);
    FUN_0000fdb0(piVar2,DAT_0002a0ac,0);
    piVar2 = (int *)FUN_00008360(*piVar2 + 2,param_1,DAT_0002a0b0);
    if (piVar2 == (int *)0x0) goto LAB_000080d0;
LAB_0000818f:
    FUN_0000fdb0(DAT_0002a0ac,piVar2,1);
  }
  else {
    if ((*(char *)*piVar2 == '-') && (((char *)*piVar2)[1] != '\0')) {
      iVar3 = FUN_000100b8(*piVar2 + 1,DAT_0002a0b0);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 8) == param_1)) {
        return (int *)0x0;
      }
      goto LAB_000080d0;
    }
    if ((*(char *)*piVar2 == '+') && (((char *)*piVar2)[1] != '\0')) {
      FUN_0000fd30(DAT_0002a0ac);
      FUN_0000fdb0(piVar2,DAT_0002a0ac,0);
      if ((DAT_0002a0a8 == 0) && (DAT_0002a0a8 = FUN_0000f970(), DAT_0002a0a8 == 0)) {
        return (int *)0x0;
      }
      piVar2 = (int *)FUN_000100b8(*piVar2 + 1,DAT_0002a0a8);
      if ((piVar2 != (int *)0x0) && ((short)piVar2[2] == param_1)) goto LAB_0000818f;
    }
    iVar3 = 2;
    bVar6 = true;
    pcVar4 = (char *)*piVar2;
    pcVar5 = &DAT_00008030;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      if ((piVar2 != (int *)0x0) && ((short)piVar2[2] == param_1)) goto LAB_00008287;
      goto LAB_000080d0;
    }
    FUN_0000fd30(DAT_0002a0ac);
    FUN_0000fdb0(piVar2,DAT_0002a0ac,0);
    piVar2 = (int *)FUN_000082b0(param_1,DAT_0002a0b0);
    FUN_0000fdb0(DAT_0002a0ac,piVar2,1);
  }
LAB_00008287:
  FUN_00015af8(iVar1);
  return piVar2;
}



/* --- FUN_000082b0 @ 000082b0 --- */

undefined4 FUN_000082b0(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_20 [4];
  undefined4 local_1c;
  char local_18 [20];
  
  iVar2 = FUN_0000f848(0);
  if (iVar2 == 1) {
    if (DAT_0002a0b4 == 0) {
      FUN_0000ebb8(&DAT_0002a0b4);
    }
    FUN_0000f910(local_18,&DAT_0000829c,param_1);
    uVar4 = 0xffffffff;
    pcVar5 = local_18;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_0000e9b8(DAT_0002a0b4,s_passwd_byuid_0000829f,local_18,~uVar4 - 1,&local_1c,local_20
                        );
    if (iVar2 == 0) {
      uVar3 = FUN_0000fbc0(local_1c,param_2);
      FUN_00005058(local_1c);
      return uVar3;
    }
  }
  return 0;
}



/* --- FUN_00008360 @ 00008360 --- */

int FUN_00008360(undefined4 param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  
  if (DAT_0002a0b8 == 0) {
    FUN_0000ebb8(&DAT_0002a0b8);
  }
  FUN_00010150(param_1);
LAB_00008394:
  do {
    iVar1 = FUN_000101f0(local_8,&local_c,&local_10);
    if (((iVar1 == 1) && (local_c == 0)) && (local_10 != 0)) {
      iVar2 = FUN_000043d0(local_10,DAT_0002a0b8);
      if (iVar2 != 0) goto LAB_00008394;
    }
    if ((iVar1 == 0) || (local_c == 0)) {
      iVar1 = 0;
      goto LAB_000083f9;
    }
    iVar1 = FUN_000100b8(local_c,param_3);
    if ((iVar1 != 0) && (*(short *)(iVar1 + 8) == param_2)) {
LAB_000083f9:
      FUN_000101a0();
      return iVar1;
    }
  } while( true );
}



/* --- FUN_00008410 @ 00008410 --- */

char * FUN_00008410(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar2 = param_1 + -1;
  if (param_3 < 4) {
LAB_00008470:
    param_3 = param_3 & 3;
    if (param_3 == 0) {
      return param_1;
    }
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar2 + 1;
      *pcVar2 = cVar1;
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return param_1;
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar4 = param_3 >> 2;
    cVar1 = *param_2;
    *param_1 = cVar1;
    pcVar3 = param_1;
    while (pcVar2 = pcVar3, cVar1 != '\0') {
      cVar1 = param_2[1];
      pcVar2 = pcVar3 + 1;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[2];
      pcVar2 = pcVar3 + 2;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[3];
      param_2 = param_2 + 4;
      pcVar2 = pcVar3 + 3;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') break;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) goto LAB_00008470;
      cVar1 = *param_2;
      pcVar3 = pcVar3 + 4;
      *pcVar3 = cVar1;
    }
    param_3 = (param_3 - ((int)pcVar2 - (int)param_1)) - 1;
    if (param_3 == 0) {
      return param_1;
    }
  }
  uVar4 = -param_3 & 3;
  if (uVar4 != 0) {
    if (uVar4 < 3) {
      if (uVar4 < 2) {
        pcVar2 = pcVar2 + 1;
        *pcVar2 = '\0';
        param_3 = param_3 - 1;
      }
      pcVar2 = pcVar2 + 1;
      *pcVar2 = '\0';
      param_3 = param_3 - 1;
    }
    pcVar2 = pcVar2 + 1;
    *pcVar2 = '\0';
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return param_1;
    }
  }
  do {
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
    *pcVar2 = '\0';
    param_3 = param_3 - 4;
  } while (param_3 != 0);
  return param_1;
}



/* --- FUN_000084d0 @ 000084d0 --- */

void FUN_000084d0(undefined1 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 - 1;
  if (uVar2 != 0xffffffff) {
    uVar1 = ~uVar2 & 3;
    if (uVar1 != 0) {
      if (uVar1 < 3) {
        if (uVar1 < 2) {
          *param_1 = 0;
          param_1 = param_1 + 1;
          uVar2 = param_2 - 2;
        }
        *param_1 = 0;
        param_1 = param_1 + 1;
        uVar2 = uVar2 - 1;
      }
      *param_1 = 0;
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) {
        return;
      }
    }
    do {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
      uVar2 = uVar2 - 4;
    } while (uVar2 != 0xffffffff);
  }
  return;
}



/* --- FUN_00008530 @ 00008530 --- */

void FUN_00008530(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined **ppuVar9;
  int *piVar10;
  int *local_58;
  uint local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  uint local_40;
  int *local_38;
  uint local_24;
  uint local_20;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_4c = &DAT_0002a0f8;
  do {
    iVar5 = *local_4c;
    uVar7 = iVar5 - 1;
    uVar4 = uVar7;
    if ((int)uVar7 < 0) {
      uVar4 = iVar5 + 6;
    }
    uVar3 = (uint)(byte)(&DAT_0002ae29)[uVar7 - (uVar4 & 0xfffffff8)];
    uVar4 = (&DAT_0002ae40)[local_8 % 0x1c];
    uVar8 = 0;
    iVar6 = (local_8 / 0x1c) * 0x200;
    do {
      if ((uVar3 & uVar8) != 0) {
        local_50 = uVar7;
        if ((int)uVar7 < 0) {
          local_50 = iVar5 + 6;
        }
        *(uint *)(&DAT_0002f2f8 + uVar8 * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) =
             *(uint *)(&DAT_0002f2f8 + uVar8 * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) | uVar4;
      }
      if ((uVar3 & uVar8 + 1) != 0) {
        local_50 = uVar7;
        if ((int)uVar7 < 0) {
          local_50 = iVar5 + 6;
        }
        *(uint *)(&DAT_0002f2f8 + (uVar8 + 1) * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) =
             *(uint *)(&DAT_0002f2f8 + (uVar8 + 1) * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) |
             uVar4;
      }
      if ((uVar3 & uVar8 + 2) != 0) {
        local_50 = uVar7;
        if ((int)uVar7 < 0) {
          local_50 = iVar5 + 6;
        }
        *(uint *)(&DAT_0002f2f8 + (uVar8 + 2) * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) =
             *(uint *)(&DAT_0002f2f8 + (uVar8 + 2) * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) |
             uVar4;
      }
      if ((uVar3 & uVar8 + 3) != 0) {
        local_50 = uVar7;
        if ((int)uVar7 < 0) {
          local_50 = iVar5 + 6;
        }
        *(uint *)(&DAT_0002f2f8 + (uVar8 + 3) * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) =
             *(uint *)(&DAT_0002f2f8 + (uVar8 + 3) * 4 + iVar6 + ((int)local_50 >> 3) * 0x400) |
             uVar4;
      }
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0x80);
    local_4c = local_4c + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x38);
  local_8 = 0;
  local_48 = &DAT_0002a218;
  do {
    uVar4 = (uint)(byte)(&DAT_0002ae29)[(*local_48 + -1) % 7];
    iVar5 = local_8 % 0x18;
    uVar7 = 1 << (0xeU - ((char)iVar5 + (char)(iVar5 / 0xc) * -0xc) & 0x1f);
    if (iVar5 < 0xc) {
      uVar7 = uVar7 << 0x10;
    }
    uVar3 = 0;
    iVar5 = ((*local_48 + -1) / 7) * 0x200;
    do {
      if ((uVar4 & uVar3) != 0) {
        *(uint *)(&DAT_000312f8 + iVar5) = *(uint *)(&DAT_000312f8 + iVar5) | uVar7;
      }
      if ((uVar4 & uVar3 + 1) != 0) {
        *(uint *)(iVar5 + 0x312fc) = *(uint *)(iVar5 + 0x312fc) | uVar7;
      }
      if ((uVar4 & uVar3 + 2) != 0) {
        *(uint *)(iVar5 + 0x31300) = *(uint *)(iVar5 + 0x31300) | uVar7;
      }
      if ((uVar4 & uVar3 + 3) != 0) {
        *(uint *)(iVar5 + 0x31304) = *(uint *)(iVar5 + 0x31304) | uVar7;
      }
      iVar5 = iVar5 + 0x10;
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x80);
    local_48 = local_48 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x30);
  FUN_000084d0(&DAT_0002d2f8,0x2000);
  local_8 = 0;
  local_44 = &DAT_0002a2d8;
  do {
    bVar2 = (&DAT_0002ae28)[(&DAT_0002a394)[*local_44] - 1 & 7];
    uVar4 = 0xff;
    local_40 = ((&DAT_0002a394)[*local_44] - 1) * 0x100 | 0x7f8;
    do {
      if ((bVar2 & uVar4) != 0) {
        iVar5 = local_40 + (local_8 / 0x18) * 4;
        iVar6 = local_8 % 0x18;
        uVar7 = 1 << (0xeU - ((char)iVar6 + (char)(iVar6 / 0xc) * -0xc) & 0x1f);
        if (iVar6 < 0xc) {
          *(uint *)(&DAT_0002d2f8 + iVar5) = *(uint *)(&DAT_0002d2f8 + iVar5) | uVar7 << 0x10;
        }
        else {
          *(uint *)(&DAT_0002d2f8 + iVar5) = *(uint *)(&DAT_0002d2f8 + iVar5) | uVar7;
        }
      }
      if (((uint)bVar2 & uVar4 - 1) != 0) {
        iVar5 = (local_40 - 8) + (local_8 / 0x18) * 4;
        iVar6 = local_8 % 0x18;
        uVar7 = 1 << (0xeU - ((char)iVar6 + (char)(iVar6 / 0xc) * -0xc) & 0x1f);
        if (iVar6 < 0xc) {
          *(uint *)(&DAT_0002d2f8 + iVar5) = *(uint *)(&DAT_0002d2f8 + iVar5) | uVar7 << 0x10;
        }
        else {
          *(uint *)(&DAT_0002d2f8 + iVar5) = *(uint *)(&DAT_0002d2f8 + iVar5) | uVar7;
        }
      }
      local_40 = local_40 - 0x10;
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0xffffffff);
    local_44 = local_44 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x30);
  local_c = 0;
  ppuVar9 = &PTR_DAT_0002ae18;
  bVar2 = 0x18;
  do {
    local_20 = 0;
    do {
      iVar5 = *(int *)(&DAT_0002a418 +
                      (local_20 * 2 & 0x3c) +
                      ((int)local_20 >> 4 & 2U | local_20 & 1) * 0x40 + local_c * 0x200);
      local_24 = 0;
      do {
        uVar3 = (iVar5 << 4 |
                *(uint *)(&DAT_0002a518 +
                         (local_24 * 2 & 0x3c) +
                         ((int)local_24 >> 4 & 2U | local_24 & 1) * 0x40 + local_c * 0x200)) <<
                (bVar2 & 0x1f);
        uVar4 = local_20 << 6 | local_24;
        iVar6 = (uVar3 >> 0x18) * 8;
        *(undefined4 *)(*ppuVar9 + uVar4 * 8) = *(undefined4 *)(&DAT_0002d2f8 + iVar6);
        *(undefined4 *)(*ppuVar9 + uVar4 * 8 + 4) = *(undefined4 *)(&DAT_0002d2fc + iVar6);
        uVar7 = uVar3 >> 0xd & 0x7f8;
        *(uint *)(*ppuVar9 + uVar4 * 8) =
             *(uint *)(*ppuVar9 + uVar4 * 8) | *(uint *)(&DAT_0002daf8 + uVar7);
        *(uint *)(*ppuVar9 + uVar4 * 8 + 4) =
             *(uint *)(*ppuVar9 + uVar4 * 8 + 4) | *(uint *)(&DAT_0002dafc + uVar7);
        uVar7 = uVar3 >> 5 & 0x7f8;
        *(uint *)(*ppuVar9 + uVar4 * 8) =
             *(uint *)(*ppuVar9 + uVar4 * 8) | *(uint *)(&DAT_0002e2f8 + uVar7);
        *(uint *)(*ppuVar9 + uVar4 * 8 + 4) =
             *(uint *)(*ppuVar9 + uVar4 * 8 + 4) | *(uint *)(&DAT_0002e2fc + uVar7);
        iVar6 = (uVar3 & 0xff) * 8;
        *(uint *)(*ppuVar9 + uVar4 * 8) =
             *(uint *)(*ppuVar9 + uVar4 * 8) | *(uint *)(&DAT_0002eaf8 + iVar6);
        *(uint *)(*ppuVar9 + uVar4 * 8 + 4) =
             *(uint *)(*ppuVar9 + uVar4 * 8 + 4) | *(uint *)(&DAT_0002eafc + iVar6);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 0x40);
      local_20 = local_20 + 1;
    } while ((int)local_20 < 0x40);
    ppuVar9 = ppuVar9 + 1;
    bVar2 = bVar2 - 8;
    local_c = local_c + 1;
  } while (local_c < 4);
  local_8 = 0x2f;
  iVar5 = 0x5f;
  local_58 = &DAT_0002a394;
  piVar10 = &DAT_0002a394;
  do {
    *(int *)(&DAT_0002d1f4 + *piVar10 * 4) = local_8;
    (&DAT_0002d274)[*local_58] = iVar5;
    *(int *)(&DAT_0002d1f4 + piVar10[-1] * 4) = local_8 + -1;
    (&DAT_0002d274)[local_58[-1]] = iVar5 + -1;
    *(int *)(&DAT_0002d1f4 + piVar10[-2] * 4) = local_8 + -2;
    (&DAT_0002d274)[local_58[-2]] = iVar5 + -2;
    *(int *)(&DAT_0002d1f4 + piVar10[-3] * 4) = local_8 + -3;
    (&DAT_0002d274)[local_58[-3]] = iVar5 + -3;
    *(int *)(&DAT_0002d1f4 + piVar10[-4] * 4) = local_8 + -4;
    (&DAT_0002d274)[local_58[-4]] = iVar5 + -4;
    *(int *)(&DAT_0002d1f4 + piVar10[-5] * 4) = local_8 + -5;
    (&DAT_0002d274)[local_58[-5]] = iVar5 + -5;
    *(int *)(&DAT_0002d1f4 + piVar10[-6] * 4) = local_8 + -6;
    (&DAT_0002d274)[local_58[-6]] = iVar5 + -6;
    *(int *)(&DAT_0002d1f4 + piVar10[-7] * 4) = local_8 + -7;
    (&DAT_0002d274)[local_58[-7]] = iVar5 + -7;
    *(int *)(&DAT_0002d1f4 + piVar10[-8] * 4) = local_8 + -8;
    (&DAT_0002d274)[local_58[-8]] = iVar5 + -8;
    *(int *)(&DAT_0002d1f4 + piVar10[-9] * 4) = local_8 + -9;
    (&DAT_0002d274)[local_58[-9]] = iVar5 + -9;
    *(int *)(&DAT_0002d1f4 + piVar10[-10] * 4) = local_8 + -10;
    (&DAT_0002d274)[local_58[-10]] = iVar5 + -10;
    *(int *)(&DAT_0002d1f4 + piVar10[-0xb] * 4) = local_8 + -0xb;
    (&DAT_0002d274)[local_58[-0xb]] = iVar5 + -0xb;
    local_58 = local_58 + -0xc;
    piVar10 = piVar10 + -0xc;
    iVar5 = iVar5 + -0xc;
    local_8 = local_8 + -0xc;
  } while (local_8 != -1);
  FUN_000084d0(&DAT_000322f8,0x2000);
  local_8 = 0;
  local_38 = &DAT_0002ad18;
  do {
    iVar5 = local_8;
    if (local_8 < 0) {
      iVar5 = local_8 + 0x1f;
    }
    iVar6 = (int)(&DAT_0002d1f8)[*local_38 + -1] / 6;
    uVar4 = *(uint *)(&DAT_0002ae98 + (&DAT_0002d1f8)[*local_38 + -1] * 4 + iVar6 * -0x18);
    uVar7 = (&DAT_0002ae30)[local_8 % 0x20];
    uVar3 = 0x3f;
    iVar5 = (iVar5 >> 5) * 4;
    local_58 = (int *)(iVar6 * 0x200 + 0x1f8);
    do {
      if ((uVar4 & uVar3) != 0) {
        *(uint *)(&DAT_000322f8 + iVar5 + (int)local_58) =
             *(uint *)(&DAT_000322f8 + iVar5 + (int)local_58) | uVar7;
      }
      if ((uVar4 & uVar3 - 1) != 0) {
        puVar1 = (uint *)((int)local_58 + 0x322f0 + iVar5);
        *puVar1 = *puVar1 | uVar7;
      }
      if ((uVar4 & uVar3 - 2) != 0) {
        puVar1 = (uint *)((int)local_58 + 0x322e8 + iVar5);
        *puVar1 = *puVar1 | uVar7;
      }
      if ((uVar4 & uVar3 - 3) != 0) {
        puVar1 = (uint *)((int)local_58 + 0x322e0 + iVar5);
        *puVar1 = *puVar1 | uVar7;
      }
      local_58 = (int *)((int)local_58 + -0x20);
      uVar3 = uVar3 - 4;
    } while (uVar3 != 0xffffffff);
    local_38 = local_38 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x40);
  DAT_0002aeb0 = DAT_0002aeb0 + 1;
  return;
}



/* --- FUN_00008db0 @ 00008db0 --- */

void FUN_00008db0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0xfff;
  do {
    uVar1 = (*param_1 ^ param_1[1]) & param_2;
    *param_1 = *param_1 ^ uVar1;
    param_1[1] = param_1[1] ^ uVar1;
    uVar1 = (param_1[2] ^ param_1[3]) & param_2;
    param_1[2] = param_1[2] ^ uVar1;
    param_1[3] = param_1[3] ^ uVar1;
    uVar1 = (param_1[4] ^ param_1[5]) & param_2;
    param_1[4] = param_1[4] ^ uVar1;
    param_1[5] = param_1[5] ^ uVar1;
    uVar1 = (param_1[6] ^ param_1[7]) & param_2;
    param_1[6] = param_1[6] ^ uVar1;
    param_1[7] = param_1[7] ^ uVar1;
    uVar1 = (param_1[8] ^ param_1[9]) & param_2;
    param_1[8] = param_1[8] ^ uVar1;
    param_1[9] = param_1[9] ^ uVar1;
    uVar1 = (param_1[10] ^ param_1[0xb]) & param_2;
    param_1[10] = param_1[10] ^ uVar1;
    param_1[0xb] = param_1[0xb] ^ uVar1;
    uVar1 = (param_1[0xc] ^ param_1[0xd]) & param_2;
    param_1[0xc] = param_1[0xc] ^ uVar1;
    param_1[0xd] = param_1[0xd] ^ uVar1;
    uVar1 = (param_1[0xe] ^ param_1[0xf]) & param_2;
    param_1[0xe] = param_1[0xe] ^ uVar1;
    param_1[0xf] = param_1[0xf] ^ uVar1;
    param_1 = param_1 + 0x10;
    iVar2 = iVar2 + -8;
  } while (iVar2 != -1);
  return;
}



/* --- FUN_00008e40 @ 00008e40 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008e40(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *local_18;
  int local_14;
  uint local_c;
  uint local_8;
  
  if (DAT_0002aeb0 == 0) {
    FUN_00008530();
  }
  if ((DAT_0002aeb4 != *param_1) || (DAT_0002aeb5 != param_1[1])) {
    DAT_0002aeb4 = *param_1;
    DAT_0002aeb5 = param_1[1];
    uVar3 = 0;
    local_8 = 0;
    local_14 = 0;
    local_18 = param_1;
    do {
      if (*local_18 < 0x61) {
        if (*local_18 < 0x41) {
          local_c = *local_18 - 0x2e;
        }
        else {
          local_c = *local_18 - 0x35;
        }
      }
      else {
        local_c = *local_18 - 0x3b;
      }
      if (0x3f < local_c) {
        local_c = 0;
      }
      uVar4 = 0;
      do {
        if ((local_c >> (uVar4 & 0x1f) & 1) != 0) {
          uVar2 = local_14 + uVar4;
          uVar1 = 1 << (0xeU - ((char)uVar2 + (char)(uVar2 / 0xc) * -0xc) & 0x1f);
          if (uVar2 < 0xc) {
            uVar1 = uVar1 << 0x10;
          }
          uVar3 = uVar3 | uVar1;
        }
        if ((local_c >> (uVar4 + 1 & 0x1f) & 1) != 0) {
          uVar2 = local_14 + uVar4 + 1;
          uVar1 = 1 << (0xeU - ((char)uVar2 + (char)(uVar2 / 0xc) * -0xc) & 0x1f);
          if (uVar2 < 0xc) {
            uVar1 = uVar1 << 0x10;
          }
          uVar3 = uVar3 | uVar1;
        }
        if ((local_c >> (uVar4 + 2 & 0x1f) & 1) != 0) {
          uVar2 = local_14 + uVar4 + 2;
          uVar1 = 1 << (0xeU - ((char)uVar2 + (char)(uVar2 / 0xc) * -0xc) & 0x1f);
          if (uVar2 < 0xc) {
            uVar1 = uVar1 << 0x10;
          }
          uVar3 = uVar3 | uVar1;
        }
        uVar4 = uVar4 + 3;
      } while (uVar4 < 6);
      local_14 = local_14 + 6;
      local_18 = local_18 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < 2);
    FUN_00008db0(&DAT_00038c00,uVar3 ^ _DAT_0002aeb8);
    FUN_00008db0(&DAT_00040c80,uVar3 ^ _DAT_0002aeb8);
    FUN_00008db0(&DAT_00050c80,uVar3 ^ _DAT_0002aeb8);
    FUN_00008db0(&DAT_00048c80,uVar3 ^ _DAT_0002aeb8);
    _DAT_0002aeb8 = uVar3;
  }
  return;
}



/* --- FUN_00009020 @ 00009020 --- */

void FUN_00009020(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint *local_8;
  
  local_8 = &DAT_00040c00;
  uVar2 = *(uint *)(&DAT_0002f2f8 + (*param_1 & 0x7f) * 4) |
          *(uint *)(&DAT_0002f6f8 + (param_1[1] & 0x7f) * 4) |
          *(uint *)(&DAT_0002faf8 + (param_1[2] & 0x7f) * 4) |
          *(uint *)(&DAT_0002fef8 + (param_1[3] & 0x7f) * 4) |
          *(uint *)(&DAT_000302f8 + (param_1[4] & 0x7f) * 4) |
          *(uint *)(&DAT_000306f8 + (param_1[5] & 0x7f) * 4) |
          *(uint *)(&DAT_00030af8 + (param_1[6] & 0x7f) * 4) |
          *(uint *)(&DAT_00030ef8 + (param_1[7] & 0x7f) * 4);
  uVar1 = *(uint *)(&DAT_0002f4f8 + (*param_1 & 0x7f) * 4) |
          *(uint *)(&DAT_0002f8f8 + (param_1[1] & 0x7f) * 4) |
          *(uint *)(&DAT_0002fcf8 + (param_1[2] & 0x7f) * 4) |
          *(uint *)(&DAT_000300f8 + (param_1[3] & 0x7f) * 4) |
          *(uint *)(&DAT_000304f8 + (param_1[4] & 0x7f) * 4) |
          *(uint *)(&DAT_000308f8 + (param_1[5] & 0x7f) * 4) |
          *(uint *)(&DAT_00030cf8 + (param_1[6] & 0x7f) * 4) |
          *(uint *)(&DAT_000310f8 + (param_1[7] & 0x7f) * 4);
  local_c = &DAT_0002a1d8;
  local_10 = &DAT_0002a1d8;
  local_14 = &DAT_0002a1d8;
  local_18 = &DAT_0002a1d8;
  local_1c = &DAT_0002a1d8;
  do {
    uVar2 = uVar2 << ((byte)*local_1c & 0x1f) | uVar2 >> (0x1cU - (char)*local_18 & 0x1f);
    *local_8 = *(uint *)(&DAT_000312f8 + (uVar2 >> 0x15 & 0x7f) * 4) |
               (&DAT_000314f8)[uVar2 >> 0xe & 0x7f] |
               *(uint *)(&DAT_000316f8 + (uVar2 >> 7 & 0x7f) * 4) |
               *(uint *)(&DAT_000318f8 + (uVar2 & 0x7f) * 4);
    uVar1 = uVar1 << ((byte)*local_14 & 0x1f) | uVar1 >> (0x1cU - (char)*local_10 & 0x1f);
    local_8[1] = *(uint *)(&DAT_00031af8 + (uVar1 >> 0x15 & 0x7f) * 4) |
                 *(uint *)(&DAT_00031cf8 + (uVar1 >> 0xe & 0x7f) * 4) |
                 *(uint *)(&DAT_00031ef8 + (uVar1 >> 7 & 0x7f) * 4) |
                 *(uint *)(&DAT_000320f8 + (uVar1 & 0x7f) * 4);
    uVar2 = uVar2 << ((byte)local_1c[1] & 0x1f) | uVar2 >> (0x1cU - (char)local_18[1] & 0x1f);
    local_8[2] = *(uint *)(&DAT_000312f8 + (uVar2 >> 0x15 & 0x7f) * 4) |
                 (&DAT_000314f8)[uVar2 >> 0xe & 0x7f] |
                 *(uint *)(&DAT_000316f8 + (uVar2 >> 7 & 0x7f) * 4) |
                 *(uint *)(&DAT_000318f8 + (uVar2 & 0x7f) * 4);
    uVar1 = uVar1 << ((byte)local_14[1] & 0x1f) | uVar1 >> (0x1cU - (char)local_10[1] & 0x1f);
    local_8[3] = *(uint *)(&DAT_00031af8 + (uVar1 >> 0x15 & 0x7f) * 4) |
                 *(uint *)(&DAT_00031cf8 + (uVar1 >> 0xe & 0x7f) * 4) |
                 *(uint *)(&DAT_00031ef8 + (uVar1 >> 7 & 0x7f) * 4) |
                 *(uint *)(&DAT_000320f8 + (uVar1 & 0x7f) * 4);
    local_8 = local_8 + 4;
    local_10 = local_10 + 2;
    local_14 = local_14 + 2;
    local_18 = local_18 + 2;
    local_1c = local_1c + 2;
    local_c = local_c + 2;
  } while ((int)local_c < 0x2a215);
  DAT_0002aebc = 0;
  return;
}



/* --- FUN_000092a0 @ 000092a0 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000092a0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  uVar1 = (param_1 ^ param_2) & _DAT_0002aeb8;
  param_1 = param_1 ^ uVar1;
  param_2 = param_2 ^ uVar1;
  uVar1 = (param_4 ^ param_3) & _DAT_0002aeb8;
  param_3 = param_3 ^ uVar1;
  param_4 = param_4 ^ uVar1;
  iVar15 = (param_4 >> 3 & 0x3f) * 8;
  iVar2 = (param_4 >> 9 & 0x3f) * 8;
  iVar3 = (param_4 >> 0x13 & 0x3f) * 8;
  uVar14 = param_4 >> 0x16 & 0x1f8;
  iVar4 = (param_3 >> 3 & 0x3f) * 8;
  iVar5 = (param_3 >> 9 & 0x3f) * 8;
  iVar6 = (param_3 >> 0x13 & 0x3f) * 8;
  uVar16 = param_3 >> 0x16 & 0x1f8;
  iVar7 = (param_2 >> 3 & 0x3f) * 8;
  iVar8 = (param_2 >> 9 & 0x3f) * 8;
  iVar9 = (param_2 >> 0x13 & 0x3f) * 8;
  uVar1 = param_2 >> 0x16 & 0x1f8;
  iVar10 = (param_1 >> 3 & 0x3f) * 8;
  iVar11 = (param_1 >> 9 & 0x3f) * 8;
  iVar12 = (param_1 >> 0x13 & 0x3f) * 8;
  uVar13 = param_1 >> 0x16 & 0x1f8;
  _DAT_0002d1e0 =
       *(uint *)(&DAT_000340f8 + iVar15) | *(uint *)(&DAT_00033ef8 + iVar2) |
       *(uint *)(&DAT_00033cf8 + iVar3) | *(uint *)(&DAT_00033af8 + uVar14) |
       *(uint *)(&DAT_000338f8 + iVar4) | *(uint *)(&DAT_000336f8 + iVar5) |
       *(uint *)(&DAT_000334f8 + iVar6) | *(uint *)(&DAT_000332f8 + uVar16) |
       *(uint *)(&DAT_000330f8 + iVar7) | *(uint *)(&DAT_00032ef8 + iVar8) |
       *(uint *)(&DAT_00032cf8 + iVar9) | *(uint *)(&DAT_00032af8 + uVar1) |
       *(uint *)(&DAT_000328f8 + iVar10) | *(uint *)(&DAT_000326f8 + iVar11) |
       *(uint *)(&DAT_000324f8 + iVar12) | *(uint *)(&DAT_000322f8 + uVar13);
  _DAT_0002d1e4 =
       *(uint *)(&DAT_000340fc + iVar15) | *(uint *)(&DAT_00033efc + iVar2) |
       *(uint *)(&DAT_00033cfc + iVar3) | *(uint *)(&DAT_00033afc + uVar14) |
       *(uint *)(&DAT_000338fc + iVar4) | *(uint *)(&DAT_000336fc + iVar5) |
       *(uint *)(&DAT_000334fc + iVar6) | *(uint *)(&DAT_000332fc + uVar16) |
       *(uint *)(&DAT_000330fc + iVar7) | *(uint *)(&DAT_00032efc + iVar8) |
       *(uint *)(&DAT_00032cfc + iVar9) | *(uint *)(&DAT_00032afc + uVar1) |
       *(uint *)(&DAT_000328fc + iVar10) | *(uint *)(&DAT_000326fc + iVar11) |
       *(uint *)(&DAT_000324fc + iVar12) | *(uint *)(&DAT_000322fc + uVar13);
  return &DAT_0002d1e0;
}



/* --- FUN_00009490 @ 00009490 --- */

undefined * FUN_00009490(uint param_1,uint param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char local_8;
  
  DAT_0002d1e8 = *param_3;
  DAT_0002d1e9 = param_3[1];
  if (DAT_0002d1e9 == '\0') {
    DAT_0002d1e9 = *param_3;
  }
  bVar5 = (byte)(param_1 >> 0x18);
  if (param_1 >> 0x1a < 0x26) {
    if (param_1 >> 0x1a < 0xc) {
      DAT_0002d1ea = (bVar5 >> 2) + 0x2e;
    }
    else {
      DAT_0002d1ea = (bVar5 >> 2) + 0x35;
    }
  }
  else {
    DAT_0002d1ea = (bVar5 >> 2) + 0x3b;
  }
  bVar5 = 0x14;
  iVar6 = 1;
  do {
    uVar3 = param_1 >> (bVar5 & 0x1f);
    if ((uVar3 & 0x3f) < 0x26) {
      uVar3 = param_1 >> (bVar5 & 0x1f);
      if ((uVar3 & 0x3f) < 0xc) {
        cVar2 = ((byte)(param_1 >> (bVar5 & 0x1f)) & 0x3f) + 0x2e;
      }
      else {
        cVar2 = ((byte)uVar3 & 0x3f) + 0x35;
      }
    }
    else {
      cVar2 = ((byte)uVar3 & 0x3f) + 0x3b;
    }
    (&DAT_0002d1ea)[iVar6] = cVar2;
    bVar1 = bVar5 - 6;
    uVar3 = param_1 >> (bVar1 & 0x1f);
    if ((uVar3 & 0x3f) < 0x26) {
      uVar3 = param_1 >> (bVar1 & 0x1f);
      if ((uVar3 & 0x3f) < 0xc) {
        cVar2 = ((byte)(param_1 >> (bVar1 & 0x1f)) & 0x3f) + 0x2e;
      }
      else {
        cVar2 = ((byte)uVar3 & 0x3f) + 0x35;
      }
    }
    else {
      cVar2 = ((byte)uVar3 & 0x3f) + 0x3b;
    }
    (&DAT_0002d1eb)[iVar6] = cVar2;
    bVar5 = bVar5 - 0xc;
    iVar6 = iVar6 + 2;
  } while (iVar6 < 5);
  uVar7 = (param_2 & 0xf) << 2;
  uVar3 = param_2 >> 2 | param_1 << 0x1e;
  bVar5 = (byte)(uVar3 >> 0x18);
  if (uVar3 >> 0x1a < 0x26) {
    if (uVar3 >> 0x1a < 0xc) {
      DAT_0002d1ef = (bVar5 >> 2) + 0x2e;
    }
    else {
      DAT_0002d1ef = (bVar5 >> 2) + 0x35;
    }
  }
  else {
    DAT_0002d1ef = (bVar5 >> 2) + 0x3b;
  }
  bVar5 = 0x14;
  iVar6 = 6;
  do {
    uVar4 = uVar3 >> (bVar5 & 0x1f);
    if ((uVar4 & 0x3f) < 0x26) {
      uVar4 = uVar3 >> (bVar5 & 0x1f);
      if ((uVar4 & 0x3f) < 0xc) {
        cVar2 = ((byte)(uVar3 >> (bVar5 & 0x1f)) & 0x3f) + 0x2e;
      }
      else {
        cVar2 = ((byte)uVar4 & 0x3f) + 0x35;
      }
    }
    else {
      cVar2 = ((byte)uVar4 & 0x3f) + 0x3b;
    }
    (&DAT_0002d1ea)[iVar6] = cVar2;
    bVar1 = bVar5 - 6;
    uVar4 = uVar3 >> (bVar1 & 0x1f);
    if ((uVar4 & 0x3f) < 0x26) {
      uVar4 = uVar3 >> (bVar1 & 0x1f);
      if ((uVar4 & 0x3f) < 0xc) {
        cVar2 = ((byte)(uVar3 >> (bVar1 & 0x1f)) & 0x3f) + 0x2e;
      }
      else {
        cVar2 = ((byte)uVar4 & 0x3f) + 0x35;
      }
    }
    else {
      cVar2 = ((byte)uVar4 & 0x3f) + 0x3b;
    }
    (&DAT_0002d1eb)[iVar6] = cVar2;
    bVar5 = bVar5 - 0xc;
    iVar6 = iVar6 + 2;
  } while (iVar6 < 10);
  local_8 = (char)uVar7;
  if (uVar7 < 0x26) {
    if (uVar7 < 0xc) {
      DAT_0002d1f4 = local_8 + '.';
    }
    else {
      DAT_0002d1f4 = local_8 + '5';
    }
  }
  else {
    DAT_0002d1f4 = local_8 + ';';
  }
  DAT_0002d1f5 = 0;
  return &DAT_0002d1e8;
}



/* --- FUN_00009790 @ 00009790 --- */

void FUN_00009790(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_10 [12];
  
  FUN_00008e40(param_2);
  FUN_000084d0(local_10,9);
  FUN_00008410(local_10,param_1,8);
  FUN_00009020(local_10);
  puVar1 = (undefined4 *)FUN_00010698(0,0,0,0,0x19);
  FUN_00009490(*puVar1,puVar1[1],param_2);
  return;
}



/* --- FUN_000097f0 @ 000097f0 --- */

void FUN_000097f0(undefined4 param_1,undefined4 param_2)

{
  FUN_00009790(param_1,param_2);
  return;
}



/* --- FUN_00009810 @ 00009810 --- */

void FUN_00009810(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_00008e40(&DAT_00009804);
  if ((param_2 == 0) != (DAT_0002aebc == 0)) {
    iVar9 = 0;
    local_18 = 0x78;
    local_1c = &DAT_00040c00;
    local_20 = &DAT_00040c78;
    local_24 = &DAT_00040c00;
    local_28 = &DAT_00040c78;
    do {
      uVar1 = *local_28;
      *local_20 = *local_24;
      *local_1c = uVar1;
      uVar1 = *(undefined4 *)((int)&DAT_00040c04 + local_18);
      *(undefined4 *)((int)&DAT_00040c04 + local_18) = (&DAT_00040c04)[iVar9 * 2];
      (&DAT_00040c04)[iVar9 * 2] = uVar1;
      uVar1 = local_28[-2];
      local_20[-2] = local_24[2];
      local_1c[2] = uVar1;
      uVar1 = *(undefined4 *)(local_18 + 0x40bfc);
      *(undefined4 *)(local_18 + 0x40bfc) = (&DAT_00040c0c)[iVar9 * 2];
      (&DAT_00040c0c)[iVar9 * 2] = uVar1;
      uVar1 = local_28[-4];
      local_20[-4] = local_24[4];
      local_1c[4] = uVar1;
      uVar1 = *(undefined4 *)(local_18 + 0x40bf4);
      *(undefined4 *)(local_18 + 0x40bf4) = (&DAT_00040c14)[iVar9 * 2];
      (&DAT_00040c14)[iVar9 * 2] = uVar1;
      uVar1 = local_28[-6];
      local_20[-6] = local_24[6];
      local_1c[6] = uVar1;
      uVar1 = *(undefined4 *)(local_18 + 0x40bec);
      *(undefined4 *)(local_18 + 0x40bec) = (&DAT_00040c1c)[iVar9 * 2];
      (&DAT_00040c1c)[iVar9 * 2] = uVar1;
      local_1c = local_1c + 8;
      local_24 = local_24 + 8;
      local_20 = local_20 + -8;
      local_28 = local_28 + -8;
      local_18 = local_18 + -0x20;
      iVar9 = iVar9 + 4;
    } while (iVar9 < 8);
    DAT_0002aebc = param_2;
  }
  local_8 = 0;
  piVar8 = &DAT_0002a2d8;
  iVar9 = 0;
  do {
    iVar6 = iVar9;
    if (*(char *)(param_1 + -1 + *(int *)(*piVar8 * 4 + 0x2ac14)) != '\0') {
      uVar3 = 1 << (0xeU - ((char)iVar6 + (char)(iVar6 / 0xc) * -0xc) & 0x1f);
      if (iVar6 < 0xc) {
        uVar3 = uVar3 << 0x10;
      }
      local_8 = local_8 | uVar3;
    }
    iVar9 = iVar6 + 1;
    if (*(char *)(param_1 + -1 + *(int *)(piVar8[1] * 4 + 0x2ac14)) != '\0') {
      uVar3 = 1 << (0xeU - ((char)iVar9 + (char)(iVar9 / 0xc) * -0xc) & 0x1f);
      if (iVar9 < 0xc) {
        uVar3 = uVar3 << 0x10;
      }
      local_8 = local_8 | uVar3;
    }
    iVar9 = iVar6 + 2;
    if (*(char *)(param_1 + -1 + *(int *)(piVar8[2] * 4 + 0x2ac14)) != '\0') {
      uVar3 = 1 << (0xeU - ((char)iVar9 + (char)(iVar9 / 0xc) * -0xc) & 0x1f);
      if (iVar9 < 0xc) {
        uVar3 = uVar3 << 0x10;
      }
      local_8 = local_8 | uVar3;
    }
    piVar8 = piVar8 + 3;
    iVar9 = iVar6 + 3;
  } while (iVar9 < 0x18);
  local_c = 0;
  if (iVar9 < 0x30) {
    iVar5 = iVar6 + -0x15;
    if ((0x30U - iVar9 & 1) != 0) {
      if ((*(char *)(param_1 + -1 + *(int *)(*(int *)(iVar5 * 4 + 0x2a338) * 4 + 0x2ac14)) != '\0')
         && (local_c = 1 << (0xeU - ((char)iVar5 + (char)(iVar5 / 0xc) * -0xc) & 0x1f), iVar5 < 0xc)
         ) {
        local_c = local_c << 0x10;
      }
      iVar5 = iVar6 + -0x14;
      iVar9 = iVar6 + 4;
      if (0x2f < iVar9) goto LAB_00009bac;
    }
    piVar8 = (int *)(iVar5 * 4 + 0x2a338);
    do {
      if (*(char *)(param_1 + -1 + *(int *)(*piVar8 * 4 + 0x2ac14)) != '\0') {
        uVar3 = 1 << (0xeU - ((char)iVar5 + (char)(iVar5 / 0xc) * -0xc) & 0x1f);
        if (iVar5 < 0xc) {
          uVar3 = uVar3 << 0x10;
        }
        local_c = local_c | uVar3;
      }
      iVar6 = iVar5 + 1;
      if (*(char *)(param_1 + -1 + *(int *)(piVar8[1] * 4 + 0x2ac14)) != '\0') {
        uVar3 = 1 << (0xeU - ((char)iVar6 + (char)(iVar6 / 0xc) * -0xc) & 0x1f);
        if (iVar6 < 0xc) {
          uVar3 = uVar3 << 0x10;
        }
        local_c = local_c | uVar3;
      }
      piVar8 = piVar8 + 2;
      iVar5 = iVar5 + 2;
      iVar9 = iVar9 + 2;
    } while (iVar9 < 0x30);
  }
LAB_00009bac:
  local_10 = 0;
  piVar8 = &DAT_0002a2d8;
  iVar9 = 0;
  do {
    iVar6 = iVar9;
    if (*(char *)(param_1 + -1 + (&DAT_0002ac94)[*piVar8]) != '\0') {
      uVar3 = 1 << (0xeU - ((char)iVar6 + (char)(iVar6 / 0xc) * -0xc) & 0x1f);
      if (iVar6 < 0xc) {
        uVar3 = uVar3 << 0x10;
      }
      local_10 = local_10 | uVar3;
    }
    iVar9 = iVar6 + 1;
    if (*(char *)(param_1 + -1 + (&DAT_0002ac94)[piVar8[1]]) != '\0') {
      uVar3 = 1 << (0xeU - ((char)iVar9 + (char)(iVar9 / 0xc) * -0xc) & 0x1f);
      if (iVar9 < 0xc) {
        uVar3 = uVar3 << 0x10;
      }
      local_10 = local_10 | uVar3;
    }
    iVar9 = iVar6 + 2;
    if (*(char *)(param_1 + -1 + (&DAT_0002ac94)[piVar8[2]]) != '\0') {
      uVar3 = 1 << (0xeU - ((char)iVar9 + (char)(iVar9 / 0xc) * -0xc) & 0x1f);
      if (iVar9 < 0xc) {
        uVar3 = uVar3 << 0x10;
      }
      local_10 = local_10 | uVar3;
    }
    piVar8 = piVar8 + 3;
    iVar9 = iVar6 + 3;
  } while (iVar9 < 0x18);
  uVar3 = 0;
  if (iVar9 < 0x30) {
    iVar5 = iVar6 + -0x15;
    if ((0x30U - iVar9 & 1) != 0) {
      if ((*(char *)(param_1 + -1 + (&DAT_0002ac94)[*(int *)(iVar5 * 4 + 0x2a338)]) != '\0') &&
         (uVar3 = 1 << (0xeU - ((char)iVar5 + (char)(iVar5 / 0xc) * -0xc) & 0x1f), iVar5 < 0xc)) {
        uVar3 = uVar3 << 0x10;
      }
      iVar5 = iVar6 + -0x14;
      iVar9 = iVar6 + 4;
      if (0x2f < iVar9) goto LAB_00009de1;
    }
    local_14 = (int *)(iVar5 * 4 + 0x2a338);
    do {
      if (*(char *)(param_1 + -1 + (&DAT_0002ac94)[*local_14]) != '\0') {
        uVar4 = 1 << (0xeU - ((char)iVar5 + (char)(iVar5 / 0xc) * -0xc) & 0x1f);
        if (iVar5 < 0xc) {
          uVar4 = uVar4 << 0x10;
        }
        uVar3 = uVar3 | uVar4;
      }
      iVar6 = iVar5 + 1;
      if (*(char *)(param_1 + -1 + (&DAT_0002ac94)[local_14[1]]) != '\0') {
        uVar4 = 1 << (0xeU - ((char)iVar6 + (char)(iVar6 / 0xc) * -0xc) & 0x1f);
        if (iVar6 < 0xc) {
          uVar4 = uVar4 << 0x10;
        }
        uVar3 = uVar3 | uVar4;
      }
      local_14 = local_14 + 2;
      iVar5 = iVar5 + 2;
      iVar9 = iVar9 + 2;
    } while (iVar9 < 0x30);
  }
LAB_00009de1:
  puVar2 = (uint *)FUN_00010698(local_8,local_c,local_10,uVar3,1);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  puVar7 = &DAT_0002ae30;
  puVar2 = &DAT_0002ae30;
  do {
    *(bool *)param_1 = (*puVar2 & uVar3) != 0;
    *(bool *)(param_1 + 1) = (puVar2[1] & uVar3) != 0;
    *(bool *)(param_1 + 2) = (puVar2[2] & uVar3) != 0;
    *(bool *)(param_1 + 3) = (puVar2[3] & uVar3) != 0;
    *(bool *)(param_1 + 4) = (puVar2[4] & uVar3) != 0;
    *(bool *)(param_1 + 5) = (puVar2[5] & uVar3) != 0;
    iVar9 = param_1 + 7;
    *(bool *)(param_1 + 6) = (puVar2[6] & uVar3) != 0;
    param_1 = param_1 + 8;
    *(bool *)iVar9 = (puVar2[7] & uVar3) != 0;
    puVar2 = puVar2 + 8;
    puVar7 = puVar7 + 8;
  } while ((int)puVar7 < 0x2aead);
  puVar7 = &DAT_0002ae30;
  puVar2 = &DAT_0002ae30;
  do {
    *(bool *)param_1 = (*puVar2 & uVar4) != 0;
    *(bool *)(param_1 + 1) = (puVar2[1] & uVar4) != 0;
    *(bool *)(param_1 + 2) = (puVar2[2] & uVar4) != 0;
    *(bool *)(param_1 + 3) = (puVar2[3] & uVar4) != 0;
    *(bool *)(param_1 + 4) = (puVar2[4] & uVar4) != 0;
    *(bool *)(param_1 + 5) = (puVar2[5] & uVar4) != 0;
    iVar9 = param_1 + 7;
    *(bool *)(param_1 + 6) = (puVar2[6] & uVar4) != 0;
    param_1 = param_1 + 8;
    *(bool *)iVar9 = (puVar2[7] & uVar4) != 0;
    puVar2 = puVar2 + 8;
    puVar7 = puVar7 + 8;
  } while ((int)puVar7 < 0x2aead);
  return;
}



/* --- FUN_00009f60 @ 00009f60 --- */

void FUN_00009f60(char *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte local_c [8];
  
  FUN_00008e40(&DAT_00009804);
  iVar9 = 0;
  do {
    pcVar1 = param_1 + 8;
    local_c[iVar9] =
         (byte)(((((((*param_1 * '\x02' | param_1[1]) * '\x02' | param_1[2]) * '\x02' | param_1[3])
                   * '\x02' | param_1[4]) * '\x02' | param_1[5]) * '\x02' | param_1[6]) * '\x02' |
               param_1[7]) >> 1;
    pbVar2 = (byte *)(param_1 + 9);
    pbVar3 = (byte *)(param_1 + 10);
    pbVar4 = (byte *)(param_1 + 0xb);
    pbVar5 = (byte *)(param_1 + 0xc);
    pbVar6 = (byte *)(param_1 + 0xd);
    pbVar7 = (byte *)(param_1 + 0xe);
    pbVar8 = (byte *)(param_1 + 0xf);
    param_1 = param_1 + 0x10;
    local_c[iVar9 + 1] =
         (byte)(((((((*pcVar1 * '\x02' | *pbVar2) * '\x02' | *pbVar3) * '\x02' | *pbVar4) * '\x02' |
                  *pbVar5) * '\x02' | *pbVar6) * '\x02' | *pbVar7) * '\x02' | *pbVar8) >> 1;
    iVar9 = iVar9 + 2;
  } while (iVar9 < 8);
  FUN_00009020(local_c);
  return;
}



/* --- FUN_00009ff8 @ 00009ff8 --- */

undefined4 FUN_00009ff8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_0000a028(param_1,&local_8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return local_8;
}



/* --- FUN_0000a028 @ 0000a028 --- */

undefined4 FUN_0000a028(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint *local_1c;
  int local_18;
  uint local_14 [3];
  uint local_8;
  
  local_1c = local_14;
  do {
    uVar6 = 0;
    local_18 = 10;
    pbVar5 = param_1;
    if (*param_1 == 0x30) {
      pbVar5 = param_1 + 1;
      if ((*pbVar5 == 0x78) || (*pbVar5 == 0x58)) {
        local_18 = 0x10;
        pbVar5 = param_1 + 2;
      }
      else {
        local_18 = 8;
      }
    }
    bVar1 = *pbVar5;
    while (bVar1 != 0) {
      if (((char)bVar1 < '\0') || ((PTR_DAT_0002b058[(uint)bVar1 * 2] & 8) == 0)) {
        if ((local_18 != 0x10) ||
           (((char)bVar1 < '\0' || (uVar3 = (uint)bVar1, (PTR_DAT_0002b058[uVar3 * 2] & 0x28) == 0))
           )) break;
        if ((PTR_DAT_0002b058[uVar3 * 2] & 2) == 0) {
          uVar6 = (uVar3 - 0x37) + uVar6 * 0x10;
        }
        else {
          uVar6 = (uVar3 - 0x57) + uVar6 * 0x10;
        }
      }
      else {
        uVar6 = (bVar1 - 0x30) + local_18 * uVar6;
      }
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    if (*pbVar5 != 0x2e) {
      if (*pbVar5 != 0) {
        if ((char)*pbVar5 < '\0') {
          return 0;
        }
        if ((PTR_DAT_0002b058[(uint)*pbVar5 * 2] & 0x10) == 0) {
          return 0;
        }
      }
      iVar2 = ((int)local_1c - (int)local_14 >> 2) + 1;
      if (iVar2 == 2) {
        if (0xffffff < uVar6) {
          return 0;
        }
        uVar3 = local_14[0] << 0x18;
      }
      else {
        if (iVar2 < 3) goto LAB_0000a1b0;
        if (iVar2 == 3) {
          if (0xffff < uVar6) {
            return 0;
          }
          uVar3 = local_14[0] << 0x18;
          uVar4 = local_14[1] << 0x10;
        }
        else {
          if (iVar2 != 4) goto LAB_0000a1b0;
          if (0xff < uVar6) {
            return 0;
          }
          uVar3 = local_14[0] << 0x18 | local_14[1] << 0x10;
          uVar4 = local_14[2] << 8;
        }
        uVar3 = uVar3 | uVar4;
      }
      uVar6 = uVar6 | uVar3;
LAB_0000a1b0:
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = CONCAT31(CONCAT21(CONCAT11((char)uVar6,(char)(uVar6 >> 8)),(char)(uVar6 >> 0x10))
                            ,(char)(uVar6 >> 0x18));
      }
      return 1;
    }
    if (&local_8 <= local_1c) {
      return 0;
    }
    if (0xff < uVar6) {
      return 0;
    }
    *local_1c = uVar6;
    local_1c = local_1c + 1;
    param_1 = pbVar5 + 1;
  } while( true );
}



/* --- FUN_0000a1d8 @ 0000a1d8 --- */

int FUN_0000a1d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,param_2,param_3);
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000a220 @ 0000a220 --- */

int FUN_0000a220(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000a248 @ 0000a248 --- */

undefined4 FUN_0000a248(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0000a278();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 2;
    puVar1[1] = param_1;
    uVar2 = 0;
  }
  return uVar2;
}



/* --- FUN_0000a278 @ 0000a278 --- */

undefined4 * FUN_0000a278(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)PTR_DAT_0002b048;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_00004690(0x188);
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = PTR_DAT_0002b048;
      PTR_DAT_0002b048 = (undefined *)puVar2;
      puVar2[1] = 1;
      return puVar2 + 2;
    }
    uVar3 = 0;
    if (puVar2[1] != 0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 8 + (int)puVar2) == 0) {
          return (undefined4 *)((int)puVar2 + iVar1 + 8);
        }
        iVar1 = iVar1 + 0xc;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)puVar2[1]);
    }
    if ((uint)puVar2[1] < 0x20) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  iVar1 = puVar2[1];
  puVar2[1] = puVar2[1] + 1;
  return puVar2 + iVar1 * 3 + 2;
}



/* --- FUN_0000a320 @ 0000a320 --- */

void FUN_0000a320(uint *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  if ((char)*param_1 < '\0') {
    ppuVar2 = &PTR_DAT_0002b160;
    puVar1 = PTR_DAT_0002b160;
    while (puVar1 != (undefined *)0x0) {
      if ((uint *)*ppuVar2 == param_1) {
        *ppuVar2 = (undefined *)param_1[0xd];
        break;
      }
      ppuVar2 = (undefined **)(*ppuVar2 + 0x34);
      puVar1 = *ppuVar2;
    }
    *param_1 = *param_1 & 0xffffff7f;
  }
  return;
}



/* --- FUN_0000a370 @ 0000a370 --- */

void FUN_0000a370(byte *param_1)

{
  if (-1 < (char)*param_1) {
    *param_1 = *param_1 | 0x80;
    *(undefined **)(param_1 + 0x34) = PTR_DAT_0002b160;
    PTR_DAT_0002b160 = param_1;
  }
  return;
}



/* --- FUN_0000a390 @ 0000a390 --- */

int FUN_0000a390(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  for (puVar1 = *(undefined4 **)(param_1 + 0x30); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((int)puVar1[2] < iVar2) {
      iVar2 = puVar1[2];
    }
  }
  return iVar2;
}



/* --- FUN_0000a3c0 @ 0000a3c0 --- */

void FUN_0000a3c0(uint *param_1)

{
  uint uVar1;
  
  *param_1 = *param_1 & 0xfffffeff;
  uVar1 = param_1[2];
  param_1[2] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_1[9];
  param_1[9] = uVar1;
  param_1[1] = param_1[3];
  return;
}



/* --- FUN_0000a3f0 @ 0000a3f0 --- */

void FUN_0000a3f0(uint *param_1)

{
  uint uVar1;
  
  *param_1 = *param_1 | 0x100;
  uVar1 = param_1[2];
  param_1[2] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_1[9];
  param_1[9] = uVar1;
  param_1[1] = param_1[2];
  return;
}



/* --- FUN_0000a420 @ 0000a420 --- */

undefined4 FUN_0000a420(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1[4] < param_1[5]) &&
     (iVar2 = (**(code **)param_1[0xe])(param_1,0xffffffff), iVar2 == -1)) {
    return 0xffffffff;
  }
  if ((*param_1 & 0x100) == 0) {
    param_1[3] = param_1[7];
    if (param_1[2] < param_1[5]) {
      param_1[2] = param_1[5];
    }
  }
  else {
    param_1[3] = param_1[10];
  }
  uVar1 = param_1[5];
  param_1[1] = uVar1;
  param_1[6] = uVar1;
  param_1[5] = uVar1;
  param_1[4] = uVar1;
  *param_1 = *param_1 & 0xfffff7ff;
  return 0;
}



/* --- FUN_0000a490 @ 0000a490 --- */

void FUN_0000a490(int param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_0000a3c0(param_1);
  }
  FUN_00005058(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* --- FUN_0000a4d0 @ 0000a4d0 --- */

void FUN_0000a4d0(int param_1,undefined4 param_2)

{
  (*(code *)**(undefined4 **)(param_1 + 0x38))(param_1,param_2);
  return;
}



/* --- FUN_0000a4f0 @ 0000a4f0 --- */

undefined4 FUN_0000a4f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_c;
  
  iStack_20 = param_1;
  iStack_24 = 0xa502;
  iVar2 = FUN_0000a390();
  iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) - iVar2;
  local_c = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24);
  if (local_c < iVar4) {
    local_c = 100;
    iStack_20 = iVar4 + 100;
    iStack_24 = 0xa532;
    iVar3 = FUN_00004690();
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    if (iVar2 < 0) {
      iStack_24 = iVar2 + *(int *)(param_1 + 0x2c);
      iStack_20 = -iVar2;
      iStack_2c = 0xa56b;
      iStack_28 = iVar3 + 100;
      FUN_0000b700();
      iStack_28 = (iVar3 + 100) - iVar2;
      iStack_24 = *(int *)(param_1 + 0xc);
      iStack_20 = *(int *)(param_1 + 8) - iStack_24;
    }
    else {
      iStack_28 = iVar3 + 100;
      iStack_24 = iVar2 + *(int *)(param_1 + 0xc);
      iStack_20 = iVar4;
    }
    iStack_2c = 0xa596;
    FUN_0000b700();
    if (*(int *)(param_1 + 0x24) != 0) {
      iStack_20 = *(undefined4 *)(param_1 + 0x24);
      iStack_24 = 0xa5a8;
      FUN_00005058();
    }
    *(int *)(param_1 + 0x24) = iVar3;
    *(int *)(param_1 + 0x2c) = iVar3 + 100 + iVar4;
  }
  else {
    local_c = local_c - iVar4;
    if (iVar2 < 0) {
      iStack_20 = -iVar2;
      iStack_24 = iVar2 + *(int *)(param_1 + 0x2c);
      iStack_28 = local_c + *(int *)(param_1 + 0x24);
      iStack_2c = 0xa5e1;
      FUN_00010928();
      iVar3 = (local_c + *(int *)(param_1 + 0x24)) - iVar2;
      iStack_30 = *(int *)(param_1 + 0xc);
      iStack_2c = *(int *)(param_1 + 8) - iStack_30;
      piVar5 = &iStack_30;
    }
    else {
      if (iVar4 < 1) goto LAB_0000a61c;
      iVar3 = local_c + *(int *)(param_1 + 0x24);
      iStack_24 = iVar2 + *(int *)(param_1 + 0xc);
      piVar5 = &iStack_24;
      iStack_20 = iVar4;
    }
    *(int *)((int)piVar5 + -4) = iVar3;
    *(undefined4 *)((int)piVar5 + -8) = 0xa61c;
    FUN_0000b700();
  }
LAB_0000a61c:
  *(int *)(param_1 + 0x28) = local_c + *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  for (puVar1 = *(undefined4 **)(param_1 + 0x30); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[2] = puVar1[2] - (iVar2 - iVar4);
  }
  return 0;
}



/* --- FUN_0000a650 @ 0000a650 --- */

uint FUN_0000a650(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 1) & 8) == 0) || (iVar1 = FUN_0000a420(param_1), iVar1 != -1)) {
    pbVar2 = *(byte **)(param_1 + 4);
    if (pbVar2 < *(byte **)(param_1 + 8)) {
LAB_0000a68a:
      return (uint)*pbVar2;
    }
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      FUN_0000a3c0(param_1);
      pbVar2 = *(byte **)(param_1 + 4);
      if (pbVar2 < *(byte **)(param_1 + 8)) goto LAB_0000a68a;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_0000a490(param_1);
      }
    }
    else {
      iVar1 = FUN_0000a4f0(param_1);
      if (iVar1 != 0) goto LAB_0000a6a3;
    }
    uVar3 = (**(code **)(*(int *)(param_1 + 0x38) + 4))(param_1);
  }
  else {
LAB_0000a6a3:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* --- FUN_0000a6d0 @ 0000a6d0 --- */

uint FUN_0000a6d0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (((*(byte *)(param_1 + 1) & 8) == 0) || (iVar2 = FUN_0000a420(param_1), iVar2 != -1)) {
    pbVar3 = *(byte **)(param_1 + 4);
    if (pbVar3 < *(byte **)(param_1 + 8)) {
LAB_0000a70a:
      bVar1 = *pbVar3;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      return (uint)bVar1;
    }
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      FUN_0000a3c0(param_1);
      pbVar3 = *(byte **)(param_1 + 4);
      if (pbVar3 < *(byte **)(param_1 + 8)) goto LAB_0000a70a;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_0000a490(param_1);
      }
    }
    else {
      iVar2 = FUN_0000a4f0(param_1);
      if (iVar2 != 0) goto LAB_0000a733;
    }
    uVar4 = (**(code **)(*(int *)(param_1 + 0x38) + 0x40))(param_1);
  }
  else {
LAB_0000a733:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* --- FUN_0000a760 @ 0000a760 --- */

void FUN_0000a760(uint *param_1,uint param_2,uint param_3,int param_4)

{
  if ((param_1[7] != 0) && ((*param_1 & 1) == 0)) {
    FUN_00005058(param_1[7]);
  }
  param_1[7] = param_2;
  param_1[8] = param_3;
  if (param_4 == 0) {
    *(byte *)param_1 = (byte)*param_1 | 1;
  }
  else {
    *param_1 = *param_1 & 0xfffffffe;
  }
  return;
}



/* --- FUN_0000a7b0 @ 0000a7b0 --- */

void FUN_0000a7b0(byte *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (((*param_1 & 2) == 0) &&
       (iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x18))(param_1), iVar1 != -1)) {
      return;
    }
    FUN_0000a760(param_1,param_1 + 0x4b,param_1 + 0x4c,0);
  }
  return;
}



/* --- FUN_0000a7f0 @ 0000a7f0 --- */

undefined4 FUN_0000a7f0(void)

{
  return 0xffffffff;
}



/* --- FUN_0000a800 @ 0000a800 --- */

uint FUN_0000a800(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 4))(param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)**(byte **)(param_1 + 4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return uVar2;
}



/* --- FUN_0000a830 @ 0000a830 --- */

int FUN_0000a830(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint local_8;
  
  local_8 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
    if (0 < (int)uVar6) {
      if (local_8 < uVar6) {
        uVar6 = local_8;
      }
      if ((int)uVar6 < 0x15) {
        if ((int)uVar6 < 1) {
          uVar6 = 0;
        }
        else {
          puVar5 = *(undefined1 **)(param_1 + 0x14);
          uVar4 = uVar6 - 1;
          if (-1 < (int)uVar4) {
            uVar2 = ~uVar4 & 3;
            if (uVar2 != 0) {
              if (uVar2 < 3) {
                if (uVar2 < 2) {
                  *puVar5 = *param_2;
                  param_2 = param_2 + 1;
                  puVar5 = puVar5 + 1;
                  uVar4 = uVar6 - 2;
                }
                *puVar5 = *param_2;
                param_2 = param_2 + 1;
                puVar5 = puVar5 + 1;
                uVar4 = uVar4 - 1;
              }
              *puVar5 = *param_2;
              param_2 = param_2 + 1;
              puVar5 = puVar5 + 1;
              uVar4 = uVar4 - 1;
              if ((int)uVar4 < 0) goto LAB_0000a8fd;
            }
            do {
              *puVar5 = *param_2;
              puVar5[1] = param_2[1];
              puVar5[2] = param_2[2];
              puVar5[3] = param_2[3];
              param_2 = param_2 + 4;
              puVar5 = puVar5 + 4;
              uVar4 = uVar4 - 4;
            } while (-1 < (int)uVar4);
          }
LAB_0000a8fd:
          *(undefined1 **)(param_1 + 0x14) = puVar5;
        }
      }
      else {
        FUN_0000b700(*(undefined4 *)(param_1 + 0x14),param_2,uVar6);
        param_2 = param_2 + uVar6;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar6;
      }
      local_8 = local_8 - uVar6;
    }
    if (local_8 == 0) {
LAB_0000a930:
      return param_3 - local_8;
    }
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar3 = FUN_0000a4d0(param_1,uVar1);
    if (iVar3 == -1) goto LAB_0000a930;
    local_8 = local_8 - 1;
  } while( true );
}



/* --- FUN_0000a940 @ 0000a940 --- */

void FUN_0000a940(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(param_1,param_2,param_3);
  return;
}



/* --- FUN_0000a960 @ 0000a960 --- */

int FUN_0000a960(int param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = param_3;
  do {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (0 < (int)uVar5) {
      if (local_8 < uVar5) {
        uVar5 = local_8;
      }
      if ((int)uVar5 < 0x15) {
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        else {
          puVar4 = *(undefined1 **)(param_1 + 4);
          uVar3 = uVar5 - 1;
          if (-1 < (int)uVar3) {
            uVar1 = ~uVar3 & 3;
            if (uVar1 != 0) {
              if (uVar1 < 3) {
                if (uVar1 < 2) {
                  *param_2 = *puVar4;
                  puVar4 = puVar4 + 1;
                  param_2 = param_2 + 1;
                  uVar3 = uVar5 - 2;
                }
                *param_2 = *puVar4;
                puVar4 = puVar4 + 1;
                param_2 = param_2 + 1;
                uVar3 = uVar3 - 1;
              }
              *param_2 = *puVar4;
              puVar4 = puVar4 + 1;
              param_2 = param_2 + 1;
              uVar3 = uVar3 - 1;
              if ((int)uVar3 < 0) goto LAB_0000aa1d;
            }
            do {
              *param_2 = *puVar4;
              param_2[1] = puVar4[1];
              param_2[2] = puVar4[2];
              param_2[3] = puVar4[3];
              puVar4 = puVar4 + 4;
              param_2 = param_2 + 4;
              uVar3 = uVar3 - 4;
            } while (-1 < (int)uVar3);
          }
LAB_0000aa1d:
          *(undefined1 **)(param_1 + 4) = puVar4;
        }
      }
      else {
        FUN_0000b700(param_2,*(undefined4 *)(param_1 + 4),uVar5);
        param_2 = param_2 + uVar5;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + uVar5;
      }
      local_8 = local_8 - uVar5;
    }
    if (local_8 == 0) break;
    iVar2 = FUN_0000a650(param_1);
  } while (iVar2 != -1);
  return param_3 - local_8;
}



/* --- FUN_0000aa60 @ 0000aa60 --- */

undefined4 FUN_0000aa60(int param_1)

{
  if ((*(int *)(param_1 + 8) == *(int *)(param_1 + 4)) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14))) {
    return 0;
  }
  return 0xffffffff;
}



/* --- FUN_0000aa90 @ 0000aa90 --- */

undefined4 FUN_0000aa90(uint *param_1,byte *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = (**(code **)(param_1[0xe] + 0x24))(param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
      *(byte *)param_1 = (byte)*param_1 | 2;
      puVar3 = param_1 + 0x13;
      param_2 = (byte *)((int)param_1 + 0x4b);
    }
    else {
      *param_1 = *param_1 & 0xfffffffd;
      puVar3 = (uint *)(param_2 + param_3);
    }
    FUN_0000a760(param_1,param_2,puVar3,0);
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    uVar2 = 0;
  }
  return uVar2;
}



/* --- FUN_0000ab30 @ 0000ab30 --- */

void FUN_0000ab30(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)(param_1 + 0x38) + 0x38))(param_1,param_2,param_3);
  return;
}



/* --- FUN_0000ab50 @ 0000ab50 --- */

undefined4 FUN_0000ab50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00004690(0x400);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0000a760(param_1,iVar1,iVar1 + 0x400,1);
    uVar2 = 1;
  }
  return uVar2;
}



/* --- FUN_0000aba0 @ 0000aba0 --- */

void FUN_0000aba0(uint *param_1,uint param_2)

{
  *param_1 = param_2 | 0xfbad0000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  return;
}



/* --- FUN_0000ac20 @ 0000ac20 --- */

undefined4 FUN_0000ac20(void)

{
  return 0;
}



/* --- FUN_0000ac30 @ 0000ac30 --- */

void FUN_0000ac30(byte *param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && ((*param_1 & 1) == 0)) {
    FUN_00005058(*(undefined4 *)(param_1 + 0x1c));
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x30); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[1] = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00005058(*(undefined4 *)(param_1 + 0x24));
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  FUN_0000a320(param_1);
  return;
}



/* --- FUN_0000aca0 @ 0000aca0 --- */

undefined4 FUN_0000aca0(void)

{
  return 0xffffffff;
}



/* --- FUN_0000acb0 @ 0000acb0 --- */

uint FUN_0000acb0(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 4)) &&
     (*(char *)(*(uint *)(param_1 + 4) - 1) == (char)param_2)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    return param_2 & 0xff;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))(param_1,param_2);
  return uVar1;
}



/* --- FUN_0000acf0 @ 0000acf0 --- */

uint FUN_0000acf0(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0xc)) {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))(param_1,0xffffffff);
    return uVar1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return (uint)**(byte **)(param_1 + 4);
}



/* --- FUN_0000ad20 @ 0000ad20 --- */

undefined4 FUN_0000ad20(int param_1,short param_2)

{
  *(short *)(param_1 + 0x48) = param_2 + 1;
  return 0;
}



/* --- FUN_0000ad40 @ 0000ad40 --- */

char * FUN_0000ad40(int param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_2 + param_3;
  if (param_2 < pcVar4) {
    uVar2 = (int)param_2 - (int)pcVar4 & 3;
    pcVar5 = pcVar4;
    if (uVar2 == 0) goto LAB_0000ad80;
    if ((2 < uVar2) ||
       (((1 < uVar2 || (pcVar5 = pcVar4 + -1, *pcVar5 != '\n')) &&
        (pcVar5 = pcVar5 + -1, *pcVar5 != '\n')))) {
      pcVar5 = pcVar5 + -1;
      cVar1 = *pcVar5;
      while (cVar1 != '\n') {
        if (pcVar5 <= param_2) goto LAB_0000adc4;
LAB_0000ad80:
        pcVar3 = pcVar5 + -1;
        if (((pcVar5[-1] == '\n') || (pcVar3 = pcVar5 + -2, pcVar5[-2] == '\n')) ||
           (pcVar3 = pcVar5 + -3, pcVar5[-3] == '\n')) {
          return pcVar4 + (-1 - (int)pcVar3);
        }
        pcVar5 = pcVar5 + -4;
        cVar1 = *pcVar5;
      }
    }
    pcVar4 = pcVar4 + (-1 - (int)pcVar5);
  }
  else {
LAB_0000adc4:
    pcVar4 = (char *)(param_1 + param_3);
  }
  return pcVar4;
}



/* --- FUN_0000ade0 @ 0000ade0 --- */

undefined4 FUN_0000ade0(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x48) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_0000ad40(*(ushort *)(param_1 + 0x48) - 1,*(undefined4 *)(param_1 + 0x10),
                       *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
  return uVar1;
}



/* --- FUN_0000ae20 @ 0000ae20 --- */

undefined4 FUN_0000ae20(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  for (puVar1 = PTR_DAT_0002b160; puVar1 != (undefined *)0x0;
      puVar1 = *(undefined **)(puVar1 + 0x34)) {
    if ((*(uint *)(puVar1 + 0x10) < *(uint *)(puVar1 + 0x14)) &&
       (iVar2 = (*(code *)**(undefined4 **)(puVar1 + 0x38))(puVar1,0xffffffff), iVar2 == -1)) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* --- FUN_0000ae70 @ 0000ae70 --- */

void FUN_0000ae70(void)

{
  undefined *puVar1;
  
  for (puVar1 = PTR_DAT_0002b160; puVar1 != (undefined *)0x0;
      puVar1 = *(undefined **)(puVar1 + 0x34)) {
    if ((puVar1[1] & 2) != 0) {
      (*(code *)**(undefined4 **)(puVar1 + 0x38))(puVar1,0xffffffff);
    }
  }
  return;
}



/* --- FUN_0000aeb0 @ 0000aeb0 --- */

void FUN_0000aeb0(void)

{
  byte *pbVar1;
  
  for (pbVar1 = PTR_DAT_0002b160; pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0x34)) {
    if ((*pbVar1 & 2) == 0) {
      (**(code **)(*(int *)(pbVar1 + 0x38) + 0x20))(pbVar1,0,0);
    }
  }
  return;
}



/* --- FUN_0000aef0 @ 0000aef0 --- */

void FUN_0000aef0(void)

{
  FUN_0000ae20();
  FUN_0000aeb0();
  return;
}



/* --- FUN_0000af10 @ 0000af10 --- */

void FUN_0000af10(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = param_2;
  if ((*(byte *)(param_2 + 1) & 8) != 0) {
    FUN_0000a420(param_2);
  }
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4) - *(int *)(param_2 + 0xc);
  }
  else {
    iVar1 = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
  }
  param_1[2] = iVar1;
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 **)(param_2 + 0x30) = param_1;
  return;
}



/* --- FUN_0000af60 @ 0000af60 --- */

void FUN_0000af60(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1[1] + 0x30);
  iVar1 = *piVar2;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if ((int *)*piVar2 == param_1) break;
    piVar2 = (int *)*piVar2;
    iVar1 = *piVar2;
  }
  *piVar2 = *param_1;
  return;
}



/* --- FUN_0000af90 @ 0000af90 --- */

int FUN_0000af90(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) - *(int *)(param_2 + 8);
}



/* --- FUN_0000afb0 @ 0000afb0 --- */

int FUN_0000afb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 1) & 1) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4) - *(int *)(*(int *)(param_1 + 4) + 0xc);
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) - *(int *)(iVar1 + 8);
  }
  return *(int *)(param_1 + 8) - iVar1;
}



/* --- FUN_0000b010 @ 0000b010 --- */

undefined4 FUN_0000b010(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 4) == param_1) {
    if (*(int *)(param_2 + 8) < 0) {
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        FUN_0000a3f0(param_1);
      }
      iVar2 = *(int *)(param_1 + 8);
    }
    else {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        FUN_0000a3c0(param_1);
      }
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 4) = iVar2 + *(int *)(param_2 + 8);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* --- FUN_0000b070 @ 0000b070 --- */

void FUN_0000b070(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0000a490(param_1);
  }
  return;
}



/* --- FUN_0000b0a0 @ 0000b0a0 --- */

uint FUN_0000b0a0(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if ((param_2 != 0xffffffff) && (**(byte **)(param_1 + 4) != param_2)) {
    **(byte **)(param_1 + 4) = (byte)param_2;
  }
  return param_2 & 0xff;
}



/* --- FUN_0000b0d0 @ 0000b0d0 --- */

uint FUN_0000b0d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x24) != 0) {
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        FUN_0000a3f0(param_1);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        if (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0xc)) {
          iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
          iVar1 = FUN_00004690(iVar2 * 2);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          FUN_0000b700(iVar2 + iVar1,*(undefined4 *)(param_1 + 0xc),iVar2);
          FUN_00005058(*(undefined4 *)(param_1 + 0xc));
          *(int *)(param_1 + 0xc) = iVar1;
          *(int *)(param_1 + 4) = iVar2 + iVar1;
          *(int *)(param_1 + 8) = iVar1 + iVar2 * 2;
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 4);
        }
        goto LAB_0000b194;
      }
    }
    iVar1 = FUN_00004690(0x80);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x2c) = iVar1 + 0x80;
    *(int *)(param_1 + 0x28) = iVar1 + 0x80;
    FUN_0000a3f0(param_1);
  }
LAB_0000b194:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((param_2 != 0xffffffff) && (param_2 != **(byte **)(param_1 + 4))) {
    **(byte **)(param_1 + 4) = (byte)param_2;
  }
  return (uint)**(byte **)(param_1 + 4);
}



/* --- FUN_0000b1c0 @ 0000b1c0 --- */

undefined4 FUN_0000b1c0(void)

{
  return 0xffffffff;
}



/* --- FUN_0000b1d0 @ 0000b1d0 --- */

undefined4 FUN_0000b1d0(void)

{
  return 0xffffffff;
}



/* --- FUN_0000b1e0 @ 0000b1e0 --- */

undefined4 FUN_0000b1e0(void)

{
  return 0xffffffff;
}



/* --- FUN_0000b1f0 @ 0000b1f0 --- */

undefined4 FUN_0000b1f0(void)

{
  return 0;
}



/* --- FUN_0000b200 @ 0000b200 --- */

void FUN_0000b200(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



/* --- FUN_0000b218 @ 0000b218 --- */

/* WARNING: Removing unreachable block (ram,0x0000b2a8) */
/* WARNING: Removing unreachable block (ram,0x0000b2e1) */
/* WARNING: Removing unreachable block (ram,0x0000b385) */

uint FUN_0000b218(byte *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte local_1c;
  
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    param_3 = 10;
  }
  bVar1 = PTR_DAT_0002b058[(uint)*param_1 * 2];
  pbVar5 = param_1;
  while ((bVar1 & 0x10) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = PTR_DAT_0002b058[(uint)*pbVar5 * 2];
  }
  if (*pbVar5 == 0) {
LAB_0000b458:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (*pbVar5 == 0x2d) {
    bVar2 = true;
    pbVar5 = pbVar5 + 1;
  }
  else if (*pbVar5 == 0x2b) {
    bVar2 = false;
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar2 = false;
  }
  if (((param_3 == 0x10) && (*pbVar5 == 0x30)) && (PTR_DAT_0002b060[pbVar5[1]] == 'X')) {
    pbVar5 = pbVar5 + 2;
  }
  if (param_3 == 0) {
    if (*pbVar5 == 0x30) {
      if (PTR_DAT_0002b060[pbVar5[1]] == 'X') {
        pbVar5 = pbVar5 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  bVar3 = false;
  uVar7 = 0;
  local_1c = *pbVar5;
  pbVar6 = pbVar5;
  while (local_1c != 0) {
    if ((PTR_DAT_0002b058[(uint)local_1c * 2] & 8) == 0) {
      if ((PTR_DAT_0002b058[(uint)local_1c * 2] & 3) == 0) break;
      local_1c = PTR_DAT_0002b060[local_1c] - 0x37;
    }
    else {
      local_1c = local_1c - 0x30;
    }
    if ((int)param_3 <= (int)(uint)local_1c) break;
    if ((uVar4 < uVar7) ||
       ((uVar4 == uVar7 && ((uint)(0xffffffff % (ulonglong)param_3) < (uint)local_1c)))) {
      bVar3 = true;
    }
    else {
      uVar7 = uVar7 * param_3 + (uint)local_1c;
    }
    pbVar6 = pbVar6 + 1;
    local_1c = *pbVar6;
  }
  if (pbVar5 == pbVar6) goto LAB_0000b458;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar6;
  }
  if (bVar2) {
    if (uVar7 < 0x80000001) goto LAB_0000b417;
  }
  else if (uVar7 < 0x80000000) goto LAB_0000b417;
  bVar3 = true;
LAB_0000b417:
  if (!bVar3) {
    if (!bVar2) {
      return uVar7;
    }
    return -uVar7;
  }
  if (!bVar2) {
    DAT_0002a0a0 = 0x22;
    return 0x7fffffff;
  }
  DAT_0002a0a0 = 0x22;
  return 0x80000000;
}



/* --- FUN_0000b478 @ 0000b478 --- */

void FUN_0000b478(undefined4 param_1)

{
  FUN_00010af0(&DAT_0002b0c0,param_1,&stack0x00000008);
  return;
}



/* --- FUN_0000b498 @ 0000b498 --- */

undefined4 FUN_0000b498(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0xb) & 0x40) == 0) {
      *(undefined1 **)(param_2 + 0xc) = &LAB_00011650;
    }
    else {
      *(undefined1 **)(param_2 + 0xc) = &LAB_00011648;
    }
  }
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* --- FUN_0000b4f8 @ 0000b4f8 --- */

int FUN_0000b4f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00004690(0x50);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0000aba0(iVar1,0);
    *(undefined ***)(iVar1 + 0x38) = &PTR_FUN_0002b390;
    FUN_00011660(iVar1);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    iVar2 = FUN_00011770(iVar1,param_1,param_2);
    if (iVar2 == 0) {
      FUN_0000a320(iVar1);
      FUN_00005058(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* --- FUN_0000b598 @ 0000b598 --- */

void FUN_0000b598(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = DAT_0002a0a0;
  FUN_0000b860();
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    puVar3 = &DAT_0000b568;
    param_1 = &DAT_0000b568;
  }
  else {
    puVar3 = &DAT_0000b569;
  }
  if ((iVar1 < 0) || (DAT_00012f10 <= iVar1)) {
    uVar2 = FUN_0000c030(DAT_0002b050,1,1,s_Unknown_error_0000b574,iVar1);
    FUN_00012f18(&DAT_0002b110,s__s_s_s__d_0000b582,param_1,puVar3,uVar2);
  }
  else {
    uVar2 = FUN_0000c030(DAT_0002b050,1,iVar1 + 1,(&PTR_s_Unknown_error_00012200)[iVar1]);
    FUN_00012f18(&DAT_0002b110,s__s_s_s_0000b56c,param_1,puVar3,uVar2);
  }
  return;
}



/* --- FUN_0000b640 @ 0000b640 --- */

undefined4 FUN_0000b640(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    DAT_0002a0a0 = 0x16;
    return 0xffffffff;
  }
  if ((*param_1 & 0xffff0000) == 0xfbad0000) {
    uVar1 = FUN_00012f70(param_1,param_2,&stack0x0000000c,0);
    return uVar1;
  }
  DAT_0002a0a0 = 0x16;
  return 0xffffffff;
}



/* --- FUN_0000b698 @ 0000b698 --- */

int FUN_0000b698(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000146a0(param_1);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* --- FUN_0000b6b0 @ 0000b6b0 --- */

uint * FUN_0000b6b0(uint *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = (uint)param_2;
  puVar3 = param_1;
  if (0xb < param_3) {
    uVar1 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    uVar2 = -(int)param_1 & 3;
    param_3 = param_3 - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar3 = param_2;
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 & 3;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(char *)puVar3 = (char)uVar1;
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  return param_1;
}



/* --- FUN_0000b700 @ 0000b700 --- */

undefined4 * FUN_0000b700(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  if (7 < param_3) {
    uVar1 = -(int)param_1 & 3;
    param_3 = param_3 - uVar1;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    param_3 = param_3 & 3;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_1;
}



/* --- FUN_0000b748 @ 0000b748 --- */

int FUN_0000b748(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000b76c @ 0000b76c --- */

int FUN_0000b76c(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000b798 @ 0000b798 --- */

/* WARNING: Removing unreachable block (ram,0x0000b7d2) */

int FUN_0000b798(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      iVar1 = (uint)(byte)PTR_DAT_0002b05c[*param_1] - (uint)(byte)PTR_DAT_0002b05c[*param_2];
      if ((iVar1 != 0) || (PTR_DAT_0002b05c[*param_1] == 0)) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return iVar1;
}



/* --- FUN_0000b828 @ 0000b828 --- */

int FUN_0000b828(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    param_2[iVar2 + -1] = cVar1;
  } while (cVar1 != '\0');
  return param_1;
}



/* --- FUN_0000b860 @ 0000b860 --- */

void FUN_0000b860(void)

{
  if (DAT_0002b050 == 0) {
    FUN_00014790(0x40,&DAT_0000b850);
    DAT_0002b050 = FUN_0000bb20(&DAT_0000b851,0);
  }
  return;
}



/* --- FUN_0000b890 @ 0000b890 --- */

int FUN_0000b890(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar1 = ~uVar4 - 1;
  iVar3 = *DAT_0002a048;
  piVar5 = DAT_0002a048;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00015570(*piVar5,param_1,iVar1);
    if ((iVar3 == 0) && (*(char *)(iVar1 + *piVar5) == '=')) break;
    piVar5 = piVar5 + 1;
    iVar3 = *piVar5;
  }
  return ~uVar4 + *piVar5;
}



/* --- FUN_0000b8f8 @ 0000b8f8 --- */

/* WARNING: Removing unreachable block (ram,0x0000b9c4) */
/* WARNING: Removing unreachable block (ram,0x0000b956) */
/* WARNING: Removing unreachable block (ram,0x0000ba07) */

int FUN_0000b8f8(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar1 = param_3 - 1;
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  if ((~uVar1 & 1) != 0) {
    iVar2 = (uint)(byte)PTR_DAT_0002b05c[*param_1] - (uint)(byte)PTR_DAT_0002b05c[*param_2];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (PTR_DAT_0002b05c[*param_1] == 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar1 = param_3 - 2;
    if (param_3 - 2 == 0xffffffff) {
      return 0;
    }
  }
  param_3 = uVar1;
  local_c = param_3;
  while( true ) {
    iVar2 = (uint)(byte)PTR_DAT_0002b05c[*param_1] - (uint)(byte)PTR_DAT_0002b05c[*param_2];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (PTR_DAT_0002b05c[*param_1] == 0) {
      return 0;
    }
    iVar2 = (uint)(byte)PTR_DAT_0002b05c[param_1[1]] - (uint)(byte)PTR_DAT_0002b05c[param_2[1]];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (PTR_DAT_0002b05c[param_1[1]] == 0) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    local_c = local_c - 2;
    if (local_c == 0xffffffff) {
      return 0;
    }
  }
  return 0;
}



/* --- FUN_0000ba50 @ 0000ba50 --- */

char * FUN_0000ba50(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  do {
    pcVar4 = param_1;
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    bVar6 = false;
    pcVar5 = param_2;
    uVar3 = ~uVar2;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) break;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (!bVar6);
    param_1 = pcVar4 + 1;
    if (bVar6) {
      return pcVar4;
    }
  } while( true );
}



/* --- FUN_0000bb20 @ 0000bb20 --- */

undefined4 FUN_0000bb20(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_458;
  char *local_450;
  char *local_44c;
  char *local_448;
  undefined1 local_444 [64];
  char local_404 [1024];
  
  local_448 = (char *)0x0;
  local_44c = (char *)0x0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if (*param_1 == '/') {
      local_448 = param_1;
      iVar2 = FUN_000253d0(param_1,local_444);
      if (iVar2 == 0) {
LAB_0000be22:
        uVar5 = FUN_0000c180(local_448,param_2,local_444);
        return uVar5;
      }
    }
    else {
      local_450 = (char *)FUN_00014790(0x40,0);
      if (local_450 == (char *)0x0) {
        local_450 = &DAT_0000ba90;
      }
      pcVar3 = (char *)FUN_0000b890(s_NLSPATH_0000ba92);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s__etc_locale__L__N_cat__usr_lib_l_0000ba9a;
      }
      pcVar4 = pcVar3;
      if (DAT_0002b068 != (char *)0x0) {
        iVar2 = -1;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar6 = 0xffffffff;
        pcVar4 = DAT_0002b068;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = (char *)FUN_00004690(~uVar6 - iVar2);
        if (pcVar4 == (char *)0x0) {
          return 0xffffffff;
        }
        FUN_0000b828(pcVar4,pcVar3);
        uVar6 = 0xffffffff;
        pcVar3 = pcVar4;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if ((pcVar4[~uVar6 - 2] != ':') && (*DAT_0002b068 != ':')) {
          FUN_00015a38(pcVar4,&DAT_0000bb1e);
        }
        FUN_00015a38(pcVar4,DAT_0002b068);
        local_44c = pcVar4;
      }
      uVar6 = 0xffffffff;
      pcVar3 = pcVar4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = (char *)FUN_00004690(uVar6 + 1);
      if (pcVar3 != (char *)0x0) {
        FUN_0000b828(pcVar3,pcVar4);
        pcVar3[uVar6 - 1] = ':';
        pcVar3[uVar6] = '\0';
        pcVar4 = local_448;
        if (*pcVar3 != '\0') {
          pcVar7 = pcVar3;
          local_458 = pcVar3;
          do {
            if (*local_458 == ':') {
              *local_458 = '\0';
              pcVar4 = local_404;
              cVar1 = *pcVar7;
              while (cVar1 != '\0') {
                if (*pcVar7 == '%') {
                  if (pcVar7[1] == 'L') {
                    FUN_0000b828(pcVar4,local_450);
                    pcVar8 = local_450;
                  }
                  else {
                    if (pcVar7[1] != 'N') goto LAB_0000bda0;
                    FUN_0000b828(pcVar4,param_1);
                    pcVar8 = param_1;
                  }
                  pcVar7 = pcVar7 + 1;
                  uVar6 = 0xffffffff;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar1 != '\0');
                  pcVar4 = pcVar4 + (~uVar6 - 1);
                }
                else {
LAB_0000bda0:
                  *pcVar4 = *pcVar7;
                  pcVar4 = pcVar4 + 1;
                }
                pcVar7 = pcVar7 + 1;
                cVar1 = *pcVar7;
              }
              *pcVar4 = '\0';
              iVar2 = FUN_000253d0(local_404,local_444);
              pcVar4 = local_404;
              if (iVar2 == 0) break;
              pcVar7 = local_458 + 1;
            }
            local_458 = local_458 + 1;
            pcVar4 = local_448;
          } while (*local_458 != '\0');
        }
        local_448 = pcVar4;
        FUN_00005058(pcVar3);
        if (local_44c != (char *)0x0) {
          FUN_00005058(local_44c);
        }
        if (local_448 != (char *)0x0) goto LAB_0000be22;
      }
    }
  }
  return 0xffffffff;
}



/* --- FUN_0000be60 @ 0000be60 --- */

int * FUN_0000be60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 == -1) || (param_1 == 0)) || (param_2 < 1)) {
LAB_0000be90:
    piVar2 = (int *)0x0;
  }
  else {
    iVar5 = 0;
    iVar1 = param_2 + -1;
    iVar4 = param_2;
    if (*(int *)(param_1 + 0xc) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0xc) / 2;
      iVar4 = *(int *)(param_1 + 0xc);
    }
    while( true ) {
      piVar2 = (int *)(iVar1 * 0x1c + *(int *)(param_1 + 0x10));
      if (*piVar2 == param_2) break;
      if (*piVar2 < param_2) {
        iVar5 = iVar1 + 1;
        iVar3 = (param_2 - *piVar2) + 1 + iVar1;
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        iVar3 = 1;
      }
      else {
        iVar3 = -1;
        iVar4 = iVar1;
      }
      if (iVar4 <= iVar5) goto LAB_0000be90;
      if (iVar4 - iVar5 == 1) {
        iVar1 = iVar1 + iVar3;
      }
      else {
        iVar1 = iVar1 + ((iVar4 - iVar5) / 2) * iVar3;
      }
    }
    if (piVar2[6] != 0) {
      FUN_0000c3c0(param_1,piVar2);
    }
  }
  return piVar2;
}



/* --- FUN_0000bf50 @ 0000bf50 --- */

int * FUN_0000bf50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x18) != 0)) || (param_2 < 1)) {
LAB_0000bf80:
    piVar2 = (int *)0x0;
  }
  else {
    iVar5 = 0;
    iVar1 = param_2 + -1;
    iVar4 = param_2;
    if (*(int *)(param_1 + 0x14) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x14) / 2;
      iVar4 = *(int *)(param_1 + 0x14);
    }
    while( true ) {
      piVar2 = (int *)(iVar1 * 0xc + *(int *)(param_1 + 8));
      if (*piVar2 == param_2) break;
      if (*piVar2 < param_2) {
        iVar5 = iVar1 + 1;
        iVar3 = (param_2 - *piVar2) + 1 + iVar1;
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        iVar3 = 1;
      }
      else {
        iVar3 = -1;
        iVar4 = iVar1;
      }
      if (iVar4 <= iVar5) goto LAB_0000bf80;
      if (iVar4 - iVar5 == 1) {
        iVar1 = iVar1 + iVar3;
      }
      else {
        iVar1 = iVar1 + ((iVar4 - iVar5) / 2) * iVar3;
      }
    }
  }
  return piVar2;
}



/* --- FUN_0000c030 @ 0000c030 --- */

undefined4 FUN_0000c030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0000be60(param_1,param_2,param_3);
  iVar2 = FUN_0000bf50(uVar1);
  if (iVar2 != 0) {
    param_4 = *(undefined4 *)(iVar2 + 4);
  }
  return param_4;
}



/* --- FUN_0000c070 @ 0000c070 --- */

undefined4 FUN_0000c070(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  if ((param_1 == (int *)0xffffffff) || (param_1 == (int *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*param_1 != 1) {
      FUN_00015a68(param_1[1],param_1[2]);
    }
    iVar3 = 0;
    if (0 < param_1[3]) {
      local_8 = 0;
      do {
        iVar2 = local_8 + param_1[4];
        if (*(int *)(iVar2 + 0x18) == 0) {
          FUN_00005058(*(undefined4 *)(iVar2 + 0xc));
          FUN_00005058(*(undefined4 *)(iVar2 + 8));
        }
        local_8 = local_8 + 0x1c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[3]);
    }
    FUN_00005058(param_1[4]);
    FUN_00005058(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



/* --- FUN_0000c180 @ 0000c180 --- */

int * FUN_0000c180(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_00004690(0x18);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0xffffffff;
  }
  else {
    *piVar1 = param_2;
    iVar2 = FUN_000253f8(param_1,0);
    piVar1[1] = iVar2;
    if (iVar2 < 0) {
      piVar1 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)(param_3 + 0x14);
      piVar1[2] = iVar2;
      iVar2 = FUN_00015a90(0,iVar2,1,1,piVar1[1],0);
      if (iVar2 == -1) {
        FUN_0000b748(piVar1[1]);
        piVar1 = (int *)0x0;
      }
      else {
        FUN_0000b748(piVar1[1]);
        if (0x1b < (uint)piVar1[2]) {
          piVar1[1] = iVar2;
          iVar2 = FUN_00015570(iVar2,s__nazgul__0000c0fa,8);
          if (iVar2 == 0) {
            if (*(int *)(piVar1[1] + 8) != 1) {
              FUN_00012f18(&DAT_0002b110,s__s___s_is_version__d__we_need__d_0000c12d,
                           s_Message_Catalog_System_0000c103,param_1,*(undefined4 *)(piVar1[1] + 8),
                           1);
              return (int *)0x0;
            }
            if (*(int *)(piVar1[1] + 0x14) < 1) {
              FUN_00012f18(&DAT_0002b110,s__s___s_has__d_sets__0000c150,
                           s_Message_Catalog_System_0000c103,param_1,
                           *(undefined4 *)(piVar1[1] + 0x14));
              return (int *)0x0;
            }
            piVar1[3] = *(int *)(piVar1[1] + 0x14);
            iVar2 = FUN_00004690(*(int *)(piVar1[1] + 0x14) * 0x1c);
            piVar1[4] = iVar2;
            if (iVar2 == 0) {
LAB_0000c2cb:
              FUN_00012f18(&DAT_0002b110,s__s__no_more_memory__0000c165,
                           s_Message_Catalog_System_0000c103);
              return (int *)0xffffffff;
            }
            iVar2 = *(int *)(piVar1[1] + 0x18);
            iVar4 = 0;
            if (0 < piVar1[3]) {
              do {
                if ((piVar1[2] < iVar2) ||
                   (iVar3 = iVar4 * 0x1c + piVar1[4], (uint)piVar1[2] < iVar2 + 0x1cU))
                goto LAB_0000c35c;
                FUN_00007dc0(iVar2 + piVar1[1],iVar3,0x1c);
                if (*(int *)(iVar3 + 0x18) == 0) {
                  if (*piVar1 == 1) {
                    iVar2 = FUN_0000c3c0(piVar1,iVar3);
                    if (iVar2 < 1) {
                      if (iVar2 != -1) goto LAB_0000c35c;
                      goto LAB_0000c2cb;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar3 + 0x18) = 0xffffffff;
                  }
                }
                else {
                  iVar4 = iVar4 + -1;
                }
                iVar2 = *(int *)(iVar3 + 4);
                iVar4 = iVar4 + 1;
              } while (iVar4 < piVar1[3]);
            }
            if (*piVar1 != 1) {
              return piVar1;
            }
            FUN_00015a68(piVar1[1],piVar1[2]);
            return piVar1;
          }
        }
LAB_0000c35c:
        FUN_00012f18(&DAT_0002b110,s__s__corrupt_file__0000c11a,s_Message_Catalog_System_0000c103);
        piVar1 = (int *)0x0;
      }
    }
  }
  return piVar1;
}



/* --- FUN_0000c3c0 @ 0000c3c0 --- */

undefined4 FUN_0000c3c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    iVar2 = FUN_00004690(*(undefined4 *)(param_2 + 0x10));
    *(int *)(param_2 + 0xc) = iVar2;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    if (iVar1 + *(int *)(param_2 + 0x10) <= *(int *)(param_1 + 8)) {
      FUN_00007dc0(iVar1 + *(int *)(param_1 + 4),*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x10));
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 <= *(int *)(param_1 + 8)) {
        iVar2 = FUN_00004690(*(int *)(param_2 + 0x14) * 0xc);
        *(int *)(param_2 + 8) = iVar2;
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        iVar2 = 0;
        if (0 < *(int *)(param_2 + 0x14)) {
          iVar4 = 0;
          do {
            iVar3 = iVar4 + *(int *)(param_2 + 8);
            if (*(uint *)(param_1 + 8) < iVar1 + 0xcU) {
              return 0;
            }
            FUN_00007dc0(iVar1 + *(int *)(param_1 + 4) + iVar4,iVar3,0xc);
            if (*(int *)(iVar3 + 8) == 0) {
              *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + *(int *)(param_2 + 0xc);
            }
            else {
              iVar4 = iVar4 + -0xc;
              iVar2 = iVar2 + -1;
            }
            iVar4 = iVar4 + 0xc;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_2 + 0x14));
        }
        *(undefined4 *)(param_2 + 0x18) = 0;
        return 1;
      }
    }
  }
  return 0;
}



/* --- FUN_0000c4f0 @ 0000c4f0 --- */

char * FUN_0000c4f0(undefined1 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((param_1 == (undefined1 *)0x0) && (param_1 = DAT_0002b168, DAT_0002b168 == (undefined1 *)0x0))
  {
    DAT_0002a0a0 = 0x16;
    pcVar1 = (char *)0x0;
  }
  else {
    iVar2 = FUN_00015b70(param_1,param_2);
    pcVar1 = param_1 + iVar2;
    if (*pcVar1 == '\0') {
      DAT_0002b168 = (undefined1 *)0x0;
      pcVar1 = (char *)0x0;
    }
    else {
      puVar3 = (undefined1 *)FUN_0000ba50(pcVar1,param_2);
      if (puVar3 == (undefined1 *)0x0) {
        DAT_0002b168 = (undefined1 *)0x0;
      }
      else {
        *puVar3 = 0;
        DAT_0002b168 = puVar3 + 1;
      }
    }
  }
  return pcVar1;
}



/* --- FUN_0000c5f8 @ 0000c5f8 --- */

undefined4 FUN_0000c5f8(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  int local_420;
  int local_414;
  undefined4 local_40c;
  undefined4 local_408;
  char local_404 [6];
  char local_3fe;
  char local_3fd [1017];
  
  local_414 = 0;
  bVar3 = false;
  bVar2 = false;
  local_420 = 0;
  if (DAT_0002b170 == 0) {
    DAT_0002b170 = 5;
  }
  if (DAT_0002b174 == 0) {
    DAT_0002b174 = 4;
  }
  if ((DAT_0002b178 & 1) == 0) {
    DAT_0002b178 = DAT_0002b178 | 0x2c0;
  }
  DAT_0002b184 = 0;
  DAT_0002b180._0_2_ = 2;
  DAT_0002b180._2_2_ = 0x3500;
  DAT_0002b17c = 1;
  DAT_0002b2d4 = DAT_0002b2d4 & 0xf0;
  DAT_0002b2d4 = DAT_0002b2d4 | 1;
  DAT_0002b2d0 = 0;
  iVar5 = FUN_0000b890(s_LOCALDOMAIN_0000c588);
  if (iVar5 != 0) {
    FUN_00008410(0x2b1b2,iVar5,0xff);
    bVar3 = true;
    pcVar11 = (char *)((int)&DAT_0002b1b0 + 2);
    DAT_0002b2b4 = 0x2b1b2;
    puVar10 = &DAT_0002b2b8;
    bVar1 = false;
    if (DAT_0002b1b0._2_1_ != '\0') {
      do {
        if (((undefined4 *)0x2b2cb < puVar10) || (*pcVar11 == '\n')) break;
        if ((*pcVar11 == ' ') || (*pcVar11 == '\t')) {
          *pcVar11 = '\0';
          bVar1 = true;
        }
        else if (bVar1) {
          *puVar10 = pcVar11;
          puVar10 = puVar10 + 1;
          bVar1 = false;
          bVar2 = true;
        }
        pcVar11 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      for (; ((*pcVar11 != '\0' && (*pcVar11 != ' ')) && (1 < (byte)(*pcVar11 - 9U)));
          pcVar11 = pcVar11 + 1) {
      }
    }
    *pcVar11 = '\0';
    *puVar10 = 0;
  }
  iVar5 = FUN_0000b4f8(s__etc_resolv_conf_0000c596,&DAT_0000c594);
  if (iVar5 != 0) {
LAB_0000c780:
    iVar6 = FUN_000155a0(local_404,0x400,iVar5);
    if (iVar6 != 0) {
      if ((local_404[0] != ';') && (local_404[0] != '#')) {
        iVar6 = FUN_00015570(local_404,s_domain_0000c5a7,6);
        if (iVar6 == 0) {
          if (!bVar3) {
            pcVar11 = &local_3fe;
            cVar4 = local_3fe;
            if (local_3fe == ' ') goto LAB_0000c7f0;
            while (cVar4 == '\t') {
LAB_0000c7f0:
              do {
                pcVar11 = pcVar11 + 1;
              } while (*pcVar11 == ' ');
              cVar4 = *pcVar11;
            }
            if ((*pcVar11 != '\0') && (*pcVar11 != '\n')) {
              FUN_00008410(0x2b1b2,pcVar11,0xff);
              puVar7 = (undefined1 *)FUN_0000ba50(0x2b1b2,&DAT_0000c5ae);
              if (puVar7 != (undefined1 *)0x0) {
                *puVar7 = 0;
              }
              bVar2 = false;
            }
          }
        }
        else {
          iVar6 = FUN_00015570(local_404,s_search_0000c5b2,6);
          if (iVar6 == 0) {
            if (!bVar3) {
              pcVar11 = &local_3fe;
              cVar4 = local_3fe;
              if (local_3fe == ' ') goto LAB_0000c88c;
              while (cVar4 == '\t') {
LAB_0000c88c:
                do {
                  pcVar11 = pcVar11 + 1;
                } while (*pcVar11 == ' ');
                cVar4 = *pcVar11;
              }
              if ((*pcVar11 != '\0') && (*pcVar11 != '\n')) {
                FUN_00008410(0x2b1b2,pcVar11,0xff);
                puVar7 = (undefined1 *)FUN_0000f928(0x2b1b2,10);
                if (puVar7 != (undefined1 *)0x0) {
                  *puVar7 = 0;
                }
                pcVar11 = (char *)((int)&DAT_0002b1b0 + 2);
                DAT_0002b2b4 = 0x2b1b2;
                puVar10 = &DAT_0002b2b8;
                bVar2 = false;
                if (DAT_0002b1b0._2_1_ != '\0') {
                  do {
                    if ((undefined4 *)0x2b2cb < puVar10) break;
                    if ((*pcVar11 == ' ') || (*pcVar11 == '\t')) {
                      *pcVar11 = '\0';
                      bVar2 = true;
                    }
                    else if (bVar2) {
                      *puVar10 = pcVar11;
                      puVar10 = puVar10 + 1;
                      bVar2 = false;
                    }
                    pcVar11 = pcVar11 + 1;
                  } while (*pcVar11 != '\0');
                  for (; ((*pcVar11 != '\0' && (*pcVar11 != ' ')) && (*pcVar11 != '\t'));
                      pcVar11 = pcVar11 + 1) {
                  }
                }
                *pcVar11 = '\0';
                *puVar10 = 0;
                bVar2 = true;
              }
            }
          }
          else {
            iVar6 = FUN_00015570(local_404,s_nameserver_0000c5b9,10);
            if ((iVar6 == 0) && (local_414 < 3)) {
              pcVar11 = local_3fd + 3;
              cVar4 = local_3fd[3];
              if (local_3fd[3] == ' ') goto LAB_0000c9ac;
              while (cVar4 == '\t') {
LAB_0000c9ac:
                do {
                  pcVar11 = pcVar11 + 1;
                } while (*pcVar11 == ' ');
                cVar4 = *pcVar11;
              }
              if (((*pcVar11 != '\0') && (*pcVar11 != '\n')) &&
                 (iVar6 = FUN_0000a028(pcVar11,&local_408), iVar6 != 0)) {
                (&DAT_0002b184)[local_414 * 4] = local_408;
                *(undefined2 *)(&DAT_0002b180 + local_414 * 4) = 2;
                *(undefined2 *)((int)&DAT_0002b180 + local_414 * 0x10 + 2) = 0x3500;
                local_414 = local_414 + 1;
              }
            }
            else {
              iVar6 = FUN_00015570(local_404,s_sortlist_0000c5c4,8);
              if (iVar6 == 0) {
                pbVar13 = (byte *)(local_3fd + 1);
                if (local_420 < 3) {
                  iVar6 = local_420 * 8;
                  do {
                    for (; (*pbVar13 == 0x20 || (*pbVar13 == 9)); pbVar13 = pbVar13 + 1) {
                    }
                    if (((*pbVar13 == 0) || (*pbVar13 == 10)) || (*pbVar13 == 0x3b)) break;
                    pbVar12 = pbVar13;
                    if (((*pbVar13 != 0) && (*pbVar13 != 0x2f)) &&
                       ((-1 < (char)*pbVar13 && ((PTR_DAT_0002b058[(uint)*pbVar13 * 2] & 0x10) == 0)
                        ))) {
                      while ((pbVar12 = pbVar12 + 1, *pbVar12 != 0 && (*pbVar12 != 0x2f))) {
                        if (((char)*pbVar12 < '\0') ||
                           ((PTR_DAT_0002b058[(uint)*pbVar12 * 2] & 0x10) != 0)) break;
                      }
                    }
                    bVar14 = *pbVar12;
                    *pbVar12 = 0;
                    iVar8 = FUN_0000a028(pbVar13,&local_40c);
                    if (iVar8 != 0) {
                      *(undefined4 *)((int)&DAT_0002b2d8 + iVar6) = local_40c;
                      if (bVar14 == 0x2f) {
                        *pbVar12 = 0x2f;
                        pbVar13 = pbVar12 + 1;
                        pbVar12 = pbVar13;
                        if ((*pbVar13 != 0) && (-1 < (char)*pbVar13)) {
                          bVar14 = PTR_DAT_0002b058[(uint)*pbVar13 * 2];
                          while ((bVar14 & 0x10) == 0) {
                            pbVar12 = pbVar12 + 1;
                            if ((*pbVar12 == 0) || ((char)*pbVar12 < '\0')) break;
                            bVar14 = PTR_DAT_0002b058[(uint)*pbVar12 * 2];
                          }
                        }
                        bVar14 = *pbVar12;
                        *pbVar12 = 0;
                        iVar8 = FUN_0000a028(pbVar13,&local_40c);
                        if (iVar8 == 0) goto LAB_0000cb58;
                        *(undefined4 *)((int)&DAT_0002b2dc + iVar6) = local_40c;
                      }
                      else {
LAB_0000cb58:
                        uVar9 = FUN_0000ce48(*(undefined4 *)((int)&DAT_0002b2d8 + iVar6));
                        *(undefined4 *)((int)&DAT_0002b2dc + iVar6) = uVar9;
                      }
                      iVar6 = iVar6 + 8;
                      local_420 = local_420 + 1;
                    }
                    *pbVar12 = bVar14;
                    pbVar13 = pbVar12 + 1;
                  } while (local_420 < 3);
                }
              }
              else {
                iVar6 = FUN_00015570(local_404,s_options_0000c5cd,7);
                if (iVar6 == 0) {
                  FUN_0000cd18(local_3fd,&DAT_0000c5d5);
                }
              }
            }
          }
        }
      }
      goto LAB_0000c780;
    }
    if (1 < local_414) {
      DAT_0002b17c = local_414;
    }
    DAT_0002b2d4 = DAT_0002b2d4 & 0xf;
    DAT_0002b2d4 = DAT_0002b2d4 | (char)local_420 << 4;
    FUN_00015af8(iVar5);
  }
  if (DAT_0002b1b0._2_1_ == '\0') {
    iVar5 = FUN_00018dd8(local_404,0xff);
    if ((iVar5 == 0) && (iVar5 = FUN_0000f928(local_404,0x2e), iVar5 != 0)) {
      FUN_0000b828(0x2b1b2,iVar5 + 1);
    }
  }
  if (!bVar2) {
    DAT_0002b2b4 = 0x2b1b2;
    DAT_0002b2b8 = 0;
  }
  iVar5 = FUN_0000b890(s_RES_OPTIONS_0000c5da);
  if (iVar5 != 0) {
    FUN_0000cd18(iVar5,&DAT_0000c5e6);
  }
  DAT_0002b178 = DAT_0002b178 | 1;
  return 0;
}



/* --- FUN_0000cd18 @ 0000cd18 --- */

void FUN_0000cd18(char *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((byte)DAT_0002b178 & 2) != 0) {
    FUN_0000b478(s____res_setoptions___s_____s______0000cca6,param_1,param_2);
  }
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    for (; (*pcVar2 == ' ' || (*pcVar2 == '\t')); pcVar2 = pcVar2 + 1) {
    }
    iVar1 = FUN_00015570(pcVar2,s_ndots__0000ccc8,6);
    if (iVar1 == 0) {
      iVar1 = FUN_0000b218(pcVar2 + 6,0,10);
      if (iVar1 < 0x10) {
        DAT_0002b2d4 = DAT_0002b2d4 & 0xf0;
        DAT_0002b2d4 = DAT_0002b2d4 | (byte)iVar1 & 0xf;
      }
      else {
        DAT_0002b2d4 = DAT_0002b2d4 | 0xf;
      }
      if (((byte)DAT_0002b178 & 2) != 0) {
        FUN_0000b478(s____ndots__d_0000cccf,DAT_0002b2d4 & 0xf);
      }
    }
    else {
      iVar1 = FUN_00015570(pcVar2,s_debug_0000ccdc,5);
      if (iVar1 == 0) {
        if (((byte)DAT_0002b178 & 2) == 0) {
          FUN_0000b478(s____res_setoptions___s_____s_____0000cce2,param_1,param_2);
          DAT_0002b178._0_1_ = (byte)DAT_0002b178 | 2;
        }
        FUN_0000b478(s____debug_0000cd03);
      }
    }
    while( true ) {
      if (*pcVar2 == '\0') {
        return;
      }
      if ((*pcVar2 == ' ') || (*pcVar2 == '\t')) break;
      pcVar2 = pcVar2 + 1;
    }
  } while( true );
}



/* --- FUN_0000ce48 @ 0000ce48 --- */

undefined4 FUN_0000ce48(undefined4 param_1)

{
  ushort uVar1;
  
  uVar1 = (ushort)((uint)param_1 >> 0x10);
  if (-1 < (int)((uint)uVar1 |
                CONCAT31(CONCAT21(uVar1,(byte)param_1),(char)((uint)param_1 >> 8)) << 0x10)) {
    return 0xff;
  }
  if (((byte)param_1 & 0xc0) != 0x80) {
    return 0xffffff;
  }
  return 0xffff;
}



/* --- FUN_0000cf08 @ 0000cf08 --- */

int FUN_0000cf08(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 local_404 [1024];
  
  *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) & 0xf0;
  if ((((byte)DAT_0002b178 & 1) != 0) || (iVar1 = FUN_0000c5f8(), iVar1 != -1)) {
    if (((byte)DAT_0002b178 & 2) != 0) {
      FUN_0000b478(s____res_query__s___d___d__0000ce98,param_1,param_2,param_3);
    }
    iVar1 = FUN_00015bd8(0,param_1,param_2,param_3,0,0,0,local_404,0x400);
    if (iVar1 < 1) {
      if (((byte)DAT_0002b178 & 2) != 0) {
        FUN_0000b478(s____res_query__mkquery_failed_0000ceb2);
      }
      DAT_00038bf8 = 3;
      return iVar1;
    }
    iVar1 = FUN_000163b8(local_404,iVar1,param_4,param_5);
    if (iVar1 < 0) {
      if (((byte)DAT_0002b178 & 2) != 0) {
        FUN_0000b478(s____res_query__send_error_0000ced0);
      }
      DAT_00038bf8 = 2;
      return iVar1;
    }
    if (((*(byte *)(param_4 + 3) & 0xf) == 0) &&
       (CONCAT11((char)*(undefined2 *)(param_4 + 6),
                 (char)((ushort)*(undefined2 *)(param_4 + 6) >> 8)) != 0)) {
      return iVar1;
    }
    if (((byte)DAT_0002b178 & 2) != 0) {
      FUN_0000b478(s____rcode____d__ancount__d_0000ceea,*(byte *)(param_4 + 3) & 0xf,
                   CONCAT11((char)*(undefined2 *)(param_4 + 6),
                            (char)((ushort)*(undefined2 *)(param_4 + 6) >> 8)));
    }
    switch(*(byte *)(param_4 + 3) & 0xf) {
    case 0:
      DAT_00038bf8 = 4;
      break;
    default:
      DAT_00038bf8 = 3;
      break;
    case 2:
      DAT_00038bf8 = 2;
      break;
    case 3:
      DAT_00038bf8 = 1;
    }
  }
  return -1;
}



/* --- FUN_0000d0b8 @ 0000d0b8 --- */

int FUN_0000d0b8(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  bVar2 = false;
  if ((((byte)DAT_0002b178 & 1) == 0) && (iVar3 = FUN_0000c5f8(), iVar3 == -1)) {
    return -1;
  }
  DAT_0002a0a0 = 0;
  DAT_00038bf8 = 1;
  uVar7 = 0;
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    if (*pcVar4 == '.') {
      uVar7 = uVar7 + 1;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  bVar9 = false;
  if (param_1 < pcVar4) {
    bVar9 = pcVar4[-1] == '.';
  }
  if ((uVar7 == 0) && (iVar3 = FUN_0000d458(param_1), iVar3 != 0)) {
    iVar3 = FUN_0000cf08(iVar3,param_2,param_3,param_4,param_5);
    return iVar3;
  }
  iVar3 = -1;
  if ((DAT_0002b2d4 & 0xf) <= uVar7) {
    iVar3 = FUN_0000d358(param_1,0,param_2,param_3,param_4,param_5);
    if (0 < iVar3) {
      return iVar3;
    }
    bVar2 = true;
    iVar3 = DAT_00038bf8;
  }
  if (uVar7 == 0) {
    if (-1 < (char)(byte)DAT_0002b178) goto LAB_0000d293;
  }
  else if ((bVar9) || ((DAT_0002b178._1_1_ & 2) == 0)) goto LAB_0000d293;
  iVar6 = 0;
  piVar8 = &DAT_0002b2b4;
  if (DAT_0002b2b4 != 0) {
    do {
      iVar5 = FUN_0000d358(param_1,*piVar8,param_2,param_3,param_4,param_5);
      if (0 < iVar5) {
        return iVar5;
      }
      if (DAT_0002a0a0 == 0x6f) goto LAB_0000d2fe;
      if (DAT_00038bf8 == 2) {
        if ((*(byte *)(param_4 + 3) & 0xf) != 2) goto LAB_0000d278;
        local_10 = local_10 + 1;
      }
      else if (DAT_00038bf8 < 3) {
        if (DAT_00038bf8 != 1) {
LAB_0000d278:
          iVar6 = iVar6 + 1;
        }
      }
      else {
        if (DAT_00038bf8 != 4) goto LAB_0000d278;
        local_c = local_c + 1;
      }
      if ((DAT_0002b178._1_1_ & 2) == 0) {
        iVar6 = iVar6 + 1;
      }
      piVar8 = piVar8 + 1;
    } while ((*piVar8 != 0) && (iVar6 == 0));
  }
LAB_0000d293:
  if ((!bVar2) &&
     (iVar6 = FUN_0000d358(param_1,0,param_2,param_3,param_4,param_5), iVar3 = DAT_00038bf8,
     0 < iVar6)) {
    return iVar6;
  }
  if (iVar3 == -1) {
    if (local_c == 0) {
      iVar3 = DAT_00038bf8;
      if (local_10 != 0) {
LAB_0000d2fe:
        DAT_00038bf8 = 2;
        iVar3 = DAT_00038bf8;
      }
    }
    else {
      DAT_00038bf8 = 4;
      iVar3 = DAT_00038bf8;
    }
  }
  DAT_00038bf8 = iVar3;
  return -1;
}



/* --- FUN_0000d358 @ 0000d358 --- */

void FUN_0000d358(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  char local_208 [516];
  
  if (((byte)DAT_0002b178 & 2) != 0) {
    pcVar3 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar3 = s_<Nil>_0000d317;
    }
    FUN_0000b478(s____res_querydomain__s___s___d____0000d31d,param_1,pcVar3,param_3,param_4);
  }
  if (param_2 == (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar1 = ~uVar4 - 2;
    if (((uVar1 != 0xffffffff) && (param_1[uVar1] == '.')) && (uVar1 < 0x201)) {
      FUN_00007dc0(param_1,local_208,uVar1);
      local_208[~uVar4 - 2] = '\0';
      param_1 = local_208;
    }
  }
  else {
    FUN_0000f910(local_208,s____s____s_0000d341,0x100,param_1,0x100,param_2);
    param_1 = local_208;
  }
  FUN_0000cf08(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* --- FUN_0000d458 @ 0000d458 --- */

undefined * FUN_0000d458(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_404;
  byte local_403;
  byte local_402 [1021];
  undefined1 local_5;
  
  iVar2 = FUN_0000b890(s_HOSTALIASES_0000d43b);
  if ((iVar2 != 0) && (iVar2 = FUN_0000b4f8(iVar2,&DAT_0000d447), iVar2 != 0)) {
    local_5 = 0;
    do {
      iVar3 = FUN_000155a0(&local_404,0x400,iVar2);
      if ((iVar3 == 0) || (local_404 == 0)) goto LAB_0000d5c8;
      pbVar5 = &local_404;
      if ((PTR_DAT_0002b058[(uint)local_404 * 2] & 0x10) == 0) {
        pbVar5 = &local_403;
        if (local_403 == 0) goto LAB_0000d5c8;
        bVar1 = PTR_DAT_0002b058[(uint)local_403 * 2];
        while ((bVar1 & 0x10) == 0) {
          pbVar5 = pbVar5 + 1;
          if (*pbVar5 == 0) goto LAB_0000d5c8;
          bVar1 = PTR_DAT_0002b058[(uint)*pbVar5 * 2];
        }
      }
      if (*pbVar5 == 0) goto LAB_0000d5c8;
      *pbVar5 = 0;
      iVar3 = FUN_0000b798(&local_404,param_1);
    } while (iVar3 != 0);
    pbVar5 = pbVar5 + 1;
    bVar1 = PTR_DAT_0002b058[(uint)*pbVar5 * 2];
    while ((bVar1 & 0x10) != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = PTR_DAT_0002b058[(uint)*pbVar5 * 2];
    }
    if (*pbVar5 != 0) {
      pbVar4 = pbVar5 + 1;
      if (((pbVar5[1] != 0) && ((PTR_DAT_0002b058[(uint)pbVar5[1] * 2] & 0x10) == 0)) &&
         (pbVar4 = pbVar5 + 2, pbVar5[2] != 0)) {
        bVar1 = PTR_DAT_0002b058[(uint)pbVar5[2] * 2];
        while (((bVar1 & 0x10) == 0 && (pbVar4 = pbVar4 + 1, *pbVar4 != 0))) {
          bVar1 = PTR_DAT_0002b058[(uint)*pbVar4 * 2];
        }
      }
      *pbVar4 = 0;
      DAT_000343f7 = 0;
      FUN_00008410(&DAT_000342f8,pbVar5,0xff);
      FUN_00015af8(iVar2);
      return &DAT_000342f8;
    }
LAB_0000d5c8:
    FUN_00015af8(iVar2);
  }
  return (undefined *)0x0;
}



/* --- FUN_0000d5e0 @ 0000d5e0 --- */

byte * FUN_0000d5e0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)0xffffffff;
  local_c = 0;
  pbVar9 = param_4 + param_5;
  bVar1 = *param_3;
  pbVar3 = param_4;
  pbVar4 = param_3;
  do {
    uVar7 = (uint)bVar1;
    pbVar6 = pbVar4 + 1;
    if (uVar7 == 0) {
      *pbVar3 = 0;
      bVar1 = *param_4;
      while( true ) {
        if (bVar1 == 0) {
          if ((int)local_8 < 0) {
            local_8 = pbVar6 + -(int)param_3;
          }
          return local_8;
        }
        if ((-1 < (char)bVar1) && ((PTR_DAT_0002b058[(uint)bVar1 * 2] & 0x10) != 0)) break;
        param_4 = param_4 + 1;
        bVar1 = *param_4;
      }
      return (byte *)0xffffffff;
    }
    if ((bVar1 & 0xc0) == 0) {
      if (param_4 != pbVar3) {
        if (pbVar9 <= pbVar3) {
          return (byte *)0xffffffff;
        }
        *pbVar3 = 0x2e;
        pbVar3 = pbVar3 + 1;
      }
      if (pbVar9 <= pbVar3 + uVar7) {
        return (byte *)0xffffffff;
      }
      local_c = uVar7 + 1 + local_c;
      uVar8 = uVar7 - 1;
      if (-1 < (int)uVar8) {
        uVar2 = ~uVar8 & 3;
        if (uVar2 != 0) {
          if (uVar2 < 3) {
            if (uVar2 < 2) {
              bVar1 = *pbVar6;
              pbVar6 = pbVar4 + 2;
              if (bVar1 == 0x2e) {
                if (pbVar9 <= pbVar3 + uVar7 + 1) {
                  return (byte *)0xffffffff;
                }
                *pbVar3 = 0x5c;
                pbVar3 = pbVar3 + 1;
              }
              *pbVar3 = bVar1;
              pbVar3 = pbVar3 + 1;
              if (param_2 <= pbVar6) {
                return (byte *)0xffffffff;
              }
              uVar8 = uVar7 - 2;
            }
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            if (bVar1 == 0x2e) {
              if (pbVar9 <= pbVar3 + uVar8 + 2) {
                return (byte *)0xffffffff;
              }
              *pbVar3 = 0x5c;
              pbVar3 = pbVar3 + 1;
            }
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
            if (param_2 <= pbVar6) {
              return (byte *)0xffffffff;
            }
            uVar8 = uVar8 - 1;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (bVar1 == 0x2e) {
            if (pbVar9 <= pbVar3 + uVar8 + 2) {
              return (byte *)0xffffffff;
            }
            *pbVar3 = 0x5c;
            pbVar3 = pbVar3 + 1;
          }
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
          if (param_2 <= pbVar6) {
            return (byte *)0xffffffff;
          }
          uVar8 = uVar8 - 1;
          if ((int)uVar8 < 0) goto LAB_0000d7f0;
        }
        do {
          bVar1 = *pbVar6;
          if (bVar1 == 0x2e) {
            if (pbVar9 <= pbVar3 + uVar8 + 2) {
              return (byte *)0xffffffff;
            }
            *pbVar3 = 0x5c;
            pbVar3 = pbVar3 + 1;
          }
          *pbVar3 = bVar1;
          pbVar4 = pbVar3 + 1;
          if (param_2 <= pbVar6 + 1) {
            return (byte *)0xffffffff;
          }
          bVar1 = pbVar6[1];
          if (bVar1 == 0x2e) {
            if (pbVar9 <= pbVar4 + uVar8 + 1) {
              return (byte *)0xffffffff;
            }
            *pbVar4 = 0x5c;
            pbVar4 = pbVar3 + 2;
          }
          *pbVar4 = bVar1;
          pbVar5 = pbVar4 + 1;
          if (param_2 <= pbVar6 + 2) {
            return (byte *)0xffffffff;
          }
          bVar1 = pbVar6[2];
          if (bVar1 == 0x2e) {
            if (pbVar9 <= pbVar5 + uVar8) {
              return (byte *)0xffffffff;
            }
            *pbVar5 = 0x5c;
            pbVar5 = pbVar4 + 2;
          }
          *pbVar5 = bVar1;
          pbVar3 = pbVar5 + 1;
          if (param_2 <= pbVar6 + 3) {
            return (byte *)0xffffffff;
          }
          bVar1 = pbVar6[3];
          pbVar6 = pbVar6 + 4;
          if (bVar1 == 0x2e) {
            if (pbVar9 <= pbVar3 + (uVar8 - 1)) {
              return (byte *)0xffffffff;
            }
            *pbVar3 = 0x5c;
            pbVar3 = pbVar5 + 2;
          }
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
          if (param_2 <= pbVar6) {
            return (byte *)0xffffffff;
          }
          uVar8 = uVar8 - 4;
        } while (-1 < (int)uVar8);
      }
    }
    else {
      if ((uVar7 & 0xc0) != 0xc0) {
        return (byte *)0xffffffff;
      }
      if ((int)local_8 < 0) {
        local_8 = pbVar6 + (1 - (int)param_3);
      }
      pbVar6 = param_1 + ((uVar7 & 0x3f) << 8 | (uint)*pbVar6);
      if (pbVar6 < param_1) {
        return (byte *)0xffffffff;
      }
      if (param_2 <= pbVar6) {
        return (byte *)0xffffffff;
      }
      local_c = local_c + 2;
      if ((int)param_2 - (int)param_1 <= local_c) {
        return (byte *)0xffffffff;
      }
    }
LAB_0000d7f0:
    bVar1 = *pbVar6;
    pbVar4 = pbVar6;
  } while( true );
}



/* --- FUN_0000d840 @ 0000d840 --- */

int FUN_0000d840(byte *param_1,byte *param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_14;
  int *local_8;
  
  pbVar3 = param_2 + param_3;
  local_8 = (int *)0x0;
  if (param_4 == (int *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_4;
    param_4 = param_4 + 1;
    if (local_14 != 0) {
      iVar2 = *param_4;
      local_8 = param_4;
      while (iVar2 != 0) {
        local_8 = local_8 + 1;
        iVar2 = *local_8;
      }
    }
  }
  piVar1 = local_8;
  bVar4 = *param_1;
  param_1 = param_1 + 1;
  pbVar5 = param_2;
  do {
    if (bVar4 == 0) {
LAB_0000d98d:
      if (pbVar5 < pbVar3) {
        *pbVar5 = 0;
        pbVar3 = pbVar5 + 1;
LAB_0000d9b4:
        iVar2 = (int)pbVar3 - (int)param_2;
      }
      else {
LAB_0000d992:
        if (local_14 != 0) {
          *piVar1 = 0;
        }
LAB_0000d9a1:
        iVar2 = -1;
      }
      return iVar2;
    }
    if (local_14 != 0) {
      iVar2 = FUN_0000da90(param_1 + -1,local_14,param_4,piVar1);
      if (-1 < iVar2) {
        if (pbVar3 <= pbVar5 + 1) goto LAB_0000d9a1;
        *pbVar5 = (byte)((uint)iVar2 >> 8) | 0xc0;
        pbVar3 = pbVar5 + 2;
        pbVar5[1] = (byte)iVar2;
        goto LAB_0000d9b4;
      }
      if ((param_5 != 0) && (local_8 < (int *)(param_5 + -4))) {
        *local_8 = (int)pbVar5;
        local_8 = local_8 + 1;
        *local_8 = 0;
      }
    }
    pbVar6 = pbVar5 + 1;
    do {
      if (bVar4 == 0x2e) {
        bVar4 = *param_1;
        param_1 = param_1 + 1;
        break;
      }
      if (bVar4 == 0x5c) {
        bVar4 = *param_1;
        param_1 = param_1 + 1;
        if (bVar4 == 0) break;
      }
      if (pbVar3 <= pbVar6) goto LAB_0000d992;
      *pbVar6 = bVar4;
      pbVar6 = pbVar6 + 1;
      bVar4 = *param_1;
      param_1 = param_1 + 1;
    } while (bVar4 != 0);
    if ((pbVar6 + (-1 - (int)pbVar5) == (byte *)0x0) && (bVar4 == 0)) {
      pbVar5 = pbVar6 + -1;
      goto LAB_0000d98d;
    }
    if ((byte *)0x3e < pbVar6 + (-2 - (int)pbVar5)) goto LAB_0000d992;
    *pbVar5 = (byte)(pbVar6 + (-1 - (int)pbVar5));
    pbVar5 = pbVar6;
  } while( true );
}



/* --- FUN_0000d9d0 @ 0000d9d0 --- */

int FUN_0000d9d0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  pbVar2 = param_1;
  do {
    pbVar1 = pbVar2;
    if (param_2 <= pbVar2) {
LAB_0000da24:
      if (param_2 < pbVar1) {
LAB_0000da30:
        iVar3 = -1;
      }
      else {
        iVar3 = (int)pbVar1 - (int)param_1;
      }
      return iVar3;
    }
    uVar4 = (uint)*pbVar2;
    pbVar1 = pbVar2 + 1;
    if (uVar4 == 0) goto LAB_0000da24;
    if ((*pbVar2 & 0xc0) != 0) {
      if ((uVar4 & 0xc0) != 0xc0) goto LAB_0000da30;
      pbVar1 = pbVar2 + 2;
      goto LAB_0000da24;
    }
    pbVar2 = pbVar1 + uVar4;
  } while( true );
}



/* --- FUN_0000da40 @ 0000da40 --- */

uint FUN_0000da40(uint param_1)

{
  if ((-1 < (char)param_1) && ((PTR_DAT_0002b058[param_1 * 2] & 1) != 0)) {
    if ((param_1 & 0xff) != param_1) {
      return param_1;
    }
    return (uint)(byte)PTR_DAT_0002b05c[param_1];
  }
  return param_1;
}



/* --- FUN_0000da90 @ 0000da90 --- */

int FUN_0000da90(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *local_c;
  byte *local_8;
  
  local_c = param_3;
  do {
    if (param_4 <= local_c) {
      return -1;
    }
    pbVar3 = (byte *)*local_c;
    local_8 = pbVar3;
    pcVar7 = param_1;
LAB_0000dc19:
    do {
      bVar2 = *local_8;
      uVar8 = (uint)bVar2;
      local_8 = local_8 + 1;
      if (uVar8 == 0) {
        if (*pcVar7 == '\0') {
LAB_0000dc2d:
          return (int)pbVar3 - param_2;
        }
        break;
      }
      if ((bVar2 & 0xc0) != 0) {
        if ((uVar8 & 0xc0) != 0xc0) {
          return -1;
        }
        local_8 = (byte *)(((uVar8 & 0x3f) << 8 | (uint)*local_8) + param_2);
        goto LAB_0000dc19;
      }
      uVar8 = uVar8 - 1;
      if (-1 < (int)uVar8) {
        uVar4 = ~uVar8 & 3;
        if (uVar4 == 0) goto LAB_0000db00;
        if (2 < uVar4) goto LAB_0000dba5;
        if (1 < uVar4) goto LAB_0000db6e;
        while( true ) {
          if (*pcVar7 == '.') goto LAB_0000dc40;
          if (*pcVar7 == '\\') {
            pcVar7 = pcVar7 + 1;
          }
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          iVar5 = FUN_0000da40(cVar1);
          bVar2 = *local_8;
          local_8 = local_8 + 1;
          iVar6 = FUN_0000da40(bVar2);
          if (iVar5 != iVar6) goto LAB_0000dc40;
          uVar8 = uVar8 - 1;
LAB_0000db6e:
          if (*pcVar7 == '.') goto LAB_0000dc40;
          if (*pcVar7 == '\\') {
            pcVar7 = pcVar7 + 1;
          }
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          iVar5 = FUN_0000da40(cVar1);
          bVar2 = *local_8;
          local_8 = local_8 + 1;
          iVar6 = FUN_0000da40(bVar2);
          if (iVar5 != iVar6) goto LAB_0000dc40;
          uVar8 = uVar8 - 1;
LAB_0000dba5:
          if (*pcVar7 == '.') goto LAB_0000dc40;
          if (*pcVar7 == '\\') {
            pcVar7 = pcVar7 + 1;
          }
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          iVar5 = FUN_0000da40(cVar1);
          bVar2 = *local_8;
          local_8 = local_8 + 1;
          iVar6 = FUN_0000da40(bVar2);
          if (iVar5 != iVar6) goto LAB_0000dc40;
          uVar8 = uVar8 - 1;
          if ((int)uVar8 < 0) break;
LAB_0000db00:
          if (*pcVar7 == '.') goto LAB_0000dc40;
          if (*pcVar7 == '\\') {
            pcVar7 = pcVar7 + 1;
          }
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          iVar5 = FUN_0000da40(cVar1);
          bVar2 = *local_8;
          local_8 = local_8 + 1;
          iVar6 = FUN_0000da40(bVar2);
          if (iVar5 != iVar6) goto LAB_0000dc40;
          uVar8 = uVar8 - 1;
        }
      }
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if ((cVar1 == '\0') && (*local_8 == 0)) goto LAB_0000dc2d;
    } while (cVar1 == '.');
LAB_0000dc40:
    local_c = local_c + 1;
  } while( true );
}



/* --- FUN_0000dc60 @ 0000dc60 --- */

undefined2 FUN_0000dc60(undefined1 *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



/* --- FUN_0000dc80 @ 0000dc80 --- */

uint FUN_0000dc80(byte *param_1)

{
  return (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
         (uint)param_1[3];
}



/* --- FUN_0000dcb0 @ 0000dcb0 --- */

void FUN_0000dcb0(undefined2 param_1,undefined1 *param_2)

{
  *param_2 = (char)((ushort)param_1 >> 8);
  param_2[1] = (char)param_1;
  return;
}



/* --- FUN_0000dcd0 @ 0000dcd0 --- */

void FUN_0000dcd0(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)((uint)param_1 >> 0x18);
  param_2[1] = (char)((uint)param_1 >> 0x10);
  param_2[2] = (char)((uint)param_1 >> 8);
  param_2[3] = (char)param_1;
  return;
}



/* --- FUN_0000dd08 @ 0000dd08 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000dd08(int param_1)

{
  FUN_0000b748(DAT_0002b2f0);
  DAT_0002b2f0 = 0xffffffff;
  DAT_000343f8 = 0;
  if (param_1 != 0) {
    DAT_0002b2f4 = 0;
    PTR_s_syslog_0002b2f8 = s_syslog_0000dcf8;
    _DAT_0002b2fc = 8;
    DAT_0002b300 = 0xff;
  }
  return;
}



/* --- FUN_0000dd68 @ 0000dd68 --- */

void FUN_0000dd68(undefined4 param_1,undefined4 param_2)

{
  FUN_0000dda8(param_1,param_2,&stack0x0000000c);
  return;
}



/* --- FUN_0000dda8 @ 0000dda8 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000dda8(uint param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_c24;
  char *local_c18;
  char *local_c14;
  undefined *local_c10;
  undefined4 local_c0c;
  undefined1 local_c08 [4];
  char local_c04 [1024];
  char local_804 [2048];
  
  uVar2 = DAT_0002a0a0;
  if (((DAT_0002b300 >> ((byte)param_1 & 7) & 1U) != 0) && ((param_1 & 0xfffffc00) == 0)) {
    if ((DAT_0002b2f0 < 0) || (DAT_000343f8 == 0)) {
      FUN_0000e048(PTR_s_syslog_0002b2f8,DAT_0002b2f4 | 8,0);
    }
    if ((param_1 & 0x3f8) == 0) {
      param_1 = param_1 | _DAT_0002b2fc;
    }
    FUN_00016f28(local_c08);
    iVar3 = FUN_00018620(local_c08);
    pcVar8 = local_804;
    FUN_0000f898(pcVar8,0x800,s_<_d>__15s_0000dd80,param_1,iVar3 + 4);
    while (local_804[0] != '\0') {
      pcVar8 = pcVar8 + 1;
      local_804[0] = *pcVar8;
    }
    if ((DAT_0002b2f4 & 0x20) != 0) {
      local_c24 = pcVar8;
    }
    if (PTR_s_syslog_0002b2f8 != (undefined *)0x0) {
      FUN_0000b828(pcVar8,PTR_s_syslog_0002b2f8);
      cVar1 = *pcVar8;
      while (cVar1 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
    }
    if ((DAT_0002b2f4 & 1) != 0) {
      uVar4 = FUN_000108c0();
      FUN_0000f898(pcVar8,&stack0xfffffffc + -(int)pcVar8,&DAT_0000dd8b,uVar4);
      cVar1 = *pcVar8;
      while (cVar1 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
    }
    if (PTR_s_syslog_0002b2f8 != (undefined *)0x0) {
      *pcVar8 = ':';
      pcVar8[1] = ' ';
      pcVar8 = pcVar8 + 2;
    }
    pcVar7 = local_c04;
    for (; cVar1 = *param_2, cVar1 != '\0'; param_2 = param_2 + 1) {
      if ((cVar1 == '%') && (param_2[1] == 'm')) {
        param_2 = param_2 + 1;
        uVar4 = FUN_00018bc0(uVar2);
        iVar3 = FUN_0000f898(pcVar7,local_804 + -(int)pcVar7,&DAT_0000dd90,uVar4);
        pcVar7 = pcVar7 + iVar3;
      }
      else {
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      }
    }
    *pcVar7 = '\0';
    iVar3 = FUN_00018c10(pcVar8,&stack0xfffffffc + -(int)pcVar8,local_c04,param_3);
    iVar3 = iVar3 - (int)local_804;
    if ((DAT_0002b2f4 & 0x20) != 0) {
      local_c18 = local_c24;
      local_c14 = pcVar8 + (iVar3 - ((int)local_c24 - (int)local_804));
      local_c10 = &DAT_0000dd93;
      local_c0c = 1;
      FUN_00018c60(2,&local_c18,2);
    }
    iVar5 = FUN_0000f8e4(DAT_0002b2f0,local_804,pcVar8 + iVar3 + 1);
    if (((iVar5 < 1) && (FUN_0000dd08(0), (DAT_0002b2f4 & 2) != 0)) &&
       (iVar5 = FUN_000253f8(s__dev_console_0000dd95,1,0), -1 < iVar5)) {
      FUN_00015a38(local_804,&DAT_0000dda2);
      iVar6 = FUN_0000f928(local_804,0x3e);
      FUN_0000f8e4(iVar5,iVar6 + 1,pcVar8 + ((iVar3 + 2) - ((iVar6 + 1) - (int)local_804)));
      FUN_0000b748(iVar5);
    }
  }
  return;
}



/* --- FUN_0000e048 @ 0000e048 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e048(undefined *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 != (undefined *)0x0) {
    PTR_s_syslog_0002b2f8 = param_1;
  }
  DAT_0002b2f4 = param_2;
  if ((param_3 != 0) && ((param_3 & 0xfffffc07) == 0)) {
    _DAT_0002b2fc = param_3;
  }
  if (DAT_0002b2f0 == -1) {
    _DAT_00034400 = 1;
    FUN_00008410(&DAT_00034402,s__dev_log_0000e039,0xe);
    if (((DAT_0002b2f4 & 8) != 0) && (DAT_0002b2f0 = FUN_00004b68(1,1,0), DAT_0002b2f0 == -1)) {
      return;
    }
    if (DAT_0002b2f0 == -1) {
      return;
    }
  }
  if (DAT_000343f8 == 0) {
    uVar3 = 0xffffffff;
    pcVar4 = &DAT_00034402;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_0000a1d8(DAT_0002b2f0,&DAT_00034400,~uVar3 + 1);
    if (iVar2 != -1) {
      DAT_000343f8 = 1;
    }
  }
  return;
}



/* --- FUN_0000e118 @ 0000e118 --- */

void FUN_0000e118(void)

{
  FUN_0000dd08(1);
  return;
}



/* --- FUN_0000e128 @ 0000e128 --- */

int FUN_0000e128(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002b300;
  if (param_1 != 0) {
    DAT_0002b300 = param_1;
  }
  return iVar1;
}



/* --- FUN_0000e148 @ 0000e148 --- */

undefined8 FUN_0000e148(void)

{
  int iVar1;
  uint uVar2;
  byte *unaff_EBP;
  bool bVar3;
  bool bVar4;
  uint unaff_retaddr;
  byte *local_8;
  
  local_8 = (byte *)0x20;
  FUN_00018d40(1,&local_8,0);
  FUN_0000ae20();
  do {
    iVar1 = FUN_00018d70(6);
  } while (iVar1 == 0);
  FUN_0000b200(0x7f);
  if ((int)unaff_retaddr < 1) {
    uVar2 = 0;
  }
  else {
    bVar3 = false;
    uVar2 = 0;
    bVar4 = true;
    do {
      if (unaff_retaddr == 0) break;
      unaff_retaddr = unaff_retaddr - 1;
      bVar3 = *local_8 < *unaff_EBP;
      bVar4 = *local_8 == *unaff_EBP;
      local_8 = local_8 + 1;
      unaff_EBP = unaff_EBP + 1;
    } while (bVar4);
    unaff_retaddr = uVar2;
    if (!bVar4) {
      uVar2 = -(uint)bVar3 | 1;
      unaff_retaddr = uVar2;
    }
  }
  return CONCAT44(unaff_retaddr,uVar2);
}



/* --- FUN_0000e188 @ 0000e188 --- */

undefined8 FUN_0000e188(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if ((int)param_3 < 1) {
    uVar1 = 0;
  }
  else {
    bVar2 = false;
    uVar1 = 0;
    bVar3 = true;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      bVar2 = *param_1 < *param_2;
      bVar3 = *param_1 == *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar3);
    param_3 = uVar1;
    if (!bVar3) {
      uVar1 = -(uint)bVar2 | 1;
      param_3 = uVar1;
    }
  }
  return CONCAT44(param_3,uVar1);
}



/* --- FUN_0000e1c8 @ 0000e1c8 --- */

void FUN_0000e1c8(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xffff0000) == 0xfbad0000)) {
    FUN_00018d88(param_1,0,0);
    return;
  }
  DAT_0002a0a0 = 0x16;
  return;
}



/* --- FUN_0000e238 @ 0000e238 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e238(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int *piStack_18;
  int local_8;
  
  piStack_18 = &local_8;
  FUN_00016f28();
  piVar2 = DAT_000344a0;
  if (DAT_000344a0 == (int *)0x0) {
LAB_0000e272:
    piStack_18 = (int *)0x1c;
    piVar2 = (int *)FUN_00004690();
    FUN_00004bb0(piVar2,0x1c);
    piVar1 = piVar2;
    if (DAT_000344a0 != (int *)0x0) {
      *piVar2 = (int)DAT_000344a0;
    }
  }
  else {
    do {
      if (piVar2[6] < local_8) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
    piVar1 = DAT_000344a0;
    if (piVar2 == (int *)0x0) goto LAB_0000e272;
  }
  DAT_000344a0 = piVar1;
  ppiVar4 = (int **)&stack0xffffffec;
  if (piVar2[2] != 0) {
    piStack_18 = (int *)piVar2[2];
    FUN_00005058();
  }
  if (piVar2[3] != 0) {
    piStack_18 = (int *)piVar2[3];
    FUN_00005058();
  }
  piVar2[2] = 0;
  piVar2[3] = 0;
  piStack_18 = param_3;
  iVar3 = FUN_00004690();
  piVar2[2] = iVar3;
  if (iVar3 == 0) {
    return;
  }
  piStack_18 = param_5;
  iVar3 = FUN_00004690();
  piVar2[3] = iVar3;
  if (piVar2[2] == 0) {
    piStack_18 = (int *)0x0;
    FUN_00005058();
    piVar2[2] = 0;
    return;
  }
  piVar2[4] = (int)param_3;
  piVar2[5] = (int)param_5;
  piStack_18 = (int *)piVar2[4];
  FUN_00007dc0(param_2,piVar2[2]);
  FUN_00007dc0(param_4,piVar2[3],piVar2[5]);
  if (piVar2[1] != 0) {
    piStack_18 = param_1;
    iVar3 = FUN_000043d0(piVar2[1]);
    if (iVar3 == 0) goto LAB_0000e35f;
    piStack_18 = (int *)piVar2[1];
    ppiVar4 = &piStack_18;
    FUN_00005058();
  }
  *(int **)((int)ppiVar4 + -4) = param_1;
  *(undefined4 *)((int)ppiVar4 + -8) = 0xe35c;
  iVar3 = FUN_00004b18();
  piVar2[1] = iVar3;
LAB_0000e35f:
  piVar2[6] = local_8 + _DAT_0002b310;
  return;
}



/* --- FUN_0000e378 @ 0000e378 --- */

undefined4
FUN_0000e378(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  
  if (DAT_000344a0 != (undefined4 *)0x0) {
    FUN_00016f28(&local_8);
    for (puVar1 = DAT_000344a0; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((((puVar1[4] == param_3) && (iVar2 = FUN_000043d0(puVar1[1],param_1), iVar2 == 0)) &&
          (iVar2 = FUN_0000e188(puVar1[2],param_2,param_3), iVar2 == 0)) &&
         (local_8 <= (int)puVar1[6])) {
        *param_4 = puVar1[3];
        *param_5 = puVar1[5];
        return 1;
      }
    }
  }
  return 0;
}



/* --- FUN_0000e508 @ 0000e508 --- */

undefined4 FUN_0000e508(char *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_24;
  undefined2 local_20 [2];
  undefined4 local_1c;
  int local_10;
  uint local_c;
  undefined2 local_8;
  
  bVar3 = false;
  iVar4 = FUN_000108c0();
  if ((DAT_0002b314 != -1) && (puVar5 = DAT_00058c84, DAT_0002b314 != iVar4)) {
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5[0x48] != 0) {
        (**(code **)(*(int *)(puVar5[0x48] + 4) + 0x10))(puVar5[0x48]);
      }
      puVar2 = (undefined4 *)*puVar5;
      FUN_00005058(puVar5);
      puVar5 = puVar2;
    }
    DAT_00058c84 = (undefined4 *)0x0;
  }
  DAT_0002b314 = iVar4;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 == (char *)0x0) {
    return 1;
  }
  iVar4 = -1;
  pcVar7 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    return 1;
  }
  puVar5 = DAT_00058c84;
  if (DAT_00058c84 != (undefined4 *)0x0) {
    do {
      iVar4 = FUN_000043d0(param_1,puVar5 + 1);
      if (iVar4 == 0) break;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
    if (puVar5 != (undefined4 *)0x0) goto LAB_0000e617;
  }
  puVar5 = (undefined4 *)FUN_00004690(300);
  FUN_00004bb0(puVar5,300);
  puVar5[0x47] = 0xffffffff;
  puVar5[0x4a] = 0;
  bVar3 = true;
LAB_0000e617:
  do {
    if (puVar5[0x4a] + 1 < 2) {
      FUN_00004bb0(local_20,0x10);
      local_20[0] = 2;
      local_1c = 0x100007f;
      local_24 = 0xffffffff;
      iVar4 = FUN_00018e78(local_20,0x186a7,2,&local_24,0,0);
      if (iVar4 == 0) {
        if (bVar3) {
          FUN_00005058(puVar5);
        }
        return 10;
      }
      iVar6 = (*(code *)**(undefined4 **)(iVar4 + 4))
                        (iVar4,1,FUN_000195e0,param_1,FUN_00019a20,&local_10,DAT_0002b30c,0);
      if (iVar6 != 0) {
        FUN_00012f18(&DAT_0002b110,s_YP__server_for_domain__s_not_res_0000e415,param_1);
        (**(code **)(*(int *)(iVar4 + 4) + 0x10))(iVar4);
        puVar5[0x4a] = 0xffffffff;
        goto LAB_0000e617;
      }
      (**(code **)(*(int *)(iVar4 + 4) + 0x10))(iVar4);
      if (local_10 == 1) {
        FUN_00004bb0(puVar5 + 0x42,0x10);
        *(undefined2 *)(puVar5 + 0x42) = 2;
        *(undefined2 *)((int)puVar5 + 0x10a) = local_8;
        puVar5[0x43] = local_c;
        *(undefined2 *)(puVar5 + 0x46) = local_8;
      }
      else if (local_10 == 2) {
        if (local_c == 2) {
          FUN_00012f18(&DAT_0002b110,s_YPBINDPROC_DOMAIN__No_bound_serv_0000e46f,param_1);
          return 3;
        }
        if (local_c < 3) {
          if (local_c == 1) {
            pcVar7 = s_YPBINDPROC_DOMAIN__Internal_erro_0000e44c;
            goto LAB_0000e78d;
          }
        }
        else if (local_c == 3) {
          pcVar7 = s_YPBINDPROC_DOMAIN__Resource_allo_0000e4a1;
          goto LAB_0000e78d;
        }
        pcVar7 = s_YPBINDPROC_DOMAIN__Unknown_error_0000e4d1;
LAB_0000e78d:
        FUN_00012f18(&DAT_0002b110,pcVar7);
        return 3;
      }
      puVar5[0x4a] = 2;
      FUN_0000b828(puVar5 + 1,param_1);
    }
    iVar4 = DAT_0002b30c / 2;
    if (puVar5[0x48] != 0) {
      (**(code **)(*(int *)(puVar5[0x48] + 4) + 0x10))(puVar5[0x48]);
    }
    puVar5[0x47] = 0xffffffff;
    iVar4 = FUN_00019f38(puVar5 + 0x42,0x186a4,2,iVar4,0,puVar5 + 0x47);
    puVar5[0x48] = iVar4;
    if (iVar4 != 0) {
      iVar4 = FUN_0000b76c(puVar5[0x47],2,1);
      if (iVar4 == -1) {
        FUN_0000b598(s_fcntl__F_SETFD_0000e4f3);
      }
      if (bVar3) {
        *puVar5 = DAT_00058c84;
        DAT_00058c84 = puVar5;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = puVar5;
      }
      return 0;
    }
    puVar5[0x4a] = 0xffffffff;
  } while( true );
}



/* --- FUN_0000e8c8 @ 0000e8c8 --- */

void FUN_0000e8c8(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0x120) + 4) + 0x10))(*(int *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  return;
}



/* --- FUN_0000e908 @ 0000e908 --- */

void FUN_0000e908(undefined4 param_1)

{
  FUN_0000e508(param_1,0);
  return;
}



/* --- FUN_0000e928 @ 0000e928 --- */

void FUN_0000e928(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)0x0;
  puVar2 = DAT_00058c84;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    iVar3 = FUN_000043d0(param_1,puVar2 + 1);
    if (iVar3 == 0) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  (**(code **)(*(int *)(puVar2[0x48] + 4) + 0x10))(puVar2[0x48]);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_00058c84 = (undefined4 *)*puVar2;
  }
  else {
    *puVar1 = *puVar2;
  }
  FUN_00005058(puVar2);
  return;
}



/* --- FUN_0000e9b8 @ 0000e9b8 --- */

int FUN_0000e9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int *param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  *param_5 = 0;
  *param_6 = 0;
  while( true ) {
    iVar2 = FUN_0000e508(param_1,&local_24);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_000043d0(&DAT_00034460,param_1);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_0000e378(param_2,param_3,param_4,&local_c,&local_8), iVar2 != 0)) break;
    uVar1 = DAT_0002b30c;
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00004bb0(&local_10,0xc);
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(local_24 + 0x120) + 4))
                      (*(int *)(local_24 + 0x120),3,FUN_000196d0,&local_20,FUN_00019770,&local_10,
                       uVar1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_0000f748(local_10);
      if (iVar2 == 0) {
        *param_6 = local_8;
        iVar3 = FUN_00004690(*param_6 + 2);
        *param_5 = iVar3;
        FUN_00007dc0(local_c,iVar3,*param_6);
        *(undefined1 *)(*param_6 + *param_5) = 10;
        *(undefined1 *)(*param_5 + 1 + *param_6) = 0;
        iVar3 = FUN_000043d0(&DAT_00034460,param_1);
        if (iVar3 == 0) {
          FUN_0000e238(param_2,param_3,param_4,*param_5,*param_6);
        }
      }
      FUN_0001ae20(FUN_00019770,&local_10);
      FUN_0000e8c8(local_24);
      return iVar2;
    }
    FUN_0001a890(*(undefined4 *)(local_24 + 0x120),s_yp_match__clnt_call_0000e99a);
    *(undefined4 *)(local_24 + 0x128) = 0xffffffff;
  }
  *param_6 = local_8;
  iVar2 = FUN_00004690(*param_6 + 2);
  *param_5 = iVar2;
  FUN_00007dc0(local_c,iVar2,*param_6);
  *(undefined1 *)(*param_6 + *param_5) = 10;
  *(undefined1 *)(*param_5 + 1 + *param_6) = 0;
  return 0;
}



/* --- FUN_0000ebb8 @ 0000ebb8 --- */

undefined4 FUN_0000ebb8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  if ((DAT_00034460 == '\0') && (iVar1 = FUN_0001b4c0(&DAT_00034460,0x40), iVar1 != 0)) {
    return 0xc;
  }
  *param_1 = &DAT_00034460;
  return 0;
}



/* --- FUN_0000ec18 @ 0000ec18 --- */

int FUN_0000ec18(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
                int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  *param_5 = 0;
  *param_3 = 0;
  *param_6 = 0;
  *param_4 = 0;
  while( true ) {
    iVar2 = FUN_0000e508(param_1,&local_1c);
    uVar1 = DAT_0002b30c;
    if (iVar2 != 0) {
      return 3;
    }
    local_24 = param_1;
    local_20 = param_2;
    FUN_00004bb0(&local_18,0x14);
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(local_1c + 0x120) + 4))
                      (*(int *)(local_1c + 0x120),4,FUN_00019730,&local_24,FUN_000197b0,&local_18,
                       uVar1,0);
    if (iVar2 == 0) break;
    FUN_0001a890(*(undefined4 *)(local_1c + 0x120),s_yp_first__clnt_call_0000ebf7);
    *(undefined4 *)(local_1c + 0x128) = 0xffffffff;
  }
  iVar2 = FUN_0000f748(local_18);
  if (iVar2 == 0) {
    *param_4 = local_10;
    iVar3 = FUN_00004690(*param_4 + 2);
    *param_3 = iVar3;
    FUN_00007dc0(local_14,iVar3,*param_4);
    *(undefined1 *)(*param_4 + *param_3) = 10;
    *(undefined1 *)(*param_3 + 1 + *param_4) = 0;
    *param_6 = local_8;
    iVar3 = FUN_00004690(*param_6 + 2);
    *param_5 = iVar3;
    FUN_00007dc0(local_c,iVar3,*param_6);
    *(undefined1 *)(*param_6 + *param_5) = 10;
    *(undefined1 *)(*param_5 + 1 + *param_6) = 0;
  }
  FUN_0001ae20(FUN_000197b0,&local_18);
  FUN_0000e8c8(local_1c);
  return iVar2;
}



/* --- FUN_0000edd8 @ 0000edd8 --- */

int FUN_0000edd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int *param_5,int *param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  *param_7 = 0;
  *param_5 = 0;
  *param_8 = 0;
  *param_6 = 0;
  while( true ) {
    iVar2 = FUN_0000e508(param_1,&local_2c);
    uVar1 = DAT_0002b30c;
    if (iVar2 != 0) {
      return 3;
    }
    local_28 = param_1;
    local_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    FUN_00004bb0(&local_18,0x14);
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(local_2c + 0x120) + 4))
                      (*(int *)(local_2c + 0x120),5,FUN_000196d0,&local_28,FUN_000197b0,&local_18,
                       uVar1,0);
    if (iVar2 == 0) break;
    FUN_0001a890(*(undefined4 *)(local_2c + 0x120),s_yp_next__clnt_call_0000edb8);
    *(undefined4 *)(local_2c + 0x128) = 0xffffffff;
  }
  iVar2 = FUN_0000f748(local_18);
  if (iVar2 == 0) {
    *param_6 = local_10;
    iVar3 = FUN_00004690(*param_6 + 2);
    *param_5 = iVar3;
    FUN_00007dc0(local_14,iVar3,*param_6);
    *(undefined1 *)(*param_6 + *param_5) = 10;
    *(undefined1 *)(*param_5 + 1 + *param_6) = 0;
    *param_8 = local_8;
    iVar3 = FUN_00004690(*param_8 + 2);
    *param_7 = iVar3;
    FUN_00007dc0(local_c,iVar3,*param_8);
    *(undefined1 *)(*param_8 + *param_7) = 10;
    *(undefined1 *)(*param_7 + 1 + *param_8) = 0;
  }
  FUN_0001ae20(FUN_000197b0,&local_18);
  FUN_0000e8c8(local_2c);
  return iVar2;
}



/* --- FUN_0000ef98 @ 0000ef98 --- */

undefined4 FUN_0000ef98(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_0000e508(param_1,&local_18);
  uVar2 = DAT_0002b30c;
  if (iVar1 == 0) {
    local_1c = 0xffffffff;
    local_10 = *(undefined4 *)(local_18 + 0x10c);
    local_c = *(undefined4 *)(local_18 + 0x110);
    local_8 = *(undefined4 *)(local_18 + 0x114);
    local_14 = *(uint *)(local_18 + 0x108) & 0xffff;
    iVar1 = FUN_00018e78(&local_14,0x186a4,2,&local_1c,0,0);
    if (iVar1 == 0) {
      FUN_0000b478(s_clnttcp_create_failed_0000ef78);
      uVar2 = 9;
    }
    else {
      local_24 = param_1;
      local_20 = param_2;
      DAT_00058c88 = *param_3;
      DAT_00058c80 = param_3[1];
      (*(code *)**(undefined4 **)(iVar1 + 4))
                (iVar1,8,FUN_00019730,&local_24,FUN_00019af0,&local_28,uVar2,0);
      (**(code **)(*(int *)(iVar1 + 4) + 0x10))(iVar1);
      FUN_0001ae20(FUN_00019af0,&local_28);
      FUN_0000e8c8(local_18);
      if (local_28 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0000f748(local_28);
      }
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* --- FUN_0000f0e8 @ 0000f0e8 --- */

undefined4 FUN_0000f0e8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  while( true ) {
    iVar1 = FUN_0000e508(param_1,&local_8);
    uVar2 = DAT_0002b30c;
    if (iVar1 != 0) {
      return 3;
    }
    local_18 = param_1;
    local_14 = param_2;
    FUN_00004bb0(&local_10,8);
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(local_8 + 0x120) + 4))
                      (*(int *)(local_8 + 0x120),10,FUN_00019730,&local_18,FUN_00019840,&local_10,
                       uVar2,0);
    if (iVar1 == 0) break;
    FUN_0001a890(*(undefined4 *)(local_8 + 0x120),s_yp_order__clnt_call_0000f0cb);
    *(undefined4 *)(local_8 + 0x128) = 0xffffffff;
  }
  *param_3 = local_c;
  FUN_0001ae20(FUN_00019840,&local_10);
  FUN_0000e8c8(local_8);
  uVar2 = FUN_0000f748(local_10);
  return uVar2;
}



/* --- FUN_0000f1e8 @ 0000f1e8 --- */

int FUN_0000f1e8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  while( true ) {
    iVar1 = FUN_0000e508(param_1,&local_8);
    uVar2 = DAT_0002b30c;
    if (iVar1 != 0) {
      return 3;
    }
    local_18 = param_1;
    local_14 = param_2;
    FUN_00004bb0(&local_10,8);
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(local_8 + 0x120) + 4))
                      (*(int *)(local_8 + 0x120),9,FUN_00019730,&local_18,FUN_00019800,&local_10,
                       uVar2,0);
    if (iVar1 == 0) break;
    FUN_0001a890(*(undefined4 *)(local_8 + 0x120),s_yp_master__clnt_call_0000f1ca);
    *(undefined4 *)(local_8 + 0x128) = 0xffffffff;
  }
  iVar1 = FUN_0000f748(local_10);
  if (iVar1 == 0) {
    uVar2 = FUN_00004b18(local_c);
    *param_3 = uVar2;
  }
  FUN_0001ae20(FUN_00019800,&local_10);
  FUN_0000e8c8(local_8);
  return iVar1;
}



/* --- FUN_0000f2f8 @ 0000f2f8 --- */

undefined4 FUN_0000f2f8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  while( true ) {
    iVar1 = FUN_0000e508(param_1,&local_8);
    uVar2 = DAT_0002b30c;
    if (iVar1 != 0) {
      return 3;
    }
    FUN_00004bb0(&local_10,8);
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(local_8 + 0x120) + 4))
                      (*(int *)(local_8 + 0x120),0xb,FUN_000195e0,param_1,FUN_00019950,&local_10,
                       uVar2,0);
    if (iVar1 == 0) break;
    FUN_0001a890(*(undefined4 *)(local_8 + 0x120),s_yp_maplist__clnt_call_0000f2de);
    *(undefined4 *)(local_8 + 0x128) = 0xffffffff;
  }
  *param_2 = local_c;
  FUN_0000e8c8(local_8);
  uVar2 = FUN_0000f748(local_10);
  return uVar2;
}



/* --- FUN_0000f5a8 @ 0000f5a8 --- */

char * FUN_0000f5a8(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return s_Success_0000f3bc;
  case 1:
    return s_Request_arguments_bad_0000f3c4;
  case 2:
    return s_RPC_failure_0000f3da;
  case 3:
    return s_Can_t_bind_to_server_which_serve_0000f3e6;
  case 4:
    return s_No_such_map_in_server_s_domain_0000f414;
  case 5:
    return s_No_such_key_in_map_0000f433;
  case 6:
    return s_YP_server_error_0000f446;
  case 7:
    return s_Local_resource_allocation_failur_0000f456;
  case 8:
    return s_No_more_records_in_map_database_0000f478;
  case 9:
    return s_Can_t_communicate_with_portmappe_0000f498;
  case 10:
    return s_Can_t_communicate_with_ypbind_0000f4ba;
  case 0xb:
    return s_Can_t_communicate_with_ypserv_0000f4d8;
  case 0xc:
    return s_Local_domain_name_not_set_0000f4f6;
  case 0xd:
    return s_Server_data_base_is_bad_0000f510;
  case 0xe:
    return s_YP_server_version_mismatch___ser_0000f528;
  case 0xf:
    return s_Access_violation_0000f562;
  case 0x10:
    return s_Database_is_busy_0000f573;
  default:
    FUN_0000f910(&DAT_00034410,s_YP_unknown_error__d_0000f584,param_1);
    return &DAT_00034410;
  }
}



/* --- FUN_0000f748 @ 0000f748 --- */

undefined4 FUN_0000f748(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 10;
  case 1:
    return 0;
  case 2:
    return 8;
  case 0xfffffff8:
    return 0xe;
  case 0xfffffff9:
    return 1;
  case 0xfffffffa:
  case 0xfffffffc:
    return 6;
  case 0xfffffffb:
    return 0xd;
  case 0xfffffffd:
    return 5;
  case 0xfffffffe:
    return 0xc;
  case 0xffffffff:
    return 4;
  default:
    return 6;
  }
}



/* --- FUN_0000f848 @ 0000f848 --- */

undefined4 FUN_0000f848(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_8 [4];
  
  if ((DAT_00034460 != '\0') || (iVar1 = FUN_0000ebb8(local_8), iVar1 == 0)) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_00034460;
    }
    iVar1 = FUN_0000e908(&DAT_00034460);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



/* --- FUN_0000f898 @ 0000f898 --- */

void FUN_0000f898(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00018c10(param_1,param_2,param_3,&stack0x00000010);
  return;
}



/* --- FUN_0000f8b8 @ 0000f8b8 --- */

int FUN_0000f8b8(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000f8e4 @ 0000f8e4 --- */

int FUN_0000f8e4(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000f910 @ 0000f910 --- */

void FUN_0000f910(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b530(param_1,param_2,&stack0x0000000c);
  return;
}



/* --- FUN_0000f928 @ 0000f928 --- */

char * FUN_0000f928(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    if (cVar1 == param_2) goto LAB_0000f943;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  pcVar2 = (char *)0x1;
LAB_0000f943:
  return pcVar2 + -1;
}



/* --- FUN_0000f950 @ 0000f950 --- */

int FUN_0000f950(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0000f970 @ 0000f970 --- */

undefined4 * FUN_0000f970(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00004690(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



/* --- FUN_0000f9a0 @ 0000f9a0 --- */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_0000f9a0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *local_8;
  
  bVar1 = false;
  if (param_1 == 0) {
    DAT_0002a0a0 = 0x16;
    return (undefined4 *)0x0;
  }
  do {
    iVar3 = FUN_0001b598(param_2,param_2 + 1,param_1);
    if (iVar3 == -1) {
      return (undefined4 *)0x0;
    }
    pcVar5 = (char *)*param_2;
  } while (*pcVar5 == '#');
  if ((*pcVar5 == '+') || (*pcVar5 == '-')) {
    bVar1 = true;
    param_2[5] = 0;
    param_2[3] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
  }
  local_8 = (char *)FUN_0000f928(pcVar5,0x3a);
  param_2[2] = pcVar5;
  if (local_8 == (char *)0x0) {
    if (!bVar1) {
      return (undefined4 *)0x0;
    }
    puVar4 = (undefined1 *)FUN_0000f928(param_2[2],10);
    goto joined_r0x0000fb69;
  }
  *local_8 = '\0';
  pcVar5 = local_8 + 1;
  local_8 = (char *)FUN_0000f928(pcVar5,0x3a);
  if (local_8 != (char *)0x0) {
    *local_8 = '\0';
    param_2[3] = pcVar5;
    uVar2 = FUN_0000b218(local_8 + 1,&local_8,10);
    *(undefined2 *)(param_2 + 4) = uVar2;
    if (*local_8 == ':') {
      uVar2 = FUN_0000b218(local_8 + 1,&local_8,10);
      *(undefined2 *)((int)param_2 + 0x12) = uVar2;
      if (*local_8 == ':') {
        param_2[5] = local_8 + 1;
        local_8 = (char *)FUN_0000f928(local_8 + 1,0x3a);
        if (local_8 == (char *)0x0) {
          if (!bVar1) {
            return (undefined4 *)0x0;
          }
          puVar4 = (undefined1 *)FUN_0000f928(param_2[5],10);
joined_r0x0000fb69:
          if (puVar4 == (undefined1 *)0x0) goto LAB_0000fba6;
        }
        else {
          *local_8 = '\0';
          param_2[6] = local_8 + 1;
          local_8 = (char *)FUN_0000f928(local_8 + 1,0x3a);
          if (local_8 == (char *)0x0) {
            if (!bVar1) {
              return (undefined4 *)0x0;
            }
            puVar4 = (undefined1 *)FUN_0000f928(param_2[6],10);
            goto joined_r0x0000fb69;
          }
          *local_8 = '\0';
          param_2[7] = local_8 + 1;
          puVar4 = (undefined1 *)FUN_0000f928(local_8 + 1,10);
          if (puVar4 == (undefined1 *)0x0) goto joined_r0x0000fae5;
        }
        *puVar4 = 0;
        goto LAB_0000fba6;
      }
    }
  }
joined_r0x0000fae5:
  if (!bVar1) {
    return (undefined4 *)0x0;
  }
LAB_0000fba6:
  return param_2 + 2;
}



/* --- FUN_0000fbc0 @ 0000fbc0 --- */

int * FUN_0000fbc0(char *param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar6 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  if (*param_2 == 0) {
LAB_0000fbf2:
    iVar3 = FUN_00004690(uVar6);
  }
  else {
    if (uVar6 <= (uint)param_2[1]) goto LAB_0000fc1b;
    if (*param_2 == 0) goto LAB_0000fbf2;
    iVar3 = FUN_0001b6e8(*param_2,uVar6);
  }
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  *param_2 = iVar3;
  param_2[1] = uVar6;
LAB_0000fc1b:
  FUN_0000b828(*param_2,param_1);
  iVar3 = *param_2;
  puVar4 = (undefined1 *)FUN_0000f928(iVar3,0x3a);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
    param_2[2] = iVar3;
    puVar5 = (undefined1 *)FUN_0000f928(puVar4 + 1,0x3a);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
      param_2[3] = (int)(puVar4 + 1);
      puVar4 = (undefined1 *)FUN_0000f928(puVar5 + 1,0x3a);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
        uVar2 = FUN_0000b218(puVar5 + 1,0,10);
        *(undefined2 *)(param_2 + 4) = uVar2;
        puVar5 = (undefined1 *)FUN_0000f928(puVar4 + 1,0x3a);
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
          uVar2 = FUN_0000b218(puVar4 + 1,0,10);
          *(undefined2 *)((int)param_2 + 0x12) = uVar2;
          puVar4 = (undefined1 *)FUN_0000f928(puVar5 + 1,0x3a);
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = 0;
            param_2[5] = (int)(puVar5 + 1);
            puVar5 = (undefined1 *)FUN_0000f928(puVar4 + 1,0x3a);
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 0;
              param_2[6] = (int)(puVar4 + 1);
              puVar4 = (undefined1 *)FUN_0000f928(puVar5 + 1,10);
              if (puVar4 != (undefined1 *)0x0) {
                *puVar4 = 0;
              }
              param_2[7] = (int)(puVar5 + 1);
              return param_2 + 2;
            }
          }
        }
      }
    }
  }
  return (int *)0x0;
}



/* --- FUN_0000fd30 @ 0000fd30 --- */

void FUN_0000fd30(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  **(undefined1 **)(param_1 + 0xc) = 0;
  *puVar1 = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  **(undefined1 **)(param_1 + 0x14) = 0;
  *puVar1 = 0;
  return;
}



/* --- FUN_0000fd60 @ 0000fd60 --- */

int FUN_0000fd60(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00004690(0x18);
  iVar2 = FUN_00004690(0x104);
  *(int *)(iVar1 + 4) = iVar2;
  *(int *)(iVar1 + 0xc) = iVar2 + 0x14;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0xc) + 0x50;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x10) + 0x50;
  FUN_0000fd30(iVar1);
  return iVar1;
}



/* --- FUN_0000fdb0 @ 0000fdb0 --- */

void FUN_0000fdb0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((*(int *)(param_1 + 4) != 0) && (pcVar1 = *(char **)(param_1 + 4), *pcVar1 != '\0')) {
      if (param_3 == 0) {
        pcVar1 = (char *)FUN_0000b828(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
      }
      *(char **)(param_2 + 4) = pcVar1;
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (pcVar1 = *(char **)(param_1 + 0xc), *pcVar1 != '\0')) {
      if (param_3 == 0) {
        pcVar1 = (char *)FUN_0000b828(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0xc))
        ;
      }
      *(char **)(param_2 + 0xc) = pcVar1;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (pcVar1 = *(char **)(param_1 + 0x10), *pcVar1 != '\0')) {
      if (param_3 == 0) {
        pcVar1 = (char *)FUN_0000b828(*(undefined4 *)(param_2 + 0x10),
                                      *(undefined4 *)(param_1 + 0x10));
      }
      *(char **)(param_2 + 0x10) = pcVar1;
    }
    if ((*(int *)(param_1 + 0x14) != 0) && (pcVar1 = *(char **)(param_1 + 0x14), *pcVar1 != '\0')) {
      if (param_3 == 0) {
        pcVar1 = (char *)FUN_0000b828(*(undefined4 *)(param_2 + 0x14),
                                      *(undefined4 *)(param_1 + 0x14));
      }
      *(char **)(param_2 + 0x14) = pcVar1;
    }
  }
  return;
}



/* --- FUN_0000fe80 @ 0000fe80 --- */

void FUN_0000fe80(void)

{
  FUN_0000b4f8(s__etc_passwd_0000fe72,&DAT_0000fe70);
  return;
}



/* --- FUN_0000fea8 @ 0000fea8 --- */

undefined4 * FUN_0000fea8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (((DAT_0002b320 == 0) && (DAT_0002b320 = FUN_0000f970(), DAT_0002b320 == 0)) ||
     (iVar1 = FUN_0000fe80(), iVar1 == 0)) {
    return (undefined4 *)0x0;
  }
  do {
    while( true ) {
      puVar2 = (undefined4 *)FUN_0000f9a0(iVar1,DAT_0002b320);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00010086;
      if (DAT_0002b31c == 0) {
        DAT_0002b31c = FUN_0000fd60();
      }
      pcVar4 = (char *)*puVar2;
      if (((*pcVar4 == '-') && (pcVar4[1] == '@')) &&
         ((pcVar4[2] != '\0' && (iVar3 = FUN_00010280(pcVar4 + 2,0,param_1,0), iVar3 == 1)))) {
        return (undefined4 *)0x0;
      }
      pcVar4 = (char *)*puVar2;
      if (((*pcVar4 != '+') || (pcVar4[1] != '@')) || (pcVar4[2] == '\0')) break;
      iVar3 = FUN_00010280(pcVar4 + 2,0,param_1,0);
      if (iVar3 == 1) {
LAB_0000ff73:
        FUN_0000fd30(DAT_0002b31c);
        FUN_0000fdb0(puVar2,DAT_0002b31c,0);
        puVar2 = (undefined4 *)FUN_000100b8(param_1,DAT_0002b320);
        FUN_0000fdb0(DAT_0002b31c,puVar2,1);
        goto LAB_00010086;
      }
    }
    if ((*(char *)*puVar2 == '-') && (iVar3 = FUN_000043d0((char *)*puVar2 + 1,param_1), iVar3 == 0)
       ) {
      return (undefined4 *)0x0;
    }
    if ((*(char *)*puVar2 == '+') && (iVar3 = FUN_000043d0((char *)*puVar2 + 1,param_1), iVar3 == 0)
       ) {
      FUN_0000fd30(DAT_0002b31c);
      FUN_0000fdb0(puVar2,DAT_0002b31c,0);
      if ((DAT_0002b318 == 0) && (DAT_0002b318 = FUN_0000f970(), DAT_0002b318 == 0)) {
        return (undefined4 *)0x0;
      }
      puVar2 = (undefined4 *)FUN_000100b8(param_1,DAT_0002b318);
      FUN_0000fdb0(DAT_0002b31c,puVar2,1);
      break;
    }
    iVar3 = 2;
    bVar6 = true;
    pcVar4 = (char *)*puVar2;
    pcVar5 = &DAT_0000fe98;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) goto LAB_0000ff73;
    iVar3 = FUN_000043d0(*puVar2,param_1);
  } while (iVar3 != 0);
LAB_00010086:
  FUN_00015af8(iVar1);
  return puVar2;
}



/* --- FUN_000100b8 @ 000100b8 --- */

undefined4 FUN_000100b8(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_c [4];
  undefined4 local_8;
  
  uVar4 = 0;
  iVar2 = FUN_0000f848(0);
  if (iVar2 == 1) {
    if (DAT_0002b324 == 0) {
      FUN_0000ebb8(&DAT_0002b324);
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_0000e9b8(DAT_0002b324,s_passwd_byname_0001009b,param_1,~uVar3 - 1,&local_8,local_c);
    if (iVar2 == 0) {
      uVar4 = FUN_0000fbc0(local_8,param_2);
      FUN_00005058(local_8);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* --- FUN_00010150 @ 00010150 --- */

void FUN_00010150(undefined4 param_1)

{
  int iVar1;
  
  if ((DAT_0002b338 != 0) && (iVar1 = FUN_000043d0(DAT_0002b338,param_1), iVar1 == 0)) {
    DAT_0002b334 = 1;
    return;
  }
  FUN_000101a0();
  DAT_0002b338 = FUN_00004b18(param_1);
  FUN_000103e0(param_1,&DAT_0002b328);
  DAT_0002b334 = 1;
  return;
}



/* --- FUN_000101a0 @ 000101a0 --- */

void FUN_000101a0(void)

{
  if (DAT_0002b338 != 0) {
    FUN_00005058(DAT_0002b338);
    DAT_0002b338 = 0;
  }
  if (DAT_0002b330 != 0) {
    FUN_00010360(&DAT_0002b328);
  }
  DAT_0002b334 = 1;
  return;
}



/* --- FUN_000101f0 @ 000101f0 --- */

bool FUN_000101f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  
  if (DAT_0002b334 == 1) {
    DAT_0002b334 = 0;
    DAT_0002b340 = 0;
  }
  else {
    DAT_0002b340 = DAT_0002b340 + 1;
  }
  bVar1 = DAT_0002b340 < DAT_0002b32c;
  if (bVar1) {
    puVar2 = (undefined4 *)(DAT_0002b340 * 0xc + DAT_0002b330);
    *param_1 = *puVar2;
    *param_2 = puVar2[1];
    *param_3 = puVar2[2];
  }
  return bVar1;
}



/* --- FUN_00010280 @ 00010280 --- */

int FUN_00010280(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00010270;
  local_c = DAT_00010274;
  local_8 = DAT_00010278;
  iVar3 = 0;
  FUN_000103e0(param_1,&local_10);
  local_14 = 0;
  if (0 < local_c) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(iVar4 + local_8);
      iVar3 = 0;
      if ((param_2 == 0) || (*piVar2 == 0)) {
LAB_000102ed:
        if ((param_3 != 0) && (piVar2[1] != 0)) {
          iVar1 = FUN_000043d0(param_3,piVar2[1]);
          if (iVar1 != 0) goto LAB_00010332;
        }
        if ((param_4 != 0) && (piVar2[2] != 0)) {
          iVar1 = FUN_000043d0(param_4,piVar2[2]);
          if (iVar1 != 0) goto LAB_00010332;
        }
        iVar3 = 1;
      }
      else {
        iVar1 = FUN_000043d0(param_2,*piVar2);
        if (iVar1 == 0) goto LAB_000102ed;
      }
LAB_00010332:
      if (iVar3 == 1) break;
      iVar4 = iVar4 + 0xc;
      local_14 = local_14 + 1;
    } while (local_14 < local_c);
  }
  if (local_8 != 0) {
    FUN_00010360(&local_10);
  }
  return iVar3;
}



/* --- FUN_00010360 @ 00010360 --- */

void FUN_00010360(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    iVar1 = 0;
    do {
      FUN_00005058(*(undefined4 *)(param_1[2] + iVar1));
      FUN_00005058(*(undefined4 *)(param_1[2] + 4 + iVar1));
      FUN_00005058(*(undefined4 *)(param_1[2] + 8 + iVar1));
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  FUN_00005058(param_1[2]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* --- FUN_000103e0 @ 000103e0 --- */

void FUN_000103e0(char *param_1,undefined4 param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined1 local_c [4];
  byte *local_8;
  
  if ((*param_1 != '\0') && (iVar4 = FUN_0000f848(0), iVar4 == 1)) {
    if (DAT_0002b33c == 0) {
      FUN_0000ebb8(&DAT_0002b33c);
    }
    uVar6 = 0xffffffff;
    pcVar8 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar4 = FUN_0000e9b8(DAT_0002b33c,s_netgroup_000103cd,param_1,~uVar6 - 1,&local_8,local_c);
    if (iVar4 == 0) {
      uVar6 = 0xffffffff;
      pbVar7 = local_8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
      pbVar1 = local_8 + (~uVar6 - 1);
      bVar3 = PTR_DAT_0002b058[(uint)*local_8 * 2];
      pbVar7 = local_8;
      while ((bVar3 & 0x10) != 0) {
        if (pbVar1 <= pbVar7) goto LAB_00010546;
        pbVar7 = pbVar7 + 1;
        bVar3 = PTR_DAT_0002b058[(uint)*pbVar7 * 2];
      }
      while (pbVar7 < pbVar1) {
        if (*pbVar7 == 0x28) {
          pbVar5 = (byte *)FUN_0000f928(pbVar7,0x29);
          if (pbVar5 == (byte *)0x0) {
            return;
          }
          FUN_00010560(pbVar7 + 1,pbVar5,param_2);
        }
        else {
          pbVar5 = pbVar7 + 1;
          if (((pbVar7[1] != 0) && ((PTR_DAT_0002b058[(uint)pbVar7[1] * 2] & 0x10) == 0)) &&
             (pbVar5 = pbVar7 + 2, pbVar7[2] != 0)) {
            bVar3 = PTR_DAT_0002b058[(uint)pbVar7[2] * 2];
            while (((bVar3 & 0x10) == 0 && (pbVar5 = pbVar5 + 1, *pbVar5 != 0))) {
              bVar3 = PTR_DAT_0002b058[(uint)*pbVar5 * 2];
            }
          }
          *pbVar5 = 0;
          FUN_000103e0(pbVar7,param_2);
        }
        pbVar7 = pbVar5 + 1;
        bVar3 = PTR_DAT_0002b058[(uint)pbVar5[1] * 2];
        while ((bVar3 & 0x10) != 0) {
          if (pbVar1 <= pbVar7) goto LAB_00010546;
          pbVar7 = pbVar7 + 1;
          bVar3 = PTR_DAT_0002b058[(uint)*pbVar7 * 2];
        }
      }
LAB_00010546:
      FUN_00005058(local_8);
    }
  }
  return;
}



/* --- FUN_00010560 @ 00010560 --- */

void FUN_00010560(char *param_1,undefined1 *param_2,int *param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined1 *)FUN_0000f928(param_1,0x2c);
  if ((puVar2 != (undefined1 *)0x0) && (puVar2 < param_2)) {
    *puVar2 = 0;
    pcVar1 = puVar2 + 1;
    puVar2 = (undefined1 *)FUN_0000f928(pcVar1,0x2c);
    if ((puVar2 != (undefined1 *)0x0) && (puVar2 < param_2)) {
      *puVar2 = 0;
      *param_2 = 0;
      if (*param_3 == 0) {
        iVar3 = FUN_00004690(0x78);
        param_3[2] = iVar3;
        if (iVar3 != 0) {
          *param_3 = 10;
        }
      }
      if (*param_3 == param_3[1]) {
        iVar3 = FUN_0001b6e8(param_3[2],(*param_3 + 10) * 0xc);
        param_3[2] = iVar3;
        if (iVar3 == 0) {
          *param_3 = 0;
          param_3[1] = 0;
          return;
        }
        *param_3 = *param_3 + 10;
      }
      puVar5 = (undefined4 *)(param_3[1] * 0xc + param_3[2]);
      if (*pcVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00004b18(pcVar1);
      }
      puVar5[1] = uVar4;
      if (*param_1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00004b18(param_1);
      }
      *puVar5 = uVar4;
      if (puVar2[1] == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00004b18(puVar2 + 1);
      }
      puVar5[2] = uVar4;
      param_3[1] = param_3[1] + 1;
    }
  }
  return;
}



/* --- FUN_00010698 @ 00010698 --- */

void FUN_00010698(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_10;
  int local_c;
  
  uVar4 = param_4;
  while (param_4 = uVar4, uVar5 = param_3, uVar4 = param_2, param_3 = param_1,
        param_5 = param_5 + -1, param_5 != -1) {
    local_10 = &DAT_00040c00;
    local_c = 7;
    do {
      uVar6 = (uVar5 ^ *local_10) & 0xffff;
      uVar2 = (uVar5 ^ *local_10) >> 0x10;
      uVar7 = (param_4 ^ local_10[1]) & 0xffff;
      uVar3 = (param_4 ^ local_10[1]) >> 0x10;
      uVar9 = param_3 ^ *(uint *)(&DAT_00040c80 + uVar6) ^ *(uint *)(&DAT_00038c00 + uVar2) ^
              *(uint *)(&DAT_00048c80 + uVar7) ^ *(uint *)(&DAT_00050c80 + uVar3);
      uVar7 = uVar4 ^ *(uint *)(&DAT_00040c84 + uVar6) ^ *(uint *)(&DAT_00038c04 + uVar2) ^
              *(uint *)(&DAT_00048c84 + uVar7) ^ *(uint *)(&DAT_00050c84 + uVar3);
      uVar4 = uVar9 ^ local_10[2];
      uVar3 = uVar4 & 0xffff;
      uVar4 = uVar4 >> 0x10;
      uVar2 = uVar7 ^ local_10[3];
      uVar6 = uVar2 & 0xffff;
      uVar2 = uVar2 >> 0x10;
      uVar8 = uVar5 ^ *(uint *)(&DAT_00040c80 + uVar3) ^ *(uint *)(&DAT_00038c00 + uVar4) ^
              *(uint *)(&DAT_00048c80 + uVar6) ^ *(uint *)(&DAT_00050c80 + uVar2);
      uVar2 = param_4 ^ *(uint *)(&DAT_00040c84 + uVar3) ^ *(uint *)(&DAT_00038c04 + uVar4) ^
              *(uint *)(&DAT_00048c84 + uVar6) ^ *(uint *)(&DAT_00050c84 + uVar2);
      uVar4 = uVar8 ^ local_10[4];
      uVar3 = uVar4 & 0xffff;
      uVar4 = uVar4 >> 0x10;
      uVar5 = uVar2 ^ local_10[5];
      uVar6 = uVar5 & 0xffff;
      uVar5 = uVar5 >> 0x10;
      param_3 = uVar9 ^ *(uint *)(&DAT_00040c80 + uVar3) ^ *(uint *)(&DAT_00038c00 + uVar4) ^
                *(uint *)(&DAT_00048c80 + uVar6) ^ *(uint *)(&DAT_00050c80 + uVar5);
      uVar4 = uVar7 ^ *(uint *)(&DAT_00040c84 + uVar3) ^ *(uint *)(&DAT_00038c04 + uVar4) ^
              *(uint *)(&DAT_00048c84 + uVar6) ^ *(uint *)(&DAT_00050c84 + uVar5);
      uVar7 = (param_3 ^ local_10[6]) & 0xffff;
      uVar3 = (param_3 ^ local_10[6]) >> 0x10;
      puVar1 = local_10 + 7;
      local_10 = local_10 + 8;
      uVar9 = (uVar4 ^ *puVar1) & 0xffff;
      uVar6 = (uVar4 ^ *puVar1) >> 0x10;
      uVar5 = uVar8 ^ *(uint *)(&DAT_00040c80 + uVar7) ^ *(uint *)(&DAT_00038c00 + uVar3) ^
              *(uint *)(&DAT_00048c80 + uVar9) ^ *(uint *)(&DAT_00050c80 + uVar6);
      param_4 = uVar2 ^ *(uint *)(&DAT_00040c84 + uVar7) ^ *(uint *)(&DAT_00038c04 + uVar3) ^
                *(uint *)(&DAT_00048c84 + uVar9) ^ *(uint *)(&DAT_00050c84 + uVar6);
      local_c = local_c + -2;
      param_1 = uVar5;
      param_2 = param_4;
    } while (local_c != -1);
  }
  FUN_000092a0(param_3,uVar4,uVar5,param_4);
  return;
}



/* --- FUN_00010848 @ 00010848 --- */

undefined4 FUN_00010848(void)

{
  return 0x100;
}



/* --- FUN_00010858 @ 00010858 --- */

int FUN_00010858(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00010880 @ 00010880 --- */

int FUN_00010880(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_000108a0 @ 000108a0 --- */

int FUN_000108a0(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_000108c0 @ 000108c0 --- */

int FUN_000108c0(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_000108e0 @ 000108e0 --- */

int FUN_000108e0(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00010904 @ 00010904 --- */

int FUN_00010904(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00010928 @ 00010928 --- */

undefined4 * FUN_00010928(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((uint)((int)param_1 - (int)param_2) < param_3) {
    param_2 = (undefined4 *)((int)param_2 + param_3);
    puVar2 = (undefined4 *)((int)param_1 + param_3);
    if (7 < param_3) {
      uVar1 = (uint)puVar2 & 3;
      param_3 = param_3 - uVar1;
      while( true ) {
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *(undefined1 *)((int)puVar2 + -1) = *(undefined1 *)((int)param_2 + -1);
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar2 = (undefined4 *)((int)puVar2 + -1);
      }
      uVar1 = param_3 >> 2;
      while( true ) {
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        puVar2[-1] = param_2[-1];
        param_2 = param_2 + -1;
        puVar2 = puVar2 + -1;
      }
      param_3 = param_3 & 3;
    }
    while( true ) {
      puVar2 = (undefined4 *)((int)puVar2 + -1);
      param_2 = (undefined4 *)((int)param_2 + -1);
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    }
  }
  else {
    puVar2 = param_1;
    if (7 < param_3) {
      uVar1 = -(int)param_1 & 3;
      param_3 = param_3 - uVar1;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      param_3 = param_3 & 3;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return param_1;
}



/* --- FUN_000109b0 @ 000109b0 --- */

uint FUN_000109b0(int param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x50) + 0x38) + 8))
              (*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x10),iVar2);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar2;
  }
  if (*(byte **)(param_1 + 0x14) < *(byte **)(param_1 + 0x18)) {
    **(byte **)(param_1 + 0x14) = param_2;
    uVar1 = (uint)param_2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    uVar1 = FUN_0000a4d0(param_1,param_2);
  }
  return uVar1;
}



/* --- FUN_00010a10 @ 00010a10 --- */

undefined4 FUN_00010a10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_458 [4];
  undefined1 *local_448;
  undefined1 *local_444;
  undefined1 *local_440;
  undefined **local_420;
  int local_408;
  undefined1 local_404 [1024];
  
  local_440 = &stack0xfffffffc;
  local_408 = param_1;
  local_448 = local_404;
  local_458[0] = 0xfbad0004;
  local_420 = &PTR_FUN_0002b348;
  local_444 = local_448;
  uVar1 = FUN_00010af0(local_458,param_2,param_3);
  iVar3 = (int)local_444 - (int)local_448;
  if ((0 < iVar3) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,local_448,iVar3), iVar2 != iVar3))
  {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* --- FUN_00010af0 @ 00010af0 --- */

/* WARNING: Type propagation algorithm not settling */

int FUN_00010af0(byte *param_1,byte *param_2,longdouble *param_3)

{
  byte *pbVar1;
  longdouble *plVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 *puVar17;
  longdouble lVar18;
  char local_188;
  undefined1 *local_184;
  int local_180;
  undefined1 *local_17c;
  undefined1 *local_178;
  int local_174;
  uint local_170;
  uint local_16c;
  byte *local_168;
  ushort local_164;
  char local_161;
  char local_160 [346];
  char local_6 [2];
  
  local_184 = (undefined1 *)0x0;
  if ((*param_1 & 2) != 0) {
    iVar10 = FUN_00010a10(param_1,param_2,param_3);
    return iVar10;
  }
  local_168 = param_2;
  local_174 = 0;
LAB_00010b40:
  bVar3 = *local_168;
  pbVar1 = local_168;
  while ((bVar3 != 0 && (bVar3 != 0x25))) {
    pbVar1 = pbVar1 + 1;
    bVar3 = *pbVar1;
  }
  iVar10 = (int)pbVar1 - (int)local_168;
  if (iVar10 != 0) {
    iVar11 = (**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,local_168,iVar10);
    if (iVar11 != iVar10) {
      return -1;
    }
    local_174 = local_174 + iVar10;
  }
  if (bVar3 == 0) {
    return local_174;
  }
  local_168 = pbVar1 + 1;
  local_170 = 0;
  bVar4 = false;
  bVar5 = false;
  bVar7 = false;
  bVar6 = false;
  local_17c = (undefined1 *)0x0;
  local_178 = (undefined1 *)0x0;
  puVar17 = (undefined1 *)0xffffffff;
  local_161 = '\0';
LAB_00010be5:
  bVar8 = false;
  local_16c = (uint)*local_168;
  local_168 = local_168 + 1;
LAB_00010bfa:
  switch(local_16c) {
  case 0x20:
    goto switchD_00010c0c_caseD_20;
  default:
    if (local_16c == 0) {
      return local_174;
    }
    local_160[0] = (char)local_16c;
    goto LAB_000113ff;
  case 0x23:
    bVar4 = true;
    goto LAB_00010be5;
  case 0x2a:
    plVar2 = (longdouble *)((int)param_3 + 4);
    local_178 = *(undefined1 **)param_3;
    param_3 = plVar2;
    if ((int)local_178 < 0) {
      local_178 = (undefined1 *)-(int)local_178;
      goto switchD_00010c0c_caseD_2d;
    }
    goto LAB_00010be5;
  case 0x2b:
    local_161 = '+';
    goto LAB_00010be5;
  case 0x2d:
switchD_00010c0c_caseD_2d:
    local_170 = 0x10;
    goto LAB_00010be5;
  case 0x2e:
    local_16c = (uint)*local_168;
    local_168 = local_168 + 1;
    if (local_16c == 0x2a) {
      plVar2 = (longdouble *)((int)param_3 + 4);
      puVar17 = *(undefined1 **)param_3;
      param_3 = plVar2;
      if ((int)puVar17 < -1) {
        puVar17 = (undefined1 *)0xffffffff;
      }
      goto LAB_00010be5;
    }
    puVar17 = (undefined1 *)0x0;
    while (local_16c - 0x30 < 10) {
      puVar17 = (undefined1 *)((local_16c - 0x30) + (int)puVar17 * 10);
      bVar3 = *local_168;
      local_168 = local_168 + 1;
      local_16c = (uint)bVar3;
    }
    if ((int)puVar17 < -1) {
      puVar17 = (undefined1 *)0xffffffff;
    }
    goto LAB_00010bfa;
  case 0x30:
    if ((local_170 & 0x10) == 0) {
      local_170 = local_170 | 0x20;
    }
    goto LAB_00010be5;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_00010c0c_caseD_31;
  case 0x44:
    bVar6 = true;
  case 100:
  case 0x69:
    if (bVar6) {
      uVar14 = *(uint *)param_3;
    }
    else if (bVar7) {
      uVar14 = (uint)*(short *)param_3;
    }
    else {
      uVar14 = *(uint *)param_3;
    }
    if ((int)uVar14 < 0) {
      uVar14 = -uVar14;
      local_161 = '-';
    }
    iVar10 = 1;
    goto LAB_000112dc;
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x65:
  case 0x66:
  case 0x67:
    if (bVar5) {
      lVar18 = *param_3;
      param_3 = param_3 + 1;
    }
    else {
      lVar18 = (longdouble)*(double *)param_3;
      param_3 = (longdouble *)((int)param_3 + 8);
    }
    uVar13 = 0x20;
    uVar14 = (uint)bVar4 << 8;
    if ((local_170 & 0x10) == 0) {
      if ((local_170 & 0x20) != 0) {
        uVar14 = CONCAT31((uint3)bVar4,8);
        uVar13 = 0x30;
      }
    }
    else {
      uVar14 = CONCAT31((uint3)bVar4,2);
    }
    if (bVar5) {
      uVar14 = uVar14 | 0x20000;
    }
    if ((int)puVar17 < 0) {
      puVar17 = (undefined1 *)0x6;
    }
    iVar10 = FUN_0001b948(lVar18,param_1,local_16c,local_178,puVar17,uVar14,local_161,uVar13);
    if (iVar10 < 0) {
      return -1;
    }
    local_174 = local_174 + iVar10;
    goto LAB_00010b40;
  case 0x4c:
    bVar5 = true;
    goto LAB_00010be5;
  case 0x4f:
    bVar6 = true;
  case 0x6f:
    if (bVar6) {
      uVar14 = *(uint *)param_3;
    }
    else if (bVar7) {
      uVar14 = (uint)*(ushort *)param_3;
    }
    else {
      uVar14 = *(uint *)param_3;
    }
    iVar10 = 0;
    break;
  case 0x55:
    bVar6 = true;
  case 0x75:
    if (bVar6) {
      uVar14 = *(uint *)param_3;
    }
    else if (bVar7) {
      uVar14 = (uint)*(ushort *)param_3;
    }
    else {
      uVar14 = *(uint *)param_3;
    }
    iVar10 = 1;
    break;
  case 0x58:
  case 0x78:
    if (bVar6) {
      uVar14 = *(uint *)param_3;
    }
    else if (bVar7) {
      uVar14 = (uint)*(ushort *)param_3;
    }
    else {
      uVar14 = *(uint *)param_3;
    }
    iVar10 = 2;
    if ((bVar4) && (uVar14 != 0)) {
      bVar8 = true;
    }
    break;
  case 99:
    local_160[0] = *(char *)param_3;
    param_3 = (longdouble *)((int)param_3 + 4);
LAB_000113ff:
    pcVar16 = local_160;
    local_184 = (undefined1 *)0x1;
    goto LAB_00011409;
  case 0x68:
    bVar7 = true;
    goto LAB_00010be5;
  case 0x6c:
    bVar6 = true;
    goto LAB_00010be5;
  case 0x6e:
    if (bVar6) {
      **(int **)param_3 = local_174;
      param_3 = (longdouble *)((int)param_3 + 4);
    }
    else if (bVar7) {
      **(undefined2 **)param_3 = (undefined2)local_174;
      param_3 = (longdouble *)((int)param_3 + 4);
    }
    else {
      **(int **)param_3 = local_174;
      param_3 = (longdouble *)((int)param_3 + 4);
    }
    goto LAB_00010b40;
  case 0x70:
    uVar14 = *(uint *)param_3;
    iVar10 = 2;
    bVar8 = true;
    local_16c = 0x78;
    break;
  case 0x73:
    plVar2 = (longdouble *)((int)param_3 + 4);
    pcVar16 = *(char **)param_3;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = &DAT_00010aaf;
    }
    param_3 = plVar2;
    if ((int)puVar17 < 0) {
      uVar14 = 0xffffffff;
      pcVar15 = pcVar16;
      goto code_r0x000111fa;
    }
    iVar10 = FUN_0001bfc8(pcVar16,0,puVar17);
    if ((iVar10 == 0) ||
       (local_184 = (undefined1 *)(iVar10 - (int)pcVar16), (int)puVar17 < iVar10 - (int)pcVar16)) {
      local_184 = puVar17;
    }
    goto LAB_00011409;
  }
  local_161 = '\0';
LAB_000112dc:
  param_3 = (longdouble *)((int)param_3 + 4);
  if (-1 < (int)puVar17) {
    local_170 = local_170 & 0xffffffdf;
  }
  local_17c = puVar17;
  if ((uVar14 == 0) && (pcVar16 = &stack0xfffffffc, puVar17 == (undefined1 *)0x0))
  goto LAB_000113d0;
  pcVar16 = &stack0xfffffffc;
  if (iVar10 == 1) goto joined_r0x00011343;
  pcVar16 = &stack0xfffffffc;
  if (iVar10 == 0) goto LAB_00011310;
  if (iVar10 == 2) {
    pcVar15 = s_0123456789abcdef_00010ac7;
    pcVar16 = &stack0xfffffffc;
    if (local_16c == 0x58) {
      pcVar15 = s_0123456789ABCDEF_00010ab6;
      pcVar16 = &stack0xfffffffc;
    }
    do {
      pcVar16 = pcVar16 + -1;
      *pcVar16 = pcVar15[uVar14 & 0xf];
      uVar14 = uVar14 >> 4;
    } while (uVar14 != 0);
    goto LAB_000113d0;
  }
  pcVar16 = s_bug_in_vform__bad_base_00010ad8;
  goto LAB_00011410;
  while( true ) {
    uVar14 = uVar14 - 1;
    cVar9 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    if (cVar9 == '\0') break;
code_r0x000111fa:
    if (uVar14 == 0) break;
  }
  local_184 = (undefined1 *)(~uVar14 - 1);
LAB_00011409:
  local_161 = '\0';
  goto LAB_00011410;
joined_r0x00011343:
  for (; 9 < uVar14; uVar14 = uVar14 / 10) {
    local_188 = (char)(uVar14 % 10);
    pcVar16[-1] = local_188 + '0';
    pcVar16 = pcVar16 + -1;
  }
  pcVar16 = pcVar16 + -1;
  *pcVar16 = (char)uVar14 + '0';
LAB_000113d0:
  local_184 = &stack0xfffffffc + -(int)pcVar16;
LAB_00011410:
  local_180 = (int)local_17c - (int)local_184;
  if (local_180 < 0) {
    local_180 = 0;
  }
  if (local_161 == '\0') {
    puVar17 = local_184;
    if (bVar8) {
      puVar17 = local_184 + 2;
    }
  }
  else {
    puVar17 = local_184 + 1;
  }
  puVar17 = puVar17 + local_180;
  if ((local_170 == 0) &&
     (iVar10 = FUN_0001c028(param_1,0x20,(int)local_178 - (int)puVar17),
     iVar10 < (int)local_178 - (int)puVar17)) {
    return -1;
  }
  if (local_161 == '\0') {
    if (bVar8) {
      local_164 = (short)local_16c << 8 | 0x30;
      iVar10 = (**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,&local_164,2);
      if (iVar10 != 2) {
        return -1;
      }
    }
  }
  else {
    iVar10 = (**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,&local_161,1);
    if (iVar10 != 1) {
      return -1;
    }
  }
  if ((local_170 == 0x20) &&
     (iVar10 = FUN_0001c028(param_1,0x30,(int)local_178 - (int)puVar17),
     iVar10 < (int)local_178 - (int)puVar17)) {
    return -1;
  }
  iVar10 = FUN_0001c028(param_1,0x30,local_180);
  if (iVar10 < local_180) {
    return -1;
  }
  puVar12 = (undefined1 *)(**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,pcVar16,local_184);
  if (puVar12 != local_184) {
    return -1;
  }
  if (((local_170 & 0x10) != 0) &&
     (iVar10 = FUN_0001c028(param_1,0x20,(int)local_178 - (int)puVar17),
     iVar10 < (int)local_178 - (int)puVar17)) {
    return -1;
  }
  if ((int)local_178 < (int)puVar17) {
    local_178 = puVar17;
  }
  local_174 = local_174 + (int)local_178;
  goto LAB_00010b40;
LAB_00011310:
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + -1;
    cVar9 = ((byte)uVar14 & 7) + 0x30;
    *pcVar16 = cVar9;
    uVar14 = uVar14 >> 3;
  } while (uVar14 != 0);
  if ((bVar4 != false) && (cVar9 != '0')) {
    pcVar16 = pcVar15 + -2;
    *pcVar16 = '0';
  }
  goto LAB_000113d0;
switchD_00010c0c_caseD_31:
  local_178 = (undefined1 *)0x0;
  do {
    local_178 = (undefined1 *)((local_16c - 0x30) + (int)local_178 * 10);
    local_16c = (uint)*local_168;
    local_168 = local_168 + 1;
  } while (local_16c - 0x30 < 10);
  goto LAB_00010bfa;
switchD_00010c0c_caseD_20:
  if (local_161 == '\0') {
    local_161 = ' ';
  }
  goto LAB_00010be5;
}



/* --- FUN_00011660 @ 00011660 --- */

void FUN_00011660(uint *param_1)

{
  param_1[0x11] = 0xffffffff;
  *param_1 = *param_1 | 0x240c;
  FUN_0000a370(param_1);
  param_1[0xf] = 0xffffffff;
  return;
}



/* --- FUN_00011690 @ 00011690 --- */

int FUN_00011690(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int)param_1[0xf] < 0) {
    iVar2 = -1;
  }
  else {
    iVar1 = FUN_00011c00(param_1);
    FUN_0000b070(param_1);
    iVar2 = (**(code **)(param_1[0xe] + 0x2c))(param_1);
    FUN_0000a760(param_1,0,0,0);
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    FUN_0000a320(param_1);
    *param_1 = 0xfbad240c;
    param_1[0xf] = 0xffffffff;
    param_1[0x11] = 0xffffffff;
    if (iVar2 == 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* --- FUN_00011730 @ 00011730 --- */

void FUN_00011730(byte *param_1)

{
  if (-1 < *(int *)(param_1 + 0x3c)) {
    FUN_00011930(param_1,*(undefined4 *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
    if ((*param_1 & 0x40) == 0) {
      (**(code **)(*(int *)(param_1 + 0x38) + 0x2c))(param_1);
    }
  }
  FUN_0000ac30(param_1);
  return;
}



/* --- FUN_00011770 @ 00011770 --- */

uint * FUN_00011770(uint *param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (-1 < (int)param_1[0xf]) {
    return (uint *)0x0;
  }
  bVar1 = *param_3;
  if (bVar1 == 0x72) {
    uVar2 = 0;
    uVar5 = 8;
LAB_00011810:
    if ((param_3[1] == 0x2b) || ((param_3[1] == 0x62 && (param_3[2] == 0x2b)))) {
      uVar2 = 2;
      uVar5 = uVar5 & 0x1000;
    }
    uVar4 = FUN_000253f8(param_2,uVar2 | uVar4,0x1b6);
    if (-1 < (int)uVar4) {
      param_1[0xf] = uVar4;
      *param_1 = *param_1 & 0xffffeff3 | uVar5;
      if ((((char)(uVar5 >> 8) == '\0') ||
          (iVar3 = (**(code **)(param_1[0xe] + 0x38))(param_1,0,2), iVar3 != -1)) ||
         (DAT_0002a0a0 == 0x1d)) {
        FUN_0000a370(param_1);
        return param_1;
      }
    }
  }
  else {
    if (bVar1 < 0x73) {
      if (bVar1 == 0x61) {
        uVar2 = 1;
        uVar4 = 0x440;
        uVar5 = 0x1004;
        goto LAB_00011810;
      }
    }
    else if (bVar1 == 0x77) {
      uVar2 = 1;
      uVar4 = 0x240;
      uVar5 = 4;
      goto LAB_00011810;
    }
    DAT_0002a0a0 = 0x16;
  }
  return (uint *)0x0;
}



/* --- FUN_00011890 @ 00011890 --- */

uint * FUN_00011890(uint *param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_1[0xf] < 0) {
    param_1[0xf] = param_2;
    *param_1 = *param_1 & 0xfffffff3;
    *(byte *)param_1 = (byte)*param_1 | 0x40;
    param_1[0x11] = 0xffffffff;
    iVar1 = (**(code **)(param_1[0xe] + 0x38))(param_1,0,1);
    if (iVar1 != -1) {
      return param_1;
    }
    if (DAT_0002a0a0 == 0x1d) {
      return param_1;
    }
  }
  return (uint *)0x0;
}



/* --- FUN_000118e0 @ 000118e0 --- */

undefined4 FUN_000118e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000aa90(param_1,param_2,param_3);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = 0;
  }
  return uVar2;
}



/* --- FUN_00011930 @ 00011930 --- */

int FUN_00011930(uint *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    if ((*param_1 & 0x1000) == 0) {
      if (param_1[4] != param_1[2]) {
        uVar3 = (**(code **)(param_1[0xe] + 0x34))(param_1,param_1[4] - param_1[2],1);
        if (uVar3 == 0xffffffff) {
          return -1;
        }
        param_1[0x11] = uVar3;
      }
    }
    else {
      param_1[0x11] = 0xffffffff;
    }
    iVar2 = (**(code **)(param_1[0xe] + 0x14))(param_1,param_2,param_3);
    if ((short)param_1[0x12] != 0) {
      sVar1 = FUN_0000ad40((ushort)param_1[0x12] - 1,param_2,param_3);
      *(short *)(param_1 + 0x12) = sVar1 + 1;
    }
    param_1[3] = param_1[7];
    param_1[1] = param_1[7];
    param_1[2] = param_1[7];
    param_1[5] = param_1[7];
    param_1[4] = param_1[7];
    if ((*param_1 & 0x202) == 0) {
      uVar3 = param_1[8];
    }
    else {
      uVar3 = param_1[7];
    }
    param_1[6] = uVar3;
    iVar2 = -(uint)(iVar2 != param_3);
  }
  return iVar2;
}



/* --- FUN_00011a10 @ 00011a10 --- */

uint FUN_00011a10(uint *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if ((*param_1 & 4) == 0) {
    pbVar3 = (byte *)param_1[1];
    if ((byte *)param_1[2] <= pbVar3) {
      if (param_1[7] == 0) {
        FUN_0000a7b0(param_1);
      }
      if ((*param_1 & 0x202) != 0) {
        FUN_0000ae70();
      }
      FUN_0000a420(param_1);
      iVar1 = (**(code **)(param_1[0xe] + 0x10))(param_1,param_1[7],param_1[8] - param_1[7]);
      if (iVar1 < 1) {
        if ((iVar1 == 0) || (DAT_0002a0a0 == 0xb)) {
          *(byte *)param_1 = (byte)*param_1 | 0x10;
        }
        else {
          *(byte *)param_1 = (byte)*param_1 | 0x20;
        }
        iVar1 = 0;
      }
      param_1[1] = param_1[7];
      param_1[3] = param_1[7];
      param_1[2] = param_1[7] + iVar1;
      uVar2 = param_1[7];
      param_1[6] = uVar2;
      param_1[5] = uVar2;
      param_1[4] = uVar2;
      if (iVar1 == 0) goto LAB_00011aa6;
      if (param_1[0x11] != 0xffffffff) {
        param_1[0x11] = param_1[0x11] + iVar1;
      }
      pbVar3 = (byte *)param_1[1];
    }
    uVar2 = (uint)*pbVar3;
  }
  else {
LAB_00011aa6:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* --- FUN_00011ad0 @ 00011ad0 --- */

uint FUN_00011ad0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*param_1 & 8) == 0) {
    if ((*param_1 & 0x800) == 0) {
      if (param_1[4] == 0) {
        FUN_0000a7b0(param_1);
        param_1[3] = param_1[7];
        param_1[1] = param_1[7];
        param_1[2] = param_1[7];
      }
      if (param_1[8] == param_1[1]) {
        param_1[4] = param_1[5];
        param_1[5] = param_1[1];
      }
      else {
        param_1[5] = param_1[1];
        param_1[4] = param_1[1];
      }
      param_1[6] = param_1[8];
      param_1[1] = param_1[2];
      param_1[3] = param_1[2];
      if ((*param_1 & 0x202) != 0) {
        param_1[6] = param_1[5];
      }
      *param_1 = *param_1 | 0x800;
    }
    if (param_2 == 0xffffffff) {
      uVar1 = FUN_00011930(param_1,param_1[4],param_1[5] - param_1[4]);
      return uVar1;
    }
    if ((param_1[8] != param_1[5]) ||
       (iVar2 = FUN_00011930(param_1,param_1[4],param_1[5] - param_1[4]), iVar2 != -1)) {
      *(char *)param_1[5] = (char)param_2;
      param_1[5] = param_1[5] + 1;
      if ((((*param_1 & 2) == 0) && (((*param_1 & 0x200) == 0 || (param_2 != 10)))) ||
         (iVar2 = FUN_00011930(param_1,param_1[4],param_1[5] - param_1[4]), iVar2 != -1)) {
        return param_2 & 0xff;
      }
    }
  }
  return 0xffffffff;
}



/* --- FUN_00011c00 @ 00011c00 --- */

undefined4 FUN_00011c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    iVar1 = FUN_00011930(param_1,*(undefined4 *)(param_1 + 0x10),
                         *(uint *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
    if (iVar1 == 0) goto LAB_00011c24;
LAB_00011c46:
    uVar2 = 0xffffffff;
  }
  else {
LAB_00011c24:
    iVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x34))(param_1,iVar1,1);
      if (iVar1 == -1) {
        if (DAT_0002a0a0 != 0x1d) goto LAB_00011c46;
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    uVar2 = 0;
  }
  return uVar2;
}



/* --- FUN_00011c70 @ 00011c70 --- */

uint FUN_00011c70(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_4c;
  undefined1 local_44 [8];
  ushort local_3c;
  int local_30;
  
  uVar4 = param_3 & 3;
  if (((param_3 & 4) != 0) && ((param_3 & 8) != 0)) {
    uVar4 = 1;
    param_2 = 0;
  }
  if (((param_1[4] < param_1[5]) || ((*param_1 & 0x800) != 0)) &&
     (iVar1 = FUN_0000a420(param_1), iVar1 != 0)) {
    return 0xffffffff;
  }
  if (param_1[7] == 0) {
    FUN_0000a7b0(param_1);
    param_1[5] = param_1[7];
    param_1[4] = param_1[7];
    param_1[6] = param_1[7];
    param_1[3] = param_1[7];
    param_1[1] = param_1[7];
    param_1[2] = param_1[7];
  }
  if (uVar4 == 1) {
    param_2 = param_2 - (param_1[2] - param_1[1]);
    if (param_1[0x11] == 0xffffffff) goto LAB_00011e60;
    uVar3 = param_2 + param_1[0x11];
LAB_00011d4d:
    uVar4 = 0;
  }
  else {
    uVar3 = param_2;
    if ((1 < uVar4) && (uVar4 == 2)) {
      iVar1 = (**(code **)(param_1[0xe] + 0x30))(param_1,local_44);
      if ((iVar1 != 0) || ((local_3c & 0xf000) != 0x8000)) goto LAB_00011e60;
      uVar3 = param_2 + local_30;
      goto LAB_00011d4d;
    }
  }
  if (((param_1[0x11] != 0xffffffff) && (param_1[3] != 0)) && ((*param_1 & 0x100) == 0)) {
    iVar1 = (uVar3 - param_1[0x11]) + (param_1[2] - param_1[3]);
    if ((-1 < iVar1) && (iVar1 <= (int)(param_1[2] - param_1[3]))) {
      param_1[3] = param_1[7];
      param_1[1] = iVar1 + param_1[7];
      param_1[2] = param_1[2];
      param_1[5] = param_1[7];
      param_1[4] = param_1[7];
      param_1[6] = param_1[7];
      return uVar3;
    }
  }
  param_2 = uVar3;
  if ((*param_1 & 4) == 0) {
    local_4c = -(param_1[8] - param_1[7]) & uVar3;
    param_2 = uVar3 - local_4c;
    if ((int)(param_1[8] - param_1[7]) < (int)param_2) {
      param_2 = 0;
      local_4c = uVar3;
    }
    iVar1 = (**(code **)(param_1[0xe] + 0x34))(param_1,local_4c,0);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(param_1[0xe] + 0x10))(param_1,param_1[7],param_1[8] - param_1[7]);
      if (iVar2 < (int)param_2) {
        if (iVar2 != -1) {
          param_2 = param_2 - iVar2;
        }
        uVar4 = 1;
        goto LAB_00011e60;
      }
    }
    param_1[3] = param_1[7];
    param_1[1] = param_2 + param_1[7];
    param_1[2] = param_1[7] + iVar2;
    param_1[5] = param_1[7];
    param_1[4] = param_1[7];
    param_1[6] = param_1[7];
    param_1[0x11] = iVar2 + iVar1;
    *param_1 = *param_1 & 0xffffffef;
    return uVar3;
  }
LAB_00011e60:
  FUN_0000b070(param_1);
  uVar4 = (**(code **)(param_1[0xe] + 0x34))(param_1,param_2,uVar4);
  if (uVar4 != 0xffffffff) {
    *param_1 = *param_1 & 0xffffffef;
  }
  param_1[0x11] = uVar4;
  param_1[3] = param_1[7];
  param_1[1] = param_1[7];
  param_1[2] = param_1[7];
  param_1[5] = param_1[7];
  param_1[4] = param_1[7];
  param_1[6] = param_1[7];
  return uVar4;
}



/* --- FUN_00011eb0 @ 00011eb0 --- */

void FUN_00011eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    iVar1 = FUN_0000f8b8(*(undefined4 *)(param_1 + 0x3c),param_2,param_3);
    if (iVar1 != -1) {
      return;
    }
  } while (DAT_0002a0a0 == 4);
  return;
}



/* --- FUN_00011ef0 @ 00011ef0 --- */

void FUN_00011ef0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c110(*(undefined4 *)(param_1 + 0x3c),param_2,param_3);
  return;
}



/* --- FUN_00011f10 @ 00011f10 --- */

void FUN_00011f10(int param_1,undefined4 param_2)

{
  FUN_0001c140(*(undefined4 *)(param_1 + 0x3c),param_2);
  return;
}



/* --- FUN_00011f30 @ 00011f30 --- */

void FUN_00011f30(int param_1)

{
  FUN_0000b748(*(undefined4 *)(param_1 + 0x3c));
  return;
}



/* --- FUN_00011f50 @ 00011f50 --- */

int FUN_00011f50(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  do {
    while( true ) {
      if (iVar2 < 1) goto LAB_00011f8c;
      iVar1 = FUN_0000f8e4(*(undefined4 *)(param_1 + 0x3c),param_2,iVar2);
      if (iVar1 == -1) break;
      iVar2 = iVar2 - iVar1;
      param_2 = param_2 + iVar1;
    }
  } while (DAT_0002a0a0 == 4);
  *param_1 = *param_1 | 0x20;
LAB_00011f8c:
  if (-1 < *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (param_3 - iVar2);
  }
  return param_3 - iVar2;
}



/* --- FUN_00011fb0 @ 00011fb0 --- */

int FUN_00011fb0(uint *param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *local_10;
  char *local_8;
  
  local_8 = param_3;
  iVar4 = 0;
  if (param_3 == (char *)0x0) {
    return 0;
  }
  pcVar5 = (char *)(param_1[6] - param_1[5]);
  if ((((*param_1 & 0xa00) == 0xa00) &&
      (pcVar5 = (char *)(param_1[8] - param_1[5]), param_3 <= pcVar5)) &&
     (local_10 = param_2 + (int)param_3, param_2 < local_10)) {
    uVar2 = (int)param_2 - (int)local_10 & 3;
    if (uVar2 == 0) goto LAB_00012068;
    if ((2 < uVar2) ||
       (((1 < uVar2 || (local_10 = local_10 + -1, pcVar3 = local_10, *local_10 != '\n')) &&
        (local_10 = local_10 + -1, pcVar3 = local_10, *local_10 != '\n')))) {
      local_10 = local_10 + -1;
      cVar1 = *local_10;
      while (pcVar3 = local_10, cVar1 != '\n') {
        if (local_10 <= param_2) goto LAB_000120a2;
LAB_00012068:
        pcVar3 = local_10 + -1;
        if (((local_10[-1] == '\n') || (pcVar3 = local_10 + -2, local_10[-2] == '\n')) ||
           (pcVar3 = local_10 + -3, local_10[-3] == '\n')) break;
        local_10 = local_10 + -4;
        cVar1 = *local_10;
      }
    }
    local_10 = pcVar3;
    pcVar5 = local_10 + (1 - (int)param_2);
    iVar4 = 1;
  }
LAB_000120a2:
  if (pcVar5 == (char *)0x0) goto LAB_0001216f;
  if (param_3 < pcVar5) {
    pcVar5 = param_3;
  }
  if (pcVar5 < (char *)0x15) {
    local_10 = (char *)param_1[5];
    pcVar3 = pcVar5 + -1;
    if (-1 < (int)pcVar3) {
      uVar2 = ~(uint)pcVar3 & 3;
      if (uVar2 != 0) {
        if (uVar2 < 3) {
          if (uVar2 < 2) {
            *local_10 = *param_2;
            param_2 = param_2 + 1;
            local_10 = local_10 + 1;
            pcVar3 = pcVar5 + -2;
          }
          *local_10 = *param_2;
          param_2 = param_2 + 1;
          local_10 = local_10 + 1;
          pcVar3 = pcVar3 + -1;
        }
        *local_10 = *param_2;
        param_2 = param_2 + 1;
        local_10 = local_10 + 1;
        pcVar3 = pcVar3 + -1;
        if ((int)pcVar3 < 0) goto LAB_00012166;
      }
      do {
        *local_10 = *param_2;
        local_10[1] = param_2[1];
        local_10[2] = param_2[2];
        local_10[3] = param_2[3];
        param_2 = param_2 + 4;
        local_10 = local_10 + 4;
        pcVar3 = pcVar3 + -4;
      } while (-1 < (int)pcVar3);
    }
  }
  else {
    FUN_0000b700(param_1[5],param_2,pcVar5);
    param_2 = param_2 + (int)pcVar5;
  }
LAB_00012166:
  param_1[5] = (uint)(pcVar5 + param_1[5]);
  local_8 = param_3 + -(int)pcVar5;
LAB_0001216f:
  if ((local_8 + iVar4 != (char *)0x0) && (iVar4 = FUN_0000a4d0(param_1,0xffffffff), iVar4 != -1)) {
    if (param_1[8] - param_1[7] < 0x80) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = (char *)((uint)local_8 % (param_1[8] - param_1[7]));
    }
    iVar6 = (int)local_8 - (int)pcVar5;
    iVar4 = FUN_00011930(param_1,param_2,iVar6);
    if ((iVar4 != -1) && (local_8 = pcVar5, pcVar5 != (char *)0x0)) {
      iVar4 = FUN_0000a830(param_1,param_2 + iVar6,pcVar5);
      local_8 = pcVar5 + -iVar4;
    }
  }
  return (int)param_3 - (int)local_8;
}



/* --- FUN_00012f18 @ 00012f18 --- */

undefined4 FUN_00012f18(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    DAT_0002a0a0 = 0x16;
    return 0xffffffff;
  }
  if ((*param_1 & 0xffff0000) == 0xfbad0000) {
    uVar1 = FUN_00010af0(param_1,param_2,&stack0x0000000c);
    return uVar1;
  }
  DAT_0002a0a0 = 0x16;
  return 0xffffffff;
}



/* --- FUN_00012f70 @ 00012f70 --- */

undefined4 FUN_00012f70(int param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_288;
  int local_27c;
  undefined4 local_278;
  byte *local_26c;
  undefined1 local_104 [256];
  
  local_26c = param_2;
  local_288 = 0;
  local_278 = 0;
  local_27c = 0;
LAB_00012fb8:
  do {
    uVar5 = (uint)*local_26c;
    local_26c = local_26c + 1;
    if (uVar5 == 0) goto LAB_00014505;
    if ((PTR_DAT_0002b058[uVar5 * 2] & 0x10) != 0) {
      while( true ) {
        if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)) {
          uVar5 = (uint)**(byte **)(param_1 + 4);
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        }
        else {
          uVar5 = FUN_0000a6d0(param_1);
        }
        if (uVar5 == 0xffffffff) {
          local_288 = local_288 + 1;
          goto LAB_00012fb8;
        }
        if ((PTR_DAT_0002b058[uVar5 * 2] & 0x10) == 0) break;
        local_27c = local_27c + 1;
      }
      FUN_0001c210(uVar5,param_1);
      goto LAB_00012fb8;
    }
    if (uVar5 != 0x25) {
switchD_0001305e_caseD_25:
      if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)) {
        uVar3 = (uint)**(byte **)(param_1 + 4);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      else {
        uVar3 = FUN_0000a6d0(param_1);
      }
      if (uVar3 == 0xffffffff) {
LAB_000144e0:
        local_288 = local_288 + 1;
        local_278 = 0xffffffff;
      }
      else {
        if (uVar3 == uVar5) {
          local_27c = local_27c + 1;
          goto LAB_00012fb8;
        }
        FUN_0001c210(uVar3,param_1);
      }
LAB_000144f9:
      if (param_4 == (byte *)0x0) {
        return local_278;
      }
      *param_4 = *param_4 | 2;
LAB_00014505:
      if ((param_4 != (byte *)0x0) && (local_288 != 0)) {
        *param_4 = *param_4 | 1;
      }
      return local_278;
    }
    uVar3 = 0;
LAB_00013045:
    uVar5 = (uint)*local_26c;
    local_26c = local_26c + 1;
    switch(uVar5) {
    case 0:
      local_278 = 0xffffffff;
      goto LAB_00014505;
    case 0x25:
      goto switchD_0001305e_caseD_25;
    case 0x2a:
      if (uVar3 != 0) goto LAB_000144f9;
      uVar3 = 8;
      goto LAB_00013045;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      if ((uVar3 & 0xffffffb7) != 0) goto LAB_000144f9;
      uVar3 = uVar3 | 0x40;
      goto LAB_00013045;
    case 0x44:
      goto switchD_0001305e_caseD_44;
    case 0x45:
    case 0x46:
    case 0x65:
    case 0x66:
    case 0x67:
      uVar5 = 4;
      goto LAB_00013537;
    case 0x4c:
      if ((uVar3 & 0xffffffb7) != 0) goto LAB_000144f9;
      uVar3 = uVar3 | 2;
      goto LAB_00013045;
    case 0x4f:
    case 0x6f:
      uVar3 = 0;
      uVar5 = 3;
      goto LAB_00013537;
    case 0x58:
    case 0x78:
      goto LAB_00013486;
    case 0x5b:
      local_26c = (byte *)FUN_00014530(local_104,local_26c);
      uVar3 = 0x20;
      uVar5 = 1;
      goto LAB_00013537;
    case 99:
      uVar3 = 0x20;
      uVar5 = 0;
      goto LAB_00013537;
    case 100:
      goto switchD_0001305e_caseD_64;
    case 0x68:
      if ((uVar3 & 0xffffffb7) != 0) goto LAB_000144f9;
      uVar3 = uVar3 | 4;
      goto LAB_00013045;
    case 0x69:
      uVar5 = 3;
      goto LAB_00013537;
    case 0x6c:
      if ((uVar3 & 0xffffffb7) == 0) goto code_r0x0001331c;
      goto LAB_000144f9;
    case 0x6e:
      if ((uVar3 & 8) == 0) {
        if ((uVar3 & 4) == 0) {
          *(int *)*param_3 = local_27c;
          param_3 = param_3 + 1;
        }
        else {
          *(undefined2 *)*param_3 = (undefined2)local_27c;
          param_3 = param_3 + 1;
        }
      }
      goto LAB_00012fb8;
    case 0x70:
LAB_00013486:
      uVar3 = 0;
      uVar5 = 3;
      goto LAB_00013537;
    case 0x73:
      uVar5 = 2;
      goto LAB_00013537;
    case 0x75:
      goto LAB_0001352d;
    }
    if ((PTR_DAT_0002b058[uVar5 * 2] & 1) != 0) {
switchD_0001305e_caseD_44:
    }
switchD_0001305e_caseD_64:
LAB_0001352d:
    uVar3 = 0;
    uVar5 = 3;
LAB_00013537:
    if (((*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4)) &&
        (iVar1 = FUN_0000a650(param_1), iVar1 == -1)) ||
       (uVar4 = (uint)**(byte **)(param_1 + 4), uVar4 == 0xffffffff)) goto LAB_000144e0;
    if ((uVar3 & 0x20) == 0) {
      while ((PTR_DAT_0002b058[uVar4 * 2] & 0x10) != 0) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        local_27c = local_27c + 1;
        if ((*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)) ||
           (iVar1 = FUN_0000a650(param_1), iVar1 != -1)) {
          uVar4 = (uint)**(byte **)(param_1 + 4);
        }
        else {
          uVar4 = 0xffffffff;
        }
        if (uVar4 == 0xffffffff) goto LAB_000144e0;
      }
    }
    if (uVar5 < 5) {
                    /* WARNING: Could not recover jumptable at 0x000135c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&PTR_LAB_000135d0)[uVar5])();
      return uVar2;
    }
  } while( true );
code_r0x0001331c:
  uVar3 = uVar3 | 1;
  goto LAB_00013045;
}



/* --- FUN_00014530 @ 00014530 --- */

byte * FUN_00014530(int param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar4 = (uint)*param_2;
  bVar8 = uVar4 == 0x5e;
  pbVar7 = param_2 + 1;
  if (bVar8) {
    uVar4 = (uint)param_2[1];
    pbVar7 = param_2 + 2;
  }
  param_2 = pbVar7;
  bVar1 = !bVar8;
  iVar2 = param_1 + 0xff;
  iVar6 = iVar2;
  do {
    *(bool *)iVar2 = bVar8;
    *(bool *)(iVar2 + -1) = bVar8;
    *(bool *)(iVar2 + -2) = bVar8;
    *(bool *)(iVar2 + -3) = bVar8;
    *(bool *)(iVar2 + -4) = bVar8;
    *(bool *)(iVar2 + -5) = bVar8;
    *(bool *)(iVar2 + -6) = bVar8;
    *(bool *)(iVar2 + -7) = bVar8;
    *(bool *)(iVar2 + -8) = bVar8;
    *(bool *)(iVar2 + -9) = bVar8;
    *(bool *)(iVar2 + -10) = bVar8;
    *(bool *)(iVar2 + -0xb) = bVar8;
    *(bool *)(iVar2 + -0xc) = bVar8;
    *(bool *)(iVar2 + -0xd) = bVar8;
    *(bool *)(iVar2 + -0xe) = bVar8;
    *(bool *)(iVar2 + -0xf) = bVar8;
    iVar2 = iVar2 + -0x10;
    iVar6 = iVar6 + -0x10;
    pbVar7 = param_2;
  } while (param_1 <= iVar6);
joined_r0x000145a7:
  uVar5 = uVar4;
  param_2 = pbVar7;
  if (uVar4 == 0) {
    return pbVar7 + -1;
  }
LAB_000145b4:
  do {
    *(bool *)(uVar5 + param_1) = bVar1;
    while( true ) {
      uVar4 = (uint)*param_2;
      pbVar7 = param_2 + 1;
      if (uVar4 != 0x2d) break;
      uVar4 = (uint)*pbVar7;
      if ((uVar4 == 0x5d) || ((int)uVar4 < (int)uVar5)) {
        uVar5 = 0x2d;
        param_2 = pbVar7;
        goto LAB_000145b4;
      }
      param_2 = param_2 + 2;
      uVar3 = uVar4 - uVar5 & 3;
      if (uVar3 != 0) {
        if (1 < uVar3) {
          if (2 < uVar3) {
            uVar5 = uVar5 + 1;
            *(bool *)(uVar5 + param_1) = bVar1;
          }
          uVar5 = uVar5 + 1;
          *(bool *)(uVar5 + param_1) = bVar1;
        }
        uVar5 = uVar5 + 1;
        *(bool *)(uVar5 + param_1) = bVar1;
        goto joined_r0x00014644;
      }
      do {
        *(bool *)(param_1 + 1 + uVar5) = bVar1;
        *(bool *)(param_1 + 2 + uVar5) = bVar1;
        *(bool *)(param_1 + 3 + uVar5) = bVar1;
        uVar5 = uVar5 + 4;
        *(bool *)(uVar5 + param_1) = bVar1;
joined_r0x00014644:
      } while ((int)uVar5 < (int)uVar4);
    }
    if (uVar4 < 0x2e) goto joined_r0x000145a7;
    uVar5 = uVar4;
    param_2 = pbVar7;
    if (uVar4 == 0x5d) {
      return pbVar7;
    }
  } while( true );
}



/* --- FUN_000146a0 @ 000146a0 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000146a0(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + _DAT_0002a040;
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  _DAT_0002a040 = (int)uVar2;
  if ((int)uVar2 == param_1) {
    param_1 = param_1 - (int)((ulonglong)uVar2 >> 0x20);
  }
  else {
    DAT_0002a0a0 = 0xc;
    param_1 = -1;
  }
  return param_1;
}



/* --- FUN_000146e0 @ 000146e0 --- */

int FUN_000146e0(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00014790 @ 00014790 --- */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_00014790(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  bool bVar9;
  int local_14;
  int local_c;
  uint local_8;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_0002b400 + uVar2) == param_1) {
        return *(undefined **)((int)&PTR_DAT_0002b408 + uVar2);
      }
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < 0x71);
switchD_00014889_caseD_3:
    DAT_0002a0a0 = 0x16;
    return (undefined *)0x0;
  }
  if (param_1 != 0x7f) {
    local_8 = 0;
    local_14 = 0;
    do {
      if (*(int *)((int)&DAT_0002b400 + local_14) == param_1) {
        if ((((*param_2 == '\0') &&
             (param_2 = (char *)FUN_0000b890(s_LC_ALL_00014710), param_2 == (char *)0x0)) &&
            (param_2 = (char *)FUN_0000b890(*(undefined4 *)
                                             ((int)&PTR_s_LC_COLLATE_0002b404 + local_14)),
            param_2 == (char *)0x0)) &&
           (param_2 = (char *)FUN_0000b890(&DAT_00014764), param_2 == (char *)0x0)) {
          return *(undefined **)((int)&PTR_DAT_0002b408 + local_14);
        }
        iVar3 = FUN_000043d0(param_2,*(undefined4 *)((int)&PTR_DAT_0002b408 + local_14));
        if (iVar3 == 0) {
          return *(undefined **)((int)&PTR_DAT_0002b408 + local_14);
        }
        switch(param_1) {
        case 1:
          iVar3 = 2;
          bVar9 = true;
          pcVar5 = param_2;
          pcVar8 = &DAT_00014757;
          goto code_r0x0001499f;
        case 2:
          iVar3 = 2;
          bVar9 = true;
          pcVar5 = param_2;
          pcVar8 = &DAT_00014757;
          goto code_r0x00014a1f;
        default:
          goto switchD_00014889_caseD_3;
        case 4:
          iVar3 = 2;
          bVar9 = true;
          pcVar5 = param_2;
          pcVar8 = &DAT_00014757;
          goto code_r0x00014b3f;
        case 8:
          iVar3 = 2;
          bVar9 = true;
          pcVar5 = param_2;
          pcVar8 = &DAT_00014757;
          goto code_r0x00014bbf;
        case 0x10:
          iVar3 = 2;
          bVar9 = true;
          pcVar5 = param_2;
          pcVar8 = &DAT_00014757;
          goto code_r0x00014c3f;
        case 0x20:
          iVar3 = 2;
          bVar9 = true;
          pcVar5 = param_2;
          pcVar8 = &DAT_00014757;
          goto code_r0x00014caf;
        case 0x40:
          pcVar5 = param_2;
        }
        goto joined_r0x00014d12;
      }
      local_14 = local_14 + 0x10;
      local_8 = local_8 + 1;
    } while (local_8 < 7);
  }
  local_c = 0;
  local_8 = 0;
  puVar7 = &DAT_0002b400;
  do {
    uVar4 = FUN_00014790(*puVar7,0);
    (&DAT_0002b40c)[local_8 * 4] = uVar4;
    pcVar5 = (char *)FUN_00014790(*puVar7,param_2);
    uVar4 = DAT_0002a0a0;
    if (pcVar5 == (char *)0x0) {
      if ((int)local_8 < 1) {
        return (undefined *)0x0;
      }
      iVar3 = 0;
      uVar2 = local_8 & 3;
      if (uVar2 != 0) {
        if (1 < uVar2) {
          if (2 < uVar2) {
            FUN_00014790(DAT_0002b400,DAT_0002b40c);
            iVar3 = 0x10;
          }
          FUN_00014790(*(undefined4 *)((int)&DAT_0002b400 + iVar3),
                       *(undefined4 *)((int)&DAT_0002b40c + iVar3));
          iVar3 = iVar3 + 0x10;
        }
        FUN_00014790(*(undefined4 *)((int)&DAT_0002b400 + iVar3),
                     *(undefined4 *)((int)&DAT_0002b40c + iVar3));
        iVar3 = iVar3 + 0x10;
        if ((int)(local_8 * 0x10) <= iVar3) {
          DAT_0002a0a0 = uVar4;
          return (undefined *)0x0;
        }
      }
      puVar7 = (undefined4 *)((int)&DAT_0002b400 + iVar3);
      do {
        FUN_00014790(*puVar7,*(undefined4 *)((int)&DAT_0002b40c + iVar3));
        FUN_00014790(puVar7[4],*(undefined4 *)((int)&DAT_0002b41c + iVar3));
        FUN_00014790(puVar7[8],*(undefined4 *)((int)&DAT_0002b42c + iVar3));
        FUN_00014790(puVar7[0xc],*(undefined4 *)((int)&DAT_0002b43c + iVar3));
        puVar7 = puVar7 + 0x10;
        iVar3 = iVar3 + 0x40;
      } while (iVar3 < (int)(local_8 * 0x10));
      DAT_0002a0a0 = uVar4;
      return (undefined *)0x0;
    }
    uVar2 = 0xffffffff;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_c = local_c + ~uVar2;
    puVar7 = puVar7 + 4;
    local_8 = local_8 + 1;
  } while (local_8 < 7);
  puVar6 = (undefined *)FUN_00004690(local_c + 1);
  (&PTR_DAT_0002b408)[local_8 * 4] = puVar6;
  if (puVar6 != (undefined *)0x0) {
    *(&PTR_DAT_0002b408)[local_8 * 4] = 0;
    FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],PTR_DAT_0002b408);
    FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
    FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],PTR_DAT_0002b418);
    FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
    FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],PTR_DAT_0002b428);
    FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
    uVar2 = 3;
    do {
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],(&PTR_DAT_0002b408)[uVar2 * 4]);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],(&PTR_DAT_0002b408)[(uVar2 + 1) * 4]);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],(&PTR_DAT_0002b408)[(uVar2 + 2) * 4]);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],(&PTR_DAT_0002b408)[(uVar2 + 3) * 4]);
      FUN_00015a38((&PTR_DAT_0002b408)[local_8 * 4],&DAT_00014781);
      uVar2 = uVar2 + 4;
    } while (uVar2 < 7);
    return (&PTR_DAT_0002b408)[local_8 * 4];
  }
  goto LAB_00014f50;
  while( true ) {
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
    if (!bVar9) break;
code_r0x00014caf:
    if (iVar3 == 0) break;
  }
  if (!bVar9) {
    iVar3 = 6;
    bVar9 = true;
    pcVar5 = param_2;
    pcVar8 = s_POSIX_00014769;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar5 == *pcVar8;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = FUN_000150d0(param_2,*(undefined4 *)((int)&PTR_s_LC_COLLATE_0002b404 + local_14));
      if (iVar3 < 0) {
        DAT_0002a0a0 = 2;
        return (undefined *)0x0;
      }
      pcVar5 = (char *)FUN_00015510(iVar3,param_2);
      goto joined_r0x00014d12;
    }
  }
  PTR_PTR_0002bb48 = (undefined *)&PTR_s__yY____alpha____000252e0;
  goto LAB_00014d50;
  while( true ) {
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
    if (!bVar9) break;
code_r0x00014c3f:
    if (iVar3 == 0) break;
  }
  if (!bVar9) {
    iVar3 = 6;
    bVar9 = true;
    pcVar5 = param_2;
    pcVar8 = s_POSIX_00014769;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar5 == *pcVar8;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = FUN_000150d0(param_2,*(undefined4 *)((int)&PTR_s_LC_COLLATE_0002b404 + local_14));
      if (iVar3 < 0) {
        DAT_0002a0a0 = 2;
        return (undefined *)0x0;
      }
      pcVar5 = (char *)FUN_000154b0(iVar3,param_2);
      goto joined_r0x00014d12;
    }
  }
  PTR_PTR_0002bb40 = (undefined *)&PTR_DAT_00025120;
  goto LAB_00014d50;
  while( true ) {
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
    if (!bVar9) break;
code_r0x00014bbf:
    if (iVar3 == 0) break;
  }
  if (!bVar9) {
    iVar3 = 6;
    bVar9 = true;
    pcVar5 = param_2;
    pcVar8 = s_POSIX_00014769;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar5 == *pcVar8;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = FUN_000150d0(param_2,*(undefined4 *)((int)&PTR_s_LC_COLLATE_0002b404 + local_14));
      if (iVar3 < 0) {
        DAT_0002a0a0 = 2;
        return (undefined *)0x0;
      }
      pcVar5 = (char *)FUN_00015450(iVar3,param_2);
      goto joined_r0x00014d12;
    }
  }
  PTR_PTR_0002bb38 = (undefined *)&PTR_DAT_00025110;
  goto LAB_00014d50;
  while( true ) {
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
    if (!bVar9) break;
code_r0x00014b3f:
    if (iVar3 == 0) break;
  }
  if (!bVar9) {
    iVar3 = 6;
    bVar9 = true;
    pcVar5 = param_2;
    pcVar8 = s_POSIX_00014769;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar5 == *pcVar8;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = FUN_000150d0(param_2,*(undefined4 *)((int)&PTR_s_LC_COLLATE_0002b404 + local_14));
      if (iVar3 < 0) {
        DAT_0002a0a0 = 2;
        return (undefined *)0x0;
      }
      pcVar5 = (char *)FUN_000153c0(iVar3,param_2);
      goto joined_r0x00014d12;
    }
  }
  PTR_PTR_0002bb30 = (undefined *)&PTR_DAT_000250e8;
  goto LAB_00014d50;
  while( true ) {
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
    if (!bVar9) break;
code_r0x00014a1f:
    if (iVar3 == 0) break;
  }
  if (!bVar9) {
    iVar3 = 6;
    bVar9 = true;
    pcVar5 = param_2;
    pcVar8 = s_POSIX_00014769;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar5 == *pcVar8;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = 0xb;
      bVar9 = true;
      pcVar5 = param_2;
      pcVar8 = &DAT_0001476f;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar5 == *pcVar8;
        pcVar5 = pcVar5 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        PTR_DAT_0002b058 = &DAT_000248ba;
        PTR_DAT_0002b05c = &DAT_00024abb;
        PTR_DAT_0002b060 = &DAT_00024bbc;
        PTR_PTR_0002bb28 = (undefined *)&PTR_PTR_00024cc8;
      }
      else {
        iVar3 = 7;
        bVar9 = true;
        pcVar5 = param_2;
        pcVar8 = &DAT_0001477a;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar9 = *pcVar5 == *pcVar8;
          pcVar5 = pcVar5 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (!bVar9) {
          iVar3 = FUN_000150d0(param_2,*(undefined4 *)((int)&PTR_s_LC_COLLATE_0002b404 + local_14));
          if (iVar3 < 0) {
            DAT_0002a0a0 = 2;
            return (undefined *)0x0;
          }
          pcVar5 = (char *)FUN_00015290(iVar3,param_2);
          goto joined_r0x00014d12;
        }
        PTR_DAT_0002b058 = &DAT_00024cd2;
        PTR_DAT_0002b05c = &DAT_00024ed3;
        PTR_DAT_0002b060 = &DAT_00024fd4;
        PTR_PTR_0002bb28 = (undefined *)&PTR_PTR_000250e0;
      }
      goto LAB_00014d50;
    }
  }
  PTR_DAT_0002b058 = &DAT_0001562a;
  PTR_DAT_0002b05c = &DAT_0001582b;
  PTR_DAT_0002b060 = &DAT_0001592c;
  PTR_PTR_0002bb28 = (undefined *)&PTR_PTR_000248b0;
  goto LAB_00014d50;
  while( true ) {
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
    if (!bVar9) break;
code_r0x0001499f:
    if (iVar3 == 0) break;
  }
  if (!bVar9) {
    iVar3 = 6;
    bVar9 = true;
    pcVar5 = param_2;
    pcVar8 = s_POSIX_00014769;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar5 == *pcVar8;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = FUN_000150d0(param_2,*(undefined4 *)((int)&PTR_s_LC_COLLATE_0002b404 + local_14));
      if (iVar3 < 0) {
        DAT_0002a0a0 = 2;
        return (undefined *)0x0;
      }
      pcVar5 = (char *)FUN_000151e0(iVar3,param_2);
joined_r0x00014d12:
      if (pcVar5 == (char *)0x0) {
        DAT_0002a0a0 = 2;
        return (undefined *)0x0;
      }
      goto LAB_00014d50;
    }
  }
  PTR_DAT_0002bb20 = &DAT_000248a0;
LAB_00014d50:
  uVar2 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00004690(~uVar2);
  *(int *)((int)&PTR_DAT_0002b408 + local_14) = iVar3;
  if (iVar3 == 0) {
LAB_00014f50:
    DAT_0002a0a0 = 0xc;
    puVar6 = (undefined *)0x0;
  }
  else {
    FUN_0000b828(*(undefined4 *)((int)&PTR_DAT_0002b408 + local_14),param_2);
    puVar6 = *(undefined **)((int)&PTR_DAT_0002b408 + local_14);
  }
  return puVar6;
}



/* --- FUN_000150d0 @ 000150d0 --- */

void FUN_000150d0(undefined4 param_1,undefined4 param_2)

{
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  char local_78 [116];
  
  local_84 = (char  [4])s__usr_lib_locale_000150b4._0_4_;
  local_80 = (char  [4])s__usr_lib_locale_000150b4._4_4_;
  local_7c = (char  [4])s__usr_lib_locale_000150b4._8_4_;
  local_78._0_4_ = s__usr_lib_locale_000150b4._12_4_;
  FUN_00015a38(local_84,&DAT_00014781);
  FUN_00015a38(local_84,param_1);
  FUN_00015a38(local_84,&DAT_00014781);
  FUN_00015a38(local_84,param_2);
  FUN_000253f8(local_84,0);
  return;
}



/* --- FUN_00015150 @ 00015150 --- */

undefined4 FUN_00015150(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_104 [255];
  undefined1 local_5;
  
  local_5 = 0;
  uVar2 = FUN_0000f8b8(param_1,local_104,0xff);
  uVar4 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if ((~uVar4 <= uVar2) && (iVar3 = FUN_000043d0(param_2,local_104), iVar3 == 0)) {
    return 1;
  }
  FUN_0000b748(param_1);
  return 0;
}



/* --- FUN_000151e0 @ 000151e0 --- */

undefined4 FUN_000151e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0000f8b8(param_1,&DAT_000344a8,0x100);
  if ((((iVar1 == 0x100) && (iVar1 = FUN_0000f8b8(param_1,&DAT_000345a8,0x100), iVar1 == 0x100)) &&
      (iVar1 = FUN_0000f8b8(param_1,&DAT_0002b480,4), iVar1 == 4)) && (DAT_0002b480 == 0)) {
    iVar1 = FUN_00015150(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0000b748(param_1);
      PTR_DAT_0002bb20 = (undefined *)&DAT_0002b480;
      return 1;
    }
  }
  else {
    FUN_0000b748(param_1);
  }
  return 0;
}



/* --- FUN_00015290 @ 00015290 --- */

undefined4 FUN_00015290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0000f8b8(param_1,&DAT_000346a8,0x404);
  if (iVar1 == 0x404) {
    iVar1 = FUN_00015150(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0000b748(param_1);
      PTR_DAT_0002b058 = &DAT_000346aa;
      PTR_DAT_0002b05c = &DAT_000348ab;
      PTR_DAT_0002b060 = &DAT_000349ac;
      PTR_PTR_0002bb28 = (undefined *)&PTR_PTR_0001527c;
      return 1;
    }
  }
  else {
    FUN_0000b748(param_1);
  }
  return 0;
}



/* --- FUN_00015320 @ 00015320 --- */

undefined4 FUN_00015320(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  short local_6;
  
  iVar1 = *param_4;
  iVar2 = param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_0000f8b8(param_1,&local_6,2);
    if ((((iVar1 != 2) || (param_3 - (iVar2 - param_2) < (int)local_6)) ||
        (iVar1 = FUN_0000f8b8(param_1,iVar2,(int)local_6), iVar1 != local_6)) ||
       (*(char *)(iVar1 + -1 + iVar2) != '\0')) break;
    *(int *)*param_4 = iVar2;
    iVar2 = iVar2 + local_6;
    param_4 = param_4 + 1;
    iVar1 = *param_4;
  }
  FUN_0000b748(param_1);
  return 0;
}



/* --- FUN_000153c0 @ 000153c0 --- */

undefined4 FUN_000153c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00015320(param_1,&DAT_00034ad8,0x80,&PTR_DAT_0002b49c);
  if (iVar1 != 0) {
    iVar1 = FUN_0000f8b8(param_1,&DAT_00034acc,8);
    if (iVar1 == 8) {
      iVar1 = FUN_00015150(param_1,param_2);
      if (iVar1 != 0) {
        FUN_0000b748(param_1);
        PTR_PTR_0002bb30 = &DAT_00034ab0;
        return 1;
      }
    }
    else {
      FUN_0000b748(param_1);
    }
  }
  return 0;
}



/* --- FUN_00015450 @ 00015450 --- */

undefined4 FUN_00015450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00015320(param_1,&DAT_00034b68,0x40,&PTR_DAT_0002b4bc);
  if ((iVar1 != 0) && (iVar1 = FUN_00015150(param_1,param_2), iVar1 != 0)) {
    FUN_0000b748(param_1);
    PTR_PTR_0002bb38 = &DAT_00034b58;
    return 1;
  }
  return 0;
}



/* --- FUN_000154b0 @ 000154b0 --- */

undefined4 FUN_000154b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00015320(param_1,&DAT_00034c60,0x400,&PTR_DAT_0002b4cc);
  if ((iVar1 != 0) && (iVar1 = FUN_00015150(param_1,param_2), iVar1 != 0)) {
    FUN_0000b748(param_1);
    PTR_PTR_0002bb40 = &DAT_00034ba8;
    return 1;
  }
  return 0;
}



/* --- FUN_00015510 @ 00015510 --- */

undefined4 FUN_00015510(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00015320(param_1,&DAT_00035068,0x40,&PTR_DAT_0002b584);
  if ((iVar1 != 0) && (iVar1 = FUN_00015150(param_1,param_2), iVar1 != 0)) {
    FUN_0000b748(param_1);
    PTR_PTR_0002bb48 = &DAT_00035060;
    return 1;
  }
  return 0;
}



/* --- FUN_00015570 @ 00015570 --- */

uint FUN_00015570(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  param_3 = param_3 + 1;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    if (bVar1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *param_2) | 1;
}



/* --- FUN_000155a0 @ 000155a0 --- */

int FUN_000155a0(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  if ((param_3 == (uint *)0x0) || ((*param_3 & 0xffff0000) != 0xfbad0000)) {
    DAT_0002a0a0 = 0x16;
  }
  else if (((0 < param_2) && (iVar1 = FUN_00025310(param_3,param_1,param_2 + -1,10,1), iVar1 != 0))
          && ((*param_3 & 0x20) == 0)) {
    *(undefined1 *)(iVar1 + param_1) = 0;
    return param_1;
  }
  return 0;
}



/* --- FUN_00015600 @ 00015600 --- */

char * FUN_00015600(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}



/* --- FUN_00015a38 @ 00015a38 --- */

char * FUN_00015a38(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  pcVar4 = param_1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while (cVar1 != '\0');
  pcVar4 = pcVar3 + -1;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return param_1;
}



/* --- FUN_00015a68 @ 00015a68 --- */

int FUN_00015a68(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00015a90 @ 00015a90 --- */

int FUN_00015a90(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 + 0x1000U < 0x1000) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00015af8 @ 00015af8 --- */

undefined4 FUN_00015af8(uint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0xffff0000) != 0xfbad0000)) {
    DAT_0002a0a0 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    if ((*param_1 & 0x2000) != 0) {
      uVar1 = FUN_00011690(param_1);
    }
    (**(code **)(param_1[0xe] + 0x28))(param_1);
    if (((param_1 != (uint *)&DAT_0002b070) && (param_1 != (uint *)&DAT_0002b0c0)) &&
       (param_1 != (uint *)&DAT_0002b110)) {
      FUN_00005058(param_1);
    }
  }
  return uVar1;
}



/* --- FUN_00015b70 @ 00015b70 --- */

int FUN_00015b70(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar2 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (*pcVar4 == '\0') break;
    bVar6 = false;
    pcVar5 = param_2;
    uVar3 = ~uVar2;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) break;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (!bVar6);
    pcVar5 = pcVar4 + 1;
  } while (bVar6);
  return (int)pcVar4 - (int)param_1;
}



/* --- FUN_00015bd8 @ 00015bd8 --- */

/* WARNING: Removing unreachable block (ram,0x00015d0f) */
/* WARNING: Removing unreachable block (ram,0x00015d19) */
/* WARNING: Removing unreachable block (ram,0x00015d36) */

int FUN_00015bd8(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                uint param_6,undefined4 param_7,undefined2 *param_8,int param_9)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined2 *local_54;
  undefined4 local_50;
  
  if ((DAT_0002b178 & 2) != 0) {
    FUN_0000b478(s____res_mkquery__d___s___d___d__00015bb8,param_1,param_2,param_3,param_4);
  }
  if ((param_8 == (undefined2 *)0x0) || (param_9 < 0xc)) {
LAB_00015d92:
    iVar3 = -1;
  }
  else {
    FUN_00004bb0(param_8,0xc);
    DAT_0002b1b0._0_2_ = (short)DAT_0002b1b0 + 1;
    *param_8 = CONCAT11((char)(short)DAT_0002b1b0,(char)((ushort)(short)DAT_0002b1b0 >> 8));
    *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0x87;
    *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) | ((byte)param_1 & 0xf) << 3;
    bVar1 = (byte)DAT_0002b178 & 0x10;
    *(byte *)((int)param_8 + 3) = *(byte *)((int)param_8 + 3) & 0xbf;
    *(byte *)((int)param_8 + 3) = *(byte *)((int)param_8 + 3) | bVar1 << 2;
    uVar2 = DAT_0002b178 >> 6;
    *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0xfe;
    *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) | (byte)uVar2 & 1;
    *(byte *)((int)param_8 + 3) = *(byte *)((int)param_8 + 3) & 0xf0;
    puVar5 = param_8 + 6;
    local_54 = param_8;
    local_50 = 0;
    if (param_1 == 0) {
      if ((param_9 + -0x10 < 0) ||
         (iVar3 = FUN_0000d840(param_2,puVar5,param_9 + -0x10,&local_54,&stack0xfffffffc), iVar3 < 0
         )) goto LAB_00015d92;
      puVar4 = (undefined1 *)((int)puVar5 + iVar3);
      FUN_0000dcb0(param_4 & 0xffff,puVar4);
      FUN_0000dcb0(param_3 & 0xffff,puVar4 + 2);
      puVar5 = (undefined2 *)(puVar4 + 4);
      param_8[2] = 0x100;
    }
    else if (param_1 == 1) {
      if (param_9 + -0xc < (int)(param_6 + 0xb)) goto LAB_00015d92;
      *(undefined1 *)puVar5 = 0;
      FUN_0000dcb0(param_4 & 0xffff,(int)param_8 + 0xd);
      FUN_0000dcb0(param_3 & 0xffff,(int)param_8 + 0xf);
      FUN_0000dcd0(0,(int)param_8 + 0x11);
      FUN_0000dcb0(param_6 & 0xffff,(int)param_8 + 0x15);
      puVar5 = (undefined2 *)((int)param_8 + 0x17);
      if (param_6 != 0) {
        FUN_00007dc0(param_5,puVar5,param_6);
        puVar5 = (undefined2 *)((int)puVar5 + param_6);
      }
      param_8[3] = 0x100;
    }
    iVar3 = (int)puVar5 - (int)param_8;
  }
  return iVar3;
}



/* --- FUN_00015e48 @ 00015e48 --- */

void FUN_00015e48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0002a0a0;
  if (((byte)DAT_0002b178 & 2) != 0) {
    uVar2 = FUN_00018bc0(param_3);
    uVar2 = FUN_00007d68(param_5,param_4._2_2_,uVar2);
    FUN_00012f18(param_1,s_res_send___s____s___d____s_00015e28,param_2,uVar2);
  }
  DAT_0002a0a0 = uVar1;
  return;
}



/* --- FUN_00015eb8 @ 00015eb8 --- */

void FUN_00015eb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0002a0a0;
  if (((byte)DAT_0002b178 & 2) != 0) {
    uVar2 = FUN_00018bc0(param_3);
    FUN_00012f18(param_1,s_res_send___s___s_00015e9b,param_2,uVar2);
  }
  DAT_0002a0a0 = uVar1;
  return;
}



/* --- FUN_00015f08 @ 00015f08 --- */

void FUN_00015f08(undefined4 param_1)

{
  DAT_0002b59c = param_1;
  return;
}



/* --- FUN_00015f18 @ 00015f18 --- */

void FUN_00015f18(undefined4 param_1)

{
  DAT_0002b5a0 = param_1;
  return;
}



/* --- FUN_00015f28 @ 00015f28 --- */

undefined4 FUN_00015f28(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *local_24;
  int *local_20;
  int local_18;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uVar5 = 0;
  local_18 = 0;
  if ((int)DAT_0002b17c < 1) {
    return 0;
  }
  piVar3 = &DAT_0002b184;
  local_20 = &DAT_0002b180;
  uVar4 = DAT_0002b17c & 3;
  local_24 = piVar3;
  if (uVar4 == 0) {
LAB_00016020:
    do {
      if (((((*local_20 == iVar1) && ((*piVar3 == 0 || (iVar2 == *local_24)))) ||
           ((local_20[4] == iVar1 && ((piVar3[4] == 0 || (iVar2 == local_24[4])))))) ||
          ((local_20[8] == iVar1 && ((piVar3[8] == 0 || (iVar2 == local_24[8])))))) ||
         ((local_20[0xc] == iVar1 && ((piVar3[0xc] == 0 || (iVar2 == local_24[0xc]))))))
      goto LAB_00016081;
      piVar3 = piVar3 + 0x10;
      local_20 = local_20 + 0x10;
      local_18 = local_18 + 4;
      local_24 = local_24 + 0x10;
    } while (local_18 < (int)DAT_0002b17c);
  }
  else {
    if (uVar4 < 2) {
LAB_00015fe1:
      if ((*local_20 != iVar1) || ((*piVar3 != 0 && (iVar2 != *piVar3)))) {
        piVar3 = piVar3 + 4;
        local_20 = local_20 + 4;
        local_18 = local_18 + 1;
        local_24 = piVar3;
        if ((int)DAT_0002b17c <= local_18) {
          return 0;
        }
        goto LAB_00016020;
      }
    }
    else if (uVar4 < 3) {
LAB_00015fb9:
      if ((*local_20 != iVar1) || ((*piVar3 != 0 && (iVar2 != *piVar3)))) {
        piVar3 = piVar3 + 4;
        local_20 = local_20 + 4;
        local_18 = local_18 + 1;
        goto LAB_00015fe1;
      }
    }
    else if ((DAT_0002b180 != iVar1) || ((DAT_0002b184 != 0 && (iVar2 != DAT_0002b184)))) {
      piVar3 = &DAT_0002b194;
      local_20 = &DAT_0002b190;
      local_18 = 1;
      goto LAB_00015fb9;
    }
LAB_00016081:
    uVar5 = 1;
  }
  return uVar5;
}



/* --- FUN_000160b8 @ 000160b8 --- */

undefined4 FUN_000160b8(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_108 [260];
  
  iVar3 = param_4 + 0xc;
  uVar4 = (uint)CONCAT11((char)*(undefined2 *)(param_4 + 4),
                         (char)((ushort)*(undefined2 *)(param_4 + 4) >> 8));
  if (uVar4 != 0) {
    do {
      uVar4 = uVar4 - 1;
      iVar1 = FUN_0000d5e0(param_4,param_5,iVar3,local_108,0x101);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + iVar1;
      iVar1 = FUN_0000dc60(iVar3);
      iVar2 = FUN_0000dc60(iVar3 + 2);
      iVar3 = iVar3 + 4;
      if (((param_2 == iVar1) && (param_3 == iVar2)) &&
         (iVar1 = FUN_0000b798(local_108,param_1), iVar1 == 0)) {
        return 1;
      }
    } while (0 < (int)uVar4);
  }
  return 0;
}



/* --- FUN_00016188 @ 00016188 --- */

undefined4 FUN_00016188(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_108 [260];
  
  iVar4 = param_1 + 0xc;
  uVar5 = (uint)CONCAT11((char)*(undefined2 *)(param_1 + 4),
                         (char)((ushort)*(undefined2 *)(param_1 + 4) >> 8));
  if (uVar5 == CONCAT11((char)*(undefined2 *)(param_3 + 4),
                        (char)((ushort)*(undefined2 *)(param_3 + 4) >> 8))) {
    if (uVar5 != 0) {
      do {
        uVar5 = uVar5 - 1;
        iVar2 = FUN_0000d5e0(param_1,param_2,iVar4,local_108,0x101);
        if (iVar2 < 0) {
          return 0xffffffff;
        }
        iVar4 = iVar4 + iVar2;
        uVar1 = FUN_0000dc60(iVar4);
        uVar3 = FUN_0000dc60(iVar4 + 2);
        iVar4 = iVar4 + 4;
        iVar2 = FUN_000160b8(local_108,uVar1,uVar3,param_3,param_4);
        if (iVar2 == 0) goto LAB_000161b8;
      } while (0 < (int)uVar5);
    }
    uVar1 = 1;
  }
  else {
LAB_000161b8:
    uVar1 = 0;
  }
  return uVar1;
}



/* --- FUN_000163b8 @ 000163b8 --- */

int FUN_000163b8(short *param_1,uint param_2,short *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  ushort uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 uVar20;
  short *local_258;
  uint local_24c;
  int local_244;
  int local_240;
  undefined4 local_22c;
  int local_228;
  undefined4 local_224;
  byte local_220 [32];
  undefined1 local_200 [482];
  ushort local_1e;
  ushort *local_1c;
  undefined4 local_18;
  short *local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  psVar8 = param_3;
  psVar7 = param_1;
  bVar4 = false;
  bVar2 = false;
  local_240 = 0x6e;
  if ((((byte)DAT_0002b178 & 2) != 0) || ((DAT_0002b2d0._1_1_ & 0x10) != 0)) {
    FUN_00012f18(&DAT_0002b0c0,s____res_send___0001625d);
    FUN_00025e78(param_1);
  }
  if ((((byte)DAT_0002b178 & 1) != 0) || (iVar9 = FUN_0000c5f8(), iVar9 != -1)) {
    bVar1 = false;
    if ((((byte)DAT_0002b178 & 8) != 0) || (0x200 < (int)param_2)) {
      bVar1 = true;
    }
    local_24c = 0;
    for (local_244 = 0; local_244 < DAT_0002b174; local_244 = local_244 + 1) {
      uVar15 = 0;
      if (0 < DAT_0002b17c) {
LAB_00016488:
        local_8 = &DAT_0002b180 + uVar15 * 4;
        while ((local_24c >> (uVar15 & 0x1f) & 1) == 0) {
          if (DAT_0002b59c != (code *)0x0) {
            iVar9 = 0;
            do {
              uVar10 = (*DAT_0002b59c)(&local_8,&param_1,&param_2,param_3,param_4,&local_c);
              switch(uVar10) {
              case 0:
                goto switchD_000164f2_caseD_0;
              case 1:
                goto switchD_000164f2_caseD_1;
              case 2:
                iVar9 = iVar9 + 1;
                if (0x29 < iVar9) {
                  return -1;
                }
                break;
              case 3:
                goto switchD_000164f2_caseD_3;
              default:
                goto switchD_000164f2_caseD_4;
              }
            } while( true );
          }
switchD_000164f2_caseD_0:
          if (((byte)DAT_0002b178 & 2) != 0) {
            uVar10 = FUN_00007d68(local_8[1]);
            FUN_00012f18(&DAT_0002b0c0,s____Querying_server_____d__addres_0001626c,uVar15 + 1,uVar10
                        );
          }
          bVar12 = (byte)uVar15;
          if (bVar1) {
            local_244 = DAT_0002b174;
            bVar3 = false;
            if ((int)DAT_0002b590 < 0) {
LAB_000165ab:
              DAT_0002b590 = FUN_00004b68(2,1,0);
              if ((int)DAT_0002b590 < 0) {
                pcVar19 = s_socket_vc__00016294;
LAB_000168d0:
                FUN_00015eb8(&DAT_0002b110,pcVar19,DAT_0002a0a0);
                return -1;
              }
              iVar9 = FUN_0000a1d8(DAT_0002b590,local_8,0x10);
              if (iVar9 < 0) {
                local_240 = DAT_0002a0a0;
                FUN_00015e48(&DAT_0002b110,s_connect_vc_0001629f,DAT_0002a0a0,*local_8,local_8[1],
                             local_8[2],local_8[3]);
                goto LAB_00016a76;
              }
              DAT_0002b598 = 1;
            }
            else if (DAT_0002b598 == 0) {
              if (-1 < (int)DAT_0002b590) {
                FUN_00016ee8();
              }
              goto LAB_000165ab;
            }
            FUN_0000dcb0(param_2 & 0xffff,&local_1e);
            local_18 = 2;
            local_14 = param_1;
            local_10 = param_2;
            local_1c = &local_1e;
            iVar9 = FUN_00018c60(DAT_0002b590,&local_1c,2);
            if (iVar9 != param_2 + 2) {
              local_240 = DAT_0002a0a0;
              FUN_00015eb8(&DAT_0002b110,s_write_failed_000162aa,DAT_0002a0a0);
              local_24c = local_24c | 1 << (bVar12 & 0x1f);
              goto LAB_00016bab;
            }
            local_258 = param_3;
            local_1e = 2;
            do {
              iVar9 = FUN_0000f8b8(DAT_0002b590,local_258,local_1e);
              iVar6 = DAT_0002a0a0;
              if (iVar9 < 1) goto LAB_00016701;
              local_258 = (short *)((int)local_258 + iVar9);
              local_1e = local_1e - (short)iVar9;
            } while (local_1e != 0);
            if (0 < iVar9) {
              local_c = FUN_0000dc60(param_3);
              if (param_4 < local_c) {
                if (((byte)DAT_0002b178 & 2) != 0) {
                  FUN_00012f18(&DAT_0002b0c0,s____response_truncated_000162c3);
                }
                bVar3 = true;
                psVar5 = param_3;
                local_1e = (ushort)param_4;
              }
              else {
                psVar5 = param_3;
                local_1e = (ushort)local_c;
              }
              goto joined_r0x000167be;
            }
LAB_00016701:
            local_240 = DAT_0002a0a0;
            FUN_00015eb8(&DAT_0002b110,s_read_failed_000162b7,DAT_0002a0a0);
            FUN_00016ee8();
            if ((iVar6 != 0x68) || (bVar2)) break;
            bVar2 = true;
            FUN_00016ee8();
          }
          else {
            if (((int)DAT_0002b590 < 0) || (DAT_0002b598 != 0)) {
              if (DAT_0002b598 != 0) {
                FUN_00016ee8();
              }
              DAT_0002b590 = FUN_00004b68(2,2,0);
              if (-1 < (int)DAT_0002b590) {
                DAT_0002b594 = 0;
                goto LAB_000168f2;
              }
LAB_000168bf:
              pcVar19 = s_socket_dg__000162e3;
              goto LAB_000168d0;
            }
LAB_000168f2:
            if ((DAT_0002b17c != 1) && ((local_244 != 0 || (uVar15 != 0)))) {
              if (DAT_0002b594 != 0) {
                iVar9 = FUN_00004b68(2,2,0);
                if (iVar9 < 0) goto LAB_000168bf;
                FUN_000294f0(iVar9,DAT_0002b590);
                FUN_0000b748(iVar9);
                if (((byte)DAT_0002b178 & 2) != 0) {
                  FUN_00012f18(&DAT_0002b0c0,s____new_DG_socket_000162ff);
                }
                DAT_0002b594 = 0;
                DAT_0002a0a0 = 0;
              }
              uVar11 = FUN_00027a88(DAT_0002b590,param_1,param_2,0,local_8,0x10);
              if (param_2 == uVar11) goto LAB_00016a88;
              uVar10 = local_8[3];
              uVar20 = local_8[2];
              uVar18 = local_8[1];
              uVar17 = *local_8;
              pcVar19 = s_sendto_00016311;
LAB_00016a5d:
              FUN_00015e48(&DAT_0002b110,pcVar19,DAT_0002a0a0,uVar17,uVar18,uVar20,uVar10);
LAB_00016a76:
              local_24c = local_24c | 1 << (bVar12 & 0x1f);
              FUN_00016ee8();
              goto LAB_00016e48;
            }
            if (DAT_0002b594 == 0) {
              iVar9 = FUN_0000a1d8(DAT_0002b590,local_8,0x10);
              if (iVar9 < 0) {
                uVar10 = local_8[3];
                uVar20 = local_8[2];
                uVar18 = local_8[1];
                uVar17 = *local_8;
                pcVar19 = s_connect_dg__000162ee;
                goto LAB_00016a5d;
              }
              DAT_0002b594 = 1;
            }
            uVar11 = FUN_00027a38(DAT_0002b590,param_1,param_2,0);
            if (param_2 != uVar11) {
              FUN_00015eb8(&DAT_0002b110,&DAT_000162fa,DAT_0002a0a0);
              local_24c = local_24c | 1 << (bVar12 & 0x1f);
              goto LAB_00016bab;
            }
LAB_00016a88:
            local_228 = DAT_0002b170 << ((byte)local_244 & 0x1f);
            if (0 < local_244) {
              local_228 = local_228 / DAT_0002b17c;
            }
            if (local_228 < 1) {
              local_228 = 1;
            }
            local_224 = 0;
LAB_00016acc:
            while( true ) {
              while( true ) {
                pbVar16 = local_220;
                for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                  pbVar16[0] = 0;
                  pbVar16[1] = 0;
                  pbVar16[2] = 0;
                  pbVar16[3] = 0;
                  pbVar16 = pbVar16 + 4;
                }
                local_220[(int)DAT_0002b590 >> 3] =
                     local_220[(int)DAT_0002b590 >> 3] | '\x01' << (DAT_0002b590 & 7);
                iVar9 = FUN_00010858(DAT_0002b590 + 1,local_220,0,0,&local_228);
                if (iVar9 < 0) {
                  pcVar19 = s_select_00016318;
                  goto LAB_00016ba1;
                }
                if (iVar9 == 0) {
                  if (((byte)DAT_0002b178 & 2) != 0) {
                    FUN_00012f18(&DAT_0002b0c0,s____timeout_0001631f);
                  }
                  bVar4 = true;
                  goto switchD_000164f2_caseD_1;
                }
                local_22c = 0x10;
                local_c = FUN_00027ae8(DAT_0002b590,param_3,param_4,0,local_200,&local_22c);
                if (local_c < 1) {
                  pcVar19 = s_recvfrom_0001632b;
                  goto LAB_00016ba1;
                }
                bVar4 = true;
                if (*psVar8 == *psVar7) break;
                if ((((byte)DAT_0002b178 & 2) != 0) || ((DAT_0002b2d0._1_1_ & 0x20) != 0)) {
                  pcVar19 = s____old_answer__00016334;
                  goto LAB_00016c94;
                }
              }
              if (((DAT_0002b178._1_1_ & 4) != 0) || (iVar9 = FUN_00015f28(local_200), iVar9 != 0))
              break;
              if ((((byte)DAT_0002b178 & 2) != 0) || ((DAT_0002b2d0._1_1_ & 0x20) != 0)) {
                FUN_00012f18(&DAT_0002b0c0,s____not_our_server__00016344);
                goto LAB_00016ca2;
              }
            }
            if (((DAT_0002b178._1_1_ & 8) == 0) &&
               (iVar9 = FUN_00016188(param_1,(int)param_1 + param_2,param_3,(int)param_3 + param_4),
               iVar9 == 0)) goto code_r0x00016c79;
            bVar13 = *(byte *)((int)psVar8 + 3) & 0xf;
            if ((bVar13 == 2) || ((byte)(bVar13 - 4) < 2)) {
              if (((byte)DAT_0002b178 & 2) != 0) {
                FUN_00012f18(&DAT_0002b0c0,s_server_rejected_query__0001636e);
                FUN_00025e78(param_3);
              }
              local_24c = local_24c | 1 << (bVar12 & 0x1f);
              break;
            }
            if ((((byte)DAT_0002b178 & 0x20) != 0) || ((*(byte *)(psVar8 + 1) & 2) == 0))
            goto LAB_00016d68;
            if (((byte)DAT_0002b178 & 2) != 0) {
              FUN_00012f18(&DAT_0002b0c0,s____truncated_answer_00016386);
            }
            bVar1 = true;
            FUN_00016ee8();
          }
        }
switchD_000164f2_caseD_1:
        FUN_00016ee8();
        goto LAB_00016e48;
      }
LAB_00016e55:
    }
    FUN_00016ee8();
    if (bVar1) {
      DAT_0002a0a0 = local_240;
    }
    else if (bVar4) {
      DAT_0002a0a0 = 0x6e;
    }
    else {
      DAT_0002a0a0 = 0x6f;
    }
  }
switchD_000164f2_caseD_4:
  return -1;
code_r0x00016c79:
  if ((((byte)DAT_0002b178 & 2) != 0) || ((DAT_0002b2d0._1_1_ & 0x20) != 0)) {
    pcVar19 = s____wrong_query_name__00016358;
LAB_00016c94:
    FUN_00012f18(&DAT_0002b0c0,pcVar19);
LAB_00016ca2:
    FUN_00025e78(param_3);
  }
  goto LAB_00016acc;
joined_r0x000167be:
  if (local_1e == 0) goto LAB_000167f4;
  iVar9 = FUN_0000f8b8(DAT_0002b590,psVar5,local_1e);
  if (iVar9 < 1) goto LAB_000167f8;
  local_1e = local_1e - (short)iVar9;
  psVar5 = (short *)((int)psVar5 + iVar9);
  goto joined_r0x000167be;
LAB_000167f4:
  if (0 < iVar9) {
    if (bVar3) {
      *(byte *)(psVar8 + 1) = *(byte *)(psVar8 + 1) | 2;
      for (local_1e = (ushort)local_c - (ushort)param_4; local_1e != 0;
          local_1e = local_1e - (short)iVar9) {
        uVar14 = 0x200;
        if (local_1e < 0x201) {
          uVar14 = local_1e;
        }
        iVar9 = FUN_0000f8b8(DAT_0002b590,local_220,uVar14);
        if (iVar9 < 1) break;
      }
    }
LAB_00016d68:
    if ((((byte)DAT_0002b178 & 2) != 0) || ((DAT_0002b2d0._1_1_ & 0x20) != 0)) {
      FUN_00012f18(&DAT_0002b0c0,s____got_answer__0001639b);
      FUN_00025e78(param_3);
    }
    if (((bVar1) && ((((byte)DAT_0002b178 & 8) == 0 || (uVar15 != 0)))) ||
       ((DAT_0002b178._1_1_ & 1) == 0)) {
      FUN_00016ee8();
    }
    if (DAT_0002b5a0 == (code *)0x0) {
switchD_000164f2_caseD_3:
      return local_c;
    }
    iVar9 = 0;
    do {
      uVar10 = (*DAT_0002b5a0)(local_8,param_1,param_2,param_3,param_4,&local_c);
      switch(uVar10) {
      case 0:
      case 3:
        goto switchD_000164f2_caseD_3;
      case 1:
        goto switchD_000164f2_caseD_1;
      case 2:
        iVar9 = iVar9 + 1;
        if (0x29 < iVar9) {
          return -1;
        }
        break;
      default:
        goto switchD_000164f2_caseD_4;
      }
    } while( true );
  }
LAB_000167f8:
  local_240 = DAT_0002a0a0;
  pcVar19 = s_read_vc__000162da;
LAB_00016ba1:
  FUN_00015eb8(&DAT_0002b110,pcVar19,DAT_0002a0a0);
LAB_00016bab:
  FUN_00016ee8();
LAB_00016e48:
  uVar15 = uVar15 + 1;
  if (DAT_0002b17c <= (int)uVar15) goto LAB_00016e55;
  goto LAB_00016488;
}



/* --- FUN_00016ee8 @ 00016ee8 --- */

void FUN_00016ee8(void)

{
  if (-1 < DAT_0002b590) {
    FUN_0000b748(DAT_0002b590);
    DAT_0002b590 = -1;
    DAT_0002b594 = 0;
    DAT_0002b598 = 0;
  }
  return;
}



/* --- FUN_00016f28 @ 00016f28 --- */

int FUN_00016f28(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00016f60 @ 00016f60 --- */

undefined4 FUN_00016f60(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}



/* --- FUN_00016f90 @ 00016f90 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00016f90(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  PTR_DAT_0002b5a8 = &DAT_00016f54;
  PTR_DAT_0002b5ac = &DAT_00016f54;
  _DAT_0002b5b4 = 0;
  _DAT_0002b5b0 = 0;
  _DAT_0002b5b8 = 0;
  iVar2 = 0;
  if (0 < DAT_00035120) {
    piVar4 = &DAT_00035864;
    piVar3 = &DAT_00035868;
    iVar5 = 0;
    do {
      (&PTR_DAT_0002b5a8)[*piVar3] = &DAT_00036864 + *(int *)((int)&DAT_0003586c + iVar5);
      if (*piVar3 != 0) {
        _DAT_0002b5b4 = 1;
      }
      if (((iVar2 != 0) && (*piVar3 != 0)) || (_DAT_0002b5b0 = -*piVar4, *piVar3 != 0)) {
        _DAT_0002b5b8 = -*piVar4;
      }
      piVar4 = piVar4 + 4;
      piVar3 = piVar3 + 4;
      iVar5 = iVar5 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00035120);
  }
  iVar2 = FUN_00016f28(0);
  iVar5 = 0;
  if (0 < DAT_0003511c) {
    do {
      if ((int)(&DAT_00035128)[iVar5] <= iVar2 + 0x1e28500) {
        uVar1 = (uint)(byte)(&DAT_000356f0)[iVar5];
        (&PTR_DAT_0002b5a8)[(&DAT_00035868)[uVar1 * 4]] = &DAT_00036864 + (&DAT_0003586c)[uVar1 * 4]
        ;
        if ((&DAT_00035868)[uVar1 * 4] != 0) {
          _DAT_0002b5b4 = 1;
        }
        if (((iVar5 != 0) && ((&DAT_00035868)[uVar1 * 4] != 0)) ||
           (_DAT_0002b5b0 = -(&DAT_00035864)[uVar1 * 4], (&DAT_00035868)[uVar1 * 4] != 0)) {
          _DAT_0002b5b8 = -(&DAT_00035864)[uVar1 * 4];
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0003511c);
  }
  return;
}



/* --- FUN_000170f0 @ 000170f0 --- */

undefined4 FUN_000170f0(char *param_1,uint *param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined1 local_1d44 [24];
  undefined1 local_1d2c [4];
  undefined1 local_1d28 [4];
  undefined1 local_1d24 [4];
  undefined1 local_1d20 [4];
  undefined1 local_1d1c [4];
  byte local_1d18 [6416];
  char local_408 [1028];
  
  if (param_1 == (char *)0x0) {
    param_1 = s_localtime_000170c5;
  }
  if (*param_1 == ':') {
    param_1 = param_1 + 1;
  }
  if (*param_1 != '/') {
    uVar6 = 0xffffffff;
    pcVar9 = s__usr_lib_zoneinfo_000170cf;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar7 = 0xffffffff;
    pcVar9 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    if (0x400 < (~uVar6 - 1) + ~uVar7) {
      return 0xffffffff;
    }
    FUN_0000b828(local_408,s__usr_lib_zoneinfo_000170cf);
    FUN_00015a38(local_408,&DAT_000170e1);
    FUN_00015a38(local_408,param_1);
    param_1 = local_408;
  }
  iVar4 = FUN_000253f8(param_1,0);
  if (iVar4 != -1) {
    uVar6 = FUN_0000f8b8(iVar4,local_1d44,0x193c);
    iVar4 = FUN_0000b748(iVar4);
    if ((iVar4 == 0) && (0x2b < uVar6)) {
      uVar7 = FUN_00016f60(local_1d2c);
      uVar5 = FUN_00016f60(local_1d28);
      *param_2 = uVar5;
      uVar5 = FUN_00016f60(local_1d24);
      param_2[1] = uVar5;
      uVar5 = FUN_00016f60(local_1d20);
      param_2[2] = uVar5;
      uVar5 = FUN_00016f60(local_1d1c);
      param_2[3] = uVar5;
      if (((*param_2 < 0x33) &&
          (((param_2[2] - 1 < 0x100 && (param_2[1] < 0x173)) && (uVar5 < 0x33)))) &&
         (((param_2[2] == uVar7 || (uVar7 == 0)) &&
          (param_2[1] * 5 + 0x2c + param_2[2] * 6 + param_2[3] + *param_2 * 8 + uVar7 <= uVar6)))) {
        pbVar8 = local_1d18;
        iVar4 = 0;
        if (0 < (int)param_2[1]) {
          do {
            uVar6 = FUN_00016f60(pbVar8);
            param_2[iVar4 + 4] = uVar6;
            pbVar8 = pbVar8 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)param_2[1]);
        }
        iVar4 = 0;
        if (0 < (int)param_2[1]) {
          do {
            *(byte *)(iVar4 + 0x5d8 + (int)param_2) = *pbVar8;
            pbVar8 = pbVar8 + 1;
            if ((int)param_2[2] <= (int)(uint)*(byte *)(iVar4 + 0x5d8 + (int)param_2)) {
              return 0xffffffff;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)param_2[1]);
        }
        iVar4 = 0;
        while( true ) {
          if ((int)param_2[2] <= iVar4) {
            iVar4 = 0;
            if (0 < (int)param_2[3]) {
              do {
                *(byte *)(iVar4 + 0x174c + (int)param_2) = *pbVar8;
                pbVar8 = pbVar8 + 1;
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)param_2[3]);
            }
            *(undefined1 *)(iVar4 + 0x174c + (int)param_2) = 0;
            iVar4 = 0;
            if (0 < (int)*param_2) {
              do {
                uVar6 = FUN_00016f60(pbVar8);
                param_2[iVar4 * 2 + 0x5e0] = uVar6;
                uVar6 = FUN_00016f60(pbVar8 + 4);
                (param_2 + iVar4 * 2 + 0x5e0)[1] = uVar6;
                pbVar8 = pbVar8 + 8;
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)*param_2);
            }
            iVar4 = 0;
            do {
              if ((int)param_2[2] <= iVar4) {
                return 0;
              }
              if (uVar7 == 0) {
                param_2[iVar4 * 4 + 0x1d6] = 0;
              }
              else {
                bVar3 = *pbVar8;
                param_2[iVar4 * 4 + 0x1d6] = (uint)bVar3;
                pbVar8 = pbVar8 + 1;
                if (1 < bVar3) {
                  return 0xffffffff;
                }
              }
              iVar4 = iVar4 + 1;
            } while( true );
          }
          puVar1 = param_2 + iVar4 * 4 + 0x1d3;
          uVar6 = FUN_00016f60(pbVar8);
          *puVar1 = uVar6;
          bVar3 = pbVar8[4];
          puVar1[1] = (uint)bVar3;
          if (1 < bVar3) {
            return 0xffffffff;
          }
          bVar3 = pbVar8[5];
          puVar1[2] = (uint)bVar3;
          pbVar8 = pbVar8 + 6;
          if ((int)param_2[3] < (int)(uint)bVar3) break;
          iVar4 = iVar4 + 1;
        }
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}



/* --- FUN_00017470 @ 00017470 --- */

byte * FUN_00017470(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while ((((bVar1 != 0 && ((PTR_DAT_0002b058[(uint)bVar1 * 2] & 8) == 0)) &&
          (1 < (byte)(bVar1 - 0x2c))) && (bVar1 != 0x2b))) {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return param_1;
}



/* --- FUN_000174c0 @ 000174c0 --- */

byte * FUN_000174c0(byte *param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  if ((param_1 != (byte *)0x0) && ((PTR_DAT_0002b058[(uint)*param_1 * 2] & 8) != 0)) {
    iVar2 = 0;
    bVar1 = *param_1;
    while ((bVar1 != 0 && ((PTR_DAT_0002b058[(uint)bVar1 * 2] & 8) != 0))) {
      iVar2 = (bVar1 - 0x30) + iVar2 * 10;
      if (param_4 < iVar2) {
        return (byte *)0x0;
      }
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    }
    if (param_3 <= iVar2) {
      *param_2 = iVar2;
      return param_1;
    }
  }
  return (byte *)0x0;
}



/* --- FUN_00017530 @ 00017530 --- */

char * FUN_00017530(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int local_8;
  
  pcVar1 = (char *)FUN_000174c0(param_1,&local_8,0,0x18);
  if (pcVar1 != (char *)0x0) {
    *param_2 = local_8 * 0xe10;
    if (*pcVar1 != ':') {
      return pcVar1;
    }
    pcVar1 = (char *)FUN_000174c0(pcVar1 + 1,&local_8,0,0x3b);
    if (pcVar1 != (char *)0x0) {
      *param_2 = *param_2 + local_8 * 0x3c;
      if (*pcVar1 != ':') {
        return pcVar1;
      }
      pcVar1 = (char *)FUN_000174c0(pcVar1 + 1,&local_8,0,0x3b);
      if (pcVar1 != (char *)0x0) {
        *param_2 = *param_2 + local_8;
        return pcVar1;
      }
    }
  }
  return (char *)0x0;
}



/* --- FUN_000175d0 @ 000175d0 --- */

int FUN_000175d0(byte *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  if (*param_1 == 0x2d) {
    bVar2 = true;
    param_1 = param_1 + 1;
  }
  else {
    if (((PTR_DAT_0002b058[(uint)*param_1 * 2] & 8) == 0) &&
       (bVar1 = *param_1, param_1 = param_1 + 1, bVar1 != 0x2b)) {
      return 0;
    }
    bVar2 = false;
  }
  iVar3 = FUN_00017530(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (bVar2) {
    *param_2 = -*param_2;
    return iVar3;
  }
  return iVar3;
}



/* --- FUN_00017640 @ 00017640 --- */

char * FUN_00017640(byte *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0x4a) {
    *param_2 = 0;
    param_1 = param_1 + 1;
    uVar3 = 0x16d;
    uVar2 = 1;
  }
  else {
    if (*param_1 == 0x4d) {
      *param_2 = 2;
      pcVar1 = (char *)FUN_000174c0(param_1 + 1,param_2 + 3,1,0xc);
      if (pcVar1 == (char *)0x0) {
        return (char *)0x0;
      }
      if (*pcVar1 != '.') {
        return (char *)0x0;
      }
      pcVar1 = (char *)FUN_000174c0(pcVar1 + 1,param_2 + 2,1,5);
      if (pcVar1 == (char *)0x0) {
        return (char *)0x0;
      }
      param_1 = (byte *)(pcVar1 + 1);
      if (*pcVar1 != '.') {
        return (char *)0x0;
      }
      uVar3 = 6;
    }
    else {
      if ((PTR_DAT_0002b058[(uint)*param_1 * 2] & 8) == 0) {
        return (char *)0x0;
      }
      *param_2 = 1;
      uVar3 = 0x16d;
    }
    uVar2 = 0;
  }
  pcVar1 = (char *)FUN_000174c0(param_1,param_2 + 1,uVar2,uVar3);
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*pcVar1 != '/') {
    param_2[4] = 0x1c20;
    return pcVar1;
  }
  pcVar1 = (char *)FUN_00017530(pcVar1 + 1,param_2 + 4);
  return pcVar1;
}



/* --- FUN_00017720 @ 00017720 --- */

int FUN_00017720(int param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  uint local_10;
  int local_8;
  
  local_8 = 0;
  if ((((param_2 & 3) == 0) && (param_2 != ((int)param_2 / 100) * 100)) ||
     (param_2 == ((int)param_2 / 400) * 400)) {
    local_8 = 1;
  }
  iVar6 = *param_3;
  if (iVar6 == 1) {
    unaff_EDI = param_3[1] * 0x15180 + param_1;
    goto LAB_00017acb;
  }
  if (iVar6 < 2) {
    if (((iVar6 == 0) && (unaff_EDI = (param_3[1] + -1) * 0x15180 + param_1, local_8 != 0)) &&
       (0x3b < param_3[1])) {
      unaff_EDI = unaff_EDI + 0x15180;
    }
    goto LAB_00017acb;
  }
  if (iVar6 != 2) goto LAB_00017acb;
  iVar6 = 0;
  uVar1 = param_3[3] - 1;
  if (0 < (int)uVar1) {
    iVar5 = local_8 * 0x30;
    uVar3 = uVar1 & 3;
    if (uVar3 != 0) {
      if (1 < uVar3) {
        if (2 < uVar3) {
          param_1 = param_1 + (&DAT_00017400)[local_8 * 0xc] * 0x15180;
          iVar5 = iVar5 + 4;
        }
        param_1 = param_1 + *(int *)((int)&DAT_00017400 + iVar5) * 0x15180;
        iVar5 = iVar5 + 4;
        iVar6 = (2 < uVar3) + 1;
      }
      param_1 = param_1 + *(int *)((int)&DAT_00017400 + iVar5) * 0x15180;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      if ((int)uVar1 <= iVar6) goto LAB_00017977;
    }
    do {
      param_1 = param_1 + *(int *)((int)&DAT_00017400 + iVar5) * 0x15180 +
                *(int *)(iVar5 + 0x17404) * 0x15180 + *(int *)(iVar5 + 0x17408) * 0x15180 +
                *(int *)(iVar5 + 0x1740c) * 0x15180;
      iVar5 = iVar5 + 0x10;
      iVar6 = iVar6 + 4;
    } while (iVar6 < (int)uVar1);
  }
LAB_00017977:
  local_10 = param_2;
  if (param_3[3] < 3) {
    local_10 = param_2 - 1;
  }
  iVar5 = (int)local_10 / 100;
  iVar2 = (int)local_10 % 100;
  iVar6 = (((param_3[3] + 9) % 0xc + 1) * 0x1a + -2) / 10 + 1 + iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  iVar4 = iVar5;
  if (iVar5 < 0) {
    iVar4 = iVar5 + 3;
  }
  iVar6 = (iVar6 + (iVar2 >> 2) + (iVar4 >> 2) + iVar5 * -2) % 7;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 7;
  }
  local_10 = param_3[1] - iVar6;
  if ((int)local_10 < 0) {
    local_10 = local_10 + 7;
  }
  iVar6 = 1;
  if (1 < param_3[2]) {
    do {
      iVar5 = local_10 + 7;
      if (*(int *)(param_3[3] * 4 + local_8 * 0x30 + 0x173fc) <= iVar5) break;
      iVar6 = iVar6 + 1;
      local_10 = iVar5;
    } while (iVar6 < param_3[2]);
  }
  unaff_EDI = param_1 + local_10 * 0x15180;
LAB_00017acb:
  return unaff_EDI + param_3[4] + param_4;
}



/* --- FUN_00017b00 @ 00017b00 --- */

undefined4 FUN_00017b00(char *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint local_60;
  int local_5c;
  int local_58;
  int local_4c;
  int *local_48;
  int local_44;
  uint local_40;
  char *local_3c;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  int local_c;
  int local_8;
  
  if (param_3 == 0) {
    pcVar4 = (char *)FUN_00017470(param_1);
    local_40 = (int)pcVar4 - (int)param_1;
    if ((int)local_40 < 3) {
      return 0xffffffff;
    }
  }
  else {
    uVar9 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_40 = ~uVar9 - 1;
    pcVar4 = param_1 + local_40;
    if (0x32 < local_40) {
      local_40 = 0x32;
    }
  }
  if (*pcVar4 == '\0') {
    return 0xffffffff;
  }
  pcVar4 = (char *)FUN_000175d0(pcVar4,&local_8);
  if (pcVar4 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar5 = FUN_000170f0(s_posixrules_00017ae6,param_2);
  if (iVar5 != 0) {
    *param_2 = 0;
  }
  if (*pcVar4 == '\0') {
    local_44 = 0;
    param_2[2] = 1;
    param_2[1] = 0;
    param_2[0x1d3] = -local_8;
    param_2[0x1d4] = 0;
    param_2[0x1d5] = 0;
  }
  else {
    pcVar6 = (char *)FUN_00017470(pcVar4);
    local_44 = (int)pcVar6 - (int)pcVar4;
    if (local_44 < 3) {
      return 0xffffffff;
    }
    if (((*pcVar6 == '\0') || (*pcVar6 == ',')) || (*pcVar6 == ';')) {
      local_c = local_8 + -0xe10;
    }
    else {
      pcVar6 = (char *)FUN_000175d0(pcVar6,&local_c);
      if (pcVar6 == (char *)0x0) {
        return 0xffffffff;
      }
    }
    local_3c = pcVar4;
    if ((*pcVar6 == ',') || (*pcVar6 == ';')) {
      pcVar4 = (char *)FUN_00017640(pcVar6 + 1,local_20);
      if (pcVar4 == (char *)0x0) {
        return 0xffffffff;
      }
      if (*pcVar4 != ',') {
        return 0xffffffff;
      }
      pcVar4 = (char *)FUN_00017640(pcVar4 + 1,local_34);
      if (pcVar4 == (char *)0x0) {
        return 0xffffffff;
      }
      if (*pcVar4 != '\0') {
        return 0xffffffff;
      }
      param_2[2] = 2;
      param_2[1] = 0x88;
      param_2[0x1d3] = -local_c;
      param_2[0x1d4] = 1;
      param_2[0x1d5] = local_40 + 1;
      param_2[0x1d7] = -local_8;
      param_2[0x1d8] = 0;
      param_2[0x1d9] = 0;
      local_48 = param_2 + 4;
      puVar12 = param_2 + 0x176;
      local_4c = 0;
      local_60 = 0x7b2;
      do {
        iVar5 = FUN_00017720(local_4c,local_60,local_20,local_8);
        iVar7 = FUN_00017720(local_4c,local_60,local_34,local_c);
        if (iVar7 < iVar5) {
          *local_48 = iVar7;
          *(undefined1 *)puVar12 = 1;
          local_48[1] = iVar5;
          *(undefined1 *)((int)puVar12 + 1) = 0;
        }
        else {
          *local_48 = iVar5;
          *(undefined1 *)puVar12 = 0;
          local_48[1] = iVar7;
          *(undefined1 *)((int)puVar12 + 1) = 1;
        }
        local_48 = local_48 + 2;
        puVar12 = (undefined4 *)((int)puVar12 + 2);
        iVar5 = 0;
        if ((((local_60 & 3) == 0) && (local_60 != ((int)local_60 / 100) * 100)) ||
           (local_60 == ((int)local_60 / 400) * 400)) {
          iVar5 = 1;
        }
        local_4c = local_4c + (&DAT_00017460)[iVar5] * 0x15180;
        local_60 = local_60 + 1;
      } while ((int)local_60 < 0x7f6);
    }
    else {
      if (*pcVar6 != '\0') {
        return 0xffffffff;
      }
      if (iVar5 != 0) {
        return 0xffffffff;
      }
      bVar3 = false;
      bVar2 = false;
      iVar5 = 0;
      local_60 = 0;
      local_5c = 0;
      if (0 < (int)param_2[2]) {
        local_58 = 0;
        iVar7 = iVar5;
        do {
          if (*(int *)(local_58 + 0x750 + (int)param_2) == 0) {
            iVar5 = *(int *)(local_58 + 0x74c + (int)param_2) + local_8;
            if ((bVar3) && (iVar7 != iVar5)) {
              return 0xffffffff;
            }
            *(int *)(local_58 + 0x74c + (int)param_2) = -local_8;
            *(undefined4 *)(local_58 + 0x754 + (int)param_2) = 0;
            bVar3 = true;
          }
          else {
            iVar8 = *(int *)(local_58 + 0x74c + (int)param_2) + local_c;
            if ((bVar2) && (local_60 != iVar8)) {
              return 0xffffffff;
            }
            *(int *)(local_58 + 0x74c + (int)param_2) = -local_c;
            *(uint *)(local_58 + 0x754 + (int)param_2) = local_40 + 1;
            bVar2 = true;
            iVar5 = iVar7;
            local_60 = iVar8;
          }
          local_58 = local_58 + 0x10;
          local_5c = local_5c + 1;
          iVar7 = iVar5;
        } while (local_5c < (int)param_2[2]);
      }
      if (!bVar2) {
        return 0xffffffff;
      }
      if (!bVar3) {
        return 0xffffffff;
      }
      iVar7 = 0;
      local_5c = 0;
      if (0 < (int)param_2[1]) {
        do {
          uVar10 = (uint)*(byte *)(local_5c + 0x5d8 + (int)param_2);
          uVar9 = iVar5;
          if ((iVar7 != 0) && (param_2[uVar10 * 4 + 0x1d6] == 0)) {
            uVar9 = local_60;
          }
          param_2[local_5c + 4] = param_2[local_5c + 4] + uVar9;
          iVar7 = param_2[uVar10 * 4 + 0x1d4];
          local_5c = local_5c + 1;
        } while (local_5c < (int)param_2[1]);
      }
    }
  }
  param_2[3] = local_40 + 1;
  if (local_44 != 0) {
    param_2[3] = param_2[3] + 1 + local_44;
  }
  if (0x33 < (uint)param_2[3]) {
    return 0xffffffff;
  }
  FUN_00008410(param_2 + 0x5d3,param_1,local_40);
  puVar11 = (undefined1 *)((int)(param_2 + 0x5d3) + local_40);
  *puVar11 = 0;
  puVar11 = puVar11 + 1;
  if (local_44 != 0) {
    FUN_00008410(puVar11,local_3c,local_44);
    puVar11[local_44] = 0;
  }
  return 0;
}



/* --- FUN_00017ff0 @ 00017ff0 --- */

void FUN_00017ff0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000170f0(&DAT_00016f50,param_1);
  if (iVar1 != 0) {
    FUN_00017b00(&DAT_00016f50,param_1,1);
  }
  return;
}



/* --- FUN_00018020 @ 00018020 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018020(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_0000b890(&DAT_0001801d);
  if (pcVar1 != (char *)0x0) {
    DAT_00038338 = 1;
    if (*pcVar1 == '\0') {
      _DAT_00035118 = 0;
      DAT_0003511c = 0;
      DAT_00035864 = 0;
      DAT_0003586c = 0;
      FUN_0000b828(&DAT_00036864,&DAT_00016f50);
    }
    else {
      iVar2 = FUN_000170f0(pcVar1,&DAT_00035118);
      if ((iVar2 != 0) &&
         ((*pcVar1 == ':' || (iVar2 = FUN_00017b00(pcVar1,&DAT_00035118,0), iVar2 != 0)))) {
        FUN_00017ff0(&DAT_00035118);
      }
    }
    FUN_00016f90();
    return;
  }
  FUN_000180f0();
  return;
}



/* --- FUN_000180f0 @ 000180f0 --- */

void FUN_000180f0(void)

{
  int iVar1;
  
  DAT_00038338 = 1;
  iVar1 = FUN_000170f0(0,&DAT_00035118);
  if (iVar1 != 0) {
    FUN_00017ff0(&DAT_00035118);
  }
  FUN_00016f90();
  return;
}



/* --- FUN_00018130 @ 00018130 --- */

void FUN_00018130(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  local_8 = *param_1;
  if (DAT_00038338 == 0) {
    FUN_00018020();
  }
  if ((DAT_0003511c == 0) || (local_8 < DAT_00035128)) {
    uVar1 = 0;
    iVar2 = DAT_00035868;
    while (iVar2 != 0) {
      uVar1 = uVar1 + 1;
      if (DAT_00035120 <= (int)uVar1) {
        uVar1 = 0;
        break;
      }
      iVar2 = (&DAT_00035868)[uVar1 * 4];
    }
  }
  else {
    iVar2 = 1;
    if (1 < DAT_0003511c) {
      do {
        if (local_8 < (&DAT_00035128)[iVar2]) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_0003511c);
    }
    uVar1 = (uint)*(byte *)(iVar2 + 0x356ef);
  }
  FUN_00018290(&local_8,(&DAT_00035864)[uVar1 * 4],&DAT_00035118,param_3);
  iVar2 = (&DAT_00035868)[uVar1 * 4];
  *(int *)(param_3 + 0x20) = iVar2;
  (&PTR_DAT_0002b5a8)[iVar2] = &DAT_00036864 + (&DAT_0003586c)[uVar1 * 4];
  return;
}



/* --- FUN_00018200 @ 00018200 --- */

undefined * FUN_00018200(undefined4 param_1)

{
  FUN_00018130(param_1,0,&DAT_000350a8);
  return &DAT_000350a8;
}



/* --- FUN_00018220 @ 00018220 --- */

void FUN_00018220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0003833c == 0) {
    DAT_0003833c = 1;
    FUN_00017ff0(&DAT_00036a28);
  }
  FUN_00018290(param_1,param_2,&DAT_00036a28,param_3);
  return;
}



/* --- FUN_00018270 @ 00018270 --- */

undefined * FUN_00018270(undefined4 param_1)

{
  FUN_00018220(param_1,0,&DAT_000350d0);
  return &DAT_000350d0;
}



/* --- FUN_00018290 @ 00018290 --- */

void FUN_00018290(int *param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_14;
  
  local_14 = 0;
  bVar1 = false;
  uVar2 = *param_3 - 1;
  if (-1 < (int)uVar2) {
    iVar6 = *param_1;
    uVar4 = ~uVar2 & 3;
    if (uVar4 == 0) goto LAB_000182e0;
    if (2 < uVar4) goto LAB_0001830d;
    if (1 < uVar4) goto LAB_000182fe;
    piVar5 = param_3 + uVar2 * 2 + 0x5e0;
    iVar3 = *piVar5;
    if (iVar6 < iVar3) {
      do {
        uVar2 = uVar2 - 1;
LAB_000182fe:
        piVar5 = param_3 + uVar2 * 2 + 0x5e0;
        if (*piVar5 <= iVar6) break;
        uVar2 = uVar2 - 1;
LAB_0001830d:
        piVar5 = param_3 + uVar2 * 2 + 0x5e0;
        if (*piVar5 <= iVar6) break;
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) goto LAB_00018353;
LAB_000182e0:
        piVar5 = param_3 + uVar2 * 2 + 0x5e0;
        if (*piVar5 <= iVar6) break;
        uVar2 = uVar2 - 1;
        piVar5 = param_3 + uVar2 * 2 + 0x5e0;
      } while (iVar6 < *piVar5);
      iVar3 = *piVar5;
    }
    if ((iVar3 == iVar6) &&
       (((bVar1 = false, uVar2 == 0 && (0 < piVar5[1])) || (param_3[uVar2 * 2 + 0x5df] < piVar5[1]))
       )) {
      bVar1 = true;
    }
    local_14 = piVar5[1];
  }
LAB_00018353:
  iVar6 = *param_1 / 0x15180;
  for (iVar3 = *param_1 % 0x15180 + (param_2 - local_14); iVar3 < 0; iVar3 = iVar3 + 0x15180) {
    iVar6 = iVar6 + -1;
  }
  for (; 0x1517f < iVar3; iVar3 = iVar3 + -0x15180) {
    iVar6 = iVar6 + 1;
  }
  param_4[2] = iVar3 / 0xe10;
  param_4[1] = (iVar3 % 0xe10) / 0x3c;
  *param_4 = (iVar3 % 0xe10) % 0x3c;
  if (bVar1) {
    *param_4 = *param_4 + 1;
  }
  iVar3 = (iVar6 + 4) % 7;
  param_4[6] = iVar3;
  if (iVar3 < 0) {
    param_4[6] = param_4[6] + 7;
  }
  uVar2 = 0x7b2;
  if (iVar6 < 0) {
    do {
      uVar2 = uVar2 - 1;
      iVar3 = 0;
      if ((((uVar2 & 3) == 0) && (uVar2 != ((int)uVar2 / 100) * 100)) ||
         (uVar2 == ((int)uVar2 / 400) * 400)) {
        iVar3 = 1;
      }
      iVar6 = iVar6 + (&DAT_00017460)[iVar3];
    } while (iVar6 < 0);
  }
  else {
    while( true ) {
      iVar3 = 0;
      if ((((uVar2 & 3) == 0) && (uVar2 != ((int)uVar2 / 100) * 100)) ||
         (uVar2 == ((int)uVar2 / 400) * 400)) {
        iVar3 = 1;
      }
      if (iVar6 < (int)(&DAT_00017460)[iVar3]) break;
      uVar2 = uVar2 + 1;
      iVar6 = iVar6 - (&DAT_00017460)[iVar3];
    }
  }
  param_4[5] = uVar2 - 0x76c;
  param_4[7] = iVar6;
  param_4[4] = 0;
  if ((int)(&DAT_00017400)[iVar3 * 0xc] <= iVar6) {
    do {
      iVar6 = iVar6 - (&DAT_00017400)[iVar3 * 0xc + param_4[4]];
      param_4[4] = param_4[4] + 1;
    } while ((int)(&DAT_00017400)[iVar3 * 0xc + param_4[4]] <= iVar6);
  }
  param_4[3] = iVar6 + 1;
  param_4[8] = 0;
  return;
}



/* --- FUN_000185d0 @ 000185d0 --- */

undefined * FUN_000185d0(undefined4 *param_1)

{
  FUN_0000f910(&DAT_000350f8,s_SunMonTueWedThuFriSatJanFebMarAp_0001856b + 0x39,
               s_SunMonTueWedThuFriSatJanFebMarAp_0001856b + param_1[6] * 3,
               s_SunMonTueWedThuFriSatJanFebMarAp_0001856b + param_1[4] * 3 + 0x15,param_1[3],
               param_1[2],param_1[1],*param_1,param_1[5] + 0x76c);
  return &DAT_000350f8;
}



/* --- FUN_00018620 @ 00018620 --- */

void FUN_00018620(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018200(param_1);
  FUN_000185d0(uVar1);
  return;
}



/* --- FUN_00018640 @ 00018640 --- */

int __regparm1 FUN_00018640(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (*param_3 < param_4) {
    if (*param_3 < 0) {
      *param_2 = *param_2 + -1;
      iVar1 = *param_3;
      *param_3 = param_4 + iVar1;
      if (param_4 + iVar1 < 0) {
        *param_2 = (*param_2 + -1) - -*param_3 / param_4;
        param_1 = -*param_3 / param_4;
        *param_3 = param_4 - -*param_3 % param_4;
      }
    }
  }
  else {
    *param_2 = *param_2 + *param_3 / param_4;
    param_1 = *param_3 / param_4;
    *param_3 = *param_3 % param_4;
  }
  return param_1;
}



/* --- FUN_000186b0 @ 000186b0 --- */

int FUN_000186b0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[5] - param_2[5];
  if ((((iVar1 == 0) && (iVar1 = param_1[4] - param_2[4], iVar1 == 0)) &&
      (iVar1 = param_1[3] - param_2[3], iVar1 == 0)) &&
     ((iVar1 = param_1[2] - param_2[2], iVar1 == 0 && (iVar1 = param_1[1] - param_2[1], iVar1 == 0))
     )) {
    iVar1 = *param_1 - *param_2;
  }
  return iVar1;
}



/* --- FUN_000186f0 @ 000186f0 --- */

int FUN_000186f0(uint *param_1,code *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  int local_60;
  int local_54;
  int local_50;
  undefined1 local_4c [32];
  int local_2c;
  uint local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  
  *param_4 = 0;
  puVar5 = param_1;
  puVar7 = &local_28;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  if (0x3d < local_28) {
    FUN_00018640(local_24,&local_28,0x3c);
  }
  FUN_00018640(local_20,local_24,0x3c);
  FUN_00018640(&local_1c,local_20,0x18);
  FUN_00018640(local_14,&local_18,0xc);
  uVar1 = local_28;
  for (; local_1c < 1; local_1c = local_1c + (&DAT_00017460)[iVar3]) {
    iVar3 = 0;
    uVar8 = local_14[0] + 0x76b;
    if ((((uVar8 & 3) == 0) && (uVar8 != ((int)uVar8 / 100) * 100)) ||
       (local_14[0] + 0x76b == ((local_14[0] + 0x76b) / 400) * 400)) {
      iVar3 = 1;
    }
    local_14[0] = local_14[0] + -1;
  }
  while( true ) {
    iVar3 = 0;
    uVar8 = local_14[0] + 0x76c;
    if ((((uVar8 & 3) == 0) && (uVar8 != ((int)uVar8 / 100) * 100)) ||
       (local_14[0] + 0x76c == ((local_14[0] + 0x76c) / 400) * 400)) {
      iVar3 = 1;
    }
    if (local_1c <= (int)(&DAT_00017400)[iVar3 * 0xc + local_18]) break;
    local_1c = local_1c - (&DAT_00017400)[iVar3 * 0xc + local_18];
    local_18 = local_18 + 1;
    if (0xb < local_18) {
      local_18 = 0;
      local_14[0] = local_14[0] + 1;
    }
  }
  local_28 = 0;
  iVar3 = 0;
  local_50 = 1;
  do {
    iVar3 = iVar3 + 1;
    iVar2 = local_50 * 2;
    local_50 = iVar2;
  } while (0 < iVar2);
  local_50 = 0;
  if (-1 < iVar2) {
    local_50 = 1 << ((byte)iVar3 & 0x1f);
  }
  while( true ) {
    (*param_2)(&local_50,param_3,local_4c);
    iVar2 = FUN_000186b0(local_4c,&local_28);
    if (iVar2 == 0) break;
    iVar4 = iVar3 + -1;
    if (iVar3 < 0) goto LAB_00018a04;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      local_50 = local_50 + -1;
    }
    else if (iVar2 < 1) {
      local_50 = local_50 + (1 << ((byte)iVar4 & 0x1f));
    }
    else {
      local_50 = local_50 - (1 << ((byte)iVar4 & 0x1f));
    }
  }
  if ((local_8 < 0) || (local_8 == local_2c)) {
LAB_00018a10:
    local_50 = local_50 + uVar1;
    (*param_2)(&local_50,param_3,param_1);
    *param_4 = 1;
  }
  else {
    puVar6 = &DAT_00036a28;
    if (param_2 == FUN_00018130) {
      puVar6 = &DAT_00035118;
    }
    iVar3 = 0;
    if (0 < *(int *)(puVar6 + 8)) {
      local_60 = 0;
      do {
        if ((local_8 == *(int *)(puVar6 + local_60 + 0x750)) &&
           (iVar2 = 0, 0 < *(int *)(puVar6 + 8))) {
          do {
            if (local_8 != *(int *)(puVar6 + iVar2 * 0x10 + 0x750)) {
              local_54 = (local_50 + *(int *)(puVar6 + iVar2 * 0x10 + 0x74c)) -
                         *(int *)(puVar6 + local_60 + 0x74c);
              (*param_2)(&local_54,param_3,local_4c);
              iVar4 = FUN_000186b0(local_4c,&local_28);
              if ((iVar4 == 0) && (local_8 == local_2c)) {
                local_50 = local_54;
                goto LAB_00018a10;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(puVar6 + 8));
        }
        local_60 = local_60 + 0x10;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(puVar6 + 8));
    }
LAB_00018a04:
    local_50 = -1;
  }
  return local_50;
}



/* --- FUN_00018a40 @ 00018a40 --- */

undefined4 FUN_00018a40(int *param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  if (1 < param_1[8]) {
    param_1[8] = 1;
  }
  uVar1 = FUN_000186f0(param_1,param_2,param_3,&local_8);
  if ((local_8 == 0) && (-1 < param_1[8])) {
    puVar2 = &DAT_00036a28;
    if (param_2 == FUN_00018130) {
      puVar2 = &DAT_00035118;
    }
    local_c = 0;
    if (0 < *(int *)(puVar2 + 8)) {
      local_18 = 0;
      do {
        if ((param_1[8] == *(int *)(puVar2 + local_18 + 0x750)) &&
           (local_10 = 0, 0 < *(int *)(puVar2 + 8))) {
          iVar3 = 0;
          do {
            if (param_1[8] != *(int *)(puVar2 + iVar3 + 0x750)) {
              *param_1 = *param_1 +
                         (*(int *)(puVar2 + iVar3 + 0x74c) - *(int *)(puVar2 + local_18 + 0x74c));
              param_1[8] = (uint)(param_1[8] == 0);
              uVar1 = FUN_000186f0(param_1,param_2,param_3,&local_8);
              if (local_8 != 0) {
                return uVar1;
              }
              *param_1 = *param_1 -
                         (*(int *)(puVar2 + iVar3 + 0x74c) - *(int *)(puVar2 + local_18 + 0x74c));
              param_1[8] = (uint)(param_1[8] == 0);
            }
            iVar3 = iVar3 + 0x10;
            local_10 = local_10 + 1;
          } while (local_10 < *(int *)(puVar2 + 8));
        }
        local_18 = local_18 + 0x10;
        local_c = local_c + 1;
      } while (local_c < *(int *)(puVar2 + 8));
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* --- FUN_00018b80 @ 00018b80 --- */

void FUN_00018b80(undefined4 param_1)

{
  FUN_00018a40(param_1,FUN_00018130,0);
  return;
}



/* --- FUN_00018ba0 @ 00018ba0 --- */

void FUN_00018ba0(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00018a40(param_1,FUN_00018220,0);
  return;
}



/* --- FUN_00018bc0 @ 00018bc0 --- */

char * FUN_00018bc0(int param_1)

{
  char *pcVar1;
  
  FUN_0000b860();
  if ((param_1 < 0) || (DAT_00012f10 <= param_1)) {
    FUN_0000f910(s_Unknown_error_000000000000000000_0002b5c0,s_Unknown_error__d_0002b5e4,param_1);
    pcVar1 = s_Unknown_error_000000000000000000_0002b5c0;
  }
  else {
    pcVar1 = (char *)FUN_0000c030(DAT_0002b050,1,param_1 + 1,
                                  (&PTR_s_Unknown_error_00012200)[param_1]);
  }
  return pcVar1;
}



/* --- FUN_00018c10 @ 00018c10 --- */

void FUN_00018c10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_60 [20];
  undefined1 *local_4c;
  undefined **local_28;
  
  FUN_0000aba0(local_60,0);
  local_28 = &PTR_FUN_0002bbd0;
  FUN_00027b48(local_60,param_1,param_2 + -1,param_1);
  FUN_00010af0(local_60,param_3,param_4);
  *local_4c = 0;
  return;
}



/* --- FUN_00018c60 @ 00018c60 --- */

undefined4 FUN_00018c60(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 auStack_30 [2];
  uint auStack_28 [2];
  undefined4 *local_14;
  uint local_10;
  undefined1 *local_c;
  
  uVar5 = 0;
  uVar4 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 & 3;
    if (uVar2 != 0) {
      if (1 < uVar2) {
        if (2 < uVar2) {
          uVar5 = param_2[1];
        }
        uVar5 = uVar5 + param_2[(uint)(2 < uVar2) * 2 + 1];
        uVar4 = (2 < uVar2) + 1;
      }
      uVar5 = uVar5 + param_2[uVar4 * 2 + 1];
      uVar4 = uVar4 + 1;
      if (param_3 <= uVar4) goto LAB_00018cbf;
    }
    do {
      uVar5 = uVar5 + param_2[uVar4 * 2 + 1] + param_2[uVar4 * 2 + 3] + param_2[uVar4 * 2 + 5] +
              param_2[uVar4 * 2 + 7];
      uVar4 = uVar4 + 4;
    } while (uVar4 < param_3);
  }
LAB_00018cbf:
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = -(uVar5 + 3 & 0xfffffffc);
    local_c = &stack0xffffffe0 + iVar1;
    uVar4 = 0;
    if (param_3 != 0) {
      local_14 = param_2;
      local_10 = uVar5;
      do {
        uVar2 = param_2[uVar4 * 2 + 1];
        if (local_10 < (uint)param_2[uVar4 * 2 + 1]) {
          uVar2 = local_10;
        }
        uVar3 = *local_14;
        *(uint *)((int)auStack_28 + iVar1 + 4) = uVar2;
        *(undefined4 *)((int)auStack_28 + iVar1) = uVar3;
        *(undefined1 **)((int)auStack_30 + iVar1 + 4) = local_c;
        *(undefined4 *)((int)auStack_30 + iVar1) = 0x18d0f;
        FUN_0000b700();
        local_c = local_c + uVar2;
        local_10 = local_10 - uVar2;
        if (uVar5 == 0) break;
        local_14 = local_14 + 2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
    }
    *(uint *)((int)auStack_28 + iVar1 + 4) = uVar5;
    *(undefined1 **)((int)auStack_28 + iVar1) = &stack0xffffffe0 + iVar1;
    *(undefined4 *)((int)auStack_30 + iVar1 + 4) = param_1;
    *(undefined4 *)((int)auStack_30 + iVar1) = 0x18d34;
    uVar3 = FUN_0000f8e4();
  }
  return uVar3;
}



/* --- FUN_00018d40 @ 00018d40 --- */

int FUN_00018d40(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00018d70 @ 00018d70 --- */

void FUN_00018d70(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000108c0(param_1);
  FUN_00027f20(uVar1);
  return;
}



/* --- FUN_00018d88 @ 00018d88 --- */

void FUN_00018d88(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    if (((param_3 & 3) == 1) && ((*(byte *)(param_1 + 1) & 1) != 0)) {
      param_2 = param_2 - (*(int *)(param_1 + 8) - *(int *)(param_1 + 4));
    }
    FUN_0000a490(param_1);
  }
  (**(code **)(*(int *)(param_1 + 0x38) + 0x38))(param_1,param_2,param_3);
  return;
}



/* --- FUN_00018dd8 @ 00018dd8 --- */

undefined4 FUN_00018dd8(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_18c [65];
  char local_14b [327];
  
  if (param_1 != 0) {
    iVar2 = FUN_00027f48(local_18c);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    uVar3 = 0xffffffff;
    pcVar4 = local_14b;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 <= param_2) {
      FUN_0000b828(param_1,local_14b);
      return 0;
    }
  }
  DAT_0002a0a0 = 0x16;
  return 0xffffffff;
}



/* --- FUN_00018e78 @ 00018e78 --- */

undefined4 *
FUN_00018e78(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint local_3c;
  uint local_38;
  uint local_34 [4];
  undefined4 local_24;
  
  piVar6 = (int *)0x0;
  FUN_0000b860();
  puVar2 = (undefined4 *)FUN_00004690(0xc);
  if ((puVar2 == (undefined4 *)0x0) || (piVar6 = (int *)FUN_00004690(100), piVar6 == (int *)0x0)) {
    uVar3 = FUN_0000c030(DAT_0002b050,10,1,s_out_of_memory_00018e48);
    FUN_00012f18(&DAT_0002b110,s_clnttcp_create___s_00018e56,uVar3);
    DAT_0002bc38 = 0xc;
    DAT_0002bc40 = DAT_0002a0a0;
    goto LAB_00019088;
  }
  if (*(short *)((int)param_1 + 2) == 0) {
    sVar1 = FUN_00027f70(param_1,param_2,param_3,6);
    if (sVar1 == 0) goto LAB_00019088;
    *(ushort *)((int)param_1 + 2) = CONCAT11((char)sVar1,(char)((ushort)sVar1 >> 8));
  }
  if (*param_4 < 0) {
    iVar4 = FUN_00004b68(2,1,6);
    *param_4 = iVar4;
    FUN_00028070(iVar4,0);
    if ((-1 < *param_4) && (iVar4 = FUN_0000a1d8(*param_4,param_1,0x10), -1 < iVar4)) {
      piVar6[1] = 1;
      goto LAB_00018f8f;
    }
    DAT_0002bc38 = 0xc;
    DAT_0002bc40 = DAT_0002a0a0;
  }
  else {
    piVar6[1] = 0;
LAB_00018f8f:
    *piVar6 = *param_4;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = *param_1;
    piVar6[6] = param_1[1];
    piVar6[7] = param_1[2];
    piVar6[8] = param_1[3];
    FUN_00029578(&local_3c,0);
    uVar5 = FUN_000108c0();
    local_34[0] = uVar5 ^ local_3c ^ local_38;
    local_34[1] = 0;
    local_34[2] = 2;
    local_34[3] = param_2;
    local_24 = param_3;
    FUN_00028168(piVar6 + 0x13,piVar6 + 0xc,0x18,0);
    iVar4 = FUN_000284e8(piVar6 + 0x13,local_34);
    if (iVar4 != 0) {
      iVar4 = (**(code **)(piVar6[0x14] + 0x10))(piVar6 + 0x13);
      piVar6[0x12] = iVar4;
      if (*(int *)(piVar6[0x14] + 0x1c) != 0) {
        (**(code **)(piVar6[0x14] + 0x1c))(piVar6 + 0x13);
      }
      FUN_00028960(piVar6 + 0x13,param_5,param_6,piVar6,FUN_00019458,FUN_00019588);
      puVar2[1] = &PTR_FUN_0002b5f8;
      puVar2[2] = piVar6;
      uVar3 = FUN_00028f00();
      *puVar2 = uVar3;
      return puVar2;
    }
    if (piVar6[1] == 0) goto LAB_00019088;
  }
  FUN_0000b748(*param_4);
LAB_00019088:
  FUN_00005058(piVar6);
  FUN_00005058(puVar2);
  return (undefined4 *)0x0;
}



/* --- FUN_000190a8 @ 000190a8 --- */

undefined4
FUN_000190a8(int *param_1,undefined4 param_2,code *param_3,undefined4 param_4,code *param_5,
            undefined4 param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40;
  int local_34 [3];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_18;
  code *local_14;
  
  iVar3 = param_1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x4c);
  piVar2 = (int *)(iVar3 + 0x30);
  local_40 = 2;
  if (*(int *)(iVar3 + 0x10) == 0) {
    *(int *)(iVar3 + 8) = param_7;
    *(int *)(iVar3 + 0xc) = param_8;
  }
  iVar6 = 0;
  if (((param_5 != (code *)0x0) || (param_7 != 0)) || (param_8 != 0)) {
    iVar6 = 1;
  }
  while( true ) {
    *puVar1 = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    iVar4 = (**(code **)(*(int *)(iVar3 + 0x50) + 0xc))
                      (puVar1,iVar3 + 0x30,*(undefined4 *)(iVar3 + 0x48));
    if (((iVar4 == 0) ||
        (iVar4 = (**(code **)(*(int *)(iVar3 + 0x50) + 4))(puVar1,&param_2), iVar4 == 0)) ||
       ((iVar4 = (**(code **)(*(int *)(*param_1 + 0x20) + 4))(*param_1,puVar1), iVar4 == 0 ||
        (iVar4 = (*param_3)(puVar1,param_4), iVar4 == 0)))) {
      if (*(int *)(iVar3 + 0x24) == 0) {
        *(undefined4 *)(iVar3 + 0x24) = 1;
      }
      FUN_00028e90(puVar1,1);
      goto LAB_000192ea;
    }
    iVar4 = FUN_00028e90(puVar1,iVar6);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x24) = 3;
      return 3;
    }
    if (iVar6 == 0) {
      return 0;
    }
    if ((param_7 == 0) && (param_8 == 0)) {
      *(undefined4 *)(iVar3 + 0x24) = 5;
      return 5;
    }
    *puVar1 = 1;
    do {
      while( true ) {
        local_28 = DAT_0002bc48;
        local_24 = DAT_0002bc4c;
        local_20 = DAT_0002bc50;
        local_18 = 0;
        local_14 = FUN_0001ae40;
        iVar4 = FUN_00028dc0(puVar1);
        if (iVar4 == 0) goto LAB_000192ea;
        iVar4 = FUN_00028488(puVar1,local_34);
        if (iVar4 != 0) break;
        if (*(int *)(iVar3 + 0x24) != 0) goto LAB_000192ea;
      }
    } while (local_34[0] !=
             CONCAT31(CONCAT21(CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8)),
                               (char)((uint)iVar5 >> 0x10)),(char)((uint)iVar5 >> 0x18)));
    FUN_00028678(local_34,iVar3 + 0x24);
    if (*(int *)(iVar3 + 0x24) == 0) break;
    local_40 = local_40 + -1;
    if ((local_40 == -1) ||
       (iVar5 = (**(code **)(*(int *)(*param_1 + 0x20) + 0xc))(*param_1), iVar5 == 0))
    goto LAB_000192ea;
  }
  iVar6 = (**(code **)(*(int *)(*param_1 + 0x20) + 8))(*param_1,&local_28);
  if (iVar6 == 0) {
    *(undefined4 *)(iVar3 + 0x24) = 7;
    *(undefined4 *)(iVar3 + 0x28) = 6;
  }
  else {
    iVar6 = (*param_5)(puVar1,param_6);
    if ((iVar6 == 0) && (*(int *)(iVar3 + 0x24) == 0)) {
      *(undefined4 *)(iVar3 + 0x24) = 2;
    }
  }
  if (local_24 != 0) {
    *puVar1 = 2;
    FUN_00028328(puVar1,&local_28);
  }
LAB_000192ea:
  return *(undefined4 *)(iVar3 + 0x24);
}



/* --- FUN_000192f8 @ 000192f8 --- */

void FUN_000192f8(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined4 *)(iVar1 + 0x24);
  param_2[1] = *(undefined4 *)(iVar1 + 0x28);
  param_2[2] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}



/* --- FUN_00019328 @ 00019328 --- */

void FUN_00019328(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x4c) = 2;
  (*param_2)(iVar1 + 0x4c,param_3);
  return;
}



/* --- FUN_00019358 @ 00019358 --- */

void FUN_00019358(void)

{
  return;
}



/* --- FUN_00019368 @ 00019368 --- */

undefined4 FUN_00019368(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 == 2) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    *param_3 = *(undefined4 *)(iVar1 + 8);
    param_3[1] = uVar2;
LAB_000193f8:
    uVar2 = 1;
  }
  else {
    if (param_2 < 3) {
      if (param_2 == 1) {
        uVar2 = param_3[1];
        *(undefined4 *)(iVar1 + 8) = *param_3;
        *(undefined4 *)(iVar1 + 0xc) = uVar2;
        *(undefined4 *)(iVar1 + 0x10) = 1;
        goto LAB_000193f8;
      }
    }
    else if (param_2 == 3) {
      *param_3 = *(undefined4 *)(iVar1 + 0x14);
      param_3[1] = *(undefined4 *)(iVar1 + 0x18);
      param_3[2] = *(undefined4 *)(iVar1 + 0x1c);
      param_3[3] = *(undefined4 *)(iVar1 + 0x20);
      goto LAB_000193f8;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* --- FUN_00019408 @ 00019408 --- */

void FUN_00019408(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1[1] != 0) {
    FUN_0000b748(*puVar1);
  }
  if (*(int *)(puVar1[0x14] + 0x1c) != 0) {
    (**(code **)(puVar1[0x14] + 0x1c))(puVar1 + 0x13);
  }
  FUN_00005058(puVar1);
  FUN_00005058(param_1);
  return;
}



/* --- FUN_00019458 @ 00019458 --- */

int FUN_00019458(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint local_4c;
  uint local_48;
  undefined4 local_44 [8];
  byte local_24 [32];
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    pbVar3 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3 = pbVar3 + 4;
    }
    local_24[(int)*param_1 >> 3] = local_24[(int)*param_1 >> 3] | '\x01' << (*param_1 & 7);
    do {
      pbVar3 = local_24;
      puVar4 = local_44;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        puVar4 = puVar4 + 1;
      }
      local_4c = param_1[2];
      local_48 = param_1[3];
      uVar2 = FUN_00029038(local_44,0,0,&local_4c);
      iVar1 = FUN_00010858(uVar2);
      if (iVar1 != -1) {
        if (iVar1 == 0) {
          param_1[9] = 5;
          return -1;
        }
        iVar1 = FUN_0000f8b8(*param_1,param_2,param_3);
        if (iVar1 != -1) {
          if (iVar1 != 0) {
            return iVar1;
          }
          param_1[10] = 0x68;
          param_1[9] = 4;
          return -1;
        }
        param_1[10] = DAT_0002a0a0;
        param_1[9] = 4;
        return -1;
      }
    } while (DAT_0002a0a0 == 4);
    param_1[9] = 4;
    param_1[10] = DAT_0002a0a0;
    iVar1 = -1;
  }
  return iVar1;
}



/* --- FUN_00019588 @ 00019588 --- */

int FUN_00019588(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  while( true ) {
    if (iVar2 < 1) {
      return param_3;
    }
    iVar1 = FUN_0000f8e4(*param_1,param_2,iVar2);
    if (iVar1 == -1) break;
    iVar2 = iVar2 - iVar1;
    param_2 = param_2 + iVar1;
  }
  param_1[10] = DAT_0002a0a0;
  param_1[9] = 3;
  return -1;
}



/* --- FUN_000195e0 @ 000195e0 --- */

undefined4 FUN_000195e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001b390(param_1,&stack0x00000008,0x100);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019620 @ 00019620 --- */

undefined4 FUN_00019620(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b390(param_1,param_2,0x40);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019650 @ 00019650 --- */

undefined4 FUN_00019650(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b390(param_1,param_2,0x100);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019690 @ 00019690 --- */

undefined4 FUN_00019690(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b210(param_1,param_2,param_2 + 4,0x400);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_000196d0 @ 000196d0 --- */

undefined4 FUN_000196d0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_000195e0(param_1,*param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_00019620(param_1,param_2 + 1), iVar1 != 0)) &&
     (iVar1 = FUN_00019690(param_1,param_2 + 2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019730 @ 00019730 --- */

undefined4 FUN_00019730(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_000195e0(param_1,*param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_00019620(param_1,param_2 + 1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019770 @ 00019770 --- */

undefined4 FUN_00019770(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_00019690(param_1,param_2 + 4), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_000197b0 @ 000197b0 --- */

undefined4 FUN_000197b0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_00019690(param_1,param_2 + 0xc), iVar1 != 0)) &&
     (iVar1 = FUN_00019690(param_1,param_2 + 4), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019800 @ 00019800 --- */

undefined4 FUN_00019800(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_00019650(param_1,param_2 + 4), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019840 @ 00019840 --- */

undefined4 FUN_00019840(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0001aef0(param_1,param_2 + 4), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019880 @ 00019880 --- */

undefined4 FUN_00019880(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b0b0(param_1,param_2);
  if ((iVar1 != 0) &&
     ((*param_2 == 0 || ((*param_2 == 1 && (iVar1 = FUN_000197b0(param_1,param_2 + 1), iVar1 != 0)))
      ))) {
    return 1;
  }
  return 0;
}



/* --- FUN_000198d0 @ 000198d0 --- */

undefined4 FUN_000198d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00019620(param_1,&stack0x00000008);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019900 @ 00019900 --- */

undefined4 FUN_00019900(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_000198d0(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_00029138(param_1,param_2 + 0x44,0x48,FUN_00019900), iVar1 != 0))
  {
    return 1;
  }
  return 0;
}



/* --- FUN_00019950 @ 00019950 --- */

undefined4 FUN_00019950(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_00029138(param_1,param_2 + 4,0x48,FUN_00019900), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_000199a0 @ 000199a0 --- */

undefined4 FUN_000199a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b130(param_1,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_000199d0 @ 000199d0 --- */

undefined4 FUN_000199d0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b150(param_1,param_2,4);
  if ((iVar1 != 0) && (iVar1 = FUN_0001b150(param_1,param_2 + 4,2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019a20 @ 00019a20 --- */

undefined4 FUN_00019a20(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_000199a0(param_1,param_2);
  if (iVar1 != 0) {
    if (*param_2 == 1) {
      iVar1 = FUN_000199d0(param_1,param_2 + 1);
    }
    else {
      if (*param_2 != 2) {
        return 0;
      }
      iVar1 = FUN_0001aef0(param_1,param_2 + 1);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* --- FUN_00019a90 @ 00019a90 --- */

undefined4 FUN_00019a90(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_000195e0(param_1,param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_000199d0(param_1,param_2 + 0x104), iVar1 != 0)) &&
     (iVar1 = FUN_0001afc0(param_1,param_2 + 0x10c), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019af0 @ 00019af0 --- */

undefined4 FUN_00019af0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00004bb0(&local_1c,0x18);
  do {
    iVar1 = FUN_00019880(param_1,&local_1c);
    if (iVar1 == 0) {
      FUN_0001ae20(FUN_00019880,&local_1c);
      *param_2 = -6;
      return 0;
    }
    if (local_1c == 0) {
      FUN_0001ae20(FUN_00019880,&local_1c);
      return 0;
    }
    if (local_18 != 1) {
      if (local_18 != 2) {
        FUN_0001ae20(FUN_00019880,&local_1c);
        *param_2 = local_18;
        return 1;
      }
      FUN_0001ae20(FUN_00019880,&local_1c);
      return 1;
    }
    iVar1 = FUN_00004690(local_10 + 1);
    FUN_00007dc0(local_14,iVar1,local_10);
    *(undefined1 *)(local_10 + iVar1) = 0;
    iVar2 = FUN_00004690(local_8 + 1);
    FUN_00007dc0(local_c,iVar2,local_8);
    *(undefined1 *)(local_8 + iVar2) = 0;
    FUN_0001ae20(FUN_00019880,&local_1c);
    iVar3 = (*DAT_00058c88)(1,iVar1,local_10,iVar2,local_8,DAT_00058c80);
    *param_2 = 1;
    FUN_00005058(iVar1);
    FUN_00005058(iVar2);
  } while (iVar3 == 0);
  return 1;
}



/* --- FUN_00019c60 @ 00019c60 --- */

undefined4 FUN_00019c60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b150(param_1,param_2,4);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019c90 @ 00019c90 --- */

undefined4 FUN_00019c90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b130(param_1,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* --- FUN_00019ce8 @ 00019ce8 --- */

undefined4 *
FUN_00019ce8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int *param_6
            ,int param_7,int param_8)

{
  int *piVar1;
  undefined3 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34 [4];
  undefined4 local_24;
  
  piVar6 = (int *)0x0;
  FUN_0000b860();
  puVar3 = (undefined4 *)FUN_00004690(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    uVar8 = param_7 + 3U & 0xfffffffc;
    uVar7 = param_8 + 3U & 0xfffffffc;
    piVar6 = (int *)FUN_00004690(uVar8 + 100 + uVar7);
    if (piVar6 != (int *)0x0) {
      piVar6[0x16] = (int)piVar6 + uVar7 + 0x60;
      FUN_00029578(&local_3c,0);
      if (*(short *)((int)param_1 + 2) == 0) {
        uVar2 = FUN_00027f70(param_1,param_2,param_3,0x11);
        if ((short)uVar2 == 0) goto LAB_00019f08;
        *(short *)((int)param_1 + 2) = (short)CONCAT31(uVar2,(char)((uint3)uVar2 >> 8));
      }
      puVar3[1] = &PTR_FUN_0002b610;
      puVar3[2] = piVar6;
      piVar6[2] = *param_1;
      piVar6[3] = param_1[1];
      piVar6[4] = param_1[2];
      piVar6[5] = param_1[3];
      piVar6[6] = 0x10;
      piVar6[7] = param_4;
      piVar6[8] = param_5;
      piVar6[9] = -1;
      piVar6[10] = -1;
      piVar6[0x15] = uVar8;
      piVar6[0x17] = uVar7;
      uVar7 = FUN_000108c0();
      local_34[0] = uVar7 ^ local_3c ^ local_38;
      local_34[1] = 0;
      local_34[2] = 2;
      local_34[3] = param_2;
      local_24 = param_3;
      piVar1 = piVar6 + 0xe;
      FUN_00028168(piVar1,piVar6[0x16],uVar8,0);
      iVar5 = FUN_000284e8(piVar1,local_34);
      if (iVar5 != 0) {
        iVar5 = (**(code **)(piVar6[0xf] + 0x10))(piVar1);
        piVar6[0x14] = iVar5;
        if (*param_6 < 0) {
          local_40 = 1;
          iVar5 = FUN_00004b68(2,2,0x11);
          *param_6 = iVar5;
          if (iVar5 < 0) {
            DAT_0002bc38 = 0xc;
            DAT_0002bc40 = DAT_0002a0a0;
            goto LAB_00019f08;
          }
          FUN_00028070(*param_6,0);
          FUN_000146e0(*param_6,0x5421,&local_40);
          piVar6[1] = 1;
        }
        else {
          piVar6[1] = 0;
        }
        *piVar6 = *param_6;
        uVar4 = FUN_00028f00();
        *puVar3 = uVar4;
        return puVar3;
      }
      goto LAB_00019f08;
    }
  }
  uVar4 = FUN_0000c030(DAT_0002b050,10,1,s_out_of_memory_00019cb8);
  FUN_00012f18(&DAT_0002b110,s_clntudp_create___s_00019cc6,uVar4);
  DAT_0002bc38 = 0xc;
  DAT_0002bc40 = DAT_0002a0a0;
LAB_00019f08:
  if (piVar6 != (int *)0x0) {
    FUN_00005058(piVar6);
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00005058(puVar3);
  }
  return (undefined4 *)0x0;
}



/* --- FUN_00019f38 @ 00019f38 --- */

void FUN_00019f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00019ce8(param_1,param_2,param_3,param_4,param_5,param_6,0x2260,0x2260);
  return;
}



/* --- FUN_00019f78 @ 00019f78 --- */

uint FUN_00019f78(int *param_1,undefined4 param_2,code *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,uint param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined1 local_9c [24];
  undefined1 local_84 [12];
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_54 [16];
  byte local_44 [32];
  undefined4 local_24 [8];
  
  puVar1 = (uint *)param_1[2];
  local_bc = 2;
  if (puVar1[10] == 0xffffffff) {
    local_c4 = param_7;
    local_c0 = param_8;
  }
  else {
    local_c4 = puVar1[9];
    local_c0 = puVar1[10];
  }
  local_b8 = 0;
  local_b4 = 0;
LAB_00019fe4:
  puVar7 = puVar1 + 0xe;
  puVar1[0xe] = 0;
  (**(code **)(puVar1[0xf] + 0x14))(puVar7,puVar1[0x14]);
  *(short *)puVar1[0x16] = *(short *)puVar1[0x16] + 1;
  iVar2 = (**(code **)(puVar1[0xf] + 4))(puVar7,&param_2);
  if (((iVar2 == 0) ||
      (iVar2 = (**(code **)(*(int *)(*param_1 + 0x20) + 4))(*param_1,puVar7), iVar2 == 0)) ||
     (iVar2 = (*param_3)(puVar7,param_4), iVar2 == 0)) {
    puVar1[0xb] = 1;
    return 1;
  }
  iVar2 = (**(code **)(puVar1[0xf] + 0x10))(puVar7);
  do {
    iVar3 = FUN_00027a88(*puVar1,puVar1[0x16],iVar2,0,puVar1 + 2,puVar1[6]);
    if (iVar3 != iVar2) {
      puVar1[0xc] = DAT_0002a0a0;
      puVar1[0xb] = 3;
      return 3;
    }
    if ((local_c4 == 0) && (local_c0 == 0)) break;
    local_78 = DAT_0002bc48;
    local_74 = DAT_0002bc4c;
    local_70 = DAT_0002bc50;
    local_68 = param_6;
    local_64 = param_5;
    pbVar6 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6 = pbVar6 + 4;
    }
    local_44[(int)*puVar1 >> 3] = local_44[(int)*puVar1 >> 3] | '\x01' << (*puVar1 & 7);
LAB_0001a150:
    while( true ) {
      pbVar6 = local_44;
      puVar8 = local_24;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        puVar8 = puVar8 + 1;
      }
      local_a4 = puVar1[7];
      local_a0 = puVar1[8];
      uVar4 = FUN_00029038(local_24,0,0,&local_a4);
      iVar3 = FUN_00010858(uVar4);
      if (iVar3 != -1) break;
      if (DAT_0002a0a0 != 4) {
        puVar1[0xc] = DAT_0002a0a0;
        puVar1[0xb] = 4;
        return 4;
      }
    }
    if (iVar3 != 0) {
      do {
        local_a8 = 0x10;
        uVar5 = FUN_00027ae8(*puVar1,puVar1 + 0x18,puVar1[0x17],0,local_54,&local_a8);
        if (-1 < (int)uVar5) {
          if ((uVar5 < 4) || (*(uint *)puVar1[0x16] != puVar1[0x18])) goto LAB_0001a150;
          FUN_00028168(local_9c,puVar1 + 0x18,uVar5,1);
          iVar2 = FUN_00028488(local_9c,local_84);
          if (iVar2 == 0) {
            puVar1[0xb] = 2;
          }
          else {
            FUN_00028678(local_84,puVar1 + 0xb);
            if (puVar1[0xb] == 0) {
              iVar2 = (**(code **)(*(int *)(*param_1 + 0x20) + 8))(*param_1,&local_78);
              if (iVar2 == 0) {
                puVar1[0xb] = 7;
                puVar1[0xc] = 6;
              }
              if (local_74 != 0) {
                *puVar7 = 2;
                FUN_00028328(puVar7,&local_78);
              }
            }
            else if ((0 < local_bc) &&
                    (iVar2 = (**(code **)(*(int *)(*param_1 + 0x20) + 0xc))(*param_1), iVar2 != 0))
            {
              local_bc = local_bc + -1;
              goto LAB_00019fe4;
            }
          }
          return puVar1[0xb];
        }
      } while (DAT_0002a0a0 == 4);
      if (DAT_0002a0a0 != 0xb) {
        puVar1[0xc] = DAT_0002a0a0;
        puVar1[0xb] = 4;
        return 4;
      }
      goto LAB_0001a150;
    }
    local_b8 = local_b8 + puVar1[7];
    for (local_b4 = local_b4 + puVar1[8]; 999999 < local_b4; local_b4 = local_b4 + -1000000) {
      local_b8 = local_b8 + 1;
    }
  } while (((int)local_b8 < (int)local_c4) || ((local_b8 == local_c4 && (local_b4 < (int)local_c0)))
          );
  puVar1[0xb] = 5;
  return 5;
}



/* --- FUN_0001a408 @ 0001a408 --- */

void FUN_0001a408(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined4 *)(iVar1 + 0x2c);
  param_2[1] = *(undefined4 *)(iVar1 + 0x30);
  param_2[2] = *(undefined4 *)(iVar1 + 0x34);
  return;
}



/* --- FUN_0001a438 @ 0001a438 --- */

void FUN_0001a438(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x38) = 2;
  (*param_2)(iVar1 + 0x38,param_3);
  return;
}



/* --- FUN_0001a468 @ 0001a468 --- */

void FUN_0001a468(void)

{
  return;
}



/* --- FUN_0001a478 @ 0001a478 --- */

undefined4 FUN_0001a478(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  switch(param_2) {
  case 1:
    uVar2 = param_3[1];
    *(undefined4 *)(iVar1 + 0x24) = *param_3;
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    break;
  case 2:
    uVar2 = *(undefined4 *)(iVar1 + 0x28);
    *param_3 = *(undefined4 *)(iVar1 + 0x24);
    param_3[1] = uVar2;
    break;
  case 3:
    *param_3 = *(undefined4 *)(iVar1 + 8);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc);
    param_3[2] = *(undefined4 *)(iVar1 + 0x10);
    param_3[3] = *(undefined4 *)(iVar1 + 0x14);
    break;
  case 4:
    uVar2 = param_3[1];
    *(undefined4 *)(iVar1 + 0x1c) = *param_3;
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    break;
  case 5:
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
    *param_3 = *(undefined4 *)(iVar1 + 0x1c);
    param_3[1] = uVar2;
    break;
  default:
    return 0;
  }
  return 1;
}



/* --- FUN_0001a548 @ 0001a548 --- */

void FUN_0001a548(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1[1] != 0) {
    FUN_0000b748(*puVar1);
  }
  if (*(int *)(puVar1[0xf] + 0x1c) != 0) {
    (**(code **)(puVar1[0xf] + 0x1c))(puVar1 + 0xe);
  }
  FUN_00005058(puVar1);
  FUN_00005058(param_1);
  return;
}



/* --- FUN_0001a590 @ 0001a590 --- */

int FUN_0001a590(void)

{
  if (DAT_00038340 == 0) {
    DAT_00038340 = FUN_00004690(0x100);
  }
  return DAT_00038340;
}



/* --- FUN_0001a640 @ 0001a640 --- */

int FUN_0001a640(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_0001a590();
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,&local_10);
  FUN_0000f910(iVar1,&DAT_0001a5b4,param_2);
  iVar2 = FUN_00007da0(iVar1);
  iVar2 = iVar1 + iVar2;
  uVar3 = FUN_0001aaa0(local_10);
  FUN_0000b828(iVar2,uVar3);
  iVar4 = FUN_00007da0(iVar2);
  iVar2 = iVar2 + iVar4;
  FUN_0000b860();
  switch(local_10) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    goto switchD_0001a6c1_caseD_0;
  case 3:
  case 4:
    uVar3 = FUN_0000c030(DAT_0002b050,1,local_c + 1,(&PTR_s_Unknown_error_00012200)[local_c]);
    uVar3 = FUN_0000c030(DAT_0002b050,9,1,s___errno____s_0001a5b9,uVar3);
    FUN_0000f910(iVar2,uVar3);
    iVar4 = FUN_00007da0(iVar2);
    iVar2 = iVar2 + iVar4;
    goto switchD_0001a6c1_caseD_0;
  case 6:
    pcVar6 = (char *)FUN_0000c030(DAT_0002b050,9,2,s___low_version____lu__high_versio_0001a5c6,
                                  local_c,local_8);
    break;
  case 7:
    iVar4 = FUN_0001ad70(local_c);
    uVar3 = FUN_0000c030(DAT_0002b050,9,3,s___why___0001a5ee);
    FUN_0000f910(iVar2,uVar3);
    iVar5 = FUN_00007da0(iVar2);
    iVar2 = iVar2 + iVar5;
    if (iVar4 == 0) {
      puVar7 = (undefined *)
               FUN_0000c030(DAT_0002b050,9,4,s__unknown_authentication_error_____0001a5fa,local_c);
    }
    else {
      puVar7 = &DAT_0001a5f7;
      local_c = iVar4;
    }
    FUN_0000f910(iVar2,puVar7,local_c);
    iVar4 = FUN_00007da0(iVar2);
    iVar2 = iVar2 + iVar4;
    goto switchD_0001a6c1_caseD_0;
  case 9:
    pcVar6 = (char *)FUN_0000c030(DAT_0002b050,9,2,s___low_version____lu__high_versio_0001a5c6,
                                  local_c,local_8);
    break;
  default:
    pcVar6 = s___s1____lu__s2____lu_0001a61e;
  }
  FUN_0000f910(iVar2,pcVar6,local_c,local_8);
  iVar4 = FUN_00007da0(iVar2);
  iVar2 = iVar2 + iVar4;
switchD_0001a6c1_caseD_0:
  FUN_0000f910(iVar2,&DAT_0001a633);
  return iVar1;
}



/* --- FUN_0001a890 @ 0001a890 --- */

void FUN_0001a890(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a640(param_1,param_2);
  FUN_00012f18(&DAT_0002b110,&DAT_0001a5f7,uVar1);
  return;
}



/* --- FUN_0001aaa0 @ 0001aaa0 --- */

void FUN_0001aaa0(int param_1)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  
  FUN_0000b860();
  uVar1 = 0;
  piVar2 = &DAT_0002b628;
  do {
    if (*piVar2 == param_1) {
      pcVar3 = *(char **)((int)&PTR_s_RPC__Success_0002b62c + uVar1);
      param_1 = param_1 + 1;
      goto LAB_0001ab24;
    }
    if (piVar2[2] == param_1) {
      pcVar3 = *(char **)((int)&PTR_s_RPC__Can_t_encode_arguments_0002b634 + uVar1);
      param_1 = param_1 + 1;
      goto LAB_0001ab24;
    }
    if (piVar2[4] == param_1) {
      pcVar3 = *(char **)((int)&PTR_s_RPC__Can_t_decode_result_0002b63c + uVar1);
      param_1 = param_1 + 1;
      goto LAB_0001ab24;
    }
    piVar2 = piVar2 + 6;
    uVar1 = uVar1 + 0x18;
  } while (uVar1 < 0x89);
  pcVar3 = s_RPC___unknown_error_code__0001aa77;
  param_1 = 0x13;
LAB_0001ab24:
  FUN_0000c030(DAT_0002b050,8,param_1,pcVar3);
  return;
}



/* --- FUN_0001ab40 @ 0001ab40 --- */

void FUN_0001ab40(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001aaa0(param_1);
  FUN_00012f18(&DAT_0002b110,&DAT_0001a5f7,uVar1);
  return;
}



/* --- FUN_0001ab70 @ 0001ab70 --- */

int FUN_0001ab70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0001a590();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0000b860();
    FUN_0000f910(iVar1,&DAT_0001a5b4,param_1);
    uVar2 = FUN_0001aaa0(DAT_0002bc38);
    FUN_00015a38(iVar1,uVar2);
    if (DAT_0002bc38 == 0xc) {
      FUN_00015a38(iVar1,&DAT_0001ab60);
      if ((DAT_0002bc40 < 1) || (DAT_00012f10 <= DAT_0002bc40)) {
        iVar3 = FUN_00007da0(iVar1,s_Error__d_0001ab64,DAT_0002bc40);
        FUN_0000f910(iVar3 + iVar1);
      }
      else {
        uVar2 = FUN_0000c030(DAT_0002b050,1,DAT_0002bc40 + 1,
                             (&PTR_s_Unknown_error_00012200)[DAT_0002bc40]);
        FUN_00015a38(iVar1,uVar2);
      }
    }
    else if (DAT_0002bc38 == 0xe) {
      FUN_00015a38(iVar1,&DAT_0001ab60);
      uVar2 = FUN_0001aaa0(DAT_0002bc3c);
      FUN_00015a38(iVar1,uVar2);
    }
    FUN_00015a38(iVar1,&DAT_0001a633);
  }
  return iVar1;
}



/* --- FUN_0001ac80 @ 0001ac80 --- */

void FUN_0001ac80(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ab70(param_1);
  FUN_00012f18(&DAT_0002b110,&DAT_0001a5f7,uVar1);
  return;
}



/* --- FUN_0001ad70 @ 0001ad70 --- */

undefined4 FUN_0001ad70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0000b860();
  uVar4 = 0;
  iVar3 = 0;
  piVar1 = &DAT_0002b6b8;
  do {
    if (*piVar1 == param_1) {
      uVar2 = *(undefined4 *)((int)&PTR_s_Authentication_OK_0002b6bc + iVar3);
      iVar3 = uVar4 + 1;
LAB_0001adf0:
      uVar2 = FUN_0000c030(DAT_0002b050,7,iVar3,uVar2);
      return uVar2;
    }
    if (piVar1[2] == param_1) {
      uVar2 = *(undefined4 *)((int)&PTR_s_Invalid_client_credential_0002b6c4 + iVar3);
      iVar3 = uVar4 + 2;
      goto LAB_0001adf0;
    }
    if (piVar1[4] == param_1) {
      uVar2 = *(undefined4 *)((int)&PTR_s_Server_rejected_credential_0002b6cc + iVar3);
      iVar3 = uVar4 + 3;
      goto LAB_0001adf0;
    }
    if (piVar1[6] == param_1) {
      uVar2 = *(undefined4 *)((int)&PTR_s_Invalid_client_verifier_0002b6d4 + iVar3);
      iVar3 = uVar4 + 4;
      goto LAB_0001adf0;
    }
    piVar1 = piVar1 + 8;
    iVar3 = iVar3 + 0x20;
    uVar4 = uVar4 + 4;
    if (7 < uVar4) {
      return 0;
    }
  } while( true );
}



/* --- FUN_0001ae20 @ 0001ae20 --- */

void FUN_0001ae20(code *param_1,undefined4 param_2)

{
  undefined4 local_1c [6];
  
  local_1c[0] = 2;
  (*param_1)(local_1c,param_2);
  return;
}



/* --- FUN_0001ae40 @ 0001ae40 --- */

undefined4 FUN_0001ae40(void)

{
  return 1;
}



/* --- FUN_0001ae50 @ 0001ae50 --- */

void FUN_0001ae50(undefined4 param_1,undefined4 param_2)

{
  FUN_0001ae90(param_1,param_2);
  return;
}



/* --- FUN_0001ae70 @ 0001ae70 --- */

void FUN_0001ae70(undefined4 param_1,undefined4 param_2)

{
  FUN_0001aef0(param_1,param_2);
  return;
}



/* --- FUN_0001ae90 @ 0001ae90 --- */

undefined4 FUN_0001ae90(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = (**(code **)(param_1[1] + 4))(param_1,param_2);
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar1 = (**(code **)param_1[1])(param_1,param_2);
    return uVar1;
  }
  if (*param_1 != 2) {
    return 0;
  }
  return 1;
}



/* --- FUN_0001aef0 @ 0001aef0 --- */

undefined4 FUN_0001aef0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 1) {
    uVar1 = (**(code **)param_1[1])(param_1,param_2);
    return uVar1;
  }
  if (*param_1 == 0) {
    uVar1 = (**(code **)(param_1[1] + 4))(param_1,param_2);
    return uVar1;
  }
  if (*param_1 != 2) {
    return 0;
  }
  return 1;
}



/* --- FUN_0001af50 @ 0001af50 --- */

undefined4 FUN_0001af50(int *param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    iVar2 = (**(code **)param_1[1])(param_1,&local_8);
    if (iVar2 != 0) {
      *param_2 = (short)local_8;
      return 1;
    }
  }
  else {
    if (iVar2 == 0) {
      local_8 = (int)*param_2;
      uVar1 = (**(code **)(param_1[1] + 4))(param_1,&local_8);
      return uVar1;
    }
    if (iVar2 == 2) {
      return 1;
    }
  }
  return 0;
}



/* --- FUN_0001afc0 @ 0001afc0 --- */

undefined4 FUN_0001afc0(int *param_1,ushort *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_8;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    iVar2 = (**(code **)param_1[1])(param_1,&local_8);
    if (iVar2 != 0) {
      *param_2 = (ushort)local_8;
      return 1;
    }
  }
  else {
    if (iVar2 == 0) {
      local_8 = (uint)*param_2;
      uVar1 = (**(code **)(param_1[1] + 4))(param_1,&local_8);
      return uVar1;
    }
    if (iVar2 == 2) {
      return 1;
    }
  }
  return 0;
}



/* --- FUN_0001b030 @ 0001b030 --- */

bool FUN_0001b030(undefined4 param_1,byte *param_2)

{
  int iVar1;
  uint local_8;
  
  local_8 = (uint)*param_2;
  iVar1 = FUN_0001ae50(param_1,&local_8);
  if (iVar1 != 0) {
    *param_2 = (byte)local_8;
  }
  return iVar1 != 0;
}



/* --- FUN_0001b070 @ 0001b070 --- */

bool FUN_0001b070(undefined4 param_1,byte *param_2)

{
  int iVar1;
  uint local_8;
  
  local_8 = (uint)*param_2;
  iVar1 = FUN_0001ae70(param_1,&local_8);
  if (iVar1 != 0) {
    *param_2 = (byte)local_8;
  }
  return iVar1 != 0;
}



/* --- FUN_0001b0b0 @ 0001b0b0 --- */

undefined4 FUN_0001b0b0(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_8;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    iVar2 = (**(code **)param_1[1])(param_1,&local_8);
    if (iVar2 != 0) {
      *param_2 = (uint)(local_8 != 0);
      return 1;
    }
  }
  else {
    if (iVar2 == 0) {
      local_8 = (uint)(*param_2 != 0);
      uVar1 = (**(code **)(param_1[1] + 4))(param_1,&local_8);
      return uVar1;
    }
    if (iVar2 == 2) {
      return 1;
    }
  }
  return 0;
}



/* --- FUN_0001b130 @ 0001b130 --- */

void FUN_0001b130(undefined4 param_1,undefined4 param_2)

{
  FUN_0001ae90(param_1,param_2);
  return;
}



/* --- FUN_0001b150 @ 0001b150 --- */

undefined4 FUN_0001b150(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar3 = 0;
    if ((param_3 & 3) != 0) {
      iVar3 = 4 - (param_3 & 3);
    }
    if (*param_1 == 1) {
      iVar1 = (**(code **)(param_1[1] + 8))(param_1,param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar3 != 0) {
        uVar2 = (**(code **)(param_1[1] + 8))(param_1,&DAT_00038348,iVar3);
        return uVar2;
      }
    }
    else if (*param_1 == 0) {
      iVar1 = (**(code **)(param_1[1] + 0xc))(param_1,param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar3 != 0) {
        uVar2 = (**(code **)(param_1[1] + 0xc))(param_1,&DAT_0002b6f8,iVar3);
        return uVar2;
      }
    }
    else if (*param_1 != 2) {
      return 0;
    }
  }
  return 1;
}



/* --- FUN_0001b210 @ 0001b210 --- */

undefined4 FUN_0001b210(int *param_1,int *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *param_2;
  FUN_0000b860();
  iVar2 = FUN_0001ae70(param_1,param_3);
  if ((iVar2 == 0) || ((uVar1 = *param_3, param_4 < uVar1 && (*param_1 != 2)))) {
LAB_0001b2e0:
    uVar4 = 0;
  }
  else {
    iVar2 = *param_1;
    if (iVar2 == 1) {
      if (uVar1 == 0) {
        return 1;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_00004690(uVar1);
        *param_2 = iVar3;
        if (iVar3 == 0) {
          uVar4 = FUN_0000c030(DAT_0002b050,10,1,s_out_of_memory_0001b1ef);
          FUN_00012f18(&DAT_0002b110,s_xdr_bytes___s_0001b1fd,uVar4);
          goto LAB_0001b2e0;
        }
      }
    }
    else if (iVar2 != 0) {
      if (iVar2 == 2) {
        if (iVar3 == 0) {
          return 1;
        }
        FUN_00005058(iVar3);
        *param_2 = 0;
        return 1;
      }
      goto LAB_0001b2e0;
    }
    uVar4 = FUN_0001b150(param_1,iVar3,uVar1);
  }
  return uVar4;
}



/* --- FUN_0001b2f0 @ 0001b2f0 --- */

void FUN_0001b2f0(undefined4 param_1,int param_2)

{
  FUN_0001b210(param_1,param_2 + 4,param_2,0x400);
  return;
}



/* --- FUN_0001b310 @ 0001b310 --- */

undefined4
FUN_0001b310(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001b130(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = param_4[1];
    while (iVar1 != 0) {
      if (*param_4 == *param_2) {
        uVar2 = (*(code *)param_4[1])(param_1,param_3,0xffffffff);
        return uVar2;
      }
      iVar1 = param_4[3];
      param_4 = param_4 + 2;
    }
    if (param_5 != (code *)0x0) {
      uVar2 = (*param_5)(param_1,param_3,0xffffffff);
      return uVar2;
    }
  }
  return 0;
}



/* --- FUN_0001b390 @ 0001b390 --- */

undefined4 FUN_0001b390(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_8;
  
  iVar2 = *param_2;
  FUN_0000b860();
  if (*param_1 == 0) {
LAB_0001b3b9:
    local_8 = FUN_00007da0(iVar2);
  }
  else if (*param_1 == 2) {
    if (iVar2 == 0) {
      return 1;
    }
    goto LAB_0001b3b9;
  }
  iVar1 = FUN_0001ae70(param_1,&local_8);
  if ((iVar1 == 0) || (param_3 < local_8)) {
LAB_0001b480:
    uVar3 = 0;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 1) {
      if (local_8 + 1 == 0) {
        return 1;
      }
      if (iVar2 == 0) {
        iVar2 = FUN_00004690(local_8 + 1);
        *param_2 = iVar2;
        if (iVar2 == 0) {
          uVar3 = FUN_0000c030(DAT_0002b050,10,1,s_out_of_memory_0001b1ef);
          FUN_00012f18(&DAT_0002b110,s_xdr_string___s_0001b376,uVar3);
          goto LAB_0001b480;
        }
      }
      *(undefined1 *)(local_8 + iVar2) = 0;
    }
    else if (iVar1 != 0) {
      if (iVar1 == 2) {
        FUN_00005058(iVar2);
        *param_2 = 0;
        return 1;
      }
      goto LAB_0001b480;
    }
    uVar3 = FUN_0001b150(param_1,iVar2,local_8);
  }
  return uVar3;
}



/* --- FUN_0001b490 @ 0001b490 --- */

undefined4 FUN_0001b490(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b390(param_1,param_2,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



/* --- FUN_0001b4c0 @ 0001b4c0 --- */

undefined4 FUN_0001b4c0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_18c [325];
  char local_47 [67];
  
  if (param_1 != 0) {
    iVar2 = FUN_00027f48(local_18c);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    uVar3 = 0xffffffff;
    pcVar4 = local_47;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 <= param_2) {
      FUN_0000b828(param_1,local_47);
      return 0;
    }
  }
  DAT_0002a0a0 = 0x16;
  return 0xffffffff;
}



/* --- FUN_0001b530 @ 0001b530 --- */

undefined4 FUN_0001b530(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_60 [20];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined **local_28;
  
  FUN_0000aba0(local_60,0);
  local_28 = &PTR_FUN_0002bbd0;
  FUN_00027b48(local_60,param_1,0xffffffff,param_1);
  uVar1 = FUN_00010af0(local_60,param_2,param_3);
  if (local_4c < local_48) {
    *local_4c = 0;
  }
  else {
    FUN_0000a4d0(local_60,0);
  }
  return uVar1;
}



/* --- FUN_0001b598 @ 0001b598 --- */

int FUN_0001b598(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint local_8;
  
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
    DAT_0002a0a0 = 0x16;
    return -1;
  }
  iVar2 = FUN_000291b0(param_3);
  if (iVar2 != 0) {
    return -1;
  }
  if (*param_1 == 0) {
LAB_0001b5ed:
    pcVar3 = (char *)FUN_00004690(0x100);
  }
  else {
    if (1 < *param_2) {
      pcVar3 = (char *)*param_1;
      goto LAB_0001b63d;
    }
    if (*param_1 == 0) goto LAB_0001b5ed;
    pcVar3 = (char *)FUN_0001b6e8(*param_1,0x100);
  }
  if (pcVar3 == (char *)0x0) {
    return -1;
  }
  *param_1 = (int)pcVar3;
  *param_2 = 0x100;
LAB_0001b63d:
  local_8 = *param_2;
  iVar2 = 0;
  pcVar6 = pcVar3;
  do {
    uVar5 = 0x101;
    if (iVar2 < 1) {
      uVar5 = local_8;
    }
    iVar4 = FUN_000155a0(pcVar6,uVar5,param_3);
    if (iVar4 == 0) {
      if (iVar2 == 0) {
        return -1;
      }
      return iVar2;
    }
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = iVar2 + -1 + ~uVar5;
    if (iVar2 < (int)(local_8 - 1)) {
      return iVar2;
    }
    if (pcVar3[iVar2 + -1] == '\n') {
      return iVar2;
    }
    local_8 = local_8 + 0x100;
    pcVar3 = (char *)FUN_0001b6e8(pcVar3,local_8);
    if (pcVar3 == (char *)0x0) {
      return -1;
    }
    *param_1 = (int)pcVar3;
    *param_2 = local_8;
    pcVar6 = pcVar3 + iVar2;
  } while( true );
}



/* --- FUN_0001b6e8 @ 0001b6e8 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001b6e8(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = DAT_00038b84;
  iVar2 = DAT_00038b80;
  if (param_1 == 0) {
    iVar2 = FUN_00004690(param_2);
  }
  else if (param_2 == 0) {
    FUN_00005058(param_1);
    iVar2 = FUN_00004690(0);
  }
  else {
    iVar6 = param_1 - _DAT_00038bf0;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    iVar3 = (iVar6 >> 0xc) + 1;
    iVar6 = *(int *)(DAT_00038b80 + iVar3 * 0xc);
    if (iVar6 == 0) {
      if (param_2 < 0x801) {
        iVar2 = FUN_00004690(param_2);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_0000b700(iVar2,param_1,param_2);
        FUN_00004d08(param_1);
        return iVar2;
      }
      uVar7 = param_2 + 0xfff >> 0xc;
      iVar6 = iVar3 * 0xc;
      if ((int)uVar7 < *(int *)(DAT_00038b80 + 4 + iVar6)) {
        iVar4 = (iVar3 + uVar7) * 0xc;
        *(undefined4 *)(DAT_00038b80 + iVar4) = 0;
        *(uint *)(iVar2 + 4 + iVar4) = *(int *)(iVar2 + 4 + iVar6) - uVar7;
        *(uint *)(iVar2 + 4 + iVar6) = uVar7;
        FUN_00004d08((iVar3 + uVar7 + -1) * 0x1000 + _DAT_00038bf0);
        return param_1;
      }
      if (*(uint *)(DAT_00038b80 + 4 + iVar3 * 0xc) == uVar7) {
        return param_1;
      }
      iVar2 = *(int *)(DAT_00038b80 + 4 + iVar3 * 0xc);
      DAT_00038b84 = 0;
      FUN_00004d08(param_1);
      DAT_00038b84 = uVar5;
      iVar6 = FUN_00004690(param_2);
      if (iVar6 != 0) {
        if (param_1 == iVar6) {
          return iVar6;
        }
        FUN_00010928(iVar6,param_1,iVar2 << 0xc);
        return iVar6;
      }
      if (DAT_00038b88 == iVar3) {
        FUN_00004690(iVar2 << 0xc);
      }
      else {
        uVar5 = FUN_00004690((iVar3 - DAT_00038b88) * 0x1000);
        FUN_00004690(iVar2 << 0xc);
        FUN_00004d08(uVar5);
      }
    }
    else {
      bVar1 = (byte)iVar6;
      if (((uint)(1 << (bVar1 - 1 & 0x1f)) < param_2) && (param_2 <= (uint)(1 << (bVar1 & 0x1f)))) {
        return param_1;
      }
      iVar2 = FUN_00004690(param_2);
      if (iVar2 != 0) {
        if (param_2 >> (bVar1 & 0x1f) != 0) {
          param_2 = 1 << (bVar1 & 0x1f);
        }
        FUN_0000b700(iVar2,param_1,param_2);
        FUN_00005058(param_1);
        return iVar2;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* --- FUN_0001b948 @ 0001b948 --- */

/* WARNING: Type propagation algorithm not settling */

int FUN_0001b948(longdouble param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7,undefined4 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int local_5c;
  undefined4 local_58;
  char local_4c;
  char local_48;
  char *local_44;
  int local_40;
  int local_3c;
  int local_34;
  int local_2c;
  uint local_28;
  int local_1c;
  int local_18;
  int local_14 [3];
  char local_8 [4];
  
  iVar9 = 0;
  uVar6 = param_6 & 0xe;
  bVar10 = false;
  local_28 = param_6 >> 8 & 1;
  local_2c = 0;
  local_48 = '\0';
  switch(param_3) {
  case 0x45:
  case 0x65:
    local_48 = (char)param_3;
    local_2c = 2;
    if (param_5 != 999) {
      param_5 = param_5 + 1;
      break;
    }
    goto LAB_0001baaa;
  case 0x47:
  case 0x67:
    local_48 = 'E';
    if (param_3 == 0x67) {
      local_48 = 'e';
    }
    if (param_5 == 0) {
      param_5 = 1;
    }
    bVar10 = (param_6 & 0x100) == 0;
    param_3 = 0x67;
    local_2c = 2;
    break;
  case 0x66:
    local_2c = 3;
  }
  if (param_5 == 999) {
LAB_0001baaa:
    if (local_2c != 3) {
      local_2c = 0;
    }
  }
  if ((param_6 & 0x20000) == 0) {
    local_58 = SUB84((double)param_1,0);
    local_40 = FUN_00023668(local_58,(short)((ulonglong)(double)param_1 >> 0x20),local_2c,param_5,
                            local_14,&local_18,&local_1c);
  }
  else {
    local_40 = FUN_0001ec40(SUB104(param_1,0),(int)((unkuint10)param_1 >> 0x20),
                            (short)((unkuint10)param_1 >> 0x40),local_2c,param_5,local_14,&local_18,
                            &local_1c);
  }
  iVar2 = local_1c - local_40;
  local_34 = param_5;
  if (local_2c == 0) {
    local_34 = iVar2;
  }
  local_44 = &stack0xfffffffc;
  if (((local_2c != 3) && (local_44 = &stack0xfffffffc, local_14[0] != 9999)) &&
     (((local_5c = local_14[0] + -1, param_3 != 0x67 && (param_3 != 0x46)) ||
      ((local_5c < -4 || (local_44 = &stack0xfffffffc, local_34 <= local_5c)))))) {
    if (local_5c < 0) {
      local_4c = '-';
      local_5c = -local_5c;
      pcVar1 = &stack0xfffffffc;
    }
    else {
      local_4c = '+';
      pcVar1 = &stack0xfffffffc;
    }
    do {
      local_44 = pcVar1;
      iVar4 = local_5c / 10;
      local_58._0_1_ = (char)(local_5c % 10);
      local_44[-1] = (char)local_58 + '0';
      local_5c = iVar4;
      pcVar1 = local_44 + -1;
    } while (9 < iVar4);
    local_5c._0_1_ = (char)iVar4;
    local_44[-2] = (char)local_5c + '0';
    local_44[-3] = local_4c;
    local_44 = local_44 + -4;
    *local_44 = local_48;
  }
  puVar3 = &stack0xfffffffc + -(int)local_44;
  if (local_2c == 1) {
    local_34 = 1;
  }
  if (puVar3 != (undefined1 *)0x0) {
    local_14[0] = 1;
  }
  if (local_14[0] == 9999) {
    local_34 = 0;
    local_28 = 0;
    local_14[0] = iVar2;
  }
  if (bVar10) {
    local_34 = 0;
LAB_0001bc61:
    if (local_14[0] < iVar2) goto LAB_0001bc69;
  }
  else {
    if (param_3 == 0x66) {
      if (local_14[0] < iVar2) {
        local_34 = local_34 - (iVar2 - local_14[0]);
      }
    }
    else {
      iVar4 = iVar2;
      if ((puVar3 == (undefined1 *)0x0) && (iVar2 <= local_14[0])) {
        iVar4 = local_14[0];
      }
      local_34 = local_34 - iVar4;
    }
    if (local_34 < 0) {
      local_34 = 0;
    }
    if (local_34 == 0) goto LAB_0001bc61;
LAB_0001bc69:
    local_28 = 1;
  }
  if (param_7 == 0) {
    uVar8 = -(uint)(local_18 != 0) & 0x2d;
LAB_0001bcc8:
    iVar4 = local_34;
    if (uVar8 == 0) goto LAB_0001bcde;
  }
  else {
    if (param_7 != 0x2b) {
      uVar8 = 0x20;
      if (local_18 != 0) {
        uVar8 = 0x2d;
      }
      goto LAB_0001bcc8;
    }
    uVar8 = 0x2b;
    if (local_18 == 0) goto LAB_0001bcc8;
    uVar8 = 0x2d;
  }
  iVar4 = local_34 + 1;
LAB_0001bcde:
  puVar7 = puVar3 + iVar2 + local_28 + iVar4;
  if (iVar2 < local_14[0]) {
    puVar7 = puVar7 + (local_14[0] - iVar2);
  }
  else if (local_14[0] < 1) {
    puVar7 = puVar7 + (1 - local_14[0]);
  }
  local_3c = 0;
  if ((int)puVar7 < param_4) {
    local_3c = param_4 - (int)puVar7;
  }
  if ((((0 < local_3c) && (uVar6 != 2)) && (uVar6 != 8)) &&
     (iVar4 = FUN_0001c028(param_2,param_8,local_3c), iVar9 = local_3c, iVar4 != local_3c)) {
    return -1;
  }
  if (uVar8 != 0) {
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x18)) {
      **(undefined1 **)(param_2 + 0x14) = (char)uVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    else {
      uVar8 = FUN_0000a4d0(param_2,uVar8);
    }
    if ((int)uVar8 < 0) {
      return -1;
    }
    iVar9 = iVar9 + 1;
  }
  if ((uVar6 == 8) && (0 < local_3c)) {
    iVar9 = iVar9 + local_3c;
    iVar4 = FUN_0001c028(param_2,param_8,local_3c);
    if (iVar4 != local_3c) {
      return -1;
    }
  }
  iVar4 = local_14[0];
  if (local_14[0] < 1) {
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x18)) {
      **(undefined1 **)(param_2 + 0x14) = 0x30;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    else {
      iVar4 = FUN_0000a4d0(param_2,0x30);
      if (iVar4 < 0) {
        return -1;
      }
    }
    iVar9 = iVar9 + 1;
    if (local_28 != 0) {
      if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x18)) {
        **(undefined1 **)(param_2 + 0x14) = 0x2e;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      }
      else {
        iVar4 = FUN_0000a4d0(param_2,0x2e);
        if (iVar4 < 0) {
          return -1;
        }
      }
      iVar5 = -local_14[0];
      iVar4 = FUN_0001c028(param_2,0x30,iVar5);
      if (iVar4 != iVar5) {
        return -1;
      }
      iVar9 = iVar5 + 1 + iVar9 + iVar2;
      iVar4 = (**(code **)(*(int *)(param_2 + 0x38) + 8))(param_2,local_40,iVar2);
      if (iVar4 != iVar2) {
        return -1;
      }
    }
  }
  else {
    if (iVar2 < local_14[0]) {
      iVar4 = (**(code **)(*(int *)(param_2 + 0x38) + 8))(param_2,local_40,iVar2);
      if (iVar4 != iVar2) {
        return -1;
      }
      iVar4 = local_14[0] - iVar2;
      iVar9 = iVar9 + iVar2 + iVar4;
      iVar5 = FUN_0001c028(param_2,0x30,iVar4);
    }
    else {
      iVar9 = iVar9 + local_14[0];
      iVar5 = (**(code **)(*(int *)(param_2 + 0x38) + 8))(param_2,local_40,local_14[0]);
    }
    if (iVar5 != iVar4) {
      return -1;
    }
    if (local_28 != 0) {
      if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x18)) {
        **(undefined1 **)(param_2 + 0x14) = 0x2e;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      }
      else {
        iVar4 = FUN_0000a4d0(param_2,0x2e);
        if (iVar4 < 0) {
          return -1;
        }
      }
      iVar9 = iVar9 + 1;
      if (local_14[0] < iVar2) {
        iVar2 = iVar2 - local_14[0];
        iVar9 = iVar9 + iVar2;
        iVar4 = (**(code **)(*(int *)(param_2 + 0x38) + 8))(param_2,local_40 + local_14[0],iVar2);
        if (iVar4 != iVar2) {
          return -1;
        }
      }
    }
  }
  iVar9 = iVar9 + local_34;
  iVar2 = FUN_0001c028(param_2,0x30,local_34);
  if (iVar2 == local_34) {
    if (puVar3 != (undefined1 *)0x0) {
      iVar9 = iVar9 + (int)puVar3;
      puVar7 = (undefined1 *)(**(code **)(*(int *)(param_2 + 0x38) + 8))(param_2,local_44,puVar3);
      if (puVar7 != puVar3) {
        return -1;
      }
    }
    if (uVar6 != 2) {
      return iVar9;
    }
    if (local_3c < 1) {
      return iVar9;
    }
    iVar2 = FUN_0001c028(param_2,param_8,local_3c);
    if (iVar2 == local_3c) {
      return iVar9 + local_3c;
    }
  }
  return -1;
}



/* --- FUN_0001bfc8 @ 0001bfc8 --- */

char * FUN_0001bfc8(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    bVar2 = false;
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      bVar2 = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!bVar2);
    if (!bVar2) {
      pcVar1 = (char *)0x1;
    }
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}



/* --- FUN_0001c028 @ 0001c028 --- */

int FUN_0001c028(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar3 = 0;
  if (param_2 == 0x20) {
    puVar2 = &DAT_0001c008;
  }
  else if (param_2 == 0x30) {
    puVar2 = &DAT_0001c018;
  }
  else {
    local_14 = (undefined1)param_2;
    puVar2 = &local_14;
    local_13 = local_14;
    local_12 = local_14;
    local_11 = local_14;
    local_10 = local_14;
    local_f = local_14;
    local_e = local_14;
    local_d = local_14;
    local_c = local_14;
    local_b = local_14;
    local_a = local_14;
    local_9 = local_14;
    local_8 = local_14;
    local_7 = local_14;
    local_6 = local_14;
    local_5 = local_14;
  }
  while( true ) {
    if (param_3 < 0x10) {
      if (0 < param_3) {
        iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,puVar2,param_3);
        iVar3 = iVar3 + iVar1;
      }
      return iVar3;
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 8))(param_1,puVar2,0x10);
    iVar3 = iVar3 + iVar1;
    if (iVar1 != 0x10) break;
    param_3 = param_3 + -0x10;
  }
  return iVar3;
}



/* --- FUN_0001c0d8 @ 0001c0d8 --- */

undefined4 FUN_0001c0d8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00018d40(2,&local_8,&local_c);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return local_c;
}



/* --- FUN_0001c110 @ 0001c110 --- */

int FUN_0001c110(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0001c140 @ 0001c140 --- */

int FUN_0001c140(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_0001c168 @ 0001c168 --- */

undefined4 FUN_0001c168(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 local_44 [8];
  ushort local_3c;
  int local_2c;
  
  if ((int)param_1[0xf] < 0) {
LAB_0001c18e:
    bVar4 = false;
  }
  else {
    iVar1 = (**(code **)(param_1[0xe] + 0x30))(param_1,local_44);
    if (iVar1 < 0) goto LAB_0001c18e;
    bVar4 = (local_3c & 0xf000) == 0x2000;
    iVar1 = local_2c;
    if (local_2c != 0) goto LAB_0001c1b6;
  }
  iVar1 = 0x400;
LAB_0001c1b6:
  iVar2 = FUN_00004690(iVar1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    FUN_0000a760(param_1,iVar2,iVar1 + iVar2,1);
    if (bVar4) {
      iVar1 = FUN_000295d0(param_1[0xf]);
      if (iVar1 != 0) {
        *param_1 = *param_1 | 0x200;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* --- FUN_0001c210 @ 0001c210 --- */

undefined4 FUN_0001c210(uint param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (uint *)0x0) && ((*param_2 & 0xffff0000) == 0xfbad0000)) {
    if (param_1 != 0xffffffff) {
      uVar1 = FUN_0000acb0(param_2,param_1 & 0xff);
      return uVar1;
    }
    return 0xffffffff;
  }
  DAT_0002a0a0 = 0x16;
  return 0xffffffff;
}



/* --- FUN_0001c270 @ 0001c270 --- */

/* WARNING: Removing unreachable block (ram,0x0001c300) */
/* WARNING: Removing unreachable block (ram,0x0001c339) */
/* WARNING: Removing unreachable block (ram,0x0001c3dd) */

uint FUN_0001c270(byte *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte local_1c;
  
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    param_3 = 10;
  }
  bVar1 = PTR_DAT_0002b058[(uint)*param_1 * 2];
  pbVar5 = param_1;
  while ((bVar1 & 0x10) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = PTR_DAT_0002b058[(uint)*pbVar5 * 2];
  }
  if (*pbVar5 != 0) {
    if (*pbVar5 == 0x2d) {
      bVar3 = true;
      pbVar5 = pbVar5 + 1;
    }
    else if (*pbVar5 == 0x2b) {
      bVar3 = false;
      pbVar5 = pbVar5 + 1;
    }
    else {
      bVar3 = false;
    }
    if (((param_3 == 0x10) && (*pbVar5 == 0x30)) && (PTR_DAT_0002b060[pbVar5[1]] == 'X')) {
      pbVar5 = pbVar5 + 2;
    }
    if (param_3 == 0) {
      if (*pbVar5 == 0x30) {
        if (PTR_DAT_0002b060[pbVar5[1]] == 'X') {
          pbVar5 = pbVar5 + 2;
          param_3 = 0x10;
        }
        else {
          param_3 = 8;
        }
      }
      else {
        param_3 = 10;
      }
    }
    uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
    bVar2 = false;
    uVar7 = 0;
    local_1c = *pbVar5;
    pbVar6 = pbVar5;
    while (local_1c != 0) {
      if ((PTR_DAT_0002b058[(uint)local_1c * 2] & 8) == 0) {
        if ((PTR_DAT_0002b058[(uint)local_1c * 2] & 3) == 0) break;
        local_1c = PTR_DAT_0002b060[local_1c] - 0x37;
      }
      else {
        local_1c = local_1c - 0x30;
      }
      if ((int)param_3 <= (int)(uint)local_1c) break;
      if ((uVar4 < uVar7) ||
         ((uVar4 == uVar7 && ((uint)(0xffffffff % (ulonglong)param_3) < (uint)local_1c)))) {
        bVar2 = true;
      }
      else {
        uVar7 = uVar7 * param_3 + (uint)local_1c;
      }
      pbVar6 = pbVar6 + 1;
      local_1c = *pbVar6;
    }
    if (pbVar5 != pbVar6) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = pbVar6;
      }
      if (bVar2) {
        DAT_0002a0a0 = 0x22;
        return 0xffffffff;
      }
      if (!bVar3) {
        return uVar7;
      }
      return -uVar7;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}



/* --- FUN_0001c490 @ 0001c490 --- */

void FUN_0001c490(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



/* --- FUN_0001c4e0 @ 0001c4e0 --- */

void FUN_0001c4e0(undefined2 *param_1,undefined2 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  return;
}



/* --- FUN_0001c550 @ 0001c550 --- */

void FUN_0001c550(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001c5f0(param_1);
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) ^ 0x8000;
  }
  return;
}



/* --- FUN_0001c570 @ 0001c570 --- */

undefined4 FUN_0001c570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001c5f0(param_1);
  if ((iVar1 == 0) && (*(short *)(param_1 + 0x12) < 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* --- FUN_0001c5a0 @ 0001c5a0 --- */

undefined4 FUN_0001c5a0(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x12) & 0x7fff) != 0x7fff) {
    return 0;
  }
  iVar1 = FUN_0001c5f0(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}



/* --- FUN_0001c5f0 @ 0001c5f0 --- */

undefined4 FUN_0001c5f0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  if ((param_1[9] & 0x7fffU) != 0x7fff) {
    return 0;
  }
  iVar2 = 0;
  do {
    sVar1 = *param_1;
    param_1 = param_1 + 1;
    if (sVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  return 0;
}



/* --- FUN_0001c640 @ 0001c640 --- */

void FUN_0001c640(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_1[9] | 0x7fff;
  return;
}



/* --- FUN_0001c690 @ 0001c690 --- */

void FUN_0001c690(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  
  if ((short)param_1[9] < 0) {
    *param_2 = 0xffff;
  }
  else {
    *param_2 = 0;
  }
  puVar2 = param_2 + 1;
  *puVar2 = param_1[9];
  *puVar2 = *puVar2 & 0x7fff;
  puVar3 = param_2 + 2;
  if ((param_2[1] & 0x7fff) == 0x7fff) {
    iVar1 = FUN_0001c5f0(param_1);
    if (iVar1 == 0) {
      *puVar3 = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
    }
    else {
      *puVar3 = 0;
      param_2[3] = param_1[8];
      param_2[4] = param_1[7];
      param_2[5] = param_1[6];
      param_2[6] = param_1[5];
      param_2[7] = param_1[4];
      param_2[8] = param_1[3];
      param_2[9] = param_1[2];
      param_2[10] = param_1[1];
      param_2[0xb] = *param_1;
      param_2[0xc] = param_1[-1];
    }
  }
  else {
    *puVar3 = 0;
    param_2[3] = param_1[8];
    param_2[4] = param_1[7];
    param_2[5] = param_1[6];
    param_2[6] = param_1[5];
    param_2[7] = param_1[4];
    param_2[8] = param_1[3];
    param_2[9] = param_1[2];
    param_2[10] = param_1[1];
    param_2[0xb] = *param_1;
    param_2[0xc] = 0;
  }
  return;
}



/* --- FUN_0001c810 @ 0001c810 --- */

void FUN_0001c810(short *param_1,short *param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    param_2[9] = param_1[1];
  }
  else {
    param_2[9] = param_1[1] | 0x8000;
  }
  if (param_1[1] == 0x7fff) {
    iVar1 = FUN_0001ca40(param_1);
    if (iVar1 == 0) {
      FUN_0001c640(param_2);
    }
    else {
      FUN_000201b0(param_2,0x90);
    }
  }
  else {
    param_2[8] = param_1[3];
    param_2[7] = param_1[4];
    param_2[6] = param_1[5];
    param_2[5] = param_1[6];
    param_2[4] = param_1[7];
    param_2[3] = param_1[8];
    param_2[2] = param_1[9];
    param_2[1] = param_1[10];
    *param_2 = param_1[0xb];
  }
  return;
}



/* --- FUN_0001c900 @ 0001c900 --- */

void FUN_0001c900(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



/* --- FUN_0001c960 @ 0001c960 --- */

void FUN_0001c960(int param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* --- FUN_0001c9c0 @ 0001c9c0 --- */

void FUN_0001c9c0(undefined2 *param_1,undefined2 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = 0;
  return;
}



/* --- FUN_0001ca40 @ 0001ca40 --- */

undefined4 FUN_0001ca40(int param_1)

{
  if (((*(ushort *)(param_1 + 2) & 0x7fff) == 0x7fff) &&
     ((((((*(short *)(param_1 + 6) != 0 || (*(short *)(param_1 + 8) != 0)) ||
         (*(short *)(param_1 + 10) != 0)) ||
        ((*(short *)(param_1 + 0xc) != 0 || (*(short *)(param_1 + 0xe) != 0)))) ||
       ((*(short *)(param_1 + 0x10) != 0 ||
        ((*(short *)(param_1 + 0x12) != 0 || (*(short *)(param_1 + 0x14) != 0)))))) ||
      ((*(short *)(param_1 + 0x16) != 0 || (*(short *)(param_1 + 0x18) != 0)))))) {
    return 1;
  }
  return 0;
}



/* --- FUN_0001cac0 @ 0001cac0 --- */

undefined4 FUN_0001cac0(int param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 2;
  puVar1 = (ushort *)(param_1 + 4);
  puVar2 = (ushort *)(param_2 + 4);
  do {
    if (*puVar1 != *puVar2) {
      if (*puVar1 <= *puVar2) {
        return 0xffffffff;
      }
      return 1;
    }
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0xd);
  return 0;
}



/* --- FUN_0001cb30 @ 0001cb30 --- */

void FUN_0001cb30(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  
  puVar2 = (ushort *)(param_1 + 4);
  bVar3 = *(byte *)puVar2;
  *puVar2 = *puVar2 >> 1;
  bVar3 = (bVar3 & 1) * '\x02';
  puVar2 = (ushort *)(param_1 + 6);
  if ((*(byte *)puVar2 & 1) != 0) {
    bVar3 = bVar3 | 1;
  }
  *puVar2 = *puVar2 >> 1;
  if ((bVar3 & 2) != 0) {
    *puVar2 = *puVar2 | 0x8000;
  }
  bVar3 = bVar3 * '\x02';
  puVar2 = (ushort *)(param_1 + 8);
  if ((*(byte *)puVar2 & 1) != 0) {
    bVar3 = bVar3 | 1;
  }
  *puVar2 = *puVar2 >> 1;
  if ((bVar3 & 2) != 0) {
    *puVar2 = *puVar2 | 0x8000;
  }
  puVar2 = (ushort *)(param_1 + 10);
  iVar4 = 5;
  do {
    bVar3 = bVar3 * '\x02';
    if ((*puVar2 & 1) != 0) {
      bVar3 = bVar3 | 1;
    }
    *puVar2 = *puVar2 >> 1;
    if ((bVar3 & 2) != 0) {
      *puVar2 = *puVar2 | 0x8000;
    }
    bVar3 = bVar3 * '\x02';
    puVar1 = puVar2 + 1;
    if ((puVar2[1] & 1) != 0) {
      bVar3 = bVar3 | 1;
    }
    *puVar1 = *puVar1 >> 1;
    if ((bVar3 & 2) != 0) {
      *puVar1 = *puVar1 | 0x8000;
    }
    bVar3 = bVar3 * '\x02';
    puVar1 = puVar2 + 2;
    if ((puVar2[2] & 1) != 0) {
      bVar3 = bVar3 | 1;
    }
    *puVar1 = *puVar1 >> 1;
    if ((bVar3 & 2) != 0) {
      *puVar1 = *puVar1 | 0x8000;
    }
    bVar3 = bVar3 * '\x02';
    puVar1 = puVar2 + 3;
    if ((puVar2[3] & 1) != 0) {
      bVar3 = bVar3 | 1;
    }
    *puVar1 = *puVar1 >> 1;
    if ((bVar3 & 2) != 0) {
      *puVar1 = *puVar1 | 0x8000;
    }
    puVar2 = puVar2 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xd);
  return;
}



/* --- FUN_0001cc20 @ 0001cc20 --- */

void FUN_0001cc20(int param_1)

{
  byte *pbVar1;
  short sVar2;
  byte bVar3;
  short *psVar4;
  byte *pbVar5;
  int iVar6;
  
  psVar4 = (short *)(param_1 + 0x18);
  sVar2 = *psVar4;
  *psVar4 = *psVar4 << 1;
  bVar3 = (sVar2 < 0) * '\x02';
  pbVar5 = (byte *)(param_1 + 0x16);
  if (*(short *)pbVar5 < 0) {
    bVar3 = bVar3 | 1;
  }
  *(short *)pbVar5 = *(short *)pbVar5 << 1;
  if ((bVar3 & 2) != 0) {
    *pbVar5 = *pbVar5 | 1;
  }
  bVar3 = bVar3 * '\x02';
  pbVar5 = (byte *)(param_1 + 0x14);
  if (*(short *)pbVar5 < 0) {
    bVar3 = bVar3 | 1;
  }
  *(short *)pbVar5 = *(short *)pbVar5 << 1;
  if ((bVar3 & 2) != 0) {
    *pbVar5 = *pbVar5 | 1;
  }
  pbVar5 = (byte *)(param_1 + 0x12);
  iVar6 = 5;
  do {
    bVar3 = bVar3 * '\x02';
    if (*(short *)pbVar5 < 0) {
      bVar3 = bVar3 | 1;
    }
    *(short *)pbVar5 = *(short *)pbVar5 << 1;
    if ((bVar3 & 2) != 0) {
      *pbVar5 = *pbVar5 | 1;
    }
    bVar3 = bVar3 * '\x02';
    pbVar1 = pbVar5 + -2;
    if (*(short *)(pbVar5 + -2) < 0) {
      bVar3 = bVar3 | 1;
    }
    *(short *)pbVar1 = *(short *)pbVar1 << 1;
    if ((bVar3 & 2) != 0) {
      *pbVar1 = *pbVar1 | 1;
    }
    bVar3 = bVar3 * '\x02';
    pbVar1 = pbVar5 + -4;
    if (*(short *)(pbVar5 + -4) < 0) {
      bVar3 = bVar3 | 1;
    }
    *(short *)pbVar1 = *(short *)pbVar1 << 1;
    if ((bVar3 & 2) != 0) {
      *pbVar1 = *pbVar1 | 1;
    }
    bVar3 = bVar3 * '\x02';
    pbVar1 = pbVar5 + -6;
    if (*(short *)(pbVar5 + -6) < 0) {
      bVar3 = bVar3 | 1;
    }
    *(short *)pbVar1 = *(short *)pbVar1 << 1;
    if ((bVar3 & 2) != 0) {
      *pbVar1 = *pbVar1 | 1;
    }
    pbVar5 = pbVar5 + -8;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xd);
  return;
}



/* --- FUN_0001cd00 @ 0001cd00 --- */

void FUN_0001cd00(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = (ushort *)(param_1 + 4);
  uVar1 = *puVar3;
  *puVar3 = *puVar3 >> 8;
  *puVar3 = *puVar3;
  puVar3 = (ushort *)(param_1 + 6);
  uVar2 = *puVar3;
  *puVar3 = *puVar3 >> 8;
  *puVar3 = *puVar3 | uVar1 << 8;
  puVar3 = (ushort *)(param_1 + 8);
  uVar1 = *puVar3;
  *puVar3 = *puVar3 >> 8;
  *puVar3 = *puVar3 | uVar2 << 8;
  puVar3 = (ushort *)(param_1 + 10);
  iVar4 = 5;
  do {
    uVar2 = *puVar3;
    *puVar3 = *puVar3 >> 8;
    *puVar3 = *puVar3 | uVar1 << 8;
    uVar1 = puVar3[1];
    puVar3[1] = puVar3[1] >> 8;
    puVar3[1] = puVar3[1] | uVar2 << 8;
    uVar2 = puVar3[2];
    puVar3[2] = puVar3[2] >> 8;
    puVar3[2] = puVar3[2] | uVar1 << 8;
    uVar1 = puVar3[3];
    puVar3[3] = puVar3[3] >> 8;
    puVar3[3] = puVar3[3] | uVar2 << 8;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xd);
  return;
}



/* --- FUN_0001cdb0 @ 0001cdb0 --- */

void FUN_0001cdb0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = (ushort *)(param_1 + 0x18);
  uVar1 = *puVar3;
  *puVar3 = *puVar3 << 8;
  *puVar3 = *puVar3;
  puVar3 = (ushort *)(param_1 + 0x16);
  uVar2 = *puVar3;
  *puVar3 = *puVar3 << 8;
  *puVar3 = *puVar3 | uVar1 >> 8;
  puVar3 = (ushort *)(param_1 + 0x14);
  uVar1 = *puVar3;
  *puVar3 = *puVar3 << 8;
  *puVar3 = *puVar3 | uVar2 >> 8;
  puVar3 = (ushort *)(param_1 + 0x12);
  iVar4 = 5;
  do {
    uVar2 = *puVar3;
    *puVar3 = *puVar3 << 8;
    *puVar3 = *puVar3 | uVar1 >> 8;
    uVar1 = puVar3[-1];
    puVar3[-1] = puVar3[-1] << 8;
    puVar3[-1] = puVar3[-1] | uVar2 >> 8;
    uVar2 = puVar3[-2];
    puVar3[-2] = puVar3[-2] << 8;
    puVar3[-2] = puVar3[-2] | uVar1 >> 8;
    uVar1 = puVar3[-3];
    puVar3[-3] = puVar3[-3] << 8;
    puVar3[-3] = puVar3[-3] | uVar2 >> 8;
    puVar3 = puVar3 + -4;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xd);
  return;
}



/* --- FUN_0001ce60 @ 0001ce60 --- */

void FUN_0001ce60(int param_1)

{
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + 0x12);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* --- FUN_0001ced0 @ 0001ced0 --- */

void FUN_0001ced0(int param_1)

{
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x12);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}



/* --- FUN_0001cf40 @ 0001cf40 --- */

void FUN_0001cf40(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x18) + (uint)*(ushort *)(param_2 + 0x18);
  *(ushort *)(param_2 + 0x18) = (ushort)uVar1;
  uVar1 = (uVar1 >> 0x10) + (uint)*(ushort *)(param_2 + 0x16) + (uint)*(ushort *)(param_1 + 0x16);
  *(ushort *)(param_2 + 0x16) = (ushort)uVar1;
  uVar1 = (uint)((uVar1 & 0x10000) != 0) +
          (uint)*(ushort *)(param_2 + 0x14) + (uint)*(ushort *)(param_1 + 0x14);
  *(ushort *)(param_2 + 0x14) = (ushort)uVar1;
  puVar3 = (ushort *)(param_1 + 0x12);
  puVar2 = (ushort *)(param_2 + 0x12);
  iVar4 = 5;
  do {
    uVar1 = (uint)((uVar1 & 0x10000) != 0) + (uint)*puVar2 + (uint)*puVar3;
    *puVar2 = (ushort)uVar1;
    uVar1 = (uint)((uVar1 & 0x10000) != 0) + (uint)puVar2[-1] + (uint)puVar3[-1];
    puVar2[-1] = (ushort)uVar1;
    uVar1 = (uint)((uVar1 & 0x10000) != 0) + (uint)puVar2[-2] + (uint)puVar3[-2];
    puVar2[-2] = (ushort)uVar1;
    uVar1 = (uint)((uVar1 & 0x10000) != 0) + (uint)puVar2[-3] + (uint)puVar3[-3];
    puVar2[-3] = (ushort)uVar1;
    puVar3 = puVar3 + -4;
    puVar2 = puVar2 + -4;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xd);
  return;
}



/* --- FUN_0001d040 @ 0001d040 --- */

void FUN_0001d040(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x18) - (uint)*(ushort *)(param_1 + 0x18);
  *(ushort *)(param_2 + 0x18) = (ushort)uVar1;
  uVar1 = ((uint)*(ushort *)(param_2 + 0x16) - (uint)*(ushort *)(param_1 + 0x16)) -
          (uint)((uVar1 & 0x10000) != 0);
  *(ushort *)(param_2 + 0x16) = (ushort)uVar1;
  uVar1 = ((uint)*(ushort *)(param_2 + 0x14) - (uint)*(ushort *)(param_1 + 0x14)) -
          (uint)((uVar1 & 0x10000) != 0);
  *(ushort *)(param_2 + 0x14) = (ushort)uVar1;
  puVar3 = (ushort *)(param_1 + 0x12);
  puVar2 = (ushort *)(param_2 + 0x12);
  iVar4 = 5;
  do {
    uVar1 = ((uint)*puVar2 - (uint)*puVar3) - (uint)((uVar1 & 0x10000) != 0);
    *puVar2 = (ushort)uVar1;
    uVar1 = ((uint)puVar2[-1] - (uint)puVar3[-1]) - (uint)((uVar1 & 0x10000) != 0);
    puVar2[-1] = (ushort)uVar1;
    uVar1 = ((uint)puVar2[-2] - (uint)puVar3[-2]) - (uint)((uVar1 & 0x10000) != 0);
    puVar2[-2] = (ushort)uVar1;
    uVar1 = ((uint)puVar2[-3] - (uint)puVar3[-3]) - (uint)((uVar1 & 0x10000) != 0);
    puVar2[-3] = (ushort)uVar1;
    puVar3 = puVar3 + -4;
    puVar2 = puVar2 + -4;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xd);
  return;
}



/* --- FUN_0001d150 @ 0001d150 --- */

void FUN_0001d150(ushort param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  ushort local_e [5];
  
  puVar5 = local_e + 3;
  local_e[3] = 0;
  puVar6 = (ushort *)(param_2 + 0x18);
  iVar1 = 3;
  do {
    if (*puVar6 == 0) {
      puVar5[-2] = 0;
    }
    else {
      uVar2 = (uint)*puVar6 * (uint)param_1;
      uVar3 = (uint)*puVar5 + (uVar2 & 0xffff);
      *puVar5 = (ushort)uVar3;
      iVar4 = (uint)puVar5[-1] + (uVar3 >> 0x10) + (uVar2 >> 0x10);
      puVar5[-1] = (ushort)iVar4;
      puVar5[-2] = (ushort)((uint)iVar4 >> 0x10);
    }
    if (puVar6[-1] == 0) {
      puVar5[-3] = 0;
    }
    else {
      uVar2 = (uint)puVar6[-1] * (uint)param_1;
      uVar3 = (uint)puVar5[-1] + (uVar2 & 0xffff);
      puVar5[-1] = (ushort)uVar3;
      iVar4 = (uint)puVar5[-2] + (uVar3 >> 0x10) + (uVar2 >> 0x10);
      puVar5[-2] = (ushort)iVar4;
      puVar5[-3] = (ushort)((uint)iVar4 >> 0x10);
    }
    puVar6 = puVar6 + -2;
    puVar5 = puVar5 + -2;
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0xd);
  *(undefined2 *)(param_3 + 4) = local_1c;
  *(undefined2 *)(param_3 + 6) = local_1a;
  *(undefined2 *)(param_3 + 8) = local_18;
  *(undefined2 *)(param_3 + 10) = local_16;
  *(undefined2 *)(param_3 + 0xc) = local_14;
  *(undefined2 *)(param_3 + 0xe) = local_12;
  *(undefined2 *)(param_3 + 0x10) = local_10;
  *(ushort *)(param_3 + 0x12) = local_e[0];
  *(ushort *)(param_3 + 0x14) = local_e[1];
  *(undefined2 *)(param_3 + 0x16) = 0;
  *(ushort *)(param_3 + 0x18) = local_e[3];
  return;
}



/* --- FUN_0001d2a0 @ 0001d2a0 --- */

bool FUN_0001d2a0(int param_1,undefined2 *param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  short *local_28;
  undefined1 local_20 [28];
  
  DAT_0002b72c = *param_2;
  DAT_0002b72e = param_2[1];
  DAT_0002b730 = 0;
  DAT_0002b732 = 0;
  DAT_0002b734 = 0;
  DAT_0002b736 = 0;
  DAT_0002b738 = 0;
  DAT_0002b73a = 0;
  DAT_0002b73c = 0;
  DAT_0002b73e = 0;
  DAT_0002b740 = 0;
  DAT_0002b742 = 0;
  DAT_0002b744 = 0;
  FUN_0001cb30(param_2);
  uVar1 = *(ushort *)(param_1 + 6);
  local_28 = &DAT_0002b730;
  do {
    uVar12 = (uint)(ushort)param_2[2] * 0x10000 + (uint)(ushort)param_2[3];
    if ((uint)uVar1 * 0xffff < uVar12) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = uVar12 / uVar1;
    }
    sVar13 = (short)uVar12;
    FUN_0001d150(uVar12 & 0xffff,param_1,local_20);
    iVar11 = FUN_0001cac0(local_20,param_2);
    sVar14 = sVar13;
    if (0 < iVar11) {
      sVar14 = sVar13 + -1;
      FUN_0001d040(param_1,local_20);
      iVar11 = FUN_0001cac0(local_20,param_2);
      if (0 < iVar11) {
        sVar14 = sVar13 + -2;
        FUN_0001d040(param_1,local_20);
      }
    }
    FUN_0001d040(local_20,param_2);
    *local_28 = sVar14;
    FUN_0001ce60(param_2);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x2b745);
  sVar14 = param_2[2];
  sVar13 = param_2[3];
  sVar2 = param_2[4];
  sVar3 = param_2[5];
  sVar4 = param_2[6];
  sVar5 = param_2[7];
  sVar6 = param_2[8];
  sVar7 = param_2[9];
  sVar8 = param_2[10];
  sVar9 = param_2[0xb];
  sVar10 = param_2[0xc];
  *param_2 = DAT_0002b72c;
  param_2[1] = DAT_0002b72e;
  param_2[2] = DAT_0002b730;
  param_2[3] = DAT_0002b732;
  param_2[4] = DAT_0002b734;
  param_2[5] = DAT_0002b736;
  param_2[6] = DAT_0002b738;
  param_2[7] = DAT_0002b73a;
  param_2[8] = DAT_0002b73c;
  param_2[9] = DAT_0002b73e;
  param_2[10] = DAT_0002b740;
  param_2[0xb] = DAT_0002b742;
  param_2[0xc] = DAT_0002b744;
  return (((((((((sVar14 != 0 || sVar13 != 0) || sVar2 != 0) || sVar3 != 0) || sVar4 != 0) ||
             sVar5 != 0) || sVar6 != 0) || sVar7 != 0) || sVar8 != 0) || sVar9 != 0) || sVar10 != 0;
}



/* --- FUN_0001d4c0 @ 0001d4c0 --- */

ushort FUN_0001d4c0(int param_1,undefined2 *param_2)

{
  short *psVar1;
  int local_28;
  ushort local_24;
  undefined1 local_20 [28];
  
  DAT_0002b72c = *param_2;
  DAT_0002b72e = param_2[1];
  DAT_0002b730 = 0;
  DAT_0002b732 = 0;
  DAT_0002b734 = 0;
  DAT_0002b736 = 0;
  DAT_0002b738 = 0;
  DAT_0002b73a = 0;
  DAT_0002b73c = 0;
  DAT_0002b73e = 0;
  DAT_0002b740 = 0;
  DAT_0002b742 = 0;
  DAT_0002b744 = 0;
  local_24 = 0;
  psVar1 = (short *)(param_1 + 0x18);
  local_28 = 3;
  do {
    if (*psVar1 != 0) {
      FUN_0001d150(*psVar1,param_2,local_20);
      FUN_0001cf40(local_20,&DAT_0002b72c);
    }
    local_24 = local_24 | DAT_0002b744;
    FUN_0001ced0(&DAT_0002b72c);
    if (psVar1[-1] != 0) {
      FUN_0001d150(psVar1[-1],param_2,local_20);
      FUN_0001cf40(local_20,&DAT_0002b72c);
    }
    psVar1 = psVar1 + -2;
    local_24 = local_24 | DAT_0002b744;
    FUN_0001ced0(&DAT_0002b72c);
    local_28 = local_28 + 2;
  } while (local_28 < 0xd);
  *param_2 = DAT_0002b72c;
  param_2[1] = DAT_0002b72e;
  param_2[2] = DAT_0002b730;
  param_2[3] = DAT_0002b732;
  param_2[4] = DAT_0002b734;
  param_2[5] = DAT_0002b736;
  param_2[6] = DAT_0002b738;
  param_2[7] = DAT_0002b73a;
  param_2[8] = DAT_0002b73c;
  param_2[9] = DAT_0002b73e;
  param_2[10] = DAT_0002b740;
  param_2[0xb] = DAT_0002b742;
  param_2[0xc] = DAT_0002b744;
  return local_24;
}



/* --- FUN_0001d690 @ 0001d690 --- */

void FUN_0001d690(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  short *psVar5;
  int iVar6;
  short *local_8;
  
  iVar2 = FUN_0001eb40(param_1);
  param_4 = param_4 - iVar2;
  if ((0x90 < iVar2) && (param_4 < 0x7fff)) {
LAB_0001d6c7:
    FUN_0001c960(param_1);
    return;
  }
  if (param_4 < 0) {
    if (param_4 < -0x90) goto LAB_0001d6c7;
    iVar2 = FUN_0001e710(param_1,param_4);
    if (iVar2 != 0) {
      param_2 = 1;
    }
  }
  if (param_5 == 0) goto LAB_0001da88;
  if (DAT_0002b748 != DAT_0002b728) {
    FUN_0001c900(&DAT_0002b75c);
    if (DAT_0002b728 == 0x38) {
      DAT_0002b74c = 6;
      DAT_0002b750 = 0xff;
      DAT_0002b752 = 0x80;
      DAT_0002b754 = 0x100;
      DAT_0002b758 = 6;
    }
    else if (DAT_0002b728 < 0x39) {
      if (DAT_0002b728 == 0x18) {
        DAT_0002b74c = 4;
        DAT_0002b750 = 0xff;
        DAT_0002b752 = 0x80;
        DAT_0002b754 = 0x100;
        DAT_0002b758 = 4;
      }
      else if (DAT_0002b728 == 0x35) {
        DAT_0002b74c = 6;
        DAT_0002b750 = 0x7ff;
        DAT_0002b752 = 0x400;
        DAT_0002b754 = 0x800;
        DAT_0002b758 = 6;
      }
      else {
LAB_0001d75c:
        DAT_0002b74c = 0xc;
        DAT_0002b750 = 0xffff;
        DAT_0002b752 = 0x8000;
        DAT_0002b754 = 1;
        DAT_0002b758 = 0xb;
      }
    }
    else if (DAT_0002b728 == 0x71) {
      DAT_0002b74c = 10;
      DAT_0002b750 = 0x7fff;
      DAT_0002b752 = 0x4000;
      DAT_0002b754 = 0x8000;
      DAT_0002b758 = 10;
    }
    else {
      if ((0x71 < DAT_0002b728) || (DAT_0002b728 != 0x40)) goto LAB_0001d75c;
      DAT_0002b74c = 7;
      DAT_0002b750 = 0xffff;
      DAT_0002b752 = 0x8000;
      DAT_0002b754 = 1;
      DAT_0002b758 = 6;
    }
    *(ushort *)(&DAT_0002b75c + DAT_0002b758 * 2) = DAT_0002b754;
    DAT_0002b748 = DAT_0002b728;
  }
  if (((param_4 < 1) && (DAT_0002b728 != 0x40)) && (DAT_0002b728 != 0x90)) {
    param_2 = param_2 | *(byte *)(param_1 + 0x18) & 1;
    FUN_0001cb30(param_1);
  }
  iVar2 = DAT_0002b74c;
  uVar4 = *(ushort *)(param_1 + DAT_0002b74c * 2) & DAT_0002b750;
  if ((DAT_0002b728 < 0x90) && (iVar6 = DAT_0002b74c + 1, iVar6 < 0xd)) {
    local_8 = (short *)(param_1 + iVar6 * 2);
    uVar3 = 0xdU - iVar6 & 3;
    psVar5 = local_8;
    if (uVar3 != 0) {
      if (1 < uVar3) {
        if (2 < uVar3) {
          if (*local_8 != 0) {
            uVar4 = uVar4 | 1;
          }
          *local_8 = 0;
          local_8 = local_8 + 1;
          iVar6 = iVar2 + 2;
        }
        if (*local_8 != 0) {
          uVar4 = uVar4 | 1;
        }
        *local_8 = 0;
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 1;
      }
      if (*local_8 != 0) {
        uVar4 = uVar4 | 1;
      }
      *local_8 = 0;
      local_8 = local_8 + 1;
      iVar6 = iVar6 + 1;
      psVar5 = local_8;
      if (0xc < iVar6) goto LAB_0001d9f8;
    }
    do {
      if (*local_8 != 0) {
        uVar4 = uVar4 | 1;
      }
      *psVar5 = 0;
      if (local_8[1] != 0) {
        uVar4 = uVar4 | 1;
      }
      psVar5[1] = 0;
      if (local_8[2] != 0) {
        uVar4 = uVar4 | 1;
      }
      psVar5[2] = 0;
      if (local_8[3] != 0) {
        uVar4 = uVar4 | 1;
      }
      psVar5[3] = 0;
      local_8 = local_8 + 4;
      iVar6 = iVar6 + 4;
      psVar5 = psVar5 + 4;
    } while (iVar6 < 0xd);
  }
LAB_0001d9f8:
  puVar1 = (ushort *)(param_1 + DAT_0002b74c * 2);
  *puVar1 = *puVar1 & ~DAT_0002b750;
  if ((DAT_0002b752 & uVar4) == 0) goto LAB_0001da54;
  if (DAT_0002b752 == uVar4) {
    if (param_2 == 0) {
      if ((*(ushort *)(param_1 + DAT_0002b758 * 2) & DAT_0002b754) != 0) goto LAB_0001da46;
    }
    else if (param_3 == 0) goto LAB_0001da46;
  }
  else {
LAB_0001da46:
    FUN_0001cf40(&DAT_0002b75c,param_1);
  }
LAB_0001da54:
  if (((param_4 < 1) && (DAT_0002b728 != 0x40)) && (DAT_0002b728 != 0x90)) {
    FUN_0001cc20(param_1);
  }
  if (*(short *)(param_1 + 4) != 0) {
    FUN_0001cb30(param_1);
    param_4 = param_4 + 1;
  }
LAB_0001da88:
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (param_4 < 0x7fff) {
    if (param_4 < 0) {
      *(undefined2 *)(param_1 + 2) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 2) = (undefined2)param_4;
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = 0x7fff;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  return;
}



/* --- FUN_0001db10 @ 0001db10 --- */

void FUN_0001db10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001c5f0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0001c5f0(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_0001c5a0(param_1);
      if ((iVar1 != 0) && (iVar1 = FUN_0001c5a0(param_2), iVar1 != 0)) {
        iVar1 = FUN_0001c570(param_1);
        iVar2 = FUN_0001c570(param_2);
        if (iVar1 == iVar2) {
          FUN_00020400(&DAT_0001db02,1);
          FUN_000201b0(param_3,0x90);
          return;
        }
      }
      DAT_0002b778 = 1;
      FUN_0001dbd0(param_1,param_2,param_3);
    }
    else {
      FUN_0001c4e0(param_2,param_3);
    }
  }
  else {
    FUN_0001c4e0(param_1,param_3);
  }
  return;
}



/* --- FUN_0001dbd0 @ 0001dbd0 --- */

void FUN_0001dbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  uint local_60;
  undefined4 local_5c;
  undefined1 local_58 [28];
  ushort local_3c [14];
  ushort local_20;
  ushort local_1e;
  
  iVar1 = FUN_0001c5a0(param_1);
  if (iVar1 != 0) {
    FUN_0001c4e0(param_1,param_3);
    if (DAT_0002b778 == 0) {
      return;
    }
    FUN_0001c550(param_3);
    return;
  }
  iVar1 = FUN_0001c5a0(param_2);
  if (iVar1 != 0) {
    FUN_0001c4e0(param_2,param_3);
    return;
  }
  FUN_0001c690(param_1,&local_20);
  FUN_0001c690(param_2,local_3c);
  if (DAT_0002b778 != 0) {
    local_20 = ~local_20;
  }
  local_60 = (uint)local_3c[1];
  iVar1 = local_1e - local_60;
  if (0 < iVar1) {
    FUN_0001c9c0(local_3c,local_58);
    FUN_0001c9c0(&local_20,local_3c);
    FUN_0001c9c0(local_58,&local_20);
    local_60 = (uint)local_3c[1];
    iVar1 = -iVar1;
  }
  local_5c = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_0001cac0(&local_20,local_3c);
    if (iVar1 == 0) {
      if (local_3c[0] != local_20) {
        FUN_0001c490(param_3);
        return;
      }
      if ((local_3c[1] == 0) && (-1 < (short)local_3c[3])) {
        FUN_0001cc20(local_3c);
      }
      else {
        iVar1 = 1;
        do {
          if (local_3c[iVar1] != 0) {
            local_60._0_2_ = (ushort)local_60 + 1;
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xc);
        local_3c[1] = (ushort)local_60;
      }
      goto LAB_0001dde6;
    }
    if (0 < iVar1) {
      FUN_0001c9c0(local_3c,local_58);
      FUN_0001c9c0(&local_20,local_3c);
      FUN_0001c9c0(local_58,&local_20);
    }
  }
  else {
    if (iVar1 < -0x91) goto LAB_0001dde6;
    local_5c = FUN_0001e710(&local_20,iVar1);
  }
  bVar2 = local_3c[0] != local_20;
  if (bVar2) {
    FUN_0001d040(&local_20,local_3c);
  }
  else {
    FUN_0001cf40(&local_20,local_3c);
  }
  DAT_0002b778 = (uint)bVar2;
  FUN_0001d690(local_3c,local_5c,DAT_0002b778,local_60,0x40);
LAB_0001dde6:
  FUN_0001c810(local_3c,param_3);
  return;
}



/* --- FUN_0001de10 @ 0001de10 --- */

void FUN_0001de10(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  short local_3c [14];
  short local_20 [14];
  
  iVar1 = FUN_0001c5f0(param_1);
  if (iVar1 != 0) {
    FUN_0001c4e0(param_1,param_3);
    return;
  }
  iVar1 = FUN_0001c5f0(param_2);
  if (iVar1 != 0) {
    FUN_0001c4e0(param_2,param_3);
    return;
  }
  iVar1 = FUN_0001e600(param_1,&DAT_0002b700);
  if (((iVar1 == 0) && (iVar1 = FUN_0001e600(param_2,&DAT_0002b700), iVar1 == 0)) ||
     ((iVar1 = FUN_0001c5a0(param_1), iVar1 != 0 && (iVar1 = FUN_0001c5a0(param_2), iVar1 != 0)))) {
    FUN_00020400(&DAT_0001ddfd,1);
    FUN_000201b0(param_3,0x90);
  }
  else {
    iVar1 = FUN_0001c5a0(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_0001c5a0(param_1);
      if (iVar1 == 0) {
        FUN_0001c690(param_1,local_20);
        FUN_0001c690(param_2,local_3c);
        uVar5 = (uint)(ushort)local_20[1];
        uVar4 = (uint)(ushort)local_3c[1];
        if (local_3c[1] != 0) {
LAB_0001df7e:
          if (local_20[1] == 0) {
            iVar1 = 1;
            while (local_20[iVar1] == 0) {
              iVar1 = iVar1 + 1;
              if (0xb < iVar1) {
                if (local_3c[0] == local_20[0]) {
                  *(undefined2 *)(param_3 + 0x12) = 0;
                }
                else {
                  *(undefined2 *)(param_3 + 0x12) = 0x8000;
                }
                FUN_0001c640(param_3);
                FUN_00020400(&DAT_0001ddfd,2);
                return;
              }
            }
            iVar1 = FUN_0001eb40(local_20);
            uVar5 = uVar5 - iVar1;
          }
          uVar3 = FUN_0001d2a0(local_20,local_3c);
          FUN_0001d690(local_3c,uVar3,0,(uVar4 - uVar5) + 0x3fff,0x40);
          if (local_3c[0] == local_20[0]) {
            local_3c[0] = 0;
          }
          else {
            local_3c[0] = -1;
          }
          FUN_0001c810(local_3c,param_3);
          return;
        }
        iVar1 = 1;
        do {
          if (local_3c[iVar1] != 0) {
            iVar1 = FUN_0001eb40(local_3c);
            uVar4 = -iVar1;
            goto LAB_0001df7e;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xc);
      }
      FUN_0001c490(param_3);
    }
    else {
      iVar1 = FUN_0001c570(param_1);
      iVar2 = FUN_0001c570(param_2);
      if (iVar1 == iVar2) {
        *(undefined2 *)(param_3 + 0x12) = 0;
      }
      else {
        *(undefined2 *)(param_3 + 0x12) = 0x8000;
      }
      FUN_0001c640(param_3);
    }
  }
  return;
}



/* --- FUN_0001e050 @ 0001e050 --- */

void FUN_0001e050(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  short local_3c [14];
  short local_20 [14];
  
  iVar1 = FUN_0001c5f0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0001c5f0(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_0001c5a0(param_1);
      if (((iVar1 == 0) || (iVar1 = FUN_0001e600(param_2,&DAT_0002b700), iVar1 != 0)) &&
         ((iVar1 = FUN_0001c5a0(param_2), iVar1 == 0 ||
          (iVar1 = FUN_0001e600(param_1,&DAT_0002b700), iVar1 != 0)))) {
        iVar1 = FUN_0001c5a0(param_1);
        if ((iVar1 == 0) && (iVar1 = FUN_0001c5a0(param_2), iVar1 == 0)) {
          FUN_0001c690(param_1,local_20);
          FUN_0001c690(param_2,local_3c);
          uVar5 = (uint)(ushort)local_20[1];
          uVar4 = (uint)(ushort)local_3c[1];
          if (local_20[1] == 0) {
            iVar1 = 1;
            do {
              if (local_20[iVar1] != 0) {
                iVar1 = FUN_0001eb40(local_20);
                uVar5 = -iVar1;
                goto LAB_0001e1ae;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < 0xc);
          }
          else {
LAB_0001e1ae:
            if (local_3c[1] != 0) {
LAB_0001e1ee:
              uVar3 = FUN_0001d4c0(local_20,local_3c);
              FUN_0001d690(local_3c,uVar3,0,(uVar4 - 0x3ffe) + uVar5,0x40);
              if (local_3c[0] == local_20[0]) {
                local_3c[0] = 0;
              }
              else {
                local_3c[0] = -1;
              }
              FUN_0001c810(local_3c,param_3);
              return;
            }
            iVar1 = 1;
            do {
              if (local_3c[iVar1] != 0) {
                iVar1 = FUN_0001eb40(local_3c);
                uVar4 = uVar4 - iVar1;
                goto LAB_0001e1ee;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < 0xc);
          }
          FUN_0001c490(param_3);
        }
        else {
          iVar1 = FUN_0001c570(param_1);
          iVar2 = FUN_0001c570(param_2);
          if (iVar1 == iVar2) {
            *(undefined2 *)(param_3 + 0x12) = 0;
          }
          else {
            *(undefined2 *)(param_3 + 0x12) = 0x8000;
          }
          FUN_0001c640(param_3);
        }
      }
      else {
        FUN_00020400(&DAT_0001e03d,1);
        FUN_000201b0(param_3,0x90);
      }
    }
    else {
      FUN_0001c4e0(param_2,param_3);
    }
  }
  else {
    FUN_0001c4e0(param_1,param_3);
  }
  return;
}



/* --- FUN_0001e250 @ 0001e250 --- */

void FUN_0001e250(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  return;
}



/* --- FUN_0001e310 @ 0001e310 --- */

void FUN_0001e310(short *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001ca40(param_1);
  if (iVar1 == 0) {
    if (param_1[1] != 0) {
      FUN_0001cc20(param_1);
    }
    if (*param_1 == 0) {
      param_2[7] = param_1[1];
    }
    else {
      param_2[7] = param_1[1] | 0x8000;
    }
    param_2[6] = param_1[3];
    param_2[5] = param_1[4];
    param_2[4] = param_1[5];
    param_2[3] = param_1[6];
    param_2[2] = param_1[7];
    param_2[1] = param_1[8];
    *param_2 = param_1[9];
  }
  else {
    FUN_000201b0(param_2,0x71);
  }
  return;
}



/* --- FUN_0001e3d0 @ 0001e3d0 --- */

void FUN_0001e3d0(short *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001ca40(param_1);
  if (iVar1 == 0) {
    param_2[5] = 0;
    if (*param_1 == 0) {
      param_2[4] = param_1[1];
    }
    else {
      param_2[4] = param_1[1] | 0x8000;
    }
    param_2[3] = param_1[3];
    param_2[2] = param_1[4];
    param_2[1] = param_1[5];
    *param_2 = param_1[6];
  }
  else {
    FUN_000201b0(param_2,0x40);
  }
  return;
}



/* --- FUN_0001e470 @ 0001e470 --- */

void FUN_0001e470(short *param_1,short *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001ca40(param_1);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_2 + 3);
    *puVar2 = 0;
    if (*param_1 != 0) {
      *puVar2 = 0x8000;
    }
    uVar3 = param_1[1];
    if (uVar3 < 0x7ff) {
      if (uVar3 == 0) {
        uVar4 = 4;
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 << 4;
        uVar4 = 5;
      }
      FUN_0001e710(param_1,uVar4);
      *puVar2 = *puVar2 | uVar3 | param_1[2] & 0xfU;
      param_2[2] = param_1[3];
      param_2[1] = param_1[4];
      *param_2 = param_1[5];
    }
    else {
      *puVar2 = *puVar2 | 0x7ff0;
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = 0;
    }
  }
  else {
    FUN_000201b0(param_2,0x35);
  }
  return;
}



/* --- FUN_0001e550 @ 0001e550 --- */

void FUN_0001e550(short *param_1,short *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001ca40(param_1);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_2 + 1);
    *puVar2 = 0;
    if (*param_1 != 0) {
      *puVar2 = 0x8000;
    }
    uVar3 = param_1[1];
    if (uVar3 < 0xff) {
      if (uVar3 == 0) {
        uVar4 = 7;
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 << 7;
        uVar4 = 8;
      }
      FUN_0001e710(param_1,uVar4);
      *puVar2 = *puVar2 | uVar3 | param_1[2] & 0x7fU;
      *param_2 = param_1[3];
    }
    else {
      *puVar2 = *puVar2 | 0x7f80;
      *param_2 = 0;
    }
  }
  else {
    FUN_000201b0(param_2,0x18);
  }
  return;
}



/* --- FUN_0001e600 @ 0001e600 --- */

int FUN_0001e600(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort local_3c [14];
  ushort local_20 [14];
  
  iVar1 = FUN_0001c5f0(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_0001c5f0(param_2), iVar1 == 0)) {
    FUN_0001c690(param_1,local_20);
    FUN_0001c690(param_2,local_3c);
    if (local_3c[0] == local_20[0]) {
      iVar1 = -1;
      if (local_20[0] == 0) {
        iVar1 = 1;
      }
      iVar2 = 0xc;
      puVar3 = local_3c;
      puVar4 = local_20;
      do {
        if (*puVar4 != *puVar3) {
          if (*puVar3 < *puVar4) {
            return iVar1;
          }
          return -iVar1;
        }
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (0 < iVar2);
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
      do {
        if ((local_20[iVar1] != 0) || (local_3c[iVar1] != 0)) {
          if (local_20[0] == 0) {
            return 1;
          }
          return -1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0xc);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}



/* --- FUN_0001e710 @ 0001e710 --- */

bool FUN_0001e710(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  ushort uVar11;
  ushort *puVar12;
  int iStack_14;
  
  puVar10 = &stack0xfffffff0;
  puVar7 = &stack0xfffffff0;
  if (param_2 == 0) {
    return false;
  }
  uVar11 = 0;
  puVar12 = (ushort *)(param_1 + 0x18);
  if (param_2 < 0) {
    iVar5 = -param_2;
    if (param_2 != -0xf && 0xe < iVar5) {
      uVar4 = param_2 + 0xfU & 0x3f;
      puVar8 = &stack0xfffffff0;
      if (uVar4 == 0) goto LAB_0001e7a0;
      if (uVar4 < 0x30) {
        if (uVar4 < 0x20) {
          puVar8 = &stack0xfffffff0;
          if (uVar4 < 0x10) goto LAB_0001e7a0;
          uVar11 = *(ushort *)(param_1 + 0x18);
          iStack_14 = param_1;
          FUN_0001ced0();
          iVar5 = iVar5 + -0x10;
        }
        uVar11 = uVar11 | *puVar12;
        iStack_14 = param_1;
        FUN_0001ced0();
        iVar5 = iVar5 + -0x10;
      }
      uVar11 = uVar11 | *puVar12;
      piVar6 = &iStack_14;
      iStack_14 = param_1;
      FUN_0001ced0();
      iVar5 = iVar5 + -0x10;
      while( true ) {
        puVar7 = (undefined1 *)((int)piVar6 + 4);
        puVar8 = (undefined1 *)((int)piVar6 + 4);
        if (iVar5 < 0x10) break;
LAB_0001e7a0:
        uVar1 = *puVar12;
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e7ac;
        FUN_0001ced0();
        uVar2 = *puVar12;
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e7bb;
        FUN_0001ced0();
        uVar3 = *puVar12;
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e7ca;
        FUN_0001ced0();
        uVar11 = uVar11 | uVar1 | uVar2 | uVar3 | *puVar12;
        piVar6 = (int *)(puVar8 + -4);
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e7d9;
        FUN_0001ced0();
        iVar5 = iVar5 + -0x40;
      }
    }
    if (7 < iVar5) {
      uVar4 = 7U - iVar5 & 0x1f;
      if (uVar4 == 0) goto LAB_0001e850;
      if (uVar4 < 0x18) {
        if (uVar4 < 0x10) {
          if (uVar4 < 8) goto LAB_0001e850;
          uVar11 = uVar11 | *puVar12 & 0xff;
          *(int *)(puVar7 + -4) = param_1;
          *(undefined4 *)(puVar7 + -8) = 0x1e819;
          FUN_0001cd00();
          iVar5 = iVar5 + -8;
        }
        uVar11 = uVar11 | *puVar12 & 0xff;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e830;
        FUN_0001cd00();
        iVar5 = iVar5 + -8;
      }
      uVar11 = uVar11 | *puVar12 & 0xff;
      *(int *)(puVar7 + -4) = param_1;
      *(undefined4 *)(puVar7 + -8) = 0x1e847;
      FUN_0001cd00();
      for (iVar5 = iVar5 + -8; 7 < iVar5; iVar5 = iVar5 + -0x20) {
LAB_0001e850:
        uVar1 = *puVar12;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e861;
        FUN_0001cd00();
        uVar2 = *puVar12;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e875;
        FUN_0001cd00();
        uVar3 = *puVar12;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e889;
        FUN_0001cd00();
        uVar11 = uVar11 | uVar1 & 0xff | uVar2 & 0xff | uVar3 & 0xff | *puVar12 & 0xff;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e89d;
        FUN_0001cd00();
      }
    }
    if (0 < iVar5) {
      uVar4 = -iVar5 & 3;
      if (uVar4 != 0) {
        if (uVar4 < 3) {
          if (uVar4 < 2) {
            uVar11 = uVar11 | *puVar12 & 1;
            *(int *)(puVar7 + -4) = param_1;
            *(undefined4 *)(puVar7 + -8) = 0x1e8d6;
            FUN_0001cb30();
            iVar5 = iVar5 + -1;
          }
          uVar11 = uVar11 | *puVar12 & 1;
          *(int *)(puVar7 + -4) = param_1;
          *(undefined4 *)(puVar7 + -8) = 0x1e8ed;
          FUN_0001cb30();
          iVar5 = iVar5 + -1;
        }
        uVar11 = uVar11 | *puVar12 & 1;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e904;
        FUN_0001cb30();
        iVar5 = iVar5 + -1;
        if (iVar5 < 1) goto LAB_0001eb17;
      }
      do {
        uVar1 = *puVar12;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e923;
        FUN_0001cb30();
        uVar2 = *puVar12;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e939;
        FUN_0001cb30();
        uVar3 = *puVar12;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e94f;
        FUN_0001cb30();
        uVar11 = uVar11 | uVar1 & 1 | uVar2 & 1 | uVar3 & 1 | *puVar12 & 1;
        *(int *)(puVar7 + -4) = param_1;
        *(undefined4 *)(puVar7 + -8) = 0x1e965;
        FUN_0001cb30();
        iVar5 = iVar5 + -4;
      } while (0 < iVar5);
    }
  }
  else {
    if (0xf < param_2) {
      uVar4 = 0xfU - param_2 & 0x3f;
      puVar8 = &stack0xfffffff0;
      if (uVar4 == 0) goto LAB_0001e9d0;
      if (uVar4 < 0x30) {
        if (uVar4 < 0x20) {
          puVar8 = &stack0xfffffff0;
          if (uVar4 < 0x10) goto LAB_0001e9d0;
          iStack_14 = param_1;
          FUN_0001ce60();
          param_2 = param_2 + -0x10;
        }
        iStack_14 = param_1;
        FUN_0001ce60();
        param_2 = param_2 + -0x10;
      }
      piVar9 = &iStack_14;
      iStack_14 = param_1;
      FUN_0001ce60();
      param_2 = param_2 + -0x10;
      while( true ) {
        puVar10 = (undefined1 *)((int)piVar9 + 4);
        puVar8 = (undefined1 *)((int)piVar9 + 4);
        if (param_2 < 0x10) break;
LAB_0001e9d0:
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e9d9;
        FUN_0001ce60();
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e9e5;
        FUN_0001ce60();
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e9f1;
        FUN_0001ce60();
        piVar9 = (int *)(puVar8 + -4);
        *(int *)(puVar8 + -4) = param_1;
        *(undefined4 *)(puVar8 + -8) = 0x1e9fd;
        FUN_0001ce60();
        param_2 = param_2 + -0x40;
      }
    }
    if (7 < param_2) {
      uVar4 = 7U - param_2 & 0x1f;
      if (uVar4 == 0) goto LAB_0001ea60;
      if (uVar4 < 0x18) {
        if (uVar4 < 0x10) {
          if (uVar4 < 8) goto LAB_0001ea60;
          *(int *)(puVar10 + -4) = param_1;
          *(undefined4 *)(puVar10 + -8) = 0x1ea35;
          FUN_0001cdb0();
          param_2 = param_2 + -8;
        }
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1ea44;
        FUN_0001cdb0();
        param_2 = param_2 + -8;
      }
      *(int *)(puVar10 + -4) = param_1;
      *(undefined4 *)(puVar10 + -8) = 0x1ea53;
      FUN_0001cdb0();
      for (param_2 = param_2 + -8; 7 < param_2; param_2 = param_2 + -0x20) {
LAB_0001ea60:
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1ea69;
        FUN_0001cdb0();
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1ea75;
        FUN_0001cdb0();
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1ea81;
        FUN_0001cdb0();
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1ea8d;
        FUN_0001cdb0();
      }
    }
    if (0 < param_2) {
      uVar4 = -param_2 & 3;
      if (uVar4 == 0) goto LAB_0001eae0;
      if (uVar4 < 3) {
        if (uVar4 < 2) {
          *(int *)(puVar10 + -4) = param_1;
          *(undefined4 *)(puVar10 + -8) = 0x1eab8;
          FUN_0001cc20();
          param_2 = param_2 + -1;
        }
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1eac5;
        FUN_0001cc20();
        param_2 = param_2 + -1;
      }
      *(int *)(puVar10 + -4) = param_1;
      *(undefined4 *)(puVar10 + -8) = 0x1ead2;
      FUN_0001cc20();
      for (param_2 = param_2 + -1; 0 < param_2; param_2 = param_2 + -4) {
LAB_0001eae0:
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1eae9;
        FUN_0001cc20();
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1eaf5;
        FUN_0001cc20();
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1eb01;
        FUN_0001cc20();
        *(int *)(puVar10 + -4) = param_1;
        *(undefined4 *)(puVar10 + -8) = 0x1eb0d;
        FUN_0001cc20();
      }
    }
  }
LAB_0001eb17:
  return uVar11 != 0;
}



/* --- FUN_0001eb40 @ 0001eb40 --- */

int FUN_0001eb40(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 4) == 0) {
    if (*(short *)(param_1 + 6) < 0) {
      return 0;
    }
    while (*(short *)(param_1 + 6) == 0) {
      FUN_0001ce60(param_1);
      iVar2 = iVar2 + 0x10;
      if (0x90 < iVar2) {
        return iVar2;
      }
    }
    cVar1 = *(char *)(param_1 + 7);
    while (cVar1 == '\0') {
      FUN_0001cdb0(param_1);
      iVar2 = iVar2 + 8;
      cVar1 = *(char *)(param_1 + 7);
    }
    do {
      if (*(short *)(param_1 + 6) < 0) {
        return iVar2;
      }
      FUN_0001cc20(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xa1);
    uVar3 = 4;
  }
  else {
    if (*(char *)(param_1 + 5) != '\0') {
      FUN_0001cd00(param_1);
      iVar2 = -8;
    }
    do {
      if (*(short *)(param_1 + 4) == 0) {
        return iVar2;
      }
      FUN_0001cb30(param_1);
      iVar2 = iVar2 + -1;
    } while (-0x91 < iVar2);
    uVar3 = 3;
  }
  FUN_00020400(s_enormlz_0001eb2e,uVar3);
  return iVar2;
}



/* --- FUN_0001ec40 @ 0001ec40 --- */

undefined1 * FUN_0001ec40(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined1 local_20 [28];
  
  iVar5 = in_stack_00000014;
  FUN_0001e250(&stack0x00000004,local_20);
  iVar2 = FUN_0001c570(local_20);
  if (iVar2 == 0) {
    *in_stack_0000001c = 0;
  }
  else {
    *in_stack_0000001c = 1;
  }
  if (in_stack_00000010 != 3) {
    iVar5 = iVar5 + -1;
  }
  if (in_stack_00000010 == 0) {
    iVar5 = 0x14;
  }
  if (0x2a < iVar5) {
    iVar5 = 0x2a;
  }
  DAT_0002b984 = in_stack_00000010;
  FUN_0001ee40(local_20,&DAT_00038358,iVar5);
  iVar2 = FUN_0001c5a0(local_20);
  if ((iVar2 != 0) || (iVar2 = FUN_0001c5f0(local_20), iVar2 != 0)) {
    *in_stack_00000018 = 9999;
    goto LAB_0001ed41;
  }
  *in_stack_00000018 = DAT_000383d8 + 1;
  pcVar3 = &DAT_00038358;
  cVar1 = DAT_00038358;
  while (cVar1 != '\0') {
    if (*pcVar3 == '.') goto LAB_0001ed26;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
LAB_0001ed39:
  for (; (*pcVar3 != 'E' && (&DAT_00038358 < pcVar3)); pcVar3 = pcVar3 + -1) {
  }
  *pcVar3 = '\0';
LAB_0001ed41:
  pcVar3 = &DAT_00038358;
  if (DAT_00038358 == ' ') goto LAB_0001ed58;
  while (DAT_00038358 == '-') {
LAB_0001ed58:
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 == ' ');
    DAT_00038358 = *pcVar3;
  }
  DAT_00038358 = *pcVar3;
  pcVar4 = &DAT_00038359;
  cVar1 = DAT_00038358;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar4 = pcVar4 + -1;
  if (in_stack_00000010 == 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = DAT_000383d8;
    if (DAT_000383d8 < iVar5) {
      iVar2 = iVar5;
    }
  }
  while ((pcVar4[-1] == '0' && (iVar2 < (int)(pcVar4 + -0x38358)))) {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = '\0';
  }
  if ((in_stack_00000010 == 3) && (iVar5 + DAT_000383d8 < 0)) {
    pcVar4 = &DAT_00038358;
    DAT_00038358 = '\0';
    *in_stack_00000018 = 0;
  }
  if (in_stack_00000020 != (undefined4 *)0x0) {
    *in_stack_00000020 = pcVar4;
  }
  DAT_0002b984 = 0xffffffff;
  return &DAT_00038358;
LAB_0001ed26:
  for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    *pcVar3 = pcVar3[1];
  }
  goto LAB_0001ed39;
}



/* --- FUN_0001ee40 @ 0001ee40 --- */

/* WARNING: Type propagation algorithm not settling */

void FUN_0001ee40(byte *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte **ppbVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbStack_c8;
  byte *pbStack_c4;
  byte *pbStack_c0;
  uint local_8c;
  byte *local_84;
  short local_80;
  byte *local_7c;
  char local_78;
  byte local_74 [24];
  byte local_5c;
  byte local_58 [2];
  ushort local_56;
  short local_54;
  short local_46;
  short local_40;
  byte local_3c [28];
  byte local_20 [16];
  short local_10;
  ushort local_e;
  
  uVar1 = DAT_0002b728;
  local_8c = param_3;
  pbStack_c0 = param_1;
  pbStack_c4 = (byte *)0x1ee6a;
  iVar2 = FUN_0001c5f0();
  if (iVar2 != 0) {
    ppbVar5 = &pbStack_c0;
    pbStack_c0 = (byte *)s_NaN_0001ee0e;
    goto LAB_0001ef3f;
  }
  DAT_0002b728 = 0x90;
  pbStack_c0 = local_20;
  pbStack_c4 = param_1;
  pbStack_c8 = (byte *)0x1ee94;
  FUN_0001c4e0();
  if ((short)local_e < 0) {
    local_80 = -1;
    local_e = local_e & 0x7fff;
  }
  else {
    local_80 = 0;
  }
  local_84 = (byte *)0x0;
  pbStack_c0 = local_3c;
  pbStack_c4 = &DAT_0002b714;
  pbStack_c8 = (byte *)0x1eecb;
  FUN_0001c4e0();
  if (local_e == 0) {
    iVar2 = 0;
    do {
      if (*(short *)(local_20 + iVar2 * 2) != 0) goto LAB_0001eef0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
  }
  else {
LAB_0001eef0:
    if (local_e == 0x7fff) {
      if (local_80 == 0) {
        ppbVar5 = &pbStack_c0;
        pbStack_c0 = (byte *)s_Infinity_0001ee20;
      }
      else {
        ppbVar5 = &pbStack_c0;
        pbStack_c0 = (byte *)s__Infinity_0001ee14;
      }
LAB_0001ef3f:
      *(undefined1 **)((int)ppbVar5 + -4) = param_2;
      *(undefined4 *)((int)ppbVar5 + -8) = 0x1ef48;
      FUN_0000f910();
      DAT_0002b728 = uVar1;
      DAT_000383d8 = (byte *)0x270f;
      return;
    }
    if ((local_e != 0) && (-1 < local_10)) {
      pbStack_c0 = (byte *)0x1;
      pbStack_c4 = (byte *)s_etoasc_0001ee2b;
      pbStack_c8 = (byte *)0x1ef3a;
      FUN_00020400();
      ppbVar5 = &pbStack_c8;
      pbStack_c8 = &DAT_0001ee32;
      goto LAB_0001ef3f;
    }
    pbStack_c4 = &DAT_0002b714;
    pbStack_c8 = (byte *)0x1ef6e;
    pbStack_c0 = local_20;
    iVar2 = FUN_0001e600();
    if (iVar2 != 0) {
      if (iVar2 < 0) {
        pbStack_c8 = (byte *)0x1ef91;
        pbStack_c4 = local_20;
        pbStack_c0 = local_58;
        FUN_0001c4e0();
        local_46 = 0x408e;
        pbVar10 = &DAT_0002b81c;
        uVar7 = 0x10;
        do {
          pbStack_c8 = pbVar10;
          pbStack_c4 = local_58;
          pbStack_c0 = local_3c;
          FUN_0001de10();
          FUN_0001fdb0(local_3c,local_74);
          iVar2 = 0;
          do {
            if (*(short *)(local_74 + iVar2 * 2) != *(short *)(local_3c + iVar2 * 2))
            goto LAB_0001f000;
            iVar2 = iVar2 + 1;
          } while (iVar2 < 9);
          pbStack_c8 = (byte *)0x1eff7;
          pbStack_c4 = local_3c;
          pbStack_c0 = local_58;
          FUN_0001c4e0();
          local_84 = local_84 + uVar7;
LAB_0001f000:
          pbVar10 = pbVar10 + 0x14;
          uVar6 = (ushort)uVar7 >> 1;
          uVar7 = (uint)uVar6;
        } while (uVar6 != 0);
        local_46 = local_46 + -0x408e + local_e;
        pbStack_c0 = local_20;
        pbStack_c8 = (byte *)0x1f02c;
        pbStack_c4 = local_58;
        FUN_0001c4e0();
        pbStack_c8 = local_3c;
        FUN_0001c4e0(&DAT_0002b714);
        uVar7 = 0x1000;
        pbVar10 = &DAT_0002b77c;
        while( true ) {
          pbStack_c4 = &DAT_0002b86c;
          pbStack_c8 = (byte *)0x1f05b;
          pbStack_c0 = local_58;
          iVar2 = FUN_0001e600();
          if (0 < iVar2) break;
          pbStack_c8 = (byte *)0x1f06d;
          pbStack_c4 = pbVar10;
          pbStack_c0 = local_58;
          iVar2 = FUN_0001e600();
          if (iVar2 < 1) {
            pbStack_c8 = pbVar10;
            pbStack_c4 = local_58;
            pbStack_c0 = local_58;
            FUN_0001de10();
            FUN_0001e050(pbVar10,local_3c,local_3c);
            local_84 = local_84 + uVar7;
          }
          uVar6 = (ushort)uVar7 >> 1;
          uVar7 = (uint)uVar6;
          if (uVar6 == 0) break;
          pbVar10 = pbVar10 + 0x14;
        }
      }
      else {
        if (local_e == 0) {
          if (-1 < local_10) {
            do {
              pbStack_c8 = &DAT_0002b86c;
              pbStack_c4 = local_20;
              pbStack_c0 = local_20;
              FUN_0001e050();
              local_84 = local_84 + -1;
            } while (-1 < local_10);
          }
        }
        else {
          pbStack_c4 = local_20;
          pbStack_c8 = (byte *)0x1f0f3;
          pbStack_c0 = local_74;
          FUN_0001c690();
          iVar2 = 0;
          while ((local_5c & 7) == 0) {
            pbStack_c8 = (byte *)0x1f111;
            pbStack_c4 = local_74;
            pbStack_c0 = local_58;
            FUN_0001c9c0();
            pbStack_c8 = local_58;
            FUN_0001cb30();
            FUN_0001cb30(local_58);
            FUN_0001cf40(local_74,local_58);
            local_56 = local_56 + 3;
            while (local_54 != 0) {
              pbStack_c4 = (byte *)0x1f13a;
              pbStack_c0 = local_58;
              FUN_0001cb30();
              local_56 = local_56 + 1;
            }
            if ((local_40 != 0) || (DAT_0002b726 <= local_56)) break;
            pbStack_c8 = (byte *)0x1f162;
            pbStack_c4 = local_58;
            pbStack_c0 = local_74;
            FUN_0001c9c0();
            local_84 = local_84 + -1;
            iVar2 = iVar2 + 1;
            if (0x2a < iVar2) break;
          }
          pbStack_c0 = local_20;
          pbStack_c4 = local_74;
          pbStack_c8 = (byte *)0x1f17b;
          FUN_0001c810();
        }
        iVar2 = -0x1000;
        puVar8 = &DAT_0002b880;
        local_7c = &DAT_0002b77c;
        pbStack_c4 = local_20;
        pbStack_c8 = (byte *)0x1f1a2;
        pbStack_c0 = local_74;
        FUN_0001c4e0();
        pbStack_c8 = local_3c;
        FUN_0001c4e0(&DAT_0002b714);
        while( true ) {
          pbStack_c4 = &DAT_0002b714;
          pbStack_c8 = (byte *)0x1f1c7;
          pbStack_c0 = local_74;
          iVar3 = FUN_0001e600();
          if (iVar3 < 1) break;
          pbStack_c8 = (byte *)0x1f1d5;
          pbStack_c4 = puVar8;
          pbStack_c0 = local_74;
          iVar3 = FUN_0001e600();
          if (-1 < iVar3) {
            pbStack_c8 = local_7c;
            pbStack_c4 = local_74;
            pbStack_c0 = local_74;
            FUN_0001e050();
            FUN_0001e050(local_7c,local_3c,local_3c);
            local_84 = local_84 + iVar2;
          }
          iVar2 = iVar2 / 2;
          if (iVar2 == 0) break;
          puVar8 = puVar8 + 0x14;
          local_7c = local_7c + 0x14;
        }
        pbStack_c8 = local_3c;
        pbStack_c4 = &DAT_0002b714;
        pbStack_c0 = pbStack_c8;
        FUN_0001de10();
      }
    }
  }
  pbStack_c8 = (byte *)0x1f245;
  pbStack_c4 = local_3c;
  pbStack_c0 = local_74;
  FUN_0001c690();
  pbStack_c8 = local_3c;
  FUN_0001c9c0(local_74);
  FUN_0001c690(local_20,local_74);
  FUN_0001c9c0(local_74,local_20);
  pbStack_c8 = (byte *)0x1f279;
  pbStack_c4 = local_3c;
  pbStack_c0 = local_20;
  FUN_0001fef0();
  uVar6 = DAT_0002b744;
  if (DAT_0002b744 == 0) {
    do {
      uVar6 = DAT_0002b744;
      pbStack_c0 = &DAT_0002b700;
      pbStack_c8 = (byte *)0x1f29b;
      pbStack_c4 = local_20;
      iVar2 = FUN_0001e600();
      if (iVar2 == 0) break;
      pbStack_c4 = (byte *)0x1f2a8;
      pbStack_c0 = local_20;
      FUN_0001cc20();
      pbStack_c8 = local_20;
      pbStack_c4 = local_58;
      FUN_0001c9c0();
      FUN_0001cc20(local_58);
      FUN_0001cc20(local_58);
      FUN_0001cf40(local_58,local_20);
      FUN_0001fef0(local_3c,local_20);
      local_84 = local_84 + -1;
      uVar6 = DAT_0002b744;
    } while (DAT_0002b744 == 0);
  }
  if (local_80 == 0) {
    *param_2 = 0x20;
  }
  else {
    *param_2 = 0x2d;
  }
  if (DAT_0002b984 == 3) {
    local_8c = param_3 + (int)local_84;
  }
  if (0x2a < (int)local_8c) {
    local_8c = 0x2a;
  }
  if (uVar6 == 10) {
    param_2[1] = '1';
    param_2[2] = 0x2e;
    pbVar9 = param_2 + 3;
    if (0 < (int)local_8c) {
      *pbVar9 = 0x30;
      pbVar9 = param_2 + 4;
      local_8c = local_8c + -1;
    }
    local_84 = local_84 + 1;
    pbVar10 = pbVar9;
    if ((int)local_8c < 0) goto LAB_0001f582;
  }
  else {
    local_78 = (char)uVar6;
    param_2[1] = local_78 + '0';
    param_2[2] = 0x2e;
    pbVar10 = param_2 + 3;
  }
  iVar2 = 0;
  if (-1 < (int)local_8c) {
    if ((local_8c & 1) == 0) {
      pbStack_c4 = (byte *)0x1f393;
      pbStack_c0 = local_20;
      FUN_0001cc20();
      pbStack_c8 = local_20;
      pbStack_c4 = local_58;
      FUN_0001c9c0();
      FUN_0001cc20(local_58);
      FUN_0001cc20(local_58);
      FUN_0001cf40(local_58,local_20);
      FUN_0001fef0(local_3c,local_20);
      *pbVar10 = (char)DAT_0002b744 + 0x30;
      pbVar10 = pbVar10 + 1;
      iVar2 = 1;
      if ((int)local_8c < 1) goto LAB_0001f4e4;
    }
    do {
      pbStack_c4 = (byte *)0x1f410;
      pbStack_c0 = local_20;
      FUN_0001cc20();
      pbStack_c8 = local_20;
      pbStack_c4 = local_58;
      FUN_0001c9c0();
      FUN_0001cc20(local_58);
      FUN_0001cc20(local_58);
      FUN_0001cf40(local_58,local_20);
      FUN_0001fef0(local_3c,local_20);
      *pbVar10 = (char)DAT_0002b744 + 0x30;
      pbStack_c4 = (byte *)0x1f478;
      pbStack_c0 = local_20;
      FUN_0001cc20();
      pbStack_c8 = local_20;
      pbStack_c4 = local_58;
      FUN_0001c9c0();
      FUN_0001cc20(local_58);
      FUN_0001cc20(local_58);
      FUN_0001cf40(local_58,local_20);
      FUN_0001fef0(local_3c,local_20);
      pbVar10[1] = (char)DAT_0002b744 + 0x30;
      pbVar10 = pbVar10 + 2;
      iVar2 = iVar2 + 2;
    } while (iVar2 <= (int)local_8c);
  }
LAB_0001f4e4:
  pbVar9 = pbVar10 + -1;
  if (4 < DAT_0002b744) {
    pbVar11 = pbVar9;
    if (DAT_0002b744 == 5) {
      pbStack_c4 = local_20;
      pbStack_c8 = (byte *)0x1f514;
      pbStack_c0 = local_3c;
      FUN_0001c810();
      pbStack_c8 = &DAT_0002b700;
      iVar2 = FUN_0001e600(local_3c);
      if ((iVar2 == 0) && ((pbVar10[-2] & 1) == 0)) goto LAB_0001f582;
    }
    while( true ) {
      pbVar10 = pbVar11 + -1;
      if ((int)local_8c < 0) break;
      if ((*pbVar10 & 0x7f) == 0x2e) {
        pbVar11 = pbVar11 + -2;
        bVar4 = *pbVar11;
        *pbVar11 = (byte)(bVar4 + 1);
        if (0x39 < bVar4 + 1) {
          local_84 = local_84 + 1;
          *pbVar11 = 0x31;
        }
        goto LAB_0001f582;
      }
      bVar4 = (*pbVar10 & 0x7f) + 1;
      *pbVar10 = bVar4;
      if (bVar4 < 0x3a) goto LAB_0001f582;
      *pbVar10 = 0x30;
      pbVar11 = pbVar10;
    }
    *pbVar10 = 0x31;
    local_84 = local_84 + 1;
  }
LAB_0001f582:
  pbStack_c0 = local_84;
  pbStack_c4 = &DAT_0001ee36;
  pbStack_c8 = pbVar9;
  FUN_0000f910();
  DAT_0002b728 = uVar1;
  DAT_000383d8 = local_84;
  return;
}



/* --- FUN_0001f5c0 @ 0001f5c0 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_0001f5c0(int param_1,int *param_2)

{
  unkbyte10 local_10;
  
  FUN_0001f600(param_1,&local_10,0x40);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + _DAT_000383dc;
  }
  return local_10;
}



/* --- FUN_0001f600 @ 0001f600 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001f600(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte bVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined *puVar17;
  int aiStack_b8 [9];
  byte *local_84;
  undefined2 local_80;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_5c;
  undefined1 local_58 [2];
  ushort local_56;
  undefined1 local_3c [4];
  short local_38;
  undefined2 local_26;
  undefined2 local_20;
  ushort local_1e;
  short local_1c;
  
  uVar9 = 0xffffffff;
  pcVar11 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar9 + 1;
  iVar2 = -(~uVar9 + 4 & 0xfffffffc);
  pcVar11 = &stack0xffffff6c + iVar2;
  _DAT_000383dc = (byte *)0x0;
  cVar1 = *param_1;
  local_84 = (byte *)param_1;
  while (cVar1 == ' ') {
    local_84 = local_84 + 1;
    _DAT_000383dc = (byte *)((int)_DAT_000383dc + 1);
    cVar1 = *local_84;
  }
  iVar15 = 0;
  pcVar10 = &stack0xffffff6c + iVar2;
  if (0 < iVar7) {
    do {
      cVar1 = *local_84;
      *pcVar10 = cVar1;
      local_84 = local_84 + 1;
      pcVar11 = pcVar10 + 1;
      if (cVar1 == '\0') break;
      iVar15 = iVar15 + 1;
      pcVar10 = pcVar11;
    } while (iVar15 < iVar7);
  }
  *pcVar11 = '\0';
  uVar6 = DAT_0002b728;
  DAT_0002b728 = 0x90;
  local_74 = 0;
  local_80 = 0;
  bVar3 = false;
  bVar5 = false;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
  *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x1c) = 0x1f6d1;
  FUN_0001c900();
  bVar4 = false;
  puVar14 = &stack0xffffff6c + iVar2;
  local_84 = &stack0xffffff6c + iVar2;
  do {
    uVar9 = *local_84 - 0x30;
    if (uVar9 < 10) {
      if (((local_70 != 0) || (bVar3)) || (uVar9 != 0)) {
        if ((!bVar4) && (pbVar12 = local_84, bVar3)) {
          for (; (byte)(*pbVar12 - 0x30) < 10; pbVar12 = pbVar12 + 1) {
          }
          bVar13 = *pbVar12 & 0x7f;
          if (((bVar13 != 0x65) && (bVar13 != 0x45)) &&
             (((*pbVar12 & 0x7f) != 0 &&
              ((((bVar13 != 10 && (bVar13 != 0xd)) && (bVar13 != 0x20)) && (bVar13 != 0x2c))))))
          goto switchD_0001f7ff_caseD_1;
          while (pbVar12 = pbVar12 + -1, *pbVar12 == 0x30) {
            *pbVar12 = 0x7a;
          }
          bVar4 = true;
          if (*local_84 == 0x7a) goto switchD_0001f7ff_caseD_7a;
        }
        if (local_1c == 0) {
          if (bVar3) {
            local_68 = local_68 + 1;
          }
          *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x1c) = 0x1f795;
          FUN_0001cc20();
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_3c;
          *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x18) = &local_20;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x14) = 0x1f79f;
          FUN_0001c9c0();
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x14) = local_3c;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x10) = 0x1f7a5;
          FUN_0001cc20();
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x10) = local_3c;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0xc) = 0x1f7ab;
          FUN_0001cc20();
          *(undefined2 **)((int)aiStack_b8 + iVar2 + 0xc) = &local_20;
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 8) = local_3c;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 4) = 0x1f7b2;
          FUN_0001cf40();
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 4) = local_3c;
          *(undefined4 *)((int)aiStack_b8 + iVar2) = 0x1f7b8;
          FUN_0001c900();
          local_26 = (undefined2)uVar9;
          *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_3c;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1f7c6;
          FUN_0001cf40();
        }
        else {
          local_74 = local_74 | uVar9;
          if (!bVar3) {
            local_68 = local_68 + -1;
          }
        }
        local_70 = local_70 + 1;
      }
      goto switchD_0001f7ff_caseD_7a;
    }
    switch(*local_84) {
    case 0:
    case 10:
    case 0xd:
    case 0x20:
    case 0x2c:
      goto switchD_0001f7ff_caseD_0;
    case 0x2b:
      goto switchD_0001f7ff_caseD_2b;
    case 0x2d:
      local_80 = 0xffff;
switchD_0001f7ff_caseD_2b:
      if (bVar5) goto switchD_0001f7ff_caseD_1;
      bVar5 = true;
switchD_0001f7ff_caseD_7a:
      local_84 = local_84 + 1;
      break;
    case 0x2e:
      if (!bVar3) {
        bVar3 = true;
        goto switchD_0001f7ff_caseD_7a;
      }
    default:
switchD_0001f7ff_caseD_1:
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x20) = 0xd0;
      *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x1c) = &local_20;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fa3e;
      FUN_000201b0();
      puVar14 = &stack0xffffff6c + iVar2;
      goto LAB_0001fcf7;
    case 0x45:
    case 0x65:
      local_5c = 1;
      local_6c = 0;
      pbVar12 = local_84 + 1;
      if (local_84[1] == 0x2d) {
        local_5c = -1;
        pbVar12 = local_84 + 2;
      }
      local_84 = pbVar12;
      if (*local_84 == 0x2b) {
        local_84 = local_84 + 1;
      }
      goto LAB_0001fad0;
    case 0x49:
    case 0x69:
      goto switchD_0001f7ff_caseD_49;
    case 0x7a:
      goto switchD_0001f7ff_caseD_7a;
    }
  } while( true );
  while( true ) {
    local_6c = (*local_84 - 0x30) + local_6c * 10;
    local_84 = local_84 + 1;
    if (0x1371 < (int)local_6c) break;
LAB_0001fad0:
    if (9 < (byte)(*local_84 - 0x30)) {
      if (local_5c < 0) {
        local_6c = -local_6c;
      }
      if (0x1344 < (int)local_6c) goto switchD_0001f7ff_caseD_49;
      if (-0x1372 < (int)local_6c) goto switchD_0001f7ff_caseD_0;
      goto LAB_0001fb19;
    }
  }
  if (-1 < local_5c) {
switchD_0001f7ff_caseD_49:
    *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x1c) = 0x1faf6;
    FUN_0001c900();
    local_1e = 0x7fff;
    puVar14 = &stack0xffffff6c + iVar2;
    goto LAB_0001fcf7;
  }
LAB_0001fb19:
  *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
  goto LAB_0001fb97;
switchD_0001f7ff_caseD_0:
  local_68 = local_6c - local_68;
  if ((0 < (int)local_68) && (local_1c == 0)) {
    while( true ) {
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x20) = local_3c;
      *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x1c) = &local_20;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fb43;
      FUN_0001c9c0();
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x18) = local_3c;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x14) = 0x1fb49;
      FUN_0001cc20();
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x14) = local_3c;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x10) = 0x1fb4f;
      FUN_0001cc20();
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x10) = local_3c;
      *(undefined2 **)((int)aiStack_b8 + iVar2 + 0xc) = &local_20;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 8) = 0x1fb56;
      FUN_0001cf40();
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 8) = local_3c;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 4) = 0x1fb5c;
      FUN_0001cc20();
      if (local_38 != 0) break;
      local_68 = local_68 - 1;
      *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_3c;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fb70;
      FUN_0001c9c0();
      if (((int)local_68 < 1) || (local_1c != 0)) break;
    }
  }
  *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
  *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x1c) = 0x1fb89;
  iVar7 = FUN_0001eb40();
  if (iVar7 < 0x91) {
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x20) = 0x40;
    *(int *)((int)aiStack_b8 + iVar2 + 0x1c) = (int)&DAT_0000408e - iVar7;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0;
    *(uint *)((int)aiStack_b8 + iVar2 + 0x14) = local_74;
    *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x10) = &local_20;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0xc) = 0x1fbc9;
    FUN_0001d690();
    uVar9 = (uint)local_1e;
    if (local_68 == 0) {
      uVar16 = 0;
    }
    else {
      local_5c = 1;
      if ((int)local_68 < 0) {
        local_68 = -local_68;
        local_5c = -1;
        if (0x1000 < (int)local_68) {
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x20) = local_58;
          *(undefined **)((int)aiStack_b8 + iVar2 + 0x1c) = &DAT_0002b77c;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fc0e;
          FUN_0001c690();
          uVar8 = (uint)local_56;
          *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x18) = &local_20;
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x14) = local_58;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x10) = 0x1fc1e;
          FUN_0001d2a0();
          uVar9 = (uVar9 - uVar8) + 0x3fff;
          local_68 = local_68 - 0x1000;
        }
      }
      puVar17 = &DAT_0002b86c;
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x20) = local_3c;
      *(undefined **)((int)aiStack_b8 + iVar2 + 0x1c) = &DAT_0002b714;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fc41;
      FUN_0001c4e0();
      local_6c = 1;
      do {
        if ((local_6c & local_68) != 0) {
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x20) = local_3c;
          *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_3c;
          *(undefined **)((int)aiStack_b8 + iVar2 + 0x18) = puVar17;
          *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x14) = 0x1fc5c;
          FUN_0001e050();
        }
        puVar17 = puVar17 + -0x14;
        local_6c = local_6c << 1;
      } while ((int)local_6c < 0x1001);
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x20) = local_58;
      *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_3c;
      *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fc7c;
      FUN_0001c690();
      if (local_5c < 0) {
        *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
        *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_58;
        *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fc95;
        uVar16 = FUN_0001d2a0();
        uVar9 = (uVar9 - local_56) + 0x3fff;
      }
      else {
        *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
        *(undefined1 **)((int)aiStack_b8 + iVar2 + 0x1c) = local_58;
        *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0x1fcb3;
        uVar16 = FUN_0001d4c0();
        uVar9 = (uVar9 + local_56) - 0x3ffe;
      }
    }
    if (param_3 == 0x35) {
      uVar9 = uVar9 - 0x3c00;
    }
    else if (param_3 == 0x18) {
      uVar9 = uVar9 - 0x3f80;
    }
    DAT_0002b728 = param_3;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x20) = 0x40;
    *(uint *)((int)aiStack_b8 + iVar2 + 0x1c) = uVar9;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x18) = 0;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x14) = uVar16;
    *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x10) = &local_20;
    *(undefined4 *)((int)aiStack_b8 + iVar2 + 0xc) = 0x1fcf4;
    FUN_0001d690();
    goto LAB_0001fcf7;
  }
  *(undefined2 **)((int)aiStack_b8 + iVar2 + 0x20) = &local_20;
LAB_0001fb97:
  *(undefined4 *)((int)aiStack_b8 + iVar2 + 0x1c) = 0x1fb9c;
  FUN_0001c900();
  puVar14 = &stack0xffffff6c + iVar2;
LAB_0001fcf7:
  local_20 = local_80;
  DAT_0002b728 = uVar6;
  if (param_3 == 0x40) {
    *(undefined4 *)(puVar14 + -4) = param_2;
    *(undefined2 **)(puVar14 + -8) = &local_20;
    *(undefined4 *)(puVar14 + -0xc) = 0x1fd6d;
    FUN_0001e3d0();
  }
  else if (param_3 < 0x41) {
    if (param_3 == 0x18) {
      *(undefined4 *)(puVar14 + -4) = param_2;
      *(undefined2 **)(puVar14 + -8) = &local_20;
      *(undefined4 *)(puVar14 + -0xc) = 0x1fd5d;
      FUN_0001e550();
    }
    else if (param_3 == 0x35) {
      *(undefined4 *)(puVar14 + -4) = param_2;
      *(undefined2 **)(puVar14 + -8) = &local_20;
      *(undefined4 *)(puVar14 + -0xc) = 0x1fd4d;
      FUN_0001e470();
    }
  }
  else if (param_3 == 0x71) {
    *(undefined4 *)(puVar14 + -4) = param_2;
    *(undefined2 **)(puVar14 + -8) = &local_20;
    *(undefined4 *)(puVar14 + -0xc) = 0x1fd7d;
    FUN_0001e310();
  }
  else if (param_3 == 0x90) {
    *(undefined4 *)(puVar14 + -4) = param_2;
    *(undefined2 **)(puVar14 + -8) = &local_20;
    *(undefined4 *)(puVar14 + -0xc) = 0x1fd8d;
    FUN_0001c810();
  }
  _DAT_000383dc = local_84 + ((int)_DAT_000383dc - (int)(&stack0xffffff6c + iVar2));
  return;
}



/* --- FUN_0001fdb0 @ 0001fdb0 --- */

void FUN_0001fdb0(undefined4 param_1,ushort *param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort local_18 [9];
  ushort local_6;
  
  FUN_0001c4e0(param_1,local_18);
  iVar3 = (local_6 & 0x7fff) - 0x3ffe;
  if (iVar3 < 1) {
    FUN_0001c490(param_2);
    goto LAB_0001feb5;
  }
  iVar3 = -iVar3;
  iVar4 = iVar3 + 0x90;
  FUN_0001c4e0(local_18,param_2);
  if (iVar4 < 1) {
    return;
  }
  puVar2 = param_2;
  if (0xf < iVar4) {
    uVar1 = 0xfU - iVar4 & 0x3f;
    if (uVar1 != 0) {
      if (uVar1 < 0x30) {
        if (uVar1 < 0x20) {
          if (uVar1 < 0x10) goto LAB_0001fe88;
          *param_2 = 0;
          puVar2 = param_2 + 1;
          iVar4 = iVar3 + 0x80;
        }
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -0x10;
      }
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -0x10;
      if (iVar4 < 0x10) goto LAB_0001feaa;
    }
LAB_0001fe88:
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + -0x40;
    } while (0xf < iVar4);
  }
LAB_0001feaa:
  *puVar2 = *puVar2 & *(ushort *)(&DAT_0002b988 + iVar4 * 2);
LAB_0001feb5:
  if ((short)local_6 < 0) {
    iVar3 = 0;
    puVar2 = param_2;
    do {
      if (*puVar2 != local_18[iVar3]) {
        FUN_0001db10(&DAT_0002b714,param_2,param_2);
        return;
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
  }
  return;
}



/* --- FUN_0001fef0 @ 0001fef0 --- */

void FUN_0001fef0(undefined2 *param_1,undefined2 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined2 **ppuVar7;
  undefined1 *puVar8;
  undefined2 *puStack_1c;
  undefined2 *puStack_18;
  
  uVar1 = param_1[1];
  puStack_18 = param_1;
  puStack_1c = (undefined2 *)0x1ff0f;
  iVar2 = FUN_0001eb40();
  iVar2 = (uint)uVar1 - iVar2;
  uVar1 = param_2[1];
  puStack_1c = param_2;
  iVar3 = FUN_0001eb40();
  iVar3 = (uint)uVar1 - iVar3;
  FUN_0001c900(&DAT_0002b72c);
  puVar8 = &stack0xffffffec;
  puVar6 = &stack0xffffffec;
  if (iVar2 <= iVar3) {
    uVar4 = (iVar2 + -1) - iVar3 & 3;
    if (uVar4 == 0) goto LAB_00020040;
    if (uVar4 < 3) {
      if (uVar4 < 2) {
        puStack_18 = param_2;
        puStack_1c = param_1;
        iVar5 = FUN_0001cac0();
        if (iVar5 < 1) {
          puStack_18 = param_2;
          puStack_1c = param_1;
          FUN_0001d040();
        }
        puStack_18 = &DAT_0002b72c;
        puStack_1c = (undefined2 *)0x1ff8c;
        FUN_0001cc20();
        DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
        puStack_1c = param_2;
        FUN_0001cc20();
        iVar3 = iVar3 + -1;
      }
      puStack_18 = param_2;
      puStack_1c = param_1;
      iVar5 = FUN_0001cac0();
      if (iVar5 < 1) {
        puStack_18 = param_2;
        puStack_1c = param_1;
        FUN_0001d040();
      }
      puStack_18 = &DAT_0002b72c;
      puStack_1c = (undefined2 *)0x1ffdc;
      FUN_0001cc20();
      DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
      puStack_1c = param_2;
      FUN_0001cc20();
      iVar3 = iVar3 + -1;
    }
    puStack_18 = param_2;
    puStack_1c = param_1;
    iVar5 = FUN_0001cac0();
    if (iVar5 < 1) {
      puStack_18 = param_2;
      puStack_1c = param_1;
      FUN_0001d040();
    }
    puStack_18 = &DAT_0002b72c;
    puStack_1c = (undefined2 *)0x2002c;
    FUN_0001cc20();
    DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
    ppuVar7 = &puStack_1c;
    puStack_1c = param_2;
    FUN_0001cc20();
    iVar3 = iVar3 + -1;
    while( true ) {
      puVar8 = (undefined1 *)((int)ppuVar7 + 8);
      puVar6 = (undefined1 *)((int)ppuVar7 + 8);
      if (iVar3 < iVar2) break;
LAB_00020040:
      *(undefined2 **)(puVar6 + -4) = param_2;
      *(undefined2 **)(puVar6 + -8) = param_1;
      *(undefined4 *)(puVar6 + -0xc) = 0x2004a;
      iVar5 = FUN_0001cac0();
      if (iVar5 < 1) {
        *(undefined2 **)(puVar6 + -4) = param_2;
        *(undefined2 **)(puVar6 + -8) = param_1;
        *(undefined4 *)(puVar6 + -0xc) = 0x2005b;
        FUN_0001d040();
      }
      *(undefined2 **)(puVar6 + -4) = &DAT_0002b72c;
      *(undefined4 *)(puVar6 + -8) = 0x2007c;
      FUN_0001cc20();
      DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
      *(undefined2 **)(puVar6 + -8) = param_2;
      *(undefined4 *)(puVar6 + -0xc) = 0x20089;
      FUN_0001cc20();
      *(undefined2 **)(puVar6 + -4) = param_2;
      *(undefined2 **)(puVar6 + -8) = param_1;
      *(undefined4 *)(puVar6 + -0xc) = 0x20096;
      iVar5 = FUN_0001cac0();
      if (iVar5 < 1) {
        *(undefined2 **)(puVar6 + -4) = param_2;
        *(undefined2 **)(puVar6 + -8) = param_1;
        *(undefined4 *)(puVar6 + -0xc) = 0x200a7;
        FUN_0001d040();
      }
      *(undefined2 **)(puVar6 + -4) = &DAT_0002b72c;
      *(undefined4 *)(puVar6 + -8) = 0x200cc;
      FUN_0001cc20();
      DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
      *(undefined2 **)(puVar6 + -8) = param_2;
      *(undefined4 *)(puVar6 + -0xc) = 0x200d9;
      FUN_0001cc20();
      *(undefined2 **)(puVar6 + -4) = param_2;
      *(undefined2 **)(puVar6 + -8) = param_1;
      *(undefined4 *)(puVar6 + -0xc) = 0x200e6;
      iVar5 = FUN_0001cac0();
      if (iVar5 < 1) {
        *(undefined2 **)(puVar6 + -4) = param_2;
        *(undefined2 **)(puVar6 + -8) = param_1;
        *(undefined4 *)(puVar6 + -0xc) = 0x200f7;
        FUN_0001d040();
      }
      *(undefined2 **)(puVar6 + -4) = &DAT_0002b72c;
      *(undefined4 *)(puVar6 + -8) = 0x2011c;
      FUN_0001cc20();
      DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
      *(undefined2 **)(puVar6 + -8) = param_2;
      *(undefined4 *)(puVar6 + -0xc) = 0x20129;
      FUN_0001cc20();
      *(undefined2 **)(puVar6 + -4) = param_2;
      *(undefined2 **)(puVar6 + -8) = param_1;
      *(undefined4 *)(puVar6 + -0xc) = 0x20136;
      iVar5 = FUN_0001cac0();
      if (iVar5 < 1) {
        *(undefined2 **)(puVar6 + -4) = param_2;
        *(undefined2 **)(puVar6 + -8) = param_1;
        *(undefined4 *)(puVar6 + -0xc) = 0x20147;
        FUN_0001d040();
      }
      *(undefined2 **)(puVar6 + -4) = &DAT_0002b72c;
      *(undefined4 *)(puVar6 + -8) = 0x2016c;
      FUN_0001cc20();
      DAT_0002b744 = DAT_0002b744 | iVar5 < 1;
      ppuVar7 = (undefined2 **)(puVar6 + -8);
      *(undefined2 **)(puVar6 + -8) = param_2;
      *(undefined4 *)(puVar6 + -0xc) = 0x20179;
      FUN_0001cc20();
      iVar3 = iVar3 + -4;
    }
  }
  *(undefined4 *)(puVar8 + -4) = 0;
  *(int *)(puVar8 + -8) = iVar3;
  *(undefined4 *)(puVar8 + -0xc) = 0;
  *(undefined4 *)(puVar8 + -0x10) = 0;
  *(undefined2 **)(puVar8 + -0x14) = param_2;
  *(undefined4 *)(puVar8 + -0x18) = 0x20195;
  FUN_0001d690();
  return;
}



/* --- FUN_000201b0 @ 000201b0 --- */

void FUN_000201b0(undefined2 *param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0x40) {
    uVar4 = 6;
    puVar2 = (undefined2 *)&DAT_0002b9ba;
  }
  else {
    if (0x40 < param_2) {
      if (param_2 == 0x90) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0xc000;
        param_1[9] = 0x7fff;
        return;
      }
      if (param_2 < 0x91) {
        if (param_2 == 0x71) {
          uVar4 = 8;
          puVar2 = (undefined2 *)&DAT_0002b9aa;
          goto LAB_00020310;
        }
      }
      else if (param_2 == 0xd0) {
        *param_1 = 0;
        param_1[1] = 0x7fff;
        param_1[2] = 0;
        param_1[3] = 0xc000;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        return;
      }
LAB_00020300:
      FUN_00020400(&DAT_0002019f,1);
      return;
    }
    if (param_2 == 0x18) {
      uVar4 = 2;
      puVar2 = &DAT_0002b9ce;
    }
    else {
      if (param_2 != 0x35) goto LAB_00020300;
      uVar4 = 4;
      puVar2 = &DAT_0002b9c6;
    }
  }
LAB_00020310:
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar4 & 3;
    if (uVar1 != 0) {
      if (1 < uVar1) {
        if (2 < uVar1) {
          *param_1 = *puVar2;
          puVar2 = puVar2 + 1;
          param_1 = param_1 + 1;
        }
        *param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
        uVar3 = (2 < uVar1) + 1;
      }
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1;
      if (uVar4 <= uVar3) {
        return;
      }
    }
    do {
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      param_1[3] = puVar2[3];
      puVar2 = puVar2 + 4;
      param_1 = param_1 + 4;
      uVar3 = uVar3 + 4;
    } while ((int)uVar3 < (int)uVar4);
  }
  return;
}



/* --- FUN_00020400 @ 00020400 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00020400(undefined4 param_1,int param_2)

{
  FUN_0000b478(&DAT_000203e8,param_1);
  _DAT_0002b9d4 = param_2;
  if (4 < param_2 - 1U) {
    param_2 = 0;
  }
  FUN_0000b478(s__s_error_000203ed,(&PTR_s_unknown_0002b9d8)[param_2]);
  return 0;
}



/* --- FUN_00020448 @ 00020448 --- */

void FUN_00020448(int param_1)

{
  *(undefined2 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 8) = 8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



/* --- FUN_00020478 @ 00020478 --- */

void FUN_00020478(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    param_1 = 3;
  }
  iVar2 = 1 << ((byte)param_1 & 0x1f);
  iVar1 = FUN_00004690(iVar2 * 4 + 0x14);
  *(int *)(iVar1 + 4) = param_1;
  *(int *)(iVar1 + 8) = iVar2;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0xe) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  return;
}



/* --- FUN_000204c8 @ 000204c8 --- */

void FUN_000204c8(int param_1)

{
  if ((param_1 != 0) && (*(short *)(param_1 + 0xc) == 0)) {
    FUN_00005058(param_1);
  }
  return;
}



/* --- FUN_000204e8 @ 000204e8 --- */

void FUN_000204e8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(int *)(param_1 + 0x10) = iVar1;
  puVar4 = (undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)(param_2 + 0x14);
  uVar5 = iVar1 - 1;
  if (-1 < (int)uVar5) {
    uVar2 = ~uVar5 & 3;
    if (uVar2 != 0) {
      if (uVar2 < 3) {
        if (uVar2 < 2) {
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
          puVar3 = (undefined4 *)(param_2 + 0x18);
          puVar4 = (undefined4 *)(param_1 + 0x18);
          uVar5 = iVar1 - 2;
        }
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      }
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
        return;
      }
    }
    do {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
      uVar5 = uVar5 - 4;
    } while (-1 < (int)uVar5);
  }
  return;
}



/* --- FUN_00020578 @ 00020578 --- */

int FUN_00020578(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_00020478(param_2);
  }
  else if (*(int *)(param_1 + 4) < param_2) {
    iVar1 = FUN_00020478(param_2);
    FUN_000204e8(iVar1,param_1);
    FUN_000204c8(param_1);
    param_1 = iVar1;
  }
  return param_1;
}



/* --- FUN_000205c8 @ 000205c8 --- */

int FUN_000205c8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *local_10;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  local_10 = (uint *)(param_1 + 0x14);
  local_8 = 0;
  uVar2 = uVar1 & 3;
  if (uVar2 != 0) {
    if (1 < uVar2) {
      if (2 < uVar2) {
        uVar4 = param_3 + (*(uint *)(param_1 + 0x14) & 0xffff) * param_2;
        uVar3 = (uVar4 >> 0x10) + param_2 * (*(uint *)(param_1 + 0x14) >> 0x10);
        param_3 = uVar3 >> 0x10;
        *(uint *)(param_1 + 0x14) = uVar3 * 0x10000 + (uVar4 & 0xffff);
        local_10 = (uint *)(param_1 + 0x18);
      }
      local_8 = (uint)(2 < uVar2);
      uVar3 = param_3 + (*local_10 & 0xffff) * param_2;
      uVar2 = (uVar3 >> 0x10) + param_2 * (*local_10 >> 0x10);
      param_3 = uVar2 >> 0x10;
      *local_10 = uVar2 * 0x10000 + (uVar3 & 0xffff);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    }
    uVar3 = param_3 + (*local_10 & 0xffff) * param_2;
    uVar2 = (uVar3 >> 0x10) + param_2 * (*local_10 >> 0x10);
    param_3 = uVar2 >> 0x10;
    *local_10 = uVar2 * 0x10000 + (uVar3 & 0xffff);
    local_10 = local_10 + 1;
    local_8 = local_8 + 1;
    if ((int)uVar1 <= (int)local_8) goto LAB_000207c3;
  }
  do {
    param_3 = param_3 + (*local_10 & 0xffff) * param_2;
    uVar2 = (param_3 >> 0x10) + param_2 * (*local_10 >> 0x10);
    *local_10 = uVar2 * 0x10000 + (param_3 & 0xffff);
    uVar3 = (uVar2 >> 0x10) + (local_10[1] & 0xffff) * param_2;
    uVar2 = (uVar3 >> 0x10) + param_2 * (local_10[1] >> 0x10);
    local_10[1] = uVar2 * 0x10000 + (uVar3 & 0xffff);
    uVar3 = (uVar2 >> 0x10) + (local_10[2] & 0xffff) * param_2;
    uVar2 = (uVar3 >> 0x10) + param_2 * (local_10[2] >> 0x10);
    local_10[2] = uVar2 * 0x10000 + (uVar3 & 0xffff);
    uVar3 = (uVar2 >> 0x10) + (local_10[3] & 0xffff) * param_2;
    uVar2 = (uVar3 >> 0x10) + param_2 * (local_10[3] >> 0x10);
    param_3 = uVar2 >> 0x10;
    local_10[3] = uVar2 * 0x10000 + (uVar3 & 0xffff);
    local_10 = local_10 + 4;
    local_8 = local_8 + 4;
  } while ((int)local_8 < (int)uVar1);
LAB_000207c3:
  if (param_3 != 0) {
    if (*(int *)(param_1 + 8) <= (int)uVar1) {
      param_1 = FUN_00020578(param_1,*(int *)(param_1 + 4) + 1);
    }
    *(uint *)(param_1 + 0x14 + uVar1 * 4) = param_3;
    *(uint *)(param_1 + 0x10) = uVar1 + 1;
  }
  return param_1;
}



/* --- FUN_00020808 @ 00020808 --- */

int FUN_00020808(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_8;
  
  iVar7 = (param_4 + 8) / 9;
  iVar4 = 0;
  local_8 = 1;
  if (1 < iVar7) {
    do {
      local_8 = local_8 << 1;
      iVar4 = iVar4 + 1;
    } while (local_8 < iVar7);
  }
  iVar4 = FUN_00020578(param_1,iVar4);
  *(undefined4 *)(iVar4 + 0x14) = param_5;
  *(undefined4 *)(iVar4 + 0x10) = 1;
  iVar7 = 9;
  if (param_3 < 10) {
    pbVar6 = (byte *)(param_2 + 10);
  }
  else {
    pbVar6 = (byte *)(param_2 + 9);
    uVar5 = param_3 - 9U & 3;
    if (uVar5 == 0) goto LAB_000208d8;
    if (1 < uVar5) {
      if (2 < uVar5) {
        bVar2 = *pbVar6;
        pbVar6 = (byte *)(param_2 + 10);
        iVar4 = FUN_000205c8(iVar4,10,bVar2 - 0x30);
        iVar7 = 10;
      }
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar4 = FUN_000205c8(iVar4,10,bVar2 - 0x30);
      iVar7 = iVar7 + 1;
    }
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar4 = FUN_000205c8(iVar4,10,bVar2 - 0x30);
    for (iVar7 = iVar7 + 1; iVar7 < param_3; iVar7 = iVar7 + 4) {
LAB_000208d8:
      uVar3 = FUN_000205c8(iVar4,10,*pbVar6 - 0x30);
      uVar3 = FUN_000205c8(uVar3,10,pbVar6[1] - 0x30);
      uVar3 = FUN_000205c8(uVar3,10,pbVar6[2] - 0x30);
      pbVar1 = pbVar6 + 3;
      pbVar6 = pbVar6 + 4;
      iVar4 = FUN_000205c8(uVar3,10,*pbVar1 - 0x30);
    }
    pbVar6 = pbVar6 + 1;
  }
  if (iVar7 < param_4) {
    uVar5 = param_4 - iVar7 & 3;
    if (uVar5 != 0) {
      if (1 < uVar5) {
        if (2 < uVar5) {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar4 = FUN_000205c8(iVar4,10,bVar2 - 0x30);
          iVar7 = iVar7 + 1;
        }
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        iVar4 = FUN_000205c8(iVar4,10,bVar2 - 0x30);
        iVar7 = iVar7 + 1;
      }
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar4 = FUN_000205c8(iVar4,10,bVar2 - 0x30);
      iVar7 = iVar7 + 1;
      if (param_4 <= iVar7) {
        return iVar4;
      }
    }
    do {
      uVar3 = FUN_000205c8(iVar4,10,*pbVar6 - 0x30);
      uVar3 = FUN_000205c8(uVar3,10,pbVar6[1] - 0x30);
      uVar3 = FUN_000205c8(uVar3,10,pbVar6[2] - 0x30);
      pbVar1 = pbVar6 + 3;
      pbVar6 = pbVar6 + 4;
      iVar4 = FUN_000205c8(uVar3,10,*pbVar1 - 0x30);
      iVar7 = iVar7 + 4;
    } while (iVar7 < param_4);
  }
  return iVar4;
}



/* --- FUN_00020a18 @ 00020a18 --- */

int FUN_00020a18(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff0000) == 0) {
    iVar1 = 0x10;
    param_1 = param_1 << 0x10;
  }
  if ((param_1 & 0xff000000) == 0) {
    iVar1 = iVar1 + 8;
    param_1 = param_1 << 8;
  }
  if ((param_1 & 0xf0000000) == 0) {
    iVar1 = iVar1 + 4;
    param_1 = param_1 << 4;
  }
  if ((param_1 & 0xc0000000) == 0) {
    iVar1 = iVar1 + 2;
    param_1 = param_1 << 2;
  }
  if ((-1 < (int)param_1) && (iVar1 = iVar1 + 1, (param_1 & 0x40000000) == 0)) {
    return 0x20;
  }
  return iVar1;
}



/* --- FUN_00020a88 @ 00020a88 --- */

int FUN_00020a88(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 7) == 0) {
    iVar1 = 0;
    if ((short)uVar2 == 0) {
      iVar1 = 0x10;
      uVar2 = uVar2 >> 0x10;
    }
    if ((char)uVar2 == '\0') {
      iVar1 = iVar1 + 8;
      uVar2 = uVar2 >> 8;
    }
    if ((uVar2 & 0xf) == 0) {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 >> 4;
    }
    if ((uVar2 & 3) == 0) {
      iVar1 = iVar1 + 2;
      uVar2 = uVar2 >> 2;
    }
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 >> 1;
      if (uVar2 == 0) {
        return 0x20;
      }
    }
    *param_1 = uVar2;
    return iVar1;
  }
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if ((uVar2 & 2) != 0) {
    *param_1 = uVar2 >> 1;
    return 1;
  }
  *param_1 = uVar2 >> 2;
  return 2;
}



/* --- FUN_00020b38 @ 00020b38 --- */

void FUN_00020b38(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00020578(param_1,1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}



/* --- FUN_00020b68 @ 00020b68 --- */

int FUN_00020b68(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  uint local_30;
  ushort local_2c;
  uint *local_14;
  int local_c;
  
  iVar6 = param_2;
  if (*(int *)(param_2 + 0x10) < *(int *)(param_3 + 0x10)) {
    param_2 = param_3;
    param_3 = iVar6;
  }
  iVar6 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(param_3 + 0x10);
  local_c = iVar5 + iVar4;
  if (*(int *)(param_2 + 8) < local_c) {
    iVar6 = iVar6 + 1;
  }
  iVar6 = FUN_00020578(param_1,iVar6);
  local_14 = (uint *)(iVar6 + 0x14);
  puVar1 = local_14 + local_c;
  if (local_14 < puVar1) {
    uVar7 = (int)puVar1 - (int)local_14 & 0xf;
    if (uVar7 == 0) goto LAB_00020c08;
    if (4 < uVar7) {
      if (8 < uVar7) {
        if (0xc < uVar7) goto LAB_00020c08;
        *(undefined4 *)(iVar6 + 0x14) = 0;
        local_14 = (uint *)(iVar6 + 0x18);
      }
      *local_14 = 0;
      local_14 = local_14 + 1;
    }
    *local_14 = 0;
    for (local_14 = local_14 + 1; local_14 < puVar1; local_14 = local_14 + 4) {
LAB_00020c08:
      *local_14 = 0;
      local_14[1] = 0;
      local_14[2] = 0;
      local_14[3] = 0;
    }
  }
  puVar10 = (uint *)(param_2 + 0x14);
  puVar2 = puVar10 + iVar4;
  puVar12 = (uint *)(param_3 + 0x14);
  puVar3 = puVar12 + iVar5;
  puVar11 = (uint *)(iVar6 + 0x14);
  for (; puVar12 < puVar3; puVar12 = puVar12 + 1) {
    uVar7 = (uint)(ushort)*puVar12;
    local_14 = puVar10;
    if (uVar7 != 0) {
      uVar15 = 0;
      uVar8 = (int)puVar2 - (int)puVar10 & 0xf;
      puVar13 = puVar11;
      if (uVar8 == 0) goto LAB_00020d98;
      if (4 < uVar8) {
        if (8 < uVar8) {
          if (0xc < uVar8) goto LAB_00020d98;
          uVar9 = uVar7 * *(ushort *)puVar10 + (uint)(ushort)*puVar11;
          uVar8 = (*puVar11 >> 0x10) + uVar7 * (*puVar10 >> 0x10) + (uVar9 >> 0x10);
          local_14 = (uint *)(param_2 + 0x18);
          uVar15 = uVar8 >> 0x10;
          local_30._0_2_ = (ushort)uVar8;
          *(ushort *)((int)puVar11 + 2) = (ushort)local_30;
          local_2c = (ushort)uVar9;
          *(ushort *)puVar11 = local_2c;
          puVar13 = puVar11 + 1;
        }
        uVar8 = (uint)(ushort)*puVar13 + uVar7 * (ushort)*local_14 + uVar15;
        uVar9 = (*puVar13 >> 0x10) + uVar7 * (*local_14 >> 0x10) + (uVar8 >> 0x10);
        local_14 = local_14 + 1;
        uVar15 = uVar9 >> 0x10;
        local_30._0_2_ = (ushort)uVar9;
        *(ushort *)((int)puVar13 + 2) = (ushort)local_30;
        local_2c = (ushort)uVar8;
        *(ushort *)puVar13 = local_2c;
        puVar13 = puVar13 + 1;
      }
      uVar15 = (uint)(ushort)*puVar13 + uVar7 * (ushort)*local_14 + uVar15;
      uVar8 = (*puVar13 >> 0x10) + uVar7 * (*local_14 >> 0x10) + (uVar15 >> 0x10);
      local_14 = local_14 + 1;
      local_30._0_2_ = (ushort)uVar8;
      *(ushort *)((int)puVar13 + 2) = (ushort)local_30;
      local_2c = (ushort)uVar15;
      *(ushort *)puVar13 = local_2c;
      puVar13 = puVar13 + 1;
      while (uVar15 = uVar8 >> 0x10, local_14 < puVar2) {
LAB_00020d98:
        uVar15 = (uint)(ushort)*puVar13 + uVar7 * (ushort)*local_14 + uVar15;
        uVar8 = (*puVar13 >> 0x10) + uVar7 * (*local_14 >> 0x10) + (uVar15 >> 0x10);
        local_30._0_2_ = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 2) = (ushort)local_30;
        local_2c = (ushort)uVar15;
        *(ushort *)puVar13 = local_2c;
        uVar15 = (uint)(ushort)puVar13[1] + uVar7 * (ushort)local_14[1] + (uVar8 >> 0x10);
        uVar8 = (puVar13[1] >> 0x10) + uVar7 * (local_14[1] >> 0x10) + (uVar15 >> 0x10);
        local_30._0_2_ = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 6) = (ushort)local_30;
        local_2c = (ushort)uVar15;
        *(ushort *)(puVar13 + 1) = local_2c;
        uVar15 = (uint)(ushort)puVar13[2] + uVar7 * (ushort)local_14[2] + (uVar8 >> 0x10);
        uVar8 = (puVar13[2] >> 0x10) + uVar7 * (local_14[2] >> 0x10) + (uVar15 >> 0x10);
        local_30._0_2_ = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 10) = (ushort)local_30;
        local_2c = (ushort)uVar15;
        *(ushort *)(puVar13 + 2) = local_2c;
        uVar15 = (uint)(ushort)puVar13[3] + uVar7 * (ushort)local_14[3] + (uVar8 >> 0x10);
        uVar8 = (puVar13[3] >> 0x10) + uVar7 * (local_14[3] >> 0x10) + (uVar15 >> 0x10);
        local_14 = local_14 + 4;
        local_30._0_2_ = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 0xe) = (ushort)local_30;
        local_2c = (ushort)uVar15;
        *(ushort *)(puVar13 + 3) = local_2c;
        puVar13 = puVar13 + 4;
      }
      *puVar13 = uVar15;
    }
    uVar7 = *puVar12 >> 0x10;
    if (uVar7 != 0) {
      uVar8 = 0;
      local_30 = *puVar11;
      uVar15 = (int)puVar2 - (int)puVar10 & 0xf;
      puVar13 = puVar11;
      local_14 = puVar10;
      if (uVar15 == 0) goto LAB_00021018;
      if (4 < uVar15) {
        if (8 < uVar15) {
          if (0xc < uVar15) goto LAB_00021018;
          uVar15 = uVar7 * *(ushort *)puVar10 + (*puVar11 >> 0x10);
          local_2c = (ushort)uVar15;
          *(ushort *)((int)puVar11 + 2) = local_2c;
          *(ushort *)puVar11 = (ushort)local_30;
          puVar13 = puVar11 + 1;
          uVar8 = (uint)(ushort)*puVar13 + uVar7 * (*puVar10 >> 0x10) + (uVar15 >> 0x10);
          local_30._0_2_ = (ushort)uVar8;
          local_14 = (uint *)(param_2 + 0x18);
          uVar8 = uVar8 >> 0x10;
        }
        uVar8 = (*puVar13 >> 0x10) + uVar7 * (ushort)*local_14 + uVar8;
        local_2c = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 2) = local_2c;
        *(ushort *)puVar13 = (ushort)local_30;
        puVar13 = puVar13 + 1;
        uVar8 = (uint)(ushort)*puVar13 + uVar7 * (*local_14 >> 0x10) + (uVar8 >> 0x10);
        local_30._0_2_ = (ushort)uVar8;
        local_14 = local_14 + 1;
        uVar8 = uVar8 >> 0x10;
      }
      uVar8 = (*puVar13 >> 0x10) + uVar7 * (ushort)*local_14 + uVar8;
      local_2c = (ushort)uVar8;
      *(ushort *)((int)puVar13 + 2) = local_2c;
      *(ushort *)puVar13 = (ushort)local_30;
      puVar13 = puVar13 + 1;
      local_30 = (uint)(ushort)*puVar13 + uVar7 * (*local_14 >> 0x10) + (uVar8 >> 0x10);
      for (local_14 = local_14 + 1; uVar8 = local_30 >> 0x10, local_14 < puVar2;
          local_14 = local_14 + 4) {
LAB_00021018:
        uVar8 = (*puVar13 >> 0x10) + uVar7 * (ushort)*local_14 + uVar8;
        local_2c = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 2) = local_2c;
        *(ushort *)puVar13 = (ushort)local_30;
        uVar15 = (uint)(ushort)puVar13[1] + uVar7 * (*local_14 >> 0x10) + (uVar8 >> 0x10);
        uVar8 = (puVar13[1] >> 0x10) + uVar7 * (ushort)local_14[1] + (uVar15 >> 0x10);
        local_2c = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 6) = local_2c;
        local_30._0_2_ = (ushort)uVar15;
        *(ushort *)(puVar13 + 1) = (ushort)local_30;
        uVar15 = (uint)(ushort)puVar13[2] + uVar7 * (local_14[1] >> 0x10) + (uVar8 >> 0x10);
        uVar8 = (puVar13[2] >> 0x10) + uVar7 * (ushort)local_14[2] + (uVar15 >> 0x10);
        local_2c = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 10) = local_2c;
        local_30._0_2_ = (ushort)uVar15;
        *(ushort *)(puVar13 + 2) = (ushort)local_30;
        uVar15 = (uint)(ushort)puVar13[3] + uVar7 * (local_14[2] >> 0x10) + (uVar8 >> 0x10);
        uVar8 = (puVar13[3] >> 0x10) + uVar7 * (ushort)local_14[3] + (uVar15 >> 0x10);
        local_2c = (ushort)uVar8;
        *(ushort *)((int)puVar13 + 0xe) = local_2c;
        local_30._0_2_ = (ushort)uVar15;
        *(ushort *)(puVar13 + 3) = (ushort)local_30;
        puVar13 = puVar13 + 4;
        local_30 = (uint)(ushort)*puVar13 + uVar7 * (local_14[3] >> 0x10) + (uVar8 >> 0x10);
      }
      *puVar13 = local_30;
    }
    puVar11 = puVar11 + 1;
  }
  if (0 < local_c) {
    piVar14 = (int *)(iVar6 + local_c * 4 + 0x10);
    iVar4 = *piVar14;
    while ((iVar4 == 0 && (local_c = local_c + -1, 0 < local_c))) {
      piVar14 = piVar14 + -1;
      iVar4 = *piVar14;
    }
  }
  *(int *)(iVar6 + 0x10) = local_c;
  return iVar6;
}



/* --- FUN_000211c8 @ 000211c8 --- */

undefined4 FUN_000211c8(undefined4 param_1,int param_2)

{
  for (; 6 < param_2; param_2 = param_2 + -6) {
    param_1 = FUN_000205c8(param_1,0x3d09,0);
  }
  if (param_2 != 0) {
    param_1 = FUN_000205c8(param_1,*(undefined4 *)(&DAT_0002b9f4 + param_2 * 4),0);
  }
  return param_1;
}



/* --- FUN_00021218 @ 00021218 --- */

int FUN_00021218(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar9 = *(int *)(param_1 + 4);
  local_10 = iVar1 + 1 + ((int)param_2 >> 5);
  if (param_2 != 0) {
    for (iVar2 = *(int *)(param_1 + 8); iVar2 < local_10; iVar2 = iVar2 * 2) {
      iVar9 = iVar9 + 1;
    }
    param_1 = FUN_00020578(param_1,iVar9);
    puVar8 = (uint *)(param_1 + 0x14);
    puVar12 = puVar8 + iVar1;
    puVar10 = puVar12 + ((int)param_2 >> 5);
    if ((param_2 & 0x1f) == 0) {
      uVar6 = (int)puVar8 - (int)puVar12 & 0xf;
      if (uVar6 == 0) goto LAB_000213e8;
      if (uVar6 < 0xc) {
        if (uVar6 < 8) {
          if (uVar6 < 4) goto LAB_000213e8;
          puVar10 = puVar10 + -1;
          puVar12 = puVar12 + -1;
          *puVar10 = *puVar12;
        }
        puVar10 = puVar10 + -1;
        puVar12 = puVar12 + -1;
        *puVar10 = *puVar12;
      }
      puVar10 = puVar10 + -1;
      for (puVar12 = puVar12 + -1; *puVar10 = *puVar12, puVar8 < puVar12; puVar12 = puVar12 + -4) {
LAB_000213e8:
        puVar10[-1] = puVar12[-1];
        puVar10[-2] = puVar12[-2];
        puVar10[-3] = puVar12[-3];
        puVar10 = puVar10 + -4;
      }
    }
    else {
      sVar3 = (sbyte)(param_2 & 0x1f);
      bVar7 = 0x20 - sVar3;
      puVar11 = puVar12 + -1;
      uVar6 = *puVar11;
      uVar4 = uVar6 >> (bVar7 & 0x1f);
      *puVar10 = uVar4;
      if (uVar4 != 0) {
        local_10 = local_10 + 1;
      }
      uVar4 = uVar6;
      if (puVar8 < puVar11) {
        uVar5 = (int)puVar8 - (int)puVar11 & 0xf;
        if (uVar5 == 0) goto LAB_00021318;
        if (uVar5 < 0xc) {
          if (uVar5 < 8) {
            if (uVar5 < 4) goto LAB_00021318;
            puVar11 = puVar12 + -2;
            uVar4 = *puVar11;
            puVar10 = puVar10 + -1;
            *puVar10 = uVar6 << sVar3 | uVar4 >> (bVar7 & 0x1f);
          }
          puVar11 = puVar11 + -1;
          uVar6 = *puVar11;
          puVar10 = puVar10 + -1;
          *puVar10 = uVar4 << sVar3 | uVar6 >> (bVar7 & 0x1f);
        }
        puVar11 = puVar11 + -1;
        uVar4 = *puVar11;
        puVar10 = puVar10 + -1;
        while (*puVar10 = uVar6 << sVar3 | uVar4 >> (bVar7 & 0x1f), puVar8 < puVar11) {
LAB_00021318:
          uVar6 = puVar11[-1];
          puVar10[-1] = uVar4 << sVar3 | uVar6 >> (bVar7 & 0x1f);
          uVar4 = puVar11[-2];
          puVar10[-2] = uVar6 << sVar3 | uVar4 >> (bVar7 & 0x1f);
          uVar6 = puVar11[-3];
          puVar10[-3] = uVar4 << sVar3 | uVar6 >> (bVar7 & 0x1f);
          puVar11 = puVar11 + -4;
          uVar4 = *puVar11;
          puVar10 = puVar10 + -4;
        }
      }
      puVar10 = puVar10 + -1;
      *puVar10 = uVar4 << sVar3;
    }
    if (puVar8 < puVar10) {
      uVar6 = (int)puVar8 - (int)puVar10 & 0xf;
      if (uVar6 == 0) goto LAB_00021448;
      if (uVar6 < 0xc) {
        if (uVar6 < 8) {
          if (uVar6 < 4) goto LAB_00021448;
          puVar10 = puVar10 + -1;
          *puVar10 = 0;
        }
        puVar10 = puVar10 + -1;
        *puVar10 = 0;
      }
      for (puVar10 = puVar10 + -1; *puVar10 = 0, puVar8 < puVar10; puVar10 = puVar10 + -4) {
LAB_00021448:
        puVar10[-1] = 0;
        puVar10[-2] = 0;
        puVar10[-3] = 0;
      }
    }
    *(int *)(param_1 + 0x10) = local_10 + -1;
  }
  return param_1;
}



/* --- FUN_00021488 @ 00021488 --- */

int FUN_00021488(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_1 + 0x10) - iVar1;
  if (iVar2 == 0) {
    puVar4 = (uint *)(param_1 + 0x14U) + iVar1;
    puVar3 = (uint *)(iVar1 * 4 + 0x14 + param_2);
    do {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      if (*puVar3 != *puVar4) {
        if (*puVar3 <= *puVar4) {
          return 1;
        }
        return -1;
      }
    } while ((uint *)(param_1 + 0x14U) < puVar4);
    iVar2 = 0;
  }
  return iVar2;
}



/* --- FUN_000214e8 @ 000214e8 --- */

int FUN_000214e8(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined2 local_1c;
  uint *local_10;
  int local_8;
  
  iVar3 = param_2;
  iVar2 = FUN_00021488(param_2,param_3);
  if (iVar2 == 0) {
    iVar3 = FUN_00020578(param_1,0);
    *(undefined4 *)(iVar3 + 0x10) = 1;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    return iVar3;
  }
  if (iVar2 < 0) {
    param_2 = param_3;
    param_3 = iVar3;
  }
  iVar4 = FUN_00020578(param_1,*(undefined4 *)(param_2 + 4));
  *(ushort *)(iVar4 + 0xe) = (ushort)(iVar2 < 0);
  local_8 = *(int *)(param_2 + 0x10);
  puVar9 = (uint *)(param_2 + 0x14);
  puVar1 = puVar9 + local_8;
  local_10 = (uint *)(param_3 + 0x14);
  piVar8 = (int *)(iVar4 + 0x14);
  iVar3 = 0;
  puVar6 = local_10 + *(int *)(param_3 + 0x10);
  uVar5 = *(int *)(param_3 + 0x10) * 4 & 0xc;
  if (uVar5 == 0) goto LAB_000216b0;
  if (4 < uVar5) {
    if (8 < uVar5) {
      if (0xc < uVar5) goto LAB_000216b0;
      iVar7 = (uint)*(ushort *)(param_2 + 0x14) - (uint)*(ushort *)(param_3 + 0x14);
      iVar2 = ((*(uint *)(param_2 + 0x14) >> 0x10) - (*(uint *)(param_3 + 0x14) >> 0x10)) +
              (iVar7 >> 0x10);
      local_10 = (uint *)(param_3 + 0x18);
      puVar9 = (uint *)(param_2 + 0x18);
      iVar3 = iVar2 >> 0x10;
      *(short *)(iVar4 + 0x16) = (short)iVar2;
      local_1c = (undefined2)iVar7;
      *(undefined2 *)(iVar4 + 0x14) = local_1c;
      piVar8 = (int *)(iVar4 + 0x18);
    }
    iVar2 = ((uint)(ushort)*puVar9 - (uint)(ushort)*local_10) + iVar3;
    iVar7 = ((*puVar9 >> 0x10) - (*local_10 >> 0x10)) + (iVar2 >> 0x10);
    local_10 = local_10 + 1;
    puVar9 = puVar9 + 1;
    iVar3 = iVar7 >> 0x10;
    *(short *)((int)piVar8 + 2) = (short)iVar7;
    local_1c = (undefined2)iVar2;
    *(undefined2 *)piVar8 = local_1c;
    piVar8 = piVar8 + 1;
  }
  iVar3 = ((uint)(ushort)*puVar9 - (uint)(ushort)*local_10) + iVar3;
  iVar2 = ((*puVar9 >> 0x10) - (*local_10 >> 0x10)) + (iVar3 >> 0x10);
  local_10 = local_10 + 1;
  puVar9 = puVar9 + 1;
  *(short *)((int)piVar8 + 2) = (short)iVar2;
  local_1c = (undefined2)iVar3;
  *(undefined2 *)piVar8 = local_1c;
  piVar8 = piVar8 + 1;
  while (iVar3 = iVar2 >> 0x10, local_10 < puVar6) {
LAB_000216b0:
    iVar3 = ((uint)(ushort)*puVar9 - (uint)(ushort)*local_10) + iVar3;
    iVar2 = ((*puVar9 >> 0x10) - (*local_10 >> 0x10)) + (iVar3 >> 0x10);
    *(short *)((int)piVar8 + 2) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)piVar8 = local_1c;
    iVar3 = ((uint)(ushort)puVar9[1] - (uint)(ushort)local_10[1]) + (iVar2 >> 0x10);
    iVar2 = ((puVar9[1] >> 0x10) - (local_10[1] >> 0x10)) + (iVar3 >> 0x10);
    *(short *)((int)piVar8 + 6) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)(piVar8 + 1) = local_1c;
    iVar3 = ((uint)(ushort)puVar9[2] - (uint)(ushort)local_10[2]) + (iVar2 >> 0x10);
    iVar2 = ((puVar9[2] >> 0x10) - (local_10[2] >> 0x10)) + (iVar3 >> 0x10);
    *(short *)((int)piVar8 + 10) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)(piVar8 + 2) = local_1c;
    iVar3 = ((uint)(ushort)puVar9[3] - (uint)(ushort)local_10[3]) + (iVar2 >> 0x10);
    iVar2 = ((puVar9[3] >> 0x10) - (local_10[3] >> 0x10)) + (iVar3 >> 0x10);
    local_10 = local_10 + 4;
    puVar9 = puVar9 + 4;
    *(short *)((int)piVar8 + 0xe) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)(piVar8 + 3) = local_1c;
    piVar8 = piVar8 + 4;
  }
  if (puVar1 <= puVar9) goto LAB_0002192b;
  uVar5 = (int)puVar1 - (int)puVar9 & 0xf;
  if (uVar5 != 0) {
    if (4 < uVar5) {
      if (8 < uVar5) {
        if (0xc < uVar5) goto LAB_0002187c;
        iVar2 = (uint)(ushort)*puVar9 + iVar3;
        iVar7 = (*puVar9 >> 0x10) + (iVar2 >> 0x10);
        puVar9 = puVar9 + 1;
        iVar3 = iVar7 >> 0x10;
        *(short *)((int)piVar8 + 2) = (short)iVar7;
        local_1c = (undefined2)iVar2;
        *(undefined2 *)piVar8 = local_1c;
        piVar8 = piVar8 + 1;
      }
      iVar2 = (uint)(ushort)*puVar9 + iVar3;
      iVar7 = (*puVar9 >> 0x10) + (iVar2 >> 0x10);
      puVar9 = puVar9 + 1;
      iVar3 = iVar7 >> 0x10;
      *(short *)((int)piVar8 + 2) = (short)iVar7;
      local_1c = (undefined2)iVar2;
      *(undefined2 *)piVar8 = local_1c;
      piVar8 = piVar8 + 1;
    }
    iVar2 = (uint)(ushort)*puVar9 + iVar3;
    iVar7 = (*puVar9 >> 0x10) + (iVar2 >> 0x10);
    puVar9 = puVar9 + 1;
    iVar3 = iVar7 >> 0x10;
    *(short *)((int)piVar8 + 2) = (short)iVar7;
    local_1c = (undefined2)iVar2;
    *(undefined2 *)piVar8 = local_1c;
    piVar8 = piVar8 + 1;
    if (puVar1 <= puVar9) goto LAB_0002192b;
  }
LAB_0002187c:
  do {
    iVar3 = (uint)(ushort)*puVar9 + iVar3;
    iVar2 = (*puVar9 >> 0x10) + (iVar3 >> 0x10);
    *(short *)((int)piVar8 + 2) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)piVar8 = local_1c;
    iVar3 = (uint)(ushort)puVar9[1] + (iVar2 >> 0x10);
    iVar2 = (puVar9[1] >> 0x10) + (iVar3 >> 0x10);
    *(short *)((int)piVar8 + 6) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)(piVar8 + 1) = local_1c;
    iVar3 = (uint)(ushort)puVar9[2] + (iVar2 >> 0x10);
    iVar2 = (puVar9[2] >> 0x10) + (iVar3 >> 0x10);
    *(short *)((int)piVar8 + 10) = (short)iVar2;
    local_1c = (undefined2)iVar3;
    *(undefined2 *)(piVar8 + 2) = local_1c;
    iVar2 = (uint)(ushort)puVar9[3] + (iVar2 >> 0x10);
    iVar7 = (puVar9[3] >> 0x10) + (iVar2 >> 0x10);
    puVar9 = puVar9 + 4;
    iVar3 = iVar7 >> 0x10;
    *(short *)((int)piVar8 + 0xe) = (short)iVar7;
    local_1c = (undefined2)iVar2;
    *(undefined2 *)(piVar8 + 3) = local_1c;
    piVar8 = piVar8 + 4;
  } while (puVar9 < puVar1);
LAB_0002192b:
  while (piVar8 = piVar8 + -1, *piVar8 == 0) {
    local_8 = local_8 + -1;
  }
  *(int *)(iVar4 + 0x10) = local_8;
  return iVar4;
}



/* --- FUN_00021958 @ 00021958 --- */

longdouble FUN_00021958(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longdouble lVar3;
  
  uVar1 = (param_2 & 0x7ff00000) + 0xfcc00000;
  if ((int)uVar1 < 1) {
    iVar2 = (int)-uVar1 >> 0x14;
    if (iVar2 < 0x14) {
      lVar3 = (longdouble)(double)((ulonglong)(uint)(0x80000 >> ((byte)iVar2 & 0x1f)) << 0x20);
    }
    else {
      if (iVar2 + -0x14 < 0x1f) {
        uVar1 = 1 << (0x1fU - (char)(iVar2 + -0x14) & 0x1f);
      }
      else {
        uVar1 = 1;
      }
      lVar3 = (longdouble)(double)(ulonglong)uVar1;
    }
  }
  else {
    lVar3 = (longdouble)(double)((ulonglong)uVar1 << 0x20);
  }
  return lVar3;
}



/* --- FUN_000219f8 @ 000219f8 --- */

longdouble FUN_000219f8(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint local_18;
  uint local_c;
  
  puVar1 = (uint *)(param_1 + 0x14);
  puVar7 = puVar1 + *(int *)(param_1 + 0x10) + -1;
  uVar2 = *puVar7;
  iVar4 = FUN_00020a18(uVar2);
  *param_2 = 0x20 - iVar4;
  if (iVar4 < 0xb) {
    cVar3 = (char)iVar4;
    local_c = uVar2 >> (0xbU - cVar3 & 0x1f) | 0x3ff00000;
    if (puVar1 < puVar7) {
      uVar6 = puVar7[-1];
    }
    else {
      uVar6 = 0;
    }
    uVar6 = uVar2 << (cVar3 + 0x15U & 0x1f) | uVar6 >> (0xbU - cVar3 & 0x1f);
  }
  else {
    if (puVar1 < puVar7) {
      puVar7 = puVar7 + -1;
      uVar6 = *puVar7;
    }
    else {
      uVar6 = 0;
    }
    if (iVar4 + -0xb == 0) {
      local_c = uVar2 | 0x3ff00000;
    }
    else {
      bVar5 = (byte)(iVar4 + -0xb);
      local_c = uVar2 << (bVar5 & 0x1f) | uVar6 >> (0x20 - bVar5 & 0x1f) | 0x3ff00000;
      if (puVar1 < puVar7) {
        local_18 = puVar7[-1];
      }
      else {
        local_18 = 0;
      }
      uVar6 = uVar6 << (bVar5 & 0x1f) | local_18 >> (0x20 - bVar5 & 0x1f);
    }
  }
  return (longdouble)(double)CONCAT44(local_c,uVar6);
}



/* --- FUN_00021b18 @ 00021b18 --- */

int FUN_00021b18(undefined4 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 local_c;
  
  uVar6 = (uint)param_2;
  uVar4 = (uint)((ulonglong)param_2 >> 0x20);
  iVar1 = FUN_00020578(param_1,1);
  puVar5 = (uint *)(iVar1 + 0x14);
  local_c = uVar4 & 0xfffff;
  uVar4 = (uVar4 & 0x7fffffff) >> 0x14;
  if (uVar4 != 0) {
    local_c = local_c | 0x100000;
  }
  if (uVar6 == 0) {
    iVar2 = FUN_00020a88();
    *puVar5 = local_c;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    iVar3 = 1;
    iVar2 = iVar2 + 0x20;
  }
  else {
    iVar2 = FUN_00020a88();
    if (iVar2 == 0) {
      *puVar5 = uVar6;
    }
    else {
      *puVar5 = local_c << (0x20 - (byte)iVar2 & 0x1f) | uVar6;
      local_c = local_c >> ((byte)iVar2 & 0x1f);
    }
    *(uint *)(iVar1 + 0x18) = local_c;
    iVar3 = 1;
    if (local_c != 0) {
      iVar3 = 2;
    }
    *(int *)(iVar1 + 0x10) = iVar3;
  }
  if (uVar4 == 0) {
    *param_3 = iVar2 + -0x432;
    iVar2 = FUN_00020a18();
    *param_4 = iVar3 * 0x20 - iVar2;
  }
  else {
    *param_3 = (uVar4 - 0x433) + iVar2;
    *param_4 = 0x35 - iVar2;
  }
  return iVar1;
}



/* --- FUN_00021c68 @ 00021c68 --- */

longdouble FUN_00021c68(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longdouble lVar3;
  undefined8 local_34;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  lVar3 = (longdouble)FUN_000219f8(param_1,&local_8);
  dVar1 = (double)lVar3;
  lVar3 = (longdouble)FUN_000219f8(param_2,&local_c);
  iVar2 = (local_8 - local_c) + (*(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10)) * 0x20;
  if (iVar2 < 1) {
    local_34._4_4_ = (int)((ulonglong)(double)lVar3 >> 0x20);
    local_34 = (double)CONCAT44(local_34._4_4_ + iVar2 * -0x100000,SUB84((double)lVar3,0));
    lVar3 = (longdouble)local_34;
    local_14 = dVar1;
  }
  else {
    local_14._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_14 = (double)CONCAT44(local_14._4_4_ + iVar2 * 0x100000,SUB84(dVar1,0));
  }
  return (longdouble)local_14 / lVar3;
}



/* --- FUN_00021d18 @ 00021d18 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_00021d18(byte *param_1,int *param_2)

{
  int iVar1;
  double dVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longdouble lVar19;
  uint local_1e4;
  int local_1d8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_190;
  double local_188;
  double local_180;
  byte *local_178;
  byte *local_174;
  uint local_168;
  uint local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_144;
  int local_140;
  undefined1 local_13c [52];
  undefined1 local_108 [52];
  undefined1 local_d4 [52];
  undefined1 local_a0 [52];
  undefined1 local_6c [52];
  undefined1 local_38 [52];
  
  local_1a0 = FUN_00020448(local_38);
  uVar10 = FUN_00020448(local_a0);
  uVar11 = FUN_00020448(local_d4);
  local_1ac = FUN_00020448(local_108);
  local_1b0 = FUN_00020448(local_6c);
  local_1b4 = FUN_00020448(local_13c);
  local_168 = 0;
  bVar6 = false;
  bVar7 = false;
  local_190 = 0.0;
  local_174 = param_1;
LAB_00021dc8:
  switch(*local_174) {
  case 0:
    goto switchD_00021dda_caseD_0;
  default:
    goto switchD_00021dda_caseD_1;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_00021dda_caseD_9;
  case 0x2b:
    break;
  case 0x2d:
    bVar7 = true;
  }
  local_174 = local_174 + 1;
  if (*local_174 == 0) goto switchD_00021dda_caseD_0;
switchD_00021dda_caseD_1:
  if (*local_174 == 0x30) {
    bVar6 = true;
    local_174 = local_174 + 1;
    bVar3 = *local_174;
    while (bVar3 == 0x30) {
      local_174 = local_174 + 1;
      bVar3 = *local_174;
    }
    if (*local_174 == 0) goto LAB_00023057;
  }
  local_178 = local_174;
  local_1e4 = 0;
  local_19c = 0;
  local_164 = 0;
  local_15c = 0;
  bVar3 = *local_174;
  local_160 = local_15c;
  while ((uVar17 = (uint)bVar3, 0x2f < uVar17 && (uVar17 < 0x3a))) {
    if (local_160 < 9) {
      local_19c = (uVar17 - 0x30) + local_19c * 10;
    }
    else if (local_160 < 0x10) {
      local_1e4 = (uVar17 - 0x30) + local_1e4 * 10;
    }
    local_160 = local_160 + 1;
    local_174 = local_174 + 1;
    bVar3 = *local_174;
  }
  local_15c = local_160;
  if (uVar17 == 0x2e) {
    local_174 = local_174 + 1;
    uVar17 = (uint)*local_174;
    uVar16 = local_168;
    if (local_160 != 0) goto LAB_000222cc;
    while (uVar17 == 0x30) {
      local_174 = local_174 + 1;
      uVar16 = uVar16 + 1;
      uVar17 = (uint)*local_174;
    }
    local_168 = uVar16;
    if (uVar17 - 0x31 < 9) {
      local_168 = 0;
      local_178 = local_174;
      local_164 = uVar16;
      do {
        uVar16 = local_168 + 1;
        iVar18 = uVar17 - 0x30;
        if (iVar18 != 0) {
          local_164 = local_164 + uVar16;
          iVar13 = 1;
          if (1 < (int)uVar16) {
            local_168 = local_168 & 3;
            if (local_168 != 0) {
              if (1 < local_168) {
                if (2 < local_168) {
                  if (local_15c < 9) {
                    local_19c = local_19c * 10;
                  }
                  else if (local_15c + 1 < 0x11) {
                    local_1e4 = local_1e4 * 10;
                  }
                  iVar13 = 2;
                  local_15c = local_15c + 1;
                }
                if (local_15c < 9) {
                  local_19c = local_19c * 10;
                }
                else if (local_15c + 1 < 0x11) {
                  local_1e4 = local_1e4 * 10;
                }
                iVar13 = iVar13 + 1;
                local_15c = local_15c + 1;
              }
              iVar12 = local_15c + 1;
              if (local_15c < 9) {
                local_19c = local_19c * 10;
              }
              else if (iVar12 < 0x11) {
                local_1e4 = local_1e4 * 10;
              }
              iVar13 = iVar13 + 1;
              local_15c = iVar12;
              if ((int)uVar16 <= iVar13) goto LAB_00022271;
            }
            do {
              if (local_15c < 9) {
                local_19c = local_19c * 10;
              }
              else if (local_15c + 1 < 0x11) {
                local_1e4 = local_1e4 * 10;
              }
              if (local_15c + 1 < 9) {
                local_19c = local_19c * 10;
              }
              else if (local_15c + 2 < 0x11) {
                local_1e4 = local_1e4 * 10;
              }
              iVar12 = local_15c + 3;
              if (local_15c + 2 < 9) {
                local_19c = local_19c * 10;
              }
              else if (iVar12 < 0x11) {
                local_1e4 = local_1e4 * 10;
              }
              local_15c = local_15c + 4;
              if (iVar12 < 9) {
                local_19c = local_19c * 10;
              }
              else if (local_15c < 0x11) {
                local_1e4 = local_1e4 * 10;
              }
              iVar13 = iVar13 + 4;
            } while (iVar13 < (int)uVar16);
          }
LAB_00022271:
          if (local_15c < 9) {
            local_19c = iVar18 + local_19c * 10;
          }
          else if (local_15c + 1 < 0x11) {
            local_1e4 = iVar18 + local_1e4 * 10;
          }
          local_168 = 0;
          uVar16 = local_168;
          local_15c = local_15c + 1;
        }
        local_168 = uVar16;
        local_174 = local_174 + 1;
        uVar17 = (uint)*local_174;
LAB_000222cc:
      } while (uVar17 - 0x30 < 10);
    }
  }
  pbVar8 = local_174;
  local_158 = 0;
  if ((uVar17 != 0x65) && (uVar17 != 0x45)) {
LAB_000223f1:
    local_174 = pbVar8;
    if (local_15c == 0) {
      if ((local_168 != 0) || (bVar6)) goto LAB_00023057;
      goto LAB_00022414;
    }
    local_158 = local_158 - local_164;
    if (local_160 == 0) {
      local_160 = local_15c;
    }
    iVar18 = local_15c;
    if (0x10 < local_15c) {
      iVar18 = 0x10;
    }
    local_190 = (double)local_19c;
    if (9 < iVar18) {
      local_190 = (double)local_1e4 + local_190 * *(double *)(&DAT_0002b9c8 + iVar18 * 4);
    }
    if (local_15c < 0x10) {
      if (local_158 == 0) goto LAB_00023057;
      if (local_158 < 1) {
        if (-0x17 < local_158) {
          local_190 = local_190 / *(double *)(&DAT_0002ba10 + local_158 * -8);
          goto LAB_00023057;
        }
      }
      else {
        if (local_158 < 0x17) {
          local_190 = local_190 * *(double *)(&DAT_0002ba10 + local_158 * 8);
          goto LAB_00023057;
        }
        iVar13 = -local_15c + 0xf;
        if (local_158 <= -local_15c + 0x25) {
          local_190 = local_190 * *(double *)(&DAT_0002ba10 + iVar13 * 8) *
                      *(double *)(&DAT_0002ba10 + (local_158 - iVar13) * 8);
          goto LAB_00023057;
        }
      }
    }
    uVar17 = local_158 + (local_15c - iVar18);
    if (0 < (int)uVar17) {
      if ((uVar17 & 0xf) != 0) {
        local_190 = local_190 * *(double *)(&DAT_0002ba10 + (uVar17 & 0xf) * 8);
      }
      dVar2 = local_190;
      if ((uVar17 & 0xfffffff0) != 0) {
        if ((int)(uVar17 & 0xfffffff0) < 0x135) {
          uVar17 = (int)uVar17 >> 4;
          if (uVar17 != 0) {
            local_1e4 = 0;
            if (1 < (int)uVar17) {
              pdVar15 = (double *)&DAT_0002bac8;
              do {
                if ((uVar17 & 1) != 0) {
                  local_190 = local_190 * *pdVar15;
                }
                pdVar15 = pdVar15 + 1;
                local_1e4 = local_1e4 + 1;
                uVar17 = (int)uVar17 >> 1;
              } while (1 < (int)uVar17);
            }
            dVar2 = (double)CONCAT44(local_190._4_4_ + -0x3500000,SUB84(local_190,0)) *
                    (double)(&DAT_0002bac8)[local_1e4];
            local_190._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            if (0x7ca00000 < (local_190._4_4_ & 0x7ff00000)) goto LAB_000225c5;
            if ((local_190._4_4_ & 0x7ff00000) < 0x7c900001) {
              dVar2 = (double)CONCAT44(local_190._4_4_ + 0x3500000,SUB84(dVar2,0));
            }
            else {
              dVar2 = 1.7976931348623157e+308;
            }
          }
          goto LAB_0002283a;
        }
LAB_000225c5:
        DAT_0002a0a0 = 0x22;
        local_190 = _DAT_00021cdc;
        goto LAB_00023057;
      }
LAB_0002283a:
      local_190 = dVar2;
      iVar18 = FUN_00020808(uVar11,local_178,local_160,local_15c,local_19c);
      local_1a4 = FUN_00020578(uVar10,*(undefined4 *)(iVar18 + 4));
LAB_00022884:
      FUN_000204e8(local_1a4,iVar18);
      uVar17 = local_190._4_4_;
      uVar10 = FUN_00021b18(local_1a0,(int)local_190,local_190._4_4_,&local_140,&local_144);
      local_1ac = FUN_00020b38(local_1ac,1);
      if (local_158 < 0) {
        local_1d8 = -local_158;
        local_150 = 0;
      }
      else {
        local_1d8 = 0;
        local_150 = local_158;
      }
      iVar13 = local_1d8;
      if (local_140 < 0) {
        iVar12 = local_150 - local_140;
      }
      else {
        local_1d8 = local_1d8 + local_140;
        iVar12 = local_150;
      }
      local_154 = local_1d8;
      if (local_140 + local_144 + -1 < -0x3fe) {
        local_1e4 = local_140 + 0x433;
      }
      else {
        local_1e4 = 0x36 - local_144;
      }
      iVar1 = local_1d8 + local_1e4;
      iVar12 = iVar12 + local_1e4;
      iVar14 = iVar1;
      if (iVar12 < iVar1) {
        iVar14 = iVar12;
      }
      if (local_1d8 < iVar14) {
        iVar14 = local_1d8;
      }
      if (0 < iVar14) {
        iVar12 = iVar12 - iVar14;
        local_154 = local_1d8 - iVar14;
        iVar1 = iVar1 - iVar14;
      }
      local_1d8 = iVar1;
      local_1a0 = uVar10;
      if (0 < iVar13) {
        local_1ac = FUN_000211c8(local_1ac,iVar13);
        local_1a0 = FUN_00020b68(local_1b0,local_1ac,uVar10);
        local_1b0 = uVar10;
      }
      if (0 < local_1d8) {
        local_1a0 = FUN_00021218(local_1a0,local_1d8);
      }
      if (0 < local_150) {
        local_1a4 = FUN_000211c8(local_1a4,local_150);
      }
      if (0 < iVar12) {
        local_1a4 = FUN_00021218(local_1a4,iVar12);
      }
      if (0 < local_154) {
        local_1ac = FUN_00021218(local_1ac,local_154);
      }
      local_1b4 = FUN_000214e8(local_1b4,local_1a0,local_1a4);
      sVar4 = *(short *)(local_1b4 + 0xe);
      *(undefined2 *)(local_1b4 + 0xe) = 0;
      iVar13 = FUN_00021488(local_1b4,local_1ac);
      if (iVar13 < 0) {
        if (((sVar4 == 0) && ((int)local_190 == 0)) &&
           (((ulonglong)local_190 & 0xfffff00000000) == 0)) {
          local_1b4 = FUN_00021218(local_1b4,1);
          iVar13 = FUN_00021488(local_1b4,local_1ac);
          if (0 < iVar13) {
LAB_00022bc0:
            local_190 = (double)(CONCAT44((local_190._4_4_ & 0x7ff00000) - 0x100000,0xffffffff) |
                                0xfffff00000000);
          }
        }
        goto LAB_0002300f;
      }
      if (iVar13 == 0) {
        if (sVar4 == 0) {
          if ((((ulonglong)local_190 & 0xfffff00000000) == 0) && ((int)local_190 == 0))
          goto LAB_00022bc0;
        }
        else if (((local_190._4_4_ & 0xfffff) == 0xfffff) && ((int)local_190 == -1)) {
          local_190 = (double)((ulonglong)((local_190._4_4_ & 0x7ff00000) + 0x100000) << 0x20);
          goto LAB_0002300f;
        }
        if (((ulonglong)local_190 & 1) != 0) {
          if (sVar4 == 0) {
            lVar19 = (longdouble)FUN_00021958((int)local_190,local_190._4_4_);
            local_190 = (double)((longdouble)local_190 - lVar19);
            if ((byte)(local_190 < 0.0 | (byte)((ushort)((ushort)NAN(local_190) << 10) >> 8) |
                      (byte)((ushort)((ushort)(local_190 == 0.0) << 0xe) >> 8)) == 0x40)
            goto LAB_000227ad;
          }
          else {
            lVar19 = (longdouble)FUN_00021958((int)local_190,local_190._4_4_);
            local_190 = (double)(lVar19 + (longdouble)local_190);
          }
        }
        goto LAB_0002300f;
      }
      lVar19 = (longdouble)FUN_00021c68(local_1b4,local_1ac);
      local_180 = (double)lVar19;
      if (_DAT_00021ce4 < local_180) {
        local_188 = _DAT_00021cec * local_180;
        local_180 = local_188;
        if (sVar4 == 0) {
LAB_00022d94:
          local_188 = -local_180;
        }
      }
      else if (sVar4 == 0) {
        if (((int)local_190 == 0) && (((ulonglong)local_190 & 0xfffff00000000) == 0)) {
          if (1.0 <= local_180) {
            local_180 = _DAT_00021cec * local_180;
          }
          else {
            local_180 = 0.5;
          }
          goto LAB_00022d94;
        }
        if (((int)local_190 == 1) && (local_190._4_4_ == 0)) goto LAB_000227ad;
        local_180 = 1.0;
        local_188 = -1.0;
      }
      else {
        local_180 = 1.0;
        local_188 = local_180;
      }
      uVar16 = local_190._4_4_ & 0x7ff00000;
      if (uVar16 == 0x7fe00000) {
        lVar19 = (longdouble)FUN_00021958((int)local_190,local_190._4_4_ + 0xfcb00000);
        dVar2 = (double)(lVar19 * (longdouble)local_188 +
                        (longdouble)(double)CONCAT44(local_190._4_4_ + 0xfcb00000,(int)local_190));
        local_190._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        if (0x7c9fffff < (local_190._4_4_ & 0x7ff00000)) {
          if ((uVar17 == 0x7fefffff) && ((int)local_190 == -1)) goto LAB_000225c5;
          local_190 = 1.7976931348623157e+308;
          goto LAB_00022884;
        }
        local_190 = (double)CONCAT44(local_190._4_4_ + 0x3500000,SUB84(dVar2,0));
      }
      else {
        if (((uVar16 < 0x3400001) &&
            ((byte)((1.0 < local_180 | (byte)((ushort)((ushort)NAN(local_180) << 10) >> 8) |
                    (byte)((ushort)((ushort)(local_180 == 1.0) << 0xe) >> 8)) - 1) < 0x40)) &&
           (local_188 = (double)(int)ROUND(_DAT_00021cec + local_180), sVar4 == 0)) {
          local_188 = -local_188;
        }
        lVar19 = (longdouble)FUN_00021958((int)local_190,local_190._4_4_);
        local_190 = (double)(lVar19 * (longdouble)local_188 + (longdouble)local_190);
      }
      if (uVar16 == (local_190._4_4_ & 0x7ff00000)) {
        local_180 = local_180 - (double)(int)ROUND(local_180);
        if (((sVar4 == 0) && ((int)local_190 == 0)) &&
           (((ulonglong)local_190 & 0xfffff00000000) == 0)) {
          if (local_180 < _DAT_00021d04) {
LAB_0002300f:
            FUN_000204c8(local_1a0);
            FUN_000204c8(local_1a4);
            FUN_000204c8(local_1ac);
            FUN_000204c8(iVar18);
            FUN_000204c8(local_1b4);
            FUN_000204c8(local_1b0);
            goto LAB_00023057;
          }
        }
        else if ((local_180 < _DAT_00021cf4) ||
                ((byte)(_DAT_00021cfc < local_180 |
                        (byte)((ushort)((ushort)(NAN(_DAT_00021cfc) || NAN(local_180)) << 10) >> 8)
                       | (byte)((ushort)((ushort)(_DAT_00021cfc == local_180) << 0xe) >> 8)) == 1))
        goto LAB_0002300f;
      }
      goto LAB_00022884;
    }
    dVar2 = local_190;
    if (-1 < (int)uVar17) goto LAB_0002283a;
    uVar17 = -uVar17;
    if ((uVar17 & 0xf) != 0) {
      local_190 = local_190 / *(double *)(&DAT_0002ba10 + (uVar17 & 0xf) * 8);
    }
    dVar2 = local_190;
    if ((uVar17 & 0xfffffff0) == 0) goto LAB_0002283a;
    uVar17 = (int)uVar17 >> 4;
    local_1e4 = 0;
    if (1 < (int)uVar17) {
      pdVar15 = (double *)&DAT_0002baf0;
      do {
        if ((uVar17 & 1) != 0) {
          local_190 = local_190 * *pdVar15;
        }
        pdVar15 = pdVar15 + 1;
        local_1e4 = local_1e4 + 1;
        uVar17 = (int)uVar17 >> 1;
      } while (1 < (int)uVar17);
    }
    dVar2 = local_190 * (double)(&DAT_0002baf0)[local_1e4];
    if ((byte)((byte)((ushort)((ushort)NAN(dVar2) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar2 == 0.0) << 0xe) >> 8)) != 0x40) goto LAB_0002283a;
    dVar2 = (local_190 + local_190) * (double)(&DAT_0002baf0)[local_1e4];
    if ((byte)((byte)((ushort)((ushort)NAN(dVar2) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar2 == 0.0) << 0xe) >> 8)) != 0x40) {
      dVar2 = 4.94065645841247e-324;
      goto LAB_0002283a;
    }
LAB_000227ad:
    local_190 = 0.0;
    DAT_0002a0a0 = 0x22;
    goto LAB_00023057;
  }
  if ((local_15c != 0) || ((local_168 != 0 || (bVar6)))) {
    param_1 = local_174;
    bVar5 = false;
    uVar17 = (uint)local_174[1];
    if (uVar17 == 0x2b) {
LAB_0002232f:
      uVar17 = (uint)local_174[2];
      pbVar9 = local_174 + 2;
    }
    else {
      pbVar9 = local_174 + 1;
      if (uVar17 == 0x2d) {
        bVar5 = true;
        goto LAB_0002232f;
      }
    }
    local_174 = pbVar9;
    pbVar9 = local_174;
    if (uVar17 - 0x30 < 10) {
      while (uVar17 == 0x30) {
        uVar17 = (uint)pbVar9[1];
        pbVar9 = pbVar9 + 1;
      }
      if (uVar17 - 0x31 < 9) {
        local_158 = uVar17 - 0x30;
        local_174 = pbVar9;
        while( true ) {
          local_174 = local_174 + 1;
          uVar17 = (uint)*local_174;
          if ((uVar17 < 0x30) || (0x39 < uVar17)) break;
          local_158 = (uVar17 - 0x30) + local_158 * 10;
        }
        if (8 < (int)local_174 - (int)pbVar9) {
          local_158 = 9999999;
        }
        pbVar8 = local_174;
        if (bVar5) {
          local_158 = -local_158;
        }
      }
      else {
        local_158 = 0;
        pbVar8 = pbVar9;
      }
    }
    goto LAB_000223f1;
  }
LAB_00022414:
  local_174 = param_1;
LAB_00023057:
  if (param_2 != (int *)0x0) {
    *param_2 = (int)local_174;
  }
  lVar19 = (longdouble)local_190;
  if (bVar7) {
    lVar19 = -lVar19;
  }
  return lVar19;
switchD_00021dda_caseD_9:
  local_174 = local_174 + 1;
  goto LAB_00021dc8;
switchD_00021dda_caseD_0:
  bVar7 = false;
  goto LAB_00022414;
}



/* --- FUN_00023088 @ 00023088 --- */

uint FUN_00023088(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  uint *local_1c;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar4) {
    uVar2 = 0;
  }
  else {
    local_1c = (uint *)(param_2 + 0x14);
    local_8 = iVar4 + -1;
    puVar3 = local_1c + local_8;
    puVar8 = (uint *)(param_1 + 0x14);
    puVar9 = puVar8 + local_8;
    uVar2 = *puVar9 / (*puVar3 + 1);
    if (uVar2 != 0) {
      local_c = 0;
      local_10 = 0;
      uVar5 = (int)puVar3 + (1 - (int)local_1c) & 7;
      if (uVar5 == 0) goto LAB_00023190;
      if (4 < uVar5) goto LAB_00023190;
      local_1c = (uint *)(param_2 + 0x18);
      uVar5 = (*(uint *)(param_2 + 0x14) & 0xffff) * uVar2;
      local_10 = (uVar5 >> 0x10) + (*(uint *)(param_2 + 0x14) >> 0x10) * uVar2;
      iVar6 = (uint)*(ushort *)(param_1 + 0x14) - (uVar5 & 0xffff);
      local_c = ((*(uint *)(param_1 + 0x14) >> 0x10) - (local_10 & 0xffff)) + (iVar6 >> 0x10);
      *(short *)(param_1 + 0x16) = (short)local_c;
      *(short *)(param_1 + 0x14) = (short)iVar6;
      puVar8 = (uint *)(param_1 + 0x18);
      while( true ) {
        local_c = local_c >> 0x10;
        local_10 = local_10 >> 0x10;
        if (puVar3 < local_1c) break;
LAB_00023190:
        local_10 = (*local_1c & 0xffff) * uVar2 + local_10;
        uVar5 = (local_10 >> 0x10) + (*local_1c >> 0x10) * uVar2;
        local_c = local_c + ((uint)(ushort)*puVar8 - (local_10 & 0xffff));
        iVar6 = ((*puVar8 >> 0x10) - (uVar5 & 0xffff)) + (local_c >> 0x10);
        *(ushort *)((int)puVar8 + 2) = (ushort)iVar6;
        *(ushort *)puVar8 = (ushort)local_c;
        puVar1 = local_1c + 1;
        local_1c = local_1c + 2;
        uVar5 = (*puVar1 & 0xffff) * uVar2 + (uVar5 >> 0x10);
        local_10 = (uVar5 >> 0x10) + (*puVar1 >> 0x10) * uVar2;
        iVar6 = (iVar6 >> 0x10) + ((uint)(ushort)puVar8[1] - (uVar5 & 0xffff));
        local_c = ((puVar8[1] >> 0x10) - (local_10 & 0xffff)) + (iVar6 >> 0x10);
        *(ushort *)((int)puVar8 + 6) = (ushort)local_c;
        *(ushort *)(puVar8 + 1) = (ushort)iVar6;
        puVar8 = puVar8 + 2;
      }
      if (*puVar9 == 0) {
        puVar8 = (uint *)(param_1 + 0x14);
        if ((puVar8 < puVar9 + -1) && (puVar9[-1] == 0)) {
          local_8 = iVar4 + -2;
          puVar9 = puVar9 + -2;
          if (puVar8 < puVar9) {
            uVar5 = *puVar9;
            while (uVar5 == 0) {
              local_8 = local_8 + -1;
              puVar9 = puVar9 + -1;
              if (puVar9 <= puVar8) break;
              uVar5 = *puVar9;
            }
          }
        }
        *(int *)(param_1 + 0x10) = local_8;
      }
    }
    iVar4 = FUN_00021488(param_1,param_2);
    if (-1 < iVar4) {
      uVar2 = uVar2 + 1;
      local_c = 0;
      puVar9 = (uint *)(param_1 + 0x14);
      local_1c = (uint *)(param_2 + 0x14);
      uVar5 = (int)puVar3 + (1 - (int)local_1c) & 0xf;
      if (uVar5 == 0) goto LAB_00023430;
      if (4 < uVar5) {
        if (8 < uVar5) {
          if (0xc < uVar5) goto LAB_00023430;
          local_1c = (uint *)(param_2 + 0x18);
          iVar4 = (uint)*(ushort *)(param_1 + 0x14) - (*(uint *)(param_2 + 0x14) & 0xffff);
          iVar6 = ((*(uint *)(param_1 + 0x14) >> 0x10) - (*(uint *)(param_2 + 0x14) >> 0x10)) +
                  (iVar4 >> 0x10);
          local_c = iVar6 >> 0x10;
          *(short *)(param_1 + 0x16) = (short)iVar6;
          *(short *)(param_1 + 0x14) = (short)iVar4;
          puVar9 = (uint *)(param_1 + 0x18);
        }
        uVar5 = *local_1c;
        local_1c = local_1c + 1;
        iVar4 = local_c + ((uint)(ushort)*puVar9 - (uVar5 & 0xffff));
        iVar6 = ((*puVar9 >> 0x10) - (uVar5 >> 0x10)) + (iVar4 >> 0x10);
        local_c = iVar6 >> 0x10;
        *(ushort *)((int)puVar9 + 2) = (ushort)iVar6;
        *(ushort *)puVar9 = (ushort)iVar4;
        puVar9 = puVar9 + 1;
      }
      uVar5 = *local_1c;
      local_1c = local_1c + 1;
      local_c = local_c + ((uint)(ushort)*puVar9 - (uVar5 & 0xffff));
      iVar4 = ((*puVar9 >> 0x10) - (uVar5 >> 0x10)) + (local_c >> 0x10);
      *(ushort *)((int)puVar9 + 2) = (ushort)iVar4;
      *(ushort *)puVar9 = (ushort)local_c;
      puVar9 = puVar9 + 1;
      while (local_c = iVar4 >> 0x10, local_1c <= puVar3) {
LAB_00023430:
        local_c = local_c + ((uint)(ushort)*puVar9 - (*local_1c & 0xffff));
        iVar4 = ((*puVar9 >> 0x10) - (*local_1c >> 0x10)) + (local_c >> 0x10);
        *(ushort *)((int)puVar9 + 2) = (ushort)iVar4;
        *(ushort *)puVar9 = (ushort)local_c;
        iVar4 = (iVar4 >> 0x10) + ((uint)(ushort)puVar9[1] - (local_1c[1] & 0xffff));
        iVar6 = ((puVar9[1] >> 0x10) - (local_1c[1] >> 0x10)) + (iVar4 >> 0x10);
        *(ushort *)((int)puVar9 + 6) = (ushort)iVar6;
        *(ushort *)(puVar9 + 1) = (ushort)iVar4;
        iVar4 = (iVar6 >> 0x10) + ((uint)(ushort)puVar9[2] - (local_1c[2] & 0xffff));
        iVar6 = ((puVar9[2] >> 0x10) - (local_1c[2] >> 0x10)) + (iVar4 >> 0x10);
        *(ushort *)((int)puVar9 + 10) = (ushort)iVar6;
        *(ushort *)(puVar9 + 2) = (ushort)iVar4;
        puVar8 = local_1c + 3;
        local_1c = local_1c + 4;
        iVar6 = (iVar6 >> 0x10) + ((uint)(ushort)puVar9[3] - (*puVar8 & 0xffff));
        iVar4 = ((puVar9[3] >> 0x10) - (*puVar8 >> 0x10)) + (iVar6 >> 0x10);
        *(ushort *)((int)puVar9 + 0xe) = (ushort)iVar4;
        *(ushort *)(puVar9 + 3) = (ushort)iVar6;
        puVar9 = puVar9 + 4;
      }
      piVar10 = (int *)(param_1 + 0x14);
      piVar7 = piVar10 + local_8;
      if (*piVar7 == 0) {
        if ((piVar10 < piVar7 + -1) && (piVar7[-1] == 0)) {
          local_8 = local_8 + -1;
          piVar7 = piVar7 + -2;
          if (piVar10 < piVar7) {
            iVar4 = *piVar7;
            while (iVar4 == 0) {
              local_8 = local_8 + -1;
              piVar7 = piVar7 + -1;
              if (piVar7 <= piVar10) break;
              iVar4 = *piVar7;
            }
          }
        }
        *(int *)(param_1 + 0x10) = local_8;
      }
    }
  }
  return uVar2;
}



/* --- FUN_00023668 @ 00023668 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00023668(double param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5,
                   undefined4 *param_6)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  double *pdVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  double dVar24;
  uint local_194;
  undefined8 local_190;
  int local_188;
  double local_184;
  double local_17c;
  int local_170;
  int local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  int local_154;
  uint local_150;
  int local_14c;
  int local_148;
  int local_144;
  uint local_134;
  uint local_130;
  uint local_128;
  uint local_124;
  int local_120;
  int local_11c;
  int local_110;
  int local_10c;
  undefined1 local_108 [52];
  undefined1 local_d4 [52];
  undefined1 local_a0 [52];
  undefined1 local_6c [104];
  
  local_160 = FUN_00020448();
  uVar14 = FUN_00020448(local_6c);
  local_168 = FUN_00020448(local_108);
  uVar16 = DAT_000383e0;
  pcVar10 = DAT_0002bb18;
  local_16c = 0;
  local_170 = 0;
  if (DAT_0002bb18 != (char *)0x0) {
    *(int *)(DAT_0002bb18 + 4) = DAT_000383e0;
    *(int *)(pcVar10 + 8) = 1 << ((byte)uVar16 & 0x1f);
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
  }
  if ((longlong)param_1 < 0) {
    *param_5 = 1;
    local_17c = ABS(param_1);
    param_1 = local_17c;
  }
  else {
    *param_5 = 0;
  }
  dVar11 = param_1;
  uVar21 = param_1._0_4_;
  if ((param_1._4_4_ & 0x7ff00000) == 0x7ff00000) {
    *param_4 = 9999;
    if ((param_1._0_4_ == 0) && (((ulonglong)param_1 & 0xfffff00000000) == 0)) {
      if (param_6 == (undefined4 *)0x0) {
        return s_Infinity_00023612;
      }
      *param_6 = s_Infinity_00023612 + 8;
      return s_Infinity_00023612;
    }
    if (param_6 == (undefined4 *)0x0) {
      return &DAT_0002361b;
    }
    *param_6 = &DAT_0002361e;
    return &DAT_0002361b;
  }
  if ((byte)((byte)((ushort)((ushort)NAN(param_1) << 10) >> 8) |
            (byte)((ushort)((ushort)(param_1 == 0.0) << 0xe) >> 8)) == 0x40) {
    *param_4 = 1;
    if (param_6 == (undefined4 *)0x0) {
      return &DAT_0002361f;
    }
    *param_6 = &DAT_00023620;
    return &DAT_0002361f;
  }
  iVar15 = FUN_00021b18(uVar14,param_1._0_4_,param_1._4_4_);
  uVar20 = param_1._4_4_ >> 0x14 & 0x7ff;
  if (uVar20 == 0) {
    iVar17 = local_110 + local_10c;
    cVar4 = (char)(iVar17 + 0x432);
    if (iVar17 + 0x432 < 0x21) {
      uVar20 = param_1._0_4_ << (0x20U - cVar4 & 0x1f);
    }
    else {
      uVar20 = param_1._4_4_ << (0x40U - cVar4 & 0x1f) |
               param_1._0_4_ >> ((char)iVar17 + 0x12U & 0x1f);
    }
    local_190._4_4_ = (int)((ulonglong)(double)uVar20 >> 0x20);
    local_190 = (double)CONCAT44(local_190._4_4_ + -0x1f00000,SUB84((double)uVar20,0));
    uVar20 = iVar17 - 1;
    bVar9 = true;
    local_184 = local_190;
  }
  else {
    local_184 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar20 = uVar20 - 0x3ff;
    bVar9 = false;
  }
  dVar1 = _DAT_0002363c * (double)(int)uVar20 +
          _DAT_00023634 + _DAT_0002362c * (local_184 - _DAT_00023624);
  local_134 = (uint)ROUND(dVar1);
  if ((dVar1 < 0.0) &&
     (dVar5 = (double)(int)local_134,
     (byte)(dVar5 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar5) || NAN(dVar1)) << 10) >> 8) |
           (byte)((ushort)((ushort)(dVar5 == dVar1) << 0xe) >> 8)) != 0x40)) {
    local_134 = local_134 - 1;
  }
  bVar7 = true;
  if (local_134 < 0x17) {
    dVar1 = *(double *)(&DAT_0002ba10 + local_134 * 8);
    if ((byte)(param_1 < dVar1 | (byte)((ushort)((ushort)(NAN(param_1) || NAN(dVar1)) << 10) >> 8) |
              (byte)((ushort)((ushort)(param_1 == dVar1) << 0xe) >> 8)) == 1) {
      local_134 = local_134 - 1;
    }
    bVar7 = false;
  }
  uVar12 = local_134;
  local_14c = (local_110 - uVar20) + -1;
  if (local_14c < 0) {
    local_11c = -local_14c;
    local_14c = 0;
  }
  else {
    local_11c = 0;
  }
  if ((int)local_134 < 0) {
    local_11c = local_11c - local_134;
    local_120 = -local_134;
    local_150 = 0;
  }
  else {
    local_120 = 0;
    local_150 = local_134;
    local_14c = local_14c + local_134;
  }
  if (9 < param_2) {
    param_2 = 0;
  }
  bVar3 = 5 < (int)param_2;
  if (bVar3) {
    param_2 = param_2 - 4;
  }
  bVar8 = true;
  switch(param_2) {
  case 0:
  case 1:
    local_130 = 0xffffffff;
    local_128 = 0xffffffff;
    uVar20 = 0x12;
    param_3 = 0;
    break;
  case 2:
    bVar8 = false;
  case 4:
    if ((int)param_3 < 1) {
      param_3 = 1;
    }
    local_130 = param_3;
    local_128 = param_3;
    uVar20 = param_3;
    break;
  case 3:
    bVar8 = false;
  case 5:
    local_128 = local_134 + 1 + param_3;
    local_130 = local_128 - 1;
    uVar20 = local_128;
    if ((int)local_128 < 1) {
      uVar20 = 1;
    }
  }
  uVar13 = local_128;
  local_194 = 0x20;
  DAT_000383e0 = 3;
  if (0x33 < uVar20) {
    do {
      DAT_000383e0 = DAT_000383e0 + 1;
      local_194 = local_194 * 2;
    } while (local_194 + 0x14 <= uVar20);
  }
  if ((DAT_0002bb18 == (char *)0x0) || (*(int *)(DAT_0002bb18 + 4) < DAT_000383e0)) {
    FUN_000204c8();
    DAT_0002bb18 = (char *)FUN_00020478(DAT_000383e0);
  }
  pcVar10 = DAT_0002bb18;
  dVar1 = _DAT_0002365c;
  dVar5 = _DAT_00023644;
  if ((0xe < local_128) || (bVar3)) {
LAB_00023f21:
    local_134 = uVar12;
    if ((local_10c < 0) || (0xe < (int)uVar12)) {
      local_144 = local_11c;
      local_148 = local_120;
      if (bVar8) {
        if ((int)param_2 < 2) {
          if (bVar9) {
            uVar20 = local_10c + 0x433;
          }
          else {
            uVar20 = 0x36 - local_110;
          }
        }
        else {
          local_148 = uVar13 - 1;
          if (local_120 < local_148) {
            local_150 = local_150 + (local_148 - local_120);
            local_120 = local_120 + (local_148 - local_120);
            local_148 = 0;
          }
          else {
            local_148 = local_120 - local_148;
          }
          uVar20 = uVar13;
          if ((int)uVar13 < 0) {
            local_144 = local_11c - uVar13;
            uVar20 = 0;
          }
        }
        local_11c = local_11c + uVar20;
        local_14c = local_14c + uVar20;
        uVar16 = FUN_00020448(local_a0,1);
        local_16c = FUN_00020b38(uVar16);
      }
      if ((0 < local_144) && (0 < local_14c)) {
        iVar17 = local_144;
        if (local_14c < local_144) {
          iVar17 = local_14c;
        }
        local_11c = local_11c - iVar17;
        local_144 = local_144 - iVar17;
        local_14c = local_14c - iVar17;
      }
      local_164 = iVar15;
      if (0 < local_120) {
        if (bVar8) {
          if (0 < local_148) {
            local_16c = FUN_000211c8(local_16c,local_148);
            local_164 = FUN_00020b68(local_160,local_16c,iVar15);
            local_160 = iVar15;
          }
          local_120 = local_120 - local_148;
          if (local_120 == 0) goto LAB_00024234;
        }
        local_164 = FUN_000211c8(local_164,local_120);
      }
LAB_00024234:
      local_168 = FUN_00020b38(local_168,1);
      if (0 < (int)local_150) {
        local_168 = FUN_000211c8(local_168,local_150);
      }
      if ((int)param_2 < 2) {
        if (((uVar21 == 0) && (((ulonglong)dVar11 & 0xfffff00000000) == 0)) &&
           (((ulonglong)dVar11 & 0x7ff0000000000000) != 0)) {
          local_11c = local_11c + 1;
          local_14c = local_14c + 1;
          local_154 = 1;
        }
        else {
          local_154 = 0;
        }
      }
      if (local_150 == 0) {
        uVar21 = local_14c + 1;
      }
      else {
        iVar15 = FUN_00020a18();
        uVar21 = (local_14c + 0x20) - iVar15;
      }
      iVar15 = 0;
      if ((uVar21 & 0x1f) != 0) {
        iVar15 = 0x20 - (uVar21 & 0x1f);
      }
      if (iVar15 < 5) {
        if (iVar15 < 4) {
          iVar15 = iVar15 + 0x1c;
          goto LAB_00024320;
        }
      }
      else {
        iVar15 = iVar15 + -4;
LAB_00024320:
        local_11c = local_11c + iVar15;
        local_144 = local_144 + iVar15;
        local_14c = local_14c + iVar15;
      }
      if (0 < local_11c) {
        local_164 = FUN_00021218(local_164,local_11c);
      }
      if (0 < local_14c) {
        local_168 = FUN_00021218(local_168,local_14c);
      }
      local_128 = uVar13;
      if ((bVar7) && (iVar15 = FUN_00021488(local_164,local_168), iVar15 < 0)) {
        local_134 = uVar12 - 1;
        local_164 = FUN_000205c8(local_164,10,0);
        if (bVar8) {
          local_16c = FUN_000205c8(local_16c,10,0);
        }
        local_128 = local_130;
      }
      if (((int)local_128 < 1) && (2 < (int)param_2)) {
        if (-1 < (int)local_128) {
          local_168 = FUN_000205c8(local_168,5,0);
          iVar15 = FUN_00021488(local_164,local_168);
          if (0 < iVar15) goto LAB_0002445c;
        }
        goto LAB_0002443a;
      }
      pcVar22 = pcVar10;
      if (bVar8) {
        if (0 < local_144) {
          local_16c = FUN_00021218(local_16c,local_144);
        }
        if (local_154 == 0) {
          local_170 = local_16c;
        }
        else {
          uVar16 = FUN_00020448(local_d4,*(undefined4 *)(local_16c + 4));
          local_170 = FUN_00020578(uVar16);
          FUN_000204e8(local_170,local_16c);
          local_16c = FUN_00021218(local_16c,1);
        }
        uVar21 = 1;
        do {
          iVar15 = FUN_00023088(local_164,local_168);
          local_124 = iVar15 + 0x30;
          iVar17 = FUN_00021488(local_164,local_170);
          local_160 = FUN_000214e8(local_160,local_168,local_16c);
          if (*(short *)(local_160 + 0xe) == 0) {
            iVar18 = FUN_00021488(local_164,local_160);
          }
          else {
            iVar18 = 1;
          }
          if (((iVar18 == 0) && (param_2 == 0)) && (((ulonglong)dVar11 & 1) == 0)) {
            if (local_124 != 0x39) {
              if (0 < iVar17) {
                local_124 = iVar15 + 0x31;
              }
LAB_000245c1:
              *pcVar22 = (char)local_124;
              goto LAB_000247ee;
            }
LAB_00024655:
            *pcVar22 = '9';
            pcVar22 = pcVar22 + 1;
            goto LAB_000247b0;
          }
          if ((iVar17 < 0) || (((iVar17 == 0 && (param_2 == 0)) && (((ulonglong)dVar11 & 1) == 0))))
          {
            if (0 < iVar18) {
              uVar16 = FUN_00021218(local_164,1);
              iVar17 = FUN_00021488(uVar16,local_168);
              if (((0 < iVar17) || ((iVar17 == 0 && ((local_124 & 1) != 0)))) &&
                 (local_124 = iVar15 + 0x31, local_124 == 0x3a)) goto LAB_00024655;
            }
            goto LAB_000245c1;
          }
          if (0 < iVar18) {
            if (local_124 == 0x39) goto LAB_00024655;
            *pcVar22 = (char)local_124 + '\x01';
            goto LAB_000247ee;
          }
          *pcVar22 = (char)local_124;
          pcVar22 = pcVar22 + 1;
          if (local_128 == uVar21) goto LAB_00024768;
          local_164 = FUN_000205c8(local_164,10);
          if (local_170 == local_16c) {
            local_170 = FUN_000205c8(local_16c);
            local_16c = local_170;
          }
          else {
            local_170 = FUN_000205c8(local_170);
            local_16c = FUN_000205c8(local_16c,10,0);
          }
          uVar21 = uVar21 + 1;
        } while( true );
      }
      iVar15 = 1;
      while( true ) {
        iVar17 = FUN_00023088(local_164,local_168);
        local_124 = iVar17 + 0x30;
        *pcVar22 = (char)local_124;
        pcVar22 = pcVar22 + 1;
        if ((int)local_128 <= iVar15) break;
        local_164 = FUN_000205c8(local_164);
        iVar15 = iVar15 + 1;
      }
LAB_00024768:
      uVar16 = FUN_00021218(local_164,1);
      iVar15 = FUN_00021488(uVar16,local_168);
      if ((iVar15 < 1) && ((iVar15 != 0 || ((local_124 & 1) == 0)))) {
        do {
          pcVar22 = pcVar22 + -1;
        } while (*pcVar22 == '0');
      }
      else {
LAB_000247b0:
        do {
          pcVar22 = pcVar22 + -1;
          if (*pcVar22 != '9') {
            *pcVar22 = *pcVar22 + '\x01';
            goto LAB_000247ee;
          }
        } while (pcVar10 != pcVar22);
        local_134 = local_134 + 1;
        *pcVar10 = '1';
        pcVar22 = pcVar10;
      }
LAB_000247ee:
      pcVar22 = pcVar22 + 1;
    }
    else {
      dVar1 = *(double *)(&DAT_0002ba10 + uVar12 * 8);
      if ((-1 < (int)param_3) || (0 < (int)uVar13)) {
        uVar21 = 1;
        pcVar22 = pcVar10;
        param_1 = dVar11;
        while( true ) {
          uVar20 = (uint)ROUND(param_1 / dVar1);
          param_1 = param_1 - dVar1 * (double)(int)uVar20;
          local_194._0_1_ = (char)uVar20;
          *pcVar22 = (char)local_194 + '0';
          pcVar22 = pcVar22 + 1;
          if (uVar13 == uVar21) break;
          param_1 = _DAT_00023644 * param_1;
          if ((byte)(param_1 < 0.0 | (byte)((ushort)((ushort)NAN(param_1) << 10) >> 8) |
                    (byte)((ushort)((ushort)(param_1 == 0.0) << 0xe) >> 8)) == 0x40)
          goto LAB_00024862;
          uVar21 = uVar21 + 1;
        }
        param_1 = param_1 + param_1;
        pcVar23 = pcVar22;
        if ((param_1 <= dVar1) &&
           (((byte)((byte)((ushort)((ushort)(NAN(param_1) || NAN(dVar1)) << 10) >> 8) |
                   (byte)((ushort)((ushort)(param_1 == dVar1) << 0xe) >> 8)) != 0x40 ||
            ((uVar20 & 1) == 0)))) goto LAB_00024862;
        goto LAB_00024022;
      }
      if (((int)uVar13 < 0) || (dVar11 <= _DAT_00023654 * dVar1)) goto LAB_0002443a;
LAB_0002445c:
      *pcVar10 = '1';
      local_134 = local_134 + 1;
      pcVar22 = pcVar10 + 1;
    }
  }
  else {
    local_188 = 2;
    if ((int)local_134 < 1) {
      local_194 = -local_134;
      if (local_194 != 0) {
        param_1 = param_1 * *(double *)(&DAT_0002ba10 + (local_194 & 0xf) * 8);
        local_194 = (int)local_194 >> 4;
        if (local_194 != 0) {
          pdVar19 = (double *)&DAT_0002bac8;
          do {
            if ((local_194 & 1) != 0) {
              local_188 = local_188 + 1;
              param_1 = param_1 * *pdVar19;
            }
            local_194 = (int)local_194 >> 1;
            pdVar19 = pdVar19 + 1;
          } while (local_194 != 0);
        }
      }
    }
    else {
      dVar24 = *(double *)(&DAT_0002ba10 + (local_134 & 0xf) * 8);
      local_194 = (int)local_134 >> 4;
      if ((local_194 & 0x10) != 0) {
        local_194 = local_194 & 0xf;
        param_1 = param_1 / _DAT_0002bae8;
        local_188 = 3;
      }
      if (local_194 != 0) {
        pdVar19 = (double *)&DAT_0002bac8;
        do {
          if ((local_194 & 1) != 0) {
            local_188 = local_188 + 1;
            dVar24 = dVar24 * *pdVar19;
          }
          local_194 = (int)local_194 >> 1;
          pdVar19 = pdVar19 + 1;
        } while (local_194 != 0);
      }
      param_1 = param_1 / dVar24;
    }
    if (((bVar7) && (param_1 < 1.0)) && (0 < (int)local_128)) {
      if ((int)local_130 < 1) goto LAB_00023f21;
      local_128 = local_130;
      local_134 = local_134 - 1;
      param_1 = _DAT_00023644 * param_1;
      local_188 = local_188 + 1;
    }
    dVar24 = _DAT_0002364c + param_1 * (double)local_188;
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20) + -0x3400000,SUB84(dVar24,0));
    if (local_128 != 0) {
      if (bVar8) {
        dVar24 = _DAT_0002365c / *(double *)(&DAT_0002ba08 + local_128 * 8) - dVar24;
        iVar17 = 0;
        pcVar22 = DAT_0002bb18;
        while( true ) {
          dVar1 = param_1 - (double)(int)ROUND(param_1);
          local_194._0_1_ = (char)(int)ROUND(param_1);
          *pcVar22 = (char)local_194 + '0';
          pcVar22 = pcVar22 + 1;
          if ((byte)(dVar1 < dVar24 |
                     (byte)((ushort)((ushort)(NAN(dVar1) || NAN(dVar24)) << 10) >> 8) |
                    (byte)((ushort)((ushort)(dVar1 == dVar24) << 0xe) >> 8)) == 1) break;
          dVar2 = 1.0 - dVar1;
          pcVar23 = pcVar22;
          if ((byte)(dVar2 < dVar24 |
                     (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar24)) << 10) >> 8) |
                    (byte)((ushort)((ushort)(dVar2 == dVar24) << 0xe) >> 8)) == 1)
          goto LAB_00024022;
          iVar17 = iVar17 + 1;
          if ((int)local_128 <= iVar17) goto LAB_00023f21;
          dVar24 = dVar24 * dVar5;
          param_1 = dVar1 * dVar5;
        }
        goto LAB_00024862;
      }
      dVar2 = *(double *)(&DAT_0002ba08 + local_128 * 8);
      uVar20 = 1;
      pcVar23 = DAT_0002bb18;
      while( true ) {
        dVar6 = param_1 - (double)(int)ROUND(param_1);
        local_194._0_1_ = (char)(int)ROUND(param_1);
        *pcVar23 = (char)local_194 + '0';
        pcVar23 = pcVar23 + 1;
        if (local_128 == uVar20) break;
        uVar20 = uVar20 + 1;
        param_1 = dVar6 * dVar5;
      }
      dVar5 = dVar24 * dVar2 + dVar1;
      if ((byte)(dVar5 < dVar6 | (byte)((ushort)((ushort)(NAN(dVar5) || NAN(dVar6)) << 10) >> 8) |
                (byte)((ushort)((ushort)(dVar5 == dVar6) << 0xe) >> 8)) != 1) {
        dVar1 = dVar1 - dVar24 * dVar2;
        if ((byte)(dVar6 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar6) || NAN(dVar1)) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar6 == dVar1) << 0xe) >> 8)) == 1) {
          do {
            pcVar22 = pcVar23;
            pcVar23 = pcVar22 + -1;
          } while (pcVar22[-1] == '0');
          goto LAB_00024862;
        }
        goto LAB_00023f21;
      }
LAB_00024022:
      do {
        pcVar22 = pcVar23;
        pcVar23 = pcVar22 + -1;
        if (*pcVar23 != '9') goto LAB_00024028;
      } while (pcVar10 != pcVar23);
      local_134 = local_134 + 1;
      *pcVar10 = '0';
LAB_00024028:
      *pcVar23 = *pcVar23 + '\x01';
      goto LAB_00024862;
    }
    if (dVar24 < param_1 - _DAT_00023654) goto LAB_0002445c;
    if (-dVar24 <= param_1 - _DAT_00023654) goto LAB_00023f21;
LAB_0002443a:
    local_134 = ~param_3;
    pcVar22 = pcVar10;
  }
  FUN_000204c8();
  FUN_000204c8(local_168);
  if (local_16c != 0) {
    if ((local_170 != 0) && (local_170 != local_16c)) {
      FUN_000204c8();
    }
    FUN_000204c8();
  }
LAB_00024862:
  FUN_000204c8();
  *pcVar22 = '\0';
  *param_4 = local_134 + 1;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = pcVar22;
  }
  return pcVar10;
}



/* --- FUN_00025310 @ 00025310 --- */

int FUN_00025310(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = param_2;
  do {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if ((int)uVar2 < 1) {
      iVar1 = FUN_0000a650(param_1);
      if (iVar1 == -1) break;
      uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    }
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    iVar1 = FUN_0001bfc8(*(undefined4 *)(param_1 + 4),param_4,uVar2);
    if (iVar1 != 0) {
      iVar3 = iVar1 - *(int *)(param_1 + 4);
      if ((-1 < param_5) && (iVar1 = iVar1 + 1, 0 < param_5)) {
        iVar3 = iVar3 + 1;
      }
      FUN_0000b700(local_8,*(undefined4 *)(param_1 + 4),iVar3);
      *(int *)(param_1 + 4) = iVar1;
      return (local_8 - param_2) + iVar3;
    }
    FUN_0000b700(local_8,*(undefined4 *)(param_1 + 4),uVar2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + uVar2;
    local_8 = local_8 + uVar2;
    param_3 = param_3 - uVar2;
  } while (param_3 != 0);
  return local_8 - param_2;
}



/* --- FUN_000253d0 @ 000253d0 --- */

int FUN_000253d0(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_000253f8 @ 000253f8 --- */

int FUN_000253f8(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00025608 @ 00025608 --- */

char * FUN_00025608(undefined4 param_1)

{
  switch(param_1) {
  case 5:
  case 0x4d:
    return &DAT_000254d5;
  default:
    FUN_0000f910(&DAT_000383e8,&DAT_000255fd,param_1);
    return &DAT_000383e8;
  case 7:
    return &DAT_000254d9;
  case 9:
    return s_discard_000254de;
  case 0xb:
    return s_systat_000254e6;
  case 0xd:
    return s_daytime_000254ed;
  case 0xf:
    return s_netstat_000254f5;
  case 0x11:
    return &DAT_000254fd;
  case 0x13:
    return s_chargen_00025502;
  case 0x14:
    return s_ftp_data_0002550a;
  case 0x15:
    return &DAT_00025513;
  case 0x17:
    return s_telnet_00025517;
  case 0x19:
    return &DAT_0002551e;
  case 0x25:
    return &DAT_00025523;
  case 0x27:
    return &DAT_00025528;
  case 0x2a:
    return &DAT_0002552c;
  case 0x2b:
    return s_whois_00025531;
  case 0x35:
    return s_domain_00025537;
  case 0x39:
    return &DAT_0002553e;
  case 0x3b:
    return &DAT_00025543;
  case 0x43:
    return s_bootps_00025548;
  case 0x44:
    return s_bootpc_0002554f;
  case 0x45:
    return &DAT_00025556;
  case 0x4f:
    return s_finger_0002555b;
  case 0x57:
    return &DAT_00025562;
  case 0x5f:
    return s_supdup_00025567;
  case 100:
    return s_newacct_0002556e;
  case 0x65:
    return s_hostnames_00025576;
  case 0x66:
    return s_iso_tsap_00025580;
  case 0x67:
    return &DAT_00025589;
  case 0x68:
    return s_x400_snd_0002558e;
  case 0x69:
    return s_csnet_ns_00025597;
  case 0x6d:
    return s_pop_2_000255a0;
  case 0x6f:
    return s_sunrpc_000255a6;
  case 0x71:
    return &DAT_000255ad;
  case 0x73:
    return &DAT_000255b2;
  case 0x75:
    return s_uucp_path_000255b7;
  case 0x77:
    return &DAT_000255c1;
  case 0x79:
    return &DAT_000255c6;
  case 0x7b:
    return &DAT_000255cb;
  case 0x85:
    return s_statsrv_000255cf;
  case 0x88:
    return s_profile_000255d7;
  case 0x90:
    return &DAT_000255df;
  case 0xa1:
    return &DAT_000255e4;
  case 0xa2:
    return s_snmp_trap_000255e9;
  case 0xaa:
    return s_print_srv_000255f3;
  }
}



/* --- FUN_00025be8 @ 00025be8 --- */

char * FUN_00025be8(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return &DAT_00025bb1;
  case 2:
    return &DAT_00025bb6;
  case 3:
    return &DAT_00025bbb;
  default:
    FUN_0000f910(&DAT_000383e8,&DAT_000255fd,param_1);
    return &DAT_000383e8;
  case 5:
    return &DAT_00025bbf;
  case 6:
    return &DAT_00025bc2;
  case 7:
    return &DAT_00025bc6;
  case 8:
    return &DAT_00025bca;
  case 9:
    return &DAT_00025bce;
  case 0xb:
    return s_nvp_II_00025bd2;
  case 0xc:
    return &DAT_00025bd9;
  case 0x10:
    return s_chaos_00025bdd;
  case 0x11:
    return &DAT_00025be3;
  }
}



/* --- FUN_00025d38 @ 00025d38 --- */

int FUN_00025d38(int param_1,int param_2,undefined2 param_3,uint param_4,int param_5,
                undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  
  param_4 = param_4 & DAT_0002b2d0;
  uVar2 = (uint)CONCAT11((char)param_3,(char)((ushort)param_3 >> 8));
  if (uVar2 != 0) {
    if ((DAT_0002b2d0 == 0) || ((param_4 != 0 && ((DAT_0002b2d0 & 0x100) != 0)))) {
      FUN_00012f18(param_5,param_6);
    }
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
LAB_00025e16:
      if ((DAT_0002b2d0 == 0) || ((param_4 != 0 && ((DAT_0002b2d0 & 0x100) != 0)))) {
        if (*(uint *)(param_5 + 0x14) < *(uint *)(param_5 + 0x18)) {
          **(undefined1 **)(param_5 + 0x14) = 10;
          *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 1;
        }
        else {
          FUN_0000a4d0(param_5,10);
        }
      }
    }
    else {
      uVar1 = ~uVar2 & 3;
      if (uVar1 == 0) goto LAB_00025da8;
      if (2 < uVar1) goto LAB_00025dfa;
      if (1 < uVar1) goto LAB_00025de0;
      while (param_2 = FUN_000266a8(param_2,param_1,param_5), param_2 - param_1 < 0x201) {
        uVar2 = uVar2 - 1;
LAB_00025de0:
        param_2 = FUN_000266a8(param_2,param_1,param_5);
        if (0x200 < param_2 - param_1) break;
        uVar2 = uVar2 - 1;
LAB_00025dfa:
        param_2 = FUN_000266a8(param_2,param_1,param_5);
        if (0x200 < param_2 - param_1) break;
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) goto LAB_00025e16;
LAB_00025da8:
        param_2 = FUN_000266a8(param_2,param_1,param_5);
        if (0x200 < param_2 - param_1) break;
        uVar2 = uVar2 - 1;
      }
      param_2 = 0;
    }
  }
  return param_2;
}



/* --- FUN_00025e78 @ 00025e78 --- */

void FUN_00025e78(undefined4 param_1)

{
  FUN_00026418(param_1,&DAT_0002b0c0);
  return;
}



/* --- FUN_00025ea8 @ 00025ea8 --- */

void FUN_00025ea8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_00012f18(param_2,s____res_options__00025e8d);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0002b170;
  }
  uVar2 = 1;
  do {
    if ((param_1[2] & uVar2) != 0) {
      uVar1 = FUN_000276c8(uVar2);
      FUN_00012f18(param_2,&DAT_00025e9d,uVar1);
    }
    uVar2 = uVar2 * 2;
  } while (uVar2 != 0);
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x18)) {
    **(undefined1 **)(param_2 + 0x14) = 10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  else {
    FUN_0000a4d0(param_2,10);
  }
  return;
}



/* --- FUN_00026028 @ 00026028 --- */

void FUN_00026028(undefined2 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  char *pcVar6;
  
  puVar2 = param_1 + 6;
  puVar4 = (undefined2 *)((int)puVar2 + param_2);
  if (((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x800) != 0)) ||
     ((*(byte *)((int)param_1 + 3) & 0xf) != 0)) {
    FUN_00012f18(param_3,s_____>>HEADER<<__opcode:__s,_stat_00025f1b,
                 (&PTR_s_QUERY_0002bb50)[*(byte *)(param_1 + 1) >> 3 & 0xf],
                 (&PTR_s_NOERROR_0002bb90)[*(byte *)((int)param_1 + 3) & 0xf],
                 CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8)));
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 10;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,10);
    }
  }
  if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
    **(undefined1 **)(param_3 + 0x14) = 0x3b;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  else {
    FUN_0000a4d0(param_3,0x3b);
  }
  if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x200) != 0)) {
    FUN_00012f18(param_3,s___flags__00025f4a);
    if (*(char *)(param_1 + 1) < '\0') {
      FUN_00012f18(param_3,&DAT_00025f53);
    }
    if ((*(byte *)(param_1 + 1) & 4) != 0) {
      FUN_00012f18(param_3,&DAT_00025f57);
    }
    if ((*(byte *)(param_1 + 1) & 2) != 0) {
      FUN_00012f18(param_3,&DAT_00025f5b);
    }
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      FUN_00012f18(param_3,&DAT_00025f5f);
    }
    if (*(char *)((int)param_1 + 3) < '\0') {
      FUN_00012f18(param_3,&DAT_00025f63);
    }
    if ((*(byte *)((int)param_1 + 3) & 0x40) != 0) {
      FUN_00012f18(param_3,&DAT_00025f67);
    }
  }
  if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x100) != 0)) {
    FUN_00012f18(param_3,s___Ques___d_00025f6b,
                 CONCAT11((char)param_1[2],(char)((ushort)param_1[2] >> 8)));
    FUN_00012f18(param_3,s___Ans___d_00025f76,
                 CONCAT11((char)param_1[3],(char)((ushort)param_1[3] >> 8)));
    FUN_00012f18(param_3,s___Auth___d_00025f80,
                 CONCAT11((char)param_1[4],(char)((ushort)param_1[4] >> 8)));
    FUN_00012f18(param_3,s___Addit___d_00025f8b,
                 CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8)));
  }
  if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0xb00) != 0)) {
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 10;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,10);
    }
  }
  uVar5 = (uint)CONCAT11((char)param_1[2],(char)((ushort)param_1[2] >> 8));
  if (uVar5 != 0) {
    if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x10) != 0)) {
      FUN_00012f18(param_3,s____QUESTIONS__00025f97);
    }
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      FUN_00012f18(param_3,&DAT_00025fa6);
      if (puVar4 <= puVar2) goto LAB_000263e8;
      puVar2 = (undefined2 *)FUN_000264c8(puVar2,param_1,param_3);
      if (puVar2 == (undefined2 *)0x0) goto LAB_000263f8;
      if (puVar4 <= puVar2) goto LAB_000263e8;
      if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x10) != 0)) {
        uVar1 = FUN_0000dc60(puVar2);
        uVar1 = FUN_00026ff8(uVar1);
        FUN_00012f18(param_3,s___type____s_00025faa,uVar1);
      }
      if (puVar4 <= puVar2 + 1) goto LAB_000263e8;
      if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x10) != 0)) {
        uVar1 = FUN_0000dc60(puVar2 + 1);
        uVar1 = FUN_000275e8(uVar1);
        FUN_00012f18(param_3,s___class____s_00025fb6,uVar1);
      }
      puVar2 = puVar2 + 2;
      if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
        **(undefined1 **)(param_3 + 0x14) = 10;
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      }
      else {
        FUN_0000a4d0(param_3,10);
      }
    }
  }
  if (puVar2 < puVar4) {
    puVar2 = (undefined2 *)
             FUN_00025d38(param_1,puVar2,param_1[3],0x20,param_3,s____ANSWERS__00025fc4);
    if (puVar2 != (undefined2 *)0x0) {
      if (puVar4 <= puVar2) goto LAB_000263e8;
      puVar2 = (undefined2 *)
               FUN_00025d38(param_1,puVar2,param_1[4],0x40,param_3,s____AUTHORITY_RECORDS__00025fd1)
      ;
      if (puVar2 != (undefined2 *)0x0) {
        if (puVar4 <= puVar2) goto LAB_000263e8;
        iVar3 = FUN_00025d38(param_1,puVar2,param_1[5],0x80,param_3,
                             s____ADDITIONAL_RECORDS__00025fe8);
        if (iVar3 != 0) {
          return;
        }
      }
    }
LAB_000263f8:
    pcVar6 = s_______malformed_00026012;
  }
  else {
LAB_000263e8:
    pcVar6 = s_______truncated_00026000;
  }
  FUN_00012f18(param_3,pcVar6);
  return;
}



/* --- FUN_00026418 @ 00026418 --- */

void FUN_00026418(undefined4 param_1,undefined4 param_2)

{
  FUN_00026028(param_1,0x200,param_2);
  return;
}



/* --- FUN_00026438 @ 00026438 --- */

int FUN_00026438(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char local_104 [256];
  
  iVar1 = FUN_0000d5e0(param_2,param_2 + param_3,param_1,local_104,0x100);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    if (local_104[0] == '\0') {
      if (*(uint *)(param_4 + 0x14) < *(uint *)(param_4 + 0x18)) {
        **(undefined1 **)(param_4 + 0x14) = 0x2e;
        *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + 1;
      }
      else {
        FUN_0000a4d0(param_4,0x2e);
      }
    }
    else {
      FUN_00029608(local_104,param_4);
    }
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}



/* --- FUN_000264c8 @ 000264c8 --- */

void FUN_000264c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00026438(param_1,param_2,0x200,param_3);
  return;
}



/* --- FUN_000264e8 @ 000264e8 --- */

int FUN_000264e8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 local_108;
  char local_104 [256];
  
  local_108 = FUN_0000d5e0(param_2,param_1 + 0xff,param_1,local_104,0x100);
  if (local_108 < 0) {
    return 0;
  }
  if (local_104[0] == '\0') {
    if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x14)) {
LAB_0002658a:
      FUN_0000a4d0(param_3,0x2e);
      goto LAB_000265a1;
    }
  }
  else {
    FUN_00029608(local_104,param_3);
    uVar2 = 0xffffffff;
    pcVar3 = local_104;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (local_104[~uVar2 - 2] == '.') goto LAB_000265a1;
    if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x14)) goto LAB_0002658a;
  }
  **(undefined1 **)(param_3 + 0x14) = 0x2e;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
LAB_000265a1:
  return param_1 + local_108;
}



/* --- FUN_000266a8 @ 000266a8 --- */

byte * FUN_000266a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined *puVar13;
  int local_24;
  uint local_14;
  undefined4 local_8;
  
  iVar4 = FUN_000264e8(param_1,param_2,param_3);
  if (iVar4 == 0) {
    return (byte *)0x0;
  }
  uVar5 = FUN_0000dc60(iVar4);
  iVar6 = FUN_0000dc60(iVar4 + 2);
  uVar7 = FUN_0000dc80(iVar4 + 4);
  iVar8 = FUN_0000dc60(iVar4 + 8);
  pbVar11 = (byte *)(iVar4 + 10);
  if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 0x400) != 0)) {
    FUN_00012f18(param_3,&DAT_000265b7,uVar7);
  }
  if ((DAT_0002b2d0 == 0) || ((DAT_0002b2d0 & 4) != 0)) {
    uVar7 = FUN_000275e8(iVar6);
    FUN_00012f18(param_3,&DAT_000265bc,uVar7);
  }
  uVar7 = FUN_00026ff8(uVar5);
  FUN_00012f18(param_3,&DAT_000265bc,uVar7);
  pbVar12 = pbVar11;
  switch(uVar5) {
  case 1:
    if ((iVar6 != 1) && (iVar6 != 4)) {
      pbVar12 = pbVar11 + iVar8;
      break;
    }
    FUN_00007dc0(pbVar11,&local_8,4);
    if (iVar8 != 4) {
      if (iVar8 == 7) {
        uVar5 = FUN_00007d68(local_8);
        uVar1 = *(undefined1 *)(iVar4 + 0xe);
        uVar3 = FUN_0000dc60(iVar4 + 0xf);
        pbVar12 = (byte *)(iVar4 + 0x11);
        FUN_00012f18(param_3,s__s___proto__d__port__d_000265c0,uVar5,uVar1,uVar3);
      }
      break;
    }
    uVar5 = FUN_00007d68(local_8);
    puVar13 = &DAT_000265bc;
    goto LAB_00026e0e;
  case 2:
  case 5:
  case 7:
  case 8:
  case 9:
  case 0xc:
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 9;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,9);
    }
    pbVar12 = (byte *)FUN_000264e8(pbVar11,param_2,param_3);
    break;
  default:
    FUN_00012f18(param_3,s___d__00026668,uVar5);
    pbVar12 = pbVar11 + iVar8;
    break;
  case 6:
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 9;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,9);
    }
    uVar5 = FUN_000264e8(pbVar11,param_2,param_3);
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 0x20;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,0x20);
    }
    iVar4 = FUN_000264e8(uVar5,param_2,param_3);
    FUN_00029608(&DAT_000265de,param_3);
    uVar5 = FUN_0000dc80(iVar4);
    FUN_00012f18(param_3,s__lu___serial_000265e2,uVar5);
    uVar5 = FUN_0000dc80(iVar4 + 4);
    uVar7 = FUN_00027898(uVar5);
    FUN_00012f18(param_3,s__lu___refresh___s__000265f3,uVar5,uVar7);
    uVar5 = FUN_0000dc80(iVar4 + 8);
    uVar7 = FUN_00027898(uVar5);
    FUN_00012f18(param_3,s__lu___retry___s__0002660a,uVar5,uVar7);
    uVar5 = FUN_0000dc80(iVar4 + 0xc);
    uVar7 = FUN_00027898(uVar5);
    FUN_00012f18(param_3,s__lu___expire___s__0002661f,uVar5,uVar7);
    uVar5 = FUN_0000dc80(iVar4 + 0x10);
    uVar7 = FUN_00027898(uVar5);
    FUN_00012f18(param_3,s__lu_____minimum___s__00026635,uVar5,uVar7);
    pbVar12 = (byte *)(iVar4 + 0x14);
    break;
  case 0xb:
    if (iVar8 < 5) break;
    FUN_00007dc0(pbVar11,&local_8,4);
    uVar5 = FUN_00025be8(*(undefined1 *)(iVar4 + 0xe));
    uVar5 = FUN_00007d68(local_8,uVar5);
    FUN_00012f18(param_3,s__s__s___00026659,uVar5);
    pbVar12 = (byte *)(iVar4 + 0xf);
    uVar10 = 0;
    local_24 = 0;
    while (pbVar12 < pbVar11 + iVar8) {
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      do {
        if ((char)bVar2 < '\0') {
          if (local_24 == 0) {
            FUN_00029608(&DAT_00026663,param_3);
            local_24 = 5;
          }
          uVar5 = FUN_00025608(uVar10,param_3);
          FUN_00029608(uVar5);
          if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
            **(undefined1 **)(param_3 + 0x14) = 0x20;
            *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          }
          else {
            FUN_0000a4d0(param_3,0x20);
          }
          local_24 = local_24 + -1;
        }
        bVar2 = bVar2 << 1;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 7) != 0);
    }
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 0x29;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      break;
    }
    uVar5 = 0x29;
    goto LAB_00026ef5;
  case 0xd:
  case 0x14:
    uVar10 = (uint)*pbVar11;
    pbVar12 = (byte *)(iVar4 + 0xb);
    if (uVar10 != 0) {
      FUN_00012f18(param_3,s____s_000265d8,uVar10,pbVar12);
      pbVar12 = pbVar12 + uVar10;
    }
    uVar10 = (uint)*pbVar12;
    pbVar12 = pbVar12 + 1;
    if (uVar10 != 0) {
      FUN_00012f18(param_3,s____s_000265d8,uVar10,pbVar12);
      pbVar12 = pbVar12 + uVar10;
    }
    break;
  case 0xe:
  case 0x11:
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 9;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,9);
    }
    uVar5 = FUN_000264e8(pbVar11,param_2,param_3);
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 0x20;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,0x20);
    }
    pbVar12 = (byte *)FUN_000264e8(uVar5,param_2,param_3);
    break;
  case 0xf:
  case 0x12:
  case 0x15:
    uVar5 = FUN_0000dc60(pbVar11);
    FUN_00012f18(param_3,&DAT_0002664d,uVar5);
    pbVar12 = (byte *)FUN_000264e8(iVar4 + 0xc,param_2,param_3);
    break;
  case 0x10:
  case 0x13:
    FUN_00029608(&DAT_00026652,param_3);
    pbVar9 = pbVar11 + iVar8;
joined_r0x00026bb1:
    do {
      if (pbVar9 <= pbVar12) goto LAB_00026cf9;
      bVar2 = *pbVar12;
      local_14 = (uint)bVar2;
      pbVar12 = pbVar12 + 1;
      if (local_14 != 0) {
        if ((bVar2 & 1) == 0) goto LAB_00026bf8;
        if (pbVar12 < pbVar9) {
          if (*pbVar12 != 10) goto LAB_00026ca1;
          if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x14)) goto LAB_00026c88;
LAB_00026c98:
          **(undefined1 **)(param_3 + 0x14) = 0x5c;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
LAB_00026ca1:
          if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x14)) goto LAB_00026cc0;
LAB_00026cd8:
          **(byte **)(param_3 + 0x14) = *pbVar12;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          do {
            pbVar12 = pbVar12 + 1;
            local_14 = local_14 - 1;
            if ((int)local_14 < 1) goto joined_r0x00026bb1;
LAB_00026bf8:
            if (pbVar9 <= pbVar12) break;
            if (*pbVar12 == 10) {
              if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
                **(undefined1 **)(param_3 + 0x14) = 0x5c;
                *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
              }
              else {
                FUN_0000a4d0(param_3,0x5c);
              }
              if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) goto LAB_00026c68;
LAB_00026c50:
              FUN_0000a4d0(param_3,*pbVar12);
            }
            else {
              if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x14)) goto LAB_00026c50;
LAB_00026c68:
              **(byte **)(param_3 + 0x14) = *pbVar12;
              *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
            }
            pbVar12 = pbVar12 + 1;
            local_14 = local_14 - 1;
            if (pbVar9 <= pbVar12) break;
            if (*pbVar12 == 10) {
              if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x14)) goto LAB_00026c88;
              goto LAB_00026c98;
            }
            if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) goto LAB_00026cd8;
LAB_00026cc0:
            FUN_0000a4d0(param_3,*pbVar12);
          } while( true );
        }
        goto LAB_00026cf9;
      }
    } while( true );
  case 0x16:
    uVar5 = FUN_00029368(iVar8,pbVar11,0);
    FUN_00012f18(param_3,&DAT_000265bc,uVar5);
    pbVar12 = pbVar11 + iVar8;
    break;
  case 100:
    if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      **(undefined1 **)(param_3 + 0x14) = 9;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    else {
      FUN_0000a4d0(param_3,9);
    }
    FUN_00029608(pbVar11,param_3);
    pbVar12 = pbVar11 + iVar8;
    break;
  case 0x65:
  case 0x66:
    if (iVar8 != 4) break;
    uVar5 = FUN_0000dc80(pbVar11);
    puVar13 = &DAT_00026655;
LAB_00026e0e:
    FUN_00012f18(param_3,puVar13,uVar5);
    pbVar12 = (byte *)(iVar4 + 0xe);
  }
LAB_00026f2d:
  if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
    **(undefined1 **)(param_3 + 0x14) = 10;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  else {
    FUN_0000a4d0(param_3,10);
  }
  if (iVar8 != (int)pbVar12 - (int)pbVar11) {
    FUN_00012f18(param_3,s____packet_size_error__found__d__d_0002666e,(int)pbVar12 - (int)pbVar11,
                 iVar8);
    pbVar12 = (byte *)0x0;
  }
  return pbVar12;
LAB_00026c88:
  FUN_0000a4d0(param_3,0x5c);
  goto LAB_00026ca1;
LAB_00026cf9:
  if (*(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
    **(undefined1 **)(param_3 + 0x14) = 0x22;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    goto LAB_00026f2d;
  }
  uVar5 = 0x22;
LAB_00026ef5:
  FUN_0000a4d0(param_3,uVar5);
  goto LAB_00026f2d;
}



/* --- FUN_00026ff8 @ 00026ff8 --- */

char * FUN_00026ff8(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return &DAT_00026f79;
  case 2:
    return &DAT_00026f7b;
  default:
    FUN_0000f910(&DAT_000383f8,&DAT_000255fd,param_1);
    return &DAT_000383f8;
  case 5:
    return s_CNAME_00026f7e;
  case 6:
    return &DAT_00026f84;
  case 7:
    return &DAT_00026f88;
  case 8:
    return &DAT_00026f8b;
  case 9:
    return &DAT_00026f8e;
  case 10:
    return &DAT_00026f91;
  case 0xb:
    return &DAT_00026f96;
  case 0xc:
    return &DAT_00026f9a;
  case 0xd:
    return s_HINFO_00026f9e;
  case 0xe:
    return s_MINFO_00026fa4;
  case 0xf:
    return &DAT_00026faa;
  case 0x10:
    return &DAT_00026fad;
  case 0x11:
    return &DAT_00026fb6;
  case 0x12:
    return s_AFSDB_00026fb9;
  case 0x13:
    return &DAT_00026fbf;
  case 0x14:
    return &DAT_00026fc3;
  case 0x15:
    return &DAT_00026fc8;
  case 0x16:
    return &DAT_00026fb1;
  case 100:
    return s_UINFO_00026fe0;
  case 0x65:
    return &DAT_00026fe6;
  case 0x66:
    return &DAT_00026fea;
  case 0xfc:
    return &DAT_00026fcb;
  case 0xfd:
    return s_MAILB_00026fd0;
  case 0xfe:
    return s_MAILA_00026fd6;
  case 0xff:
    return &DAT_00026fdc;
  }
}



/* --- FUN_000275e8 @ 000275e8 --- */

undefined1 * FUN_000275e8(int param_1)

{
  if (param_1 == 4) {
    return &DAT_000275e4;
  }
  if (param_1 < 5) {
    if (param_1 == 1) {
      return &DAT_000275e1;
    }
  }
  else if (param_1 == 0xff) {
    return &DAT_00026fdc;
  }
  FUN_0000f910(&DAT_000383f8,&DAT_000255fd,param_1);
  return &DAT_000383f8;
}



/* --- FUN_000276c8 @ 000276c8 --- */

char * FUN_000276c8(uint param_1)

{
  if (param_1 == 0x20) {
    return s_igntc_00027680;
  }
  if (param_1 < 0x21) {
    if (param_1 == 4) {
      return s_aaonly_0002766c;
    }
    if (param_1 < 5) {
      if (param_1 == 1) {
        return &DAT_00027661;
      }
      if (param_1 == 2) {
        return s_debug_00027666;
      }
    }
    else {
      if (param_1 == 8) {
        return s_usevc_00027673;
      }
      if (param_1 == 0x10) {
        return s_primry_00027679;
      }
    }
  }
  else {
    if (param_1 == 0x100) {
      return s_styopn_00027694;
    }
    if (param_1 < 0x101) {
      if (param_1 == 0x40) {
        return s_recurs_00027686;
      }
      if (param_1 == 0x80) {
        return s_defnam_0002768d;
      }
    }
    else {
      if (param_1 == 0x400) {
        return s_insecure1_000276a2;
      }
      if (param_1 < 0x401) {
        if (param_1 == 0x200) {
          return s_dnsrch_0002769b;
        }
      }
      else if (param_1 == 0x800) {
        return s_insecure2_000276ac;
      }
    }
  }
  FUN_0000f910(&DAT_000383f8,s__0x_x__000276b6,param_1);
  return &DAT_000383f8;
}



/* --- FUN_00027898 @ 00027898 --- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00027898(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    _DAT_000383f8 = DAT_00027861;
    _DAT_000383fc = DAT_00027865;
    DAT_000383fe = DAT_00027867;
  }
  else {
    uVar2 = param_1 % 0x3c;
    uVar5 = (param_1 / 0x3c) / 0x3c;
    uVar6 = (param_1 / 0x3c) % 0x3c;
    uVar4 = uVar5 / 0x18;
    uVar5 = uVar5 % 0x18;
    pcVar3 = &DAT_000383f8;
    if (uVar4 != 0) {
      puVar1 = &DAT_00027869;
      if (uVar4 == 1) {
        puVar1 = &DAT_00027868;
      }
      FUN_0000f910(&DAT_000383f8,s__d_day_s_0002786b,uVar4,puVar1);
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
    }
    if (uVar5 != 0) {
      if (uVar4 != 0) {
        *pcVar3 = ' ';
        pcVar3 = pcVar3 + 1;
      }
      puVar1 = &DAT_00027869;
      if (uVar5 == 1) {
        puVar1 = &DAT_00027868;
      }
      FUN_0000f910(pcVar3,s__d_hour_s_00027874,uVar5,puVar1);
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
    }
    if (uVar6 != 0) {
      if ((uVar4 != 0) || (uVar5 != 0)) {
        *pcVar3 = ' ';
        pcVar3 = pcVar3 + 1;
      }
      puVar1 = &DAT_00027869;
      if (uVar6 == 1) {
        puVar1 = &DAT_00027868;
      }
      FUN_0000f910(pcVar3,s__d_min_s_0002787e,uVar6,puVar1);
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
    }
    if ((uVar2 != 0) || (((uVar4 == 0 && (uVar5 == 0)) && (uVar6 == 0)))) {
      if (((uVar4 != 0) || (uVar5 != 0)) || (uVar6 != 0)) {
        *pcVar3 = ' ';
        pcVar3 = pcVar3 + 1;
      }
      puVar1 = &DAT_00027869;
      if (uVar2 == 1) {
        puVar1 = &DAT_00027868;
      }
      FUN_0000f910(pcVar3,s__d_sec_s_00027887,uVar2,puVar1);
    }
  }
  return &DAT_000383f8;
}



/* --- FUN_00027a38 @ 00027a38 --- */

int FUN_00027a38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00027a88 @ 00027a88 --- */

int FUN_00027a88(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00027ae8 @ 00027ae8 --- */

int FUN_00027ae8(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00027b48 @ 00027b48 --- */

void FUN_00027b48(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_3 = ~uVar2 - 1;
  }
  else if (param_3 < 0) {
    param_3 = 0x400;
    pcVar3 = param_2 + 0x400;
    while (((param_2 < pcVar3 && (param_3 < 0x4000000)) && (param_3 = param_3 * 2, 0 < param_3))) {
      pcVar3 = param_2 + param_3;
    }
  }
  FUN_0000a760(param_1,param_2,param_2 + param_3,0);
  *(char **)(param_1 + 0x10) = param_2;
  *(char **)(param_1 + 0xc) = param_2;
  *(char **)(param_1 + 4) = param_2;
  if (param_4 == 0) {
    *(char **)(param_1 + 0x14) = param_2;
    *(char **)(param_1 + 0x18) = param_2;
    *(char **)(param_1 + 8) = param_2 + param_3;
  }
  else {
    *(int *)(param_1 + 0x14) = param_4;
    *(char **)(param_1 + 0x18) = param_2 + param_3;
    *(int *)(param_1 + 8) = param_4;
  }
  *(int *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



/* --- FUN_00027c18 @ 00027c18 --- */

void FUN_00027c18(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00027b48(param_1,param_2,param_3,0);
  *param_1 = *param_1 | 8;
  return;
}



/* --- FUN_00027c48 @ 00027c48 --- */

int FUN_00027c48(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  uVar2 = (uint)(param_2 == -1);
  local_c = param_1[5] - param_1[4];
  if ((*param_1 & 8) != 0) {
    return -(uint)(param_2 != -1);
  }
  if (param_1[0x14] < local_c) {
    param_1[0x14] = local_c;
  }
  local_10 = param_1[1] - param_1[3];
  if ((*param_1 & 0xc00) == 0x400) {
    *param_1 = *param_1 | 0x800;
    local_10 = param_1[0x14];
    local_c = param_1[1] - param_1[3];
  }
  if (local_c < (param_1[8] - param_1[7]) + uVar2) {
LAB_00027d2a:
    param_1[5] = local_c + param_1[7];
    param_1[3] = param_1[7];
    param_1[1] = local_10 + param_1[7];
    param_1[2] = param_1[7] + param_1[0x14];
    if (uVar2 == 0) {
      *(undefined1 *)param_1[5] = (undefined1)param_2;
      param_1[5] = param_1[5] + 1;
    }
  }
  else {
    if ((*param_1 & 1) == 0) {
      iVar1 = (param_1[8] - param_1[7]) * 2;
      uVar3 = (*(code *)param_1[0x15])(iVar1);
      if (uVar3 != 0) {
        FUN_0000b700(uVar3,param_1[7],param_1[8] - param_1[7]);
        if (param_1[7] != 0) {
          (*(code *)param_1[0x16])(param_1[7]);
          param_1[7] = 0;
        }
        FUN_0000a760(param_1,uVar3,iVar1 + uVar3,1);
        param_1[4] = uVar3;
        param_1[6] = param_1[8];
        goto LAB_00027d2a;
      }
    }
    param_2 = -1;
  }
  return param_2;
}



/* --- FUN_00027d78 @ 00027d78 --- */

uint FUN_00027d78(uint *param_1)

{
  if (param_1[0x14] < param_1[5] - param_1[4]) {
    param_1[0x14] = param_1[5] - param_1[4];
  }
  if ((*param_1 & 0xc00) == 0xc00) {
    *param_1 = *param_1 & 0xfffff7ff;
    param_1[5] = param_1[6];
  }
  param_1[2] = param_1[3] + param_1[0x14];
  if (param_1[3] + param_1[0x14] <= param_1[1]) {
    return 0xffffffff;
  }
  return (uint)*(byte *)param_1[1];
}



/* --- FUN_00027dd8 @ 00027dd8 --- */

uint FUN_00027dd8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  if (uVar1 < *(uint *)(param_1 + 0x50)) {
    uVar1 = *(uint *)(param_1 + 0x50);
  }
  return uVar1;
}



/* --- FUN_00027df8 @ 00027df8 --- */

uint FUN_00027df8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00027dd8(param_1);
  uVar2 = 0xffffffff;
  uVar3 = param_3 & 3;
  if ((param_3 & 4) == 0) {
    if (uVar3 == 1) {
      uVar2 = param_2 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc));
    }
    else {
      uVar2 = param_2;
      if (uVar3 == 2) {
        uVar2 = param_2 + uVar1;
      }
    }
    if ((int)uVar2 < 0) {
      return 0xffffffff;
    }
    if (uVar1 < uVar2) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 0xc) + uVar2;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 0xc) + uVar1;
    param_2 = uVar2;
  }
  if ((param_3 & 8) != 0) {
    return uVar2;
  }
  if (uVar3 == 1) {
    param_2 = param_2 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
  }
  else if (uVar3 == 2) {
    param_2 = param_2 + uVar1;
  }
  if ((-1 < (int)param_2) && (param_2 <= uVar1)) {
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + param_2;
    return param_2;
  }
  return 0xffffffff;
}



/* --- FUN_00027eb8 @ 00027eb8 --- */

undefined4 FUN_00027eb8(byte *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((*param_1 & 8) != 0) && (param_2 != -1)) {
    return 0xffffffff;
  }
  uVar1 = FUN_0000b0d0(param_1,param_2);
  return uVar1;
}



/* --- FUN_00027ee8 @ 00027ee8 --- */

void FUN_00027ee8(byte *param_1)

{
  if ((*(int *)(param_1 + 0x1c) != 0) && ((*param_1 & 1) == 0)) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x1c));
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_0000ac30(param_1);
  return;
}



/* --- FUN_00027f20 @ 00027f20 --- */

int FUN_00027f20(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00027f48 @ 00027f48 --- */

int FUN_00027f48(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00027f70 @ 00027f70 --- */

short FUN_00027f70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1a = 0;
  local_18 = 0xffffffff;
  *(undefined2 *)(param_1 + 2) = 0x6f00;
  iVar1 = FUN_00019ce8(param_1,100000,2,DAT_0002bc58,DAT_0002bc5c,&local_18,400,400);
  if (iVar1 != 0) {
    local_14 = param_2;
    local_10 = param_3;
    local_c = param_4;
    local_8 = 0;
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 4))
                      (iVar1,3,FUN_00029518,&local_14,FUN_0001afc0,&local_1a,DAT_0002bc60,
                       DAT_0002bc64);
    if (iVar2 == 0) {
      if (local_1a == 0) {
        DAT_0002bc38 = 0xf;
      }
    }
    else {
      DAT_0002bc38 = 0xe;
      (**(code **)(*(int *)(iVar1 + 4) + 8))(iVar1,&DAT_0002bc3c);
    }
    (**(code **)(*(int *)(iVar1 + 4) + 0x10))(iVar1);
  }
  FUN_0000b748(local_18);
  *(undefined2 *)(param_1 + 2) = 0;
  return local_1a;
}



/* --- FUN_00028070 @ 00028070 --- */

int FUN_00028070(undefined4 param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short local_18;
  short local_14 [8];
  
  if (param_2 == (short *)0x0) {
    param_2 = local_14;
    FUN_00004bb0(param_2,0x10);
    local_14[0] = 2;
  }
  else if (*param_2 != 2) {
    DAT_0002a0a0 = 0x60;
    return -1;
  }
  if (DAT_00038420 == 0) {
    iVar2 = FUN_000108c0();
    local_18 = (short)(iVar2 % 0x1a8);
    DAT_00038420 = local_18 + 600;
  }
  iVar2 = -1;
  DAT_0002a0a0 = 0x62;
  iVar3 = 0;
  while( true ) {
    sVar1 = DAT_00038420;
    if (DAT_0002a0a0 != 0x62) {
      return iVar2;
    }
    DAT_00038420 = DAT_00038420 + 1;
    param_2[1] = CONCAT11((char)sVar1,(char)((ushort)sVar1 >> 8));
    if (0x3ff < DAT_00038420) {
      DAT_00038420 = 600;
    }
    iVar2 = FUN_00004c80(param_1,param_2,0x10);
    iVar3 = iVar3 + 1;
    if (0x1a7 < iVar3) break;
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  return iVar2;
}



/* --- FUN_00028168 @ 00028168 --- */

void FUN_00028168(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  param_1[1] = &PTR_FUN_0002bc68;
  param_1[4] = param_2;
  param_1[3] = param_2;
  param_1[5] = param_3;
  return;
}



/* --- FUN_00028198 @ 00028198 --- */

void FUN_00028198(void)

{
  return;
}



/* --- FUN_000281a8 @ 000281a8 --- */

undefined4 FUN_000281a8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14) + -4;
  *(int *)(param_1 + 0x14) = iVar2;
  if (-1 < iVar2) {
    uVar1 = **(undefined4 **)(param_1 + 0xc);
    *param_2 = CONCAT31(CONCAT21(CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8)),
                                 (char)((uint)uVar1 >> 0x10)),(char)((uint)uVar1 >> 0x18));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    return 1;
  }
  return 0;
}



/* --- FUN_000281e8 @ 000281e8 --- */

undefined4 FUN_000281e8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14) + -4;
  *(int *)(param_1 + 0x14) = iVar2;
  if (-1 < iVar2) {
    uVar1 = *param_2;
    **(undefined4 **)(param_1 + 0xc) =
         CONCAT31(CONCAT21(CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8)),
                           (char)((uint)uVar1 >> 0x10)),(char)((uint)uVar1 >> 0x18));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    return 1;
  }
  return 0;
}



/* --- FUN_00028228 @ 00028228 --- */

bool FUN_00028228(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - param_3;
  *(int *)(param_1 + 0x14) = iVar1;
  if (-1 < iVar1) {
    FUN_00007dc0(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  }
  return -1 < iVar1;
}



/* --- FUN_00028268 @ 00028268 --- */

bool FUN_00028268(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - param_3;
  *(int *)(param_1 + 0x14) = iVar1;
  if (-1 < iVar1) {
    FUN_00007dc0(param_2,*(undefined4 *)(param_1 + 0xc),param_3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  }
  return -1 < iVar1;
}



/* --- FUN_000282a8 @ 000282a8 --- */

int FUN_000282a8(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
}



/* --- FUN_000282c8 @ 000282c8 --- */

undefined4 FUN_000282c8(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 + *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14);
  if (param_2 <= iVar1) {
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x14) = iVar1 - param_2;
    return 1;
  }
  return 0;
}



/* --- FUN_00028308 @ 00028308 --- */

undefined4 FUN_00028308(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 <= *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - param_2;
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  return uVar1;
}



/* --- FUN_00028328 @ 00028328 --- */

undefined4 FUN_00028328(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001b130(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0001b210(param_1,param_2 + 4,param_2 + 8,400);
  }
  return uVar2;
}



/* --- FUN_00028368 @ 00028368 --- */

void FUN_00028368(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b150(param_1,param_2,8);
  return;
}



/* --- FUN_00028388 @ 00028388 --- */

undefined4 FUN_00028388(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00028328(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0001b130(param_1,param_2 + 0xc), iVar1 != 0)) {
    if (*(int *)(param_2 + 0xc) == 0) {
      uVar2 = (**(code **)(param_2 + 0x14))(param_1,*(undefined4 *)(param_2 + 0x10));
      return uVar2;
    }
    if (*(int *)(param_2 + 0xc) != 2) {
      return 1;
    }
    iVar1 = FUN_0001aef0(param_1,param_2 + 0x10);
    if (iVar1 != 0) {
      uVar2 = FUN_0001aef0(param_1,param_2 + 0x14);
      return uVar2;
    }
  }
  return 0;
}



/* --- FUN_00028418 @ 00028418 --- */

undefined4 FUN_00028418(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001b130(param_1,param_2);
  if (iVar1 != 0) {
    if (*param_2 == 0) {
      iVar1 = FUN_0001aef0(param_1,param_2 + 1);
      if (iVar1 != 0) {
        uVar2 = FUN_0001aef0(param_1,param_2 + 2);
        return uVar2;
      }
    }
    else if (*param_2 == 1) {
      uVar2 = FUN_0001b130(param_1,param_2 + 1);
      return uVar2;
    }
  }
  return 0;
}



/* --- FUN_00028488 @ 00028488 --- */

undefined4 FUN_00028488(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_0001b130(param_1,param_2 + 4), iVar1 != 0)) &&
     (*(int *)(param_2 + 4) == 1)) {
    uVar2 = FUN_0001b310(param_1,param_2 + 8,param_2 + 0xc,&DAT_0002bc88,0);
    return uVar2;
  }
  return 0;
}



/* --- FUN_000284e8 @ 000284e8 --- */

undefined4 FUN_000284e8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 2;
  if ((((*param_1 == 0) && (iVar1 = FUN_0001aef0(param_1,param_2), iVar1 != 0)) &&
      (iVar1 = FUN_0001b130(param_1,param_2 + 4), iVar1 != 0)) &&
     ((iVar1 = FUN_0001aef0(param_1,param_2 + 8), iVar1 != 0 &&
      (iVar1 = FUN_0001aef0(param_1,param_2 + 0xc), iVar1 != 0)))) {
    uVar2 = FUN_0001aef0(param_1,param_2 + 0x10);
    return uVar2;
  }
  return 0;
}



/* --- FUN_00028568 @ 00028568 --- */

void FUN_00028568(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    *param_2 = 0;
    return;
  case 1:
    *param_2 = 8;
    return;
  case 2:
    *param_2 = 9;
    return;
  case 3:
    *param_2 = 10;
    return;
  case 4:
    *param_2 = 0xb;
    return;
  case 5:
    *param_2 = 0xc;
    return;
  default:
    *param_2 = 0x10;
    param_2[1] = 0;
    param_2[2] = param_1;
    return;
  }
}



/* --- FUN_00028628 @ 00028628 --- */

void FUN_00028628(int param_1,undefined4 *param_2)

{
  if (param_1 == 1) {
    *param_2 = 7;
    return;
  }
  if ((param_1 != 0) && (param_1 != 6)) {
    *param_2 = 0x10;
    param_2[1] = 1;
    param_2[2] = param_1;
    return;
  }
  *param_2 = 6;
  return;
}



/* --- FUN_00028678 @ 00028678 --- */

void FUN_00028678(int param_1,uint *param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      *param_2 = 0;
      return;
    }
    FUN_00028568(*(undefined4 *)(param_1 + 0x18),param_2);
  }
  else if (*(int *)(param_1 + 8) == 1) {
    FUN_00028628(*(undefined4 *)(param_1 + 0xc),param_2);
  }
  else {
    *param_2 = 0x10;
    param_2[1] = *(uint *)(param_1 + 8);
  }
  uVar1 = *param_2;
  if (uVar1 == 7) {
    param_2[1] = *(uint *)(param_1 + 0x10);
  }
  else {
    if (uVar1 < 8) {
      if (uVar1 != 6) {
        return;
      }
      param_2[1] = *(uint *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x14);
    }
    else {
      if (uVar1 != 9) {
        return;
      }
      param_2[1] = *(uint *)(param_1 + 0x1c);
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    param_2[2] = uVar1;
  }
  return;
}



/* --- FUN_00028730 @ 00028730 --- */

bool FUN_00028730(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_1[4] - param_1[6]) + -4;
  uVar1 = (ushort)(((uint)(param_2 == 1) << 0x1f) >> 0x10) | (ushort)((uint)iVar2 >> 0x10);
  *(uint *)param_1[6] =
       CONCAT31(CONCAT21((short)CONCAT31(CONCAT21(uVar1,(char)iVar2),(char)((uint)iVar2 >> 8)),
                         (char)((uint)iVar2 >> 0x10)),(char)(uVar1 >> 8));
  iVar3 = param_1[4] - param_1[3];
  iVar2 = (*(code *)param_1[2])(*param_1,param_1[3],iVar3);
  if (iVar2 == iVar3) {
    param_1[6] = param_1[3];
    param_1[4] = param_1[3] + 4;
  }
  return iVar2 == iVar3;
}



/* --- FUN_000287a0 @ 000287a0 --- */

bool FUN_000287a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[10] + (param_1[0xc] & 3);
  iVar1 = (*(code *)param_1[8])(*param_1,iVar2,param_1[9] - (param_1[0xc] & 3));
  if (iVar1 != -1) {
    param_1[0xb] = iVar2;
    param_1[0xc] = iVar2 + iVar1;
  }
  return iVar1 != -1;
}



/* --- FUN_000287f0 @ 000287f0 --- */

undefined4 FUN_000287f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  do {
    while( true ) {
      if (param_3 < 1) {
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
      if (iVar2 == 0) break;
      iVar1 = param_3;
      if (iVar2 < param_3) {
        iVar1 = iVar2;
      }
      FUN_00007dc0(*(undefined4 *)(param_1 + 0x2c),param_2,iVar1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar1;
      param_2 = param_2 + iVar1;
      param_3 = param_3 - iVar1;
    }
    iVar2 = FUN_000287a0(param_1);
  } while (iVar2 != 0);
  return 0;
}



/* --- FUN_00028860 @ 00028860 --- */

bool FUN_00028860(int param_1)

{
  int iVar1;
  undefined1 local_8 [4];
  
  iVar1 = FUN_000287f0(param_1,local_8,4);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x38) = (uint)(byte)(local_8[0] >> 7);
    *(uint *)(param_1 + 0x34) =
         CONCAT31(CONCAT21(CONCAT11(local_8[0],local_8[1]),local_8[2]),local_8[3]) & 0x7fffffff;
  }
  return iVar1 != 0;
}



/* --- FUN_000288c0 @ 000288c0 --- */

undefined4 FUN_000288c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    while( true ) {
      if (param_2 < 1) {
        return 1;
      }
      iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
      if (iVar1 == 0) break;
      iVar2 = param_2;
      if (iVar1 < param_2) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2;
      param_2 = param_2 - iVar2;
    }
    iVar1 = FUN_000287a0(param_1);
  } while (iVar1 != 0);
  return 0;
}



/* --- FUN_00028920 @ 00028920 --- */

uint FUN_00028920(uint param_1)

{
  if (param_1 < 100) {
    param_1 = 4000;
  }
  return param_1 + 3 & 0xfffffffc;
}



/* --- FUN_00028960 @ 00028960 --- */

void FUN_00028960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_00004690(0x44);
  FUN_0000b860();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00028920(param_2);
    puVar1[0xf] = iVar2;
    iVar3 = FUN_00028920(param_3);
    puVar1[0x10] = iVar3;
    iVar4 = FUN_00004690(iVar3 + 4 + iVar2);
    puVar1[1] = iVar4;
    if (iVar4 != 0) {
      puVar1[3] = puVar1[1];
      if ((puVar1[1] & 3) != 0) {
        do {
          puVar1[3] = puVar1[3] + 1;
        } while ((*(byte *)(puVar1 + 3) & 3) != 0);
      }
      puVar1[10] = puVar1[3] + iVar2;
      *(undefined ***)(param_1 + 4) = &PTR_FUN_0002bca0;
      *(undefined4 **)(param_1 + 0xc) = puVar1;
      *puVar1 = param_4;
      puVar1[8] = param_5;
      puVar1[2] = param_6;
      puVar1[5] = puVar1[3];
      puVar1[4] = puVar1[3];
      puVar1[6] = puVar1[3];
      puVar1[4] = puVar1[4] + 4;
      puVar1[5] = puVar1[5] + iVar2;
      puVar1[7] = 0;
      puVar1[9] = iVar3;
      puVar1[0xc] = puVar1[10];
      iVar2 = puVar1[0xc];
      puVar1[0xc] = iVar3 + iVar2;
      puVar1[0xb] = iVar3 + iVar2;
      puVar1[0xd] = 0;
      puVar1[0xe] = 1;
      return;
    }
  }
  uVar5 = FUN_0000c030(DAT_0002b050,10,1,s_out_of_memory_00028939);
  FUN_00012f18(&DAT_0002b110,s_xdrrec_create___s_00028947,uVar5);
  return;
}



/* --- FUN_00028a70 @ 00028a70 --- */

undefined4 FUN_00028a70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [4];
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(iVar2 + 0x34) < 4) ||
     ((uint)(*(int *)(iVar2 + 0x30) - (int)*(undefined4 **)(iVar2 + 0x2c)) < 4)) {
    iVar2 = FUN_00028b50(param_1,local_8,4);
    if (iVar2 == 0) {
      return 0;
    }
    *param_2 = CONCAT31(CONCAT21(CONCAT11(local_8[0],local_8[1]),local_8[2]),local_8[3]);
  }
  else {
    uVar1 = **(undefined4 **)(iVar2 + 0x2c);
    *param_2 = CONCAT31(CONCAT21(CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8)),
                                 (char)((uint)uVar1 >> 0x10)),(char)((uint)uVar1 >> 0x18));
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -4;
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 4;
  }
  return 1;
}



/* --- FUN_00028af0 @ 00028af0 --- */

undefined4 FUN_00028af0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  puVar4 = *(undefined4 **)(iVar1 + 0x10);
  *(undefined4 **)(iVar1 + 0x10) = puVar4 + 1;
  if (*(undefined4 **)(iVar1 + 0x14) < puVar4 + 1) {
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -4;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    iVar3 = FUN_00028730(iVar1,0);
    if (iVar3 == 0) {
      return 0;
    }
    puVar4 = *(undefined4 **)(iVar1 + 0x10);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 4;
  }
  uVar2 = *param_2;
  *puVar4 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                              (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
  return 1;
}



/* --- FUN_00028b50 @ 00028b50 --- */

undefined4 FUN_00028b50(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    while( true ) {
      if (param_3 == 0) {
        return 1;
      }
      uVar2 = *(uint *)(iVar1 + 0x34);
      if (uVar2 == 0) break;
      uVar4 = param_3;
      if (uVar2 < param_3) {
        uVar4 = uVar2;
      }
      iVar3 = FUN_000287f0(iVar1,param_2,uVar4);
      if (iVar3 == 0) {
        return 0;
      }
      param_2 = param_2 + uVar4;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) - uVar4;
      param_3 = param_3 - uVar4;
    }
    if (*(int *)(iVar1 + 0x38) != 0) {
      return 0;
    }
    iVar3 = FUN_00028860(iVar1);
  } while (iVar3 != 0);
  return 0;
}



/* --- FUN_00028bd0 @ 00028bd0 --- */

undefined4 FUN_00028bd0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    do {
      if (param_3 == 0) {
        return 1;
      }
      uVar4 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10);
      uVar2 = param_3;
      if (uVar4 < param_3) {
        uVar2 = uVar4;
      }
      FUN_00007dc0(param_2,*(undefined4 *)(iVar1 + 0x10),uVar2);
      iVar3 = uVar2 + *(int *)(iVar1 + 0x10);
      *(int *)(iVar1 + 0x10) = iVar3;
      param_2 = param_2 + uVar2;
      param_3 = param_3 - uVar2;
    } while (*(int *)(iVar1 + 0x14) != iVar3);
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    iVar3 = FUN_00028730(iVar1,0);
  } while (iVar3 != 0);
  return 0;
}



/* --- FUN_00028c40 @ 00028c40 --- */

int FUN_00028c40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)param_1[3];
  iVar2 = FUN_0001c110(*puVar1,0,1);
  if (iVar2 != -1) {
    if (*param_1 == 0) {
      iVar2 = iVar2 + (puVar1[4] - puVar1[3]);
    }
    else if (*param_1 == 1) {
      iVar2 = iVar2 - (puVar1[0xc] - puVar1[0xb]);
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}



/* --- FUN_00028ca0 @ 00028ca0 --- */

undefined4 FUN_00028ca0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[3];
  iVar2 = FUN_00028c40(param_1);
  param_2 = iVar2 - param_2;
  if (iVar2 != -1) {
    if (*param_1 == 0) {
      uVar3 = *(int *)(iVar1 + 0x10) - param_2;
      if ((*(uint *)(iVar1 + 0x18) < uVar3) && (uVar3 < *(uint *)(iVar1 + 0x14))) {
        *(uint *)(iVar1 + 0x10) = uVar3;
        return 1;
      }
    }
    else if ((((*param_1 == 1) &&
              (uVar3 = *(int *)(iVar1 + 0x2c) - param_2, param_2 < *(int *)(iVar1 + 0x34))) &&
             (uVar3 <= *(uint *)(iVar1 + 0x30))) && (*(uint *)(iVar1 + 0x28) <= uVar3)) {
      *(uint *)(iVar1 + 0x2c) = uVar3;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) - param_2;
      return 1;
    }
  }
  return 0;
}



/* --- FUN_00028d30 @ 00028d30 --- */

undefined4 FUN_00028d30(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[3];
  uVar3 = 0;
  if (*param_1 == 0) {
    uVar2 = param_2 + *(int *)(iVar1 + 0x10);
    if (uVar2 <= *(uint *)(iVar1 + 0x14)) {
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      *(uint *)(iVar1 + 0x10) = uVar2;
    }
  }
  else if (((*param_1 == 1) && (param_2 <= *(int *)(iVar1 + 0x34))) &&
          ((uint)(param_2 + *(int *)(iVar1 + 0x2c)) <= *(uint *)(iVar1 + 0x30))) {
    uVar3 = *(undefined4 *)(iVar1 + 0x2c);
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) - param_2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + param_2;
  }
  return uVar3;
}



/* --- FUN_00028da0 @ 00028da0 --- */

void FUN_00028da0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00005058(*(undefined4 *)(iVar1 + 4));
  FUN_00005058(iVar1);
  return;
}



/* --- FUN_00028dc0 @ 00028dc0 --- */

undefined4 FUN_00028dc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if ((*(int *)(iVar1 + 0x34) < 1) && (*(int *)(iVar1 + 0x38) != 0)) {
      *(undefined4 *)(iVar1 + 0x38) = 0;
      return 1;
    }
    iVar2 = FUN_000288c0(iVar1,*(undefined4 *)(iVar1 + 0x34));
  } while ((iVar2 != 0) &&
          ((*(undefined4 *)(iVar1 + 0x34) = 0, *(int *)(iVar1 + 0x38) != 0 ||
           (iVar2 = FUN_00028860(iVar1), iVar2 != 0))));
  return 0;
}



/* --- FUN_00028e20 @ 00028e20 --- */

undefined4 FUN_00028e20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if ((*(int *)(iVar1 + 0x34) < 1) && (*(int *)(iVar1 + 0x38) != 0)) {
      if (*(int *)(iVar1 + 0x30) == *(int *)(iVar1 + 0x2c)) {
        return 1;
      }
      return 0;
    }
    iVar2 = FUN_000288c0(iVar1,*(undefined4 *)(iVar1 + 0x34));
    if (iVar2 == 0) {
      return 1;
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
  } while ((*(int *)(iVar1 + 0x38) != 0) || (iVar2 = FUN_00028860(iVar1), iVar2 != 0));
  return 1;
}



/* --- FUN_00028e90 @ 00028e90 --- */

undefined4 FUN_00028e90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((param_2 == 0) && (*(int *)(iVar1 + 0x1c) == 0)) &&
     (*(int *)(iVar1 + 0x10) + 4U < *(uint *)(iVar1 + 0x14))) {
    iVar3 = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18)) + -4;
    **(uint **)(iVar1 + 0x18) =
         CONCAT31(CONCAT21(CONCAT11((char)iVar3,(char)((uint)iVar3 >> 8)),
                           (char)((uint)iVar3 >> 0x10)),(char)((uint)iVar3 >> 0x18)) | 0x80;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 4;
    return 1;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  uVar2 = FUN_00028730(iVar1,1);
  return uVar2;
}



/* --- FUN_00028f00 @ 00028f00 --- */

undefined4 * FUN_00028f00(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_1c [4];
  int local_18;
  
  puVar1 = DAT_00038428;
  if ((DAT_00038428 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_000295a0(1,0x40), puVar1 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    DAT_00038428 = puVar1;
    puVar1 = DAT_00038428;
    if (DAT_00038428[0xf] == 0) {
      DAT_00038428[3] = DAT_0002bc48;
      puVar1[4] = DAT_0002bc4c;
      puVar1[5] = DAT_0002bc50;
      *puVar1 = puVar1[3];
      puVar1[1] = puVar1[4];
      puVar1[2] = puVar1[5];
      puVar1[8] = &PTR_FUN_0002bcc0;
      FUN_00028168(local_1c,puVar1 + 10,0x14,0);
      FUN_00028328(local_1c,puVar1);
      FUN_00028328(local_1c,puVar1 + 3);
      uVar2 = (**(code **)(local_18 + 0x10))(local_1c);
      puVar1[0xf] = uVar2;
      if (*(int *)(local_18 + 0x1c) != 0) {
        (**(code **)(local_18 + 0x1c))(local_1c);
      }
    }
  }
  return puVar1;
}



/* --- FUN_00028fc0 @ 00028fc0 --- */

undefined4 FUN_00028fc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (DAT_00038428 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_2 + 4) + 0xc))
                      (param_2,DAT_00038428 + 0x28,*(undefined4 *)(DAT_00038428 + 0x3c));
  }
  return uVar1;
}



/* --- FUN_00029000 @ 00029000 --- */

void FUN_00029000(void)

{
  return;
}



/* --- FUN_00029010 @ 00029010 --- */

undefined4 FUN_00029010(void)

{
  return 1;
}



/* --- FUN_00029020 @ 00029020 --- */

undefined4 FUN_00029020(void)

{
  return 0;
}



/* --- FUN_00029030 @ 00029030 --- */

void FUN_00029030(void)

{
  return;
}



/* --- FUN_00029038 @ 00029038 --- */

int FUN_00029038(void)

{
  if (DAT_0003842c == 0) {
    DAT_0003842c = FUN_00010848();
  }
  return DAT_0003842c;
}



/* --- FUN_00029088 @ 00029088 --- */

undefined4 FUN_00029088(int *param_1,int *param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  FUN_0000b860();
  if (iVar1 == 0) {
    if (*param_1 == 1) {
      iVar1 = FUN_00004690(param_3);
      *param_2 = iVar1;
      if (iVar1 == 0) {
        uVar2 = FUN_0000c030(DAT_0002b050,10,1,s_out_of_memory_00029058);
        FUN_00012f18(&DAT_0002b110,s_xdr_reference___s_00029066,uVar2);
        return 0;
      }
      FUN_00004bb0(iVar1,param_3);
    }
    else if (*param_1 == 2) {
      return 1;
    }
  }
  uVar2 = (*param_4)(param_1,iVar1,0xffffffff);
  if (*param_1 == 2) {
    FUN_00005058(iVar1);
    *param_2 = 0;
  }
  return uVar2;
}



/* --- FUN_00029138 @ 00029138 --- */

undefined4 FUN_00029138(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  
  local_8 = (uint)(*param_2 != 0);
  iVar1 = FUN_0001b0b0(param_1,&local_8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (local_8 == 0) {
    *param_2 = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00029088(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



/* --- FUN_000291b0 @ 000291b0 --- */

uint FUN_000291b0(uint *param_1)

{
  if (param_1 == (uint *)0x0) {
    DAT_0002a0a0 = 0x16;
    return 0xffffffff;
  }
  if ((*param_1 & 0xffff0000) == 0xfbad0000) {
    return *param_1 >> 5 & 1;
  }
  DAT_0002a0a0 = 0x16;
  return 0xffffffff;
}



/* --- FUN_00029218 @ 00029218 --- */

char FUN_00029218(int param_1)

{
  char cVar1;
  
  if (param_1 - 0x30U < 10) {
    cVar1 = (char)param_1 + -0x30;
  }
  else {
    cVar1 = (char)param_1 + -0x37;
  }
  return cVar1;
}



/* --- FUN_00029248 @ 00029248 --- */

/* WARNING: Removing unreachable block (ram,0x00029308) */
/* WARNING: Removing unreachable block (ram,0x000292b7) */

uint FUN_00029248(byte *param_1,byte *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    do {
      pbVar4 = param_1;
      bVar2 = *pbVar4;
      uVar3 = (uint)bVar2;
      param_1 = pbVar4 + 1;
      if (bVar2 == 0) {
        return uVar5;
      }
      if (param_3 <= uVar5) {
        return uVar5;
      }
    } while (((bVar2 == 0x2e) || (bVar2 == 0x2b)) || (bVar2 == 0x2f));
    if ((char)bVar2 < '\0') {
      return 0;
    }
    if ((PTR_DAT_0002b058[uVar3 * 2] & 2) != 0) {
      uVar3 = (uint)(byte)PTR_DAT_0002b060[uVar3];
    }
    if ((PTR_DAT_0002b058[uVar3 * 2] & 0x28) == 0) break;
    cVar1 = FUN_00029218(uVar3);
    if (*param_1 == 0) {
      return 0;
    }
    if ((PTR_DAT_0002b058[(uint)(byte)PTR_DAT_0002b060[*param_1] * 2] & 0x28) == 0) {
      return 0;
    }
    bVar2 = FUN_00029218((uint)(byte)PTR_DAT_0002b060[*param_1]);
    *param_2 = cVar1 << 4 | bVar2;
    param_2 = param_2 + 1;
    uVar5 = uVar5 + 1;
    param_1 = pbVar4 + 2;
  }
  return 0;
}



/* --- FUN_00029368 @ 00029368 --- */

char * FUN_00029368(uint param_1,byte *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char *local_8;
  
  if (param_3 == (char *)0x0) {
    local_8 = &DAT_00038430;
  }
  else {
    local_8 = param_3;
  }
  if (0xff < (int)param_1) {
    param_1 = 0xff;
  }
  uVar5 = 0;
  pcVar1 = local_8;
  if (0 < (int)param_1) {
    if ((param_1 & 1) != 0) {
      bVar3 = *param_2 >> 4;
      if (bVar3 < 10) {
        cVar4 = bVar3 + 0x30;
      }
      else {
        cVar4 = bVar3 + 0x37;
      }
      *local_8 = cVar4;
      bVar3 = *param_2 & 0xf;
      param_2 = param_2 + 1;
      pcVar1 = local_8 + 2;
      if (bVar3 < 10) {
        cVar4 = bVar3 + 0x30;
      }
      else {
        cVar4 = bVar3 + 0x37;
      }
      local_8[1] = cVar4;
      if (1 < (int)param_1) {
        *pcVar1 = '.';
        pcVar1 = local_8 + 3;
      }
      uVar5 = 1;
      if ((int)param_1 < 2) goto LAB_000294e0;
    }
    do {
      bVar3 = *param_2 >> 4;
      if (bVar3 < 10) {
        cVar4 = bVar3 + 0x30;
      }
      else {
        cVar4 = bVar3 + 0x37;
      }
      *pcVar1 = cVar4;
      bVar3 = *param_2 & 0xf;
      pcVar2 = pcVar1 + 2;
      if (bVar3 < 10) {
        cVar4 = bVar3 + 0x30;
      }
      else {
        cVar4 = bVar3 + 0x37;
      }
      pcVar1[1] = cVar4;
      if (((uVar5 & 1) == 0) && ((int)(uVar5 + 1) < (int)param_1)) {
        *pcVar2 = '.';
        pcVar2 = pcVar1 + 3;
      }
      bVar3 = param_2[1] >> 4;
      if (bVar3 < 10) {
        cVar4 = bVar3 + 0x30;
      }
      else {
        cVar4 = bVar3 + 0x37;
      }
      *pcVar2 = cVar4;
      bVar3 = param_2[1] & 0xf;
      param_2 = param_2 + 2;
      pcVar1 = pcVar2 + 2;
      if (bVar3 < 10) {
        cVar4 = bVar3 + 0x30;
      }
      else {
        cVar4 = bVar3 + 0x37;
      }
      pcVar2[1] = cVar4;
      if (((uVar5 + 1 & 1) == 0) && ((int)(uVar5 + 2) < (int)param_1)) {
        *pcVar1 = '.';
        pcVar1 = pcVar2 + 3;
      }
      uVar5 = uVar5 + 2;
    } while ((int)uVar5 < (int)param_1);
  }
LAB_000294e0:
  *pcVar1 = '\0';
  return local_8;
}



/* --- FUN_000294f0 @ 000294f0 --- */

int FUN_000294f0(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_00029518 @ 00029518 --- */

undefined4 FUN_00029518(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001aef0(param_1,param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_0001aef0(param_1,param_2 + 4), iVar1 != 0)) &&
     (iVar1 = FUN_0001aef0(param_1,param_2 + 8), iVar1 != 0)) {
    uVar2 = FUN_0001aef0(param_1,param_2 + 0xc);
    return uVar2;
  }
  return 0;
}



/* --- FUN_00029578 @ 00029578 --- */

int FUN_00029578(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    DAT_0002a0a0 = -iVar2;
    iVar2 = -1;
  }
  return iVar2;
}



/* --- FUN_000295a0 @ 000295a0 --- */

int FUN_000295a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00004690(param_2 * param_1);
  if (iVar1 != 0) {
    FUN_0000b6b0(iVar1,0,param_2 * param_1);
  }
  return iVar1;
}



/* --- FUN_000295d0 @ 000295d0 --- */

bool FUN_000295d0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_28 [36];
  
  uVar1 = DAT_0002a0a0;
  iVar2 = FUN_00029678(param_1,local_28);
  DAT_0002a0a0 = uVar1;
  return iVar2 == 0;
}



/* --- FUN_00029608 @ 00029608 --- */

undefined4 FUN_00029608(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((param_2 == (uint *)0x0) || ((*param_2 & 0xffff0000) != 0xfbad0000)) {
    DAT_0002a0a0 = 0x16;
  }
  else {
    iVar2 = (**(code **)(param_2[0xe] + 8))(param_2,param_1,~uVar3 - 1);
    if (iVar2 == ~uVar3 - 1) {
      return 1;
    }
  }
  return 0xffffffff;
}



/* --- FUN_00029678 @ 00029678 --- */

void FUN_00029678(undefined4 param_1,undefined4 param_2)

{
  FUN_000146e0(param_1,0x5401,param_2);
  return;
}



