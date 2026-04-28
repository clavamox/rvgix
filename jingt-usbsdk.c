
undefined4 * __cdecl FUN_10001220(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  puVar5 = FUN_10023f40(param_2,param_3,*puVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar5 + 4);
  puVar5[4] = 0;
  puVar5[5] = 0xf;
  *(undefined1 *)puVar5 = 0;
  return param_1;
}










undefined4 * __cdecl FUN_10001270(undefined4 *param_1,void *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = param_3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  puVar6 = FUN_10023f40(param_2,param_3,(int)pcVar5 - (int)(param_3 + 1));
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *param_1 = *puVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar6 + 4);
  puVar6[4] = 0;
  puVar6[5] = 0xf;
  *(undefined1 *)puVar6 = 0;
  return param_1;
}







undefined1 * __cdecl FUN_100012d0(undefined1 *param_1,undefined4 *param_2,char *param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100299d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  pcVar3 = param_3;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_100256a0(param_1,(uint)(pcVar3 + (param_2[4] - (int)(param_3 + 1))));
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_10023f40(param_1,param_2,*puVar1);
  pcVar3 = param_3;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_10023f40(param_1,param_3,(int)pcVar3 - (int)(param_3 + 1));
  ExceptionList = local_10;
  return param_1;
}







void __thiscall FUN_10001390(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_c;
  
  if (*(void **)((int)this + 0x5c) != *(void **)((int)this + 0x60)) {
    if (param_4 != *(int *)((int)this + 0x68)) {
      FUN_10001780(((param_4 - *(int *)((int)this + 0x68)) + 0x168) % 0x168,
                   *(void **)((int)this + 0x5c),1,(int *)((int)this + 0x54),
                   (int *)((int)this + 0x58));
      *(int *)((int)this + 0x68) = param_4;
    }
    param_4 = 0;
    if (0 < param_3) {
      do {
        iVar3 = 0;
        if (0 < param_2) {
          iVar2 = param_4 * param_2;
          local_c = iVar2;
          do {
            iVar1 = *(int *)((int)this + 0x5c);
            if (*(char *)(iVar2 + iVar1 + iVar3) == -1) {
              uVar6 = 0;
              uVar5 = 0;
              if (0 < param_4) {
                iVar4 = (param_4 + -1) * param_2;
                bVar7 = *(char *)(iVar4 + iVar1 + iVar3) != -1;
                if (bVar7) {
                  uVar6 = (uint)*(byte *)(iVar4 + iVar3 + param_1);
                }
                uVar5 = (uint)bVar7;
                if ((0 < iVar3) && (*(char *)(iVar4 + iVar1 + -1 + iVar3) != -1)) {
                  uVar6 = uVar6 + *(byte *)(iVar4 + iVar3 + -1 + param_1);
                  uVar5 = uVar5 + 1;
                }
                if ((iVar3 < param_2 + -1) && (*(char *)(iVar4 + iVar1 + 1 + iVar3) != -1)) {
                  uVar6 = uVar6 + *(byte *)(iVar4 + iVar3 + 1 + param_1);
                  uVar5 = uVar5 + 1;
                }
              }
              if ((0 < iVar3) && (*(char *)(local_c + -1 + iVar1) != -1)) {
                uVar6 = uVar6 + *(byte *)(iVar2 + iVar3 + -1 + param_1);
                uVar5 = uVar5 + 1;
              }
              if ((iVar3 < param_2 + -1) && (*(char *)(local_c + 1 + iVar1) != -1)) {
                uVar6 = uVar6 + *(byte *)(iVar2 + iVar3 + 1 + param_1);
                uVar5 = uVar5 + 1;
              }
              if (param_4 < param_3 + -1) {
                iVar4 = (param_4 + 1) * param_2;
                if (*(char *)(iVar4 + iVar1 + iVar3) != -1) {
                  uVar6 = uVar6 + *(byte *)(iVar4 + iVar3 + param_1);
                  uVar5 = uVar5 + 1;
                }
                if ((0 < iVar3) && (*(char *)(iVar4 + iVar1 + -1 + iVar3) != -1)) {
                  uVar6 = uVar6 + *(byte *)(iVar4 + iVar3 + -1 + param_1);
                  uVar5 = uVar5 + 1;
                }
                if ((iVar3 < param_2 + -1) && (*(char *)(iVar4 + iVar1 + 1 + iVar3) != -1)) {
                  uVar6 = uVar6 + *(byte *)(iVar4 + iVar3 + 1 + param_1);
                  uVar5 = uVar5 + 1;
                }
              }
              if (uVar5 != 0) {
                *(char *)(iVar2 + iVar3 + param_1) = (char)(uVar6 / uVar5);
              }
            }
            local_c = local_c + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_2);
        }
        param_4 = param_4 + 1;
      } while (param_4 < param_3);
    }
  }
  return;
}








void __thiscall FUN_10001580(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_14;
  int local_10;
  
  if (*(void **)((int)this + 0x5c) != *(void **)((int)this + 0x60)) {
    if (param_4 != *(int *)((int)this + 0x68)) {
      FUN_10001780(((param_4 - *(int *)((int)this + 0x68)) + 0x168) % 0x168,
                   *(void **)((int)this + 0x5c),1,(int *)((int)this + 0x54),
                   (int *)((int)this + 0x58));
      *(int *)((int)this + 0x68) = param_4;
    }
    local_10 = 0;
    if (0 < param_3) {
      do {
        iVar2 = 0;
        if (0 < param_2) {
          iVar5 = local_10 * param_2;
          puVar3 = (ushort *)(param_1 + 2 + iVar5 * 2);
          local_14 = iVar5;
          do {
            iVar1 = *(int *)((int)this + 0x5c);
            if (*(char *)(iVar5 + iVar1 + iVar2) == -1) {
              uVar7 = 0;
              uVar6 = 0;
              if (0 < local_10) {
                iVar4 = (local_10 + -1) * param_2;
                bVar8 = *(char *)(iVar4 + iVar1 + iVar2) != -1;
                if (bVar8) {
                  uVar7 = (uint)*(ushort *)(param_1 + (iVar4 + iVar2) * 2);
                }
                uVar6 = (uint)bVar8;
                if ((0 < iVar2) && (*(char *)(iVar4 + iVar2 + -1 + iVar1) != -1)) {
                  uVar7 = uVar7 + *(ushort *)(param_1 + -2 + (iVar4 + iVar2) * 2);
                  uVar6 = uVar6 + 1;
                }
                if ((iVar2 < param_2 + -1) && (*(char *)(iVar4 + iVar2 + 1 + iVar1) != -1)) {
                  uVar7 = uVar7 + *(ushort *)(param_1 + 2 + (iVar4 + iVar2) * 2);
                  uVar6 = uVar6 + 1;
                }
              }
              if ((0 < iVar2) && (*(char *)(local_14 + -1 + iVar1) != -1)) {
                uVar7 = uVar7 + puVar3[-2];
                uVar6 = uVar6 + 1;
              }
              if ((iVar2 < param_2 + -1) && (*(char *)(local_14 + 1 + iVar1) != -1)) {
                uVar7 = uVar7 + *puVar3;
                uVar6 = uVar6 + 1;
              }
              if (local_10 < param_3 + -1) {
                iVar4 = (local_10 + 1) * param_2;
                if (*(char *)(iVar4 + iVar1 + iVar2) != -1) {
                  uVar7 = uVar7 + *(ushort *)(param_1 + (iVar4 + iVar2) * 2);
                  uVar6 = uVar6 + 1;
                }
                if ((0 < iVar2) && (*(char *)(iVar4 + iVar2 + -1 + iVar1) != -1)) {
                  uVar7 = uVar7 + *(ushort *)(param_1 + -2 + (iVar4 + iVar2) * 2);
                  uVar6 = uVar6 + 1;
                }
                if ((iVar2 < param_2 + -1) && (*(char *)(iVar4 + iVar2 + 1 + iVar1) != -1)) {
                  uVar7 = uVar7 + *(ushort *)(param_1 + 2 + (iVar4 + iVar2) * 2);
                  uVar6 = uVar6 + 1;
                }
              }
              if (uVar6 != 0) {
                puVar3[-1] = (ushort)(uVar7 / uVar6);
              }
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar2 < param_2);
        }
        local_10 = local_10 + 1;
      } while (local_10 < param_3);
    }
  }
  return;
}








void __cdecl FUN_10001780(int param_1,void *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  byte local_e [2];
  void *local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_3;
  local_e[0] = 0;
  FUN_10007620(&local_c,*param_4 * *param_5 * param_3,local_e);
  iVar8 = *param_5;
  param_3 = 0;
  if (0 < iVar8) {
    do {
      iVar7 = *param_4;
      iVar5 = 0;
      if (0 < iVar7) {
        do {
          iVar8 = *param_5;
          if (param_1 == 0) {
LAB_10001825:
            iVar2 = param_3;
            iVar4 = iVar5;
            if ((param_1 != 0x5a) && (param_1 != 0x10e)) {
LAB_1000183e:
              iVar8 = iVar7;
            }
          }
          else if (param_1 == 0x5a) {
            iVar2 = iVar5;
            iVar4 = (iVar8 - param_3) + -1;
          }
          else {
            if (param_1 == 0xb4) {
              iVar2 = (iVar8 - param_3) + -1;
              iVar4 = (iVar7 - iVar5) + -1;
              goto LAB_1000183e;
            }
            if (param_1 != 0x10e) goto LAB_10001825;
            iVar2 = (iVar7 - iVar5) + -1;
            iVar4 = param_3;
          }
          iVar3 = 0;
          if (0 < iVar1) {
            do {
              *(undefined1 *)((int)local_c + iVar3 + (iVar8 * iVar2 + iVar4) * iVar1) =
                   *(undefined1 *)((int)param_2 + iVar3 + (iVar7 * param_3 + iVar5) * iVar1);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar1);
            iVar7 = *param_4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar7);
        iVar8 = *param_5;
      }
      param_3 = param_3 + 1;
    } while (param_3 < iVar8);
  }
  memcpy(param_2,local_c,local_8 - (int)local_c);
  if ((param_1 == 0x5a) || (param_1 == 0x10e)) {
    iVar8 = *param_4;
    *param_4 = *param_5;
    *param_5 = iVar8;
  }
  if (local_c != (void *)0x0) {
    pvVar6 = local_c;
    if ((0xfff < (uint)(local_4 - (int)local_c)) &&
       (pvVar6 = *(void **)((int)local_c + -4), 0x1f < (uint)((int)local_c + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar6);
  }
  return;
}








int __thiscall FUN_10001910(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029a08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_1001ea90(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_10007280((void *)(iVar1 + 0x10),param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10007280((void *)(iVar1 + 0x28),param_1 + 6);
  ExceptionList = local_10;
  return iVar1;
}








void __thiscall FUN_100019b0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001ea50(this);
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)*param_2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}









void __thiscall FUN_100019d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = FUN_1001ea70(this);
  *(undefined2 *)(iVar5 + 0xc) = 0;
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(iVar5 + 0x10) = *puVar1;
  *(undefined4 *)(iVar5 + 0x14) = uVar2;
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  *(undefined4 *)(iVar5 + 0x1c) = uVar4;
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  return;
}









void __thiscall FUN_10001a20(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = FUN_1001ea90(this);
  *(undefined2 *)(iVar5 + 0xc) = 0;
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(iVar5 + 0x10) = *puVar1;
  *(undefined4 *)(iVar5 + 0x14) = uVar2;
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  *(undefined4 *)(iVar5 + 0x1c) = uVar4;
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0xf;
  *(undefined1 *)(iVar5 + 0x28) = 0;
  return;
}








int __thiscall FUN_10001a80(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_1001ea30(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)*param_2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  uVar2 = FUN_1001e9f0();
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  ExceptionList = local_10;
  return iVar1;
}








int __thiscall FUN_10001b20(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029a50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_1001ea30(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)*param_2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  uVar2 = FUN_1001ea10();
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  ExceptionList = local_10;
  return iVar1;
}









void __thiscall FUN_10001bc0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001ea50(this);
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)*param_2;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  return;
}









int __thiscall FUN_10001be0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029a70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_1001eab0(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_10007280((void *)(iVar1 + 0x10),(undefined4 *)*param_2);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  ExceptionList = local_10;
  return iVar1;
}









void __thiscall FUN_10001c80(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = FUN_1001ea90(this);
  *(undefined2 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(iVar4 + 0x10) = *param_1;
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(iVar4 + 0x18) = uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  *(undefined8 *)(iVar4 + 0x20) = *(undefined8 *)(param_1 + 4);
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_1[9];
  *(undefined4 *)(iVar4 + 0x28) = param_1[6];
  *(undefined4 *)(iVar4 + 0x2c) = uVar1;
  *(undefined4 *)(iVar4 + 0x30) = uVar2;
  *(undefined4 *)(iVar4 + 0x34) = uVar3;
  *(undefined8 *)(iVar4 + 0x38) = *(undefined8 *)(param_1 + 10);
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}









char * __cdecl
FUN_10001d00(char *param_1,char *param_2,char *param_3,char *param_4,undefined4 *param_5,
            uint param_6)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = param_1;
  if ((param_6 & 0x100) == 0) {
    if ((param_6 & 0x800) == 0) {
      while (pcVar3 != param_2) {
        bVar4 = true;
        if (param_3 == param_4) goto LAB_10001e0b;
        cVar1 = *param_3;
        param_3 = param_3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar2 != cVar1) {
          return param_1;
        }
      }
      bVar4 = param_3 == param_4;
LAB_10001e0b:
      if (!bVar4) {
        return param_1;
      }
      return pcVar3;
    }
    do {
      if (pcVar3 == param_2) goto LAB_10001dd4;
      bVar4 = true;
      if (param_3 == param_4) goto LAB_10001dd6;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = FUN_100259e0(param_5);
      cVar2 = FUN_100259e0(param_5);
    } while (cVar1 == cVar2);
  }
  else {
    if (param_1 == param_2) {
LAB_10001dd4:
      bVar4 = param_3 == param_4;
    }
    else {
      while (bVar4 = param_3 == param_4, !bVar4) {
        cVar1 = *param_3;
        param_3 = param_3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        cVar1 = std::ctype<char>::tolower((ctype<char> *)param_5[1],cVar1);
        cVar2 = std::ctype<char>::tolower((ctype<char> *)param_5[1],cVar2);
        if (cVar2 != cVar1) {
          return param_1;
        }
        if (pcVar3 == param_2) {
          if (param_3 == param_4) {
            param_1 = pcVar3;
          }
          return param_1;
        }
      }
    }
LAB_10001dd6:
    if (bVar4) {
      param_1 = pcVar3;
    }
  }
  return param_1;
}









void __cdecl
FUN_10001e20(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
            undefined4 *param_6,uint param_7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  *param_1 = param_3;
  pcVar3 = param_2;
  if ((param_7 & 0x100) == 0) {
    if ((param_7 & 0x800) == 0) {
      do {
        if (pcVar3 == param_3) {
          bVar4 = param_4 == param_5;
LAB_10001f7c:
          if (bVar4) {
            param_2 = pcVar3;
          }
          break;
        }
        bVar4 = true;
        if (param_4 == param_5) goto LAB_10001f7c;
        cVar1 = *param_4;
        param_4 = param_4 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 == cVar1);
      *param_1 = param_2;
      return;
    }
    do {
      if ((pcVar3 == param_3) || (param_4 == param_5)) goto LAB_10001eb7;
      param_4 = param_4 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = FUN_100259e0(param_6);
      cVar2 = FUN_100259e0(param_6);
    } while (cVar1 == cVar2);
  }
  else {
    do {
      if ((pcVar3 == param_3) || (param_4 == param_5)) {
LAB_10001eb7:
        if (param_4 == param_5) {
          param_2 = pcVar3;
        }
        *param_1 = param_2;
        return;
      }
      cVar1 = *param_4;
      param_4 = param_4 + 1;
      cVar2 = *pcVar3;
      cVar1 = std::ctype<char>::tolower((ctype<char> *)param_6[1],cVar1);
      cVar2 = std::ctype<char>::tolower((ctype<char> *)param_6[1],cVar2);
      pcVar3 = pcVar3 + 1;
    } while (cVar2 == cVar1);
  }
  *param_1 = param_2;
  return;
}









undefined4 * __cdecl
FUN_10001f90(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
            undefined4 *param_6,uint param_7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  *param_1 = param_3;
  pcVar3 = param_2;
  if ((param_7 & 0x100) == 0) {
    if ((param_7 & 0x800) == 0) {
      do {
        if (pcVar3 == param_3) {
          bVar4 = param_4 == param_5;
LAB_100020f6:
          if (bVar4) {
            param_2 = pcVar3;
          }
          break;
        }
        bVar4 = true;
        if (param_4 == param_5) goto LAB_100020f6;
        cVar1 = *pcVar3;
        cVar2 = *param_4;
        pcVar3 = pcVar3 + 1;
        param_4 = param_4 + 1;
      } while (cVar1 == cVar2);
      *param_1 = param_2;
      return param_1;
    }
    do {
      if ((pcVar3 == param_3) || (param_4 == param_5)) goto LAB_1000202f;
      param_4 = param_4 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = FUN_100259e0(param_6);
      cVar2 = FUN_100259e0(param_6);
    } while (cVar2 == cVar1);
  }
  else {
    do {
      if ((pcVar3 == param_3) || (param_4 == param_5)) {
LAB_1000202f:
        if (param_4 == param_5) {
          param_2 = pcVar3;
        }
        *param_1 = param_2;
        return param_1;
      }
      cVar1 = *param_4;
      param_4 = param_4 + 1;
      cVar2 = *pcVar3;
      cVar1 = std::ctype<char>::tolower((ctype<char> *)param_6[1],cVar1);
      cVar2 = std::ctype<char>::tolower((ctype<char> *)param_6[1],cVar2);
      pcVar3 = pcVar3 + 1;
    } while (cVar2 == cVar1);
  }
  *param_1 = param_2;
  return param_1;
}









LPWSTR __cdecl FUN_10002110(LPWSTR param_1,LPCSTR param_2,uint param_3)

{
  uint uVar1;
  LPWSTR pWVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_EDX;
  undefined8 uVar5;
  undefined1 local_54 [20];
  undefined1 local_40 [20];
  undefined4 local_2c [2];
  LPWSTR local_24;
  undefined4 local_20;
  uint local_1c;
  LPCSTR local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029aa9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = param_1;
  local_14 = 0;
  local_18 = param_2;
  local_1c = FUN_100282b9();
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\a';
  param_1[0xb] = L'\0';
  local_8 = 0;
  *param_1 = L'\0';
  local_14 = 2;
  if (param_3 == 0) {
    ExceptionList = local_10;
    return param_1;
  }
  if (param_3 < 0x80000000) {
    uVar5 = ___std_fs_convert_narrow_to_wide@20(local_1c,param_2,param_3,(LPWSTR)0x0,0);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    uVar1 = (uint)uVar5;
    if (iVar4 == 0) {
      if (*(uint *)(param_1 + 8) < uVar1) {
        FUN_10024090(param_1,uVar1 - *(uint *)(param_1 + 8),0);
      }
      else {
        pWVar2 = param_1;
        if (7 < *(uint *)(param_1 + 10)) {
          pWVar2 = *(LPWSTR *)param_1;
        }
        *(uint *)(param_1 + 8) = uVar1;
        pWVar2[uVar1] = L'\0';
      }
      pWVar2 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        pWVar2 = *(LPWSTR *)param_1;
      }
      uVar5 = ___std_fs_convert_narrow_to_wide@20(local_1c,local_18,param_3,pWVar2,uVar1);
      iVar4 = (int)((ulonglong)uVar5 >> 0x20);
      local_20 = (undefined4)uVar5;
      if (iVar4 == 0) {
        ExceptionList = local_10;
        return param_1;
      }
      puVar3 = (undefined4 *)FUN_10022210(&local_20,iVar4);
      FUN_10009180(local_54,*puVar3,(int *)puVar3[1]);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_54,(ThrowInfo *)&DAT_10031a68);
    }
  }
  else {
    FUN_10023b80();
    iVar4 = extraout_EDX;
  }
  puVar3 = (undefined4 *)FUN_10022210(local_2c,iVar4);
  FUN_10009180(local_40,*puVar3,(int *)puVar3[1]);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_40,(ThrowInfo *)&DAT_10031a68);
}








LPSTR __cdecl FUN_10002250(LPSTR param_1,UINT param_2,LPCWSTR param_3,uint param_4)

{
  void *pvVar1;
  uint uVar2;
  LPSTR pCVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_30 [20];
  undefined4 local_1c [2];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  puStack_c = &LAB_10029ae9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\x0f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *param_1 = '\0';
  local_8 = 0;
  local_14 = 1;
  if (param_4 == 0) {
    ExceptionList = pvVar1;
    return param_1;
  }
  if (param_4 < 0x80000000) {
    uVar6 = ___std_fs_convert_wide_to_narrow@20(param_2,param_3,param_4,(LPSTR)0x0,0);
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    uVar7 = CONCAT44(iVar5,local_1c[0]);
    uVar2 = (uint)uVar6;
    if (iVar5 == 0) {
      if (*(uint *)(param_1 + 0x10) < uVar2) {
        FUN_10023de0(param_1,uVar2 - *(uint *)(param_1 + 0x10),'\0');
      }
      else {
        pCVar3 = param_1;
        if (0xf < *(uint *)(param_1 + 0x14)) {
          pCVar3 = *(LPSTR *)param_1;
        }
        *(uint *)(param_1 + 0x10) = uVar2;
        pCVar3[uVar2] = '\0';
      }
      pCVar3 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pCVar3 = *(LPSTR *)param_1;
      }
      uVar7 = ___std_fs_convert_wide_to_narrow@20(param_2,param_3,param_4,pCVar3,uVar2);
      if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  else {
    FUN_10023b80();
    uVar7 = CONCAT44(extraout_EDX,local_1c[0]);
  }
  local_1c[0] = (undefined4)uVar7;
  puVar4 = (undefined4 *)FUN_10022210(local_1c,(int)((ulonglong)uVar7 >> 0x20));
  FUN_10009180(local_30,*puVar4,(int *)puVar4[1]);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_10031a68);
}









undefined4 * __thiscall
FUN_10002350(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029b10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_10001910(this,param_1 + 4);
    local_8 = 0;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_10002350(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_10002350(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}








void FUN_10002410(void *param_1,uint param_2)

{
  uint uVar1;
  
  if ((0xfff < param_2) &&
     (uVar1 = (int)param_1 + (-4 - (int)*(void **)((int)param_1 + -4)),
     param_1 = *(void **)((int)param_1 + -4), 0x1f < uVar1)) {
                    /* WARNING: Could not recover jumptable at 0x10002430. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    _invalid_parameter_noinfo_noreturn();
    return;
  }
  FUN_100284c9(param_1);
  return;
}








void __cdecl FUN_10002450(int *param_1,int *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < (uint)param_1[5]) {
      pvVar1 = (void *)*param_1;
      pvVar2 = pvVar1;
      if ((0xfff < param_1[5] + 1U) &&
         (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar2);
    }
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 6;
  } while( true );
}









void __cdecl FUN_100024c0(int *param_1,int *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      pvVar2 = pvVar1;
      if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffffcU)) &&
         (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}









void __cdecl FUN_10002530(int *param_1,int *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      pvVar2 = pvVar1;
      if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffff8U)) &&
         (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}









int __thiscall FUN_100025a0(void *this,int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar3 = ((int)param_1 - iVar2) / 0x18;
  iVar4 = (*(int *)((int)this + 4) - iVar2) / 0x18;
  if (iVar4 == 0xaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar1 = iVar4 + 1;
  uVar5 = (*(int *)((int)this + 8) - iVar2) / 0x18;
  uVar7 = uVar1;
  if ((uVar5 <= 0xaaaaaaa - (uVar5 >> 1)) && (uVar7 = (uVar5 >> 1) + uVar5, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  piVar6 = (int *)FUN_10023d20(uVar7);
  local_8 = 0;
  FUN_10007280(piVar6 + iVar3 * 6,param_2);
  if (param_1 == *(int **)((int)this + 4)) {
    FUN_10006700(*(int **)this,*(int **)((int)this + 4),piVar6);
  }
  else {
    FUN_10006700(*(int **)this,param_1,piVar6);
    FUN_10006700(param_1,*(int **)((int)this + 4),piVar6 + iVar3 * 6 + 6);
  }
  FUN_1001ed40(this,(int)piVar6,iVar4 + 1,uVar7);
  ExceptionList = local_10;
  return *(int *)this + iVar3 * 0x18;
}









int __thiscall FUN_10002700(void *this,void *param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = *(int *)this;
  iVar8 = (int)param_1 - iVar2;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 1;
  if (iVar4 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar6 = *(int *)((int)this + 8) - iVar2 >> 1;
  uVar1 = iVar4 + 1;
  uVar7 = uVar1;
  if ((uVar6 <= 0x7fffffff - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  _Dst = (void *)FUN_10023c00(uVar7);
  iVar2 = (iVar8 >> 1) * 2;
  puVar5 = (undefined2 *)((int)_Dst + iVar2);
  *puVar5 = *param_2;
  pvVar3 = *(void **)((int)this + 4);
  if (param_1 == pvVar3) {
    FUN_10005070((undefined1 *)&param_1);
    memmove(_Dst,*(void **)this,(int)pvVar3 - (int)*(void **)this);
  }
  else {
    FUN_10005070((undefined1 *)&param_2);
    memmove(_Dst,*(void **)this,(int)param_1 - (int)*(void **)this);
    FUN_10005070((undefined1 *)&param_2);
    memmove(puVar5 + 1,param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  FUN_1001ec20(this,(int)_Dst,uVar1,uVar7);
  return *(int *)this + iVar2;
}








int __thiscall FUN_10002820(void *this,void *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *(int *)this;
  iVar7 = (int)param_1 - iVar2;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 3;
  if (iVar4 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar5 = *(int *)((int)this + 8) - iVar2 >> 3;
  uVar1 = iVar4 + 1;
  uVar6 = uVar1;
  if ((uVar5 <= 0x1fffffff - (uVar5 >> 1)) && (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1)) {
    uVar6 = uVar1;
  }
  _Dst = (void *)FUN_10023cc0(uVar6);
  iVar2 = (iVar7 >> 3) * 8;
  *(undefined8 *)(iVar2 + (int)_Dst) = *param_2;
  pvVar3 = *(void **)((int)this + 4);
  if (param_1 == pvVar3) {
    FUN_10005070((undefined1 *)&param_1);
    memmove(_Dst,*(void **)this,(int)pvVar3 - (int)*(void **)this);
  }
  else {
    FUN_10005070((undefined1 *)&param_2);
    memmove(_Dst,*(void **)this,(int)param_1 - (int)*(void **)this);
    FUN_10005070((undefined1 *)&param_2);
    memmove((void *)((int)_Dst + iVar2 + 8),param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  FUN_1001ece0(this,(int)_Dst,uVar1,uVar6);
  return *(int *)this + iVar2;
}









int __thiscall FUN_10002940(void *this,void *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = *(int *)this;
  iVar8 = (int)param_1 - iVar2;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 2;
  if (iVar4 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar6 = *(int *)((int)this + 8) - iVar2 >> 2;
  uVar1 = iVar4 + 1;
  uVar7 = uVar1;
  if ((uVar6 <= 0x3fffffff - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  _Dst = (void *)FUN_10023c60(uVar7);
  iVar2 = (iVar8 >> 2) * 4;
  puVar5 = (undefined4 *)((int)_Dst + iVar2);
  *puVar5 = *param_2;
  pvVar3 = *(void **)((int)this + 4);
  if (param_1 == pvVar3) {
    FUN_10005070((undefined1 *)&param_1);
    memmove(_Dst,*(void **)this,(int)pvVar3 - (int)*(void **)this);
  }
  else {
    FUN_10005070((undefined1 *)&param_2);
    memmove(_Dst,*(void **)this,(int)param_1 - (int)*(void **)this);
    FUN_10005070((undefined1 *)&param_2);
    memmove(puVar5 + 1,param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  FUN_1001ec80(this,(int)_Dst,uVar1,uVar7);
  return *(int *)this + iVar2;
}








int __thiscall FUN_10002a60(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar6 = *(int *)this;
  iVar3 = *(int *)((int)this + 4) - iVar6 >> 3;
  iVar12 = (int)param_1 - iVar6 >> 3;
  if (iVar3 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar1 = iVar3 + 1;
  uVar8 = *(int *)((int)this + 8) - iVar6 >> 3;
  uVar4 = uVar1;
  if ((uVar8 <= 0x1fffffff - (uVar8 >> 1)) && (uVar4 = (uVar8 >> 1) + uVar8, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar8 = uVar4 * 8;
  if (uVar4 < 0x20000000) {
    if (0xfff < uVar8) goto LAB_10002ad2;
    if (uVar8 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)FUN_10028499(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_10002ad2:
    uVar5 = uVar8 + 0x23;
    if (uVar5 <= uVar8) {
      uVar5 = 0xffffffff;
    }
    iVar6 = FUN_10028499(uVar5);
    if (iVar6 == 0) goto LAB_10002be8;
    puVar11 = (undefined4 *)(iVar6 + 0x23U & 0xffffffe0);
    puVar11[-1] = iVar6;
  }
  puVar11[iVar12 * 2] = *param_2;
  puVar11[iVar12 * 2 + 1] = param_2[1];
  puVar13 = *(undefined4 **)((int)this + 4);
  puVar9 = *(undefined4 **)this;
  puVar10 = puVar11;
  if (param_1 == puVar13) {
    for (; puVar9 != puVar13; puVar9 = puVar9 + 2) {
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      puVar10 = puVar10 + 2;
    }
  }
  else {
    if (puVar9 != param_1) {
      do {
        *puVar10 = *puVar9;
        puVar13 = puVar9 + 1;
        puVar9 = puVar9 + 2;
        puVar10[1] = *puVar13;
        puVar10 = puVar10 + 2;
      } while (puVar9 != param_1);
      puVar13 = *(undefined4 **)((int)this + 4);
    }
    if (param_1 != puVar13) {
      puVar9 = puVar11 + iVar12 * 2 + 2;
      do {
        *puVar9 = *param_1;
        puVar10 = param_1 + 1;
        param_1 = param_1 + 2;
        puVar9[1] = *puVar10;
        puVar9 = puVar9 + 2;
      } while (param_1 != puVar13);
    }
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar7 = pvVar2;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar2 & 0xfffffff8U)) &&
       (pvVar7 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar7)))) {
LAB_10002be8:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar7);
  }
  *(undefined4 **)this = puVar11;
  *(undefined4 **)((int)this + 4) = puVar11 + uVar1 * 2;
  *(undefined4 **)((int)this + 8) = puVar11 + uVar4 * 2;
  return *(int *)this + iVar12 * 8;
}










int __thiscall FUN_10002c00(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = *(int *)this;
  iVar2 = ((int)param_1 - iVar1) / 0x18;
  iVar3 = (*(int *)((int)this + 4) - iVar1) / 0x18;
  if (iVar3 == 0xaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar10 = iVar3 + 1;
  uVar4 = (*(int *)((int)this + 8) - iVar1) / 0x18;
  uVar11 = uVar10;
  if ((uVar4 <= 0xaaaaaaa - (uVar4 >> 1)) && (uVar11 = (uVar4 >> 1) + uVar4, uVar11 < uVar10)) {
    uVar11 = uVar10;
  }
  piVar6 = (int *)FUN_10023d20(uVar11);
  piVar6[iVar2 * 6 + 4] = 0;
  piVar6[iVar2 * 6 + 5] = 0;
  iVar1 = param_2[1];
  iVar3 = param_2[2];
  iVar5 = param_2[3];
  piVar7 = piVar6 + iVar2 * 6;
  *piVar7 = *param_2;
  piVar7[1] = iVar1;
  piVar7[2] = iVar3;
  piVar7[3] = iVar5;
  *(undefined8 *)(piVar6 + iVar2 * 6 + 4) = *(undefined8 *)(param_2 + 4);
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  piVar9 = *(int **)((int)this + 4);
  piVar7 = *(int **)this;
  piVar8 = piVar6;
  if (param_1 != piVar9) {
    FUN_10006700(piVar7,param_1,piVar6);
    piVar9 = *(int **)((int)this + 4);
    piVar7 = param_1;
    piVar8 = piVar6 + iVar2 * 6 + 6;
  }
  FUN_10006700(piVar7,piVar9,piVar8);
  FUN_1001ed40(this,(int)piVar6,uVar10,uVar11);
  return *(int *)this + iVar2 * 0x18;
}









void __cdecl FUN_10002d60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_288 [6];
  HANDLE local_270;
  char local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029b6d;
  local_10 = ExceptionList;
  uVar4 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  FUN_10008a50(local_288,param_2,param_3);
  local_8 = 0;
  if (local_1c != '\0') {
    puVar5 = (undefined4 *)FUN_10028499(0x50);
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = std::_Ref_count_obj<>::vftable;
    FUN_10008af0(puVar5 + 4,local_288);
    *param_1 = puVar5 + 4;
    piVar2 = (int *)param_1[1];
    param_1[1] = puVar5;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar3 = piVar2[1] + -1;
      piVar2[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)*piVar2)(uVar4);
        LOCK();
        piVar1 = piVar2 + 2;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
  }
  ___std_fs_directory_iterator_close@4(local_270);
  FUN_100237b0(local_288);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}









void __thiscall
FUN_10002e60(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
    FUN_1001f630(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_10002f4b;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_100221c0(this,(int)piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_10002fbf:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100230c0(this,piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_10002fbf;
      }
LAB_10002f4b:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}










void __thiscall
FUN_10003000(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
    FUN_1001f730(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_100030eb;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_100221c0(this,(int)piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_1000315f:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100230c0(this,piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_1000315f;
      }
LAB_100030eb:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}










void __thiscall
FUN_100031a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x5d1745b < *(uint *)((int)this + 4)) {
    FUN_1001f750(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_1000328b;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_100221c0(this,(int)piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_100032ff:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100230c0(this,piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_100032ff;
      }
LAB_1000328b:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}










void __thiscall
FUN_10003340(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x3fffffd < *(uint *)((int)this + 4)) {
    FUN_1001f7b0(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_1000342b;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_100221c0(this,(int)piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_1000349f:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100230c0(this,piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_1000349f;
      }
LAB_1000342b:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}











void __thiscall
FUN_100034e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x4ec4ec2 < *(uint *)((int)this + 4)) {
    FUN_1001f7d0(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_100035cb;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_100221c0(this,(int)piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_1000363f:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100230c0(this,piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_1000363f;
      }
LAB_100035cb:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}












undefined4 * __thiscall
FUN_10003680(void *this,undefined4 *param_1,int *param_2,ushort *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *p_Var3;
  undefined4 *puVar4;
  bool bVar5;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029ba0;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_10002e60(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    if (*param_3 < *(ushort *)(param_2 + 4)) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_10002e60(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    if (*(ushort *)((undefined4 *)piVar2[2] + 4) < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_10002e60(this,param_1,'\0',(undefined4 *)piVar2[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    bVar5 = *(ushort *)(param_2 + 4) < *param_3;
    puVar1 = &uStack_30;
    if (*param_3 < *(ushort *)(param_2 + 4)) {
      local_18 = param_2;
      piVar2 = FUN_1000b660((int *)&local_18);
      if (*(ushort *)(*piVar2 + 0x10) < *param_3) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_10002e60(this,param_1,'\0',local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10002e60(this,param_1,'\x01',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar5 = *(ushort *)(param_2 + 4) < *param_3;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (bVar5) {
      local_18 = param_2;
      p_Var3 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      if ((*(int *)p_Var3 == *(int *)this) || (*param_3 < *(ushort *)(local_18 + 4))) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_10002e60(this,param_1,'\0',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10002e60(this,param_1,'\x01',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_100043d0(this,&local_20,'\0',param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}










undefined4 * __thiscall
FUN_100038a0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  _Tree_unchecked_const_iterator<> *p_Var6;
  undefined4 *puVar7;
  bool bVar8;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029bc0;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_10003000(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar5 = *(int **)this;
  if (param_2 == (int *)*piVar5) {
    local_14 = (undefined1 *)&uStack_30;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_10003000(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar5) {
    local_14 = (undefined1 *)&uStack_30;
    if ((int)((undefined4 *)piVar5[2])[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_10003000(this,param_1,'\0',(undefined4 *)piVar5[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar1 = *param_3;
    iVar2 = param_2[4];
    bVar8 = SBORROW4(iVar2,iVar1);
    iVar3 = iVar2 - iVar1;
    puVar4 = &uStack_30;
    if (iVar1 < iVar2) {
      local_18 = param_2;
      piVar5 = FUN_1000b660((int *)&local_18);
      iVar3 = *param_3;
      if (*(int *)(*piVar5 + 0x10) < iVar3) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_10003000(this,param_1,'\0',local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10003000(this,param_1,'\x01',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar8 = SBORROW4(param_2[4],iVar3);
      iVar3 = param_2[4] - iVar3;
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if (bVar8 != iVar3 < 0) {
      local_18 = param_2;
      p_Var6 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      if ((*(int *)p_Var6 == *(int *)this) || (*param_3 < local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_10003000(this,param_1,'\0',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10003000(this,param_1,'\x01',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar7 = (undefined4 *)FUN_100044f0(this,&local_20,'\0',param_3,param_4);
  *param_1 = *puVar7;
  ExceptionList = local_10;
  return param_1;
}











undefined4 * __thiscall
FUN_10003ac0(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *p_Var3;
  undefined4 *puVar4;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029be0;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_100031a0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    uVar1 = FUN_1000bdb0(param_3,(byte *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      FUN_100031a0(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    puVar4 = (undefined4 *)piVar2[2];
    local_14 = (undefined1 *)&uStack_30;
    uVar1 = FUN_1000bdb0((byte *)(puVar4 + 4),param_3);
    if ((char)uVar1 != '\0') {
      FUN_100031a0(this,param_1,'\0',puVar4,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar1 = FUN_1000bdb0(param_3,(byte *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      local_18 = param_2;
      piVar2 = FUN_1000b660((int *)&local_18);
      uVar1 = FUN_1000bdb0((byte *)(*piVar2 + 0x10),param_3);
      if ((char)uVar1 != '\0') {
        if (*(char *)(local_18[2] + 0xd) == '\0') {
          FUN_100031a0(this,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_100031a0(this,param_1,'\0',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar1 = FUN_1000bdb0((byte *)(param_2 + 4),param_3);
    if ((char)uVar1 != '\0') {
      local_18 = param_2;
      p_Var3 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      piVar2 = local_18;
      if ((*(int *)p_Var3 == *(int *)this) ||
         (uVar1 = FUN_1000bdb0(param_3,(byte *)(local_18 + 4)), (char)uVar1 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_100031a0(this,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_100031a0(this,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_10004610(this,&local_20,(int *)0x0,param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}










undefined4 * __thiscall
FUN_10003d10(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *p_Var3;
  undefined4 *puVar4;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029c00;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_10003340(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    uVar1 = FUN_1000bdb0(param_3,(byte *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      FUN_10003340(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    puVar4 = (undefined4 *)piVar2[2];
    local_14 = (undefined1 *)&uStack_30;
    uVar1 = FUN_1000bdb0((byte *)(puVar4 + 4),param_3);
    if ((char)uVar1 != '\0') {
      FUN_10003340(this,param_1,'\0',puVar4,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar1 = FUN_1000bdb0(param_3,(byte *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      local_18 = param_2;
      piVar2 = FUN_1000b660((int *)&local_18);
      uVar1 = FUN_1000bdb0((byte *)(*piVar2 + 0x10),param_3);
      if ((char)uVar1 != '\0') {
        if (*(char *)(local_18[2] + 0xd) == '\0') {
          FUN_10003340(this,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10003340(this,param_1,'\0',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar1 = FUN_1000bdb0((byte *)(param_2 + 4),param_3);
    if ((char)uVar1 != '\0') {
      local_18 = param_2;
      p_Var3 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      piVar2 = local_18;
      if ((*(int *)p_Var3 == *(int *)this) ||
         (uVar1 = FUN_1000bdb0(param_3,(byte *)(local_18 + 4)), (char)uVar1 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_10003340(this,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10003340(this,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_100047c0(this,&local_20,(int *)0x0,param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}










undefined4 * __thiscall
FUN_10003f60(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *p_Var3;
  undefined4 *puVar4;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029c20;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_100034e0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    uVar1 = FUN_1000bdb0(param_3,(byte *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      FUN_100034e0(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    puVar4 = (undefined4 *)piVar2[2];
    local_14 = (undefined1 *)&uStack_30;
    uVar1 = FUN_1000bdb0((byte *)(puVar4 + 4),param_3);
    if ((char)uVar1 != '\0') {
      FUN_100034e0(this,param_1,'\0',puVar4,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar1 = FUN_1000bdb0(param_3,(byte *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      local_18 = param_2;
      piVar2 = FUN_1000b660((int *)&local_18);
      uVar1 = FUN_1000bdb0((byte *)(*piVar2 + 0x10),param_3);
      if ((char)uVar1 != '\0') {
        if (*(char *)(local_18[2] + 0xd) == '\0') {
          FUN_100034e0(this,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_100034e0(this,param_1,'\0',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar1 = FUN_1000bdb0((byte *)(param_2 + 4),param_3);
    if ((char)uVar1 != '\0') {
      local_18 = param_2;
      p_Var3 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      piVar2 = local_18;
      if ((*(int *)p_Var3 == *(int *)this) ||
         (uVar1 = FUN_1000bdb0(param_3,(byte *)(local_18 + 4)), (char)uVar1 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_100034e0(this,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_100034e0(this,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_10004950(this,&local_20,(int *)0x0,param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}











undefined4 * __thiscall
FUN_100041b0(void *this,undefined4 *param_1,int *param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *p_Var3;
  undefined4 *puVar4;
  bool bVar5;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029c40;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_10003000(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    if (*param_3 < (uint)param_2[4]) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_10003000(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    if ((uint)((undefined4 *)piVar2[2])[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_10003000(this,param_1,'\0',(undefined4 *)piVar2[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    bVar5 = (uint)param_2[4] < *param_3;
    puVar1 = &uStack_30;
    if (*param_3 < (uint)param_2[4]) {
      local_18 = param_2;
      piVar2 = FUN_1000b660((int *)&local_18);
      if (*(uint *)(*piVar2 + 0x10) < *param_3) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_10003000(this,param_1,'\0',local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10003000(this,param_1,'\x01',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar5 = (uint)param_2[4] < *param_3;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (bVar5) {
      local_18 = param_2;
      p_Var3 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      if ((*(int *)p_Var3 == *(int *)this) || (*param_3 < (uint)local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_10003000(this,param_1,'\0',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_10003000(this,param_1,'\x01',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_10004ae0(this,&local_20,'\0',param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}









void __thiscall
FUN_100043d0(void *this,undefined4 *param_1,char param_2,ushort *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar3 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar1[1];
    do {
      piVar3 = piVar1;
      if (param_2 == '\0') {
        local_18 = *param_3 < *(ushort *)(piVar3 + 4);
      }
      else {
        local_18 = *param_3 <= *(ushort *)(piVar3 + 4);
      }
      if (local_18 == false) {
        piVar1 = (int *)piVar3[2];
      }
      else {
        piVar1 = (int *)*piVar3;
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    piVar1 = *(int **)this;
  }
  _param_2 = piVar3;
  if (local_18 != false) {
    if (piVar3 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_10004464;
    }
    FUN_1000b660((int *)&param_2);
  }
  piVar1 = _param_2;
  if (*param_3 <= *(ushort *)(_param_2 + 4)) {
    FUN_1001f630(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10004464:
  puVar2 = (undefined4 *)FUN_10002e60(this,(undefined4 *)&param_2,local_18,piVar3,param_3,param_4);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}









void __thiscall FUN_100044f0(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_3;
  puStack_c = &LAB_10029c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  local_8 = 0;
  local_18 = true;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_2 == '\0') {
        local_18 = *param_3 < (int)puVar3[4];
      }
      else {
        local_18 = *param_3 <= (int)puVar3[4];
      }
      if (local_18 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  _param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_10004581;
    }
    FUN_1000b660((int *)&param_2);
  }
  puVar2 = _param_2;
  if (*piVar1 <= (int)_param_2[4]) {
    FUN_100284c9(param_4);
    *param_1 = puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10004581:
  puVar3 = (undefined4 *)FUN_10003000(this,(undefined4 *)&param_2,local_18,puVar3,piVar1,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}









void __thiscall FUN_10004610(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  void **ppvVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  byte local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar5 = param_3;
  puStack_c = &LAB_10029ca0;
  piVar2 = *(int **)this;
  local_8 = 0;
  local_1c = 1;
  cVar1 = *(char *)(piVar2[1] + 0xd);
  ppvVar6 = &local_10;
  piVar3 = piVar2;
  piVar4 = (int *)piVar2[1];
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar6, cVar1 == '\0') {
    pbVar9 = (byte *)(piVar4 + 4);
    if ((char)param_2 == '\0') {
      if (0xf < (uint)piVar4[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      pbVar10 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar10 = *(byte **)pbVar5;
      }
      uVar7 = FUN_100065c0(pbVar10,*(uint *)(pbVar5 + 0x10),pbVar9,piVar4[8]);
      local_1c = (byte)(uVar7 >> 0x1f);
    }
    else {
      pbVar10 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar10 = *(byte **)pbVar5;
      }
      if (0xf < (uint)piVar4[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar7 = FUN_100065c0(pbVar9,piVar4[8],pbVar10,*(uint *)(pbVar5 + 0x10));
      local_1c = (byte)(uVar7 >> 0x1f) ^ 1;
    }
    if (local_1c == 0) {
      piVar11 = (int *)piVar4[2];
    }
    else {
      piVar11 = (int *)*piVar4;
    }
    ppvVar6 = ExceptionList;
    piVar3 = piVar4;
    piVar4 = piVar11;
    cVar1 = *(char *)((int)piVar11 + 0xd);
  }
  param_2 = piVar3;
  if (local_1c != 0) {
    if (piVar3 == (int *)*piVar2) {
      puVar8 = (undefined4 *)FUN_100031a0(this,&param_2,'\x01',piVar3,pbVar5,param_4);
      *param_1 = *puVar8;
      *(undefined1 *)(param_1 + 1) = 1;
      ExceptionList = local_10;
      return;
    }
    FUN_1000b660((int *)&param_2);
  }
  piVar2 = param_2;
  pbVar9 = (byte *)(param_2 + 4);
  pbVar10 = pbVar5;
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar10 = *(byte **)pbVar5;
  }
  if (0xf < (uint)param_2[9]) {
    pbVar9 = *(byte **)pbVar9;
  }
  uVar7 = FUN_100065c0(pbVar9,param_2[8],pbVar10,*(uint *)(pbVar5 + 0x10));
  if ((int)uVar7 < 0) {
    puVar8 = (undefined4 *)FUN_100031a0(this,&param_2,local_1c,piVar3,pbVar5,param_4);
    *param_1 = *puVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    ExceptionList = local_10;
    return;
  }
  FUN_1001f750(param_4);
  *param_1 = piVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  ExceptionList = local_10;
  return;
}









void __thiscall FUN_100047c0(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  void **ppvVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  byte local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar5 = param_3;
  puStack_c = &LAB_10029cc0;
  piVar2 = *(int **)this;
  local_8 = 0;
  local_18 = 1;
  cVar1 = *(char *)(piVar2[1] + 0xd);
  ppvVar6 = &local_10;
  piVar3 = piVar2;
  piVar4 = (int *)piVar2[1];
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar6, cVar1 == '\0') {
    pbVar9 = (byte *)(piVar4 + 4);
    if ((char)param_2 == '\0') {
      if (0xf < (uint)piVar4[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      pbVar10 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar10 = *(byte **)pbVar5;
      }
      uVar7 = FUN_100065c0(pbVar10,*(uint *)(pbVar5 + 0x10),pbVar9,piVar4[8]);
      local_18 = (byte)(uVar7 >> 0x1f);
    }
    else {
      pbVar10 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar10 = *(byte **)pbVar5;
      }
      if (0xf < (uint)piVar4[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar7 = FUN_100065c0(pbVar9,piVar4[8],pbVar10,*(uint *)(pbVar5 + 0x10));
      local_18 = (byte)(uVar7 >> 0x1f) ^ 1;
    }
    if (local_18 == 0) {
      piVar11 = (int *)piVar4[2];
    }
    else {
      piVar11 = (int *)*piVar4;
    }
    ppvVar6 = ExceptionList;
    piVar3 = piVar4;
    piVar4 = piVar11;
    cVar1 = *(char *)((int)piVar11 + 0xd);
  }
  param_2 = piVar3;
  if (local_18 != 0) {
    if (piVar3 == (int *)*piVar2) {
      local_18 = 1;
      goto LAB_10004899;
    }
    FUN_1000b660((int *)&param_2);
  }
  piVar2 = param_2;
  pbVar9 = (byte *)(param_2 + 4);
  pbVar10 = pbVar5;
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar10 = *(byte **)pbVar5;
  }
  if (0xf < (uint)param_2[9]) {
    pbVar9 = *(byte **)pbVar9;
  }
  uVar7 = FUN_100065c0(pbVar9,param_2[8],pbVar10,*(uint *)(pbVar5 + 0x10));
  piVar4 = param_4;
  if (-1 < (int)uVar7) {
    FUN_10009850(param_4 + 4);
    FUN_100284c9(piVar4);
    *param_1 = piVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10004899:
  puVar8 = (undefined4 *)FUN_10003340(this,&param_2,local_18,piVar3,pbVar5,param_4);
  *param_1 = *puVar8;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}










void __thiscall FUN_10004950(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  void **ppvVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  byte local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar5 = param_3;
  puStack_c = &LAB_10029ce0;
  piVar2 = *(int **)this;
  local_8 = 0;
  local_18 = 1;
  cVar1 = *(char *)(piVar2[1] + 0xd);
  ppvVar6 = &local_10;
  piVar3 = piVar2;
  piVar4 = (int *)piVar2[1];
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar6, cVar1 == '\0') {
    pbVar9 = (byte *)(piVar4 + 4);
    if ((char)param_2 == '\0') {
      if (0xf < (uint)piVar4[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      pbVar10 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar10 = *(byte **)pbVar5;
      }
      uVar7 = FUN_100065c0(pbVar10,*(uint *)(pbVar5 + 0x10),pbVar9,piVar4[8]);
      local_18 = (byte)(uVar7 >> 0x1f);
    }
    else {
      pbVar10 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar10 = *(byte **)pbVar5;
      }
      if (0xf < (uint)piVar4[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar7 = FUN_100065c0(pbVar9,piVar4[8],pbVar10,*(uint *)(pbVar5 + 0x10));
      local_18 = (byte)(uVar7 >> 0x1f) ^ 1;
    }
    if (local_18 == 0) {
      piVar11 = (int *)piVar4[2];
    }
    else {
      piVar11 = (int *)*piVar4;
    }
    ppvVar6 = ExceptionList;
    piVar3 = piVar4;
    piVar4 = piVar11;
    cVar1 = *(char *)((int)piVar11 + 0xd);
  }
  param_2 = piVar3;
  if (local_18 != 0) {
    if (piVar3 == (int *)*piVar2) {
      local_18 = 1;
      goto LAB_10004a29;
    }
    FUN_1000b660((int *)&param_2);
  }
  piVar2 = param_2;
  pbVar9 = (byte *)(param_2 + 4);
  pbVar10 = pbVar5;
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar10 = *(byte **)pbVar5;
  }
  if (0xf < (uint)param_2[9]) {
    pbVar9 = *(byte **)pbVar9;
  }
  uVar7 = FUN_100065c0(pbVar9,param_2[8],pbVar10,*(uint *)(pbVar5 + 0x10));
  piVar4 = param_4;
  if (-1 < (int)uVar7) {
    FUN_100098e0(param_4 + 4);
    FUN_100284c9(piVar4);
    *param_1 = piVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10004a29:
  puVar8 = (undefined4 *)FUN_100034e0(this,&param_2,local_18,piVar3,pbVar5,param_4);
  *param_1 = *puVar8;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}











void __thiscall FUN_10004ae0(void *this,undefined4 *param_1,char param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_10029d00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  local_8 = 0;
  local_18 = true;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_2 == '\0') {
        local_18 = *param_3 < (uint)puVar3[4];
      }
      else {
        local_18 = *param_3 <= (uint)puVar3[4];
      }
      if (local_18 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  _param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_10004b71;
    }
    FUN_1000b660((int *)&param_2);
  }
  puVar2 = _param_2;
  if (*puVar1 <= (uint)_param_2[4]) {
    FUN_100284c9(param_4);
    *param_1 = puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10004b71:
  puVar3 = (undefined4 *)FUN_10003000(this,(undefined4 *)&param_2,local_18,puVar3,puVar1,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}









void __cdecl FUN_10004c00(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined **local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029d28;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10008ba0((int)&local_24);
  local_24 = std::_LaunchPad<>::vftable;
  local_14 = (void *)*param_2;
  *param_2 = 0;
  local_8 = 0;
  FUN_10022130(&local_24,param_1);
  if (local_14 != (void *)0x0) {
    FUN_100284c9(local_14);
  }
  local_8 = 1;
  iVar2 = _Mtx_unlock(local_1c,uVar1);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  _Mtx_destroy(local_1c);
  _Cnd_destroy(local_20);
  ExceptionList = local_10;
  return;
}










char * __cdecl FUN_10004cb0(char *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  do {
    if (param_3 == (uint *)0x0) {
      return param_1;
    }
    uVar4 = param_3[2];
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar2 = *param_3;
      do {
        uVar3 = 0;
        pcVar5 = param_1;
        if (uVar2 != 0) {
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            if (cVar1 != *(char *)(param_3[3] + uVar6 + uVar3)) break;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2);
          uVar4 = param_3[2];
        }
        if (pcVar5 == param_2) {
          return param_2;
        }
        uVar6 = uVar6 + uVar2;
      } while (uVar6 < uVar4);
    }
    param_3 = (uint *)param_3[4];
  } while( true );
}










void __cdecl FUN_10004d10(undefined4 *param_1,char *param_2,char *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    if (param_4 == (uint *)0x0) {
      *param_1 = param_2;
      return;
    }
    uVar4 = 0;
    if (param_4[2] != 0) {
      uVar2 = *param_4;
      do {
        uVar5 = 0;
        pcVar3 = param_2;
        if (uVar2 != 0) {
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            if (cVar1 != *(char *)(param_4[3] + uVar4 + uVar5)) break;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        if (pcVar3 == param_3) {
          *param_1 = param_3;
          return;
        }
        uVar4 = uVar4 + uVar2;
      } while (uVar4 < param_4[2]);
    }
    param_4 = (uint *)param_4[4];
  } while( true );
}











uint __cdecl FUN_10004d90(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_2 + 4) != 0) {
    do {
      if ((*(byte *)(*(int *)(param_2 + 8) + uVar1) <= param_1) &&
         (param_1 <= *(byte *)(*(int *)(param_2 + 8) + 1 + uVar1))) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 2;
    } while (uVar1 < *(uint *)(param_2 + 4));
  }
  return uVar1 & 0xffffff00;
}











ulonglong __thiscall FUN_10004dd0(void *this,undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint extraout_EDX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *this_00;
  ulonglong uVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    this_00 = (int *)0x8;
  }
  else {
    this_00 = param_1 + 2;
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_10006390(this_00,0);
  }
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)this = *(undefined4 *)((int)this + 0x54);
  FUN_100257f0((void *)((int)this + 4),*(uint *)((int)this + 0x68));
  FUN_10005f50((void *)((int)this + 0x14),*(uint *)((int)this + 0x68));
  *(undefined4 *)((int)this + 0x78) = 10000000;
  *(undefined4 *)((int)this + 0x7c) = 1000;
  *(undefined1 *)((int)this + 100) = 0;
  *(bool *)((int)this + 0x65) = param_1 != (undefined4 *)0x0;
  *(undefined1 *)((int)this + 0x74) = param_2;
  uVar7 = FUN_10022250(this,*(void **)((int)this + 0x58));
  if ((char)uVar7 != '\0') {
    if (param_1 != (undefined4 *)0x0) {
      FUN_10006390(this_00,*(uint *)((int)this + 0x68));
      uVar6 = 0;
      uVar4 = extraout_EDX;
      if (*(int *)((int)this + 0x68) != 0) {
        iVar5 = 0;
        do {
          puVar2 = (undefined1 *)(*this_00 + 8 + iVar5);
          uVar4 = 1 << ((byte)uVar6 & 0x1f);
          if ((*(uint *)(*(int *)((int)this + 0x24) + (uVar6 >> 5) * 4) & uVar4) == 0) {
            *puVar2 = 0;
            *(undefined4 *)(iVar5 + *this_00) = *(undefined4 *)((int)this + 0x50);
            uVar3 = *(undefined4 *)((int)this + 0x50);
          }
          else {
            *puVar2 = 1;
            *(undefined4 *)(iVar5 + *this_00) =
                 *(undefined4 *)(*(int *)((int)this + 0x34) + uVar6 * 8);
            uVar3 = *(undefined4 *)(*(int *)((int)this + 0x34) + 4 + uVar6 * 8);
          }
          uVar6 = uVar6 + 1;
          *(undefined4 *)(iVar5 + 4 + *this_00) = uVar3;
          iVar5 = iVar5 + 0xc;
        } while (uVar6 < *(uint *)((int)this + 0x68));
      }
      *param_1 = *(undefined4 *)((int)this + 0x4c);
      iVar5 = *(int *)((int)this + 0x4c);
      param_1[5] = iVar5;
      iVar1 = *(int *)*this_00;
      param_1[6] = iVar1;
      *(bool *)(param_1 + 7) = iVar5 != iVar1;
      iVar5 = *(int *)(*this_00 + 4);
      param_1[8] = iVar5;
      iVar1 = *(int *)((int)this + 0x50);
      param_1[9] = iVar1;
      *(bool *)(param_1 + 10) = iVar5 != iVar1;
      param_1[0xb] = *(undefined4 *)((int)this + 0x50);
      uVar7 = CONCAT44(uVar4,*(undefined4 *)((int)this + 0x50));
      param_1[0xc] = *(undefined4 *)((int)this + 0x50);
    }
    return CONCAT44((int)(uVar7 >> 0x20),CONCAT31((int3)(uVar7 >> 8),1));
  }
  return uVar7;
}












ulonglong __thiscall FUN_10004f20(void *this,undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint extraout_EDX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *this_00;
  ulonglong uVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    this_00 = (int *)0x8;
  }
  else {
    this_00 = param_1 + 2;
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_10005940(this_00,0);
  }
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)this = *(undefined4 *)((int)this + 0x54);
  FUN_100257f0((void *)((int)this + 4),*(uint *)((int)this + 0x68));
  FUN_10005b90((void *)((int)this + 0x14),*(uint *)((int)this + 0x68));
  *(undefined4 *)((int)this + 0x78) = 10000000;
  *(undefined4 *)((int)this + 0x7c) = 1000;
  *(undefined1 *)((int)this + 100) = 0;
  *(bool *)((int)this + 0x65) = param_1 != (undefined4 *)0x0;
  *(undefined1 *)((int)this + 0x74) = param_2;
  uVar7 = FUN_10022700(this,*(int *)((int)this + 0x58));
  if ((char)uVar7 != '\0') {
    if (param_1 != (undefined4 *)0x0) {
      FUN_10005940(this_00,*(uint *)((int)this + 0x68));
      uVar6 = 0;
      uVar4 = extraout_EDX;
      if (*(int *)((int)this + 0x68) != 0) {
        iVar5 = 0;
        do {
          puVar2 = (undefined1 *)(*this_00 + 8 + iVar5);
          uVar4 = 1 << ((byte)uVar6 & 0x1f);
          if ((*(uint *)(*(int *)((int)this + 0x24) + (uVar6 >> 5) * 4) & uVar4) == 0) {
            *puVar2 = 0;
            *(undefined4 *)(iVar5 + *this_00) = *(undefined4 *)((int)this + 0x50);
            uVar3 = *(undefined4 *)((int)this + 0x50);
          }
          else {
            *puVar2 = 1;
            *(undefined4 *)(iVar5 + *this_00) =
                 *(undefined4 *)(*(int *)((int)this + 0x34) + uVar6 * 8);
            uVar3 = *(undefined4 *)(*(int *)((int)this + 0x34) + 4 + uVar6 * 8);
          }
          uVar6 = uVar6 + 1;
          *(undefined4 *)(iVar5 + 4 + *this_00) = uVar3;
          iVar5 = iVar5 + 0xc;
        } while (uVar6 < *(uint *)((int)this + 0x68));
      }
      *param_1 = *(undefined4 *)((int)this + 0x4c);
      iVar5 = *(int *)((int)this + 0x4c);
      param_1[5] = iVar5;
      iVar1 = *(int *)*this_00;
      param_1[6] = iVar1;
      *(bool *)(param_1 + 7) = iVar5 != iVar1;
      iVar5 = *(int *)(*this_00 + 4);
      param_1[8] = iVar5;
      iVar1 = *(int *)((int)this + 0x50);
      param_1[9] = iVar1;
      *(bool *)(param_1 + 10) = iVar5 != iVar1;
      param_1[0xb] = *(undefined4 *)((int)this + 0x50);
      uVar7 = CONCAT44(uVar4,*(undefined4 *)((int)this + 0x50));
      param_1[0xc] = *(undefined4 *)((int)this + 0x50);
    }
    return CONCAT44((int)(uVar7 >> 0x20),CONCAT31((int3)(uVar7 >> 8),1));
  }
  return uVar7;
}











void __cdecl FUN_10005070(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}








void __thiscall FUN_10005080(void *this,void *param_1,int param_2)

{
  void *_Dst;
  uint uVar1;
  uint _Size;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  _Size = param_2 - (int)param_1;
  if (_Size != 0) {
    if (0x7fffffff < _Size) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = FUN_10023bb0(_Size);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + _Size;
    _Dst = *(void **)this;
    FUN_10005070((undefined1 *)&param_2);
    memmove(_Dst,param_1,_Size);
    *(uint *)((int)this + 4) = (int)_Dst + _Size;
  }
  return;
}










undefined1 * __cdecl
FUN_10005100(byte *param_1,byte *param_2,undefined4 *param_3,int *param_4,uint param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  undefined4 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined1 auStackY_100 [80];
  undefined4 uStackY_b0;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  undefined4 local_4c;
  int local_48;
  byte *local_40;
  byte *local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029d76;
  local_10 = ExceptionList;
  local_38 = *param_4;
  if (local_38 == 0) {
    return auStackY_100;
  }
  local_34 = *(undefined4 *)(local_38 + 0x14);
  local_20 = param_4 + 1;
  local_28 = *(undefined4 *)(local_38 + 0x1c);
  local_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = (void *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_40 = param_2;
  local_3c = param_1;
  local_30 = param_5;
  local_2c = 0;
  local_8 = 2;
  if (((*(byte *)(local_38 + 8) & 8) == 0) || (local_24 = 1, (param_5 & 0x10) != 0)) {
    local_24 = 0;
  }
  ExceptionList = &local_10;
  FUN_10005cd0(&local_50,*(uint *)(local_38 + 0x18));
  local_8 = 3;
  uVar4 = FUN_10004dd0(local_90,param_3,0);
  if ((char)uVar4 == '\0') {
    if ((param_1 != param_2) && ((param_5 & 0x40) == 0)) {
      local_30 = local_30 & 0xffffdfff | 0x100;
      uStackY_b0 = 0x1000523f;
      for (pbVar1 = FUN_10023120(local_90,param_1 + 1,param_2,0); pbVar1 != param_2;
          pbVar1 = FUN_10023120(local_90,pbVar1 + 1,param_2,0)) {
        local_3c = pbVar1;
        uVar4 = FUN_10004dd0(local_90,param_3,0);
        if ((char)uVar4 != '\0') goto LAB_1000528a;
        uStackY_b0 = 0x1000526c;
      }
      local_3c = param_2;
      uVar4 = FUN_10004dd0(local_90,param_3,0);
      if ((char)uVar4 != '\0') goto LAB_1000528a;
    }
    param_4._3_1_ = 0;
  }
  else {
LAB_1000528a:
    param_4._3_1_ = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_6;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != (byte *)param_3[6];
    }
  }
  if (local_50 != (void *)0x0) {
    pvVar3 = local_50;
    if ((0xfff < (local_48 - (int)local_50 & 0xfffffff8U)) &&
       (pvVar3 = *(void **)((int)local_50 + -4), 0x1f < (uint)((int)local_50 + (-4 - (int)pvVar3))))
    {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar3);
    local_50 = (void *)0x0;
    local_4c = 0;
    local_48 = 0;
  }
  FUN_100095e0((int)local_70);
  uVar2 = FUN_100095e0((int)local_90);
  ExceptionList = local_10;
  return (undefined1 *)CONCAT31((int3)((uint)uVar2 >> 8),param_4._3_1_);
}









undefined1 __cdecl
FUN_10005320(char *param_1,char *param_2,undefined4 *param_3,int *param_4,uint param_5,
            undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  void *local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  char *local_44;
  char *local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  int *local_24;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029dc6;
  local_10 = ExceptionList;
  local_3c = *param_4;
  if (local_3c == 0) {
    return 0;
  }
  local_38 = *(undefined4 *)(local_3c + 0x14);
  local_2c = *(undefined4 *)(local_3c + 0x1c);
  local_24 = param_4 + 1;
  local_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_54 = (void *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = param_2;
  local_40 = param_1;
  local_34 = param_5;
  local_30 = 0;
  local_8 = 2;
  if (((*(byte *)(local_3c + 8) & 8) == 0) || (local_28 = 1, (param_5 & 0x10) != 0)) {
    local_28 = 0;
  }
  ExceptionList = &local_10;
  local_14 = local_24;
  FUN_10005cd0(&local_54,*(uint *)(local_3c + 0x18));
  local_8 = 3;
  uVar4 = FUN_10004f20(&local_94,param_3,0);
  if ((char)uVar4 == '\0') {
    if ((param_1 != param_2) && ((param_5 & 0x40) == 0)) {
      local_34 = local_34 & 0xffffdfff | 0x100;
      piVar2 = FUN_10023300(&local_94,(int *)&local_14,param_1 + 1,param_2,0);
      pcVar1 = (char *)*piVar2;
      while (pcVar1 != param_2) {
        local_40 = pcVar1;
        uVar4 = FUN_10004f20(&local_94,param_3,0);
        if ((char)uVar4 != '\0') goto LAB_100054c0;
        piVar2 = FUN_10023300(&local_94,(int *)&local_14,pcVar1 + 1,param_2,0);
        pcVar1 = (char *)*piVar2;
      }
      local_40 = param_2;
      uVar4 = FUN_10004f20(&local_94,param_3,0);
      if ((char)uVar4 != '\0') goto LAB_100054c0;
    }
    param_4._3_1_ = 0;
  }
  else {
LAB_100054c0:
    param_4._3_1_ = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_6;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != (char *)param_3[6];
    }
  }
  if (local_54 != (void *)0x0) {
    pvVar3 = local_54;
    if ((0xfff < (local_4c - (int)local_54 & 0xfffffff8U)) &&
       (pvVar3 = *(void **)((int)local_54 + -4), 0x1f < (uint)((int)local_54 + (-4 - (int)pvVar3))))
    {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar3);
    local_54 = (void *)0x0;
    local_50 = 0;
    local_4c = 0;
  }
  FUN_100095e0((int)&local_74);
  FUN_100095e0((int)&local_94);
  ExceptionList = local_10;
  return param_4._3_1_;
}









void __thiscall FUN_10005560(void *this,uint param_1,undefined4 param_2,undefined2 *param_3)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1;
  puVar4 = *(undefined2 **)((int)this + 4);
  iVar3 = *(int *)this;
  uVar6 = (int)puVar4 - iVar3 >> 1;
  uVar2 = *(int *)((int)this + 8) - iVar3 >> 1;
  if (param_1 <= uVar2) {
    if (param_1 <= uVar6) {
      if (param_1 != uVar6) {
        *(uint *)((int)this + 4) = iVar3 + param_1 * 2;
      }
      return;
    }
    for (iVar3 = param_1 - uVar6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 **)((int)this + 4) = puVar4;
    return;
  }
  if (0x7fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar5 = param_1;
  if ((uVar2 <= 0x7fffffff - (uVar2 >> 1)) && (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < param_1)) {
    uVar5 = param_1;
  }
  _Dst = (void *)FUN_10023c00(uVar5);
  iVar3 = uVar1 - uVar6;
  puVar4 = (undefined2 *)((int)_Dst + uVar6 * 2);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    puVar4 = puVar4 + 1;
    uVar1 = param_1;
  }
  _Src = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(_Dst,_Src,*(int *)((int)this + 4) - (int)_Src);
  FUN_1001ec20(this,(int)_Dst,uVar1,uVar5);
  return;
}










int * __thiscall FUN_10005670(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)((int)this + 8) - *(int *)this;
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  piVar4 = (int *)(iVar5 * 0x2aaaaaab);
  uVar3 = iVar5 / 0x18;
  if (param_1 <= uVar3) {
    if (param_1 <= uVar2) {
      if (param_1 != uVar2) {
        piVar1 = (int *)(*(int *)this + param_1 * 0x18);
        piVar4 = (int *)FUN_10002450(piVar1,*(int **)((int)this + 4));
        *(int **)((int)this + 4) = piVar1;
      }
      return piVar4;
    }
    piVar4 = FUN_1000b780(*(int **)((int)this + 4),param_1 - uVar2);
    *(int **)((int)this + 4) = piVar4;
    return piVar4;
  }
  if (0xaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar6 = param_1;
  if ((uVar3 <= 0xaaaaaaa - (uVar3 >> 1)) && (uVar6 = uVar3 + (uVar3 >> 1), uVar6 < param_1)) {
    uVar6 = param_1;
  }
  piVar4 = (int *)FUN_10023d20(uVar6);
  FUN_1000b780(piVar4 + uVar2 * 6,param_1 - uVar2);
  FUN_10006700(*(int **)this,*(int **)((int)this + 4),piVar4);
  piVar4 = (int *)FUN_1001ed40(this,(int)piVar4,param_1,uVar6);
  return piVar4;
}








void __thiscall FUN_10005770(void *this,uint param_1,undefined4 param_2,byte *param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  
  uVar3 = param_1;
  pvVar1 = *(void **)((int)this + 4);
  iVar2 = *(int *)this;
  uVar6 = (int)pvVar1 - iVar2;
  uVar5 = *(int *)((int)this + 8) - iVar2;
  if (param_1 <= uVar5) {
    if (param_1 <= uVar6) {
      if (param_1 != uVar6) {
        *(uint *)((int)this + 4) = iVar2 + param_1;
      }
      return;
    }
    _Size = param_1 - uVar6;
    memset(pvVar1,(uint)*param_3,_Size);
    *(size_t *)((int)this + 4) = _Size + (int)pvVar1;
    return;
  }
  if (0x7fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar4 = param_1;
  if ((uVar5 <= 0x7fffffff - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < param_1)) {
    uVar4 = param_1;
  }
  _Dst = (void *)FUN_10023bb0(uVar4);
  memset((void *)((int)_Dst + uVar6),(uint)*param_3,uVar3 - uVar6);
  pvVar1 = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(_Dst,pvVar1,*(int *)((int)this + 4) - (int)pvVar1);
  FUN_1001ebc0(this,(int)_Dst,uVar3,uVar4);
  return;
}








void __thiscall FUN_10005860(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1;
  pvVar1 = *(void **)((int)this + 4);
  iVar2 = *(int *)this;
  uVar6 = (int)pvVar1 - iVar2;
  uVar5 = *(int *)((int)this + 8) - iVar2;
  if (param_1 <= uVar5) {
    if (param_1 <= uVar6) {
      if (param_1 != uVar6) {
        *(uint *)((int)this + 4) = iVar2 + param_1;
      }
      return;
    }
    iVar2 = iVar2 + param_1;
    memset(pvVar1,0,iVar2 - (int)pvVar1);
    *(int *)((int)this + 4) = iVar2;
    return;
  }
  if (0x7fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar4 = param_1;
  if ((uVar5 <= 0x7fffffff - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < param_1)) {
    uVar4 = param_1;
  }
  _Dst = (void *)FUN_10023bb0(uVar4);
  memset((void *)((int)_Dst + uVar6),0,uVar3 - uVar6);
  pvVar1 = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(_Dst,pvVar1,*(int *)((int)this + 4) - (int)pvVar1);
  FUN_1001ebc0(this,(int)_Dst,uVar3,uVar4);
  return;
}








int __thiscall FUN_10005940(void *this,uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  iVar6 = *(int *)((int)this + 8) - *(int *)this;
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  iVar5 = iVar6 * 0x2aaaaaab;
  uVar3 = iVar6 / 0xc;
  if (param_1 <= uVar3) {
    if (param_1 <= uVar2) {
      if (param_1 != uVar2) {
        iVar5 = *(int *)this + param_1 * 0xc;
        *(int *)((int)this + 4) = iVar5;
      }
      return iVar5;
    }
    iVar5 = FUN_1000b7c0(*(undefined4 **)((int)this + 4),param_1 - uVar2);
    *(int *)((int)this + 4) = iVar5;
    return iVar5;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar10 = param_1;
  if ((uVar3 <= 0x15555555 - (uVar3 >> 1)) && (uVar10 = uVar3 + (uVar3 >> 1), uVar10 < param_1)) {
    uVar10 = param_1;
  }
  puVar4 = (undefined8 *)FUN_10023d80(uVar10);
  FUN_1000b7c0((undefined4 *)((int)puVar4 + uVar2 * 0xc),param_1 - uVar2);
  puVar8 = *(undefined8 **)((int)this + 4);
  puVar7 = *(undefined8 **)this;
  puVar9 = puVar4;
  if (puVar7 != puVar8) {
    do {
      *puVar9 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar7 = (undefined8 *)((int)puVar7 + 0xc);
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)puVar1;
      puVar9 = (undefined8 *)((int)puVar9 + 0xc);
    } while (puVar7 != puVar8);
    puVar7 = *(undefined8 **)this;
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = puVar7;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)puVar7) / 0xc) * 0xc)) &&
       (puVar8 = *(undefined8 **)((int)puVar7 + -4), 0x1f < (uint)((int)puVar7 + (-4 - (int)puVar8))
       )) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(puVar8);
  }
  *(undefined8 **)this = puVar4;
  *(uint *)((int)this + 4) = (int)puVar4 + param_1 * 0xc;
  iVar5 = (int)puVar4 + uVar10 * 0xc;
  *(int *)((int)this + 8) = iVar5;
  return iVar5;
}








void __thiscall FUN_10005aa0(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  
  uVar3 = param_1;
  pvVar1 = *(void **)((int)this + 4);
  iVar2 = *(int *)this;
  uVar6 = (int)pvVar1 - iVar2 >> 2;
  uVar5 = *(int *)((int)this + 8) - iVar2 >> 2;
  if (param_1 <= uVar5) {
    if (param_1 <= uVar6) {
      if (param_1 != uVar6) {
        *(uint *)((int)this + 4) = iVar2 + param_1 * 4;
      }
      return;
    }
    _Size = (param_1 - uVar6) * 4;
    memset(pvVar1,0,_Size);
    *(void **)((int)this + 4) = (void *)(_Size + (int)pvVar1);
    return;
  }
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar4 = param_1;
  if ((uVar5 <= 0x3fffffff - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < param_1)) {
    uVar4 = param_1;
  }
  _Dst = (void *)FUN_10023c60(uVar4);
  memset((void *)((int)_Dst + uVar6 * 4),0,(uVar3 - uVar6) * 4);
  pvVar1 = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(_Dst,pvVar1,*(int *)((int)this + 4) - (int)pvVar1);
  FUN_1001ec80(this,(int)_Dst,uVar3,uVar4);
  return;
}








void __thiscall FUN_10005b90(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  iVar4 = *(int *)this;
  uVar5 = (int)puVar1 - iVar4 >> 3;
  uVar2 = *(int *)((int)this + 8) - iVar4 >> 3;
  if (param_1 <= uVar2) {
    if (uVar5 < param_1) {
      iVar4 = param_1 - uVar5;
      if (iVar4 != 0) {
        do {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = puVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 **)((int)this + 4) = puVar1;
        return;
      }
    }
    else {
      if (param_1 == uVar5) {
        return;
      }
      puVar1 = (undefined4 *)(iVar4 + param_1 * 8);
    }
    *(undefined4 **)((int)this + 4) = puVar1;
    return;
  }
  if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar6 = param_1;
  if ((uVar2 <= 0x1fffffff - (uVar2 >> 1)) && (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < param_1)) {
    uVar6 = param_1;
  }
  uVar2 = FUN_10023cc0(uVar6);
  puVar1 = (undefined4 *)(uVar2 + uVar5 * 8);
  for (iVar4 = param_1 - uVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  puVar1 = *(undefined4 **)this;
  puVar3 = *(undefined4 **)((int)this + 4);
  if (puVar1 != puVar3) {
    iVar4 = uVar2 - (int)puVar1;
    do {
      *(undefined4 *)((int)puVar1 + iVar4) = *puVar1;
      *(undefined4 *)((int)puVar1 + iVar4 + 4) = puVar1[1];
      puVar1 = puVar1 + 2;
    } while (puVar1 != puVar3);
    puVar1 = *(undefined4 **)this;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)puVar1 & 0xfffffff8U)) &&
       (puVar3 = (undefined4 *)puVar1[-1], 0x1f < (uint)((int)puVar1 + (-4 - (int)puVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(puVar3);
  }
  *(uint *)this = uVar2;
  *(uint *)((int)this + 4) = uVar2 + param_1 * 8;
  *(uint *)((int)this + 8) = uVar2 + uVar6 * 8;
  return;
}







void __thiscall FUN_10005cd0(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  
  uVar2 = param_1;
  pvVar8 = *(void **)((int)this + 4);
  iVar5 = *(int *)this;
  uVar7 = *(int *)((int)this + 8) - iVar5 >> 3;
  uVar9 = (int)pvVar8 - iVar5 >> 3;
  if (param_1 <= uVar7) {
    if (param_1 <= uVar9) {
      if (param_1 != uVar9) {
        *(uint *)((int)this + 4) = iVar5 + param_1 * 8;
      }
      return;
    }
    iVar5 = param_1 - uVar9;
    if (iVar5 != 0) {
      memset(pvVar8,0,iVar5 * 8);
      pvVar8 = (void *)((int)pvVar8 + iVar5 * 8);
    }
    *(void **)((int)this + 4) = pvVar8;
    return;
  }
  if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar3 = param_1;
  if ((uVar7 <= 0x1fffffff - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < param_1)) {
    uVar3 = param_1;
  }
  uVar7 = uVar3 * 8;
  if (uVar3 < 0x20000000) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_10005d3d;
    if (uVar7 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)FUN_10028499(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_10005d3d:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_10028499(uVar4);
    if (iVar5 == 0) goto LAB_10005e07;
    pvVar8 = (void *)(iVar5 + 0x23U & 0xffffffe0);
    *(int *)((int)pvVar8 - 4) = iVar5;
  }
  iVar5 = uVar2 - uVar9;
  if (iVar5 != 0) {
    memset((void *)((int)pvVar8 + uVar9 * 8),0,iVar5 * 8);
  }
  pvVar1 = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(pvVar8,pvVar1,*(int *)((int)this + 4) - (int)pvVar1);
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar6 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar6 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar6)))) {
LAB_10005e07:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar6);
  }
  *(void **)this = pvVar8;
  *(void **)((int)this + 4) = (void *)(uVar2 * 8 + (int)pvVar8);
  *(void **)((int)this + 8) = (void *)(uVar7 + (int)pvVar8);
  return;
}







void __thiscall FUN_10005e50(void *this,uint param_1,undefined4 param_2,undefined4 *param_3)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1;
  puVar4 = *(undefined4 **)((int)this + 4);
  iVar3 = *(int *)this;
  uVar6 = (int)puVar4 - iVar3 >> 2;
  uVar2 = *(int *)((int)this + 8) - iVar3 >> 2;
  if (param_1 <= uVar2) {
    if (param_1 <= uVar6) {
      if (param_1 != uVar6) {
        *(uint *)((int)this + 4) = iVar3 + param_1 * 4;
      }
      return;
    }
    for (iVar3 = param_1 - uVar6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 **)((int)this + 4) = puVar4;
    return;
  }
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar5 = param_1;
  if ((uVar2 <= 0x3fffffff - (uVar2 >> 1)) && (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < param_1)) {
    uVar5 = param_1;
  }
  _Dst = (void *)FUN_10023c60(uVar5);
  iVar3 = uVar1 - uVar6;
  puVar4 = (undefined4 *)((int)_Dst + uVar6 * 4);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    puVar4 = puVar4 + 1;
    uVar1 = param_1;
  }
  _Src = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(_Dst,_Src,*(int *)((int)this + 4) - (int)_Src);
  FUN_1001ec80(this,(int)_Dst,uVar1,uVar5);
  return;
}







void __thiscall FUN_10005f50(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = param_1;
  pvVar3 = *(void **)((int)this + 4);
  iVar6 = *(int *)this;
  uVar5 = *(int *)((int)this + 8) - iVar6 >> 3;
  uVar8 = (int)pvVar3 - iVar6 >> 3;
  if (param_1 <= uVar5) {
    if (param_1 <= uVar8) {
      if (param_1 != uVar8) {
        *(uint *)((int)this + 4) = iVar6 + param_1 * 8;
      }
      return;
    }
    iVar6 = param_1 - uVar8;
    if (iVar6 != 0) {
      memset(pvVar3,0,iVar6 * 8);
      pvVar3 = (void *)((int)pvVar3 + iVar6 * 8);
    }
    *(void **)((int)this + 4) = pvVar3;
    return;
  }
  if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar7 = param_1;
  if ((uVar5 <= 0x1fffffff - (uVar5 >> 1)) && (uVar7 = (uVar5 >> 1) + uVar5, uVar7 < param_1)) {
    uVar7 = param_1;
  }
  pvVar3 = (void *)FUN_10023cc0(uVar7);
  iVar6 = uVar2 - uVar8;
  if (iVar6 != 0) {
    memset((void *)((int)pvVar3 + uVar8 * 8),0,iVar6 * 8);
  }
  pvVar1 = *(void **)this;
  FUN_10005070((undefined1 *)&param_1);
  memmove(pvVar3,pvVar1,*(int *)((int)this + 4) - (int)pvVar1);
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar4);
  }
  *(void **)this = pvVar3;
  *(void **)((int)this + 4) = (void *)((int)pvVar3 + uVar2 * 8);
  *(void **)((int)this + 8) = (void *)((int)pvVar3 + uVar7 * 8);
  return;
}









void __thiscall FUN_10006080(void *this,uint param_1,undefined4 param_2,undefined8 *param_3)

{
  void *_Src;
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  
  puVar2 = *(undefined8 **)((int)this + 4);
  iVar4 = *(int *)this;
  uVar5 = (int)puVar2 - iVar4 >> 3;
  uVar3 = *(int *)((int)this + 8) - iVar4 >> 3;
  if (uVar3 < param_1) {
    if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    local_14 = param_1;
    if ((uVar3 <= 0x1fffffff - (uVar3 >> 1)) &&
       (local_14 = (uVar3 >> 1) + uVar3, local_14 < param_1)) {
      local_14 = param_1;
    }
    local_10 = (void *)FUN_10023cc0(local_14);
    puVar2 = (undefined8 *)((int)local_10 + uVar5 * 8);
    for (iVar4 = param_1 - uVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    _Src = *(void **)this;
    FUN_10005070(&local_15);
    pvVar1 = local_10;
    memmove(local_10,_Src,*(int *)((int)this + 4) - (int)_Src);
    FUN_1001ece0(this,(int)pvVar1,param_1,local_14);
    return;
  }
  if (uVar5 < param_1) {
    iVar4 = param_1 - uVar5;
    if (iVar4 != 0) {
      do {
        *puVar2 = *param_3;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined8 **)((int)this + 4) = puVar2;
      return;
    }
  }
  else {
    if (param_1 == uVar5) {
      return;
    }
    puVar2 = (undefined8 *)(iVar4 + param_1 * 8);
  }
  *(undefined8 **)((int)this + 4) = puVar2;
  return;
}








int * __thiscall FUN_100061a0(void *this,uint param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  void *pvVar11;
  
  iVar6 = *(int *)((int)this + 8) - *(int *)this;
  uVar3 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  piVar10 = (int *)(iVar6 * 0x2aaaaaab);
  uVar7 = iVar6 / 0xc;
  if (param_1 <= uVar7) {
    if (uVar3 < param_1) {
      piVar10 = FUN_1000bd70(*(int **)((int)this + 4),param_1 - uVar3);
      *(int **)((int)this + 4) = piVar10;
      return piVar10;
    }
    if (param_1 != uVar3) {
      piVar1 = (int *)(*(int *)this + param_1 * 0xc);
      piVar10 = (int *)FUN_100024c0(piVar1,*(int **)((int)this + 4));
      *(int **)((int)this + 4) = piVar1;
    }
    return piVar10;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar4 = param_1;
  if ((uVar7 <= 0x15555555 - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < param_1)) {
    uVar4 = param_1;
  }
  uVar7 = uVar4 * 0xc;
  if (uVar4 < 0x15555556) {
    if (0xfff < uVar7) goto LAB_10006221;
    if (uVar7 == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)FUN_10028499(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_10006221:
    uVar5 = uVar7 + 0x23;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffff;
    }
    iVar6 = FUN_10028499(uVar5);
    if (iVar6 == 0) goto LAB_1000633d;
    piVar10 = (int *)(iVar6 + 0x23U & 0xffffffe0);
    piVar10[-1] = iVar6;
  }
  FUN_1000bd70(piVar10 + uVar3 * 3,param_1 - uVar3);
  piVar1 = *(int **)((int)this + 4);
  piVar9 = piVar10;
  for (piVar8 = *(int **)this; piVar8 != piVar1; piVar8 = piVar8 + 3) {
    *piVar9 = 0;
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = *piVar8;
    piVar9[1] = piVar8[1];
    piVar9[2] = piVar8[2];
    piVar9 = piVar9 + 3;
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
  }
  FUN_100024c0(piVar9,piVar9);
  if (*(int **)this != (int *)0x0) {
    FUN_100024c0(*(int **)this,*(int **)((int)this + 4));
    pvVar2 = *(void **)this;
    pvVar11 = pvVar2;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar2) / 0xc) * 0xc)) &&
       (pvVar11 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar11)))) {
LAB_1000633d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar11);
  }
  *(int **)this = piVar10;
  *(int **)((int)this + 4) = piVar10 + param_1 * 3;
  *(int **)((int)this + 8) = piVar10 + uVar4 * 3;
  return piVar10 + uVar4 * 3;
}









int __thiscall FUN_10006390(void *this,uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar6 = *(int *)((int)this + 8) - *(int *)this;
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  iVar5 = iVar6 * 0x2aaaaaab;
  uVar7 = iVar6 / 0xc;
  if (param_1 <= uVar7) {
    if (param_1 <= uVar2) {
      if (param_1 != uVar2) {
        iVar5 = *(int *)this + param_1 * 0xc;
        *(int *)((int)this + 4) = iVar5;
      }
      return iVar5;
    }
    iVar5 = FUN_1000b7c0(*(undefined4 **)((int)this + 4),param_1 - uVar2);
    *(int *)((int)this + 4) = iVar5;
    return iVar5;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar3 = param_1;
  if ((uVar7 <= 0x15555555 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < param_1)) {
    uVar3 = param_1;
  }
  uVar7 = uVar3 * 0xc;
  if (uVar3 < 0x15555556) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_10006411;
    if (uVar7 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)FUN_10028499(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_10006411:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_10028499(uVar4);
    if (iVar5 == 0) goto LAB_100064e9;
    puVar11 = (undefined8 *)(iVar5 + 0x23U & 0xffffffe0);
    *(int *)((int)puVar11 + -4) = iVar5;
  }
  FUN_1000b7c0((undefined4 *)((int)puVar11 + uVar2 * 0xc),param_1 - uVar2);
  puVar9 = *(undefined8 **)((int)this + 4);
  puVar8 = *(undefined8 **)this;
  puVar10 = puVar11;
  if (puVar8 != puVar9) {
    do {
      *puVar10 = *puVar8;
      puVar1 = puVar8 + 1;
      puVar8 = (undefined8 *)((int)puVar8 + 0xc);
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)puVar1;
      puVar10 = (undefined8 *)((int)puVar10 + 0xc);
    } while (puVar8 != puVar9);
    puVar8 = *(undefined8 **)this;
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)puVar8) / 0xc) * 0xc)) &&
       (puVar9 = *(undefined8 **)((int)puVar8 + -4), 0x1f < (uint)((int)puVar8 + (-4 - (int)puVar9))
       )) {
LAB_100064e9:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(puVar9);
  }
  *(undefined8 **)this = puVar11;
  *(uint *)((int)this + 4) = (int)puVar11 + param_1 * 0xc;
  *(uint *)((int)this + 8) = uVar7 + (int)puVar11;
  return uVar7 + (int)puVar11;
}








undefined8 * __cdecl FUN_10006530(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((int)param_2[1] < 1) && (((int)param_2[1] < 0 || (*param_2 == 0)))) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  lVar2 = _Xtime_get_ticks();
  lVar1 = __allmul(*param_2,param_2[1],10000,0);
  lVar2 = __allmul((uint)(lVar1 + lVar2),(int)((ulonglong)(lVar1 + lVar2) >> 0x20),100,0);
  uVar3 = __alldiv((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),1000000000,0);
  *param_1 = uVar3;
  *(uint *)(param_1 + 1) = (uint)lVar2 + (int)uVar3 * -1000000000;
  return param_1;
}









uint __cdecl FUN_100065c0(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_2;
  if (param_4 < param_2) {
    uVar2 = param_4;
  }
  while (uVar1 = uVar2 - 4, 3 < uVar2) {
    if (*(int *)param_1 != *(int *)param_3) goto LAB_100065f6;
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
    uVar2 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_100065f6:
    bVar3 = *param_1 < *param_3;
    if ((*param_1 != *param_3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar3 = param_1[1] < param_3[1], param_1[1] != param_3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar3 = param_1[2] < param_3[2], param_1[2] != param_3[2] ||
           ((uVar1 != 0xffffffff && (bVar3 = param_1[3] < param_3[3], param_1[3] != param_3[3]))))))
         )))))) {
      uVar2 = -(uint)bVar3 | 1;
      goto LAB_1000662c;
    }
  }
  uVar2 = 0;
LAB_1000662c:
  if (uVar2 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar2 = (uint)(param_4 < param_2);
  }
  return uVar2;
}









uint __cdecl FUN_10006650(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint in_EAX;
  bool bVar2;
  
  if (param_2 != param_4) goto LAB_100066bc;
  while (uVar1 = param_2 - 4, 3 < param_2) {
    if (*(int *)param_1 != *(int *)param_3) goto LAB_1000667e;
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
    param_2 = uVar1;
  }
  if (uVar1 == 0xfffffffc) {
LAB_100066b2:
    in_EAX = 0;
  }
  else {
LAB_1000667e:
    bVar2 = *param_1 < *param_3;
    if ((*param_1 == *param_3) &&
       ((uVar1 == 0xfffffffd ||
        ((bVar2 = param_1[1] < param_3[1], param_1[1] == param_3[1] &&
         ((uVar1 == 0xfffffffe ||
          ((bVar2 = param_1[2] < param_3[2], param_1[2] == param_3[2] &&
           ((uVar1 == 0xffffffff || (bVar2 = param_1[3] < param_3[3], param_1[3] == param_3[3]))))))
         )))))) goto LAB_100066b2;
    in_EAX = -(uint)bVar2 | 1;
  }
  if (in_EAX == 0) {
    return 1;
  }
LAB_100066bc:
  return in_EAX & 0xffffff00;
}









int FUN_100066c0(void *param_1,int param_2,void *param_3)

{
  undefined1 local_5 [5];
  
  FUN_10005070(local_5);
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (param_2 - (int)param_1) + (int)param_3;
}








int * __cdecl FUN_10006700(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_3;
  if (param_1 != param_2) {
    piVar4 = param_1;
    do {
      piVar5[4] = 0;
      *(undefined4 *)((int)param_3 + (0x14 - (int)param_1) + (int)piVar4) = 0;
      iVar1 = piVar4[1];
      iVar2 = piVar4[2];
      iVar3 = piVar4[3];
      *piVar5 = *piVar4;
      piVar5[1] = iVar1;
      piVar5[2] = iVar2;
      piVar5[3] = iVar3;
      *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(piVar4 + 4);
      piVar5 = piVar5 + 6;
      piVar4[4] = 0;
      piVar4[5] = 0xf;
      *(undefined1 *)piVar4 = 0;
      piVar4 = piVar4 + 6;
    } while (piVar4 != param_2);
  }
  FUN_10002450(piVar5,piVar5);
  return piVar5;
}










void __thiscall FUN_10006770(void *this,void *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  size_t sVar3;
  uint _Size;
  uint uVar4;
  undefined1 local_d;
  void *local_c;
  uint local_8;
  
  local_c = param_1;
  _Size = param_2 - (int)param_1;
  pvVar1 = *(void **)this;
  uVar2 = *(int *)((int)this + 8) - (int)pvVar1;
  local_8 = *(int *)((int)this + 4) - (int)pvVar1;
  if (_Size <= uVar2) {
    if (_Size <= local_8) {
      memmove(pvVar1,param_1,_Size);
      *(uint *)((int)this + 4) = (int)pvVar1 + _Size;
      return;
    }
    memmove(pvVar1,param_1,local_8);
    pvVar1 = *(void **)((int)this + 4);
    FUN_10005070(&local_d);
    sVar3 = param_2 - (int)((int)local_c + local_8);
    memmove(pvVar1,(void *)((int)local_c + local_8),sVar3);
    *(size_t *)((int)this + 4) = (int)pvVar1 + sVar3;
    return;
  }
  if (0x7fffffff < _Size) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b50();
  }
  uVar4 = _Size;
  if ((uVar2 <= 0x7fffffff - (uVar2 >> 1)) && (uVar4 = (uVar2 >> 1) + uVar2, uVar4 < _Size)) {
    uVar4 = _Size;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_100246a0(pvVar1,uVar2);
  }
  FUN_1001e8e0(this,uVar4);
  pvVar1 = *(void **)this;
  FUN_10005070(&local_d);
  sVar3 = param_2 - (int)local_c;
  memmove(pvVar1,local_c,sVar3);
  *(size_t *)((int)this + 4) = (int)pvVar1 + sVar3;
  return;
}








void __cdecl FUN_10006880(char *param_1,char *param_2,int *param_3)

{
  if (param_1 != param_2) {
    do {
      if ((int)*param_1 == *param_3) {
        return;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}









void __cdecl FUN_100068b0(undefined4 *param_1,char *param_2,char *param_3,int *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_2;
    return;
  }
  do {
    if ((int)*param_2 == *param_4) break;
    param_2 = param_2 + 1;
  } while (param_2 != param_3);
  *param_1 = param_2;
  return;
}









void __cdecl FUN_100068e0(short *param_1,short *param_2)

{
  for (; ((param_1 != param_2 && (*param_1 != 0x5c)) && (*param_1 != 0x2f)); param_1 = param_1 + 1)
  {
  }
  return;
}









ushort __thiscall FUN_10006910(void *this,char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int local_c;
  
  local_c = 0;
  iVar4 = 0;
  do {
    if ((int)param_2 - (int)param_1 == *(int *)((int)&DAT_1002e320 + iVar4)) {
      pcVar6 = *(char **)((int)&PTR_s_alnum_1002e318 + iVar4);
      pcVar5 = param_1;
      while( true ) {
        if (pcVar5 == param_2) goto LAB_100069b9;
        cVar2 = *pcVar5;
        cVar1 = std::ctype<char>::tolower(*(ctype<char> **)((int)this + 4),*pcVar6);
        cVar2 = std::ctype<char>::tolower(*(ctype<char> **)((int)this + 4),cVar2);
        if (cVar2 != cVar1) break;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    local_c = local_c + 1;
    iVar4 = local_c * 0x10;
  } while ((&PTR_s_alnum_1002e318)[local_c * 4] != (undefined *)0x0);
LAB_100069b9:
  uVar3 = 0;
  if ((&PTR_s_alnum_1002e318)[local_c * 4] != (undefined *)0x0) {
    uVar3 = (&DAT_1002e324)[local_c * 8];
  }
  if ((param_3 != '\0') && ((uVar3 & 3) != 0)) {
    uVar3 = uVar3 | 3;
  }
  return uVar3;
}









_Facet_base * __cdecl FUN_100069f0(locale *param_1)

{
  int iVar1;
  uint uVar2;
  _Locimp *p_Var3;
  _Facet_base *p_Var4;
  undefined4 local_24 [3];
  _Lockit local_18 [4];
  _Facet_base *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029e01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_18,0);
  local_8 = 0;
  local_14 = DAT_10034838;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = *(int *)(param_1 + 4);
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    p_Var4 = *(_Facet_base **)(*(int *)(iVar1 + 8) + uVar2 * 4);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_10006ab0;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_10006a6f:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_10006ab0;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(uint *)(p_Var3 + 0xc)) {
      p_Var4 = *(_Facet_base **)(*(int *)(p_Var3 + 8) + uVar2 * 4);
      goto LAB_10006a6f;
    }
  }
  p_Var4 = local_14;
  if (local_14 == (_Facet_base *)0x0) {
    uVar2 = std::ctype<char>::_Getcat((facet **)&local_14,param_1);
    p_Var4 = local_14;
    if (uVar2 == 0xffffffff) {
      FUN_10008e50(local_24);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_10031ad0);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    std::_Facet_Register(local_14);
    (**(code **)(*(int *)p_Var4 + 4))();
    DAT_10034838 = local_14;
    p_Var4 = local_14;
  }
LAB_10006ab0:
  std::_Lockit::~_Lockit(local_18);
  ExceptionList = local_10;
  return p_Var4;
}









undefined4 * __thiscall
FUN_10006af0(void *this,size_t param_1,uint param_2,undefined1 param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_20;
  uint *local_1c;
  uint local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029e57;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)((int)this + 8) = param_3;
  *(undefined ***)this = CQueue<char>::vftable;
  *(uint *)((int)this + 4) = param_2;
  *(byte *)((int)this + 9) = param_4 ^ 1;
  *(undefined1 *)((int)this + 10) = 0;
  *(undefined ***)this = CCPUQueue<char>::vftable;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = FUN_1001e9d0();
  *(undefined4 *)((int)this + 0x10) = uVar2;
  local_8._0_1_ = 1;
  FUN_10007b20((void *)((int)this + 0x18),param_2,&stack0x0000000f);
  *(size_t *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  _Mtx_init_in_situ((int)this + 0x54,2,uVar1);
  _Cnd_init_in_situ((int)this + 0x84);
  local_8 = CONCAT31(local_8._1_3_,4);
  pvVar3 = calloc(param_2,4);
  uVar1 = 0;
  *(void **)((int)this + 0xc) = pvVar3;
  if (param_2 != 0) {
    do {
      local_18[0] = FUN_100284d7(param_1);
      *(uint *)(*(int *)((int)this + 0xc) + uVar1 * 4) = local_18[0];
      piVar4 = *(int **)((int)this + 0x10);
      piVar5 = (int *)piVar4[1];
      piVar7 = piVar4;
      if (*(char *)(piVar4[1] + 0xd) == '\0') {
        do {
          if ((uint)piVar5[4] < local_18[0]) {
            piVar6 = (int *)piVar5[2];
          }
          else {
            piVar6 = (int *)*piVar5;
            piVar7 = piVar5;
          }
          piVar5 = piVar6;
        } while (*(char *)((int)piVar6 + 0xd) == '\0');
        if ((piVar7 == piVar4) || (local_18[0] < (uint)piVar7[4])) goto LAB_10006c2e;
      }
      else {
LAB_10006c2e:
        local_1c = local_18;
        piVar4 = (int *)FUN_10001bc0((void *)((int)this + 0x10),"",&local_1c);
        FUN_100041b0((void *)((int)this + 0x10),&local_20,piVar7,(uint *)(piVar4 + 4),piVar4);
        piVar7 = local_20;
      }
      uVar1 = uVar1 + 1;
      *(undefined1 *)(piVar7 + 5) = 0;
    } while (uVar1 < param_2);
  }
  ExceptionList = local_10;
  return this;
}










undefined4 * __thiscall
FUN_10006c90(void *this,uint param_1,uint param_2,undefined1 param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_20;
  uint *local_1c;
  uint local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029eb7;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)((int)this + 8) = param_3;
  *(undefined ***)this = CQueue<>::vftable;
  *(uint *)((int)this + 4) = param_2;
  *(byte *)((int)this + 9) = param_4 ^ 1;
  *(undefined1 *)((int)this + 10) = 0;
  *(undefined ***)this = CCPUQueue<>::vftable;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = FUN_1001e9d0();
  *(undefined4 *)((int)this + 0x10) = uVar2;
  local_8._0_1_ = 1;
  FUN_10007b20((void *)((int)this + 0x18),param_2,&stack0x0000000f);
  *(uint *)((int)this + 0x28) = param_1 * 2;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  _Mtx_init_in_situ((int)this + 0x54,2,uVar1);
  _Cnd_init_in_situ((int)this + 0x84);
  local_8 = CONCAT31(local_8._1_3_,4);
  pvVar3 = calloc(param_2,4);
  uVar1 = 0;
  *(void **)((int)this + 0xc) = pvVar3;
  if (param_2 != 0) {
    do {
      local_18[0] = FUN_100284d7(-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) |
                                 (uint)((ulonglong)param_1 * 2));
      *(uint *)(*(int *)((int)this + 0xc) + uVar1 * 4) = local_18[0];
      piVar4 = *(int **)((int)this + 0x10);
      piVar5 = (int *)piVar4[1];
      piVar7 = piVar4;
      if (*(char *)(piVar4[1] + 0xd) == '\0') {
        do {
          if ((uint)piVar5[4] < local_18[0]) {
            piVar6 = (int *)piVar5[2];
          }
          else {
            piVar6 = (int *)*piVar5;
            piVar7 = piVar5;
          }
          piVar5 = piVar6;
        } while (*(char *)((int)piVar6 + 0xd) == '\0');
        if ((piVar7 == piVar4) || (local_18[0] < (uint)piVar7[4])) goto LAB_10006de1;
      }
      else {
LAB_10006de1:
        local_1c = local_18;
        piVar4 = (int *)FUN_10001bc0((void *)((int)this + 0x10),"",&local_1c);
        FUN_100041b0((void *)((int)this + 0x10),&local_20,piVar7,(uint *)(piVar4 + 4),piVar4);
        piVar7 = local_20;
      }
      uVar1 = uVar1 + 1;
      *(undefined1 *)(piVar7 + 5) = 0;
    } while (uVar1 < param_2);
  }
  ExceptionList = local_10;
  return this;
}











int * __thiscall FUN_10006e40(void *this,int param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029ef3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  param_3 = 0;
  FUN_10007720((void *)((int)this + 0x14),0,&param_3);
  *(undefined4 *)((int)this + 0x20) = 0;
  _Src = *(void **)((int)this + 0x18);
  _Dst = *(void **)((int)this + 0x14);
  if (((int)_Src - (int)_Dst >> 2 != 0) && (_Dst != _Src)) {
    memmove(_Dst,_Src,0);
    *(void **)((int)this + 0x18) = _Dst;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  local_8 = 1;
  puVar2 = (undefined4 *)FUN_10028499(0x24);
  puVar2[1] = 0x14;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = std::_Root_node::vftable;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined4 **)((int)this + 0x24) = puVar2;
  *(undefined4 **)((int)this + 0x28) = puVar2;
  *(uint *)((int)this + 0x2c) = param_4;
  *(int *)((int)this + 0x30) = param_1;
  *(uint *)((int)this + 0x34) = ~(param_4 >> 3) & 0x100;
  *(uint *)((int)this + 0x38) = ~(param_4 >> 9) & 4;
  *(uint *)((int)this + 0x40) = param_4;
  uVar4 = param_4 & 0x3f;
  *(int *)((int)this + 0x3c) = param_1;
  if ((uVar4 == 1) || (uVar4 == 0)) {
    uVar3 = 0x8775dfb;
  }
  else if (uVar4 == 2) {
    uVar3 = 0x6e000300;
  }
  else if (uVar4 == 4) {
    uVar3 = 0x7080001b;
  }
  else if (uVar4 == 8) {
    uVar3 = 0x7181a01b;
  }
  else if (uVar4 == 0x10) {
    uVar3 = 0x6e080304;
  }
  else {
    uVar3 = 0;
    if (uVar4 == 0x20) {
      uVar3 = 0x7088001f;
    }
  }
  *(uint *)((int)this + 0x50) = uVar3;
  if ((uVar3 & 0x40000000) != 0) {
    puVar1 = (uint *)(*(int *)((int)this + 0x24) + 8);
    *puVar1 = *puVar1 | 8;
  }
  FUN_10023810(this);
  ExceptionList = local_10;
  return this;
}











void __fastcall FUN_10006fe0(int *param_1)

{
  int iVar1;
  _Locimp *p_Var2;
  uint uVar3;
  char *pcVar4;
  _Locinfo *this;
  _Facet_base *p_Var5;
  _Collvec _Var6;
  undefined1 *puVar7;
  _Locinfo local_78 [52];
  undefined1 local_44 [8];
  int *local_3c;
  facet *local_38;
  _Lockit local_34 [4];
  _Facet_base *local_30;
  int local_2c [6];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029f77;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = (_Facet_base *)0x0;
  local_8 = 0;
  local_3c = param_1;
  p_Var2 = std::locale::_Init(true);
  param_1[3] = (int)p_Var2;
  local_8 = 1;
  std::_Lockit::_Lockit(local_34,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_30 = DAT_10034854;
  uVar3 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = param_1[3];
  if (uVar3 < *(uint *)(iVar1 + 0xc)) {
    p_Var5 = *(_Facet_base **)(*(int *)(iVar1 + 8) + uVar3 * 4);
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_10007151;
  }
  else {
    p_Var5 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_1000708a:
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_10007151;
  }
  else {
    p_Var2 = std::locale::_Getgloballocale();
    if (uVar3 < *(uint *)(p_Var2 + 0xc)) {
      p_Var5 = *(_Facet_base **)(*(int *)(p_Var2 + 8) + uVar3 * 4);
      goto LAB_1000708a;
    }
  }
  p_Var5 = local_30;
  if (local_30 == (_Facet_base *)0x0) {
    p_Var5 = (_Facet_base *)FUN_10028499(0x10);
    local_8._0_1_ = 3;
    local_38 = (facet *)p_Var5;
    pcVar4 = (char *)FUN_10025300(param_1 + 2,local_2c);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_30 = (_Facet_base *)0x1;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar4 = *(char **)pcVar4;
    }
    this = (_Locinfo *)std::_Locinfo::_Locinfo(local_78,pcVar4);
    local_8 = 5;
    local_30 = (_Facet_base *)0x3;
    std::locale::facet::facet((facet *)p_Var5,0);
    puVar7 = local_44;
    local_8 = 6;
    *(undefined ***)p_Var5 = std::collate<char>::vftable;
    _Var6 = std::_Locinfo::_Getcoll(this);
    *(undefined4 *)(p_Var5 + 8) = *(undefined4 *)_Var6._Page;
    *(undefined4 *)(p_Var5 + 0xc) = ((undefined4 *)_Var6._Page)[1];
    std::_Locinfo::~_Locinfo(local_78);
    local_8 = 2;
    FUN_10009740(local_2c);
    local_8 = CONCAT31(local_8._1_3_,9);
    local_38 = (facet *)p_Var5;
    std::_Facet_Register(p_Var5);
    (**(code **)(*(int *)p_Var5 + 4))(puVar7);
    DAT_10034854 = p_Var5;
  }
LAB_10007151:
  local_8 = CONCAT31(local_8._1_3_,1);
  std::_Lockit::~_Lockit(local_34);
  *param_1 = (int)p_Var5;
  p_Var5 = FUN_100069f0((locale *)(param_1 + 2));
  param_1[1] = (int)p_Var5;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}











int * __thiscall FUN_10007190(void *this,char *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  int local_6c [5];
  void *local_58;
  int local_50;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029fb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)this = 0;
  local_18 = piVar1;
  local_14 = this;
  FUN_10006fe0(piVar1);
  local_8 = 0;
  pcVar3 = param_1;
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  FUN_10006e40(local_6c,(int)piVar1,(int)param_1,(int)pcVar5,param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = FUN_1001f440(local_6c);
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
    UNLOCK();
  }
  if (*(int *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)this + 0x20);
    iVar2 = *piVar1 + -1;
    *piVar1 = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      FUN_1001f7f0(*(undefined4 **)this,(undefined4 *)0x0);
    }
  }
  *(int *)this = iVar4;
  if (local_58 != (void *)0x0) {
    pvVar6 = local_58;
    if (0xfff < (local_50 - (int)local_58 & 0xfffffffcU)) {
      pvVar6 = *(void **)((int)local_58 + -4);
      if (0x1f < (uint)((int)local_58 + (-4 - (int)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar6);
  }
  ExceptionList = local_10;
  return this;
}










undefined4 * __thiscall FUN_10007280(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = param_1[4];
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (uVar1 < 0x10) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = uVar2;
    *(undefined4 *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 0xc) = uVar4;
    *(uint *)((int)this + 0x10) = uVar1;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    return this;
  }
  uVar5 = uVar1 | 0xf;
  if (0x7fffffff < uVar5) {
    uVar5 = 0x7fffffff;
  }
  _Dst = (void *)FUN_10023bb0(uVar5 + 1);
  *(void **)this = _Dst;
  memcpy(_Dst,param_1,uVar1 + 1);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)((int)this + 0x14) = uVar5;
  return this;
}









int * __thiscall FUN_10007300(void *this,uint param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  uVar2 = *(uint *)((int)this + 0x14);
  if (param_1 <= uVar2) {
    pvVar4 = this;
    if (0xf < uVar2) {
      pvVar4 = *(void **)this;
    }
    *(uint *)((int)this + 0x10) = param_1;
    memset(pvVar4,(int)param_2,param_1);
    *(undefined1 *)((int)pvVar4 + param_1) = 0;
    return this;
  }
  if (0x7fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar6 = param_1 | 0xf;
  if (uVar6 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar1 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
    }
  }
  else {
    uVar6 = 0x7fffffff;
  }
  pvVar4 = (void *)FUN_10023bb0(uVar6 + 1);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x10) = param_1;
  memset(pvVar4,(int)param_2,param_1);
  *(undefined1 *)((int)pvVar4 + param_1) = 0;
  if (0xf < uVar2) {
    pvVar3 = *(void **)this;
    pvVar5 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar5 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar5);
  }
  *(void **)this = pvVar4;
  return this;
}









undefined1 * __thiscall FUN_10007400(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}










undefined4 * __thiscall FUN_10007440(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = param_1[4];
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (uVar1 < 8) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = uVar2;
    *(undefined4 *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 0xc) = uVar4;
    *(uint *)((int)this + 0x10) = uVar1;
    *(undefined4 *)((int)this + 0x14) = 7;
    return this;
  }
  uVar5 = uVar1 | 7;
  if (0x7ffffffe < uVar5) {
    uVar5 = 0x7ffffffe;
  }
  _Dst = (void *)FUN_10023c00(uVar5 + 1);
  *(void **)this = _Dst;
  memcpy(_Dst,param_1,uVar1 * 2 + 2);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)((int)this + 0x14) = uVar5;
  return this;
}









undefined4 * __thiscall FUN_100074c0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 5);
  FUN_10007940((void *)((int)this + 0x18),param_1 + 6);
  *(undefined8 *)((int)this + 0x24) = *(undefined8 *)(param_1 + 9);
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined8 *)((int)this + 0x30) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined8 *)((int)this + 0x3c) = *(undefined8 *)(param_1 + 0xf);
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return this;
}










undefined4 * __thiscall
FUN_10007540(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10029fdb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  local_8 = 0;
  cVar1 = FUN_10005320(*(char **)this,*(char **)((int)this + 4),(undefined4 *)((int)this + 0x10),
                       *(int **)((int)this + 8),*(uint *)((int)this + 0xc),*(undefined4 *)this);
  if (cVar1 == '\0') {
    *(undefined4 *)((int)this + 8) = 0;
  }
  ExceptionList = local_10;
  return this;
}










uint * __thiscall FUN_10007620(void *this,uint param_1,byte *param_2)

{
  void *_Dst;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    if (0x7fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = FUN_10023bb0(param_1);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + param_1;
    _Dst = *(void **)this;
    memset(_Dst,(uint)*param_2,param_1);
    *(uint *)((int)this + 4) = (int)_Dst + param_1;
  }
  return this;
}










uint * __thiscall FUN_10007690(void *this,int *param_1)

{
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  undefined1 local_5 [5];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = param_1[1] - *param_1 >> 2;
  if (uVar2 != 0) {
    if (0x3fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = FUN_10023c60(uVar2);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + uVar2 * 4;
    _Src = (void *)*param_1;
    _Dst = *(void **)this;
    FUN_10005070(local_5);
    _Size = param_1[1] - (int)_Src;
    memmove(_Dst,_Src,_Size);
    *(size_t *)((int)this + 4) = (int)_Dst + _Size;
  }
  return this;
}









uint * __thiscall FUN_10007720(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = FUN_10023c60(param_1);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + param_1 * 4;
    puVar2 = *(undefined4 **)this;
    for (; param_1 != 0; param_1 = param_1 - 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  return this;
}










uint * __thiscall FUN_10007790(void *this,uint param_1)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  uint _Size;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    _Size = param_1 * 4;
    if (_Size < 0x1000) {
      if (_Size == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_10028499(_Size);
      }
    }
    else {
      uVar1 = _Size + 0x23;
      if (uVar1 <= _Size) {
        uVar1 = 0xffffffff;
      }
      iVar2 = FUN_10028499(uVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar1 = iVar2 + 0x23U & 0xffffffe0;
      *(int *)(uVar1 - 4) = iVar2;
    }
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + _Size;
    _Dst = *(void **)this;
    memset(_Dst,0,_Size);
    *(void **)((int)this + 4) = (void *)(_Size + (int)_Dst);
  }
  return this;
}










uint * __thiscall FUN_10007830(void *this,int *param_1)

{
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  undefined1 local_5 [5];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = param_1[1] - *param_1 >> 3;
  if (uVar2 != 0) {
    if (0x1fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = FUN_10023cc0(uVar2);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + uVar2 * 8;
    _Src = (void *)*param_1;
    _Dst = *(void **)this;
    FUN_10005070(local_5);
    _Size = param_1[1] - (int)_Src;
    memmove(_Dst,_Src,_Size);
    *(size_t *)((int)this + 4) = (int)_Dst + _Size;
  }
  return this;
}










uint * __thiscall FUN_100078c0(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar5 = param_1[1] - *param_1 >> 3;
  if (uVar5 != 0) {
    if (0x1fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar2 = FUN_10023cc0(uVar5);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = *(int *)this + uVar5 * 8;
    puVar1 = (undefined4 *)param_1[1];
    puVar4 = *(undefined4 **)this;
    for (puVar3 = (undefined4 *)*param_1; puVar3 != puVar1; puVar3 = puVar3 + 2) {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4 = puVar4 + 2;
    }
    *(undefined4 **)((int)this + 4) = puVar4;
  }
  return this;
}











uint * __thiscall FUN_10007940(void *this,int *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = (param_1[1] - *param_1) / 0xc;
  if (uVar2 != 0) {
    if (0x15555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar3 = FUN_10023d80(uVar2);
    *(uint *)this = uVar3;
    *(uint *)((int)this + 4) = uVar3;
    *(uint *)((int)this + 8) = *(int *)this + uVar2 * 0xc;
    puVar1 = (undefined8 *)param_1[1];
    puVar5 = *(undefined8 **)this;
    for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar1;
        puVar4 = (undefined8 *)((int)puVar4 + 0xc)) {
      *puVar5 = *puVar4;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
      puVar5 = (undefined8 *)((int)puVar5 + 0xc);
    }
    *(undefined8 **)((int)this + 4) = puVar5;
  }
  return this;
}










uint * __thiscall FUN_100079d0(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = FUN_10023d80(param_1);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + param_1 * 0xc;
    piVar2 = *(int **)this;
    for (; param_1 != 0; param_1 = param_1 - 1) {
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2 = piVar2 + 3;
    }
    FUN_10002530(piVar2,piVar2);
    *(int **)((int)this + 4) = piVar2;
  }
  return this;
}










uint * __thiscall FUN_10007a60(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_10028499(uVar1);
      }
    }
    else {
      uVar2 = uVar1 + 0x23;
      if (uVar2 <= uVar1) {
        uVar2 = 0xffffffff;
      }
      iVar3 = FUN_10028499(uVar2);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar2 - 4) = iVar3;
    }
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = *(int *)this + uVar1;
    puVar4 = *(undefined4 **)this;
    for (; param_1 != 0; param_1 = param_1 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
    *(undefined4 **)((int)this + 4) = puVar4;
  }
  return this;
}










int * __thiscall FUN_10007b20(void *this,uint param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a008;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = -(uint)(*param_2 != '\0');
  uVar4 = param_1 + 0x1f >> 5;
  FUN_10007720(this,uVar4,&local_14);
  *(undefined4 *)((int)this + 0xc) = 0;
  local_8 = 0;
  if (param_1 < 0x80000000) {
    iVar3 = *(int *)this;
    if ((uVar4 < (uint)(*(int *)((int)this + 4) - iVar3 >> 2)) &&
       (iVar2 = iVar3 + uVar4 * 4, iVar2 != *(int *)((int)this + 4))) {
      *(int *)((int)this + 4) = iVar2;
    }
    *(uint *)((int)this + 0xc) = param_1;
    if ((param_1 & 0x1f) != 0) {
      puVar1 = (uint *)(iVar3 + uVar4 * 4 + -4);
      *puVar1 = *puVar1 & (1 << (sbyte)(param_1 & 0x1f)) - 1U;
    }
    ExceptionList = local_10;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b40();
}








int __fastcall FUN_10007be0(int param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a04e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Mtx_init_in_situ(param_1,2,DAT_10034018 ^ (uint)&stack0xfffffffc);
  this = (undefined4 *)(param_1 + 0x30);
  local_8 = 0;
  *this = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_14 = this;
  uVar1 = FUN_1001e9d0();
  *this = uVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined1 *)(param_1 + 0x38) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = (undefined4 *)0x0;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)&DAT_1002d558;
  local_14 = (undefined4 *)0x1;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)&DAT_1002d558;
  local_14 = (undefined4 *)0x2;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)&DAT_1002d558;
  local_14 = (undefined4 *)0x6;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"In progress";
  local_14 = (undefined4 *)0x1f2;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Succeed";
  local_14 = (undefined4 *)0x1f3;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)&DAT_1002d574;
  local_14 = (undefined4 *)0x40;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Illegal command, ErrorCode=0x40";
  local_14 = (undefined4 *)0x41;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"UDP error, ErrorCode=0x41";
  local_14 = (undefined4 *)0x42;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Illegal command, ErrorCode=0x42";
  local_14 = (undefined4 *)0x43;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Illegal command address Or Write at a readOnly address, ErrorCode=0x43";
  local_14 = (undefined4 *)0x45;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Size of command data is oversize, ErrorCode=0x45";
  local_14 = (undefined4 *)0x46;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Invalid size of command data , ErrorCode=0x46";
  local_14 = (undefined4 *)0x47;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Invalid command, ErrorCode=0x47";
  local_14 = (undefined4 *)0x48;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Invalid command data, ErrorCode=0x48";
  local_14 = (undefined4 *)0x81;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Device hardware error, ErrorCode=0x81";
  local_14 = (undefined4 *)0x82;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Device memory error, ErrorCode=0x82";
  local_14 = (undefined4 *)0x1f4;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Timeout";
  local_14 = (undefined4 *)0x1f6;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"No this node in XML";
  local_14 = (undefined4 *)0x1fc;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"No register for the node";
  local_14 = (undefined4 *)0x1fb;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"XML Missing";
  local_14 = (undefined4 *)0x1f7;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Device not initialized yet";
  local_14 = (undefined4 *)0x1f8;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Verification fail";
  local_14 = (undefined4 *)0x1f9;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Invalid input";
  local_14 = (undefined4 *)0x1fd;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Bad protocal head";
  local_14 = (undefined4 *)0x1fe;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Undefined node in CSV";
  local_14 = (undefined4 *)0x1ff;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Device disconnected";
  local_14 = (undefined4 *)0x200;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"The sensor has stopped working due to high temperature";
  local_14 = (undefined4 *)0x201;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Communication error";
  local_14 = (undefined4 *)0x202;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Access denied";
  local_14 = (undefined4 *)0x3e9;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Fail to create a socket";
  local_14 = (undefined4 *)0x3ea;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Fail to bind ports";
  local_14 = (undefined4 *)0x3eb;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Fail to call \"SetupDiGetDeviceInterfaceDetail\"";
  local_14 = (undefined4 *)0x384;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Setting file missing";
  local_14 = (undefined4 *)0x385;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"Config file has wrong format";
  local_14 = (undefined4 *)0x386;
  piVar2 = FUN_1000b280(this,(int *)&local_14);
  *piVar2 = (int)"SI file has wrong format";
  ExceptionList = local_10;
  return param_1;
}








undefined4 * __fastcall FUN_10007fb0(undefined4 *param_1)

{
  undefined4 *this;
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a174;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 0;
  FUN_10006af0(param_1 + 10,0x708000,5,0,0);
  local_8._0_1_ = 1;
  FUN_10006af0(param_1 + 0x36,0x708000,5,0,0);
  param_1[0x70] = 0x5c28f5c3;
  param_1[0x71] = 0x3ff1c28f;
  param_1[0x72] = 0xc28f5c29;
  param_1[0x73] = 0xbfbc28f5;
  param_1[100] = 1;
  param_1[0x65] = 1;
  param_1[0x66] = 1;
  param_1[0x67] = 1;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0x3ff0000000000000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 1;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)((int)param_1 + 0x201) = 0;
  *(undefined1 *)((int)param_1 + 0x202) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  _Mtx_init_in_situ(param_1 + 0x8f,2,uVar1);
  this = param_1 + 0x9b;
  *this = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  _Mtx_init_in_situ(param_1 + 0x9e,2);
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  _Mtx_init_in_situ(param_1 + 200,2);
  *(undefined1 *)(param_1 + 0xd4) = 1;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined1 *)(param_1 + 0xd7) = 1;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined2 *)(param_1 + 0xda) = 1;
  _Mtx_init_in_situ(param_1 + 0xdb,2);
  local_8 = CONCAT31(local_8._1_3_,0x12);
  param_1[0xe7] = 0;
  local_14 = 0;
  FUN_10005e50(this,0x100,this,&local_14);
  *(undefined2 *)(param_1 + 99) = 1;
  ExceptionList = local_10;
  return param_1;
}









undefined4 * __thiscall FUN_10008360(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  uint uVar2;
  void *this_01;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a1f6;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = CStream::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined8 *)((int)this + 0x78) = 0;
  local_14 = this;
  _Mtx_init_in_situ((int)this + 0x80,2,uVar2);
  local_8 = 0;
  _Cnd_init_in_situ((int)this + 0xb0);
  *(undefined1 *)((int)this + 0xd8) = 1;
  *(undefined1 *)((int)this + 0xd9) = 1;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined2 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined8 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0x5c28f5c3;
  *(undefined4 *)((int)this + 0x194) = 0x3ff1c28f;
  *(undefined4 *)((int)this + 0x198) = 0xc28f5c29;
  *(undefined4 *)((int)this + 0x19c) = 0xbfbc28f5;
  this_00 = (undefined4 *)((int)this + 0x1cc);
  *(undefined4 *)((int)this + 0x1b0) = 1;
  *(undefined8 *)((int)this + 0x1a0) = 0x3ff0000000000000;
  *(undefined8 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  _Mtx_init_in_situ((int)this + 0x1d8,2);
  local_8._0_1_ = 5;
  if (param_1 == (undefined4 *)0x0) {
    *(undefined1 *)((int)this + 0xf0) = 1;
    this_01 = (void *)FUN_10028499(0xb0);
    local_8._0_1_ = 6;
    param_1 = FUN_10006af0(this_01,0x708000,5,1,0);
  }
  else {
    *(undefined1 *)((int)this + 0xf0) = 0;
  }
  local_8._0_1_ = 5;
  *(undefined4 **)((int)this + 0xe8) = param_1;
  *(undefined1 *)((int)this + 0x1b9) = 1;
  *(undefined4 *)((int)this + 0x1c0) = 0x3f;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  puVar1 = *(undefined4 **)((int)this + 0x1d0);
  local_1c = 0;
  local_18 = 0;
  if (*(undefined4 **)((int)this + 0x1d4) == puVar1) {
    FUN_10002a60(this_00,puVar1,&local_1c);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 8;
  }
  puVar1 = *(undefined4 **)((int)this + 0x1d0);
  local_24 = 1;
  local_20 = 0;
  if (*(undefined4 **)((int)this + 0x1d4) == puVar1) {
    FUN_10002a60(this_00,puVar1,&local_24);
  }
  else {
    *puVar1 = 1;
    puVar1[1] = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 8;
  }
  puVar1 = *(undefined4 **)((int)this + 0x1d0);
  local_2c = 2;
  local_28 = 0;
  if (*(undefined4 **)((int)this + 0x1d4) == puVar1) {
    FUN_10002a60(this_00,puVar1,&local_2c);
  }
  else {
    *puVar1 = 2;
    puVar1[1] = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 8;
  }
  puVar1 = *(undefined4 **)((int)this + 0x1d0);
  local_34 = 3;
  local_30 = 0;
  if (*(undefined4 **)((int)this + 0x1d4) == puVar1) {
    FUN_10002a60(this_00,puVar1,&local_34);
  }
  else {
    *puVar1 = 3;
    puVar1[1] = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 8;
  }
  puVar1 = *(undefined4 **)((int)this + 0x1d0);
  local_3c = 4;
  local_38 = 0;
  if (*(undefined4 **)((int)this + 0x1d4) == puVar1) {
    FUN_10002a60(this_00,puVar1,&local_3c);
  }
  else {
    *puVar1 = 4;
    puVar1[1] = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 8;
  }
  puVar1 = *(undefined4 **)((int)this + 0x1d0);
  local_44 = 5;
  local_40 = 0;
  if (*(undefined4 **)((int)this + 0x1d4) == puVar1) {
    FUN_10002a60(this_00,puVar1,&local_44);
  }
  else {
    *puVar1 = 5;
    puVar1[1] = 0;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 8;
  }
  ExceptionList = local_10;
  return this;
}









void __thiscall FUN_10008770(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_38;
  int local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a262;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  local_8 = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xf;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0xf;
  *(undefined1 *)((int)this + 100) = 0;
  _Mtx_init_in_situ((int)this + 0x80,2,local_14);
  local_8._0_1_ = 4;
  iVar3 = libusb_open(param_1,this);
  if (iVar3 == 0) {
    local_30 = 0;
    iVar3 = libusb_get_active_config_descriptor(param_1,&local_30);
    if (iVar3 == 0) {
      local_34 = 0;
      if (*(char *)(local_30 + 4) != '\0') {
        do {
          iVar3 = *(int *)(local_30 + 0xc);
          piVar5 = (int *)(iVar3 + local_34 * 8);
          local_38 = 0;
          if (0 < *(int *)(iVar3 + 4 + local_34 * 8)) {
            iVar10 = 0;
            do {
              iVar11 = 0;
              iVar8 = *piVar5 + iVar10;
              if (*(char *)(iVar8 + 4) != '\0') {
                iVar9 = 0;
                do {
                  iVar3 = *(int *)(iVar8 + 0xc) + iVar9;
                  if (((*(byte *)(iVar3 + 3) & 2) != 0) &&
                     (cVar1 = *(char *)(iVar3 + 2), cVar1 < '\0')) {
                    *(char *)((int)this + 4) = cVar1;
                  }
                  iVar11 = iVar11 + 1;
                  iVar9 = iVar9 + 0x14;
                  iVar3 = *(int *)(local_30 + 0xc);
                  iVar2 = *(int *)(iVar3 + local_34 * 8);
                  iVar8 = iVar2 + iVar10;
                } while (iVar11 < (int)(uint)*(byte *)(iVar2 + 4 + iVar10));
              }
              iVar10 = iVar10 + 0x18;
              piVar5 = (int *)(iVar3 + local_34 * 8);
              local_38 = local_38 + 1;
            } while (local_38 < piVar5[1]);
          }
          local_34 = local_34 + 1;
        } while (local_34 < (int)(uint)*(byte *)(local_30 + 4));
      }
      libusb_set_auto_detach_kernel_driver(*(undefined4 *)this,1);
      iVar3 = 0;
      if (*(char *)(local_30 + 4) != '\0') {
        do {
          libusb_claim_interface(*(undefined4 *)this,iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(byte *)(local_30 + 4));
      }
    }
    if (local_30 != 0) {
      libusb_free_config_descriptor(local_30);
    }
  }
  else {
    *(undefined4 *)this = 0;
    pcVar4 = (char *)libusb_error_name(iVar3);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_100243b0(local_2c,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
    local_8._0_1_ = 5;
    FUN_10019700(local_2c);
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}










undefined4 * __thiscall FUN_100089c0(void *this,undefined4 param_1)

{
  FUN_10008360(this,(undefined4 *)0x0);
  *(undefined4 *)((int)this + 0x208) = param_1;
  *(undefined ***)this = CUSBStream::vftable;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0xffffffff;
  _Mtx_init_in_situ((int)this + 0x21c,2);
  _Cnd_init_in_situ((int)this + 0x24c);
  *(undefined1 *)((int)this + 0x274) = 0;
  _Mtx_init_in_situ((int)this + 0x278,2);
  _Cnd_init_in_situ((int)this + 0x2a8);
  return this;
}











LPCWSTR __thiscall FUN_10008a50(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a2a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10007440(this,param_1);
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  local_8 = 1;
  iVar1 = FUN_10022cc0(this,param_2,(undefined4 *)((int)this + 0x18),
                       (LPWIN32_FIND_DATAW)((int)this + 0x1c));
  if (iVar1 == 0) {
    local_18 = CONCAT31(local_18._1_3_,1);
  }
  else {
    local_18 = (uint)local_18._1_3_ << 8;
    if (iVar1 != 0x12) {
      *(int *)((int)this + 0x270) = iVar1;
      goto LAB_10008acd;
    }
  }
  *(undefined4 *)((int)this + 0x270) = 0;
LAB_10008acd:
  *(int *)((int)this + 0x26c) = local_18;
  ExceptionList = local_10;
  return this;
}









undefined4 * __thiscall FUN_10008af0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a2d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)((int)this + 0x20);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 7;
  *(undefined2 *)piVar1 = 0;
  iVar2 = param_1[6];
  param_1[6] = -1;
  *(int *)((int)this + 0x38) = iVar2;
  local_8 = 1;
  if (piVar1 != param_1) {
    FUN_100237b0(piVar1);
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    *piVar1 = *param_1;
    *(int *)((int)this + 0x24) = iVar2;
    *(int *)((int)this + 0x28) = iVar3;
    *(int *)((int)this + 0x2c) = iVar4;
    *(undefined8 *)((int)this + 0x30) = *(undefined8 *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
  }
  FUN_10022f90(this,(uint *)(param_1 + 7));
  ExceptionList = local_10;
  return this;
}








int __fastcall FUN_10008ba0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = _Cnd_init(param_1 + 4,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  local_8 = 0;
  iVar1 = _Mtx_init((undefined4 *)(param_1 + 8),1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar1 = _Mtx_lock(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  ExceptionList = local_10;
  return param_1;
}









void __thiscall FUN_10008c50(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 ****ppppuVar2;
  undefined4 ***local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  uint uStack_54;
  undefined4 ***local_50;
  undefined1 local_4c;
  void *local_48;
  undefined4 ***local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a330;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = this;
  local_14 = uVar1;
  FUN_10007280(&local_68,param_3);
  local_48 = (void *)param_1;
  local_8 = 0;
  if (local_58 != 0) {
    FUN_10023f40(&local_68,&DAT_1002d380,2);
  }
  (**(code **)(*param_2 + 8))(local_2c,local_48,uVar1);
  ppppuVar2 = local_2c;
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10023f40(&local_68,ppppuVar2,local_1c);
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
    if (0xfff < local_18 + 1) {
      ppppuVar2 = (undefined4 ****)local_2c[0][-1];
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(ppppuVar2);
  }
  *(undefined ***)this = std::exception::vftable;
  uStack_30 = uStack_54;
  *(undefined8 *)((int)this + 4) = 0;
  local_44 = local_68;
  uStack_40 = uStack_64;
  uStack_3c = uStack_60;
  uStack_38 = uStack_5c;
  local_50 = &local_44;
  if (0xf < uStack_54) {
    local_50 = local_68;
  }
  local_58 = 0;
  uStack_54 = 0xf;
  local_68 = (undefined4 ***)((uint)local_68 & 0xffffff00);
  local_4c = 1;
  __std_exception_copy(&local_50,(int)this + 4);
  *(undefined ***)this = std::runtime_error::vftable;
  if (0xf < uStack_30) {
    ppppuVar2 = (undefined4 ****)local_44;
    if (0xfff < uStack_30 + 1) {
      ppppuVar2 = (undefined4 ****)local_44[-1];
      if (0x1f < (uint)((int)local_44 + (-4 - (int)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(ppppuVar2);
  }
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined ***)this = std::_System_error::vftable;
  *(int **)((int)this + 0x10) = param_2;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}










undefined4 * __thiscall FUN_10008e20(void *this,int param_1)

{
  *(undefined ***)this = std::exception::vftable;
  *(undefined8 *)((int)this + 4) = 0;
  __std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4));
  *(undefined ***)this = std::bad_cast::vftable;
  return this;
}











undefined4 * __fastcall FUN_10008e50(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}











undefined4 * __thiscall FUN_10008e70(void *this,int param_1)

{
  *(undefined ***)this = std::exception::vftable;
  *(undefined8 *)((int)this + 4) = 0;
  __std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4));
  return this;
}











undefined4 * __thiscall FUN_10008ea0(void *this,int param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a37e;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = std::exception::vftable;
  *(undefined8 *)((int)this + 4) = 0;
  __std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4),uVar1);
  *(undefined ***)this = std::_System_error::vftable;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  local_8 = 0;
  *(undefined ***)this = std::filesystem::filesystem_error::vftable;
  FUN_10007440((void *)((int)this + 0x14),(undefined4 *)(param_1 + 0x14));
  local_8._0_1_ = 1;
  FUN_10007440((void *)((int)this + 0x2c),(undefined4 *)(param_1 + 0x2c));
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10007280((void *)((int)this + 0x44),(undefined4 *)(param_1 + 0x44));
  ExceptionList = local_10;
  return this;
}











void __thiscall
FUN_10008f50(void *this,undefined4 *param_1,LPCWSTR param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  WCHAR local_2c [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a3c6;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10008c50(this,param_3,param_4,param_1);
  local_8 = 0;
  *(undefined ***)this = std::filesystem::filesystem_error::vftable;
  FUN_10007440((void *)((int)this + 0x14),(undefined4 *)param_2);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined8 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 7;
  *(undefined2 *)((int)this + 0x2c) = 0;
  local_2c[2] = L'\0';
  local_2c[3] = L'\0';
  local_2c[4] = L'\0';
  local_2c[5] = L'\0';
  local_2c[6] = L'\0';
  local_2c[7] = L'\0';
  local_2c[8] = L'\0';
  local_2c[9] = L'\0';
  local_2c[10] = L'\a';
  local_2c[0xb] = L'\0';
  local_2c[0] = L'\0';
  local_2c[1] = L'\0';
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar2 = "Unknown exception";
  if (*(char **)((int)this + 4) != (char *)0x0) {
    pcVar2 = *(char **)((int)this + 4);
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10022db0((undefined1 *)((int)this + 0x44),pcVar2,(int)pcVar3 - (int)(pcVar2 + 1),param_2,
               local_2c);
  FUN_100237b0((int *)local_2c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}












undefined4 * __thiscall FUN_10009040(void *this,undefined4 *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a40e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10008c50(this,param_2,param_3,param_1);
  *(undefined ***)this = std::filesystem::filesystem_error::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 7;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 7;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  pcVar3 = "Unknown exception";
  if (*(char **)((int)this + 4) != (char *)0x0) {
    pcVar3 = *(char **)((int)this + 4);
  }
  local_8 = 2;
  *(undefined1 *)((int)this + 0x44) = 0;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0((undefined1 *)((int)this + 0x44),pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  ExceptionList = local_10;
  return this;
}











undefined4 * __thiscall FUN_10009100(void *this,int param_1)

{
  *(undefined ***)this = std::exception::vftable;
  *(undefined8 *)((int)this + 4) = 0;
  __std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4));
  *(undefined ***)this = std::runtime_error::vftable;
  return this;
}











undefined4 * __thiscall FUN_10009130(void *this,int param_1)

{
  *(undefined ***)this = std::exception::vftable;
  *(undefined8 *)((int)this + 4) = 0;
  __std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4));
  *(undefined ***)this = std::_System_error::vftable;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = std::system_error::vftable;
  return this;
}










void __thiscall FUN_10009180(void *this,undefined4 param_1,int *param_2)

{
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a438;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,&DAT_1002d371,0);
  local_8 = 0;
  FUN_10008c50(this,param_1,param_2,local_2c);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  *(undefined ***)this = std::system_error::vftable;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}










void __fastcall FUN_10009250(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_1 = CCPUQueue<char>::vftable;
  if (param_1[1] != 0) {
    do {
      free(*(void **)(param_1[3] + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1]);
  }
  free((void *)param_1[3]);
  _Cnd_destroy_in_situ(param_1 + 0x21);
  _Mtx_destroy_in_situ(param_1 + 0x15);
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[8] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_100245c0(param_1 + 4);
  FUN_100284c9((void *)param_1[4]);
  *param_1 = CQueue<char>::vftable;
  return;
}










void __fastcall FUN_10009310(undefined4 *param_1)

{
  *param_1 = CQueue<char>::vftable;
  return;
}










void __fastcall FUN_10009320(undefined4 *param_1)

{
  *param_1 = CQueue<>::vftable;
  return;
}












void __fastcall FUN_10009330(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0xc) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}











void __fastcall FUN_10009390(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a460;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    FUN_100284c9(*(void **)(param_1 + 0x10));
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_8 = 0;
  iVar4 = _Mtx_unlock(uVar2,uVar3);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  ExceptionList = local_10;
  return;
}










void __fastcall FUN_10009410(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a460;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    FUN_100284c9(*(void **)(param_1 + 0x10));
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_8 = 0;
  iVar4 = _Mtx_unlock(uVar2,uVar3);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  ExceptionList = local_10;
  return;
}










void __fastcall FUN_10009490(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a460;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    FUN_100284c9(*(void **)(param_1 + 0x10));
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_8 = 0;
  iVar4 = _Mtx_unlock(uVar2,uVar3);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  ExceptionList = local_10;
  return;
}










void __fastcall FUN_10009510(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x48) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_100095e0(param_1 + 0x20);
  FUN_100095e0(param_1);
  return;
}











void __fastcall FUN_10009580(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x14);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x1c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}













void __fastcall FUN_100095e0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x14);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x1c) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_10009330(param_1);
  return;
}













void __fastcall FUN_10009640(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a480;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  local_8 = 0;
  iVar3 = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(char *)((int)*(int **)(iVar1 + 4) + 0xd) == '\0') {
    do {
      FUN_100214f0((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_100284c9(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  FUN_100284c9((void *)*param_1);
  ExceptionList = local_10;
  return;
}













void __fastcall FUN_100096e0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}












void __fastcall FUN_10009740(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}











void __fastcall FUN_100097a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_1002a480;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  iVar1 = *param_1;
  uStack_8 = 0;
  iVar3 = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(char *)((int)*(int **)(iVar1 + 4) + 0xd) == '\0') {
    do {
      FUN_100214f0((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_100284c9(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  FUN_100284c9((void *)*param_1);
  ExceptionList = pvStack_10;
  return;
}











void __fastcall FUN_100097b0(int *param_1)

{
  FUN_100245c0(param_1);
  FUN_100284c9((void *)*param_1);
  return;
}











void __fastcall FUN_100097d0(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a460;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  local_8 = 0;
  FUN_10021710(*(int **)(iVar1 + 4));
  *(int *)(*param_1 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  FUN_100284c9((void *)*param_1);
  ExceptionList = local_10;
  return;
}













void __fastcall FUN_10009840(int param_1)

{
  FUN_10023650((int *)(param_1 + 8));
  return;
}













void __fastcall FUN_10009850(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_100098d7;
    FUN_100284c9(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_100098d7:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}











void __fastcall FUN_100098e0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_10009ba0(param_1 + 6);
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}










void __fastcall FUN_10009940(int param_1)

{
  FUN_10023650((int *)(param_1 + 0x18));
  return;
}













void __fastcall FUN_10009950(int param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a4a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    puVar1 = (undefined4 *)
             (**(code **)(**(int **)(param_1 + 0xc) + 8))(DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}














void __fastcall FUN_100099a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x100099c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}














void __fastcall FUN_100099d0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a4c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 1) != '\0') {
    iVar1 = _Mtx_unlock(*param_1,DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}











void __fastcall FUN_10009a20(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_100284c9((void *)*param_1);
  }
  return;
}












void __fastcall FUN_10009a40(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_100284c9((void *)*param_1);
  }
  return;
}












void __fastcall FUN_10009a60(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_100284c9((void *)*param_1);
  }
  return;
}









void __fastcall FUN_10009a80(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  return;
}












void __fastcall FUN_10009a90(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(param_1[2] - (int)pvVar1)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}













void __fastcall FUN_10009ae0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}













void __fastcall FUN_10009b40(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffff0U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}












void __fastcall FUN_10009ba0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    FUN_10002450((int *)*param_1,(int *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x18) * 0x18)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}











void __fastcall FUN_10009c20(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    FUN_100024c0((int *)*param_1,(int *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0xc) * 0xc)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}












void __fastcall FUN_10009cc0(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int local_4;
  
  *param_1 = CCorrectionBase::vftable;
  local_4 = *(int *)param_1[3];
  if ((int *)local_4 != (int *)param_1[3]) {
    do {
      free(*(void **)(local_4 + 0x14));
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_4);
    } while (local_4 != param_1[3]);
  }
  FUN_100245c0(param_1 + 3);
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(param_1[0x19] - (int)pvVar1)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_10009e45;
    FUN_100284c9(pvVar2);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x13] - (int)pvVar1 & 0xfffffffeU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_10009e45;
    FUN_100284c9(pvVar2);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x10] - (int)pvVar1 & 0xfffffffeU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_10009e45;
    FUN_100284c9(pvVar2);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0xd] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_10009e45:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_100245c0(param_1 + 3);
  FUN_100284c9((void *)param_1[3]);
  return;
}








void __fastcall FUN_10009e50(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x35c) = 1;
  if (*(int *)(param_1 + 0x364) != 0) {
    FUN_10025060((undefined4 *)(param_1 + 0x360));
  }
  *(undefined1 *)(param_1 + 0x350) = 1;
  if (*(int *)(param_1 + 0x358) != 0) {
    FUN_10025060((undefined4 *)(param_1 + 0x354));
  }
  if (*(FILE **)(param_1 + 0x310) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x310));
  }
  if (*(FILE **)(param_1 + 0x314) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x314));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2 != 0) {
    do {
      free(*(void **)(*(int *)(param_1 + 0x18) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2));
  }
  _Mtx_destroy_in_situ(param_1 + 0x36c);
  if (*(int *)(param_1 + 0x364) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if (*(int *)(param_1 + 0x358) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  _Mtx_destroy_in_situ(param_1 + 800);
  FUN_10009c20((int *)(param_1 + 0x2e8));
  pvVar1 = *(void **)(param_1 + 0x2dc);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x2e4) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x2d0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x2d8) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x2c4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x2cc) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x2b4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 700) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x2a8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(*(int *)(param_1 + 0x2b0) - (int)pvVar1)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  _Mtx_destroy_in_situ(param_1 + 0x278);
  pvVar1 = *(void **)(param_1 + 0x26c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x274) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x26c) = 0;
    *(undefined4 *)(param_1 + 0x270) = 0;
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  _Mtx_destroy_in_situ(param_1 + 0x23c);
  pvVar1 = *(void **)(param_1 + 0x230);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x238) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x220);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x228) - (int)pvVar1 & 0xfffffff0U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x214);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x21c) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a303;
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  FUN_10009250((undefined4 *)(param_1 + 0xd8));
  FUN_10009250((undefined4 *)(param_1 + 0x28));
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x20) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_1000a303:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  ExceptionList = local_10;
  return;
}










void __fastcall FUN_1000a310(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a500;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CStream::vftable;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  if (param_1[0x39] != 0) {
    FUN_10025060(param_1 + 0x38);
  }
  if (param_1[0x3f] != 0) {
    FUN_10025060(param_1 + 0x3e);
  }
  if ((*(char *)(param_1 + 0x3c) != '\0') && ((undefined4 *)param_1[0x3a] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x3a])(1,uVar2);
  }
  if ((void *)param_1[0x3b] != (void *)0x0) {
    free((void *)param_1[0x3b]);
  }
  if ((FILE *)param_1[0x40] != (FILE *)0x0) {
    fclose((FILE *)param_1[0x40]);
  }
  _Mtx_destroy_in_situ(param_1 + 0x76);
  pvVar1 = (void *)param_1[0x73];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (param_1[0x75] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar3);
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
  }
  if (param_1[0x3f] != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if (param_1[0x39] == 0) {
    _Cnd_destroy_in_situ(param_1 + 0x2c);
    _Mtx_destroy_in_situ(param_1 + 0x20);
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}










void __fastcall FUN_1000a470(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a520;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CUSBCorrection::vftable;
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1,uVar3);
  }
  if (param_1[0x27] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x27] + 0x20);
    iVar2 = *piVar1 + -1;
    *piVar1 = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      FUN_1001f7f0((undefined4 *)param_1[0x27],(undefined4 *)0x0);
    }
  }
  param_1[0x27] = 0;
  local_8 = 0;
  if ((int *)param_1[0x2b] != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0x2b] + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  if (param_1[0x22] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x22] + 0x20);
    iVar2 = *piVar1 + -1;
    *piVar1 = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      FUN_1001f7f0((undefined4 *)param_1[0x22],(undefined4 *)0x0);
    }
  }
  param_1[0x22] = 0;
  local_8 = 1;
  if ((int *)param_1[0x26] != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0x26] + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  if (param_1[0x1d] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1d] + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_1001f7f0((undefined4 *)param_1[0x1d],(undefined4 *)0x0);
    }
  }
  param_1[0x1d] = 0;
  local_8 = 2;
  if ((int *)param_1[0x21] != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0x21] + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  FUN_10009cc0(param_1);
  ExceptionList = local_10;
  return;
}










void __fastcall FUN_1000a5b0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*param_1 != 0) {
    libusb_close(*param_1);
  }
  _Mtx_destroy_in_situ(param_1 + 0x20);
  if (0xf < (uint)param_1[0x1e]) {
    pvVar1 = (void *)param_1[0x19];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x1e] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a6e0;
    FUN_100284c9(pvVar2);
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xf;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (0xf < (uint)param_1[0x13]) {
    pvVar1 = (void *)param_1[0xe];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x13] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a6e0;
    FUN_100284c9(pvVar2);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (0xf < (uint)param_1[0xd]) {
    pvVar1 = (void *)param_1[8];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xd] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_1000a6e0;
    FUN_100284c9(pvVar2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  if (0xf < (uint)param_1[7]) {
    pvVar1 = (void *)param_1[2];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_1000a6e0:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}












void __fastcall FUN_1000a6f0(int param_1)

{
  cv::Mat::~Mat((Mat *)(param_1 + 0x78));
  cv::Mat::~Mat((Mat *)(param_1 + 0x40));
  cv::Mat::~Mat((Mat *)(param_1 + 8));
  return;
}











void __fastcall FUN_1000a710(char *param_1)

{
  if (*param_1 != '\0') {
    _Cnd_destroy(*(undefined4 *)(param_1 + 4));
  }
  return;
}












void __fastcall FUN_1000a720(char *param_1)

{
  if (*param_1 != '\0') {
    _Mtx_destroy(*(undefined4 *)(param_1 + 4));
  }
  return;
}












void __fastcall FUN_1000a730(int *param_1)

{
  ___std_fs_directory_iterator_close@4((HANDLE)param_1[6]);
  FUN_100237b0(param_1);
  return;
}












void __fastcall FUN_1000a750(undefined4 *param_1)

{
  ___std_fs_directory_iterator_close@4((HANDLE)*param_1);
  return;
}













void __fastcall FUN_1000a760(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}













void __fastcall FUN_1000a780(undefined4 param_1)

{
  _Cnd_destroy_in_situ(param_1);
  return;
}















void __fastcall FUN_1000a790(int param_1)

{
  FUN_100237b0((int *)(param_1 + 0x20));
  return;
}
















void __fastcall FUN_1000a7a0(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0x16]) {
    pvVar1 = (void *)param_1[0x11];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x16] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0xf;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_100237b0(param_1 + 0xb);
  FUN_100237b0(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}















void __fastcall FUN_1000a810(int param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a4c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    puVar1 = (undefined4 *)
             (**(code **)(**(int **)(param_1 + 4) + 8))(DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}














void __fastcall FUN_1000a860(undefined4 param_1)

{
  _Mtx_destroy_in_situ(param_1);
  return;
}















void __fastcall FUN_1000a870(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000a876. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    terminate();
    return;
  }
  return;
}

















undefined4 * __thiscall FUN_1000a880(void *this,undefined4 *param_1)

{
  void *_Src;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *this_00;
  undefined4 *puVar7;
  uint uVar8;
  size_t sVar9;
  
  puVar4 = param_1;
  *(undefined4 *)this = *param_1;
  FUN_1000ab80((void *)((int)this + 4),param_1 + 1);
  puVar7 = puVar4 + 5;
  this_00 = (undefined4 *)((int)this + 0x14);
  if (this_00 != puVar7) {
    iVar1 = puVar4[6];
    pvVar2 = (void *)*puVar7;
    pvVar3 = (void *)*this_00;
    sVar9 = iVar1 - (int)pvVar2;
    uVar6 = *(int *)((int)this + 0x1c) - (int)pvVar3 >> 3;
    uVar5 = *(int *)((int)this + 0x18) - (int)pvVar3 >> 3;
    uVar8 = (int)sVar9 >> 3;
    if (uVar6 < uVar8) {
      if (0x1fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_10023b50();
      }
      uVar5 = uVar8;
      if ((uVar6 <= 0x1fffffff - (uVar6 >> 1)) && (uVar5 = (uVar6 >> 1) + uVar6, uVar5 < uVar8)) {
        uVar5 = uVar8;
      }
      if (pvVar3 != (void *)0x0) {
        FUN_10024720(pvVar3,uVar6);
      }
      FUN_1001e980(this_00,uVar5);
      pvVar3 = (void *)*this_00;
      FUN_10005070((undefined1 *)&param_1);
      memmove(pvVar3,pvVar2,sVar9);
      *(size_t *)((int)this + 0x18) = (int)pvVar3 + sVar9;
      return this;
    }
    if (uVar5 < uVar8) {
      sVar9 = uVar5 * 8;
      _Src = (void *)(sVar9 + (int)pvVar2);
      memmove(pvVar3,pvVar2,sVar9);
      pvVar2 = *(void **)((int)this + 0x18);
      FUN_10005070((undefined1 *)&param_1);
      sVar9 = iVar1 - (int)_Src;
      memmove(pvVar2,_Src,sVar9);
      *(size_t *)((int)this + 0x18) = (int)pvVar2 + sVar9;
      return this;
    }
    memmove(pvVar3,pvVar2,sVar9);
    *(void **)((int)this + 0x18) = (void *)(uVar8 * 8 + (int)pvVar3);
  }
  return this;
}
















undefined4 * __thiscall FUN_1000a9d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar1 = param_1;
  *(undefined4 *)this = *param_1;
  FUN_1000ab80((void *)((int)this + 4),param_1 + 1);
  puVar6 = puVar1 + 5;
  puVar4 = (undefined4 *)((int)this + 0x14);
  if (puVar4 != puVar6) {
    puVar1 = (undefined4 *)puVar1[6];
    puVar6 = (undefined4 *)*puVar6;
    _Dst = (void *)*puVar4;
    uVar5 = (int)puVar1 - (int)puVar6 >> 3;
    uVar3 = *(int *)((int)this + 0x1c) - (int)_Dst >> 3;
    uVar2 = *(int *)((int)this + 0x18) - (int)_Dst >> 3;
    if (uVar3 < uVar5) {
      if (uVar5 < 0x20000000) {
        param_1 = (undefined4 *)(uVar3 >> 1);
        uVar2 = uVar5;
        if ((uVar3 <= 0x1fffffffU - (int)param_1) &&
           (uVar2 = (int)param_1 + uVar3, (int)param_1 + uVar3 < uVar5)) {
          uVar2 = uVar5;
        }
        if (_Dst != (void *)0x0) {
          FUN_10024720(_Dst,uVar3);
        }
        FUN_1001e980(puVar4,uVar2);
        puVar4 = (undefined4 *)*puVar4;
        for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
          *puVar4 = *puVar6;
          puVar4[1] = puVar6[1];
          puVar4 = puVar4 + 2;
        }
        *(undefined4 **)((int)this + 0x18) = puVar4;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10023b50();
    }
    if (uVar2 < uVar5) {
      FUN_10005070((undefined1 *)&param_1);
      memmove(_Dst,puVar6,uVar2 * 8);
      puVar4 = *(undefined4 **)((int)this + 0x18);
      for (puVar6 = puVar6 + uVar2 * 2; puVar6 != puVar1; puVar6 = puVar6 + 2) {
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4 = puVar4 + 2;
      }
      *(undefined4 **)((int)this + 0x18) = puVar4;
      return this;
    }
    FUN_10005070((undefined1 *)&param_1);
    memmove(_Dst,puVar6,(int)puVar1 - (int)puVar6);
    *(void **)((int)this + 0x18) = (void *)((int)_Dst + uVar5 * 8);
  }
  return this;
}














undefined8 __thiscall FUN_1000ab40(void *this,undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar2 = *(int *)this;
    LOCK();
    lVar1 = *(longlong *)this;
    if (*(longlong *)this == lVar1) {
      *(ulonglong *)this = CONCAT44(param_2,param_1);
      iVar3 = iVar2;
      iVar4 = *(int *)((int)this + 4);
    }
    else {
      iVar3 = (int)lVar1;
      iVar4 = (int)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
  } while ((iVar2 != iVar3) || (*(int *)((int)this + 4) != iVar4));
  return CONCAT44(param_2,param_1);
}













undefined4 * __thiscall FUN_1000ab80(void *this,undefined4 *param_1)

{
  void *_Src;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  undefined1 local_9;
  void *local_8;
  int local_4;
  
  if (this != param_1) {
    local_4 = param_1[1];
    local_8 = (void *)*param_1;
    pvVar2 = *(void **)this;
    sVar5 = local_4 - (int)local_8;
    uVar3 = *(int *)((int)this + 8) - (int)pvVar2 >> 2;
    uVar1 = *(int *)((int)this + 4) - (int)pvVar2 >> 2;
    uVar4 = (int)sVar5 >> 2;
    if (uVar3 < uVar4) {
      if (0x3fffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_10023b50();
      }
      uVar1 = uVar4;
      if ((uVar3 <= 0x3fffffff - (uVar3 >> 1)) && (uVar1 = (uVar3 >> 1) + uVar3, uVar1 < uVar4)) {
        uVar1 = uVar4;
      }
      if (pvVar2 != (void *)0x0) {
        FUN_100246e0(pvVar2,uVar3);
      }
      FUN_1001e930(this,uVar1);
      pvVar2 = *(void **)this;
      FUN_10005070(&local_9);
      memmove(pvVar2,local_8,sVar5);
      pvVar2 = (void *)((int)pvVar2 + sVar5);
    }
    else if (uVar1 < uVar4) {
      sVar5 = uVar1 * 4;
      _Src = (void *)(sVar5 + (int)local_8);
      memmove(pvVar2,local_8,sVar5);
      pvVar2 = *(void **)((int)this + 4);
      FUN_10005070(&local_9);
      sVar5 = local_4 - (int)_Src;
      memmove(pvVar2,_Src,sVar5);
      pvVar2 = (void *)((int)pvVar2 + sVar5);
    }
    else {
      memmove(pvVar2,local_8,sVar5);
      pvVar2 = (void *)(uVar4 * 4 + (int)pvVar2);
    }
    *(void **)((int)this + 4) = pvVar2;
    *(undefined4 *)((int)this + 0xc) = param_1[3];
  }
  return this;
}












undefined4 * __thiscall
FUN_1000aca0(void *this,undefined4 *param_1,int *param_2,ushort *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *p_Var3;
  undefined4 *puVar4;
  bool bVar5;
  uint uStack_30;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a540;
  local_10 = ExceptionList;
  uStack_30 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_1000afe0(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    if (*param_3 < *(ushort *)(param_2 + 4)) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_1000afe0(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    local_14 = (undefined1 *)&uStack_30;
    if (*(ushort *)((undefined4 *)piVar2[2] + 4) < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_1000afe0(this,param_1,'\0',(undefined4 *)piVar2[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    bVar5 = *(ushort *)(param_2 + 4) < *param_3;
    puVar1 = &uStack_30;
    if (*param_3 < *(ushort *)(param_2 + 4)) {
      local_18 = param_2;
      piVar2 = FUN_1000b660((int *)&local_18);
      if (*(ushort *)(*piVar2 + 0x10) < *param_3) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_1000afe0(this,param_1,'\0',local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_1000afe0(this,param_1,'\x01',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar5 = *(ushort *)(param_2 + 4) < *param_3;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (bVar5) {
      local_18 = param_2;
      p_Var3 = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_18);
      if ((*(int *)p_Var3 == *(int *)this) || (*param_3 < *(ushort *)(local_18 + 4))) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_1000afe0(this,param_1,'\0',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_1000afe0(this,param_1,'\x01',local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_1000aec0(this,&local_20,'\0',param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}













void __thiscall
FUN_1000aec0(void *this,undefined4 *param_1,char param_2,ushort *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar3 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar1[1];
    do {
      piVar3 = piVar1;
      if (param_2 == '\0') {
        local_18 = *param_3 < *(ushort *)(piVar3 + 4);
      }
      else {
        local_18 = *param_3 <= *(ushort *)(piVar3 + 4);
      }
      if (local_18 == false) {
        piVar1 = (int *)piVar3[2];
      }
      else {
        piVar1 = (int *)*piVar3;
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    piVar1 = *(int **)this;
  }
  _param_2 = piVar3;
  if (local_18 != false) {
    if (piVar3 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_1000af54;
    }
    FUN_1000b660((int *)&param_2);
  }
  piVar1 = _param_2;
  if (*param_3 <= *(ushort *)(_param_2 + 4)) {
    FUN_1001f6b0(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_1000af54:
  puVar2 = (undefined4 *)FUN_1000afe0(this,(undefined4 *)&param_2,local_18,piVar3,param_3,param_4);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}














void __thiscall
FUN_1000afe0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
    FUN_1001f6b0(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_1000b0cb;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_100221c0(this,(int)piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_1000b13f:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100230c0(this,piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_1000b13f;
      }
LAB_1000b0cb:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}














ushort * __thiscall FUN_1000b180(void *this,ushort *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort *local_4;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if (*(ushort *)(piVar2 + 4) < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && (*(ushort *)(piVar3 + 4) <= *param_1)) {
      return (ushort *)(piVar3 + 5);
    }
  }
  local_4 = param_1;
  piVar2 = (int *)FUN_10001a80(this,"",&local_4);
  FUN_10003680(this,&param_1,piVar3,(ushort *)(piVar2 + 4),piVar2);
  return param_1 + 10;
}














ushort * __thiscall FUN_1000b200(void *this,ushort *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort *local_4;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if (*(ushort *)(piVar2 + 4) < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && (*(ushort *)(piVar3 + 4) <= *param_1)) {
      return (ushort *)(piVar3 + 5);
    }
  }
  local_4 = param_1;
  piVar2 = (int *)FUN_10001b20(this,"",&local_4);
  FUN_1000aca0(this,&param_1,piVar3,(ushort *)(piVar2 + 4),piVar2);
  return param_1 + 10;
}















int * __thiscall FUN_1000b280(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_4;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if (piVar2[4] < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && (piVar3[4] <= *param_1)) {
      return piVar3 + 5;
    }
  }
  local_4 = param_1;
  piVar2 = (int *)FUN_100019b0(this,"",&local_4);
  FUN_100038a0(this,&param_1,piVar3,piVar2 + 4,piVar2);
  return param_1 + 5;
}













uint * __thiscall FUN_1000b300(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *local_4;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if ((uint)piVar2[4] < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && ((uint)piVar3[4] <= *param_1)) {
      return (uint *)(piVar3 + 5);
    }
  }
  local_4 = param_1;
  piVar2 = (int *)FUN_100019b0(this,"",&local_4);
  FUN_100041b0(this,&param_1,piVar3,(uint *)(piVar2 + 4),piVar2);
  return param_1 + 5;
}













uint * __thiscall FUN_1000b380(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *local_4;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if ((uint)piVar2[4] < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && ((uint)piVar3[4] <= *param_1)) {
      return (uint *)(piVar3 + 5);
    }
  }
  local_4 = param_1;
  piVar2 = (int *)FUN_10001bc0(this,"",&local_4);
  FUN_100041b0(this,&param_1,piVar3,(uint *)(piVar2 + 4),piVar2);
  return param_1 + 5;
}















byte * __thiscall FUN_1000b400(void *this,byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *local_4;
  
  pbVar1 = param_1;
  local_4 = this;
  FUN_100250d0(this,(int *)&param_1,param_1);
  pbVar2 = param_1;
  if (param_1 != *(byte **)this) {
    pbVar3 = param_1 + 0x10;
    if (0xf < *(uint *)(param_1 + 0x24)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pbVar6 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar6 = *(byte **)pbVar1;
    }
    uVar4 = FUN_100065c0(pbVar6,*(uint *)(pbVar1 + 0x10),pbVar3,*(uint *)(param_1 + 0x20));
    if (-1 < (int)uVar4) {
      return pbVar2 + 0x28;
    }
  }
  local_4 = pbVar1;
  piVar5 = (int *)FUN_10001a20(this,"",&local_4);
  FUN_10003d10(this,&param_1,(int *)pbVar2,(byte *)(piVar5 + 4),piVar5);
  return param_1 + 0x28;
}















byte * __thiscall FUN_1000b490(void *this,byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *local_4;
  
  pbVar1 = param_1;
  local_4 = this;
  FUN_100250d0(this,(int *)&param_1,param_1);
  pbVar2 = param_1;
  if (param_1 != *(byte **)this) {
    pbVar3 = param_1 + 0x10;
    if (0xf < *(uint *)(param_1 + 0x24)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pbVar6 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar6 = *(byte **)pbVar1;
    }
    uVar4 = FUN_100065c0(pbVar6,*(uint *)(pbVar1 + 0x10),pbVar3,*(uint *)(param_1 + 0x20));
    if (-1 < (int)uVar4) {
      return pbVar2 + 0x28;
    }
  }
  local_4 = pbVar1;
  piVar5 = (int *)FUN_10001be0(this,"",&local_4);
  FUN_10003f60(this,&param_1,(int *)pbVar2,(byte *)(piVar5 + 4),piVar5);
  return param_1 + 0x28;
}















Mat * __thiscall FUN_1000b520(void *this,Mat *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a599;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cv::Mat::Mat(param_1);
  local_8 = 0;
  (**(code **)(**(int **)this + 8))(this,param_1,0xffffffff,uVar1);
  ExceptionList = local_10;
  return param_1;
}


















undefined4 * __fastcall FUN_1000b5f0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((undefined4 *)param_1[6])[1];
  if (*(char **)param_1[6] == pcVar2) {
    if (pcVar2 == (char *)param_1[1]) goto LAB_1000b64b;
    cVar1 = FUN_10005320(pcVar2,(char *)param_1[1],param_1 + 4,(int *)param_1[2],param_1[3] | 0x60,
                         *param_1);
    if (cVar1 != '\0') {
      return param_1;
    }
    pcVar2 = pcVar2 + 1;
  }
  param_1[3] = param_1[3] | 0x100;
  cVar1 = FUN_10005320(pcVar2,(char *)param_1[1],param_1 + 4,(int *)param_1[2],param_1[3],*param_1);
  if (cVar1 != '\0') {
    return param_1;
  }
LAB_1000b64b:
  param_1[2] = 0;
  return param_1;
}













int * __fastcall FUN_1000b660(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}













longlong __fastcall FUN_1000b6e0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar2 = (int)*param_1;
    iVar3 = *(int *)((int)param_1 + 4);
    lVar4 = *param_1;
    LOCK();
    lVar1 = *param_1;
    if (*param_1 == lVar1) {
      *param_1 = CONCAT44(iVar3 - (uint)(iVar2 == 0),iVar2 + -1);
      iVar5 = iVar2;
      iVar6 = iVar3;
    }
    else {
      iVar5 = (int)lVar1;
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
  } while ((iVar2 != iVar5) || (iVar3 != iVar6));
  return lVar4;
}














void __thiscall FUN_1000b720(void *this,int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_2 < 0) && (uVar1 < (uint)-param_2)) {
    *param_1 = *(int *)this + (~(uVar1 + param_2) >> 5) * -4 + -4;
    param_1[1] = uVar1 + param_2 & 0x1f;
    return;
  }
  *param_1 = *(int *)this + (uVar1 + param_2 >> 5) * 4;
  param_1[1] = uVar1 + param_2 & 0x1f;
  return;
}














int * FUN_1000b780(int *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 6;
  }
  FUN_10002450(param_1,param_1);
  return param_1;
}















void FUN_1000b7c0(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}

















void __thiscall FUN_1000b7f0(void *this,ushort param_1)

{
  char cVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  DWORD_PTR dwThreadAffinityMask;
  HANDLE hThread;
  int iVar5;
  uint *puVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  void *pvVar11;
  int *piVar12;
  uint uVar13;
  size_t _Count;
  void *local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 local_54;
  int local_50;
  undefined1 local_4c;
  void *local_48;
  undefined4 local_44;
  int local_40;
  ushort *local_3c;
  int local_38;
  uint *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  undefined2 *local_20;
  void *local_1c;
  ushort *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a5ea;
  local_10 = ExceptionList;
  uVar4 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dwThreadAffinityMask = 1 << ((char)**(undefined2 **)this + 4U & 0x1f);
  local_1c = this;
  hThread = GetCurrentThread();
  SetThreadAffinityMask(hThread,dwThreadAffinityMask);
  local_64 = (void *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_8 = 0;
  local_20 = (undefined2 *)0x0;
  local_2c = 0;
  local_30 = 0;
  if (*(char *)(*(int *)((int)this + 4) + 0x35c) == '\0') {
    do {
      local_58 = *(undefined4 *)((int)this + 8);
      iVar5 = _Mtx_lock(local_58,uVar4);
      if (iVar5 != 0) {
        std::_Throw_C_error(iVar5);
      }
      local_54 = 1;
      local_8._0_1_ = 1;
      local_11 = *(char *)(*(int *)((int)this + 4) + 0x202);
      while( true ) {
        pvVar11 = (void *)**(undefined4 **)((int)this + 4);
        puVar6 = (uint *)(**(code **)(**(int **)((int)pvVar11 + 0xe8) + 0x14))(0,1);
        if (puVar6 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          iVar5 = (int)pvVar11 + 0x80;
          local_50 = iVar5;
          iVar7 = _Mtx_lock(iVar5);
          if (iVar7 != 0) {
            std::_Throw_C_error(iVar7);
          }
          local_4c = 1;
          cVar1 = *(char *)((int)puVar6 + 0x26);
          local_8._0_1_ = 2;
          while ((cVar1 == '\0' && (iVar5 = local_50, *(char *)((int)pvVar11 + 0xd8) == '\0'))) {
            iVar7 = _Cnd_wait((int)pvVar11 + 0xb0,local_50);
            if (iVar7 != 0) {
              std::_Throw_C_error(iVar7);
            }
            cVar1 = *(char *)((int)puVar6 + 0x26);
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          iVar5 = _Mtx_unlock(iVar5);
          if (iVar5 != 0) {
            std::_Throw_C_error(iVar5);
          }
          local_8._0_1_ = 1;
          this = local_1c;
          if (*(char *)((int)puVar6 + 0x26) != '\x02') {
            (**(code **)(**(int **)((int)pvVar11 + 0xe8) + 0x20))(puVar6);
            puVar6 = (uint *)FUN_10010030(pvVar11,0,0,1);
            this = local_1c;
          }
        }
        local_34 = puVar6;
        if (puVar6 == (uint *)0x0) {
          local_8 = CONCAT31(local_8._1_3_,4);
          iVar5 = _Mtx_unlock(local_58);
          if (iVar5 != 0) {
            std::_Throw_C_error(iVar5);
          }
          goto LAB_1000bd25;
        }
        puVar8 = (ushort *)(**(code **)(*(int *)(*(int *)((int)this + 4) + 0xd8) + 0xc))(&local_2c);
        piVar12 = *(int **)((int)this + 4);
        if (puVar8 == (ushort *)0x0) {
          puVar8 = *(ushort **)(piVar12[6] + (uint)param_1 * 4);
        }
        local_18 = puVar8;
        if (local_11 != '\0') {
          local_20 = (undefined2 *)(**(code **)(piVar12[10] + 0xc))(&local_30);
          piVar12 = *(int **)((int)this + 4);
        }
        puVar2 = *(ushort **)(piVar12[6] + (uint)param_1 * 4);
        if ((puVar8 != puVar2) || (local_20 != (undefined2 *)0x0)) break;
        (**(code **)(**(int **)(*piVar12 + 0xe8) + 0x20))(puVar6);
      }
      local_24 = *(int **)((int)this + 4);
      if (puVar8 != puVar2) {
        local_24 = piVar12;
      }
      if (local_11 == '\0') {
LAB_1000ba3b:
        **(int **)((int)this + 0x10) = (int)puVar8;
      }
      else {
        uVar13 = *puVar6;
        iVar5 = FUN_10012dc0(uVar13);
        FUN_1001c0f0(local_24,(uint)param_1,
                     (int)((longlong)(ulonglong)(uVar13 >> 0x10 & 0xff) / (longlong)iVar5),
                     (int *)&local_64);
        puVar8 = local_18;
        this = local_1c;
        if (local_20 != (undefined2 *)0x0) {
          **(int **)((int)local_1c + 0xc) = (int)local_20;
          goto LAB_1000ba3b;
        }
      }
      *(uint **)(*(int *)((int)this + 4) + 0xc) = puVar6;
      *(short *)(*(int *)((int)this + 4) + 8) = (short)puVar6[9];
      *(uint *)(*(int *)((int)this + 4) + 0x1b0) = puVar6[3];
      *(uint *)(*(int *)((int)this + 4) + 0x1b4) = puVar6[4];
      *(uint *)(*(int *)((int)this + 4) + 0x1e0) = puVar6[0xb];
      iVar5 = *(int *)((int)this + 4);
      if ((*(int *)(iVar5 + 0x1e4) != *(int *)(iVar5 + 0x1e0)) &&
         (*(undefined4 *)(iVar5 + 0x1e4) = *(undefined4 *)(iVar5 + 0x1e0),
         1 < *(uint *)(iVar5 + 0x19c))) {
        *(undefined4 *)(iVar5 + 0x1a4) = 0;
        (**(code **)(**(int **)(iVar5 + 0x188) + 0x28))();
      }
      local_24 = *(int **)((int)this + 4);
      if (*(int *)((int)local_24 + 0x198) != *(int *)((int)local_24 + 0x19c)) {
        *(undefined4 *)((int)local_24 + 0x1a4) = 0;
        *(uint *)((int)local_24 + 0x19c) = *(uint *)((int)local_24 + 0x198);
        if (1 < *(uint *)((int)local_24 + 0x198)) {
          if (*(undefined4 **)((int)local_24 + 0x188) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)((int)local_24 + 0x188))(1);
          }
          local_48 = (void *)FUN_10028499(0xb0);
          local_8._0_1_ = 5;
          puVar9 = FUN_10006c90(local_48,*(int *)((int)local_24 + 0x204) << 2,
                                *(int *)((int)local_24 + 0x19c) + 2,1,0);
          *(undefined4 **)((int)local_24 + 0x188) = puVar9;
        }
      }
      iVar5 = *(int *)((int)this + 4);
      if (*(int *)(iVar5 + 400) != *(int *)(iVar5 + 0x194)) {
        *(undefined4 *)(iVar5 + 0x194) = *(undefined4 *)(iVar5 + 400);
      }
      local_28 = *(uint *)(*(int *)((int)this + 4) + 0x1e0);
      local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)((int)puVar6 + 0x29));
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar5 = _Mtx_unlock(local_58);
      if (iVar5 != 0) {
        std::_Throw_C_error(iVar5);
      }
      local_8 = local_8 & 0xffffff00;
      uVar10 = FUN_1000d4c0(*(void **)((int)this + 4),(int *)&local_34,
                            (void *)**(undefined4 **)((int)this + 0x14),puVar8);
      if ((char)uVar10 != '\0') {
        FUN_1000ccc0(*(void **)((int)this + 4),(int)puVar8,**(int **)((int)this + 0x18));
        FUN_1000e720(*(void **)((int)this + 4),(int)puVar8,local_28);
        iVar5 = *(int *)((int)this + 4);
        local_40 = iVar5 + 800;
        local_38 = iVar5;
        iVar7 = _Mtx_lock(local_40);
        if (iVar7 != 0) {
          std::_Throw_C_error(iVar7);
        }
        if (*(int *)(iVar5 + 0x310) != 0) {
          local_3c = puVar8 + 9;
          local_28 = *(uint *)(puVar8 + 1);
          local_24 = *(int **)(puVar8 + 3);
          uVar13 = *(uint *)(puVar8 + 5);
          iVar5 = FUN_10012dc0(uVar13);
          iVar7 = FUN_10012dc0(uVar13);
          _Count = iVar5 * (int)local_24 * local_28;
          if (8 < (int)((longlong)(ulonglong)(uVar13 >> 0x10 & 0xff) / (longlong)iVar7)) {
            _Count = _Count * 2;
          }
          uVar13 = (int)(_Count * 2) >> 0x1f;
          puVar8 = local_18;
          if ((uVar13 <= *(uint *)(local_38 + 0x304)) &&
             ((uVar13 < *(uint *)(local_38 + 0x304) || (_Count * 2 < *(uint *)(local_38 + 0x300)))))
          {
            puVar6 = (uint *)(local_38 + 0x318);
            uVar13 = *puVar6;
            *puVar6 = *puVar6 + 1;
            *(int *)(local_38 + 0x31c) = *(int *)(local_38 + 0x31c) + (uint)(0xfffffffe < uVar13);
            fwrite(local_3c,1,_Count,*(FILE **)(local_38 + 0x310));
            puVar8 = local_18;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,7);
        iVar5 = _Mtx_unlock(local_40);
        if (iVar5 != 0) {
          std::_Throw_C_error(iVar5);
        }
        iVar5 = *(int *)((int)this + 4);
        local_8 = local_8 & 0xffffff00;
        if (puVar8 != *(ushort **)(*(int *)(iVar5 + 0x18) + (uint)param_1 * 4)) {
          (**(code **)(*(int *)(iVar5 + 0xd8) + 0x18))(local_2c);
          iVar5 = *(int *)((int)this + 4);
        }
        puVar3 = local_20;
        if (local_11 == '\0') {
          *(ushort **)(iVar5 + 0x10) = puVar8;
        }
        else if (local_20 != (undefined2 *)0x0) {
          FUN_1001b450(puVar8,local_20,(char)local_44,(int *)&local_64);
          (**(code **)(*(int *)(*(int *)((int)this + 4) + 0x28) + 0x18))(local_30);
          *(undefined2 **)(*(int *)((int)this + 4) + 0x14) = puVar3;
          *(ushort **)(*(int *)((int)this + 4) + 0x10) = puVar8;
        }
      }
      (**(code **)(**(int **)(**(int **)((int)this + 4) + 0xe8) + 0x20))(local_34);
    } while (*(char *)(*(int *)((int)this + 4) + 0x35c) == '\0');
LAB_1000bd25:
    if (local_64 != (void *)0x0) {
      pvVar11 = local_64;
      if ((0xfff < (uint)(local_5c - (int)local_64)) &&
         (pvVar11 = *(void **)((int)local_64 + -4),
         0x1f < (uint)((int)local_64 + (-4 - (int)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar11);
    }
  }
  ExceptionList = local_10;
  return;
}









int * FUN_1000bd70(int *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1 = param_1 + 3;
  }
  FUN_100024c0(param_1,param_1);
  return param_1;
}











uint FUN_1000bdb0(byte *param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_2 + 0x10);
  if (0xf < *(uint *)(param_2 + 0x14)) {
    param_2 = *(byte **)param_2;
  }
  puVar2 = (uint *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(byte **)param_1;
  }
  uVar3 = FUN_100065c0(param_1,*puVar2,param_2,*puVar1);
  return uVar3 >> 0x1f;
}
















short FUN_1000bdf0(short param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((ushort)param_1 >> 8);
  if ((param_1 != 0x5c) && (param_1 != 0x2f)) {
    return (ushort)bVar1 << 8;
  }
  return CONCAT11(bVar1,1);
}














int * __thiscall FUN_1000be10(void *this,int param_1)

{
  uint uVar1;
  
  if ((param_1 < 0) && (*(uint *)((int)this + 4) < (uint)-param_1)) {
    uVar1 = *(uint *)((int)this + 4) + param_1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)this = *(int *)this + (~uVar1 >> 5) * -4 + -4;
    *(uint *)((int)this + 4) = uVar1 & 0x1f;
    return this;
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)this = *(int *)this + (uVar1 >> 5) * 4;
  *(uint *)((int)this + 4) = uVar1 & 0x1f;
  return this;
}















uint * __thiscall FUN_1000be70(void *this,uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  
  uVar7 = param_1[5];
  puVar10 = param_1;
  if (7 < uVar7) {
    puVar10 = (uint *)*param_1;
  }
  uVar1 = param_1[4];
  if (((int)uVar1 < 2) || (0x19 < (*puVar10 & 0xffffffdf) - 0x3a0041)) {
    puVar9 = FUN_10021a30(puVar10,(short *)(uVar1 * 2 + (int)puVar10));
    uVar7 = param_1[5];
    if (puVar10 != puVar9) goto LAB_1000bfab;
  }
  else if ((2 < (int)uVar1) && (((short)puVar10[1] == 0x5c || ((short)puVar10[1] == 0x2f)))) {
LAB_1000bfab:
    if (this == param_1) {
      return this;
    }
    if (7 < uVar7) {
      param_1 = (uint *)*param_1;
    }
    FUN_100244a0(this,param_1,uVar1);
    return this;
  }
  puVar10 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    puVar10 = *(uint **)this;
  }
  puVar9 = (uint *)((int)puVar10 + *(int *)((int)this + 0x10) * 2);
  puVar2 = param_1;
  if (7 < uVar7) {
    puVar2 = (uint *)*param_1;
  }
  puVar11 = (uint *)(uVar1 * 2 + (int)puVar2);
  puVar3 = FUN_10021a30(puVar10,(short *)puVar9);
  puVar4 = FUN_10021a30(puVar2,(short *)puVar11);
  if (puVar2 != puVar4) {
    uVar5 = (int)puVar4 - (int)puVar2 >> 1;
    uVar6 = (int)puVar3 - (int)puVar10 >> 1;
    uVar7 = uVar6;
    if (uVar5 < uVar6) {
      uVar7 = uVar5;
    }
    iVar8 = FUN_10024650((ushort *)puVar10,(ushort *)puVar2,uVar7);
    if (((iVar8 != 0) || (uVar6 < uVar5)) || (uVar5 < uVar6)) {
      if (this == param_1) {
        return this;
      }
      if (7 < param_1[5]) {
        param_1 = (uint *)*param_1;
      }
      FUN_100244a0(this,param_1,uVar1);
      return this;
    }
  }
  if ((puVar4 == puVar11) || (((short)*puVar4 != 0x5c && ((short)*puVar4 != 0x2f)))) {
    if (puVar3 == puVar9) {
      if ((int)((int)puVar3 - (int)puVar10 & 0xfffffffeU) < 6) goto LAB_1000c021;
    }
    else if ((*(short *)((int)puVar9 + -2) == 0x5c) || (*(short *)((int)puVar9 + -2) == 0x2f))
    goto LAB_1000c021;
    FUN_10025580(this,0x5c);
  }
  else {
    FUN_10024aa0(this,(int)puVar3 - (int)puVar10 >> 1);
  }
LAB_1000c021:
  FUN_10024240(this,puVar4,(int)puVar11 - (int)puVar4 >> 1);
  return this;
}















undefined4 * __thiscall FUN_1000c040(void *this,byte param_1)

{
  FUN_10009250(this);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}















undefined4 * __thiscall FUN_1000c070(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(undefined ***)this = CCPUQueue<>::vftable;
  if (*(int *)((int)this + 4) != 0) {
    do {
      free(*(void **)(*(int *)((int)this + 0xc) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  free(*(void **)((int)this + 0xc));
  _Cnd_destroy_in_situ((int)this + 0x84);
  _Mtx_destroy_in_situ((int)this + 0x54);
  pvVar1 = *(void **)((int)this + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x20) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  FUN_100245c0((int *)((int)this + 0x10));
  FUN_100284c9(*(void **)((int)this + 0x10));
  *(undefined ***)this = CQueue<>::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}
















undefined4 * __thiscall FUN_1000c140(void *this,byte param_1)

{
  *(undefined ***)this = CQueue<char>::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}















undefined4 * __thiscall FUN_1000c170(void *this,byte param_1)

{
  *(undefined ***)this = CQueue<>::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}














undefined4 * __thiscall FUN_1000c1a0(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined ***)this = std::_Node_class<>::vftable;
  pvVar2 = *(void **)((int)this + 0x14);
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 0x10);
    free(*(void **)((int)pvVar2 + 0xc));
    FUN_100284c9(pvVar2);
    pvVar2 = pvVar1;
  }
  FUN_100284c9(*(void **)((int)this + 0x18));
  pvVar2 = *(void **)((int)this + 0x1c);
  if (pvVar2 != (void *)0x0) {
    free(*(void **)((int)pvVar2 + 8));
    FUN_100284c9(pvVar2);
  }
  pvVar2 = *(void **)((int)this + 0x20);
  if (pvVar2 != (void *)0x0) {
    free(*(void **)((int)pvVar2 + 8));
    FUN_100284c9(pvVar2);
  }
  pvVar2 = *(void **)((int)this + 0x28);
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 0x10);
    free(*(void **)((int)pvVar2 + 0xc));
    FUN_100284c9(pvVar2);
    pvVar2 = pvVar1;
  }
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}














undefined4 * __thiscall FUN_1000c260(void *this,byte param_1)

{
  free(*(void **)((int)this + 0x1c));
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













void * __thiscall FUN_1000c290(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}















facet * __thiscall FUN_1000c2b0(void *this,byte param_1)

{
  *(undefined ***)this = std::collate<char>::vftable;
  free(*(void **)((int)this + 0xc));
  std::locale::facet::~facet(this);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}















undefined4 * __thiscall FUN_1000c2f0(void *this,byte param_1)

{
  FUN_10009cc0(this);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}












undefined4 * __thiscall FUN_1000c310(void *this,byte param_1)

{
  FUN_1000a310(this);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}












undefined4 * __thiscall FUN_1000c340(void *this,byte param_1)

{
  FUN_1000a470(this);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













undefined4 * __thiscall FUN_1000c370(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined ***)this = CUSBStream::vftable;
  iVar3 = *(int *)((int)this + 0x20c);
  if (*(int *)((int)this + 0x210) - iVar3 >> 2 != 0) {
    do {
      free(*(void **)(*(int *)((int)this + 0x20c) + uVar4 * 4));
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((int)this + 0x20c);
    } while (uVar4 < (uint)(*(int *)((int)this + 0x210) - iVar3 >> 2));
  }
  *(int *)((int)this + 0x210) = iVar3;
  _Cnd_destroy_in_situ((int)this + 0x2a8);
  _Mtx_destroy_in_situ((int)this + 0x278);
  _Cnd_destroy_in_situ((int)this + 0x24c);
  _Mtx_destroy_in_situ((int)this + 0x21c);
  pvVar1 = *(void **)((int)this + 0x20c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x214) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *(undefined4 *)((int)this + 0x20c) = 0;
    *(undefined4 *)((int)this + 0x210) = 0;
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  FUN_1000a310(this);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}











void * __thiscall FUN_1000c480(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













undefined4 * __thiscall FUN_1000c4a0(void *this,byte param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined ***)this = std::_Node_assert::vftable;
  puVar2 = *(undefined4 **)((int)this + 0x14);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[3];
    puVar2[3] = 0;
    (**(code **)*puVar2)(1);
    puVar2 = puVar1;
  }
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}














undefined4 * __thiscall FUN_1000c4f0(void *this,byte param_1)

{
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}











undefined4 * __thiscall FUN_1000c520(void *this,byte param_1)

{
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}















undefined4 * __thiscall FUN_1000c550(void *this,byte param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined ***)this = std::_Node_if::vftable;
  puVar3 = *(undefined4 **)((int)this + 0x18);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[6];
    puVar3[6] = 0;
    puVar2 = *(undefined4 **)((int)this + 0x14);
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (undefined4 *)0x0))) {
      puVar3 = (undefined4 *)puVar4[3];
      puVar4[3] = 0;
      (**(code **)*puVar4)(1);
      puVar4 = puVar3;
    }
  }
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













undefined4 * __thiscall FUN_1000c5c0(void *this,byte param_1)

{
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}












undefined4 * __thiscall FUN_1000c5f0(void *this,byte param_1)

{
  *(undefined ***)this = std::_Node_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













undefined4 * __thiscall FUN_1000c620(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}














undefined4 * __thiscall FUN_1000c650(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













undefined4 * __thiscall FUN_1000c680(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)this + 0x58)) {
    pvVar1 = *(void **)((int)this + 0x44);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x58) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined1 *)((int)this + 0x44) = 0;
  FUN_100237b0((int *)((int)this + 0x2c));
  FUN_100237b0((int *)((int)this + 0x14));
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}













void __thiscall FUN_1000c710(void *this,void *param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  int iVar3;
  uint uStack_2f4;
  undefined4 local_2e4;
  Mat *local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  Mat *local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  void *local_2c4;
  undefined4 local_2c0;
  Mat *local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  Mat *local_2ac;
  undefined8 local_2a8;
  Mat local_2a0 [16];
  void *local_290;
  Mat local_268 [8];
  Mat local_260 [56];
  Mat local_228 [56];
  Mat local_1f0 [104];
  Mat local_188 [56];
  Mat local_150 [56];
  Mat local_118 [56];
  Mat local_e0 [56];
  Mat local_a8 [56];
  Mat local_70 [40];
  undefined4 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002a686;
  local_10 = ExceptionList;
  uStack_2f4 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2f4;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)this + 0x28);
  local_2c4 = param_2;
  local_2a8._4_4_ = *(int *)((int)this + 0x24);
  iVar3 = local_2a8._4_4_ * iVar1;
  local_8 = 0;
  local_18 = uStack_2f4;
  cv::Mat::Mat(local_188,iVar1,local_2a8._4_4_,2,param_1,0);
  local_8._0_1_ = 1;
  cv::Mat::Mat(local_150,iVar1,local_2a8._4_4_,2,local_2c4,0);
  cv::Mat::Mat(local_70);
  local_8._0_1_ = 3;
  local_2ac = local_70;
  local_2a8 = 0.0;
  local_2b0 = 0x2010000;
  cv::Mat::convertTo(local_188,(_OutputArray *)&local_2b0,5,1.0,0.0);
  puVar2 = (undefined4 *)cv::operator/(local_268,16383.0);
  local_8._0_1_ = 4;
  (**(code **)(*(int *)*puVar2 + 8))(puVar2,local_70,0xffffffff);
  cv::Mat::~Mat(local_1f0);
  cv::Mat::~Mat(local_228);
  cv::Mat::~Mat(local_260);
  cv::Mat::Mat(local_a8);
  local_2ac = local_a8;
  local_8._0_1_ = 5;
  local_2a8 = 0.0;
  local_2b0 = 0x2010000;
  cv::Mat::convertTo(local_150,(_OutputArray *)&local_2b0,5,1.0,0.0);
  puVar2 = (undefined4 *)cv::operator/(local_268,16383.0);
  local_8._0_1_ = 6;
  (**(code **)(*(int *)*puVar2 + 8))(puVar2,local_a8,0xffffffff);
  local_8._0_1_ = 5;
  cv::Mat::~Mat(local_1f0);
  cv::Mat::~Mat(local_228);
  cv::Mat::~Mat(local_260);
  this_00 = (void *)cv::Mat::eye((int)local_268,3,3);
  local_8._0_1_ = 7;
  FUN_1000b520(this_00,local_118);
  local_8._0_1_ = 9;
  cv::Mat::~Mat(local_1f0);
  cv::Mat::~Mat(local_228);
  cv::Mat::~Mat(local_260);
  local_28 = 3;
  uStack_24 = 10;
  uStack_20 = 0x3f50624dd2f1a9fc;
  cv::Mat::clone(local_70);
  local_2ac = (Mat *)param_3;
  local_2d0 = local_118;
  local_8._0_1_ = 10;
  local_2a8 = 0.0;
  local_2b0 = 0x1010000;
  local_2cc = 0;
  local_2c8 = 0;
  local_2d4 = 0x3010000;
  local_2dc = 0;
  local_2d8 = 0;
  local_2e4 = 0x1010000;
  local_2b8 = 0;
  local_2bc = local_70;
  local_2b4 = 0;
  local_2c0 = 0x1010000;
  local_2e0 = local_a8;
  local_2a8 = cv::findTransformECC
                        (&local_2c0,&local_2e4,&local_2d4,3,local_28,uStack_24,(undefined4)uStack_20
                         ,uStack_20._4_4_,&local_2b0);
  if (0.97 <= local_2a8) {
    local_2bc = local_118;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_2e0 = local_e0;
    local_2d0 = local_a8;
    local_2b8 = 0;
    local_2b4 = 0;
    local_2c0 = 0x1010000;
    local_2dc = 0;
    local_2d8 = 0;
    local_2e4 = 0x2010000;
    local_2cc = 0;
    local_2c8 = 0;
    local_2d4 = 0x1010000;
    cv::warpPerspective(&local_2d4,&local_2e4,&local_2c0,local_48[1],*local_48,0x11,5,&local_38);
    cv::Mat::Mat(local_2a0);
    local_8._0_1_ = 0xb;
    puVar2 = (undefined4 *)cv::operator*((double)ZEXT48(local_268),(Mat *)0x40d00000);
    local_8._0_1_ = 0xc;
    (**(code **)(*(int *)*puVar2 + 8))(puVar2,local_e0,0xffffffff);
    local_8._0_1_ = 0xb;
    cv::Mat::~Mat(local_1f0);
    cv::Mat::~Mat(local_228);
    cv::Mat::~Mat(local_260);
    local_2b8 = 0;
    local_2b4 = 0;
    local_2bc = local_2a0;
    local_2c0 = 0x2010000;
    cv::Mat::convertTo(local_e0,(_OutputArray *)&local_2c0,2,1.0,0.0);
    memcpy(local_2c4,local_290,iVar3 * 2);
    cv::Mat::~Mat(local_2a0);
    cv::Mat::~Mat(local_e0);
    cv::Mat::~Mat(local_118);
    cv::Mat::~Mat(local_a8);
    cv::Mat::~Mat(local_70);
    cv::Mat::~Mat(local_150);
    cv::Mat::~Mat(local_188);
  }
  else {
    cv::Mat::~Mat(local_e0);
    cv::Mat::~Mat(local_118);
    cv::Mat::~Mat(local_a8);
    cv::Mat::~Mat(local_70);
    cv::Mat::~Mat(local_150);
    cv::Mat::~Mat(local_188);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}












void __thiscall FUN_1000ccc0(void *this,int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  void *_Dst;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  float fVar13;
  ulonglong uVar14;
  
  if (1 < *(uint *)((int)this + 0x19c)) {
    uVar7 = *(uint *)(param_1 + 10);
    puVar6 = (ushort *)(param_1 + 0x12);
    iVar4 = *(int *)(param_1 + 6);
    iVar10 = *(int *)(param_1 + 2);
    iVar2 = FUN_10012dc0(uVar7);
    iVar3 = FUN_10012dc0(uVar7);
    iVar3 = (int)((longlong)(ulonglong)((int)uVar7 >> 0x10 & 0xff) / (longlong)iVar3);
    iVar5 = iVar4 * iVar10;
    if ((*(int *)((int)this + 0x1b0) != 0) &&
       ((*(int *)((int)this + 0x1b0) != iVar10 || (*(int *)((int)this + 0x1b4) != iVar4)))) {
      *(undefined4 *)((int)this + 0x1a4) = 0;
      (**(code **)(**(int **)((int)this + 0x188) + 0x28))();
    }
    _Size = iVar5 * iVar2;
    if (8 < iVar3) {
      _Size = _Size * 2;
    }
    puVar9 = puVar6;
    _Dst = (void *)(**(code **)(**(int **)((int)this + 0x188) + 0x10))();
    memcpy(_Dst,puVar9,_Size);
    (**(code **)(**(int **)((int)this + 0x188) + 0x1c))();
    iVar4 = 0;
    uVar7 = *(uint *)((int)this + 0x1a4);
    uVar11 = *(uint *)((int)this + 0x19c);
    if (uVar11 <= uVar7) {
      iVar4 = (**(code **)(**(int **)((int)this + 0x188) + 0x14))(0,0);
      uVar7 = *(uint *)((int)this + 0x1a4);
      uVar11 = *(uint *)((int)this + 0x19c);
    }
    if (0 < iVar5) {
      iVar4 = iVar4 - (int)puVar6;
      puVar9 = puVar6;
      do {
        iVar10 = 0;
        puVar8 = puVar9;
        puVar12 = puVar6;
        if (0 < iVar2) {
          do {
            if (iVar3 < 9) {
              uVar1 = (ushort)(byte)*puVar8;
            }
            else {
              uVar1 = *puVar12;
            }
            fVar13 = (float)uVar1;
            if (*(uint *)((int)this + 0x1a4) < *(uint *)((int)this + 0x19c)) {
              if (*(uint *)((int)this + 0x1a4) == 0) {
                *(float *)(param_2 + iVar10 * 4) = fVar13;
              }
              else {
                *(float *)(param_2 + iVar10 * 4) = *(float *)(param_2 + iVar10 * 4) + fVar13;
                uVar14 = FUN_10028b90();
                uVar1 = (ushort)uVar14;
              }
            }
            else {
              fVar13 = fVar13 + *(float *)(param_2 + iVar10 * 4);
              *(float *)(param_2 + iVar10 * 4) = fVar13;
              if (iVar3 < 9) {
                uVar1 = (ushort)*(byte *)((int)puVar8 + iVar4);
              }
              else {
                uVar1 = *(ushort *)((int)puVar12 + iVar4);
              }
              *(float *)(param_2 + iVar10 * 4) = fVar13 - (float)uVar1;
              uVar14 = FUN_10028b90();
              uVar1 = (ushort)uVar14;
            }
            if (iVar3 < 9) {
              *(byte *)puVar8 = (byte)uVar1;
            }
            else {
              *puVar12 = uVar1;
            }
            iVar10 = iVar10 + 1;
            puVar8 = (ushort *)((int)puVar8 + 1);
            puVar12 = puVar12 + 1;
          } while (iVar10 < iVar2);
        }
        puVar9 = (ushort *)((int)puVar9 + iVar2);
        param_2 = param_2 + iVar2 * 4;
        puVar6 = puVar6 + iVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar7 = *(uint *)((int)this + 0x1a4);
      uVar11 = *(uint *)((int)this + 0x19c);
    }
    if (uVar7 < uVar11) {
      *(uint *)((int)this + 0x1a4) = uVar7 + 1;
    }
  }
  return;
}













void __fastcall FUN_1000cf30(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  int iVar9;
  uint local_4c [2];
  char *local_44;
  char local_3d;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *local_2c [2];
  undefined8 local_24;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a6c8;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar9 = 0;
  local_3d = '\x01';
  pcVar1 = param_1 + 0x80;
  local_44 = param_1;
  local_14 = uVar3;
  while( true ) {
    iVar4 = _Mtx_lock(pcVar1,uVar3);
    if (iVar4 != 0) {
      std::_Throw_C_error(iVar4);
    }
    local_8 = 0;
    iVar4 = libusb_control_transfer(*(undefined4 *)local_44,0xc0,0xbe,0xed65,0,&local_3d,1,0);
    if (iVar4 < 0) break;
    local_8 = 1;
    iVar4 = _Mtx_unlock(pcVar1);
    if (iVar4 != 0) {
      std::_Throw_C_error(iVar4);
    }
    local_8 = 0xffffffff;
    if (local_3d == '\0') goto LAB_1000d118;
    local_4c[0] = 1;
    local_4c[1] = 0;
    puVar5 = FUN_10006530(&local_24,local_4c);
    local_3c = *(undefined4 *)puVar5;
    uStack_38 = *(undefined4 *)((int)puVar5 + 4);
    uStack_34 = *(undefined4 *)(puVar5 + 1);
    uStack_30 = *(undefined4 *)((int)puVar5 + 0xc);
    _Thrd_sleep(&local_3c);
    iVar9 = iVar9 + 1;
    if (999 < iVar9) goto LAB_1000d0d2;
  }
  pcVar6 = (char *)libusb_error_name(iVar4);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_44 = pcVar6 + 1;
  pcVar7 = pcVar6;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_100243b0(local_2c,pcVar6,(int)pcVar7 - (int)local_44);
  local_8._0_1_ = 2;
  FUN_10019700(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar8);
  }
  local_8 = 3;
  iVar4 = _Mtx_unlock(pcVar1);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  local_8 = 0xffffffff;
LAB_1000d0d2:
  if (iVar9 == 1000) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_100243b0(local_2c,"OTP not available",0x11);
    local_8 = 4;
    FUN_10019700(local_2c);
    FUN_10009740((int *)local_2c);
  }
LAB_1000d118:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}














void __fastcall FUN_1000d140(int *param_1)

{
  int iVar1;
  int *this;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0x24) != param_1[0x6a]) || (*(int *)(iVar2 + 0x28) != param_1[0x6b])) {
    this = param_1 + 0xba;
    FUN_100024c0((int *)*this,(int *)param_1[0xbb]);
    param_1[0xbb] = *this;
    uVar5 = *(int *)(iVar2 + 0x28) * *(int *)(iVar2 + 0x24);
    FUN_100061a0(this,4);
    FUN_10005aa0((void *)*this,uVar5);
    FUN_10005aa0((void *)(*this + 0xc),uVar5);
    FUN_10005aa0((void *)(*this + 0x18),uVar5);
    FUN_10005aa0((void *)(*this + 0x24),uVar5);
    iVar4 = *(int *)(iVar2 + 0x28);
    iVar3 = *(int *)(iVar2 + 0x24);
    local_8 = 0;
    if (0 < iVar4) {
      do {
        if (0 < iVar3) {
          iVar4 = 0;
          iVar6 = iVar3 * local_8 * 4;
          do {
            iVar1 = iVar4 + 1;
            *(int *)(iVar6 + *(int *)*this) = iVar3 * local_8 + iVar4;
            *(int *)(iVar6 + *(int *)(*this + 0xc)) =
                 (*(int *)(iVar2 + 0x28) * iVar1 - local_8) + -1;
            *(int *)(iVar6 + *(int *)(*this + 0x18)) =
                 ((*(int *)(iVar2 + 0x28) - local_8) * *(int *)(iVar2 + 0x24) - iVar4) + -1;
            *(int *)(iVar6 + *(int *)(*this + 0x24)) =
                 ((*(int *)(iVar2 + 0x24) - iVar4) + -1) * *(int *)(iVar2 + 0x28) + local_8;
            iVar3 = *(int *)(iVar2 + 0x24);
            iVar4 = iVar1;
            iVar6 = iVar6 + 4;
          } while (iVar1 < iVar3);
          iVar4 = *(int *)(iVar2 + 0x28);
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar4);
    }
    param_1[0x6a] = iVar3;
    param_1[0x6b] = *(int *)(iVar2 + 0x28);
  }
  return;
}










void __fastcall FUN_1000d280(char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a73b;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_100243b0(local_5c,"PowerOn",7);
  local_8 = 0;
  bVar2 = false;
  bVar1 = false;
  cVar4 = FUN_1000ec50(param_1,(byte *)local_5c);
  if (cVar4 != '\0') {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_100243b0(local_44,"Sensor initial",0xe);
    local_8 = 1;
    bVar2 = true;
    bVar1 = false;
    cVar4 = FUN_1000ec50(param_1,(byte *)local_44);
    if (cVar4 != '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_100243b0(local_2c,"Standby",7);
      local_8 = 2;
      bVar2 = true;
      bVar1 = true;
      cVar4 = FUN_1000ec50(param_1,(byte *)local_2c);
      bVar3 = true;
      if (cVar4 != '\0') goto LAB_1000d374;
    }
  }
  bVar3 = false;
LAB_1000d374:
  local_8 = 1;
  if (bVar1) {
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  local_8 = 0;
  if (bVar2) {
    if (0xf < local_30) {
      pvVar6 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar6);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  local_8 = 0xffffffff;
  if (0xf < local_48) {
    pvVar6 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar6 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar6);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (((bVar3) && (uVar5 = FUN_10015270(param_1), (char)uVar5 != '\0')) &&
     (cVar4 = FUN_10017d30(param_1), cVar4 != '\0')) {
    FUN_10018fb0(param_1,0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}









undefined4 __thiscall FUN_1000d4c0(void *this,int *param_1,void *param_2,ushort *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  short sVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [13];
  undefined1 auVar37 [13];
  undefined1 auVar38 [13];
  undefined1 auVar39 [13];
  undefined1 auVar40 [13];
  undefined1 auVar41 [13];
  undefined1 auVar42 [13];
  undefined1 auVar43 [13];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  uint5 uVar56;
  undefined1 auVar57 [14];
  undefined1 auVar58 [14];
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  undefined1 auVar61 [13];
  undefined1 auVar62 [13];
  undefined1 auVar63 [13];
  undefined1 auVar64 [13];
  undefined1 auVar65 [13];
  undefined1 auVar66 [13];
  undefined1 auVar67 [13];
  undefined1 auVar68 [13];
  uint uVar69;
  uint uVar70;
  int iVar71;
  undefined4 uVar72;
  uint uVar73;
  int *piVar74;
  uint *puVar75;
  byte bVar76;
  ushort uVar77;
  int iVar78;
  ulonglong *puVar79;
  uint uVar80;
  ushort *puVar81;
  void *pvVar82;
  ushort *puVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  ulonglong uVar90;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ushort *local_98;
  undefined1 local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint *local_64;
  uint local_60;
  uint local_5c;
  ushort *local_58;
  int local_54;
  char local_4d;
  ushort *local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  int *local_2c;
  char local_25;
  ushort *local_24;
  ushort *local_20;
  ushort *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a76b;
  local_10 = ExceptionList;
  uVar69 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = (uint *)((int)this + 0x194);
  local_2c = this;
  if (*(int *)((int)this + 0x194) == 1) {
    uVar69 = FUN_10014720(this,(uint *)*param_1,param_3);
  }
  else {
    puVar75 = (uint *)*param_1;
    local_74 = puVar75[0xb];
    local_11 = (char)puVar75[10];
    local_4d = *(char *)((int)puVar75 + 0x2a);
    local_25 = *(char *)((int)puVar75 + 0x2b);
    local_5c = puVar75[3];
    local_70 = puVar75[4];
    local_90 = *puVar75;
    uVar80 = local_90 >> 0x10 & 0xff;
    local_7c = uVar80;
    uVar70 = FUN_10012dc0(local_90);
    iVar71 = (int)((longlong)(ulonglong)uVar80 / (longlong)(int)uVar70);
    local_8c = local_70 * local_5c;
    local_88 = *(int *)(*local_2c + 0x68);
    local_54 = iVar71;
    local_18 = uVar70;
    memset(param_2,0,local_8c * uVar70 * 4);
    local_60 = 0;
    if (*local_64 != 0) {
      local_80 = iVar71 - 9;
      do {
        local_6c = 0;
        local_68 = 0;
        local_58 = (ushort *)0x0;
        puVar81 = (ushort *)(*param_1 + 0x5d);
        local_4c = puVar81;
        if (local_25 != '\0') {
          local_68 = (**(code **)(*(int *)*local_2c + 0x18))(puVar81,uVar69);
        }
        while( true ) {
          local_84 = 0;
          if (local_25 == '\0') {
            local_40 = local_8c;
          }
          else {
            local_84 = (**(code **)(*(int *)*local_2c + 0x14))(puVar81);
            local_84 = local_84 & 0xffff;
            iVar71 = (**(code **)(*(int *)*local_2c + 0x1c))(puVar81);
            uVar80 = local_84 & 0xffff;
            local_40 = (uVar80 * 8) / local_7c;
            local_58 = (ushort *)((uint)(iVar71 * 8) / local_7c);
            local_4c = (ushort *)((int)local_4c + local_68);
            uVar72 = __acrt_iob_func(2,"Offset=%d DataSize=%d pixelNum=%d\n",iVar71,uVar80,local_40)
            ;
            FUN_10027de0(uVar72,uVar80);
            puVar81 = local_4c;
          }
          local_3c = 0;
          if (local_80 < 7) {
            if (local_4d == '\0') {
              if (0 < (int)local_40) {
                local_1c = local_58;
                puVar83 = (ushort *)((int)param_2 + (int)local_58 * uVar70 * 4);
                do {
                  local_20 = puVar81;
                  if ((local_11 != '\0') && (uVar70 == 1)) {
                    iVar71 = local_2c[1];
                    uVar77 = *puVar81;
                    if (*(short *)(iVar71 + 0x50) != 0) {
                      local_34 = CONCAT44(local_1c,(uint)local_34);
                      puVar81 = local_1c;
                      if ((uint)*(ushort *)(iVar71 + 0x50) < (uint)uVar77) {
                        puVar81 = (ushort *)(*(int *)(iVar71 + 0x14) + (int)local_1c);
                      }
                      if (*(int *)(iVar71 + 0x44) != *(int *)(iVar71 + 0x48)) {
                        sVar3 = *(short *)(*(int *)(iVar71 + 0x44) + (int)puVar81 * 2);
                        local_34 = CONCAT44((int)sVar3,(uint)local_34);
                        if ((uint)uVar77 < (uint)(int)sVar3) {
                          uVar77 = 0;
                        }
                        else {
                          uVar77 = uVar77 - sVar3;
                        }
                      }
                      if (*(int *)(iVar71 + 0x2c) != *(int *)(iVar71 + 0x30)) {
                        if (*(double *)(*(int *)(iVar71 + 0x2c) + (int)puVar81 * 8) == 0.0) {
                          uVar77 = (ushort)*(undefined4 *)(iVar71 + 0x18);
                        }
                        else {
                          uVar90 = FUN_10028d71();
                          uVar80 = (int)uVar90 + (uint)*(ushort *)(local_2c[1] + 0x52);
                          uVar70 = *(uint *)(local_2c[1] + 0x18);
                          if (uVar80 <= uVar70) {
                            uVar70 = uVar80;
                          }
                          uVar77 = (ushort)uVar70;
                        }
                      }
                    }
                    *local_20 = uVar77;
                    uVar70 = local_18;
                  }
                  iVar71 = 0;
                  if (0 < (int)uVar70) {
                    if ((0xf < uVar70) &&
                       ((local_20 + (uVar70 - 1) < puVar83 ||
                        (puVar83 + (uVar70 - 1) * 2 < local_20)))) {
                      uVar80 = uVar70 & 0x8000000f;
                      if ((int)uVar80 < 0) {
                        uVar80 = (uVar80 - 1 | 0xfffffff0) + 1;
                      }
                      local_24 = (ushort *)(uVar70 - uVar80);
                      local_34 = CONCAT44(local_20 + 8,(uint)local_34);
                      puVar81 = puVar83 + 0x10;
                      puVar79 = (ulonglong *)(local_20 + 8);
                      do {
                        uVar90 = puVar79[-2];
                        auVar8._8_4_ = 0;
                        auVar8._0_8_ = uVar90;
                        auVar8._12_2_ = (short)(uVar90 >> 0x30);
                        auVar24._8_2_ = (short)(uVar90 >> 0x20);
                        auVar24._0_8_ = uVar90;
                        auVar24._10_4_ = auVar8._10_4_;
                        auVar48._6_8_ = 0;
                        auVar48._0_6_ = auVar24._8_6_;
                        iVar71 = iVar71 + 0x10;
                        *(uint *)(puVar81 + -0x10) =
                             (uint)(ushort)uVar90 + *(int *)(puVar81 + -0x10);
                        *(int *)(puVar81 + -0xe) =
                             (int)CONCAT82(SUB148(auVar48 << 0x40,6),(short)(uVar90 >> 0x10)) +
                             *(int *)(puVar81 + -0xe);
                        *(int *)(puVar81 + -0xc) = auVar24._8_4_ + *(int *)(puVar81 + -0xc);
                        *(uint *)(puVar81 + -10) = (auVar8._10_4_ >> 0x10) + *(int *)(puVar81 + -10)
                        ;
                        uVar90 = puVar79[-1];
                        auVar9._8_4_ = 0;
                        auVar9._0_8_ = uVar90;
                        auVar9._12_2_ = (short)(uVar90 >> 0x30);
                        auVar25._8_2_ = (short)(uVar90 >> 0x20);
                        auVar25._0_8_ = uVar90;
                        auVar25._10_4_ = auVar9._10_4_;
                        auVar49._6_8_ = 0;
                        auVar49._0_6_ = auVar25._8_6_;
                        *(uint *)(puVar81 + -8) = (uint)(ushort)uVar90 + *(int *)(puVar81 + -8);
                        *(int *)(puVar81 + -6) =
                             (int)CONCAT82(SUB148(auVar49 << 0x40,6),(short)(uVar90 >> 0x10)) +
                             *(int *)(puVar81 + -6);
                        *(int *)(puVar81 + -4) = auVar25._8_4_ + *(int *)(puVar81 + -4);
                        *(uint *)(puVar81 + -2) = (auVar9._10_4_ >> 0x10) + *(int *)(puVar81 + -2);
                        uVar90 = *puVar79;
                        auVar10._8_4_ = 0;
                        auVar10._0_8_ = uVar90;
                        auVar10._12_2_ = (short)(uVar90 >> 0x30);
                        auVar26._8_2_ = (short)(uVar90 >> 0x20);
                        auVar26._0_8_ = uVar90;
                        auVar26._10_4_ = auVar10._10_4_;
                        auVar50._6_8_ = 0;
                        auVar50._0_6_ = auVar26._8_6_;
                        *(uint *)puVar81 = (uint)(ushort)uVar90 + *(int *)puVar81;
                        *(int *)(puVar81 + 2) =
                             (int)CONCAT82(SUB148(auVar50 << 0x40,6),(short)(uVar90 >> 0x10)) +
                             *(int *)(puVar81 + 2);
                        *(int *)(puVar81 + 4) = auVar26._8_4_ + *(int *)(puVar81 + 4);
                        *(uint *)(puVar81 + 6) = (auVar10._10_4_ >> 0x10) + *(int *)(puVar81 + 6);
                        uVar90 = puVar79[1];
                        auVar11._8_4_ = 0;
                        auVar11._0_8_ = uVar90;
                        auVar11._12_2_ = (short)(uVar90 >> 0x30);
                        auVar27._8_2_ = (short)(uVar90 >> 0x20);
                        auVar27._0_8_ = uVar90;
                        auVar27._10_4_ = auVar11._10_4_;
                        auVar51._6_8_ = 0;
                        auVar51._0_6_ = auVar27._8_6_;
                        auVar1 = *(undefined1 (*) [16])(puVar81 + 8);
                        auVar85._0_4_ = (uint)(ushort)uVar90 + auVar1._0_4_;
                        auVar85._4_4_ =
                             (int)CONCAT82(SUB148(auVar51 << 0x40,6),(short)(uVar90 >> 0x10)) +
                             auVar1._4_4_;
                        auVar85._8_4_ = auVar27._8_4_ + auVar1._8_4_;
                        auVar85._12_4_ = (auVar11._10_4_ >> 0x10) + auVar1._12_4_;
                        *(undefined1 (*) [16])(puVar81 + 8) = auVar85;
                        puVar81 = puVar81 + 0x20;
                        puVar79 = puVar79 + 4;
                        uVar70 = local_18;
                      } while (iVar71 < (int)local_24);
                    }
                    for (; iVar71 < (int)uVar70; iVar71 = iVar71 + 1) {
                      *(uint *)(puVar83 + iVar71 * 2) =
                           *(int *)(puVar83 + iVar71 * 2) + (uint)local_20[iVar71];
                    }
                  }
                  local_1c = (ushort *)((int)local_1c + 1);
                  puVar83 = puVar83 + uVar70 * 2;
                  puVar81 = local_20 + uVar70;
                  local_40 = local_40 - 1;
                } while (local_40 != 0);
                local_40 = 0;
                local_20 = puVar81;
              }
            }
            else if (0 < (int)local_40) {
              local_1c = local_58;
              local_20 = (ushort *)0x0;
              pvVar82 = (void *)((int)param_2 + (int)local_58 * uVar70 * 4);
              local_48 = CONCAT44(pvVar82,(uint)local_48);
              do {
                local_78 = CONCAT31(local_78._1_3_,(char)local_2c[99]);
                FUN_10010cd0((int)local_4c,local_54,(uint)local_20,(char)local_2c[99],&local_3c);
                if (1 < (int)uVar70) {
                  local_34 = 0;
                  FUN_10010cd0((int)local_4c,local_54,(uint)((int)local_20 + local_54),
                               (char)local_78,&local_34);
                  uVar80 = local_34._4_4_ << 0x10 | (uint)local_34 >> 0x10 | local_3c._4_4_;
                  local_24 = (ushort *)((uint)local_34 << 0x10 | (uint)local_3c);
                  local_34 = CONCAT44(uVar80,(uint)local_34);
                  local_3c = CONCAT44(uVar80,local_24);
                  if (2 < (int)uVar70) {
                    local_a0 = 0;
                    FUN_10010cd0((int)local_4c,local_54,(uint)(local_20 + local_54),(char)local_78,
                                 &local_a0);
                    uVar80 = (uint)local_a0 | local_34._4_4_;
                    local_34 = CONCAT44(uVar80,(uint)local_34);
                    local_3c = CONCAT44(uVar80,local_24);
                    if (3 < (int)uVar70) {
                      local_a8 = 0;
                      FUN_10010cd0((int)local_4c,local_54,(uint)((int)local_20 + local_54 * 3),
                                   (char)local_78,&local_a8);
                      local_3c = CONCAT44((int)local_a8 << 0x10 | local_34._4_4_,local_24);
                    }
                  }
                }
                if ((local_11 != '\0') && (uVar70 == 1)) {
                  iVar71 = local_2c[1];
                  uVar77 = (ushort)local_3c;
                  if (*(ushort *)(iVar71 + 0x50) != 0) {
                    puVar81 = local_1c;
                    if ((uint)*(ushort *)(iVar71 + 0x50) < (uint)(ushort)local_3c) {
                      puVar81 = (ushort *)(*(int *)(iVar71 + 0x14) + (int)local_1c);
                    }
                    if (*(int *)(iVar71 + 0x44) != *(int *)(iVar71 + 0x48)) {
                      sVar3 = *(short *)(*(int *)(iVar71 + 0x44) + (int)puVar81 * 2);
                      if ((uint)(ushort)local_3c < (uint)(int)sVar3) {
                        uVar77 = 0;
                      }
                      else {
                        uVar77 = (ushort)local_3c - sVar3;
                      }
                    }
                    if (*(int *)(iVar71 + 0x2c) != *(int *)(iVar71 + 0x30)) {
                      if (*(double *)(*(int *)(iVar71 + 0x2c) + (int)puVar81 * 8) == 0.0) {
                        uVar77 = (ushort)*(undefined4 *)(iVar71 + 0x18);
                      }
                      else {
                        uVar90 = FUN_10028d71();
                        uVar73 = (int)uVar90 + (uint)*(ushort *)(iVar71 + 0x52);
                        uVar80 = *(uint *)(iVar71 + 0x18);
                        if (uVar73 <= *(uint *)(iVar71 + 0x18)) {
                          uVar80 = uVar73;
                        }
                        uVar77 = (ushort)uVar80;
                      }
                    }
                  }
                  local_3c = CONCAT62(local_3c._2_6_,uVar77);
                  pvVar82 = local_48._4_4_;
                }
                iVar71 = 0;
                if (0 < (int)uVar70) {
                  if ((0xf < uVar70) &&
                     (((void *)((int)&local_40 + uVar70 * 2 + 2) < pvVar82 ||
                      ((undefined8 *)((int)pvVar82 + (uVar70 - 1) * 4) < &local_3c)))) {
                    uVar80 = uVar70 & 0x8000000f;
                    if ((int)uVar80 < 0) {
                      uVar80 = (uVar80 - 1 | 0xfffffff0) + 1;
                    }
                    piVar74 = (int *)((int)pvVar82 + 0x20);
                    do {
                      uVar90 = *(ulonglong *)((int)&local_3c + iVar71 * 2);
                      auVar4._8_4_ = 0;
                      auVar4._0_8_ = uVar90;
                      auVar4._12_2_ = (short)(uVar90 >> 0x30);
                      auVar20._8_2_ = (short)(uVar90 >> 0x20);
                      auVar20._0_8_ = uVar90;
                      auVar20._10_4_ = auVar4._10_4_;
                      auVar44._6_8_ = 0;
                      auVar44._0_6_ = auVar20._8_6_;
                      piVar74[-8] = (uint)(ushort)uVar90 + piVar74[-8];
                      piVar74[-7] = (int)CONCAT82(SUB148(auVar44 << 0x40,6),(short)(uVar90 >> 0x10))
                                    + piVar74[-7];
                      piVar74[-6] = auVar20._8_4_ + piVar74[-6];
                      piVar74[-5] = (auVar4._10_4_ >> 0x10) + piVar74[-5];
                      uVar90 = *(ulonglong *)((int)&local_34 + iVar71 * 2);
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar90;
                      auVar5._12_2_ = (short)(uVar90 >> 0x30);
                      auVar21._8_2_ = (short)(uVar90 >> 0x20);
                      auVar21._0_8_ = uVar90;
                      auVar21._10_4_ = auVar5._10_4_;
                      auVar45._6_8_ = 0;
                      auVar45._0_6_ = auVar21._8_6_;
                      piVar74[-4] = (uint)(ushort)uVar90 + piVar74[-4];
                      piVar74[-3] = (int)CONCAT82(SUB148(auVar45 << 0x40,6),(short)(uVar90 >> 0x10))
                                    + piVar74[-3];
                      piVar74[-2] = auVar21._8_4_ + piVar74[-2];
                      piVar74[-1] = (auVar5._10_4_ >> 0x10) + piVar74[-1];
                      uVar90 = *(ulonglong *)((int)&local_2c + iVar71 * 2);
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar90;
                      auVar6._12_2_ = (short)(uVar90 >> 0x30);
                      auVar22._8_2_ = (short)(uVar90 >> 0x20);
                      auVar22._0_8_ = uVar90;
                      auVar22._10_4_ = auVar6._10_4_;
                      auVar46._6_8_ = 0;
                      auVar46._0_6_ = auVar22._8_6_;
                      *piVar74 = (uint)(ushort)uVar90 + *piVar74;
                      piVar74[1] = (int)CONCAT82(SUB148(auVar46 << 0x40,6),(short)(uVar90 >> 0x10))
                                   + piVar74[1];
                      piVar74[2] = auVar22._8_4_ + piVar74[2];
                      piVar74[3] = (auVar6._10_4_ >> 0x10) + piVar74[3];
                      uVar90 = *(ulonglong *)((int)&local_24 + iVar71 * 2);
                      iVar71 = iVar71 + 0x10;
                      auVar7._8_4_ = 0;
                      auVar7._0_8_ = uVar90;
                      auVar7._12_2_ = (short)(uVar90 >> 0x30);
                      auVar23._8_2_ = (short)(uVar90 >> 0x20);
                      auVar23._0_8_ = uVar90;
                      auVar23._10_4_ = auVar7._10_4_;
                      auVar47._6_8_ = 0;
                      auVar47._0_6_ = auVar23._8_6_;
                      auVar1 = *(undefined1 (*) [16])(piVar74 + 4);
                      auVar84._0_4_ = (uint)(ushort)uVar90 + auVar1._0_4_;
                      auVar84._4_4_ =
                           (int)CONCAT82(SUB148(auVar47 << 0x40,6),(short)(uVar90 >> 0x10)) +
                           auVar1._4_4_;
                      auVar84._8_4_ = auVar23._8_4_ + auVar1._8_4_;
                      auVar84._12_4_ = (auVar7._10_4_ >> 0x10) + auVar1._12_4_;
                      *(undefined1 (*) [16])(piVar74 + 4) = auVar84;
                      piVar74 = piVar74 + 0x10;
                    } while (iVar71 < (int)(uVar70 - uVar80));
                  }
                  for (; iVar71 < (int)uVar70; iVar71 = iVar71 + 1) {
                    piVar74 = (int *)((int)pvVar82 + iVar71 * 4);
                    *piVar74 = *piVar74 + (uint)*(ushort *)((int)&local_3c + iVar71 * 2);
                  }
                }
                local_20 = (ushort *)((int)local_20 + local_7c);
                pvVar82 = (void *)((int)pvVar82 + uVar70 * 4);
                local_1c = (ushort *)((int)local_1c + 1);
                local_40 = local_40 - 1;
                local_48 = CONCAT44(pvVar82,(uint)local_48);
              } while (local_40 != 0);
              local_40 = 0;
            }
          }
          else if (local_54 < 8) {
            if (local_4d == '\0') {
              if (0 < (int)local_40) {
                local_24 = local_58;
                local_20 = (ushort *)((int)param_2 + (int)local_58 * uVar70 * 4);
                do {
                  if ((local_11 != '\0') && (uVar70 == 1)) {
                    bVar76 = (byte)*puVar81;
                    local_1c = (ushort *)local_2c[1];
                    if (local_1c[0x28] != 0) {
                      puVar83 = local_24;
                      if ((uint)local_1c[0x28] < (uint)bVar76) {
                        puVar83 = (ushort *)(*(int *)(local_1c + 10) + (int)local_24);
                      }
                      local_48 = CONCAT44(puVar83,(uint)local_48);
                      if (*(int *)(local_1c + 0x22) != *(int *)(local_1c + 0x24)) {
                        sVar3 = *(short *)(*(int *)(local_1c + 0x22) + (int)puVar83 * 2);
                        local_34 = local_34 & 0xffffffff;
                        if ((uint)bVar76 < (uint)(int)sVar3) {
                          bVar76 = 0;
                        }
                        else {
                          bVar76 = bVar76 - (char)sVar3;
                        }
                      }
                      iVar71 = *(int *)(local_1c + 0x16);
                      local_34 = CONCAT44(iVar71,(uint)local_34);
                      uVar70 = local_18;
                      if (iVar71 != *(int *)(local_1c + 0x18)) {
                        if (*(double *)(iVar71 + (int)puVar83 * 8) == 0.0) {
                          bVar76 = (byte)*(undefined4 *)(local_1c + 0xc);
                        }
                        else {
                          uVar90 = FUN_10028d71();
                          uVar73 = (int)uVar90 + (uint)local_1c[0x29];
                          uVar80 = *(uint *)(local_1c + 0xc);
                          if (uVar73 <= *(uint *)(local_1c + 0xc)) {
                            uVar80 = uVar73;
                          }
                          bVar76 = (byte)uVar80;
                        }
                      }
                    }
                    *(byte *)puVar81 = bVar76;
                  }
                  iVar71 = 0;
                  if (0 < (int)uVar70) {
                    if ((0xf < uVar70) &&
                       (((ushort *)((int)puVar81 + (uVar70 - 1)) < local_20 ||
                        (local_20 + (uVar70 - 1) * 2 < puVar81)))) {
                      uVar80 = uVar70 & 0x8000000f;
                      if ((int)uVar80 < 0) {
                        uVar80 = (uVar80 - 1 | 0xfffffff0) + 1;
                      }
                      local_48 = CONCAT44(uVar70 - uVar80,(uint)local_48);
                      puVar83 = local_20 + 0x10;
                      do {
                        uVar73 = *(uint *)((int)puVar81 + iVar71);
                        auVar36[0xc] = (char)(uVar73 >> 0x18);
                        auVar36._0_12_ = ZEXT712(0);
                        uVar56 = CONCAT32(auVar36._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                        auVar61._5_8_ = 0;
                        auVar61._0_5_ = uVar56;
                        *(uint *)(puVar83 + -0x10) = (uVar73 & 0xff) + *(int *)(puVar83 + -0x10);
                        *(int *)(puVar83 + -0xe) =
                             (int)CONCAT72(SUB137(auVar61 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                             *(int *)(puVar83 + -0xe);
                        *(int *)(puVar83 + -0xc) = (int)uVar56 + *(int *)(puVar83 + -0xc);
                        *(uint *)(puVar83 + -10) =
                             (uint)(uint3)(auVar36._10_3_ >> 0x10) + *(int *)(puVar83 + -10);
                        uVar73 = *(uint *)((int)puVar81 + iVar71 + 4);
                        auVar37[0xc] = (char)(uVar73 >> 0x18);
                        auVar37._0_12_ = ZEXT712(0);
                        uVar56 = CONCAT32(auVar37._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                        auVar62._5_8_ = 0;
                        auVar62._0_5_ = uVar56;
                        *(uint *)(puVar83 + -8) = (uVar73 & 0xff) + *(int *)(puVar83 + -8);
                        *(int *)(puVar83 + -6) =
                             (int)CONCAT72(SUB137(auVar62 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                             *(int *)(puVar83 + -6);
                        *(int *)(puVar83 + -4) = (int)uVar56 + *(int *)(puVar83 + -4);
                        *(uint *)(puVar83 + -2) =
                             (uint)(uint3)(auVar37._10_3_ >> 0x10) + *(int *)(puVar83 + -2);
                        uVar73 = *(uint *)((int)puVar81 + iVar71 + 8);
                        auVar38[0xc] = (char)(uVar73 >> 0x18);
                        auVar38._0_12_ = ZEXT712(0);
                        uVar56 = CONCAT32(auVar38._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                        auVar63._5_8_ = 0;
                        auVar63._0_5_ = uVar56;
                        *(uint *)puVar83 = (uVar73 & 0xff) + *(int *)puVar83;
                        *(int *)(puVar83 + 2) =
                             (int)CONCAT72(SUB137(auVar63 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                             *(int *)(puVar83 + 2);
                        *(int *)(puVar83 + 4) = (int)uVar56 + *(int *)(puVar83 + 4);
                        *(uint *)(puVar83 + 6) =
                             (uint)(uint3)(auVar38._10_3_ >> 0x10) + *(int *)(puVar83 + 6);
                        uVar73 = *(uint *)((int)puVar81 + iVar71 + 0xc);
                        iVar71 = iVar71 + 0x10;
                        auVar39[0xc] = (char)(uVar73 >> 0x18);
                        auVar39._0_12_ = ZEXT712(0);
                        uVar56 = CONCAT32(auVar39._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                        auVar64._5_8_ = 0;
                        auVar64._0_5_ = uVar56;
                        auVar1 = *(undefined1 (*) [16])(puVar83 + 8);
                        auVar87._0_4_ = (uVar73 & 0xff) + auVar1._0_4_;
                        auVar87._4_4_ =
                             (int)CONCAT72(SUB137(auVar64 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                             auVar1._4_4_;
                        auVar87._8_4_ = (int)uVar56 + auVar1._8_4_;
                        auVar87._12_4_ = (uint)(uint3)(auVar39._10_3_ >> 0x10) + auVar1._12_4_;
                        *(undefined1 (*) [16])(puVar83 + 8) = auVar87;
                        puVar83 = puVar83 + 0x20;
                      } while (iVar71 < (int)(uVar70 - uVar80));
                    }
                    for (; iVar71 < (int)uVar70; iVar71 = iVar71 + 1) {
                      *(uint *)(local_20 + iVar71 * 2) =
                           *(int *)(local_20 + iVar71 * 2) + (uint)*(byte *)((int)puVar81 + iVar71);
                    }
                  }
                  local_24 = (ushort *)((int)local_24 + 1);
                  local_20 = local_20 + uVar70 * 2;
                  puVar81 = (ushort *)((int)puVar81 + uVar70);
                  local_40 = local_40 - 1;
                } while (local_40 != 0);
                local_40 = 0;
              }
            }
            else if (0 < (int)local_40) {
              local_1c = local_58;
              local_20 = (ushort *)0x0;
              pvVar82 = (void *)((int)param_2 + (int)local_58 * uVar70 * 4);
              do {
                FUN_10010c40((int)local_4c,local_54,(uint)local_20,&local_3c);
                if (1 < (int)uVar70) {
                  local_48 = 0;
                  FUN_10010c40((int)local_4c,local_54,(uint)((int)local_20 + local_54),&local_48);
                  uVar80 = (int)local_48._4_4_ << 0x10 | (uint)local_48 >> 0x10 | local_3c._4_4_;
                  local_3c._0_4_ = (uint)local_48 << 0x10 | (uint)local_3c;
                  local_34 = CONCAT44((uint)local_3c,(uint)local_34);
                  local_48 = CONCAT44(uVar80,(uint)local_48);
                  local_3c = CONCAT44(uVar80,(uint)local_3c);
                  if (2 < (int)uVar70) {
                    local_b0 = 0;
                    FUN_10010c40((int)local_4c,local_54,(uint)(local_20 + local_54),&local_b0);
                    uVar72 = local_34._4_4_;
                    uVar80 = (uint)local_b0 | (uint)local_48._4_4_;
                    local_48 = CONCAT44(uVar80,(uint)local_48);
                    local_3c = CONCAT44(uVar80,uVar72);
                    if (3 < (int)uVar70) {
                      local_b8 = 0;
                      FUN_10010c40((int)local_4c,local_54,(uint)((int)local_20 + local_54 * 3),
                                   &local_b8);
                      local_3c = CONCAT44((int)local_b8 << 0x10 | (uint)local_48._4_4_,
                                          local_34._4_4_);
                    }
                  }
                }
                if ((local_11 != '\0') && (uVar70 == 1)) {
                  iVar71 = local_2c[1];
                  uVar77 = (ushort)local_3c;
                  if (*(ushort *)(iVar71 + 0x50) != 0) {
                    local_34 = CONCAT44(local_1c,(uint)local_34);
                    puVar81 = local_1c;
                    if ((uint)*(ushort *)(iVar71 + 0x50) < (uint)(ushort)local_3c) {
                      puVar81 = (ushort *)(*(int *)(iVar71 + 0x14) + (int)local_1c);
                    }
                    if (*(int *)(iVar71 + 0x44) != *(int *)(iVar71 + 0x48)) {
                      sVar3 = *(short *)(*(int *)(iVar71 + 0x44) + (int)puVar81 * 2);
                      local_34 = CONCAT44((int)sVar3,(uint)local_34);
                      if ((uint)(ushort)local_3c < (uint)(int)sVar3) {
                        uVar77 = 0;
                      }
                      else {
                        uVar77 = (ushort)local_3c - sVar3;
                      }
                    }
                    uVar70 = local_18;
                    if (*(int *)(iVar71 + 0x2c) != *(int *)(iVar71 + 0x30)) {
                      if (*(double *)(*(int *)(iVar71 + 0x2c) + (int)puVar81 * 8) == 0.0) {
                        uVar77 = (ushort)*(undefined4 *)(iVar71 + 0x18);
                      }
                      else {
                        uVar90 = FUN_10028d71();
                        uVar80 = (int)uVar90 + (uint)*(ushort *)(local_2c[1] + 0x52);
                        uVar70 = *(uint *)(local_2c[1] + 0x18);
                        if (uVar80 <= uVar70) {
                          uVar70 = uVar80;
                        }
                        uVar77 = (ushort)uVar70;
                        uVar70 = local_18;
                      }
                    }
                  }
                  local_3c = CONCAT62(local_3c._2_6_,uVar77);
                }
                iVar71 = 0;
                if (0 < (int)uVar70) {
                  if ((0xf < uVar70) &&
                     (((void *)((int)&local_40 + uVar70 * 2 + 2) < pvVar82 ||
                      ((undefined8 *)((int)pvVar82 + (uVar70 - 1) * 4) < &local_3c)))) {
                    uVar80 = uVar70 & 0x8000000f;
                    if ((int)uVar80 < 0) {
                      uVar80 = (uVar80 - 1 | 0xfffffff0) + 1;
                    }
                    piVar74 = (int *)((int)pvVar82 + 0x20);
                    do {
                      uVar90 = *(ulonglong *)((int)&local_3c + iVar71 * 2);
                      auVar12._8_4_ = 0;
                      auVar12._0_8_ = uVar90;
                      auVar12._12_2_ = (short)(uVar90 >> 0x30);
                      auVar28._8_2_ = (short)(uVar90 >> 0x20);
                      auVar28._0_8_ = uVar90;
                      auVar28._10_4_ = auVar12._10_4_;
                      auVar52._6_8_ = 0;
                      auVar52._0_6_ = auVar28._8_6_;
                      piVar74[-8] = (uint)(ushort)uVar90 + piVar74[-8];
                      piVar74[-7] = (int)CONCAT82(SUB148(auVar52 << 0x40,6),(short)(uVar90 >> 0x10))
                                    + piVar74[-7];
                      piVar74[-6] = auVar28._8_4_ + piVar74[-6];
                      piVar74[-5] = (auVar12._10_4_ >> 0x10) + piVar74[-5];
                      uVar90 = *(ulonglong *)((int)&local_34 + iVar71 * 2);
                      auVar13._8_4_ = 0;
                      auVar13._0_8_ = uVar90;
                      auVar13._12_2_ = (short)(uVar90 >> 0x30);
                      auVar29._8_2_ = (short)(uVar90 >> 0x20);
                      auVar29._0_8_ = uVar90;
                      auVar29._10_4_ = auVar13._10_4_;
                      auVar53._6_8_ = 0;
                      auVar53._0_6_ = auVar29._8_6_;
                      piVar74[-4] = (uint)(ushort)uVar90 + piVar74[-4];
                      piVar74[-3] = (int)CONCAT82(SUB148(auVar53 << 0x40,6),(short)(uVar90 >> 0x10))
                                    + piVar74[-3];
                      piVar74[-2] = auVar29._8_4_ + piVar74[-2];
                      piVar74[-1] = (auVar13._10_4_ >> 0x10) + piVar74[-1];
                      uVar90 = *(ulonglong *)((int)&local_2c + iVar71 * 2);
                      auVar14._8_4_ = 0;
                      auVar14._0_8_ = uVar90;
                      auVar14._12_2_ = (short)(uVar90 >> 0x30);
                      auVar30._8_2_ = (short)(uVar90 >> 0x20);
                      auVar30._0_8_ = uVar90;
                      auVar30._10_4_ = auVar14._10_4_;
                      auVar54._6_8_ = 0;
                      auVar54._0_6_ = auVar30._8_6_;
                      *piVar74 = (uint)(ushort)uVar90 + *piVar74;
                      piVar74[1] = (int)CONCAT82(SUB148(auVar54 << 0x40,6),(short)(uVar90 >> 0x10))
                                   + piVar74[1];
                      piVar74[2] = auVar30._8_4_ + piVar74[2];
                      piVar74[3] = (auVar14._10_4_ >> 0x10) + piVar74[3];
                      uVar90 = *(ulonglong *)((int)&local_24 + iVar71 * 2);
                      iVar71 = iVar71 + 0x10;
                      auVar15._8_4_ = 0;
                      auVar15._0_8_ = uVar90;
                      auVar15._12_2_ = (short)(uVar90 >> 0x30);
                      auVar31._8_2_ = (short)(uVar90 >> 0x20);
                      auVar31._0_8_ = uVar90;
                      auVar31._10_4_ = auVar15._10_4_;
                      auVar55._6_8_ = 0;
                      auVar55._0_6_ = auVar31._8_6_;
                      auVar1 = *(undefined1 (*) [16])(piVar74 + 4);
                      auVar86._0_4_ = (uint)(ushort)uVar90 + auVar1._0_4_;
                      auVar86._4_4_ =
                           (int)CONCAT82(SUB148(auVar55 << 0x40,6),(short)(uVar90 >> 0x10)) +
                           auVar1._4_4_;
                      auVar86._8_4_ = auVar31._8_4_ + auVar1._8_4_;
                      auVar86._12_4_ = (auVar15._10_4_ >> 0x10) + auVar1._12_4_;
                      *(undefined1 (*) [16])(piVar74 + 4) = auVar86;
                      piVar74 = piVar74 + 0x10;
                    } while (iVar71 < (int)(uVar70 - uVar80));
                  }
                  for (; iVar71 < (int)uVar70; iVar71 = iVar71 + 1) {
                    piVar74 = (int *)((int)pvVar82 + iVar71 * 4);
                    *piVar74 = *piVar74 + (uint)*(ushort *)((int)&local_3c + iVar71 * 2);
                  }
                }
                local_20 = (ushort *)((int)local_20 + local_7c);
                pvVar82 = (void *)((int)pvVar82 + uVar70 * 4);
                local_1c = (ushort *)((int)local_1c + 1);
                local_40 = local_40 - 1;
              } while (local_40 != 0);
              local_40 = 0;
            }
          }
          else if (local_54 == 8) {
            if (0 < (int)local_40) {
              local_1c = local_58;
              local_20 = (ushort *)((int)param_2 + (int)local_58 * uVar70 * 4);
              do {
                if ((local_11 != '\0') && (uVar70 == 1)) {
                  bVar76 = (byte)*puVar81;
                  local_24 = (ushort *)local_2c[1];
                  if (local_24[0x28] != 0) {
                    puVar83 = local_1c;
                    if ((uint)local_24[0x28] < (uint)bVar76) {
                      puVar83 = (ushort *)(*(int *)(local_24 + 10) + (int)local_1c);
                    }
                    local_48 = CONCAT44(puVar83,(uint)local_48);
                    if (*(int *)(local_24 + 0x22) != *(int *)(local_24 + 0x24)) {
                      sVar3 = *(short *)(*(int *)(local_24 + 0x22) + (int)puVar83 * 2);
                      local_34 = local_34 & 0xffffffff;
                      if ((uint)bVar76 < (uint)(int)sVar3) {
                        bVar76 = 0;
                      }
                      else {
                        bVar76 = bVar76 - (char)sVar3;
                      }
                    }
                    iVar71 = *(int *)(local_24 + 0x16);
                    local_34 = CONCAT44(iVar71,(uint)local_34);
                    uVar70 = local_18;
                    if (iVar71 != *(int *)(local_24 + 0x18)) {
                      if (*(double *)(iVar71 + (int)puVar83 * 8) == 0.0) {
                        bVar76 = (byte)*(undefined4 *)(local_24 + 0xc);
                      }
                      else {
                        uVar90 = FUN_10028d71();
                        uVar73 = (int)uVar90 + (uint)local_24[0x29];
                        uVar80 = *(uint *)(local_24 + 0xc);
                        if (uVar73 <= *(uint *)(local_24 + 0xc)) {
                          uVar80 = uVar73;
                        }
                        bVar76 = (byte)uVar80;
                      }
                    }
                  }
                  *(byte *)puVar81 = bVar76;
                }
                iVar71 = 0;
                if (0 < (int)uVar70) {
                  if ((0xf < uVar70) &&
                     (((ushort *)((int)puVar81 + (uVar70 - 1)) < local_20 ||
                      (local_20 + (uVar70 - 1) * 2 < puVar81)))) {
                    uVar80 = uVar70 & 0x8000000f;
                    if ((int)uVar80 < 0) {
                      uVar80 = (uVar80 - 1 | 0xfffffff0) + 1;
                    }
                    local_48 = CONCAT44(uVar70 - uVar80,(uint)local_48);
                    puVar83 = local_20 + 0x10;
                    do {
                      uVar73 = *(uint *)((int)puVar81 + iVar71);
                      auVar40[0xc] = (char)(uVar73 >> 0x18);
                      auVar40._0_12_ = ZEXT712(0);
                      uVar56 = CONCAT32(auVar40._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                      auVar65._5_8_ = 0;
                      auVar65._0_5_ = uVar56;
                      *(uint *)(puVar83 + -0x10) = (uVar73 & 0xff) + *(int *)(puVar83 + -0x10);
                      *(int *)(puVar83 + -0xe) =
                           (int)CONCAT72(SUB137(auVar65 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                           *(int *)(puVar83 + -0xe);
                      *(int *)(puVar83 + -0xc) = (int)uVar56 + *(int *)(puVar83 + -0xc);
                      *(uint *)(puVar83 + -10) =
                           (uint)(uint3)(auVar40._10_3_ >> 0x10) + *(int *)(puVar83 + -10);
                      uVar73 = *(uint *)((int)puVar81 + iVar71 + 4);
                      auVar41[0xc] = (char)(uVar73 >> 0x18);
                      auVar41._0_12_ = ZEXT712(0);
                      uVar56 = CONCAT32(auVar41._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                      auVar66._5_8_ = 0;
                      auVar66._0_5_ = uVar56;
                      *(uint *)(puVar83 + -8) = (uVar73 & 0xff) + *(int *)(puVar83 + -8);
                      *(int *)(puVar83 + -6) =
                           (int)CONCAT72(SUB137(auVar66 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                           *(int *)(puVar83 + -6);
                      *(int *)(puVar83 + -4) = (int)uVar56 + *(int *)(puVar83 + -4);
                      *(uint *)(puVar83 + -2) =
                           (uint)(uint3)(auVar41._10_3_ >> 0x10) + *(int *)(puVar83 + -2);
                      uVar73 = *(uint *)((int)puVar81 + iVar71 + 8);
                      auVar42[0xc] = (char)(uVar73 >> 0x18);
                      auVar42._0_12_ = ZEXT712(0);
                      uVar56 = CONCAT32(auVar42._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                      auVar67._5_8_ = 0;
                      auVar67._0_5_ = uVar56;
                      *(uint *)puVar83 = (uVar73 & 0xff) + *(int *)puVar83;
                      *(int *)(puVar83 + 2) =
                           (int)CONCAT72(SUB137(auVar67 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                           *(int *)(puVar83 + 2);
                      *(int *)(puVar83 + 4) = (int)uVar56 + *(int *)(puVar83 + 4);
                      *(uint *)(puVar83 + 6) =
                           (uint)(uint3)(auVar42._10_3_ >> 0x10) + *(int *)(puVar83 + 6);
                      uVar73 = *(uint *)((int)puVar81 + iVar71 + 0xc);
                      iVar71 = iVar71 + 0x10;
                      auVar43[0xc] = (char)(uVar73 >> 0x18);
                      auVar43._0_12_ = ZEXT712(0);
                      uVar56 = CONCAT32(auVar43._10_3_,(ushort)(byte)(uVar73 >> 0x10));
                      auVar68._5_8_ = 0;
                      auVar68._0_5_ = uVar56;
                      auVar1 = *(undefined1 (*) [16])(puVar83 + 8);
                      auVar88._0_4_ = (uVar73 & 0xff) + auVar1._0_4_;
                      auVar88._4_4_ =
                           (int)CONCAT72(SUB137(auVar68 << 0x40,6),(ushort)(byte)(uVar73 >> 8)) +
                           auVar1._4_4_;
                      auVar88._8_4_ = (int)uVar56 + auVar1._8_4_;
                      auVar88._12_4_ = (uint)(uint3)(auVar43._10_3_ >> 0x10) + auVar1._12_4_;
                      *(undefined1 (*) [16])(puVar83 + 8) = auVar88;
                      puVar83 = puVar83 + 0x20;
                    } while (iVar71 < (int)(uVar70 - uVar80));
                  }
                  for (; iVar71 < (int)uVar70; iVar71 = iVar71 + 1) {
                    *(uint *)(local_20 + iVar71 * 2) =
                         *(int *)(local_20 + iVar71 * 2) + (uint)*(byte *)((int)puVar81 + iVar71);
                  }
                }
                local_1c = (ushort *)((int)local_1c + 1);
                local_20 = local_20 + uVar70 * 2;
                puVar81 = (ushort *)((int)puVar81 + uVar70);
                local_40 = local_40 - 1;
              } while (local_40 != 0);
              local_40 = 0;
            }
          }
          else if ((local_54 == 0x10) && (0 < (int)local_40)) {
            local_24 = local_58;
            puVar83 = (ushort *)((int)param_2 + (int)local_58 * uVar70 * 4);
            do {
              local_1c = puVar81;
              if ((local_11 != '\0') && (uVar70 == 1)) {
                iVar71 = local_2c[1];
                uVar77 = *puVar81;
                if (*(short *)(iVar71 + 0x50) != 0) {
                  local_34 = CONCAT44(local_24,(uint)local_34);
                  puVar81 = local_24;
                  if ((uint)*(ushort *)(iVar71 + 0x50) < (uint)uVar77) {
                    puVar81 = (ushort *)(*(int *)(iVar71 + 0x14) + (int)local_24);
                  }
                  if (*(int *)(iVar71 + 0x44) != *(int *)(iVar71 + 0x48)) {
                    sVar3 = *(short *)(*(int *)(iVar71 + 0x44) + (int)puVar81 * 2);
                    local_34 = CONCAT44((int)sVar3,(uint)local_34);
                    if ((uint)uVar77 < (uint)(int)sVar3) {
                      uVar77 = 0;
                    }
                    else {
                      uVar77 = uVar77 - sVar3;
                    }
                  }
                  if (*(int *)(iVar71 + 0x2c) != *(int *)(iVar71 + 0x30)) {
                    if (*(double *)(*(int *)(iVar71 + 0x2c) + (int)puVar81 * 8) == 0.0) {
                      uVar77 = (ushort)*(undefined4 *)(iVar71 + 0x18);
                    }
                    else {
                      uVar90 = FUN_10028d71();
                      uVar80 = (int)uVar90 + (uint)*(ushort *)(local_2c[1] + 0x52);
                      uVar70 = *(uint *)(local_2c[1] + 0x18);
                      if (uVar80 <= uVar70) {
                        uVar70 = uVar80;
                      }
                      uVar77 = (ushort)uVar70;
                    }
                  }
                }
                *local_1c = uVar77;
                uVar70 = local_18;
              }
              iVar71 = 0;
              if (0 < (int)uVar70) {
                if ((0xf < uVar70) &&
                   ((local_1c + (uVar70 - 1) < puVar83 || (puVar83 + (uVar70 - 1) * 2 < local_1c))))
                {
                  uVar80 = uVar70 & 0x8000000f;
                  if ((int)uVar80 < 0) {
                    uVar80 = (uVar80 - 1 | 0xfffffff0) + 1;
                  }
                  iVar78 = uVar70 - uVar80;
                  local_48 = CONCAT44(iVar78,(uint)local_48);
                  local_34 = CONCAT44(local_1c + 8,(uint)local_34);
                  puVar81 = puVar83 + 0x10;
                  puVar79 = (ulonglong *)(local_1c + 8);
                  do {
                    uVar90 = puVar79[-2];
                    auVar16._8_4_ = 0;
                    auVar16._0_8_ = uVar90;
                    auVar16._12_2_ = (short)(uVar90 >> 0x30);
                    auVar32._8_2_ = (short)(uVar90 >> 0x20);
                    auVar32._0_8_ = uVar90;
                    auVar32._10_4_ = auVar16._10_4_;
                    auVar57._6_8_ = 0;
                    auVar57._0_6_ = auVar32._8_6_;
                    iVar71 = iVar71 + 0x10;
                    *(uint *)(puVar81 + -0x10) = (uint)(ushort)uVar90 + *(int *)(puVar81 + -0x10);
                    *(int *)(puVar81 + -0xe) =
                         (int)CONCAT82(SUB148(auVar57 << 0x40,6),(short)(uVar90 >> 0x10)) +
                         *(int *)(puVar81 + -0xe);
                    *(int *)(puVar81 + -0xc) = auVar32._8_4_ + *(int *)(puVar81 + -0xc);
                    *(uint *)(puVar81 + -10) = (auVar16._10_4_ >> 0x10) + *(int *)(puVar81 + -10);
                    uVar90 = puVar79[-1];
                    auVar17._8_4_ = 0;
                    auVar17._0_8_ = uVar90;
                    auVar17._12_2_ = (short)(uVar90 >> 0x30);
                    auVar33._8_2_ = (short)(uVar90 >> 0x20);
                    auVar33._0_8_ = uVar90;
                    auVar33._10_4_ = auVar17._10_4_;
                    auVar58._6_8_ = 0;
                    auVar58._0_6_ = auVar33._8_6_;
                    *(uint *)(puVar81 + -8) = (uint)(ushort)uVar90 + *(int *)(puVar81 + -8);
                    *(int *)(puVar81 + -6) =
                         (int)CONCAT82(SUB148(auVar58 << 0x40,6),(short)(uVar90 >> 0x10)) +
                         *(int *)(puVar81 + -6);
                    *(int *)(puVar81 + -4) = auVar33._8_4_ + *(int *)(puVar81 + -4);
                    *(uint *)(puVar81 + -2) = (auVar17._10_4_ >> 0x10) + *(int *)(puVar81 + -2);
                    uVar90 = *puVar79;
                    auVar18._8_4_ = 0;
                    auVar18._0_8_ = uVar90;
                    auVar18._12_2_ = (short)(uVar90 >> 0x30);
                    auVar34._8_2_ = (short)(uVar90 >> 0x20);
                    auVar34._0_8_ = uVar90;
                    auVar34._10_4_ = auVar18._10_4_;
                    auVar59._6_8_ = 0;
                    auVar59._0_6_ = auVar34._8_6_;
                    *(uint *)puVar81 = (uint)(ushort)uVar90 + *(int *)puVar81;
                    *(int *)(puVar81 + 2) =
                         (int)CONCAT82(SUB148(auVar59 << 0x40,6),(short)(uVar90 >> 0x10)) +
                         *(int *)(puVar81 + 2);
                    *(int *)(puVar81 + 4) = auVar34._8_4_ + *(int *)(puVar81 + 4);
                    *(uint *)(puVar81 + 6) = (auVar18._10_4_ >> 0x10) + *(int *)(puVar81 + 6);
                    uVar90 = puVar79[1];
                    auVar19._8_4_ = 0;
                    auVar19._0_8_ = uVar90;
                    auVar19._12_2_ = (short)(uVar90 >> 0x30);
                    auVar35._8_2_ = (short)(uVar90 >> 0x20);
                    auVar35._0_8_ = uVar90;
                    auVar35._10_4_ = auVar19._10_4_;
                    auVar60._6_8_ = 0;
                    auVar60._0_6_ = auVar35._8_6_;
                    auVar1 = *(undefined1 (*) [16])(puVar81 + 8);
                    auVar89._0_4_ = (uint)(ushort)uVar90 + auVar1._0_4_;
                    auVar89._4_4_ =
                         (int)CONCAT82(SUB148(auVar60 << 0x40,6),(short)(uVar90 >> 0x10)) +
                         auVar1._4_4_;
                    auVar89._8_4_ = auVar35._8_4_ + auVar1._8_4_;
                    auVar89._12_4_ = (auVar19._10_4_ >> 0x10) + auVar1._12_4_;
                    *(undefined1 (*) [16])(puVar81 + 8) = auVar89;
                    puVar81 = puVar81 + 0x20;
                    puVar79 = puVar79 + 4;
                    uVar70 = local_18;
                  } while (iVar71 < iVar78);
                }
                for (; iVar71 < (int)uVar70; iVar71 = iVar71 + 1) {
                  *(uint *)(puVar83 + iVar71 * 2) =
                       *(int *)(puVar83 + iVar71 * 2) + (uint)local_1c[iVar71];
                }
              }
              local_24 = (ushort *)((int)local_24 + 1);
              puVar83 = puVar83 + uVar70 * 2;
              puVar81 = local_1c + uVar70;
              local_40 = local_40 - 1;
              local_1c = puVar81;
            } while (local_40 != 0);
          }
          piVar74 = local_2c;
          if ((local_25 == '\0') || (local_6c = local_6c + 1, local_88 <= local_6c)) break;
          puVar81 = (ushort *)((int)local_4c + (local_84 & 0xffff));
          local_4c = puVar81;
        }
        if (local_60 < *local_64 - 1) {
          (**(code **)(**(int **)(*local_2c + 0xe8) + 0x20))(*param_1);
          local_24 = (ushort *)*piVar74;
          puVar75 = (uint *)(**(code **)(**(int **)(local_24 + 0x74) + 0x14))(0,0);
          if (puVar75 == (uint *)0x0) {
            puVar75 = (uint *)0x0;
          }
          else {
            local_98 = local_24 + 0x40;
            iVar71 = _Mtx_lock(local_98);
            if (iVar71 != 0) {
              std::_Throw_C_error(iVar71);
            }
            local_94 = 1;
            cVar2 = *(char *)((int)puVar75 + 0x26);
            local_8 = 0;
            while ((cVar2 == '\0' && ((byte)local_24[0x6c] == 0))) {
              iVar71 = _Cnd_wait(local_24 + 0x58,local_98);
              if (iVar71 != 0) {
                std::_Throw_C_error(iVar71);
              }
              cVar2 = *(char *)((int)puVar75 + 0x26);
            }
            local_8 = 1;
            iVar71 = _Mtx_unlock(local_98);
            if (iVar71 != 0) {
              std::_Throw_C_error(iVar71);
            }
            local_8 = 0xffffffff;
            if (*(char *)((int)puVar75 + 0x26) != '\x02') {
              (**(code **)(**(int **)(local_24 + 0x74) + 0x20))(puVar75);
              puVar75 = (uint *)FUN_10010030(local_24,0,0,0);
            }
          }
          *param_1 = (int)puVar75;
          if (puVar75 == (uint *)0x0) {
            ExceptionList = local_10;
            return (uint)param_1 & 0xffffff00;
          }
          if ((local_5c != puVar75[3]) || (local_70 != puVar75[4])) {
            uVar69 = FUN_10014720(local_2c,puVar75,param_3);
            goto LAB_1000e664;
          }
        }
        local_60 = local_60 + 1;
      } while (local_60 < *local_64);
    }
    local_80 = ((int)local_74 / 0x5a) * 3;
    local_88 = local_2c[0xba];
    uVar77 = *(ushort *)(*param_1 + 0x24);
    local_68 = (uint)uVar77;
    local_60 = *(undefined4 *)(*param_1 + 0x14);
    local_6c = 0;
    puVar81 = param_3 + 9;
    if (0 < (int)local_8c) {
      do {
        iVar71 = *(int *)(*(int *)(local_88 + ((int)local_74 / 0x5a) * 0xc) + local_6c * 4) * uVar70
        ;
        puVar83 = (ushort *)(iVar71 + (int)puVar81);
        local_34 = CONCAT44(puVar83,(uint)local_34);
        iVar78 = 0;
        if (0 < (int)uVar70) {
          uVar70 = local_18;
          if (local_54 < 9) {
            iVar71 = 0;
            do {
              *(char *)(iVar71 + (int)puVar83) =
                   (char)(*(uint *)((int)param_2 + iVar71 * 4) / *local_64);
              iVar71 = iVar71 + 1;
            } while (iVar71 < (int)local_18);
          }
          else {
            do {
              puVar81[iVar71 + iVar78] = (ushort)(*(uint *)((int)param_2 + iVar78 * 4) / *local_64);
              iVar78 = iVar78 + 1;
            } while (iVar78 < (int)local_18);
          }
        }
        param_2 = (void *)((int)param_2 + uVar70 * 4);
        local_6c = local_6c + 1;
      } while (local_6c < (int)local_8c);
    }
    if ((local_74 == 0x5a) || (local_74 == 0x10e)) {
      *param_3 = uVar77;
      *(uint *)(param_3 + 3) = local_5c;
      *(uint *)(param_3 + 5) = local_90;
      *(uint *)(param_3 + 1) = local_70;
      *(uint *)(param_3 + 7) = local_60;
      uVar69 = local_70;
      uVar80 = local_5c;
    }
    else {
      *param_3 = uVar77;
      *(uint *)(param_3 + 1) = local_5c;
      *(uint *)(param_3 + 5) = local_90;
      *(uint *)(param_3 + 3) = local_70;
      *(uint *)(param_3 + 7) = local_60;
      uVar69 = local_5c;
      uVar80 = local_70;
    }
    if ((local_11 != '\0') && (uVar70 == 1)) {
      if (local_54 < 9) {
        uVar69 = FUN_10001390((void *)local_2c[1],(int)puVar81,uVar69,uVar80,local_74);
      }
      else {
        uVar69 = FUN_10001580((void *)local_2c[1],(int)puVar81,uVar69,uVar80,local_74);
      }
    }
  }
LAB_1000e664:
  ExceptionList = local_10;
  return CONCAT31((int3)(uVar69 >> 8),1);
}












uint __thiscall FUN_1000e680(void *this,uint param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  
  if (*(ushort *)((int)this + 0x50) == 0) {
    return param_1 & 0xffff;
  }
  if (*(ushort *)((int)this + 0x50) < param_1) {
    param_2 = param_2 + *(int *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x44) != *(int *)((int)this + 0x48)) {
    uVar2 = (uint)*(short *)(*(int *)((int)this + 0x44) + param_2 * 2);
    if (param_1 < uVar2) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 - uVar2;
    }
  }
  uVar4 = (undefined2)param_1;
  uVar2 = *(uint *)((int)this + 0x2c);
  if (uVar2 != *(uint *)((int)this + 0x30)) {
    pdVar1 = (double *)(uVar2 + param_2 * 8);
    uVar2 = uVar2 & 0xffff0000;
    if (*pdVar1 != 0.0) {
      uVar5 = FUN_10028d71();
      uVar3 = (int)uVar5 + (uint)*(ushort *)((int)this + 0x52);
      uVar2 = *(uint *)((int)this + 0x18);
      if (uVar3 <= *(uint *)((int)this + 0x18)) {
        uVar2 = uVar3;
      }
      return CONCAT22((short)(uVar3 >> 0x10),(short)uVar2);
    }
    uVar4 = (undefined2)*(undefined4 *)((int)this + 0x18);
  }
  return CONCAT22((short)(uVar2 >> 0x10),uVar4);
}











void __thiscall FUN_1000e720(void *this,int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_3c;
  int local_34;
  int local_30;
  uint local_2c;
  int iStack_14;
  uint local_10;
  int iStack_c;
  uint local_8;
  
  uVar8 = *(uint *)((int)this + 0x1a0);
  if (uVar8 != 0) {
    uVar11 = *(uint *)(param_1 + 10);
    iVar1 = param_1 + 0x12;
    iVar7 = *(int *)(param_1 + 6);
    iVar10 = *(int *)(param_1 + 2);
    uVar3 = FUN_10012dc0(uVar11);
    iVar4 = FUN_10012dc0(uVar11);
    iVar4 = (int)((longlong)(ulonglong)((int)uVar11 >> 0x10 & 0xff) / (longlong)iVar4);
    local_3c = iVar10;
    if ((param_2 != 0) && (param_2 != 0xb4)) {
      local_3c = iVar7;
    }
    uVar11 = iVar7 * iVar10;
    iStack_c = 0;
    piVar2 = (int *)(*(int *)((int)this + 0x2e8) + ((int)param_2 / 0x5a) * 0xc);
    iVar7 = 0;
    local_10 = 0;
    iStack_14 = 0;
    if ((int)uVar11 < 2) {
      local_34 = 0;
      param_2 = 0;
    }
    else {
      param_2 = 0;
      do {
        uVar5 = (uint)*(ushort *)(iVar1 + iVar7 * 2);
        bVar13 = CARRY4(param_2,uVar5);
        param_2 = param_2 + uVar5;
        uVar5 = (uint)*(ushort *)(param_1 + 0x14 + iVar7 * 2);
        iStack_14 = iStack_14 + (uint)bVar13;
        bVar13 = CARRY4(local_10,uVar5);
        local_10 = local_10 + uVar5;
        iStack_c = iStack_c + (uint)bVar13;
        iVar7 = iVar7 + 2;
        local_34 = iStack_14;
      } while (iVar7 < (int)(uVar11 - 1));
    }
    if (iVar7 < (int)uVar11) {
      local_8 = (uint)*(ushort *)(iVar1 + iVar7 * 2);
    }
    else {
      local_8 = 0;
    }
    uVar14 = __alldiv(local_10 + param_2 + local_8,
                      iStack_c + local_34 + (uint)CARRY4(local_10,param_2) +
                      (uint)CARRY4(local_10 + param_2,local_8),uVar11,(int)uVar11 >> 0x1f);
    uVar14 = __alldiv((uint)uVar14,(uint)((ulonglong)uVar14 >> 0x20),2,0);
    param_2 = 0;
    if (uVar8 != 0) {
      local_34 = 0;
      local_30 = 0;
      do {
        local_2c = 0;
        iVar7 = local_30;
        if (uVar8 != param_2) {
          do {
            iVar10 = *(int *)(*piVar2 + iVar7) * uVar3;
            if (0 < (int)uVar3) {
              if (iVar4 < 9) {
                iVar9 = 0;
                do {
                  *(char *)(iVar1 + iVar10 + iVar9) = (char)uVar14;
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)uVar3);
              }
              else {
                uVar11 = (uint)uVar14 & 0xffff;
                puVar12 = (uint *)(iVar1 + iVar10 * 2);
                for (uVar8 = uVar3 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar12 = uVar11 | uVar11 << 0x10;
                  puVar12 = puVar12 + 1;
                }
                for (uVar8 = (uint)((uVar3 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(short *)puVar12 = (short)uVar14;
                  puVar12 = (uint *)((int)puVar12 + 2);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar8 = *(uint *)((int)this + 0x1a0);
            iVar7 = iVar7 + 4;
          } while (local_2c < uVar8 - param_2);
        }
        iVar7 = (param_2 - uVar8) + local_3c;
        if (iVar7 < local_3c) {
          iVar10 = (iVar7 + local_34) * 4;
          iVar7 = local_3c - iVar7;
          do {
            iVar9 = *(int *)(*piVar2 + iVar10) * uVar3;
            if (0 < (int)uVar3) {
              if (iVar4 < 9) {
                iVar6 = 0;
                do {
                  *(char *)(iVar9 + iVar1 + iVar6) = (char)uVar14;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < (int)uVar3);
              }
              else {
                uVar11 = (uint)uVar14 & 0xffff;
                puVar12 = (uint *)(iVar1 + iVar9 * 2);
                for (uVar8 = uVar3 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar12 = uVar11 | uVar11 << 0x10;
                  puVar12 = puVar12 + 1;
                }
                for (uVar8 = (uint)((uVar3 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(short *)puVar12 = (short)uVar14;
                  puVar12 = (uint *)((int)puVar12 + 2);
                }
              }
            }
            iVar10 = iVar10 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar8 = *(uint *)((int)this + 0x1a0);
        }
        local_34 = local_34 + local_3c;
        param_2 = param_2 + 1;
        local_30 = local_30 + local_3c * 4;
      } while (param_2 < uVar8);
    }
  }
  return;
}











void __thiscall
FUN_1000e9f0(void *this,uint *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_28;
  uint local_24;
  uint local_1c;
  uint local_10;
  int iStack_c;
  int iStack_4;
  
  uVar6 = *(uint *)((int)this + 8);
  if (uVar6 != 0) {
    uVar2 = param_2 * param_3;
    iVar5 = 0;
    local_10 = 0;
    iStack_4 = 0;
    iStack_c = 0;
    if ((int)uVar2 < 2) {
      local_28 = 0;
    }
    else {
      local_28 = 0;
      do {
        uVar3 = (uint)*(ushort *)((int)param_1 + iVar5 * 2);
        bVar11 = CARRY4(local_28,uVar3);
        local_28 = local_28 + uVar3;
        iStack_4 = iStack_4 + (uint)bVar11;
        uVar3 = (uint)*(ushort *)((int)param_1 + iVar5 * 2 + 2);
        bVar11 = CARRY4(local_10,uVar3);
        local_10 = local_10 + uVar3;
        iStack_c = iStack_c + (uint)bVar11;
        iVar5 = iVar5 + 2;
      } while (iVar5 < (int)(uVar2 - 1));
    }
    if (iVar5 < (int)uVar2) {
      local_24 = (uint)*(ushort *)((int)param_1 + iVar5 * 2);
    }
    else {
      local_24 = 0;
    }
    uVar12 = __alldiv(local_10 + local_28 + local_24,
                      iStack_c + iStack_4 + (uint)CARRY4(local_10,local_28) +
                      (uint)CARRY4(local_10 + local_28,local_24),uVar2,(int)uVar2 >> 0x1f);
    uVar12 = __alldiv((uint)uVar12,(uint)((ulonglong)uVar12 >> 0x20),2,0);
    param_2 = 0;
    if (uVar6 != 0) {
      local_28 = 0;
      puVar9 = param_1;
      puVar1 = param_1;
      do {
        local_1c = 0;
        puVar8 = puVar1;
        puVar7 = puVar9;
        if (uVar6 != param_2) {
          do {
            if (0 < (int)param_4) {
              if (param_5 < 9) {
                iVar5 = 0;
                do {
                  *(char *)(iVar5 + (int)puVar7) = (char)uVar12;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < (int)param_4);
              }
              else {
                uVar2 = (uint)uVar12 & 0xffff;
                puVar10 = puVar8;
                for (uVar6 = param_4 * 2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *puVar10 = uVar2 | uVar2 << 0x10;
                  puVar10 = puVar10 + 1;
                }
                for (uVar6 = (uint)((param_4 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(short *)puVar10 = (short)uVar12;
                  puVar10 = (uint *)((int)puVar10 + 2);
                }
              }
            }
            local_1c = local_1c + 1;
            uVar6 = *(uint *)((int)this + 8);
            puVar8 = (uint *)((int)puVar8 + param_4 * 2);
            puVar7 = (uint *)((int)puVar7 + param_4);
          } while (local_1c < uVar6 - param_2);
        }
        iVar5 = (param_2 - uVar6) + param_3;
        if (iVar5 < param_3) {
          iVar4 = (local_28 + iVar5) * param_4;
          iVar5 = param_3 - iVar5;
          puVar8 = (uint *)(iVar4 + (int)param_1);
          puVar7 = (uint *)((int)param_1 + iVar4 * 2);
          do {
            if (0 < (int)param_4) {
              if (param_5 < 9) {
                iVar4 = 0;
                do {
                  *(char *)(iVar4 + (int)puVar8) = (char)uVar12;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < (int)param_4);
              }
              else {
                uVar2 = (uint)uVar12 & 0xffff;
                puVar10 = puVar7;
                for (uVar6 = param_4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *puVar10 = uVar2 | uVar2 << 0x10;
                  puVar10 = puVar10 + 1;
                }
                for (uVar6 = (uint)((param_4 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(short *)puVar10 = (short)uVar12;
                  puVar10 = (uint *)((int)puVar10 + 2);
                }
              }
            }
            puVar7 = (uint *)((int)puVar7 + param_4 * 2);
            puVar8 = (uint *)((int)puVar8 + param_4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar6 = *(uint *)((int)this + 8);
        }
        local_28 = local_28 + param_3;
        param_2 = param_2 + 1;
        puVar9 = (uint *)((int)puVar9 + param_3 * param_4);
        puVar1 = (uint *)((int)puVar1 + param_3 * param_4 * 2);
      } while (param_2 < uVar6);
    }
  }
  return;
}












undefined4 __thiscall FUN_1000ec40(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0xc) + param_1 * 4);
}












void __thiscall FUN_1000ec50(void *this,byte *param_1)

{
  char cVar1;
  ushort *this_00;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  void *pvVar6;
  int local_130;
  void *local_12c;
  undefined1 *puStack_128;
  undefined4 local_124;
  void *local_120 [4];
  undefined4 local_110;
  uint local_10c;
  char local_108 [256];
  uint local_8;
  
  local_124 = 0xffffffff;
  puStack_128 = &LAB_1002a798;
  local_12c = ExceptionList;
  local_8 = DAT_10034018 ^ (uint)local_120;
  ExceptionList = &local_12c;
  this_00 = FUN_1000b200(&DAT_10034944,(ushort *)((int)this + 6));
  FUN_100250d0(this_00,&local_130,param_1);
  if (local_130 != *(int *)this_00) {
    pbVar2 = (byte *)(local_130 + 0x10);
    if (0xf < *(uint *)(local_130 + 0x24)) {
      pbVar2 = *(byte **)pbVar2;
    }
    pbVar4 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar4 = *(byte **)param_1;
    }
    uVar3 = FUN_100065c0(pbVar4,*(uint *)(param_1 + 0x10),pbVar2,*(uint *)(local_130 + 0x20));
    if (-1 < (int)uVar3) {
      FUN_1001c990(this,(int *)(local_130 + 0x28));
      goto LAB_1000eda1;
    }
  }
  memset(local_108,0,0x100);
  FUN_10027e10(local_108,"Invalid function: %s");
  pcVar5 = local_108;
  local_110 = 0;
  local_10c = 0xf;
  local_120[0] = (void *)((uint)local_120[0] & 0xffffff00);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0(local_120,local_108,(int)pcVar5 - (int)(local_108 + 1));
  local_124 = 0;
  FUN_10019700(local_120);
  if (0xf < local_10c) {
    pvVar6 = local_120[0];
    if ((0xfff < local_10c + 1) &&
       (pvVar6 = *(void **)((int)local_120[0] + -4),
       0x1f < (uint)((int)local_120[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar6);
  }
LAB_1000eda1:
  ExceptionList = local_12c;
  __security_check_cookie(local_8 ^ (uint)local_120);
  return;
}













longlong __cdecl FUN_1000edd0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_20;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  lVar5 = 1;
  lVar6 = 1;
  lVar7 = 1;
  uVar3 = 1;
  lVar8 = 1;
  lVar1 = 1;
  lVar2 = 1;
  if (0 < param_1 + -3) {
    uVar4 = 3;
    lVar5 = 1;
    lVar6 = 1;
    do {
      local_10 = (int)((ulonglong)lVar6 >> 0x20);
      local_c = (uint)lVar6;
      local_20 = (uint)lVar7;
      local_14 = (uint)lVar8;
      lVar5 = __allmul(uVar3,(int)uVar3 >> 0x1f,(uint)lVar5,(int)((ulonglong)lVar5 >> 0x20));
      lVar6 = __allmul(uVar4 - 1,(int)(uVar4 - 1) >> 0x1f,local_c,local_10);
      lVar7 = __allmul(uVar4,(int)uVar4 >> 0x1f,local_20,(int)((ulonglong)lVar7 >> 0x20));
      lVar8 = __allmul(uVar4 + 1,(int)(uVar4 + 1) >> 0x1f,local_14,(int)((ulonglong)lVar8 >> 0x20));
      uVar3 = uVar3 + 4;
      uVar4 = uVar4 + 4;
      lVar1 = lVar8;
      lVar2 = lVar7;
    } while ((int)uVar3 <= param_1 + -3);
  }
  local_14 = (uint)lVar1;
  local_c = (uint)lVar6;
  local_8 = (int)((ulonglong)lVar5 >> 0x20);
  lVar8 = __allmul(local_14,(int)((ulonglong)lVar1 >> 0x20),(uint)lVar2,
                   (int)((ulonglong)lVar2 >> 0x20));
  lVar8 = __allmul((uint)lVar8,(int)((ulonglong)lVar8 >> 0x20),local_c,
                   (int)((ulonglong)lVar6 >> 0x20));
  lVar8 = __allmul((uint)lVar8,(int)((ulonglong)lVar8 >> 0x20),(uint)lVar5,local_8);
  for (; (int)uVar3 <= param_1; uVar3 = uVar3 + 1) {
    lVar8 = __allmul(uVar3,(int)uVar3 >> 0x1f,(uint)lVar8,(int)((ulonglong)lVar8 >> 0x20));
  }
  return lVar8;
}











void __thiscall
FUN_1000ef00(void *this,int param_1,int param_2,undefined2 *param_3,uint *param_4,uint *param_5)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  undefined2 *puVar10;
  void *pvVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int local_80;
  int local_78;
  uint local_74;
  uint local_70;
  uint *local_6c;
  uint *local_68;
  uint local_64;
  float *local_60;
  float *local_5c;
  uint *local_58;
  float *local_54;
  uint *local_50;
  void *local_4c;
  uint *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a7db;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = param_4;
  local_68 = param_5;
  local_4c = this;
  cVar5 = (**(code **)(*(int *)this + 4))(0,0,0,local_14);
  if (cVar5 != '\0') {
    iVar13 = 0;
    local_74 = 0;
    local_70 = 0;
    local_64 = 0;
    local_48 = (uint *)0x0;
    if (0 < param_1) {
      do {
        puVar6 = (uint *)(**(code **)(**(int **)((int)this + 0xe8) + 0x14))(0,0);
        if (puVar6 == (uint *)0x0) {
          local_48 = (uint *)0x0;
          this = local_4c;
        }
        else {
          iVar14 = (int)local_4c + 0x80;
          iVar7 = _Mtx_lock(iVar14);
          if (iVar7 != 0) {
            std::_Throw_C_error(iVar7);
          }
          cVar5 = *(char *)((int)puVar6 + 0x26);
          local_8 = 0;
          while ((cVar5 == '\0' && (*(char *)((int)local_4c + 0xd8) == '\0'))) {
            iVar7 = _Cnd_wait((int)local_4c + 0xb0,iVar14);
            if (iVar7 != 0) {
              std::_Throw_C_error(iVar7);
            }
            cVar5 = *(char *)((int)puVar6 + 0x26);
          }
          local_8 = 1;
          iVar7 = _Mtx_unlock(iVar14);
          if (iVar7 != 0) {
            std::_Throw_C_error(iVar7);
          }
          this = local_4c;
          local_8 = 0xffffffff;
          if (*(char *)((int)puVar6 + 0x26) == '\x02') {
            local_74 = (uint)(ushort)puVar6[9];
            *local_6c = puVar6[3];
            *local_68 = puVar6[4];
            local_64 = *puVar6;
            local_70 = puVar6[5];
            local_48 = (uint *)((int)puVar6 + 0x5d);
          }
          else {
            local_48 = (uint *)FUN_1000fee0(local_4c,(undefined2 *)&local_74,local_6c,local_68,
                                            &local_64,&local_70,0);
          }
        }
        if (local_48 == (uint *)0x0) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_100243b0(local_2c,"Fail to get frames\n",0x13);
          local_8 = 2;
          FUN_10019700(local_2c);
          if (local_18 < 0x10) goto LAB_1000f4c9;
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_1000f4bd;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < param_1);
    }
    uVar4 = local_64;
    iVar13 = FUN_10012dc0(local_64);
    local_58 = (uint *)(*local_6c * *local_68);
    pfVar8 = calloc((int)local_58 * iVar13,4);
    local_80 = 0;
    pfVar9 = pfVar8;
    local_5c = pfVar8;
    if (0 < param_2) {
      do {
        local_48 = FUN_10010170(local_4c,(undefined2 *)&local_74,local_6c,local_68,&local_64,
                                &local_70,0);
        if (local_48 == (uint *)0x0) goto LAB_1000f410;
        pfVar8 = pfVar9;
        if ((int)((longlong)(ulonglong)(uVar4 >> 0x10 & 0xff) / (longlong)iVar13) < 9) {
          if (0 < (int)local_58) {
            iVar7 = 0;
            local_50 = local_58;
            local_54 = local_5c;
            do {
              iVar14 = 0;
              if (3 < iVar13) {
                local_60 = (float *)(iVar13 + -3);
                pfVar8 = local_54;
                do {
                  *pfVar8 = (float)*(byte *)((int)local_48 + iVar14 + iVar7) + *pfVar8;
                  pfVar8[1] = (float)*(byte *)((int)local_48 + iVar14 + iVar7 + 1) + pfVar8[1];
                  pfVar8[2] = (float)*(byte *)((int)local_48 + iVar14 + iVar7 + 2) + pfVar8[2];
                  iVar3 = iVar14 + iVar7 + 3;
                  iVar14 = iVar14 + 4;
                  pfVar8[3] = (float)*(byte *)((int)local_48 + iVar3) + pfVar8[3];
                  pfVar8 = pfVar8 + 4;
                } while (iVar14 < (int)local_60);
              }
              if (iVar14 < iVar13) {
                pfVar8 = local_5c + iVar7 + iVar14;
                do {
                  iVar3 = iVar14 + iVar7;
                  iVar14 = iVar14 + 1;
                  *pfVar8 = (float)*(byte *)((int)local_48 + iVar3) + *pfVar8;
                  pfVar8 = pfVar8 + 1;
                } while (iVar14 < iVar13);
              }
              local_54 = local_54 + iVar13;
              iVar7 = iVar7 + iVar13;
              local_50 = (uint *)((int)local_50 + -1);
              pfVar8 = local_5c;
            } while (local_50 != (uint *)0x0);
          }
        }
        else if (0 < (int)local_58) {
          local_78 = 0;
          local_50 = local_48;
          puVar6 = local_58;
          do {
            iVar7 = 0;
            if (3 < iVar13) {
              iVar14 = (iVar13 - 4U >> 2) + 1;
              iVar7 = iVar14 * 4;
              pfVar8 = pfVar9;
              puVar15 = local_50;
              do {
                *pfVar8 = (float)(ushort)*puVar15 + *pfVar8;
                pfVar8[1] = (float)*(ushort *)((int)puVar15 + 2) + pfVar8[1];
                pfVar8[2] = (float)(ushort)puVar15[1] + pfVar8[2];
                puVar12 = (ushort *)((int)puVar15 + 6);
                puVar15 = puVar15 + 2;
                pfVar8[3] = (float)*puVar12 + pfVar8[3];
                pfVar8 = pfVar8 + 4;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            if (iVar7 < iVar13) {
              iVar14 = iVar13 - iVar7;
              pfVar8 = local_5c + local_78 + iVar7;
              puVar12 = (ushort *)((int)local_48 + (local_78 + iVar7) * 2);
              do {
                uVar2 = *puVar12;
                puVar12 = puVar12 + 1;
                *pfVar8 = (float)uVar2 + *pfVar8;
                pfVar8 = pfVar8 + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            local_78 = local_78 + iVar13;
            pfVar9 = pfVar9 + iVar13;
            local_50 = (uint *)((int)local_50 + iVar13 * 2);
            puVar6 = (uint *)((int)puVar6 + -1);
          } while (puVar6 != (uint *)0x0);
          local_54 = (float *)0x0;
          pfVar8 = local_5c;
          local_60 = pfVar9;
        }
        local_80 = local_80 + 1;
        pfVar9 = pfVar8;
      } while (local_80 < param_2);
    }
    if ((local_48 != (uint *)0x0) && (0 < (int)local_58)) {
      do {
        if (0 < iVar13) {
          puVar10 = param_3;
          pfVar9 = pfVar8;
          iVar7 = iVar13;
          do {
            fVar1 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            *puVar10 = (short)(int)(fVar1 / (float)param_2);
            iVar7 = iVar7 + -1;
            puVar10 = puVar10 + 1;
          } while (iVar7 != 0);
        }
        param_3 = param_3 + iVar13;
        pfVar8 = pfVar8 + iVar13;
        local_58 = (uint *)((int)local_58 + -1);
      } while (local_58 != (uint *)0x0);
      local_58 = (uint *)0x0;
    }
LAB_1000f410:
    puVar6 = local_48;
    pvVar11 = local_4c;
    *(undefined1 *)((int)local_4c + 0xd9) = 1;
    *(undefined1 *)((int)local_4c + 0xd8) = 1;
    if (*(int *)((int)local_4c + 0xe4) != 0) {
      FUN_10025060((undefined4 *)((int)local_4c + 0xe0));
    }
    if (*(int *)((int)pvVar11 + 0xfc) != 0) {
      FUN_10025060((undefined4 *)((int)pvVar11 + 0xf8));
    }
    free(local_5c);
    if (puVar6 == (uint *)0x0) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_100243b0(local_44,"Fail to get frames\n",0x13);
      local_8 = 3;
      FUN_10019700(local_44);
      if (0xf < local_30) {
        pvVar11 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar11 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
LAB_1000f4bd:
        FUN_100284c9(pvVar11);
      }
    }
  }
LAB_1000f4c9:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}










void __fastcall FUN_1000f4f0(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"BeginLinesDValue",0x10);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}












void __fastcall FUN_1000f5d0(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"BeginLinesNumber",0x10);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}















void __cdecl FUN_1000f6b0(byte *param_1,void **param_2)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  uint uVar10;
  void *pvVar11;
  void *pvVar12;
  int iVar13;
  char local_144 [256];
  void *local_44;
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a848;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar4 = *(byte **)param_1;
  }
  if (uVar3 != 0) {
    memset(local_144,0,0x100);
    pbVar9 = &DAT_1002dcd8;
    iVar13 = 10;
    do {
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      local_144[bVar2] = '\x01';
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    for (pbVar9 = pbVar4; pbVar9 < pbVar4 + uVar3; pbVar9 = pbVar9 + 1) {
      if (local_144[*pbVar9] != '\0') {
        uVar10 = (int)pbVar9 - (int)pbVar4;
        if (uVar10 != 0xffffffff) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (uVar3 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_10023b60();
          }
          uVar7 = 0xffffffff;
          if (uVar3 - uVar10 != 0xffffffff) {
            uVar7 = uVar3 - uVar10;
          }
          if (0xf < *(uint *)(param_1 + 0x14)) {
            param_1 = *(byte **)param_1;
          }
          FUN_100243b0(local_2c,param_1 + uVar10,uVar7);
          local_8 = 0;
          piVar8 = FUN_10024e80(local_2c,0,"config",6);
          pvVar12 = (void *)*piVar8;
          pvVar11 = (void *)piVar8[1];
          pvVar5 = (void *)piVar8[2];
          pvVar6 = (void *)piVar8[3];
          uVar1 = *(undefined8 *)(piVar8 + 4);
          piVar8[4] = 0;
          piVar8[5] = 0xf;
          *(undefined1 *)piVar8 = 0;
          local_44 = pvVar12;
          pvStack_40 = pvVar11;
          pvStack_3c = pvVar5;
          pvStack_38 = pvVar6;
          local_34 = uVar1;
          if (param_2 == &local_44) {
            local_34._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
            if (0xf < local_34._4_4_) {
              pvVar11 = pvVar12;
              if ((0xfff < local_34._4_4_ + 1) &&
                 (pvVar11 = *(void **)((int)pvVar12 + -4),
                 0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_100284c9(pvVar11);
              uVar1 = local_34;
            }
          }
          else {
            FUN_10009740((int *)param_2);
            *param_2 = pvVar12;
            param_2[1] = pvVar11;
            param_2[2] = pvVar5;
            param_2[3] = pvVar6;
            *(undefined8 *)(param_2 + 4) = uVar1;
            uVar1 = local_34;
          }
          local_34 = uVar1;
          if (0xf < local_18) {
            pvVar12 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar12 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(pvVar12);
          }
          goto LAB_1000f777;
        }
        break;
      }
    }
  }
  FUN_100243b0(param_2,"config_no_id",0xc);
LAB_1000f777:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}















void __fastcall FUN_1000f8d0(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"CornerCutLength",0xf);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}














void __cdecl FUN_1000f9b0(uint param_1)

{
  char *pcVar1;
  void *pvVar2;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a438;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 < (uint)((DAT_10034950 - DAT_1003494c) / 0x18)) {
    pcVar1 = (char *)(DAT_1003494c + param_1 * 0x18);
    if (0xf < *(uint *)(DAT_1003494c + 0x14 + param_1 * 0x18)) {
      pcVar1 = *(char **)pcVar1;
    }
    FUN_1000fab0(pcVar1);
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_100243b0(local_2c,"No device found or invalid \'iIndex\'",0x23);
    local_8 = 0;
    FUN_10019700(local_2c);
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}













void __cdecl FUN_1000fab0(char *param_1)

{
  char cVar1;
  byte ***pppbVar2;
  byte ****ppppbVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a880;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  if (param_1 == (char *)0x0) {
    FUN_100243b0(local_2c,"No device found or invalid \'pDeviceID\'",0x26);
    local_8 = 1;
    FUN_10019700(local_2c);
    if (0xf < local_18) {
      ppppbVar3 = (byte ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppbVar3 = (byte ****)local_2c[0][-1],
         (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(ppppbVar3);
    }
    goto LAB_1000fc43;
  }
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0(local_2c,param_1,(int)pcVar5 - (int)(param_1 + 1));
  FUN_100250d0(&DAT_100348f8,&local_30,(byte *)local_2c);
  pppbVar2 = local_2c[0];
  iVar7 = DAT_100348f8;
  if (local_30 == DAT_100348f8) {
LAB_1000fb62:
    iVar8 = iVar7;
  }
  else {
    pbVar6 = (byte *)(local_30 + 0x10);
    if (0xf < *(uint *)(local_30 + 0x24)) {
      pbVar6 = *(byte **)pbVar6;
    }
    ppppbVar3 = local_2c;
    if (0xf < local_18) {
      ppppbVar3 = (byte ****)local_2c[0];
    }
    uVar4 = FUN_100065c0((byte *)ppppbVar3,local_1c,pbVar6,*(uint *)(local_30 + 0x20));
    iVar8 = local_30;
    if ((int)uVar4 < 0) goto LAB_1000fb62;
  }
  if (0xf < local_18) {
    ppppbVar3 = (byte ****)pppbVar2;
    if ((0xfff < local_18 + 1) &&
       (ppppbVar3 = (byte ****)pppbVar2[-1],
       (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(ppppbVar3);
    iVar7 = DAT_100348f8;
  }
  if (iVar8 == iVar7) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    FUN_100243b0(local_2c,"No device found or invalid \'pDeviceID\'",0x26);
    local_8 = 0;
    FUN_10019700(local_2c);
    FUN_10009740((int *)local_2c);
  }
LAB_1000fc43:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}













void __fastcall FUN_1000fc60(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"EndLinesDValue",0xe);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}














void __fastcall FUN_1000fd40(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"EndLinesNumber",0xe);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}












undefined8 __cdecl FUN_1000fe20(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = param_2;
  iVar3 = param_1;
  uVar7 = 0;
  uVar8 = param_2;
  while( true ) {
    uVar8 = uVar8 - 1;
    cVar1 = *(char *)(uVar7 + param_1);
    if ((((cVar1 != '0') && (cVar1 != 'x')) && (cVar1 != 'X')) || (param_2 <= uVar7)) break;
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < param_2) {
    param_1 = 0;
    param_2 = 0;
    do {
      bVar2 = *(byte *)(uVar7 + iVar3);
      iVar5 = 0;
      if ((byte)(bVar2 - 0x30) < 10) {
        iVar5 = bVar2 - 0x30;
      }
      else if ((byte)(bVar2 + 0xbf) < 6) {
        iVar5 = bVar2 - 0x37;
      }
      else if ((byte)(bVar2 + 0x9f) < 6) {
        iVar5 = bVar2 - 0x57;
      }
      uVar6 = iVar5 << ((char)uVar8 * '\x04' & 0x1fU);
      bVar9 = CARRY4(param_2,uVar6);
      param_2 = param_2 + uVar6;
      param_1 = param_1 + (uint)bVar9;
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar7 < uVar4);
    return CONCAT44(param_1,param_2);
  }
  return 0;
}













int __thiscall
FUN_1000fee0(void *this,undefined2 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a8b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)
           (**(code **)(**(int **)((int)this + 0xe8) + 0x14))
                     (param_6,0,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar4 = (int)this + 0x80;
  iVar3 = _Mtx_lock(iVar4);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  cVar1 = *(char *)((int)puVar2 + 0x26);
  local_8 = 0;
  while ((cVar1 == '\0' && (*(char *)((int)this + 0xd8) == '\0'))) {
    iVar3 = _Cnd_wait((int)this + 0xb0,iVar4);
    if (iVar3 != 0) {
      std::_Throw_C_error(iVar3);
    }
    cVar1 = *(char *)((int)puVar2 + 0x26);
  }
  local_8 = 1;
  iVar4 = _Mtx_unlock(iVar4);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  local_8 = 0xffffffff;
  if (*(char *)((int)puVar2 + 0x26) != '\x02') {
    iVar4 = FUN_1000fee0(this,param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = local_10;
    return iVar4;
  }
  *param_1 = *(undefined2 *)(puVar2 + 9);
  *param_2 = puVar2[3];
  *param_3 = puVar2[4];
  *param_4 = *puVar2;
  *param_5 = puVar2[5];
  ExceptionList = local_10;
  return (int)puVar2 + 0x5d;
}














int __thiscall FUN_10010030(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a8b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(**(int **)((int)this + 0xe8) + 0x14))
                    (param_2,param_3,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar4 = (int)this + 0x80;
  iVar3 = _Mtx_lock(iVar4);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  cVar1 = *(char *)(iVar2 + 0x26);
  local_8 = 0;
  while ((cVar1 == '\0' && (*(char *)((int)this + 0xd8) == '\0'))) {
    iVar3 = _Cnd_wait((int)this + 0xb0,iVar4);
    if (iVar3 != 0) {
      std::_Throw_C_error(iVar3);
    }
    cVar1 = *(char *)(iVar2 + 0x26);
  }
  local_8 = 1;
  iVar4 = _Mtx_unlock(iVar4);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  local_8 = 0xffffffff;
  if ((char)param_1 == '\0') {
    if (*(char *)(iVar2 + 0x26) == '\x02') {
      ExceptionList = local_10;
      return iVar2;
    }
  }
  else if (*(char *)(iVar2 + 0x26) != '\0') {
    ExceptionList = local_10;
    return iVar2;
  }
  (**(code **)(**(int **)((int)this + 0xe8) + 0x20))(iVar2);
  iVar2 = FUN_10010030(this,param_1,param_2,param_3);
  ExceptionList = local_10;
  return iVar2;
}










uint * __thiscall
FUN_10010170(void *this,undefined2 *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
            undefined4 param_6)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined8 local_40;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint *local_24;
  int local_20;
  int *local_1c;
  uint *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a8e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = this;
  puVar2 = (uint *)(**(code **)(**(int **)((int)this + 0xe8) + 0x14))
                             (param_6,0,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (puVar2 == (uint *)0x0) {
    ExceptionList = local_10;
    return (uint *)0x0;
  }
  iVar4 = (int)this + 0x80;
  local_38 = iVar4;
  local_18 = puVar2;
  iVar3 = _Mtx_lock(iVar4);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  local_34 = CONCAT31(local_34._1_3_,1);
  cVar1 = *(char *)((int)puVar2 + 0x26);
  local_8 = 0;
  while ((cVar1 == '\0' && (iVar4 = local_38, *(char *)((int)this + 0xd8) == '\0'))) {
    iVar3 = _Cnd_wait((int)this + 0xb0,local_38);
    if (iVar3 != 0) {
      std::_Throw_C_error(iVar3);
    }
    cVar1 = *(char *)((int)puVar2 + 0x26);
  }
  local_8 = 1;
  iVar4 = _Mtx_unlock(iVar4);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  local_8 = 0xffffffff;
  if (*(char *)((int)puVar2 + 0x26) != '\x02') {
    puVar2 = FUN_10010170(this,param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = local_10;
    return puVar2;
  }
  cVar1 = *(char *)((int)puVar2 + 0x2a);
  *param_1 = (short)local_18[9];
  *param_2 = local_18[3];
  *param_3 = local_18[4];
  *param_4 = *local_18;
  *param_5 = local_18[5];
  local_14 = (int)*param_4 >> 0x10 & 0xff;
  uVar5 = FUN_10012dc0(*param_4);
  iVar4 = (int)local_14 / (int)uVar5;
  param_5 = (uint *)((int)local_18 + 0x5d);
  local_28 = uVar5;
  if (((cVar1 != '\0') && (iVar4 != 0x10)) && (iVar4 != 8)) {
    cVar1 = *(char *)((int)local_18 + 0x2b);
    local_2c = 0;
    puVar2 = (uint *)(*param_2 * *param_3);
    local_34 = *(int *)((int)this + 0x68);
    local_20 = 0;
    local_18 = (uint *)0x0;
    param_4 = puVar2;
    if (cVar1 != '\0') {
      local_20 = (**(code **)(*(int *)this + 0x18))(param_5);
    }
    while( true ) {
      local_30 = 0;
      if (cVar1 != '\0') {
        local_30 = (**(code **)(*(int *)this + 0x14))(param_5);
        local_30 = local_30 & 0xffff;
        puVar2 = (uint *)((local_30 << 3) / local_14);
        iVar3 = (**(code **)(*(int *)this + 0x1c))(param_5);
        local_18 = (uint *)((uint)(iVar3 << 3) / local_14);
        param_5 = (uint *)((int)param_5 + local_20);
        this = local_1c;
        param_4 = puVar2;
      }
      local_40 = 0;
      if (uVar5 == 1) {
        if (iVar4 < 9) {
          iVar3 = 0;
          puVar2 = param_4;
          if (0 < (int)param_4) {
            uVar7 = 0;
            do {
              FUN_10010c40((int)param_5,iVar4,uVar7,&local_40);
              iVar6 = *(int *)((int)this + 0xec) + iVar3;
              iVar3 = iVar3 + 1;
              uVar7 = uVar7 + local_14;
              *(undefined1 *)(iVar6 + (int)local_18) = (undefined1)local_40;
              uVar5 = local_28;
            } while (iVar3 < (int)param_4);
          }
        }
        else if (0 < (int)puVar2) {
          uVar7 = 0;
          local_24 = param_4;
          puVar8 = (undefined2 *)(*(int *)((int)this + 0xec) + (int)local_18 * 2);
          do {
            FUN_10010cd0((int)param_5,iVar4,uVar7,*(char *)((int)this + 0x1b9),&local_40);
            uVar7 = uVar7 + local_14;
            local_24 = (uint *)((int)local_24 + -1);
            *puVar8 = (undefined2)local_40;
            puVar2 = param_4;
            puVar8 = puVar8 + 1;
            uVar5 = local_28;
          } while (local_24 != (uint *)0x0);
        }
      }
      else if (iVar4 < 9) {
        local_24 = (uint *)0x0;
        if (0 < (int)puVar2) {
          iVar3 = (int)local_18 * uVar5;
          do {
            FUN_10010920((int)param_5,local_14,iVar4,uVar5,(int)local_24,&local_40);
            *(undefined1 *)(iVar3 + local_1c[0x3b]) = (undefined1)local_40;
            if (1 < (int)uVar5) {
              *(undefined1 *)(local_1c[0x3b] + 1 + iVar3) = local_40._2_1_;
              if (2 < (int)uVar5) {
                *(undefined1 *)(local_1c[0x3b] + 2 + iVar3) = local_40._4_1_;
                if (3 < (int)uVar5) {
                  *(undefined1 *)(local_1c[0x3b] + 3 + iVar3) = local_40._6_1_;
                }
              }
            }
            iVar3 = iVar3 + uVar5;
            local_24 = (uint *)((int)local_24 + 1);
            puVar2 = param_4;
            this = local_1c;
          } while ((int)local_24 < (int)param_4);
        }
      }
      else {
        local_24 = (uint *)0x0;
        if (0 < (int)puVar2) {
          puVar8 = (undefined2 *)(*(int *)((int)this + 0xec) + (int)local_18 * uVar5 * 2 + 4);
          do {
            FUN_10010b30((int)param_5,local_14,iVar4,uVar5,(int)local_24,
                         *(char *)((int)this + 0x1b9),&local_40);
            puVar8[-2] = (undefined2)local_40;
            if (1 < (int)uVar5) {
              puVar8[-1] = local_40._2_2_;
              if (2 < (int)uVar5) {
                *puVar8 = local_40._4_2_;
                if (3 < (int)uVar5) {
                  puVar8[1] = local_40._6_2_;
                }
              }
            }
            puVar8 = puVar8 + uVar5;
            local_24 = (uint *)((int)local_24 + 1);
            puVar2 = param_4;
          } while ((int)local_24 < (int)param_4);
        }
      }
      if ((cVar1 == '\0') || (local_2c = local_2c + 1, local_34 <= local_2c)) break;
      param_5 = (uint *)((int)param_5 + (local_30 & 0xffff));
    }
    FUN_1000e9f0(this,*(uint **)((int)this + 0xec),*param_3,*param_2,uVar5,iVar4);
    ExceptionList = local_10;
    return *(uint **)((int)this + 0xec);
  }
  FUN_1000e9f0(this,param_5,*param_3,*param_2,uVar5,iVar4);
  ExceptionList = local_10;
  return param_5;
}











undefined4 FUN_100105e0(void)

{
  return 0;
}












undefined4 __thiscall FUN_100105f0(void *this,uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  if (*(char *)((int)this + 9) == '\0') {
    uVar4 = FUN_10010780(this,param_1);
    return uVar4;
  }
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a918;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  iVar5 = _Mtx_lock((int)this + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
  }
  uVar2 = *(uint *)((int)this + 0x48);
  uVar8 = uVar2 + 1;
  uVar3 = *(uint *)((int)this + 4);
  uVar7 = *(int *)((int)this + 0x4c) + (uint)(0xfffffffe < uVar2);
  uStack_8 = 0;
  *(uint *)((int)this + 0x48) = uVar8;
  *(uint *)((int)this + 0x4c) = uVar7;
  if (*(int *)((int)this + 0x38) == 0 && *(int *)((int)this + 0x3c) == 0) {
    if ((uVar7 != 0) || (uVar3 < uVar8)) goto LAB_100106ef;
LAB_100106ac:
    uVar10 = __aullrem(uVar8,uVar7,uVar3,0);
    puVar9 = param_1;
    *param_1 = (uint)uVar10;
    param_1 = *(uint **)(*(int *)((int)this + 0xc) + (uint)uVar10 * 4);
    puVar6 = FUN_1000b380((void *)((int)this + 0x10),(uint *)&param_1);
    if ((char)*puVar6 == '\0') {
LAB_1001072a:
      puVar6 = (uint *)(*(int *)((int)this + 0x18) + (*puVar9 >> 5) * 4);
      *puVar6 = *puVar6 & ~(1 << ((byte)*puVar9 & 0x1f));
      uVar4 = *(undefined4 *)(*(int *)((int)this + 0xc) + *puVar9 * 4);
      goto LAB_1001074d;
    }
    piVar1 = (int *)((int)this + 0x48);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + -1 + (uint)(iVar5 != 0);
  }
  else {
    if ((uVar8 != uVar3 + *(uint *)((int)this + 0x38)) ||
       (uVar7 != *(int *)((int)this + 0x3c) + (uint)CARRY4(uVar3,*(uint *)((int)this + 0x38))))
    goto LAB_100106ac;
LAB_100106ef:
    *(uint *)((int)this + 0x48) = uVar2;
    uVar7 = (uVar7 - 1) + (uint)(uVar8 != 0);
    *(uint *)((int)this + 0x4c) = uVar7;
    if (*(char *)((int)this + 8) != '\0') {
      uVar10 = __aullrem(uVar2,uVar7,uVar3,0);
      puVar9 = param_1;
      *param_1 = (uint)uVar10;
      param_1 = *(uint **)(*(int *)((int)this + 0xc) + (uint)uVar10 * 4);
      puVar6 = FUN_1000b380((void *)((int)this + 0x10),(uint *)&param_1);
      if ((char)*puVar6 != '\0') goto LAB_100106dd;
      goto LAB_1001072a;
    }
  }
LAB_100106dd:
  uVar4 = 0;
LAB_1001074d:
  uStack_8 = 1;
  iVar5 = _Mtx_unlock((int)this + 0x54);
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
  }
  ExceptionList = pvStack_10;
  return uVar4;
}












void __fastcall FUN_10010600(void *param_1)

{
  uint local_4;
  
  local_4 = 0;
  if (*(char *)((int)param_1 + 9) != '\0') {
    FUN_10010620(param_1,&local_4);
    return;
  }
  FUN_10010780(param_1,&local_4);
  return;
}












undefined4 __thiscall FUN_10010620(void *this,uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = _Mtx_lock((int)this + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  uVar2 = *(uint *)((int)this + 0x48);
  uVar7 = uVar2 + 1;
  uVar3 = *(uint *)((int)this + 4);
  uVar6 = *(int *)((int)this + 0x4c) + (uint)(0xfffffffe < uVar2);
  local_8 = 0;
  *(uint *)((int)this + 0x48) = uVar7;
  *(uint *)((int)this + 0x4c) = uVar6;
  if (*(int *)((int)this + 0x38) == 0 && *(int *)((int)this + 0x3c) == 0) {
    if ((uVar6 != 0) || (uVar3 < uVar7)) goto LAB_100106ef;
LAB_100106ac:
    uVar10 = __aullrem(uVar7,uVar6,uVar3,0);
    puVar9 = param_1;
    *param_1 = (uint)uVar10;
    param_1 = *(uint **)(*(int *)((int)this + 0xc) + (uint)uVar10 * 4);
    puVar5 = FUN_1000b380((void *)((int)this + 0x10),(uint *)&param_1);
    if ((char)*puVar5 == '\0') {
LAB_1001072a:
      puVar5 = (uint *)(*(int *)((int)this + 0x18) + (*puVar9 >> 5) * 4);
      *puVar5 = *puVar5 & ~(1 << ((byte)*puVar9 & 0x1f));
      uVar8 = *(undefined4 *)(*(int *)((int)this + 0xc) + *puVar9 * 4);
      goto LAB_1001074d;
    }
    piVar1 = (int *)((int)this + 0x48);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + -1 + (uint)(iVar4 != 0);
  }
  else {
    if ((uVar7 != uVar3 + *(uint *)((int)this + 0x38)) ||
       (uVar6 != *(int *)((int)this + 0x3c) + (uint)CARRY4(uVar3,*(uint *)((int)this + 0x38))))
    goto LAB_100106ac;
LAB_100106ef:
    *(uint *)((int)this + 0x48) = uVar2;
    uVar6 = (uVar6 - 1) + (uint)(uVar7 != 0);
    *(uint *)((int)this + 0x4c) = uVar6;
    if (*(char *)((int)this + 8) != '\0') {
      uVar10 = __aullrem(uVar2,uVar6,uVar3,0);
      puVar9 = param_1;
      *param_1 = (uint)uVar10;
      param_1 = *(uint **)(*(int *)((int)this + 0xc) + (uint)uVar10 * 4);
      puVar5 = FUN_1000b380((void *)((int)this + 0x10),(uint *)&param_1);
      if ((char)*puVar5 != '\0') goto LAB_100106dd;
      goto LAB_1001072a;
    }
  }
LAB_100106dd:
  uVar8 = 0;
LAB_1001074d:
  local_8 = 1;
  iVar4 = _Mtx_unlock((int)this + 0x54);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  ExceptionList = local_10;
  return uVar8;
}
















/* WARNING: Removing unreachable block (ram,0x100107e7) */

undefined4 __thiscall FUN_10010780(void *this,uint *param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint local_8;
  uint local_4;
  
  lVar6 = FUN_10022190((longlong *)((int)this + 0x40));
  uVar1 = lVar6 + 1;
  uVar4 = (uint)uVar1;
  uVar5 = (uint)(uVar1 >> 0x20);
  local_4 = uVar5;
  uVar7 = __aullrem(uVar4,uVar5,*(uint *)((int)this + 4),0);
  puVar2 = param_1;
  *param_1 = (uint)uVar7;
  if (((uVar5 == 0) && (uVar4 <= *(uint *)((int)this + 4))) ||
     (lVar8 = FUN_10022190((longlong *)((int)this + 0x30)),
     uVar1 < lVar8 + (ulonglong)*(uint *)((int)this + 4))) {
    local_8 = *(uint *)(*(int *)((int)this + 0xc) + *puVar2 * 4);
    puVar3 = FUN_1000b380((void *)((int)this + 0x10),&local_8);
    if ((char)*puVar3 == '\0') {
      puVar3 = (uint *)(*(int *)((int)this + 0x18) + (*puVar2 >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << (*puVar2 & 0x1f));
      FUN_1000ab40((void *)((int)this + 0x40),uVar4,local_4);
      return *(undefined4 *)(*(int *)((int)this + 0xc) + *puVar2 * 4);
    }
  }
  else if (*(char *)((int)this + 8) != '\0') {
    uVar7 = __aullrem((uint)lVar6,(uVar5 - 1) + (uint)(uVar4 != 0),*(uint *)((int)this + 4),0);
    *puVar2 = (uint)uVar7;
    param_1 = *(uint **)(*(int *)((int)this + 0xc) + (uint)uVar7 * 4);
    puVar3 = FUN_1000b380((void *)((int)this + 0x10),(uint *)&param_1);
    if ((char)*puVar3 == '\0') {
      puVar3 = (uint *)(*(int *)((int)this + 0x18) + (*puVar2 >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << (*puVar2 & 0x1f));
      *(undefined1 *)((int)this + 0x50) = 1;
      return *(undefined4 *)(*(int *)((int)this + 0xc) + *puVar2 * 4);
    }
  }
  FUN_1000b6e0((longlong *)((int)this + 0x40));
  return 0;
}
















void __cdecl
FUN_100108d0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            ulonglong *param_7)

{
  if (param_3 - 9U < 7) {
    FUN_10010b30(param_1,param_2,param_3,param_4,param_5,(char)param_6,param_7);
    return;
  }
  if (param_3 < 8) {
    FUN_10010920(param_1,param_2,param_3,param_4,param_5,param_7);
    return;
  }
  if (param_3 == 8) {
    FUN_10010aa0(param_1,param_2,8,param_4,param_5,param_6,(uint *)param_7);
    return;
  }
  FUN_10010a20(param_1,param_2,param_3,param_4,param_5,(char)param_6,(uint *)param_7);
  return;
}

















void __cdecl
FUN_10010920(int param_1,int param_2,int param_3,int param_4,int param_5,ulonglong *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_8;
  
  uVar3 = param_2 * param_5;
  FUN_10010c40(param_1,param_3,uVar3,param_6);
  if (1 < param_4) {
    local_8 = 0;
    FUN_10010c40(param_1,param_3,uVar3 + param_3,&local_8);
    uVar2 = local_8._4_4_ << 0x10 | (uint)local_8 >> 0x10 | *(uint *)((int)param_6 + 4);
    uVar1 = (uint)local_8 << 0x10 | (uint)*param_6;
    *(uint *)param_6 = uVar1;
    *(uint *)((int)param_6 + 4) = uVar2;
    if (2 < param_4) {
      local_8 = 0;
      FUN_10010c40(param_1,param_3,uVar3 + param_3 * 2,&local_8);
      uVar2 = (uint)local_8 | uVar2;
      *(uint *)param_6 = uVar1;
      *(uint *)((int)param_6 + 4) = uVar2;
      if (3 < param_4) {
        local_8 = 0;
        FUN_10010c40(param_1,param_3,uVar3 + param_3 * 3,&local_8);
        *(uint *)param_6 = uVar1;
        *(uint *)((int)param_6 + 4) = (uint)local_8 << 0x10 | uVar2;
      }
    }
  }
  return;
}














void __cdecl
FUN_10010a20(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,char param_6,
            uint *param_7)

{
  uint *puVar1;
  
  puVar1 = (uint *)((param_2 * param_5 >> 3) + param_1);
  if (param_4 == 1) {
    *param_7 = (uint)(ushort)*puVar1;
    param_7[1] = 0;
    return;
  }
  if (param_4 == 2) {
    *param_7 = *puVar1;
    param_7[1] = 0;
    return;
  }
  if (param_4 != 3) {
    if (param_4 == 4) {
      *param_7 = *puVar1;
      param_7[1] = puVar1[1];
    }
    return;
  }
  *param_7 = *puVar1;
  param_7[1] = puVar1[1];
  if (param_6 != '\0') {
    *(undefined2 *)((int)param_7 + 6) = 0;
    return;
  }
  *(undefined2 *)param_7 = 0;
  return;
}














void __cdecl
FUN_10010aa0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,
            uint *param_7)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)((param_2 * param_5 >> 3) + param_1);
  bVar1 = *pbVar3;
  *param_7 = (uint)bVar1;
  param_7[1] = 0;
  if (1 < param_4) {
    uVar4 = (uint)pbVar3[1] << 0x10 | (uint)bVar1;
    *param_7 = uVar4;
    param_7[1] = 0;
    if (2 < param_4) {
      bVar1 = pbVar3[2];
      *param_7 = uVar4;
      param_7[1] = (uint)bVar1;
      if (3 < param_4) {
        bVar2 = pbVar3[3];
        *param_7 = uVar4;
        param_7[1] = (uint)bVar2 << 0x10 | (uint)bVar1;
      }
    }
  }
  return;
}













void __cdecl
FUN_10010b30(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6,
            ulonglong *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_8;
  
  uVar3 = param_2 * param_5;
  FUN_10010cd0(param_1,param_3,uVar3,param_6,param_7);
  if (1 < param_4) {
    local_8 = 0;
    FUN_10010cd0(param_1,param_3,uVar3 + param_3,param_6,&local_8);
    uVar2 = local_8._4_4_ << 0x10 | (uint)local_8 >> 0x10 | *(uint *)((int)param_7 + 4);
    uVar1 = (uint)local_8 << 0x10 | (uint)*param_7;
    *(uint *)param_7 = uVar1;
    *(uint *)((int)param_7 + 4) = uVar2;
    if (2 < param_4) {
      local_8 = 0;
      FUN_10010cd0(param_1,param_3,uVar3 + param_3 * 2,param_6,&local_8);
      uVar2 = (uint)local_8 | uVar2;
      *(uint *)param_7 = uVar1;
      *(uint *)((int)param_7 + 4) = uVar2;
      if (3 < param_4) {
        local_8 = 0;
        FUN_10010cd0(param_1,param_3,uVar3 + param_3 * 3,param_6,&local_8);
        *(uint *)param_7 = uVar1;
        *(uint *)((int)param_7 + 4) = (uint)local_8 << 0x10 | uVar2;
      }
    }
  }
  return;
}













void __cdecl FUN_10010c40(int param_1,int param_2,uint param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = param_3 & 0x80000007;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  uVar1 = (uint)*(byte *)(((int)param_3 >> 3) + param_1);
  *(uint *)param_4 = uVar1;
  *(undefined4 *)((int)param_4 + 4) = 0;
  if (uVar2 != 0) {
    uVar3 = __aullshr((byte)uVar2,0);
    uVar1 = (uint)uVar3;
    *param_4 = uVar3;
  }
  if (param_2 == 1) {
    *(undefined4 *)((int)param_4 + 4) = 0;
    *(uint *)param_4 = uVar1 & 1;
    return;
  }
  if (param_2 == 2) {
    *(undefined4 *)((int)param_4 + 4) = 0;
    *(uint *)param_4 = uVar1 & 3;
    return;
  }
  if (param_2 == 4) {
    *(undefined4 *)((int)param_4 + 4) = 0;
    *(uint *)param_4 = uVar1 & 0xf;
  }
  return;
}














void __cdecl FUN_10010cd0(int param_1,int param_2,uint param_3,char param_4,ulonglong *param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = param_3 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  uVar1 = *(uint *)(((int)param_3 >> 3) + param_1);
  *(uint *)param_5 = uVar1;
  *(undefined4 *)((int)param_5 + 4) = 0;
  bVar2 = (byte)uVar3;
  if (param_4 == '\0') {
    bVar2 = ('@' - bVar2) - (char)param_2;
  }
  else if (uVar3 == 0) goto LAB_10010d23;
  uVar4 = __aullshr(bVar2,0);
  uVar1 = (uint)uVar4;
  *param_5 = uVar4;
LAB_10010d23:
  if (param_2 == 10) {
    *(undefined4 *)((int)param_5 + 4) = 0;
    *(uint *)param_5 = uVar1 & 0x3ff;
    return;
  }
  if (param_2 != 0xc) {
    if (param_2 == 0xe) {
      *(undefined4 *)((int)param_5 + 4) = 0;
      *(uint *)param_5 = uVar1 & 0x3fff;
    }
    return;
  }
  *(undefined4 *)((int)param_5 + 4) = 0;
  *(uint *)param_5 = uVar1 & 0xfff;
  return;
}















void __fastcall FUN_10010d80(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"Height",6);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}














void __fastcall FUN_10010e60(int param_1)

{
  ushort *this;
  byte *_Str;
  void *pvVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a818;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"Width",5);
  local_8 = 0;
  _Str = FUN_1000b400(this,(byte *)local_2c);
  if (0xf < *(uint *)(_Str + 0x14)) {
    _Str = *(byte **)_Str;
  }
  atoi((char *)_Str);
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

















void FUN_10010f40(byte *param_1,byte *param_2,int *param_3,char param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  LPCWSTR ****pppppWVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  LPCWSTR *****ppppppWVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  byte *pbVar18;
  uint *puVar19;
  uint ******ppppppuVar20;
  byte *pbVar21;
  uint *puVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  bool bVar25;
  uint uStack_1e0;
  undefined4 *local_1bc;
  byte *local_1b8;
  byte *local_1b4;
  byte *local_1b0;
  byte *local_1ac;
  byte *local_1a8;
  undefined4 *local_1a4;
  byte *local_1a0;
  char local_199;
  byte *local_198;
  byte *local_194;
  uint local_190;
  int *local_18c;
  byte *local_188;
  byte *local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint *****local_160 [4];
  int local_150;
  uint local_14c;
  LPCWSTR ****local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  LPCWSTR ****local_130 [4];
  uint local_120;
  uint local_11c;
  char local_118 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a9e5;
  local_10 = ExceptionList;
  uStack_1e0 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1e0;
  ExceptionList = &local_10;
  local_1a8 = param_1;
  local_188 = param_2;
  local_18c = param_3;
  local_198 = (byte *)0x0;
  local_18 = uStack_1e0;
  iVar10 = _access((char *)param_2,4);
  if (iVar10 == 0) {
    FUN_10002450((int *)*param_3,(int *)param_3[1]);
    param_3[1] = *param_3;
    local_184 = (byte *)0x0;
    local_1b4 = (byte *)0x0;
    local_194 = (byte *)0x0;
    local_1b0 = (byte *)0x0;
    local_1ac = (byte *)0x0;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    local_1a0 = (byte *)((uint)local_1a0 & 0xffffff00);
    pbVar18 = param_2;
    do {
      bVar3 = *pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (bVar3 != 0);
    FUN_10002110((LPWSTR)local_130,(LPCSTR)param_2,(int)pbVar18 - (int)(param_2 + 1));
    local_190 = 1;
    local_1bc = (undefined4 *)0x0;
    local_1b8 = (byte *)0x0;
    local_8._0_1_ = 4;
    iVar10 = FUN_10002d60(&local_1bc,local_130,0);
    if (iVar10 == 0) {
      FUN_100237b0((int *)local_130);
      pbVar18 = local_1b8;
      puVar23 = local_1bc;
      if (local_1b8 != (byte *)0x0) {
        LOCK();
        *(int *)(local_1b8 + 4) = *(int *)(local_1b8 + 4) + 1;
        UNLOCK();
      }
      local_1a4 = local_1bc;
      local_1a0 = local_1b8;
      if (local_1b8 != (byte *)0x0) {
        LOCK();
        *(int *)(local_1b8 + 4) = *(int *)(local_1b8 + 4) + 1;
        UNLOCK();
        LOCK();
        iVar10 = *(int *)(local_1b8 + 4) + -1;
        *(int *)(local_1b8 + 4) = iVar10;
        UNLOCK();
        if (iVar10 == 0) {
          (*(code *)**(undefined4 **)local_1b8)();
          LOCK();
          iVar10 = *(int *)(local_1b8 + 8) + -1;
          *(int *)(local_1b8 + 8) = iVar10;
          UNLOCK();
          if (iVar10 == 0) {
            (**(code **)(*(int *)local_1b8 + 4))();
          }
        }
      }
      local_8._0_1_ = 8;
      do {
        if (puVar23 == (undefined4 *)0x0) {
          if (pbVar18 != (byte *)0x0) {
            LOCK();
            iVar10 = *(int *)(pbVar18 + 4) + -1;
            *(int *)(pbVar18 + 4) = iVar10;
            UNLOCK();
            if (iVar10 == 0) {
              (*(code *)**(undefined4 **)pbVar18)();
              LOCK();
              iVar10 = *(int *)(pbVar18 + 8) + -1;
              *(int *)(pbVar18 + 8) = iVar10;
              UNLOCK();
              if (iVar10 == 0) {
                (**(code **)(*(int *)pbVar18 + 4))();
              }
            }
          }
          pbVar18 = local_1b8;
          if (local_1b8 != (byte *)0x0) {
            LOCK();
            iVar10 = *(int *)(local_1b8 + 4) + -1;
            *(int *)(local_1b8 + 4) = iVar10;
            UNLOCK();
            if (iVar10 == 0) {
              (*(code *)**(undefined4 **)local_1b8)();
              LOCK();
              pbVar1 = pbVar18 + 8;
              iVar10 = *(int *)pbVar1;
              *(int *)pbVar1 = *(int *)pbVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*(int *)pbVar18 + 4))();
              }
            }
          }
          pbVar18 = local_184;
          pbVar1 = local_194;
          local_8 = 1;
          if (local_184 == local_194) {
            if (param_4 != '\0') {
              memset(local_118,0,0xff);
              FUN_10027e10(local_118,"Error: Fail to load UC data file with the mode \'%s\' from %s"
                          );
              pcVar17 = local_118;
              local_120 = 0;
              local_11c = 0xf;
              local_130[0] = (LPCWSTR ****)((uint)local_130[0] & 0xffffff00);
              do {
                cVar2 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar2 != '\0');
              FUN_100243b0(local_130,local_118,(int)pcVar17 - (int)(local_118 + 1));
              local_8 = CONCAT31(local_8._1_3_,0xf);
              goto LAB_10011610;
            }
            goto LAB_10011686;
          }
          FUN_10005670(local_18c,4);
          local_1a0 = (byte *)0x0;
          pbVar1 = (byte *)(((int)pbVar1 - (int)pbVar18) / 0x18);
          if (pbVar1 == (byte *)0x0) goto LAB_1001180d;
          goto LAB_100116d0;
        }
        local_180 = *puVar23;
        uStack_17c = puVar23[1];
        uStack_178 = puVar23[2];
        uStack_174 = puVar23[3];
        local_170 = puVar23[4];
        uStack_16c = puVar23[5];
        uStack_168 = puVar23[6];
        uStack_164 = puVar23[7];
        FUN_10007440(local_160,puVar23 + 8);
        ppppppuVar20 = local_160;
        if (7 < local_14c) {
          ppppppuVar20 = (uint ******)local_160[0];
        }
        local_8._0_1_ = 9;
        puVar19 = (uint *)((int)ppppppuVar20 + local_150 * 2);
        puVar11 = FUN_100219e0((uint *)ppppppuVar20,puVar19);
        puVar22 = puVar11;
        if (puVar11 == puVar19) {
LAB_10011242:
          puVar19 = puVar22;
          puVar22 = puVar19;
        }
        else {
          do {
            if ((short)*puVar22 == 0x3a) break;
            puVar22 = (uint *)((int)puVar22 + 2);
          } while (puVar22 != puVar19);
          if ((puVar11 == puVar22) || (puVar19 = (uint *)((int)puVar22 + -2), puVar11 == puVar19))
          goto LAB_10011242;
          if (*(short *)puVar19 != 0x2e) {
            for (puVar19 = puVar22 + -1; puVar11 != puVar19; puVar19 = (uint *)((int)puVar19 + -2))
            {
              if ((short)*puVar19 == 0x2e) goto LAB_10011244;
            }
            goto LAB_10011242;
          }
          if ((puVar11 == puVar22 + -1) && ((short)puVar22[-1] == 0x2e)) goto LAB_10011242;
        }
LAB_10011244:
        local_138 = 0;
        uStack_134 = 7;
        local_148 = (LPCWSTR ****)((uint)local_148 & 0xffff0000);
        FUN_100244a0(&local_148,puVar19,(int)puVar22 - (int)puVar19 >> 1);
        local_8 = CONCAT31(local_8._1_3_,10);
        ppppppWVar13 = &local_148;
        if (7 < uStack_134) {
          ppppppWVar13 = (LPCWSTR *****)local_148;
        }
        uVar15 = local_138;
        uVar12 = FUN_100282b9();
        FUN_10002250((LPSTR)local_130,uVar12,(LPCWSTR)ppppppWVar13,uVar15);
        uVar15 = local_11c;
        pppppWVar9 = local_130[0];
        local_190 = local_190 | 0x7e;
        ppppppWVar13 = local_130;
        if (0xf < local_11c) {
          ppppppWVar13 = (LPCWSTR *****)local_130[0];
        }
        uVar12 = FUN_10006650((byte *)ppppppWVar13,local_120,&DAT_1002dd24,4);
        local_199 = (char)uVar12;
        if (0xf < uVar15) {
          ppppppWVar13 = (LPCWSTR *****)pppppWVar9;
          if ((0xfff < uVar15 + 1) &&
             (ppppppWVar13 = (LPCWSTR *****)pppppWVar9[-1],
             (byte *)0x1f < (byte *)((int)pppppWVar9 + (-4 - (int)ppppppWVar13)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_100284c9(ppppppWVar13);
        }
        local_120 = 0;
        local_11c = 0xf;
        local_130[0] = (LPCWSTR ****)((uint)local_130[0] & 0xffffff00);
        local_8._0_1_ = 9;
        FUN_100237b0((int *)&local_148);
        if (local_199 != '\0') {
          ppppppuVar20 = local_160;
          if (7 < local_14c) {
            ppppppuVar20 = (uint ******)local_160[0];
          }
          puVar19 = (uint *)((int)ppppppuVar20 + local_150 * 2);
          puVar22 = FUN_100219e0((uint *)ppppppuVar20,puVar19);
          local_120 = 0;
          local_11c = 7;
          local_130[0] = (LPCWSTR ****)((uint)local_130[0] & 0xffff0000);
          FUN_100244a0(local_130,puVar22,(int)puVar19 - (int)puVar22 >> 1);
          local_8._0_1_ = 0xb;
          ppppppWVar13 = local_130;
          if (7 < local_11c) {
            ppppppWVar13 = (LPCWSTR *****)local_130[0];
          }
          uVar15 = local_120;
          uVar12 = FUN_100282b9();
          FUN_10002250((LPSTR)&local_148,uVar12,(LPCWSTR)ppppppWVar13,uVar15);
          local_190 = local_190 | 0x1f80;
          local_8._0_1_ = 0xc;
          if (local_1ac == local_194) {
            FUN_10002c00(&local_1b4,(int *)local_194,(int *)&local_148);
            local_184 = local_1b4;
          }
          else {
            local_194[0x10] = 0;
            local_194[0x11] = 0;
            local_194[0x12] = 0;
            local_194[0x13] = 0;
            local_194[0x14] = 0;
            local_194[0x15] = 0;
            local_194[0x16] = 0;
            local_194[0x17] = 0;
            *(LPCWSTR *****)local_194 = local_148;
            *(undefined4 *)(local_194 + 4) = uStack_144;
            *(undefined4 *)(local_194 + 8) = uStack_140;
            *(undefined4 *)(local_194 + 0xc) = uStack_13c;
            *(ulonglong *)(local_194 + 0x10) = CONCAT44(uStack_134,local_138);
            local_1b0 = local_194 + 0x18;
            local_138 = 0;
            uStack_134 = 0xf;
            local_148 = (LPCWSTR ****)((uint)local_148 & 0xffffff00);
          }
          local_8._0_1_ = 0xb;
          local_194 = local_1b0;
          if (0xf < uStack_134) {
            ppppppWVar13 = (LPCWSTR *****)local_148;
            if ((0xfff < uStack_134 + 1) &&
               (ppppppWVar13 = (LPCWSTR *****)local_148[-1],
               0x1f < (uint)((int)local_148 + (-4 - (int)ppppppWVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(ppppppWVar13);
          }
          local_138 = 0;
          uStack_134 = 0xf;
          local_148 = (LPCWSTR ****)((uint)local_148 & 0xffffff00);
          FUN_100237b0((int *)local_130);
        }
        local_8._0_1_ = 8;
        FUN_100237b0((int *)local_160);
        iVar10 = FUN_1001e160(&local_1a4);
        puVar23 = local_1a4;
        pbVar18 = local_1a0;
      } while (iVar10 == 0);
    }
    else {
      iVar10 = FUN_100235c0("directory_iterator::directory_iterator",iVar10,(LPCWSTR)local_130);
    }
    FUN_10023540("directory_iterator::operator++",iVar10);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  memset(local_118,0,0xff);
  FUN_10027e10(local_118,"Error: No read permission to %s");
  pcVar17 = local_118;
  local_120 = 0;
  local_11c = 0xf;
  local_130[0] = (LPCWSTR ****)((uint)local_130[0] & 0xffffff00);
  do {
    cVar2 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar2 != '\0');
  FUN_100243b0(local_130,local_118,(int)pcVar17 - (int)(local_118 + 1));
  local_8 = 0;
  FUN_10019700(local_130);
  if (0xf < local_11c) {
    ppppppWVar13 = (LPCWSTR *****)local_130[0];
    if ((0xfff < local_11c + 1) &&
       (ppppppWVar13 = (LPCWSTR *****)local_130[0][-1],
       (byte *)0x1f < (byte *)((int)local_130[0] + (-4 - (int)ppppppWVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(ppppppWVar13);
  }
  goto LAB_10011668;
LAB_100116d0:
  do {
    pbVar24 = local_1a8;
    do {
      bVar3 = *pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (bVar3 != 0);
    local_194 = *(byte **)(pbVar18 + 0x10);
    pbVar24 = pbVar24 + -(int)(local_1a8 + 1);
    local_190 = *(uint *)(pbVar18 + 0x14);
    local_188 = pbVar18;
    if (0xf < local_190) {
      local_188 = *(byte **)pbVar18;
    }
    pbVar21 = pbVar18;
    if (pbVar24 <= local_194) {
      if (pbVar24 == (byte *)0x0) {
LAB_10011894:
        uVar15 = *(uint *)(pbVar18 + 0x14);
        local_188 = pbVar18;
        if (0xf < uVar15) {
          local_188 = *(byte **)pbVar18;
        }
        if ((byte *)0x4 < local_194) {
          local_198 = local_194 + -4 + (int)local_188;
          pbVar24 = memchr(local_188,0x5f,(int)local_198 - (int)local_188);
          pbVar18 = local_184;
          while (local_184 = pbVar18, pbVar24 != (byte *)0x0) {
            pbVar14 = &DAT_1002dd68;
            iVar10 = 1;
            pbVar21 = pbVar24;
            if (*(int *)pbVar24 == 0x7261445f) {
              pbVar21 = pbVar24 + 4;
              iVar10 = -3;
              pbVar14 = &DAT_1002dd6c;
            }
            bVar25 = *pbVar21 < *pbVar14;
            if ((*pbVar21 == *pbVar14) &&
               ((iVar10 == -3 ||
                (((bVar25 = pbVar21[1] < pbVar14[1], pbVar21[1] == pbVar14[1] &&
                  (bVar25 = pbVar21[2] < pbVar14[2], pbVar21[2] == pbVar14[2])) &&
                 (bVar25 = pbVar21[3] < pbVar14[3], pbVar21[3] == pbVar14[3])))))) {
              uVar15 = 0;
            }
            else {
              uVar15 = -(uint)bVar25 | 1;
            }
            if (uVar15 == 0) {
              uVar15 = local_190;
              if ((int)pbVar24 - (int)local_188 != -1) {
                pbVar21 = pbVar18;
                if ((byte *)*local_18c != pbVar18) {
                  pbVar24 = pbVar18;
                  if (0xf < *(uint *)(pbVar18 + 0x14)) {
                    pbVar24 = *(byte **)pbVar18;
                  }
                  FUN_100243b0((byte *)*local_18c,pbVar24,*(uint *)(pbVar18 + 0x10));
                }
                goto LAB_100117eb;
              }
              break;
            }
            pbVar24 = memchr(pbVar24 + 1,0x5f,(int)local_198 - (int)(pbVar24 + 1));
            uVar15 = local_190;
            pbVar18 = local_184;
          }
        }
        local_188 = pbVar18;
        if (0xf < uVar15) {
          local_188 = *(byte **)pbVar18;
        }
        if ((byte *)0x9 < local_194) {
          local_198 = local_194 + -9 + (int)local_188;
          pbVar24 = memchr(local_188,0x5f,(int)local_198 - (int)local_188);
          if (pbVar24 == (byte *)0x0) {
            uVar15 = *(uint *)(pbVar18 + 0x14);
          }
          else {
            do {
              pbVar21 = local_184;
              pcVar17 = "_Threshold";
              uVar15 = 6;
              pbVar18 = pbVar24;
              do {
                if (*(int *)pbVar18 != *(int *)pcVar17) break;
                pbVar18 = pbVar18 + 4;
                pcVar17 = pcVar17 + 4;
                bVar25 = 3 < uVar15;
                uVar15 = uVar15 - 4;
              } while (bVar25);
              bVar25 = *pbVar18 < (byte)*pcVar17;
              if (((*pbVar18 == *pcVar17) &&
                  (bVar25 = pbVar18[1] < (byte)pcVar17[1], pbVar18[1] == pcVar17[1])) &&
                 ((uVar15 == 0xfffffffe ||
                  ((bVar25 = pbVar18[2] < (byte)pcVar17[2], pbVar18[2] == pcVar17[2] &&
                   (bVar25 = pbVar18[3] < (byte)pcVar17[3], pbVar18[3] == pcVar17[3])))))) {
                uVar15 = 0;
              }
              else {
                uVar15 = -(uint)bVar25 | 1;
              }
              if (uVar15 == 0) {
                pbVar18 = local_184;
                uVar15 = local_190;
                if ((int)pbVar24 - (int)local_188 != -1) {
                  if ((byte *)(*local_18c + 0x18) != local_184) {
                    if (0xf < *(uint *)(local_184 + 0x14)) {
                      pbVar18 = *(byte **)local_184;
                    }
                    FUN_100243b0((byte *)(*local_18c + 0x18),pbVar18,*(uint *)(local_184 + 0x10));
                  }
                  goto LAB_100117eb;
                }
                break;
              }
              pbVar24 = memchr(pbVar24 + 1,0x5f,(int)local_198 - (int)(pbVar24 + 1));
              pbVar18 = local_184;
              uVar15 = local_190;
            } while (pbVar24 != (byte *)0x0);
          }
        }
        uVar12 = FUN_10024d70(pbVar18,(byte *)"_Gain0",0);
        pbVar21 = pbVar18;
        if (uVar12 == 0xffffffff) {
          uVar12 = FUN_10024d70(pbVar18,(byte *)"_Offset0",0);
          if (uVar12 == 0xffffffff) {
            uVar15 = 0;
            uVar12 = FUN_100258b0(pbVar18,&DAT_1002dd90,0xffffffff);
            uVar16 = FUN_100258b0(local_184,(byte *)"_Gain",0xffffffff);
            if (uVar16 == 0xffffffff) {
              uVar16 = FUN_100258b0(local_184,(byte *)"_Offset",0xffffffff);
              if (uVar16 != 0xffffffff) {
                pcVar17 = FUN_10025990(local_184,(undefined1 *)&local_148,uVar16 + 7,
                                       (uVar12 - uVar16) - 7);
                if (0xf < *(uint *)(pcVar17 + 0x14)) {
                  pcVar17 = *(char **)pcVar17;
                }
                iVar10 = atoi(pcVar17);
                ppppppWVar13 = &local_148;
                uVar15 = iVar10 * 2 + 3;
                goto LAB_10011bb4;
              }
            }
            else {
              pcVar17 = FUN_10025990(local_184,(undefined1 *)local_130,uVar16 + 5,
                                     (uVar12 - uVar16) - 5);
              if (0xf < *(uint *)(pcVar17 + 0x14)) {
                pcVar17 = *(char **)pcVar17;
              }
              iVar10 = atoi(pcVar17);
              ppppppWVar13 = local_130;
              uVar15 = iVar10 * 2 + 2;
LAB_10011bb4:
              FUN_10009740((int *)ppppppWVar13);
            }
            piVar8 = local_18c;
            iVar10 = *local_18c;
            if ((local_18c[1] - iVar10) / 0x18 - 1U < uVar15) {
              FUN_10005670(local_18c,uVar15 + 1);
              iVar10 = *piVar8;
            }
            pbVar21 = local_184;
            pbVar18 = (byte *)(iVar10 + uVar15 * 0x18);
            if (pbVar18 != local_184) {
              pbVar24 = local_184;
              if (0xf < *(uint *)(local_184 + 0x14)) {
                pbVar24 = *(byte **)local_184;
              }
              FUN_100243b0(pbVar18,pbVar24,*(uint *)(local_184 + 0x10));
            }
          }
          else if ((byte *)(*local_18c + 0x48) != pbVar18) {
            pbVar24 = pbVar18;
            if (0xf < uVar15) {
              pbVar24 = *(byte **)pbVar18;
            }
            FUN_100243b0((byte *)(*local_18c + 0x48),pbVar24,*(uint *)(pbVar18 + 0x10));
          }
        }
        else if ((byte *)(*local_18c + 0x30) != pbVar18) {
          pbVar24 = pbVar18;
          if (0xf < uVar15) {
            pbVar24 = *(byte **)pbVar18;
          }
          FUN_100243b0((byte *)(*local_18c + 0x30),pbVar24,*(uint *)(pbVar18 + 0x10));
        }
      }
      else {
        local_1b8 = local_188 + (int)(local_194 + (1 - (int)pbVar24));
        local_198 = (byte *)(int)(char)*local_1a8;
        pbVar14 = memchr(local_188,(int)local_198,(int)local_1b8 - (int)local_188);
        pbVar18 = local_184;
        while (pbVar5 = pbVar14, pbVar6 = local_1a8, pbVar7 = pbVar24, pbVar14 != (byte *)0x0) {
          while (pbVar21 = pbVar7 + -4, (byte *)0x3 < pbVar7) {
            if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_1001177a;
            pbVar5 = pbVar5 + 4;
            pbVar6 = pbVar6 + 4;
            pbVar7 = pbVar21;
          }
          if (pbVar21 == (byte *)0xfffffffc) {
LAB_100117ae:
            uVar15 = 0;
          }
          else {
LAB_1001177a:
            bVar25 = *pbVar5 < *pbVar6;
            if ((*pbVar5 == *pbVar6) &&
               ((pbVar21 == (byte *)0xfffffffd ||
                ((bVar25 = pbVar5[1] < pbVar6[1], pbVar5[1] == pbVar6[1] &&
                 ((pbVar21 == (byte *)0xfffffffe ||
                  ((bVar25 = pbVar5[2] < pbVar6[2], pbVar5[2] == pbVar6[2] &&
                   ((pbVar21 == (byte *)0xffffffff ||
                    (bVar25 = pbVar5[3] < pbVar6[3], pbVar5[3] == pbVar6[3]))))))))))))
            goto LAB_100117ae;
            uVar15 = -(uint)bVar25 | 1;
          }
          local_184 = pbVar18;
          if (uVar15 == 0) {
            pbVar21 = pbVar18;
            if ((int)pbVar14 - (int)local_188 != -1) goto LAB_10011894;
            break;
          }
          pbVar14 = memchr(pbVar14 + 1,(int)local_198,(int)local_1b8 - (int)(pbVar14 + 1));
          pbVar21 = local_184;
          pbVar18 = local_184;
        }
      }
    }
LAB_100117eb:
    pbVar18 = pbVar21 + 0x18;
    local_1a0 = local_1a0 + 1;
    local_184 = pbVar18;
  } while (local_1a0 < pbVar1);
LAB_1001180d:
  if (param_4 != '\0') {
    local_1a0 = (byte *)*local_18c;
    uVar15 = (local_18c[1] - (int)local_1a0) / 0x18;
    if ((uVar15 & 1) != 0) {
      local_120 = 0;
      local_11c = 0xf;
      local_130[0] = (LPCWSTR ****)((uint)local_130[0]._1_3_ << 8);
      FUN_100243b0(local_130,"The number of UC data files is incorrect",0x28);
      local_8 = CONCAT31(local_8._1_3_,0x10);
LAB_10011610:
      FUN_10019700(local_130);
      if (0xf < local_11c) {
        ppppppWVar13 = (LPCWSTR *****)local_130[0];
        if ((0xfff < local_11c + 1) &&
           (ppppppWVar13 = (LPCWSTR *****)local_130[0][-1],
           (byte *)0x1f < (byte *)((int)local_130[0] + (-4 - (int)ppppppWVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_100284c9(ppppppWVar13);
      }
      FUN_10009ba0((int *)&local_1b4);
      goto LAB_10011668;
    }
    uVar12 = 0;
    if (uVar15 != 0) {
      pbVar18 = local_1a0 + 0x10;
      do {
        if (*(int *)pbVar18 == 0) {
          local_120 = 0;
          local_11c = 0xf;
          local_130[0] = (LPCWSTR ****)((uint)local_130[0]._1_3_ << 8);
          FUN_100243b0(local_130,"The number of UC data files is incorrect",0x28);
          local_8 = CONCAT31(local_8._1_3_,0x11);
          goto LAB_10011610;
        }
        uVar12 = uVar12 + 1;
        pbVar18 = pbVar18 + 0x18;
      } while (uVar12 < (uint)((local_18c[1] - (int)local_1a0) / 0x18));
      FUN_10009ba0((int *)&local_1b4);
      goto LAB_10011668;
    }
  }
LAB_10011686:
  FUN_10009ba0((int *)&local_1b4);
LAB_10011668:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}















void __fastcall FUN_10011d60(int param_1)

{
  uint *puVar1;
  ushort *this;
  byte *pbVar2;
  void *pvVar3;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002a438;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = FUN_1000b180(&DAT_100348f0,(ushort *)(param_1 + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"AutoJudgeImageMode",0x12);
  local_8 = 0;
  pbVar2 = FUN_1000b400(this,(byte *)local_2c);
  puVar1 = (uint *)(pbVar2 + 0x10);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  FUN_10006650(pbVar2,*puVar1,&DAT_1002db64,2);
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar3 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

















void __thiscall FUN_10011e40(void *this,undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 *this_00;
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *****pppppuVar8;
  undefined4 *puVar9;
  char *****pppppcVar10;
  FILE *_File;
  byte *pbVar11;
  void *pvVar12;
  char *pcVar13;
  ushort *puVar14;
  byte *pbVar15;
  bool bVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 local_1e8;
  undefined4 *local_1e0;
  int *local_1dc;
  byte *local_1d8;
  uint local_1d4;
  int local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  FILE *local_1bc;
  FILE *local_1b8;
  byte *local_1b4;
  undefined8 local_1b0;
  void *local_1a8;
  byte *local_1a4;
  byte *local_1a0;
  undefined1 local_199;
  byte *local_198;
  void *local_194 [4];
  undefined4 local_184;
  uint local_180;
  undefined4 ****local_17c [4];
  uint local_16c;
  uint local_168;
  void *local_164 [4];
  undefined4 local_154;
  uint local_150;
  char ****local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 local_13c;
  char local_134 [256];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002aa5e;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b8 = (FILE *)0x0;
  local_1bc = (FILE *)0x0;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_1a0 = param_3;
  local_1a8 = this;
  iVar5 = FUN_10010e60(*(int *)((int)this + 0x6c));
  iVar6 = FUN_10010d80(*(int *)((int)local_1a8 + 0x6c));
  local_1d4 = iVar6 * iVar5;
  local_1e0 = (undefined4 *)((int)local_1a8 + 0x38);
  local_1dc = (int *)((int)local_1a8 + 0x2c);
  *(undefined4 *)((int)local_1a8 + 0x30) = *(undefined4 *)((int)local_1a8 + 0x2c);
  *(undefined4 *)((int)local_1a8 + 0x3c) = *local_1e0;
  this_00 = (undefined4 *)((int)local_1a8 + 0x44);
  *(undefined4 *)((int)local_1a8 + 0x48) = *(undefined4 *)((int)local_1a8 + 0x44);
  local_34 = ZEXT816(0);
  local_24 = local_34;
  FUN_10027e10(local_34,"UCMode%u_%s");
  local_1d0 = 0;
  local_1cc = 0;
  local_1c8 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  cVar4 = FUN_10010f40(local_34,param_3,&local_1d0,'\x01');
  if (cVar4 == '\0') {
    local_199 = 0;
  }
  else {
    if ((param_2 == 0) &&
       (local_1b0 = local_1b0 & 0xffffffff, iVar5 = local_1cc - local_1d0 >> 0x1f,
       (local_1cc - local_1d0) / 0x18 + iVar5 != iVar5)) {
      local_198 = (byte *)0x0;
      do {
        local_1b4 = local_198 + local_1d0;
        local_1a4 = local_1b4;
        if (0xf < *(uint *)(local_198 + local_1d0 + 0x14)) {
          local_1a4 = *(byte **)local_1b4;
        }
        if (6 < *(uint *)(local_1b4 + 0x10)) {
          iVar5 = *(uint *)(local_1b4 + 0x10) - 7;
          iVar6 = -1;
          if (iVar5 != -1) {
            iVar6 = iVar5;
          }
          pbVar15 = local_1a4 + iVar6;
          do {
            if (*pbVar15 == 0x5f) {
              pcVar13 = "_Offset";
              iVar5 = 3;
              pbVar11 = pbVar15;
              if (*(int *)pbVar15 == 0x66664f5f) {
                pbVar11 = pbVar15 + 4;
                pcVar13 = "set";
                iVar5 = -1;
              }
              bVar16 = *pbVar11 < (byte)*pcVar13;
              if ((((*pbVar11 == *pcVar13) &&
                   (bVar16 = pbVar11[1] < (byte)pcVar13[1], pbVar11[1] == pcVar13[1])) &&
                  (bVar16 = pbVar11[2] < (byte)pcVar13[2], pbVar11[2] == pcVar13[2])) &&
                 ((iVar5 == -1 || (bVar16 = pbVar11[3] < (byte)pcVar13[3], pbVar11[3] == pcVar13[3])
                  ))) {
                uVar7 = 0;
              }
              else {
                uVar7 = -(uint)bVar16 | 1;
              }
              if (uVar7 == 0) {
                if ((int)pbVar15 - (int)local_1a4 != -1) goto LAB_10012070;
                break;
              }
            }
            if (pbVar15 == local_1a4) break;
            pbVar15 = pbVar15 + -1;
          } while( true );
        }
        pbVar15 = local_1b4;
        if (0xf < *(uint *)(local_1b4 + 0x14)) {
          pbVar15 = *(byte **)local_1b4;
        }
        local_1b4[0x10] = 0;
        local_1b4[0x11] = 0;
        local_1b4[0x12] = 0;
        local_1b4[0x13] = 0;
        *pbVar15 = 0;
LAB_10012070:
        local_198 = local_198 + 0x18;
        uVar7 = (int)local_1b0._4_4_ + 1;
        local_1b0 = CONCAT44(uVar7,(undefined4)local_1b0);
        param_3 = local_1a0;
      } while (uVar7 < (uint)((local_1cc - local_1d0) / 0x18));
    }
    local_16c = 0;
    local_168 = 0xf;
    local_17c[0] = (undefined4 ****)((uint)local_17c[0] & 0xffffff00);
    pbVar15 = param_3;
    do {
      bVar2 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar2 != 0);
    FUN_100243b0(local_17c,param_3,(int)pbVar15 - (int)(param_3 + 1));
    local_8._0_1_ = 1;
    local_1b4 = (byte *)0x0;
    iVar5 = local_1cc - local_1d0 >> 0x1f;
    iVar6 = local_1d0;
    if ((local_1cc - local_1d0) / 0x18 + iVar5 != iVar5) {
      do {
        uVar7 = local_16c;
        puVar9 = (undefined4 *)(iVar6 + (int)local_1b4 * 0x18);
        if (*(int *)(iVar6 + 0x10 + (int)local_1b4 * 0x18) == 0) goto LAB_100125cf;
        local_1bc = (FILE *)((uint)local_1bc | 1);
        local_8._0_1_ = 2;
        local_154 = 0;
        local_150 = 0xf;
        local_164[0] = (void *)((uint)local_164[0] & 0xffffff00);
        local_1b8 = local_1bc;
        FUN_100256a0(local_164,local_16c + 1);
        pppppuVar8 = local_17c;
        if (0xf < local_168) {
          pppppuVar8 = (undefined4 *****)local_17c[0];
        }
        FUN_10023f40(local_164,pppppuVar8,uVar7);
        FUN_10023f40(local_164,&DAT_1002d974,1);
        puVar1 = puVar9 + 4;
        if (0xf < (uint)puVar9[5]) {
          puVar9 = (undefined4 *)*puVar9;
        }
        puVar9 = FUN_10023f40(local_164,puVar9,*puVar1);
        local_14c = (char ****)*puVar9;
        uStack_148 = puVar9[1];
        uStack_144 = puVar9[2];
        uStack_140 = puVar9[3];
        local_13c = *(undefined8 *)(puVar9 + 4);
        puVar9[4] = 0;
        puVar9[5] = 0xf;
        *(undefined1 *)puVar9 = 0;
        local_1bc = (FILE *)((uint)local_1bc & 0xfffffffe | 2);
        local_8._0_1_ = 4;
        if (0xf < local_150) {
          pvVar12 = local_164[0];
          if ((0xfff < local_150 + 1) &&
             (pvVar12 = *(void **)((int)local_164[0] + -4),
             0x1f < (uint)((int)local_164[0] + (-4 - (int)pvVar12)))) goto LAB_1001272b;
          FUN_100284c9(pvVar12);
        }
        local_154 = 0;
        local_150 = 0xf;
        local_164[0] = (void *)((uint)local_164[0] & 0xffffff00);
        if (local_1b4 == (byte *)0x0) {
          pbVar15 = (byte *)0x2;
        }
        else if (local_1b4 == (byte *)0x1) {
          pbVar15 = (byte *)0x3;
        }
        else {
          pbVar15 = (byte *)((uint)local_1b4 & 1);
        }
        pppppcVar10 = &local_14c;
        if (0xf < local_13c._4_4_) {
          pppppcVar10 = (char *****)local_14c;
        }
        _File = fopen((char *)pppppcVar10,"rb");
        local_1b8 = _File;
        if (_File == (FILE *)0x0) {
          memset(local_134,0,0xff);
          FUN_10027e10(local_134,"Error: Fail to read file %s");
          pcVar13 = local_134;
          local_184 = 0;
          local_180 = 0xf;
          local_194[0] = (void *)((uint)local_194[0] & 0xffffff00);
          do {
            cVar4 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar4 != '\0');
          FUN_100243b0(local_194,local_134,(int)pcVar13 - (int)(local_134 + 1));
          local_8._0_1_ = 5;
          FUN_10019700(local_194);
          if (0xf < local_180) {
            pvVar12 = local_194[0];
            if ((0xfff < local_180 + 1) &&
               (pvVar12 = *(void **)((int)local_194[0] + -4),
               0x1f < (uint)((int)local_194[0] + (-4 - (int)pvVar12)))) {
LAB_1001272b:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(pvVar12);
          }
          if (0xf < local_13c._4_4_) {
            pppppcVar10 = (char *****)local_14c;
            if ((0xfff < local_13c._4_4_ + 1) &&
               (pppppcVar10 = (char *****)local_14c[-1],
               (char *)0x1f < (char *)((int)local_14c + (-4 - (int)pppppcVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(pppppcVar10);
          }
          local_199 = 0;
          goto LAB_1001262e;
        }
        fseek(_File,0,2);
        uVar7 = ftell(_File);
        local_1a0 = (byte *)((int)uVar7 >> 0x1f);
        if (uVar7 != 0) {
          local_198 = malloc(uVar7);
          fseek(local_1b8,0,0);
          fread(local_198,1,uVar7,local_1b8);
          if (pbVar15 == (byte *)0x0) {
            local_1e8 = 0;
            FUN_10006080(local_1dc,local_1d4,local_1dc,&local_1e8);
            puVar9 = local_1e0;
            local_1a0 = pbVar15;
            FUN_10005560(local_1e0,local_1d4,local_1e0,(undefined2 *)&local_1a0);
            pbVar15 = local_198;
            memcpy((void *)*puVar9,local_198,uVar7);
            uVar7 = 0;
            iVar5 = *local_1dc;
            if (local_1dc[1] - iVar5 >> 3 != 0) {
              puVar14 = (ushort *)*local_1e0;
              do {
                uVar3 = *puVar14;
                puVar14 = puVar14 + 1;
                *(double *)(iVar5 + uVar7 * 8) = (double)uVar3 * 0.000244140625;
                uVar7 = uVar7 + 1;
                pbVar15 = local_198;
              } while (uVar7 < (uint)(*(int *)((int)local_1a8 + 0x30) - iVar5 >> 3));
            }
          }
          else if (pbVar15 == (byte *)0x1) {
            local_1a0 = (byte *)0x0;
            FUN_10005560(this_00,local_1d4,this_00,(undefined2 *)&local_1a0);
            pbVar15 = local_198;
            memcpy((void *)*this_00,local_198,uVar7);
          }
          else if (pbVar15 == (byte *)0x2) {
            local_1c4 = 0;
            local_1b0 = 0;
            uVar18 = __alldiv(uVar7 << 3,(int)local_1a0 << 3 | uVar7 >> 0x1d,0x10,0);
            pbVar15 = local_198;
            local_1a0 = (byte *)uVar18;
            iVar5 = local_1c4._4_4_;
            *(byte **)((int)local_1a8 + 0x14) = local_1a0;
            iVar6 = 0;
            local_1e8 = 0;
            local_1a4 = local_1b0._4_4_;
            if ((int)local_1a0 < 2) {
              local_1b0 = CONCAT44((undefined4)local_1b0,(undefined4)local_1b0);
              local_1c4 = CONCAT44((undefined4)local_1c4,(undefined4)local_1c4);
            }
            else {
              local_1d8 = local_1a0 + -1;
              local_1b0 = CONCAT44((undefined4)local_1b0,(undefined4)local_1b0);
              local_1c4 = CONCAT44((undefined4)local_1c4,(undefined4)local_1c4);
              do {
                bVar16 = CARRY4(local_1c4._4_4_,(uint)*(ushort *)(local_198 + iVar6 * 2));
                local_1c4 = CONCAT44(local_1c4._4_4_ + *(ushort *)(local_198 + iVar6 * 2),
                                     (undefined4)local_1c4);
                iVar5 = iVar5 + (uint)bVar16;
                bVar16 = CARRY4((uint)local_1b0._4_4_,(uint)*(ushort *)(local_198 + iVar6 * 2 + 2));
                local_1b0 = CONCAT44((int)local_1b0._4_4_ +
                                     (uint)*(ushort *)(local_198 + iVar6 * 2 + 2),
                                     (undefined4)local_1b0);
                local_1a4 = local_1a4 + bVar16;
                iVar6 = iVar6 + 2;
              } while (iVar6 < (int)local_1d8);
            }
            if (iVar6 < (int)local_1a0) {
              uVar7 = (uint)*(ushort *)(local_198 + iVar6 * 2);
            }
            else {
              local_1e8._0_4_ = 0;
              uVar7 = (uint)local_1e8;
            }
            local_198 = local_1a4 +
                        (uint)CARRY4(uVar7,local_1c4._4_4_ + (int)local_1b0._4_4_) +
                        (uint)CARRY4(local_1c4._4_4_,(uint)local_1b0._4_4_) + iVar5;
            uVar18 = __aulldiv(uVar7 + local_1c4._4_4_ + (int)local_1b0._4_4_,(uint)local_198,
                               (uint)local_1a0,(int)local_1a0 >> 0x1f);
            *(short *)((int)local_1a8 + 0x52) = (short)uVar18;
          }
          else {
            *(undefined2 *)((int)local_1a8 + 0x50) = *(undefined2 *)local_198;
            pbVar15 = local_198;
          }
          free(pbVar15);
        }
        fclose(local_1b8);
        local_8._0_1_ = 1;
        iVar6 = local_1d0;
        if (0xf < local_13c._4_4_) {
          pppppcVar10 = (char *****)local_14c;
          if ((local_13c._4_4_ + 1 < 0x1000) ||
             (pppppcVar10 = (char *****)local_14c[-1],
             (char *)((int)local_14c + (-4 - (int)pppppcVar10)) < (char *)0x20)) {
            FUN_100284c9(pppppcVar10);
            iVar6 = local_1d0;
            goto LAB_100125cf;
          }
          goto LAB_1001272b;
        }
LAB_100125cf:
        local_1b4 = local_1b4 + 1;
      } while (local_1b4 < (byte *)((local_1cc - iVar6) / 0x18));
    }
    pvVar12 = local_1a8;
    dVar17 = 2.0;
    *(undefined4 *)((int)local_1a8 + 0x20) = 0xe;
    libm_sse2_pow_precise();
    local_199 = 1;
    *(int *)((int)pvVar12 + 0x18) = (int)dVar17 + -1;
LAB_1001262e:
    if (0xf < local_168) {
      pppppuVar8 = (undefined4 *****)local_17c[0];
      if ((0xfff < local_168 + 1) &&
         (pppppuVar8 = (undefined4 *****)local_17c[0][-1],
         0x1f < (uint)((int)local_17c[0] + (-4 - (int)pppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pppppuVar8);
    }
  }
  FUN_10009ba0(&local_1d0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
















void __fastcall FUN_100127c0(int param_1)

{
  undefined4 *this;
  char cVar1;
  FILE *_File;
  size_t sVar2;
  char *pcVar3;
  void *pvVar4;
  uint _Count;
  byte local_22d;
  void *local_22c;
  undefined1 *puStack_228;
  undefined4 local_224;
  void *local_220 [4];
  undefined4 local_210;
  uint local_20c;
  char local_208 [256];
  char local_108 [256];
  uint local_8;
  
  local_224 = 0xffffffff;
  puStack_228 = &LAB_1002aa98;
  local_22c = ExceptionList;
  local_8 = DAT_10034018 ^ (uint)local_220;
  ExceptionList = &local_22c;
  this = (undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5c);
  memset(local_208,0,0x100);
  FUN_10027e10(local_208,"%s/Defect_%s.raw");
  _File = fopen(local_208,"rb");
  if (((_File != (FILE *)0x0) && (sVar2 = fread((void *)(param_1 + 0x54),4,1,_File), sVar2 == 1)) &&
     (sVar2 = fread((void *)(param_1 + 0x58),4,1,_File), sVar2 == 1)) {
    _Count = *(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x54);
    local_22d = 0;
    FUN_10005770(this,_Count,this,&local_22d);
    sVar2 = fread((void *)*this,1,_Count,_File);
    if (sVar2 == _Count) goto LAB_10012964;
  }
  memset(local_108,0,0xff);
  FUN_10027e10(local_108,"Error: Fail to read file %s");
  pcVar3 = local_108;
  local_210 = 0;
  local_20c = 0xf;
  local_220[0] = (void *)((uint)local_220[0] & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0(local_220,local_108,(int)pcVar3 - (int)(local_108 + 1));
  local_224 = 0;
  FUN_10019700(local_220);
  if (0xf < local_20c) {
    pvVar4 = local_220[0];
    if ((0xfff < local_20c + 1) &&
       (pvVar4 = *(void **)((int)local_220[0] + -4),
       0x1f < (uint)((int)local_220[0] + (-4 - (int)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar4);
  }
LAB_10012964:
  ExceptionList = local_22c;
  __security_check_cookie(local_8 ^ (uint)local_220);
  return;
}


















/* WARNING: Removing unreachable block (ram,0x10012aa4) */

undefined4 __thiscall FUN_10012990(void *this,uint param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  double in_XMM0_Qa;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uStack_4;
  
  if (*(char *)((int)this + 9) != '\0') {
    uVar5 = FUN_10012b00(this,param_1,param_2);
    return uVar5;
  }
  _Xtime_get_ticks();
  puVar11 = (uint *)((int)this + 0x30);
  do {
    uVar6 = *puVar11;
    iVar2 = *(int *)((int)this + 0x34);
    LOCK();
    lVar1 = *(longlong *)puVar11;
    if (*(longlong *)puVar11 == lVar1) {
      *(longlong *)puVar11 = CONCAT44(iVar2 + (uint)(0xfffffffe < uVar6),uVar6 + 1);
      uVar10 = uVar6;
      iVar8 = iVar2;
    }
    else {
      uVar10 = (uint)lVar1;
      iVar8 = (int)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
  } while ((uVar6 != uVar10) || (iVar2 != iVar8));
  uVar10 = uVar6 + 1;
  uVar12 = iVar2 + (uint)(0xfffffffe < uVar6);
  uVar13 = __aullrem(uVar10,uVar12,*(uint *)((int)this + 4),0);
  uVar6 = (uint)uVar13;
  puVar11 = (uint *)((int)this + 0x40);
  while( true ) {
    do {
      uVar3 = *puVar11;
      uVar4 = *(uint *)((int)this + 0x44);
      LOCK();
      lVar1 = *(longlong *)puVar11;
      if (*(longlong *)puVar11 == lVar1) {
        *(undefined8 *)puVar11 = *(undefined8 *)puVar11;
        uVar7 = uVar3;
        uVar9 = uVar4;
      }
      else {
        uVar7 = (uint)lVar1;
        uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
      }
      UNLOCK();
    } while ((uVar3 != uVar7) || (uVar4 != uVar9));
    if ((uVar12 < uVar4) || ((uVar12 <= uVar4 && (uVar10 < uVar3)))) break;
    if (*(char *)((int)this + 10) != '\0') {
      uVar14 = FUN_10022190((longlong *)puVar11);
      if (uVar14 < CONCAT44(uVar12,uVar10)) {
        return 0;
      }
      break;
    }
    if (param_1 != 0) {
      _Xtime_get_ticks();
      FUN_10028ee0();
      in_XMM0_Qa = (in_XMM0_Qa / 10000000.0) * 1000.0;
      if ((double)(int)param_1 + (double)(&DAT_1002e5b0)[-((int)param_1 >> 0x1f)] <= in_XMM0_Qa) {
        return 0;
      }
    }
  }
  if ((*(uint *)(*(int *)((int)this + 0x18) + (uVar6 >> 5) * 4) & 1 << ((byte)uVar13 & 0x1f)) == 0)
  {
    return 0;
  }
  uStack_4 = *(uint *)(*(int *)((int)this + 0xc) + uVar6 * 4);
  puVar11 = FUN_1000b380((void *)((int)this + 0x10),&uStack_4);
  *(undefined1 *)puVar11 = param_2;
  return *(undefined4 *)(*(int *)((int)this + 0xc) + uVar6 * 4);
}















/* WARNING: Removing unreachable block (ram,0x10012aa4) */

undefined4 FUN_100129b4(undefined4 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  uint *puVar9;
  uint uVar10;
  double in_XMM0_Qa;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  uint uStack00000014;
  uint uStack00000018;
  int in_stack_00000020;
  undefined1 in_stack_00000024;
  
  _uStack0000000c = _Xtime_get_ticks();
  puVar9 = (uint *)(unaff_EBP + 0x30);
  do {
    uVar10 = *puVar9;
    iVar2 = *(int *)(unaff_EBP + 0x34);
    LOCK();
    lVar1 = *(longlong *)puVar9;
    if (*(longlong *)puVar9 == lVar1) {
      *(longlong *)puVar9 = CONCAT44(iVar2 + (uint)(0xfffffffe < uVar10),uVar10 + 1);
      uVar8 = uVar10;
      iVar6 = iVar2;
    }
    else {
      uVar8 = (uint)lVar1;
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
  } while ((uVar10 != uVar8) || (iVar2 != iVar6));
  uVar8 = uVar10 + 1;
  uVar10 = iVar2 + (uint)(0xfffffffe < uVar10);
  uVar11 = __aullrem(uVar8,uVar10,*(uint *)(unaff_EBP + 4),0);
  uStack00000014 = (uint)uVar11;
  puVar9 = (uint *)(unaff_EBP + 0x40);
  while( true ) {
    do {
      iVar2 = in_stack_00000020;
      uVar3 = *puVar9;
      uVar4 = *(uint *)(unaff_EBP + 0x44);
      LOCK();
      lVar1 = *(longlong *)puVar9;
      if (*(longlong *)puVar9 == lVar1) {
        *(undefined8 *)puVar9 = *(undefined8 *)puVar9;
        uVar5 = uVar3;
        uVar7 = uVar4;
      }
      else {
        uVar5 = (uint)lVar1;
        uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      }
      UNLOCK();
    } while ((uVar3 != uVar5) || (uVar4 != uVar7));
    if ((uVar10 < uVar4) || ((uVar10 <= uVar4 && (uVar8 < uVar3)))) break;
    if (*(char *)(param_2 + 10) != '\0') {
      uVar12 = FUN_10022190((longlong *)puVar9);
      if (uVar12 < CONCAT44(uVar10,uVar8)) {
        return 0;
      }
      break;
    }
    if (in_stack_00000020 != 0) {
      _Xtime_get_ticks();
      FUN_10028ee0();
      in_XMM0_Qa = (in_XMM0_Qa / 10000000.0) * 1000.0;
      if ((double)iVar2 + (double)(&DAT_1002e5b0)[-(iVar2 >> 0x1f)] <= in_XMM0_Qa) {
        return 0;
      }
    }
  }
  uVar10 = uStack00000014;
  if ((*(uint *)(*(int *)(param_2 + 0x18) + (uStack00000014 >> 5) * 4) &
      1 << ((byte)uStack00000014 & 0x1f)) == 0) {
    return 0;
  }
  uStack00000018 = *(uint *)(*(int *)(param_2 + 0xc) + uStack00000014 * 4);
  puVar9 = FUN_1000b380((void *)(param_2 + 0x10),&stack0x00000018);
  *(undefined1 *)puVar9 = in_stack_00000024;
  return *(undefined4 *)(*(int *)(param_2 + 0xc) + uVar10 * 4);
}















void __thiscall FUN_10012b00(void *this,uint param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 local_7c [2];
  undefined8 local_6c [2];
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002aac8;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = (int)this + 0x54;
  local_44 = iVar3;
  iVar2 = _Mtx_lock(iVar3,local_14);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  local_40 = 1;
  puVar5 = (uint *)((int)this + 0x38);
  uVar1 = *puVar5;
  *puVar5 = *puVar5 + 1;
  *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + (uint)(0xfffffffe < uVar1);
  local_8 = 0;
  if ((*(uint *)((int)this + 0x4c) <= *(uint *)((int)this + 0x3c)) &&
     ((*(uint *)((int)this + 0x3c) != *(uint *)((int)this + 0x4c) ||
      (*(uint *)((int)this + 0x48) < *(uint *)((int)this + 0x38))))) {
    while (iVar3 = local_44, *(char *)((int)this + 10) == '\0') {
      if (param_1 == 0) {
        iVar2 = _Cnd_wait((int)this + 0x84,local_44);
        if (iVar2 != 0) {
          std::_Throw_C_error(iVar2);
        }
      }
      else {
        local_50 = param_1;
        local_4c = 0;
        puVar4 = FUN_10006530(local_6c,&local_50);
        iVar3 = local_44;
        local_24 = *(undefined4 *)puVar4;
        uStack_20 = *(undefined4 *)((int)puVar4 + 4);
        uStack_1c = *(undefined4 *)(puVar4 + 1);
        uStack_18 = *(undefined4 *)((int)puVar4 + 0xc);
        iVar2 = _Mtx_current_owns(local_44);
        if (iVar2 == 0) {
          std::_Throw_Cpp_error(4);
        }
        local_3c = _Cnd_timedwait((int)this + 0x84,iVar3,&local_24);
        if (local_3c != 0) {
          if (local_3c == 2) goto LAB_10012d7b;
          std::_Throw_C_error(local_3c);
        }
        if (local_3c == 2) goto LAB_10012d7b;
      }
      if ((*(uint *)((int)this + 0x3c) <= *(uint *)((int)this + 0x4c)) &&
         ((*(uint *)((int)this + 0x3c) < *(uint *)((int)this + 0x4c) ||
          (*(uint *)((int)this + 0x38) <= *(uint *)((int)this + 0x48))))) break;
    }
  }
  uVar1 = *(uint *)((int)this + 0x3c);
  if ((uVar1 <= *(uint *)((int)this + 0x4c)) &&
     ((uVar1 < *(uint *)((int)this + 0x4c) ||
      (*(uint *)((int)this + 0x38) <= *(uint *)((int)this + 0x48))))) {
    uVar6 = __aullrem(*(uint *)((int)this + 0x38),uVar1,*(uint *)((int)this + 4),0);
    local_3c = (uint)uVar6;
    local_48 = (local_3c >> 5) * 4;
    local_38 = 1 << ((byte)uVar6 & 0x1f);
    uVar1 = *(uint *)(local_48 + *(int *)((int)this + 0x18)) & local_38;
    iVar2 = local_44;
    while ((local_44 = iVar2, uVar1 == 0 && (iVar3 = iVar2, *(char *)((int)this + 10) == '\0'))) {
      if (param_1 == 0) {
        iVar3 = _Cnd_wait((int)this + 0x84,iVar2);
        if (iVar3 != 0) {
          std::_Throw_C_error(iVar3);
        }
      }
      else {
        local_5c = param_1;
        local_58 = 0;
        puVar4 = FUN_10006530(local_7c,&local_5c);
        iVar2 = local_44;
        local_34 = *(undefined4 *)puVar4;
        uStack_30 = *(undefined4 *)((int)puVar4 + 4);
        uStack_2c = *(undefined4 *)(puVar4 + 1);
        uStack_28 = *(undefined4 *)((int)puVar4 + 0xc);
        iVar3 = _Mtx_current_owns(local_44);
        if (iVar3 == 0) {
          std::_Throw_Cpp_error(4);
        }
        local_4c = _Cnd_timedwait((int)this + 0x84,iVar2,&local_34);
        iVar3 = iVar2;
        if (local_4c != 0) {
          if (local_4c == 2) goto LAB_10012d7b;
          std::_Throw_C_error(local_4c);
        }
        if (local_4c == 2) goto LAB_10012d7b;
      }
      uVar1 = *(uint *)(local_48 + *(int *)((int)this + 0x18)) & local_38;
      iVar3 = iVar2;
      iVar2 = local_44;
    }
    if ((*(uint *)(local_48 + *(int *)((int)this + 0x18)) & local_38) != 0) {
      local_54 = *(uint *)(*(int *)((int)this + 0xc) + local_3c * 4);
      puVar5 = FUN_1000b380((void *)((int)this + 0x10),&local_54);
      *(undefined1 *)puVar5 = param_2;
    }
  }
LAB_10012d7b:
  local_8 = 1;
  iVar3 = _Mtx_unlock(iVar3);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
















undefined4 __cdecl FUN_10012dc0(uint param_1)

{
  if ((param_1 & 0xff000000) == 0x1000000) {
    return 1;
  }
  if ((param_1 & 0xff000000) == 0x2000000) {
    if ((param_1 == 0x2200016) || (param_1 == 0x2200017)) {
      return 4;
    }
    if ((((param_1 == 0x2180014) || (param_1 == 0x2180015)) || (param_1 == 0x2300018)) ||
       (((param_1 == 0x2300019 || (param_1 == 0x230001a)) ||
        ((param_1 == 0x230001b || (param_1 == 0x2300033)))))) {
      return 3;
    }
  }
  return 0xffffffff;
}
















void __fastcall FUN_10012e40(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  int local_c0 [3];
  int local_b4;
  int local_b0;
  undefined2 *local_ac;
  undefined2 *local_a8;
  uint *local_a4;
  int iStack_a0;
  undefined1 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *local_94;
  void **ppvStack_90;
  undefined **local_88;
  void *local_84;
  undefined4 local_80;
  undefined2 *local_78;
  undefined2 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  void *local_58;
  void *local_54;
  uint local_50;
  uint local_48;
  undefined1 local_44 [48];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002ab28;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_54 = (void *)0x0;
  local_58 = (void *)0x0;
  local_5c = (uint)*(ushort *)(param_1 + 0x368);
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  local_14 = uVar2;
  if (local_5c == 1) {
    local_58 = malloc(*(int *)(param_1 + 0x204) << 4);
    local_54 = malloc(*(int *)(param_1 + 0x204) << 4);
    if (1 < *(uint *)(param_1 + 0x19c)) {
      local_68 = (void *)FUN_10028499(0xb0);
      local_8 = 0;
      puVar3 = FUN_10006c90(local_68,*(int *)(param_1 + 0x204) << 2,*(int *)(param_1 + 0x19c) + 2,1,
                            0);
      *(undefined4 **)(param_1 + 0x188) = puVar3;
    }
  }
  _Mtx_init_in_situ(local_44,2,uVar2);
  uVar2 = local_5c;
  local_50 = local_5c & 0xffff;
  local_8 = 1;
  local_60 = 0;
  local_64 = 0;
  FUN_10007a60(local_c0,local_50);
  local_8._0_1_ = 2;
  local_48 = 0;
  if ((short)uVar2 != 0) {
    do {
      local_8._0_1_ = 2;
      local_a4 = &local_48;
      puStack_9c = local_44;
      puStack_98 = &local_64;
      local_94 = &local_60;
      ppvStack_90 = &local_54;
      iStack_a0 = param_1;
      puVar4 = (undefined2 *)FUN_10028499(0x20);
      *puVar4 = (undefined2)local_48;
      *(uint **)(puVar4 + 2) = local_a4;
      *(int *)(puVar4 + 4) = iStack_a0;
      *(undefined1 **)(puVar4 + 6) = puStack_9c;
      *(undefined4 **)(puVar4 + 8) = puStack_98;
      *(ulonglong *)(puVar4 + 10) = CONCAT44(ppvStack_90,local_94);
      *(void ***)(puVar4 + 0xe) = &local_58;
      local_8._0_1_ = 3;
      local_a8 = puVar4;
      local_74 = puVar4;
      FUN_10008ba0((int)&local_88);
      local_88 = std::_LaunchPad<>::vftable;
      local_74 = (undefined2 *)0x0;
      local_8 = CONCAT31(local_8._1_3_,4);
      local_ac = puVar4;
      local_78 = puVar4;
      FUN_10022130(&local_88,&local_70);
      if (local_78 != (undefined2 *)0x0) {
        FUN_100284c9(local_78);
      }
      uVar1 = local_80;
      local_8 = CONCAT31(local_8._1_3_,5);
      local_68 = local_84;
      iVar5 = _Mtx_unlock(local_80);
      if (iVar5 != 0) {
        std::_Throw_C_error(iVar5);
      }
      _Mtx_destroy(uVar1);
      _Cnd_destroy(local_68);
      puVar3 = (undefined4 *)(local_c0[0] + (local_48 & 0xffff) * 8);
      local_8._0_1_ = 2;
      if (*(int *)(local_c0[0] + 4 + (local_48 & 0xffff) * 8) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      *puVar3 = local_70;
      puVar3[1] = local_6c;
      local_48 = local_48 + 1;
      local_70 = 0;
      local_6c = 0;
    } while ((ushort)local_48 < (ushort)local_5c);
    piVar6 = (int *)(local_c0[0] + 4);
    do {
      if (*piVar6 != 0) {
        local_b0 = _Thrd_id();
        local_b4 = *piVar6;
        if (local_b4 == local_b0) {
          std::_Throw_Cpp_error(5);
        }
        iVar5 = _Thrd_join(piVar6[-1],*piVar6,0);
        if (iVar5 != 0) {
          std::_Throw_Cpp_error(2);
        }
        piVar6[-1] = 0;
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 2;
      local_50 = local_50 - 1;
    } while (local_50 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = local_60;
  *(undefined4 *)(param_1 + 0x14) = local_64;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x24))();
  (**(code **)(*(int *)(param_1 + 0xd8) + 0x24))();
  *(undefined1 *)(param_1 + 0x35c) = 1;
  *(undefined4 *)(param_1 + 0x39c) = 2;
  if (local_54 != (void *)0x0) {
    free(local_54);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (*(undefined4 **)(param_1 + 0x188) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x188))(1);
  }
  FUN_10023740(local_c0);
  _Mtx_destroy_in_situ(local_44);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
















void __thiscall FUN_100131c0(void *this,undefined4 param_1)

{
  char cVar1;
  uint *puVar2;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_4 = 0;
  local_8 = 0;
  puVar2 = FUN_10010170(this,(undefined2 *)&local_c,&local_10,&local_14,&local_4,&local_8,0);
  do {
    if (puVar2 == (uint *)0x0) {
LAB_1001326b:
      (**(code **)((int)this + 0xf4))(0,0,0,0,param_1);
      return;
    }
    cVar1 = (**(code **)((int)this + 0xf4))(puVar2,local_c,local_10,local_14,param_1);
    if (cVar1 == '\0') {
      if (puVar2 != (uint *)0x0) {
        return;
      }
      goto LAB_1001326b;
    }
    puVar2 = FUN_10010170(this,(undefined2 *)&local_c,&local_10,&local_14,&local_4,&local_8,0);
  } while( true );
}















void __fastcall FUN_10013290(void *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  short *psVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 *puVar9;
  int iVar10;
  ushort *puVar11;
  byte *pbVar12;
  int iVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  ushort uVar19;
  uint uVar20;
  void *pvVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  int *piVar27;
  size_t sVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  bool bVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  int iStack_150;
  int iStack_140;
  int iStack_138;
  int *local_134;
  int local_130;
  int local_12c;
  int local_128;
  uint local_124;
  int local_120;
  void *local_11c;
  uint local_118;
  int local_114;
  undefined8 local_110;
  uint *local_108;
  undefined8 local_104;
  undefined8 local_fc;
  void *local_f4;
  int local_f0;
  undefined8 local_ec;
  uint local_e4;
  void *local_e0;
  uint local_dc;
  void *local_d8;
  uint local_d4;
  undefined8 local_d0;
  void *local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  size_t local_b0;
  char local_a9;
  uint local_a8;
  void *local_a4;
  int *local_a0;
  Mat local_9c [16];
  int local_8c;
  int *local_70;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  void *local_44 [3];
  void *local_38;
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002ab86;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)param_1 + 0x218) = 0;
  *(undefined1 *)((int)param_1 + 0x274) = 0;
  local_c8 = param_1;
  puVar9 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0xe8) + 0x10))(local_14);
  uVar20 = *(uint *)((int)param_1 + 0x60);
  local_108 = (uint *)((int)puVar9 + 0x5d);
  local_b8 = FUN_10012dc0(uVar20);
  local_a4 = (void *)(uVar20 >> 0x10 & 0xff);
  local_120 = FUN_10012dc0(uVar20);
  local_120 = (int)local_a4 / local_120;
  sVar28 = *(int *)((int)param_1 + 0x28) * *(int *)((int)param_1 + 0x24);
  local_b0 = sVar28;
  local_e0 = calloc(sVar28,8);
  local_d8 = calloc(sVar28,8);
  local_128 = FUN_1000f5d0(*(int *)((int)param_1 + 0x208));
  iVar10 = FUN_1000f4f0(*(int *)((int)param_1 + 0x208));
  local_c0 = FUN_1000fd40(*(int *)((int)param_1 + 0x208));
  local_e4 = FUN_1000fc60(*(int *)((int)param_1 + 0x208));
  local_114 = FUN_1000f8d0(*(int *)((int)param_1 + 0x208));
  puVar11 = FUN_1000b180(&DAT_100348f0,(ushort *)(*(int *)((int)param_1 + 0x208) + 6));
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_100243b0(local_44,"DarkAverage",0xb);
  local_8 = 0;
  pbVar12 = FUN_1000b400(puVar11,(byte *)local_44);
  if (0xf < *(uint *)(pbVar12 + 0x14)) {
    pbVar12 = *(byte **)pbVar12;
  }
  iVar13 = atoi((char *)pbVar12);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_30) {
    pvVar14 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar14 = *(void **)((int)local_44[0] + -4), uVar7 = (undefined1)local_8,
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14)))) {
LAB_10013437:
      local_8._0_1_ = uVar7;
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar14);
  }
  local_124 = 0;
  local_11c = (void *)0x0;
  FUN_10007790(&local_134,*(int *)((int)param_1 + 0x210) - *(int *)((int)param_1 + 0x20c) >> 2);
  local_8 = 1;
  FUN_10007790(&local_38,*(int *)((int)param_1 + 0x210) - *(int *)((int)param_1 + 0x20c) >> 2);
  uVar20 = 0;
  local_d4 = local_130 - (int)local_134 >> 2;
  local_d0 = (ulonglong)(uint)local_d0;
  if (local_d4 != 0) {
    local_c4 = (int)local_38 - (int)local_134;
    local_a0 = local_134;
    do {
      sVar28 = local_b0;
      local_8._0_1_ = 2;
      local_b4 = *(int *)(*(int *)((int)param_1 + 0x20c) + uVar20 * 4) + 0x5d;
      pvVar14 = calloc(local_b0,2);
      *local_a0 = (int)pvVar14;
      pvVar14 = calloc(sVar28,2);
      iVar29 = 0;
      *(void **)(local_c4 + (int)local_a0) = pvVar14;
      if (0 < (int)local_b0) {
        local_bc = local_120 - 9;
        do {
          cVar8 = *(char *)((int)param_1 + 0x1b9);
          local_a8 = CONCAT31(local_a8._1_3_,cVar8);
          local_ec = 0;
          if (local_bc < 7) {
            FUN_10010b30(local_b4,(int)local_a4,local_120,local_b8,iVar29,cVar8,&local_ec);
          }
          else if (local_120 < 8) {
            FUN_10010920(local_b4,(int)local_a4,local_120,local_b8,iVar29,&local_ec);
          }
          else if (local_120 == 8) {
            FUN_10010aa0(local_b4,(int)local_a4,8,local_b8,iVar29,local_a8,(uint *)&local_ec);
          }
          else {
            FUN_10010a20(local_b4,(int)local_a4,local_120,local_b8,iVar29,cVar8,(uint *)&local_ec);
          }
          *(ushort *)(*(int *)(local_c4 + (int)local_a0) + iVar29 * 2) = (ushort)local_ec;
          uVar19 = (ushort)local_ec;
          if (*(char *)((int)param_1 + 0x180) != '\0') {
            iVar30 = *(int *)((int)param_1 + 0x17c);
            param_1 = local_c8;
            if (*(ushort *)(iVar30 + 0x50) != 0) {
              iVar22 = iVar29;
              if ((uint)*(ushort *)(iVar30 + 0x50) < (uint)(ushort)local_ec) {
                iVar22 = *(int *)(iVar30 + 0x14) + iVar29;
              }
              if (*(int *)(iVar30 + 0x44) != *(int *)(iVar30 + 0x48)) {
                sVar4 = *(short *)(*(int *)(iVar30 + 0x44) + iVar22 * 2);
                if ((uint)(ushort)local_ec < (uint)(int)sVar4) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = (ushort)local_ec - sVar4;
                }
              }
              if (*(int *)(iVar30 + 0x2c) != *(int *)(iVar30 + 0x30)) {
                dVar33 = *(double *)(*(int *)(iVar30 + 0x2c) + iVar22 * 8);
                in_XMM1._8_8_ = 0;
                in_XMM1._0_8_ = (longlong)dVar33;
                if (dVar33 == 0.0) {
                  uVar19 = (ushort)*(undefined4 *)(iVar30 + 0x18);
                }
                else {
                  uVar42 = FUN_10028d71();
                  uVar15 = (int)uVar42 + (uint)*(ushort *)(iVar30 + 0x52);
                  uVar20 = *(uint *)(iVar30 + 0x18);
                  if (uVar15 <= *(uint *)(iVar30 + 0x18)) {
                    uVar20 = uVar15;
                  }
                  param_1 = local_c8;
                  uVar19 = (ushort)uVar20;
                }
              }
            }
          }
          *(ushort *)(*local_a0 + iVar29 * 2) = uVar19;
          iVar29 = iVar29 + 1;
        } while (iVar29 < (int)local_b0);
      }
      piVar27 = local_a0;
      if (*(char *)((int)param_1 + 0x180) != '\0') {
        FUN_10001580(*(void **)((int)param_1 + 0x17c),*local_a0,*(int *)((int)param_1 + 0x24),
                     *(int *)((int)param_1 + 0x28),*(int *)((int)param_1 + 0x178));
      }
      *(int *)((int)param_1 + 0x218) = *(int *)((int)param_1 + 0x218) + 1;
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar29 = _Cnd_broadcast((int)param_1 + 0x24c);
      if (iVar29 != 0) {
        std::_Throw_C_error(iVar29);
      }
      local_a0 = piVar27 + 1;
      uVar20 = local_d0._4_4_ + 1;
      local_d0 = CONCAT44(uVar20,(uint)local_d0);
    } while (uVar20 < local_d4);
  }
  local_8._0_1_ = 2;
  local_f4 = (void *)*local_134;
  local_bc = *(uint *)((int)param_1 + 0x24);
  local_64 = 0x406fe00000000000;
  local_54 = 0;
  uStack_4c = 0;
  local_5c = 0;
  cv::Mat::Mat(local_9c,*(int *)((int)param_1 + 0x28),local_bc,0,(Scalar_<double> *)&local_64);
  pvVar14 = local_c8;
  iVar29 = 0;
  local_8._0_1_ = 4;
  iVar30 = 100;
  do {
    iVar22 = 0;
    if (0 < iVar30) {
      do {
        *(undefined1 *)(*local_70 * iVar29 + local_8c + iVar22) = 0;
        iVar16 = *local_70 * iVar29 - iVar22;
        iVar22 = iVar22 + 1;
        *(undefined1 *)(iVar16 + local_8c + -1 + local_bc) = 0;
      } while (iVar22 < iVar30);
    }
    iVar30 = iVar30 + -1;
    iVar29 = iVar29 + 1;
  } while (0 < iVar30);
  cVar8 = FUN_10011d60(*(int *)((int)local_c8 + 0x208));
  sVar28 = local_b0;
  if (((cVar8 != '\0') && (*(int *)((int)pvVar14 + 0x54) == 0)) &&
     (local_b8 = local_d4, 1 < (int)local_d4)) {
    iVar29 = *(int *)((int)pvVar14 + 0x24);
    iVar30 = (*(int *)((int)pvVar14 + 0x28) - local_c0) * iVar29;
    uVar20 = (int)local_b0 >> 0x1f;
    local_bc = *(int *)((int)pvVar14 + 0x24) * local_c0;
    uVar15 = (int)local_bc >> 0x1f;
    do {
      iStack_138 = 0;
      local_c4 = local_134[local_b8 - 2];
      local_a0 = (int *)local_134[local_b8 - 1];
      iVar22 = 0;
      local_ec = 0;
      local_fc = 0;
      local_c0 = 0;
      iStack_140 = 0;
      if ((int)local_b0 < 2) {
        local_a8 = 0;
        local_a4 = (void *)0x0;
        local_b4 = 0;
      }
      else {
        local_a4 = (void *)0x0;
        local_b4 = 0;
        do {
          uVar17 = (uint)*(ushort *)((int)local_a0 + iVar22 * 2);
          bVar32 = CARRY4(local_b4,uVar17);
          local_b4 = local_b4 + uVar17;
          iStack_138 = iStack_138 + (uint)bVar32;
          uVar17 = (uint)*(ushort *)((int)local_a0 + 2 + iVar22 * 2);
          bVar32 = CARRY4((uint)local_a4,uVar17);
          local_a4 = (void *)((int)local_a4 + uVar17);
          iStack_140 = iStack_140 + (uint)bVar32;
          iVar22 = iVar22 + 2;
          local_a8 = iStack_140;
        } while (iVar22 < (int)(local_b0 - 1));
      }
      if (iVar22 < (int)local_b0) {
        uVar17 = (uint)*(ushort *)((int)local_a0 + iVar22 * 2);
      }
      else {
        local_fc._0_4_ = 0;
        uVar17 = (uint)local_fc;
      }
      uVar43 = __alldiv(local_b4 + (int)local_a4 + uVar17,
                        iStack_138 + local_a8 + (uint)CARRY4(local_b4,(uint)local_a4) +
                        (uint)CARRY4(local_b4 + (int)local_a4,uVar17),sVar28,uVar20);
      local_fc = 0;
      local_b4 = 0;
      local_f0 = 0;
      local_a4 = (void *)0x0;
      uVar17 = local_ec._4_4_;
      uVar24 = (uint)local_ec;
      if (0 < local_128) {
        local_a8 = local_ec._4_4_;
        local_d0 = local_ec << 0x20;
        do {
          if (local_114 < iVar29 - local_114) {
            iVar22 = (iVar29 - local_114) - local_114;
            local_c0 = local_c0 + iVar22;
            puVar11 = (ushort *)((int)local_a0 + (iVar29 * local_f0 + local_114) * 2);
            do {
              uVar17 = (uint)*(ushort *)((local_134[local_b8 - 2] - (int)local_a0) + (int)puVar11);
              bVar32 = CARRY4(local_d0._4_4_,uVar17);
              local_d0 = (ulonglong)(local_d0._4_4_ + uVar17) << 0x20;
              local_a8 = local_a8 + bVar32;
              bVar32 = CARRY4((uint)local_a4,(uint)*puVar11);
              local_a4 = (void *)((int)local_a4 + (uint)*puVar11);
              local_b4 = local_b4 + bVar32;
              iVar22 = iVar22 + -1;
              puVar11 = puVar11 + 1;
            } while (iVar22 != 0);
          }
          local_f0 = local_f0 + 1;
        } while (local_f0 < local_128);
        uVar17 = local_a8;
        uVar24 = local_d0._4_4_;
      }
      uVar23 = (int)local_c0 >> 0x1f;
      local_d0 = 0;
      local_110 = 0;
      local_104 = 0;
      local_a8 = local_c0;
      uVar44 = __alldiv(uVar24,uVar17,local_c0,uVar23);
      uVar45 = __alldiv((uint)local_a4,local_b4,local_a8,uVar23);
      uVar17 = (int)uVar45 - (int)uVar44;
      uVar24 = (int)uVar17 >> 0x1f;
      local_ec = 0;
      local_fc = 0;
      local_fc._0_4_ = 0;
      local_ec._0_4_ = 0;
      local_ec._4_4_ = 0;
      if (iVar30 < (int)local_b0) {
        iStack_150 = 0;
        iVar22 = iVar30;
        if ((int)(local_b0 - iVar30) < 2) {
          local_f0 = local_d0._4_4_;
          local_118 = (uint)local_d0;
          local_a8 = local_104._4_4_;
          local_c0 = (uint)local_104;
          local_b4 = 0;
          local_d0 = CONCAT44(local_110._4_4_,(uint)local_d0);
          local_104 = CONCAT44((undefined4)local_110,(uint)local_104);
        }
        else {
          local_f0 = local_d0._4_4_;
          local_118 = (uint)local_d0;
          local_a8 = local_104._4_4_;
          local_c0 = (uint)local_104;
          local_b4 = 0;
          local_d0 = CONCAT44(local_110._4_4_,(uint)local_d0);
          local_104 = CONCAT44((undefined4)local_110,(uint)local_104);
          puVar11 = (ushort *)((int)local_a0 + (iVar30 + 1) * 2);
          do {
            uVar23 = (uint)*(ushort *)(local_c4 + iVar22 * 2);
            bVar32 = CARRY4(local_b4,uVar23);
            local_b4 = local_b4 + uVar23;
            iStack_150 = iStack_150 + (uint)bVar32;
            bVar32 = CARRY4(local_104._4_4_,(uint)puVar11[-1]);
            local_104 = CONCAT44(local_104._4_4_ + puVar11[-1],(uint)local_104);
            local_d0 = CONCAT44(local_d0._4_4_ + bVar32,(uint)local_d0);
            uVar23 = (uint)*(ushort *)((int)puVar11 + (local_c4 - (int)local_a0));
            bVar32 = CARRY4(local_118,uVar23);
            local_118 = local_118 + uVar23;
            local_f0 = local_f0 + (uint)bVar32;
            bVar32 = CARRY4(local_c0,(uint)*puVar11);
            local_c0 = local_c0 + *puVar11;
            local_a8 = local_a8 + bVar32;
            iVar22 = iVar22 + 2;
            puVar11 = puVar11 + 2;
          } while (iVar22 < (int)(local_b0 - 1));
        }
        uVar25 = (uint)local_ec;
        uVar31 = (uint)local_fc;
        if (iVar22 < (int)local_b0) {
          uVar25 = (uint)*(ushort *)(local_c4 + iVar22 * 2);
          uVar31 = (uint)*(ushort *)((int)local_a0 + iVar22 * 2);
        }
        local_dc = uVar25 + local_b4 + local_118;
        local_a4 = (void *)(local_d0._4_4_ + local_a8 + (uint)CARRY4(local_104._4_4_,local_c0) +
                           (uint)CARRY4(uVar31,local_104._4_4_ + local_c0));
        uVar23 = local_dc;
        uVar25 = iStack_150 + local_f0 + (uint)CARRY4(local_b4,local_118) +
                 (uint)CARRY4(uVar25,local_b4 + local_118);
        uVar31 = uVar31 + local_104._4_4_ + local_c0;
      }
      else {
        local_a4 = (void *)0x0;
        uVar23 = (uint)local_ec;
        uVar25 = local_ec._4_4_;
        uVar31 = (uint)local_fc;
      }
      uVar44 = __alldiv(uVar23,uVar25,local_bc,uVar15);
      uVar45 = __alldiv(uVar31,(uint)local_a4,local_bc,uVar15);
      uVar23 = (int)uVar45 - (int)uVar44;
      uVar25 = (int)uVar23 >> 0x1f;
      pvVar14 = local_c8;
      if (((*(int *)((int)local_c8 + 0x54) == 0) && ((int)uVar43 < iVar13)) &&
         ((iVar10 < (int)((uVar17 ^ uVar24) - uVar24) ||
          ((int)local_e4 < (int)((uVar23 ^ uVar25) - uVar25))))) {
        *(uint *)((int)local_c8 + 0x54) = local_b8 - 1;
        break;
      }
      if ((local_b8 == 2) && (*(int *)((int)local_c8 + 0x54) == 0)) {
        *(uint *)((int)local_c8 + 0x54) = local_d4;
      }
      local_b8 = local_b8 - 1;
    } while (1 < (int)local_b8);
  }
  iVar10 = *(int *)((int)pvVar14 + 0x54);
  local_e4 = *(int *)((int)pvVar14 + 0x218) + 0x50;
  local_a8 = 0;
  if (iVar10 != 1) {
    local_a8 = (uint)(0x50 / (longlong)(iVar10 + -1));
  }
  local_a0 = (int *)0x0;
  uVar20 = local_b0;
  if (0 < iVar10) {
    do {
      local_a4 = (void *)local_134[(int)local_a0];
      if (0 < (int)local_a0) {
        puVar11 = FUN_1000b180(&DAT_100348f0,(ushort *)(*(int *)((int)pvVar14 + 0x208) + 6));
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_100243b0(local_2c,"AutoAlignImageMode",0x12);
        local_8._0_1_ = 5;
        pbVar12 = FUN_1000b400(puVar11,(byte *)local_2c);
        puVar26 = (uint *)(pbVar12 + 0x10);
        if (0xf < *(uint *)(pbVar12 + 0x14)) {
          pbVar12 = *(byte **)pbVar12;
        }
        uVar20 = FUN_10006650(pbVar12,*puVar26,&DAT_1002db64,2);
        local_a9 = (char)uVar20;
        local_8._0_1_ = 4;
        uVar7 = (undefined1)local_8;
        local_8._0_1_ = 4;
        if (0xf < local_18) {
          pvVar21 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar21 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar21)))) goto LAB_10013437;
          FUN_100284c9(pvVar21);
        }
        uVar20 = local_b0;
        if (local_a9 != '\0') {
          if (*(char *)((int)pvVar14 + 0x274) == '\0') {
            cVar8 = FUN_1000c710(pvVar14,local_f4,local_a4,local_9c);
            if (cVar8 == '\0') {
              iVar10 = _Mtx_lock((int)pvVar14 + 0x278);
              if (iVar10 != 0) {
                std::_Throw_C_error(iVar10);
              }
              *(undefined1 *)((int)pvVar14 + 0x274) = 1;
              local_8 = CONCAT31(local_8._1_3_,8);
              iVar10 = _Cnd_broadcast((int)pvVar14 + 0x2a8);
              if (iVar10 != 0) {
                std::_Throw_C_error(iVar10);
              }
              *(int *)((int)pvVar14 + 0x218) = *(int *)((int)pvVar14 + 0x218) + local_a8;
              local_8 = CONCAT31(local_8._1_3_,9);
              iVar10 = _Cnd_broadcast((int)pvVar14 + 0x24c);
              if (iVar10 != 0) {
                std::_Throw_C_error(iVar10);
              }
              local_8 = CONCAT31(local_8._1_3_,10);
              iVar10 = _Mtx_unlock((int)pvVar14 + 0x278);
            }
            else {
              iVar10 = _Mtx_lock((int)pvVar14 + 0x21c);
              if (iVar10 != 0) {
                std::_Throw_C_error(iVar10);
              }
              *(int *)((int)pvVar14 + 0x218) = *(int *)((int)pvVar14 + 0x218) + local_a8;
              local_8 = CONCAT31(local_8._1_3_,6);
              iVar10 = _Cnd_broadcast((int)pvVar14 + 0x24c);
              if (iVar10 != 0) {
                std::_Throw_C_error(iVar10);
              }
              local_8 = CONCAT31(local_8._1_3_,7);
              iVar10 = _Mtx_unlock((int)pvVar14 + 0x21c);
            }
          }
          else {
            *(int *)((int)pvVar14 + 0x218) = *(int *)((int)pvVar14 + 0x218) + local_a8;
            local_8 = CONCAT31(local_8._1_3_,0xb);
            iVar10 = _Cnd_broadcast((int)pvVar14 + 0x24c);
          }
          if (iVar10 != 0) {
            std::_Throw_C_error(iVar10);
          }
          local_8._0_1_ = 4;
          uVar20 = local_b0;
        }
      }
      iVar10 = 0;
      if (0 < (int)uVar20) {
        if (((7 < uVar20) && (1 < DAT_100349c0)) &&
           (((void *)((int)local_a4 + (uVar20 - 1) * 2) < local_e0 ||
            (pvVar14 = local_c8, (void *)((int)local_e0 + uVar20 * 8 + -8) < local_a4)))) {
          uVar15 = uVar20 & 0x80000007;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
          }
          local_c4 = uVar20 - uVar15;
          pauVar18 = (undefined1 (*) [16])((int)local_e0 + 0x20);
          puVar26 = (uint *)((int)local_a4 + 8);
          do {
            auVar34 = pmovzxwd(ZEXT416(puVar26[-2]),ZEXT416(puVar26[-2]));
            auVar34 = pmovsxdq(in_XMM1,auVar34);
            iVar10 = iVar10 + 8;
            auVar35._0_8_ = auVar34._0_8_ + *(longlong *)pauVar18[-2];
            auVar35._8_8_ = auVar34._8_8_ + *(longlong *)(pauVar18[-2] + 8);
            uVar15 = puVar26[-1];
            pauVar18[-2] = auVar35;
            auVar34 = pmovzxwd(ZEXT416(uVar15),ZEXT416(uVar15));
            auVar34 = pmovsxdq(auVar35,auVar34);
            auVar36._0_8_ = auVar34._0_8_ + *(longlong *)pauVar18[-1];
            auVar36._8_8_ = auVar34._8_8_ + *(longlong *)(pauVar18[-1] + 8);
            uVar15 = *puVar26;
            pauVar18[-1] = auVar36;
            auVar34 = pmovzxwd(ZEXT416(uVar15),ZEXT416(uVar15));
            auVar34 = pmovsxdq(auVar36,auVar34);
            auVar37._0_8_ = auVar34._0_8_ + *(longlong *)*pauVar18;
            auVar37._8_8_ = auVar34._8_8_ + *(longlong *)(*pauVar18 + 8);
            uVar15 = puVar26[1];
            *pauVar18 = auVar37;
            auVar34 = pmovzxwd(ZEXT416(uVar15),ZEXT416(uVar15));
            auVar34 = pmovsxdq(auVar37,auVar34);
            in_XMM1._0_8_ = auVar34._0_8_ + *(longlong *)pauVar18[1];
            in_XMM1._8_8_ = auVar34._8_8_ + *(longlong *)(pauVar18[1] + 8);
            pauVar18[1] = in_XMM1;
            pauVar18 = pauVar18 + 4;
            puVar26 = puVar26 + 4;
            pvVar14 = local_c8;
          } while (iVar10 < local_c4);
        }
        if (iVar10 < (int)uVar20) {
          do {
            uVar15 = (uint)*(ushort *)((int)local_a4 + iVar10 * 2);
            puVar26 = (uint *)((int)local_e0 + iVar10 * 8);
            uVar20 = *puVar26;
            *puVar26 = *puVar26 + uVar15;
            piVar27 = (int *)((int)local_e0 + iVar10 * 8 + 4);
            *piVar27 = *piVar27 + (uint)CARRY4(uVar20,uVar15);
            iVar10 = iVar10 + 1;
            uVar20 = local_b0;
            pvVar14 = local_c8;
          } while (iVar10 < (int)local_b0);
        }
      }
      local_124 = local_124 + 1;
      local_a0 = (int *)((int)local_a0 + 1);
    } while ((int)local_a0 < *(int *)((int)pvVar14 + 0x54));
  }
  *(uint *)((int)pvVar14 + 0x218) = local_e4;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  iVar10 = _Cnd_broadcast((int)pvVar14 + 0x24c);
  if (iVar10 != 0) {
    std::_Throw_C_error(iVar10);
  }
  local_8._0_1_ = 4;
  local_110 = 0;
  puVar11 = FUN_1000b180(&DAT_100348f0,(ushort *)(*(int *)((int)pvVar14 + 0x208) + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"AutoCorrectDarkMode",0x13);
  local_8._0_1_ = 0xd;
  pbVar12 = FUN_1000b400(puVar11,(byte *)local_2c);
  puVar26 = (uint *)(pbVar12 + 0x10);
  if (0xf < *(uint *)(pbVar12 + 0x14)) {
    pbVar12 = *(byte **)pbVar12;
  }
  uVar20 = FUN_10006650(pbVar12,*puVar26,&DAT_1002db64,2);
  local_a9 = (char)uVar20;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (0xf < local_18) {
    pvVar21 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar21 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar21)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar21);
  }
  lVar38 = CONCAT44(local_a0,local_b8);
  lVar6 = local_110;
  if (local_a9 != '\0') {
    for (uVar20 = *(uint *)((int)pvVar14 + 0x54); uVar20 < local_d4; uVar20 = uVar20 + 1) {
      uVar15 = local_134[uVar20];
      iVar10 = 0;
      if (0 < (int)local_b0) {
        if (((3 < local_b0) && (1 < DAT_100349c0)) &&
           (((void *)(uVar15 + (local_b0 - 1) * 2) < local_d8 ||
            ((int)local_d8 + local_b0 * 8 + -8 < uVar15)))) {
          uVar17 = local_b0 & 0x80000003;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
          }
          lVar40 = 0;
          lVar41 = 0;
          lVar38 = 0;
          lVar39 = 0;
          do {
            auVar34 = ZEXT416(*(uint *)(uVar15 + iVar10 * 2));
            auVar34 = pmovzxwd(auVar34,auVar34);
            auVar34 = pmovsxdq(in_XMM1,auVar34);
            plVar1 = (longlong *)((int)local_d8 + iVar10 * 8);
            lVar5 = plVar1[1];
            lVar40 = lVar40 + auVar34._0_8_;
            lVar41 = lVar41 + auVar34._8_8_;
            plVar2 = (longlong *)((int)local_d8 + iVar10 * 8);
            *plVar2 = *plVar1 + auVar34._0_8_;
            plVar2[1] = lVar5 + auVar34._8_8_;
            auVar34 = ZEXT416(*(uint *)(uVar15 + 4 + iVar10 * 2));
            auVar34 = pmovzxwd(auVar34,auVar34);
            in_XMM2 = pmovsxdq(in_XMM2,auVar34);
            plVar1 = (longlong *)((int)local_d8 + iVar10 * 8 + 0x10);
            lVar38 = lVar38 + in_XMM2._0_8_;
            lVar39 = lVar39 + in_XMM2._8_8_;
            in_XMM1._0_8_ = in_XMM2._0_8_ + *plVar1;
            in_XMM1._8_8_ = in_XMM2._8_8_ + plVar1[1];
            *(undefined1 (*) [16])((int)local_d8 + iVar10 * 8 + 0x10) = in_XMM1;
            iVar10 = iVar10 + 4;
          } while (iVar10 < (int)(local_b0 - uVar17));
          auVar34._8_4_ = (int)(lVar39 + lVar41);
          auVar34._0_8_ = lVar38 + lVar40;
          auVar34._12_4_ = (int)((ulonglong)(lVar39 + lVar41) >> 0x20);
          lVar6 = lVar38 + lVar40 + auVar34._8_8_ + lVar6;
        }
        for (; iVar10 < (int)local_b0; iVar10 = iVar10 + 1) {
          uVar24 = (uint)*(ushort *)(uVar15 + iVar10 * 2);
          puVar26 = (uint *)((int)local_d8 + iVar10 * 8);
          uVar17 = *puVar26;
          *puVar26 = *puVar26 + uVar24;
          piVar27 = (int *)((int)local_d8 + iVar10 * 8 + 4);
          *piVar27 = *piVar27 + (uint)CARRY4(uVar17,uVar24);
          lVar6 = lVar6 + (ulonglong)*(ushort *)(uVar15 + iVar10 * 2);
        }
      }
      local_11c = (void *)((int)local_11c + 1);
      lVar38 = lVar6;
    }
  }
  local_a0 = (int *)((ulonglong)lVar38 >> 0x20);
  local_b8 = (uint)lVar38;
  uVar20 = 0;
  local_bc = 0;
  if (0 < (int)local_11c) {
    uVar43 = __alldiv((uint)lVar6,(uint)((ulonglong)lVar6 >> 0x20),(uint)local_11c,
                      (int)local_11c >> 0x1f);
    uVar43 = __alldiv((uint)uVar43,(uint)((ulonglong)uVar43 >> 0x20),local_b0,(int)local_b0 >> 0x1f)
    ;
    lVar38 = CONCAT44(local_a0,local_b8);
    local_bc = (uint)uVar43;
    local_110 = CONCAT44((int)((ulonglong)uVar43 >> 0x20),(undefined4)local_110);
    uVar20 = local_bc & 0xffff;
  }
  sVar28 = local_b0;
  if ((int)local_124 < 1) {
    if (0 < (int)local_b0) {
      puVar26 = local_108;
      for (uVar15 = local_b0 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar26 = uVar20 | uVar20 << 0x10;
        puVar26 = puVar26 + 1;
      }
      for (uVar15 = (uint)((local_b0 & 1) != 0); uVar15 != 0; uVar15 = uVar15 - 1) {
        *(short *)puVar26 = (short)uVar20;
        puVar26 = (uint *)((int)puVar26 + 2);
      }
    }
  }
  else {
    iVar10 = 0;
    if (0 < (int)local_b0) {
      local_f4 = (void *)((int)local_124 >> 0x1f);
      local_e4 = local_124;
      do {
        local_a0 = (int *)((ulonglong)lVar38 >> 0x20);
        local_b8 = (uint)lVar38;
        uVar43 = __aulldiv(*(uint *)((int)local_e0 + iVar10 * 8),
                           *(uint *)((int)local_e0 + iVar10 * 8 + 4),local_e4,(uint)local_f4);
        lVar38 = CONCAT44(local_a0,local_b8);
        *(short *)((int)local_108 + iVar10 * 2) = (short)uVar43;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)sVar28);
    }
  }
  if ((0 < (int)local_11c) && (iVar10 = 0, 0 < (int)sVar28)) {
    local_e4 = (int)local_11c >> 0x1f;
    local_f4 = local_11c;
    do {
      local_a0 = (int *)((ulonglong)lVar38 >> 0x20);
      local_b8 = (uint)lVar38;
      psVar3 = (short *)((int)local_108 + iVar10 * 2);
      *psVar3 = *psVar3 + (short)local_bc;
      sVar4 = *(short *)((int)local_108 + iVar10 * 2);
      uVar43 = __aulldiv(*(uint *)((int)local_d8 + iVar10 * 8),
                         *(uint *)((int)local_d8 + iVar10 * 8 + 4),(uint)local_f4,local_e4);
      lVar38 = CONCAT44(local_a0,local_b8);
      *(short *)((int)local_108 + iVar10 * 2) = sVar4 - (short)uVar43;
      iVar10 = iVar10 + 1;
      sVar28 = local_b0;
    } while (iVar10 < (int)local_b0);
  }
  local_a0 = (int *)((ulonglong)lVar38 >> 0x20);
  local_b8 = (uint)lVar38;
  dVar33 = 2.0;
  libm_sse2_pow_precise();
  pvVar14 = local_c8;
  iVar10 = 0;
  if (0 < (int)sVar28) {
    do {
      if ((int)dVar33 + -1 < (int)(uint)*(ushort *)((int)local_108 + iVar10 * 2)) {
        *(short *)((int)local_108 + iVar10 * 2) = (short)((int)dVar33 + -1);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)sVar28);
  }
  *(undefined4 *)((int)local_c8 + 0x218) = 100;
  local_8 = CONCAT31(local_8._1_3_,0xe);
  iVar10 = _Cnd_broadcast((int)local_c8 + 0x24c);
  if (iVar10 != 0) {
    std::_Throw_C_error(iVar10);
  }
  piVar27 = local_134;
  uVar20 = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_d4 != 0) {
    do {
      free((void *)piVar27[uVar20]);
      uVar20 = uVar20 + 1;
      pvVar14 = local_c8;
    } while (uVar20 < local_d4);
  }
  uVar15 = 0;
  uVar20 = local_34 - (int)local_38 >> 2;
  if (uVar20 != 0) {
    do {
      free(*(void **)((int)local_38 + uVar15 * 4));
      uVar15 = uVar15 + 1;
      pvVar14 = local_c8;
    } while (uVar15 < uVar20);
  }
  free(local_e0);
  free(local_d8);
  *(undefined2 *)(puVar9 + 9) = 0;
  *puVar9 = *(undefined4 *)((int)pvVar14 + 0x60);
  *(undefined1 *)(puVar9 + 10) = 0;
  puVar9[0xb] = *(undefined4 *)((int)pvVar14 + 0x178);
  *(undefined1 *)((int)puVar9 + 0x29) = *(undefined1 *)((int)pvVar14 + 0x181);
  puVar9[0xc] = *(undefined4 *)((int)pvVar14 + 0x184);
  *(undefined8 *)(puVar9 + 0xd) = *(undefined8 *)((int)pvVar14 + 400);
  *(undefined8 *)(puVar9 + 0xf) = *(undefined8 *)((int)pvVar14 + 0x198);
  *(undefined8 *)(puVar9 + 0x11) = *(undefined8 *)((int)pvVar14 + 0x1a0);
  *(undefined8 *)(puVar9 + 0x13) = *(undefined8 *)((int)pvVar14 + 0x1a8);
  puVar9[0x15] = *(undefined4 *)((int)pvVar14 + 0x1b0);
  puVar9[0x16] = *(undefined4 *)((int)pvVar14 + 0x1b4);
  *(undefined1 *)(puVar9 + 0x17) = *(undefined1 *)((int)pvVar14 + 0x1b8);
  puVar9[3] = *(undefined4 *)((int)pvVar14 + 0x24);
  puVar9[4] = *(undefined4 *)((int)pvVar14 + 0x28);
  *(undefined2 *)((int)puVar9 + 0x2a) = 0;
  *(undefined1 *)((int)puVar9 + 0x26) = 2;
  (**(code **)(**(int **)((int)pvVar14 + 0xe8) + 0x1c))();
  cv::Mat::~Mat(local_9c);
  if (local_38 != (void *)0x0) {
    pvVar14 = local_38;
    if ((0xfff < (local_30 - (int)local_38 & 0xfffffffc)) &&
       (pvVar14 = *(void **)((int)local_38 + -4), 0x1f < (uint)((int)local_38 + (-4 - (int)pvVar14))
       )) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar14);
  }
  piVar27 = local_134;
  if ((0xfff < (local_12c - (int)local_134 & 0xfffffffcU)) &&
     (piVar27 = (int *)local_134[-1], 0x1f < (uint)((int)local_134 + (-4 - (int)piVar27)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(piVar27);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}











void __thiscall FUN_10014720(void *this,uint *param_1,undefined2 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  byte *pbVar19;
  ulonglong *puVar20;
  int iVar21;
  byte bVar22;
  uint uVar23;
  undefined2 *puVar24;
  uint uVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulonglong uVar28;
  undefined4 uStack_80;
  byte *local_7c;
  uint local_74;
  uint uStack_60;
  int iStack_50;
  uint local_4c;
  int local_44;
  int iStack_40;
  uint local_3c;
  undefined8 uStack_30;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  puVar6 = (undefined4 *)param_1[0xb];
  local_7c = (byte *)((int)param_1 + 0x5d);
  cVar1 = (char)param_1[10];
  cVar2 = *(char *)((int)param_1 + 0x2a);
  cVar3 = *(char *)((int)param_1 + 0x2b);
  uStack_80 = CONCAT13(cVar2,CONCAT12(cVar3,CONCAT11(cVar1,(undefined1)uStack_80)));
  local_24 = (uint)(ushort)param_1[9];
  uVar7 = param_1[3];
  local_4c = param_1[4];
  local_20 = *param_1;
  local_1c = param_1[5];
  uVar23 = (int)local_20 >> 0x10 & 0xff;
  iVar10 = FUN_10012dc0(local_20);
  local_3c = 0;
  local_44 = 0;
  iVar11 = (int)((longlong)(ulonglong)uVar23 / (longlong)iVar10);
  puVar24 = param_2 + 9;
  iVar9 = (int)puVar6 / 0x5a;
  iVar8 = *(int *)((int)this + 0x2e8);
  iVar12 = local_4c * uVar7;
  local_28 = (*(int **)this)[0x1a];
  local_74 = 0;
  if (cVar3 != '\0') {
    local_44 = (**(code **)(**(int **)this + 0x18))(local_7c);
  }
  do {
    if (cVar3 != '\0') {
      local_3c = (**(code **)(**(int **)this + 0x14))(local_7c);
      local_3c = local_3c & 0xffff;
      iVar13 = (**(code **)(*(int *)*puVar6 + 0x1c))(uStack_80);
      local_74 = (uint)(iVar13 << 3) / uVar23;
      local_7c = (byte *)((local_3c << 3) / uStack_60 + local_44);
    }
    uStack_18 = 0;
    if (iVar11 - 9U < 7) {
      if (cVar2 == '\0') {
        if ((puVar6 == (undefined4 *)0x0) && (cVar1 == '\0')) {
          memcpy(puVar24 + local_74 * iVar10,local_7c,iVar12 * iVar10 * 2);
        }
        else {
          iVar13 = 0;
          if (0 < iVar12) {
            uStack_60 = local_74 * 4;
            pbVar27 = local_7c + 4;
            do {
              if ((cVar1 != '\0') && (iVar10 == 1)) {
                uVar25 = FUN_1000e680(*(void **)((int)this + 4),
                                      (uint)*(ushort *)(local_7c + iVar13 * 2),local_74 + iVar13);
                *(short *)(local_7c + iVar13 * 2) = (short)uVar25;
              }
              iVar17 = *(int *)(uStack_60 + *(int *)(iVar8 + iVar9 * 0xc)) * iVar10;
              puVar24[iVar17] = *(undefined2 *)(pbVar27 + -4);
              if (((1 < iVar10) &&
                  (param_2[iVar17 + 10] = *(undefined2 *)(pbVar27 + -2), 2 < iVar10)) &&
                 (param_2[iVar17 + 0xb] = *(undefined2 *)pbVar27, 3 < iVar10)) {
                param_2[iVar17 + 0xc] = *(undefined2 *)(pbVar27 + 2);
              }
              pbVar27 = pbVar27 + iVar10 * 2;
              iVar13 = iVar13 + 1;
              uStack_60 = uStack_60 + 4;
            } while (iVar13 < iVar12);
          }
        }
      }
      else {
        iStack_50 = 0;
        if (0 < iVar12) {
          uVar25 = 0;
          uStack_60 = local_74 << 2;
          do {
            cVar4 = *(char *)((int)this + 0x18c);
            FUN_10010cd0((int)local_7c,iVar11,uVar25,cVar4,&uStack_18);
            if (1 < iVar10) {
              uStack_30 = 0;
              FUN_10010cd0((int)local_7c,iVar11,uVar25 + iVar11,cVar4,&uStack_30);
              uVar16 = uStack_30._4_4_ << 0x10 | (uint)uStack_30 >> 0x10 | uStack_18._4_4_;
              uVar14 = (uint)uStack_30 << 0x10 | (uint)uStack_18;
              uStack_30 = CONCAT44(uStack_30._4_4_,uVar16);
              uStack_18 = CONCAT44(uVar16,uVar14);
              if (2 < iVar10) {
                uStack_10 = 0;
                FUN_10010cd0((int)local_7c,iVar11,uVar25 + iVar11 * 2,cVar4,&uStack_10);
                uVar16 = (uint)uStack_10 | (uint)uStack_30;
                uStack_30 = CONCAT44(uStack_30._4_4_,uVar16);
                uStack_18 = CONCAT44(uVar16,uVar14);
                if (3 < iVar10) {
                  uStack_10 = 0;
                  FUN_10010cd0((int)local_7c,iVar11,uVar25 + iVar11 * 3,cVar4,&uStack_10);
                  uStack_18 = CONCAT44((uint)uStack_10 << 0x10 | (uint)uStack_30,uVar14);
                }
              }
            }
            uVar15 = (ushort)uStack_18;
            if ((cVar1 != '\0') && (iVar10 == 1)) {
              uVar14 = FUN_1000e680(*(void **)((int)this + 4),(uint)(ushort)uStack_18,
                                    local_74 + iStack_50);
              uStack_18 = CONCAT62(uStack_18._2_6_,(ushort)uVar14);
              uVar15 = (ushort)uVar14;
            }
            iVar13 = *(int *)(uStack_60 + *(int *)(iVar8 + iVar9 * 0xc)) * iVar10;
            puVar24[iVar13] = uVar15;
            if (1 < iVar10) {
              param_2[iVar13 + 10] = uStack_18._2_2_;
              if (2 < iVar10) {
                param_2[iVar13 + 0xb] = uStack_18._4_2_;
                if (3 < iVar10) {
                  param_2[iVar13 + 0xc] = uStack_18._6_2_;
                }
              }
            }
            uVar25 = uVar25 + uVar23;
            iStack_50 = iStack_50 + 1;
            uStack_60 = uStack_60 + 4;
          } while (iStack_50 < iVar12);
        }
      }
    }
    else if (iVar11 < 8) {
      if (cVar2 == '\0') {
        if ((puVar6 == (undefined4 *)0x0) && (cVar1 == '\0')) {
          memcpy((undefined2 *)(local_74 * iVar10 + (int)puVar24),local_7c,iVar12 * iVar10);
        }
        else if (0 < iVar12) {
          iVar13 = local_74 * 4;
          pbVar27 = local_7c + 2;
          uStack_30 = CONCAT44(uStack_30._4_4_,local_74 - (int)local_7c);
          iVar17 = local_74 - (int)local_7c;
          pbVar26 = local_7c;
          iStack_50 = iVar12;
          do {
            if ((cVar1 != '\0') && (iVar10 == 1)) {
              uVar25 = FUN_1000e680(*(void **)((int)this + 4),(uint)*pbVar26,(int)(pbVar26 + iVar17)
                                   );
              *pbVar26 = (byte)uVar25;
            }
            pbVar19 = (byte *)(*(int *)(iVar13 + *(int *)(iVar8 + iVar9 * 0xc)) * iVar10 +
                              (int)puVar24);
            *pbVar19 = pbVar27[-2];
            if (((1 < iVar10) && (pbVar19[1] = pbVar27[-1], 2 < iVar10)) &&
               (pbVar19[2] = *pbVar27, 3 < iVar10)) {
              pbVar19[3] = pbVar27[1];
            }
            iVar13 = iVar13 + 4;
            pbVar26 = pbVar26 + 1;
            pbVar27 = pbVar27 + iVar10;
            iStack_50 = iStack_50 + -1;
            iVar17 = (uint)uStack_30;
          } while (iStack_50 != 0);
        }
      }
      else {
        iStack_50 = 0;
        if (0 < iVar12) {
          iStack_40 = local_74 << 2;
          uStack_60 = 0;
          do {
            FUN_10010c40((int)local_7c,iVar11,uStack_60,&uStack_18);
            if (1 < iVar10) {
              uStack_30 = 0;
              FUN_10010c40((int)local_7c,iVar11,uStack_60 + iVar11,&uStack_30);
              uVar25 = uStack_30._4_4_ << 0x10 | (uint)uStack_30 >> 0x10 | uStack_18._4_4_;
              uVar14 = (uint)uStack_30 << 0x10 | (uint)uStack_18;
              uStack_30 = CONCAT44(uStack_30._4_4_,uVar25);
              uStack_18 = CONCAT44(uVar25,uVar14);
              if (2 < iVar10) {
                uStack_10 = 0;
                FUN_10010c40((int)local_7c,iVar11,uStack_60 + iVar11 * 2,&uStack_10);
                uVar25 = (uint)uStack_10 | (uint)uStack_30;
                uStack_18 = CONCAT44(uVar25,uVar14);
                if (3 < iVar10) {
                  uStack_10 = 0;
                  FUN_10010c40((int)local_7c,iVar11,uStack_60 + iVar11 * 3,&uStack_10);
                  uStack_18 = CONCAT44((uint)uStack_10 << 0x10 | uVar25,uVar14);
                }
              }
            }
            if ((cVar1 != '\0') && (iVar10 == 1)) {
              iVar13 = *(int *)((int)this + 4);
              uVar15 = (ushort)uStack_18;
              if (*(ushort *)(iVar13 + 0x50) != 0) {
                iVar17 = iStack_50;
                if ((uint)*(ushort *)(iVar13 + 0x50) < (uint)(ushort)uStack_18) {
                  iVar17 = *(int *)(iVar13 + 0x14) + iStack_50;
                }
                if (*(int *)(iVar13 + 0x44) != *(int *)(iVar13 + 0x48)) {
                  sVar5 = *(short *)(*(int *)(iVar13 + 0x44) + (iVar17 + local_74) * 2);
                  if ((uint)(ushort)uStack_18 < (uint)(int)sVar5) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = (ushort)uStack_18 - sVar5;
                  }
                }
                if (*(int *)(iVar13 + 0x2c) != *(int *)(iVar13 + 0x30)) {
                  if (*(double *)(*(int *)(iVar13 + 0x2c) + (iVar17 + local_74) * 8) == 0.0) {
                    uVar15 = (ushort)*(undefined4 *)(iVar13 + 0x18);
                  }
                  else {
                    uVar28 = FUN_10028d71();
                    uVar14 = (int)uVar28 + (uint)*(ushort *)(iVar13 + 0x52);
                    uVar25 = *(uint *)(iVar13 + 0x18);
                    if (uVar14 <= *(uint *)(iVar13 + 0x18)) {
                      uVar25 = uVar14;
                    }
                    uVar15 = (ushort)uVar25;
                  }
                }
              }
              uStack_18 = CONCAT62(uStack_18._2_6_,uVar15);
            }
            puVar18 = (undefined2 *)
                      (*(int *)(iStack_40 + *(int *)(iVar8 + iVar9 * 0xc)) * iVar10 + (int)puVar24);
            *(undefined1 *)puVar18 = (undefined1)uStack_18;
            if (1 < iVar10) {
              *(byte *)((int)puVar18 + 1) = uStack_18._2_1_;
              if (2 < iVar10) {
                *(byte *)(puVar18 + 1) = uStack_18._4_1_;
                if (3 < iVar10) {
                  *(byte *)((int)puVar18 + 3) = uStack_18._6_1_;
                }
              }
            }
            iStack_40 = iStack_40 + 4;
            uStack_60 = uStack_60 + uVar23;
            iStack_50 = iStack_50 + 1;
          } while (iStack_50 < iVar12);
        }
      }
    }
    else if (iVar11 == 8) {
      if ((puVar6 == (undefined4 *)0x0) && (cVar1 == '\0')) {
        memcpy((undefined2 *)(local_74 * uVar23 + (int)puVar24),local_7c,iVar12 * iVar10);
      }
      else {
        iStack_50 = 0;
        if (0 < iVar12) {
          uStack_60 = local_74 << 2;
          iStack_40 = 0;
          do {
            pbVar27 = local_7c + (iStack_40 >> 3);
            bVar22 = *pbVar27;
            uVar25 = (uint)bVar22;
            uStack_18 = (ulonglong)uVar25;
            if (1 < iVar10) {
              uVar14 = (uint)pbVar27[1] << 0x10 | uVar25;
              uStack_18 = (ulonglong)uVar14;
              if (2 < iVar10) {
                uStack_18 = (ulonglong)CONCAT14(pbVar27[2],uVar14);
                if (3 < iVar10) {
                  uStack_18 = CONCAT44((uint)pbVar27[3] << 0x10 | (uint)pbVar27[2],uVar14);
                }
              }
            }
            uStack_30 = uStack_30 & 0xffffffff00000000;
            if ((cVar1 != '\0') && (iVar10 == 1)) {
              uVar25 = FUN_1000e680(*(void **)((int)this + 4),uVar25,local_74 + iStack_50);
              bVar22 = (byte)uVar25;
            }
            pbVar27 = (byte *)(*(int *)(uStack_60 + *(int *)(iVar8 + iVar9 * 0xc)) * iVar10 +
                              (int)puVar24);
            *pbVar27 = bVar22;
            if (1 < iVar10) {
              pbVar27[1] = uStack_18._2_1_;
              if (2 < iVar10) {
                pbVar27[2] = uStack_18._4_1_;
                if (3 < iVar10) {
                  pbVar27[3] = uStack_18._6_1_;
                }
              }
            }
            iStack_50 = iStack_50 + 1;
            iStack_40 = iStack_40 + uVar23;
            uStack_60 = uStack_60 + 4;
          } while (iStack_50 < iVar12);
        }
      }
    }
    else if (iVar11 == 0x10) {
      if ((puVar6 == (undefined4 *)0x0) && (cVar1 == '\0')) {
        memcpy((undefined2 *)(local_74 * uVar23 + (int)puVar24),local_7c,iVar12 * iVar10 * 2);
      }
      else {
        iVar13 = 0;
        if (0 < iVar12) {
          uStack_60 = local_74 * 4;
          iVar17 = 0;
          do {
            puVar20 = (ulonglong *)(local_7c + (iVar17 >> 3));
            if (iVar10 == 1) {
              uStack_18 = (ulonglong)(ushort)*puVar20;
            }
            else if (iVar10 == 2) {
              uStack_18 = (ulonglong)(uint)*puVar20;
            }
            else if (iVar10 == 3) {
              if (*(char *)((int)this + 0x18c) == '\0') {
                uStack_18 = *puVar20 & 0xffffffffffff0000;
              }
              else {
                uStack_18 = *puVar20 & 0xffffffffffff;
              }
            }
            else if (iVar10 == 4) {
              uStack_18 = *puVar20;
            }
            if ((cVar1 != '\0') && (iVar10 == 1)) {
              uVar25 = FUN_1000e680(*(void **)((int)this + 4),(uint)(ushort)uStack_18,
                                    local_74 + iVar13);
              uStack_18 = CONCAT62(uStack_18._2_6_,(short)uVar25);
            }
            iVar21 = *(int *)(uStack_60 + *(int *)(iVar8 + iVar9 * 0xc)) * iVar10;
            param_2[iVar21 + 9] = (ushort)uStack_18;
            if (1 < iVar10) {
              param_2[iVar21 + 10] = uStack_18._2_2_;
              if (2 < iVar10) {
                param_2[iVar21 + 0xb] = uStack_18._4_2_;
                if (3 < iVar10) {
                  param_2[iVar21 + 0xc] = uStack_18._6_2_;
                }
              }
            }
            iVar17 = iVar17 + uVar23;
            iVar13 = iVar13 + 1;
            uStack_60 = uStack_60 + 4;
          } while (iVar13 < iVar12);
        }
      }
    }
  } while ((cVar3 != '\0') && (local_3c = local_3c + 1, (int)local_3c < local_28));
  uVar23 = uVar7;
  if ((puVar6 != (undefined4 *)0x5a) && (puVar6 != (undefined4 *)0x10e)) {
    uVar23 = local_4c;
    local_4c = uVar7;
  }
  *param_2 = (short)local_24;
  *(uint *)(param_2 + 1) = local_4c;
  *(uint *)(param_2 + 3) = uVar23;
  *(uint *)(param_2 + 5) = local_20;
  *(uint *)(param_2 + 7) = local_1c;
  if ((cVar1 != '\0') && (iVar10 == 1)) {
    if (8 < iVar11) {
      FUN_10001580(*(void **)((int)this + 4),(int)puVar24,local_4c,*(int *)(param_2 + 3),(int)puVar6
                  );
      return;
    }
    FUN_10001390(*(void **)((int)this + 4),(int)puVar24,local_4c,*(int *)(param_2 + 3),(int)puVar6);
  }
  return;
}











uint __fastcall FUN_10015270(void *param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  local_8 = 0;
  uVar1 = FUN_10015430(param_1,0x41,0x55,&local_8,1);
  if ((char)uVar1 != '\0') {
    local_14 = (double)(1000.0 / (float)(local_8 & 0xffff));
    dVar3 = ceil(local_14);
    local_14 = (double)((ulonglong)dVar3 & 0xffffffff00000000);
    *(short *)((int)param_1 + 0x60) = (short)(int)dVar3;
    uVar1 = FUN_10015430(param_1,0x65,0x11,&local_14,1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_10015430(param_1,0x65,0x10,(int)&local_14 + 1,1);
      if ((char)uVar1 != '\0') {
        local_c = 0;
        uVar1 = FUN_10015430(param_1,0x65,0xd,&local_c,1);
        if ((char)uVar1 != '\0') {
          uVar1 = FUN_10015430(param_1,0x65,0xc,(int)&local_c + 1,1);
          if ((char)uVar1 != '\0') {
            local_18 = 0;
            uVar1 = FUN_10015430(param_1,0x65,0xf,&local_18,1);
            if ((char)uVar1 != '\0') {
              uVar1 = FUN_10015430(param_1,0x65,0xe,(int)&local_18 + 1,1);
              if ((char)uVar1 != '\0') {
                local_4 = 0;
                uVar1 = FUN_10015430(param_1,0x41,0xf,&local_4,1);
                if ((char)uVar1 != '\0') {
                  dVar3 = (double)(1.0 / (float)((local_4 & 0xffff) * 1000));
                  *(double *)((int)param_1 + 0x58) = dVar3;
                  *(short *)((int)param_1 + 0x62) =
                       (short)(int)((double)(int)((uint)(ushort)local_14 * (local_18 & 0xffff)) *
                                   dVar3);
                  iVar2 = (int)((double)(int)((local_c & 0xffff) * (local_18 & 0xffff)) * dVar3);
                  *(short *)((int)param_1 + 0x50) = (short)iVar2;
                  return CONCAT31((int3)((uint)iVar2 >> 8),1);
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}












void __thiscall
FUN_10015430(void *this,byte param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002abc0;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = _Mtx_lock((int)this + 0x80,local_14);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  local_8 = 0;
  iVar2 = libusb_control_transfer
                    (*(undefined4 *)this,0xc0,0xbe,(uint)param_1 | (param_2 & 0xff) << 8,0,param_3,
                     param_4,0);
  if (iVar2 < 0) {
    pcVar3 = (char *)libusb_error_name(iVar2);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_100243b0(local_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    local_8._0_1_ = 1;
    FUN_10019700(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pvVar5 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar5);
    }
  }
  local_8 = 2;
  iVar2 = _Mtx_unlock((int)this + 0x80);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}














void __cdecl FUN_10015580(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *****pppppuVar3;
  undefined4 *puVar4;
  char *****pppppcVar5;
  int *piVar6;
  uint uVar7;
  byte *****pppppbVar8;
  int *piVar9;
  byte *pbVar10;
  uint **this;
  void *pvVar11;
  char *pcVar12;
  byte ****ppppbVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 *local_178;
  int local_174;
  undefined4 local_170;
  uint local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  uint *local_160;
  uint *local_15c;
  uint *local_158;
  void *local_154 [5];
  uint local_140;
  byte ***local_13c [5];
  uint local_128;
  undefined4 ****local_124 [4];
  uint local_114;
  uint local_110;
  void *local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  void *local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 local_e4;
  void *local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  char ****local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  byte ****local_ac [3];
  int *local_a0;
  int *local_9c;
  uint local_98;
  char local_94 [128];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_1002ad5c;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_164 = (uint *)0x0;
  local_178 = (undefined4 *)0x0;
  local_174 = 0;
  local_170 = 0;
  local_114 = 0;
  local_110 = 0xf;
  local_124[0] = (undefined4 ****)((uint)local_124[0] & 0xffffff00);
  local_8 = 1;
  uStack_7 = 0;
  FUN_1000f6b0(param_2,local_124);
  local_8 = 2;
  local_cc = 0;
  local_c8 = 0xf;
  local_dc[0] = (void *)((uint)local_dc[0] & 0xffffff00);
  local_164 = (uint *)0x1;
  FUN_100256a0(local_dc,param_1[4] + 1);
  puVar15 = param_1 + 4;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  FUN_10023f40(local_dc,param_1,*puVar15);
  FUN_10023f40(local_dc,&DAT_1002d974,1);
  pppppuVar3 = local_124;
  if (0xf < local_110) {
    pppppuVar3 = (undefined4 *****)local_124[0];
  }
  puVar4 = FUN_10023f40(local_dc,pppppuVar3,local_114);
  local_164 = (uint *)0x3;
  local_10c = (void *)*puVar4;
  uStack_108 = puVar4[1];
  uStack_104 = puVar4[2];
  uStack_100 = puVar4[3];
  local_fc = *(undefined8 *)(puVar4 + 4);
  puVar4[4] = 0;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  local_8 = 3;
  puVar4 = FUN_10023f40(&local_10c,&DAT_1002d974,1);
  local_164 = (uint *)0x7;
  local_f4 = (void *)*puVar4;
  uStack_f0 = puVar4[1];
  uStack_ec = puVar4[2];
  uStack_e8 = puVar4[3];
  local_e4 = *(undefined8 *)(puVar4 + 4);
  puVar4[4] = 0;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  local_8 = 4;
  puVar4 = FUN_10023f40(&local_f4,&DAT_1002dc74,4);
  local_c4 = (char ****)*puVar4;
  uStack_c0 = puVar4[1];
  uStack_bc = puVar4[2];
  uStack_b8 = puVar4[3];
  local_b4 = *(undefined8 *)(puVar4 + 4);
  puVar4[4] = 0;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  local_8 = 6;
  if (0xf < local_e4._4_4_) {
    pvVar11 = local_f4;
    if ((0xfff < local_e4._4_4_ + 1) &&
       (pvVar11 = *(void **)((int)local_f4 + -4), 0x1f < (uint)((int)local_f4 + (-4 - (int)pvVar11))
       )) {
LAB_100157be:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar11);
  }
  local_e4 = 0xf00000000;
  local_f4 = (void *)((uint)local_f4 & 0xffffff00);
  local_8 = 7;
  if (0xf < local_fc._4_4_) {
    pvVar11 = local_10c;
    if ((0xfff < local_fc._4_4_ + 1) &&
       (pvVar11 = *(void **)((int)local_10c + -4),
       0x1f < (uint)((int)local_10c + (-4 - (int)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar11);
  }
  local_fc = 0xf00000000;
  local_10c = (void *)((uint)local_10c & 0xffffff00);
  local_8 = 8;
  if (0xf < local_c8) {
    pvVar11 = local_dc[0];
    if ((0xfff < local_c8 + 1) &&
       (pvVar11 = *(void **)((int)local_dc[0] + -4),
       0x1f < (uint)((int)local_dc[0] + (-4 - (int)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar11);
  }
  local_cc = 0;
  pppppcVar5 = &local_c4;
  if (0xf < local_b4._4_4_) {
    pppppcVar5 = (char *****)local_c4;
  }
  local_c8 = 0xf;
  local_dc[0] = (void *)((uint)local_dc[0] & 0xffffff00);
  cVar2 = FUN_100177a0((char *)pppppcVar5,&local_178);
  if (cVar2 == '\0') {
    local_164 = (uint *)((uint)local_164 & 0xffffff);
    goto LAB_10016c90;
  }
  local_15c = (uint *)0x0;
  local_158 = (uint *)0x0;
  local_15c = (uint *)FUN_1001e9f0();
  local_8 = 9;
  local_164 = (uint *)0x0;
  local_160 = (uint *)((local_174 - (int)local_178) / 0x18);
  local_168 = local_178;
  if (local_160 != (uint *)0x0) {
    do {
      puVar15 = local_164;
      local_a0 = (int *)0x0;
      local_9c = (int *)0x0;
      local_98 = 0;
      local_8 = 10;
      FUN_10019dd0(local_168,&DAT_10034900,&local_a0);
      piVar9 = local_a0;
      if (((int)local_9c - (int)local_a0) / 0x18 == 2) {
        piVar6 = local_a0 + 6;
        FUN_10007280(local_154,local_a0);
        local_8 = 0xb;
        FUN_10007280(local_13c,piVar6);
        local_8 = 0xc;
        piVar6 = (int *)FUN_10001c80(&local_15c,local_154);
        FUN_100047c0(&local_15c,&local_180,(int *)0x0,(byte *)(piVar6 + 4),piVar6);
        local_8 = 10;
        if (0xf < local_128) {
          ppppbVar13 = (byte ****)local_13c[0];
          if ((0xfff < local_128 + 1) &&
             (ppppbVar13 = (byte ****)local_13c[0][-1],
             0x1f < (uint)((int)local_13c[0] + (-4 - (int)ppppbVar13)))) goto LAB_100157be;
          FUN_100284c9(ppppbVar13);
        }
        puVar15 = local_164;
        if (0xf < local_140) {
          pvVar11 = local_154[0];
          if ((0xfff < local_140 + 1) &&
             (pvVar11 = *(void **)((int)local_154[0] + -4),
             0x1f < (uint)((int)local_154[0] + (-4 - (int)pvVar11)))) goto LAB_100157be;
          FUN_100284c9(pvVar11);
          puVar15 = local_164;
        }
      }
      local_8 = 9;
      if (piVar9 != (int *)0x0) {
        FUN_10002450(piVar9,local_9c);
        piVar6 = piVar9;
        if ((0xfff < (uint)(((int)(local_98 - (int)piVar9) / 0x18) * 0x18)) &&
           (piVar6 = (int *)piVar9[-1], 0x1f < (uint)((int)piVar9 + (-4 - (int)piVar6))))
        goto LAB_100157be;
        FUN_100284c9(piVar6);
        local_a0 = (int *)0x0;
        local_9c = (int *)0x0;
        local_98 = 0;
      }
      local_164 = (uint *)((int)puVar15 + 1);
      local_168 = local_168 + 6;
    } while (local_164 < local_160);
  }
  if (local_158 == (uint *)0x0) {
    FUN_100197a0((int *)0x386);
LAB_10016c34:
    local_164 = (uint *)((uint)local_164 & 0xffffff);
  }
  else {
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"SensorID",8);
    FUN_100250d0(&local_15c,(int *)&local_160,(byte *)local_ac);
    ppppbVar13 = local_ac[0];
    puVar15 = local_160;
    if (local_160 == local_15c) {
LAB_10015bb3:
      puVar15 = local_15c;
    }
    else {
      puVar14 = local_160 + 4;
      if (0xf < local_160[9]) {
        puVar14 = (uint *)*puVar14;
      }
      pppppbVar8 = local_ac;
      if (0xf < local_98) {
        pppppbVar8 = (byte *****)local_ac[0];
      }
      uVar7 = FUN_100065c0((byte *)pppppbVar8,(uint)local_9c,(byte *)puVar14,local_160[8]);
      if ((int)uVar7 < 0) goto LAB_10015bb3;
    }
    local_164 = (uint *)CONCAT13(puVar15 == local_15c,(undefined3)local_164);
    if (0xf < local_98) {
      pppppbVar8 = (byte *****)ppppbVar13;
      if ((0xfff < local_98 + 1) &&
         (pppppbVar8 = (byte *****)ppppbVar13[-1],
         (byte *)0x1f < (byte *)((int)ppppbVar13 + (-4 - (int)pppppbVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pppppbVar8);
    }
    if (local_164._3_1_ != '\0') {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      pcVar12 = local_94;
      local_9c = (int *)0x0;
      local_98 = 0xf;
      local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_100243b0(local_ac,local_94,(int)pcVar12 - (int)(local_94 + 1));
      local_8 = 0xd;
      FUN_10019700(local_ac);
      local_8 = 9;
      if (0xf < local_98) {
        ppppbVar13 = local_ac[0];
        if ((0xfff < local_98 + 1) &&
           (ppppbVar13 = (byte ****)local_ac[0][-1],
           0x1f < (uint)((int)local_ac[0] + (-4 - (int)ppppbVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_100284c9(ppppbVar13);
      }
      goto LAB_10016c34;
    }
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"SensorName",10);
    FUN_100250d0(&local_15c,(int *)&local_160,(byte *)local_ac);
    ppppbVar13 = local_ac[0];
    puVar15 = local_160;
    if (local_160 == local_15c) {
LAB_10015d78:
      puVar15 = local_15c;
    }
    else {
      puVar14 = local_160 + 4;
      if (0xf < local_160[9]) {
        puVar14 = (uint *)*puVar14;
      }
      pppppbVar8 = local_ac;
      if (0xf < local_98) {
        pppppbVar8 = (byte *****)local_ac[0];
      }
      uVar7 = FUN_100065c0((byte *)pppppbVar8,(uint)local_9c,(byte *)puVar14,local_160[8]);
      if ((int)uVar7 < 0) goto LAB_10015d78;
    }
    local_164 = (uint *)CONCAT13(puVar15 == local_15c,(undefined3)local_164);
    if (0xf < local_98) {
      pppppbVar8 = (byte *****)ppppbVar13;
      if ((0xfff < local_98 + 1) &&
         (pppppbVar8 = (byte *****)ppppbVar13[-1],
         (byte *)0x1f < (byte *)((int)ppppbVar13 + (-4 - (int)pppppbVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pppppbVar8);
    }
    if (local_164._3_1_ != '\0') {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      pcVar12 = local_94;
      local_9c = (int *)0x0;
      local_98 = 0xf;
      local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_100243b0(local_ac,local_94,(int)pcVar12 - (int)(local_94 + 1));
      local_8 = 0xe;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
LAB_10016c2c:
      FUN_10009740((int *)pppppbVar8);
      goto LAB_10016c34;
    }
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"Width",5);
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      pcVar12 = local_94;
      local_9c = (int *)0x0;
      local_98 = 0xf;
      local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_100243b0(local_ac,local_94,(int)pcVar12 - (int)(local_94 + 1));
      local_8 = 0xf;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"Height",6);
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      pcVar12 = local_94;
      local_9c = (int *)0x0;
      local_98 = 0xf;
      local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_100243b0(local_ac,local_94,(int)pcVar12 - (int)(local_94 + 1));
      local_8 = 0x10;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"CornerCutLength",0xf);
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      pcVar12 = local_94;
      local_9c = (int *)0x0;
      local_98 = 0xf;
      local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_100243b0(local_ac,local_94,(int)pcVar12 - (int)(local_94 + 1));
      local_8 = 0x11;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"TRowMin",7);
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      pcVar12 = local_94;
      local_9c = (int *)0x0;
      local_98 = 0xf;
      local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_100243b0(local_ac,local_94,(int)pcVar12 - (int)(local_94 + 1));
      local_8 = 0x12;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    local_9c = (int *)0x0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    FUN_100243b0(local_ac,"TRow2",5);
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x13;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"MultiFrameNumber");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x14;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"XRayOffThreshold");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x15;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"AutoCorrectDarkMode");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x16;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"AutoJudgeImageMode");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x17;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"AutoAlignImageMode");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x18;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"BeginLinesNumber");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x19;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"EndLinesNumber");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x1a;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"DarkAverage");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x1b;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"BeginLinesDValue");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x1c;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"EndLinesDValue");
    piVar9 = (int *)FUN_10024d10(&local_15c,(int *)&local_160,(byte *)local_ac);
    puVar14 = local_15c;
    puVar15 = (uint *)*piVar9;
    FUN_10009740((int *)local_ac);
    if (puVar15 == puVar14) {
      memset(local_94,0,0x80);
      FUN_10027e10(local_94,"No itme \'%s\' in %s");
      FUN_10007400(local_ac,local_94);
      local_8 = 0x1d;
      FUN_10019700(local_ac);
      pppppbVar8 = local_ac;
      goto LAB_10016c2c;
    }
    FUN_10007400(local_ac,"SensorID");
    local_8 = 0x1e;
    pbVar10 = FUN_1000b400(&local_15c,(byte *)local_ac);
    local_8 = 9;
    FUN_10009740((int *)local_ac);
    puVar15 = (uint *)(pbVar10 + 0x10);
    if (0xf < *(uint *)(pbVar10 + 0x14)) {
      pbVar10 = *(byte **)pbVar10;
    }
    uVar16 = FUN_1000fe20((int)pbVar10,*puVar15);
    local_16c = (uint)(ushort)uVar16;
    local_164 = (uint *)CONCAT22((ushort)uVar16,(undefined2)local_164);
    FUN_10024c70(&DAT_100348f0,(int *)&local_160,(ushort *)&local_16c);
    puVar15 = local_160;
    if (local_160 != DAT_100348f0) {
      memset(local_94,0,0x80);
      FUN_10007400(local_13c,"SensorName");
      local_8 = 0x20;
      pbVar10 = FUN_1000b400(&local_15c,(byte *)local_13c);
      FUN_100245b0((undefined4 *)pbVar10);
      FUN_10007400(local_ac,"SensorName");
      local_8 = 0x21;
      pbVar10 = FUN_1000b400(puVar15 + 5,(byte *)local_ac);
      FUN_100245b0((undefined4 *)pbVar10);
      FUN_10027e10(local_94,"%s and %s have the same SensorID \'%hx\'");
      FUN_10009740((int *)local_ac);
      local_8 = 9;
      FUN_10009740((int *)local_13c);
      FUN_10007400(local_13c,local_94);
      local_8 = 0x22;
      FUN_10019700(local_13c);
      pppppbVar8 = (byte *****)local_13c;
      goto LAB_10016c2c;
    }
    this = (uint **)FUN_1000b180(&DAT_100348f0,(ushort *)&local_16c);
    if (this == &local_15c) {
LAB_10016b51:
      local_164 = (uint *)CONCAT13(1,(undefined3)local_164);
    }
    else {
      puVar15 = *this;
      local_8 = 0x1f;
      FUN_10021710((int *)puVar15[1]);
      local_8 = 9;
      (*this)[1] = (uint)puVar15;
      **this = (uint)puVar15;
      (*this)[2] = (uint)puVar15;
      this[1] = (uint *)0x0;
      puVar4 = FUN_10002350(this,(undefined4 *)local_15c[1],*this,local_160);
      (*this)[1] = (uint)puVar4;
      puVar15 = *this;
      this[1] = local_158;
      piVar9 = (int *)puVar15[1];
      if (*(char *)((int)piVar9 + 0xd) != '\0') {
        *puVar15 = (uint)puVar15;
        (*this)[2] = (uint)*this;
        goto LAB_10016b51;
      }
      cVar2 = *(char *)(*piVar9 + 0xd);
      piVar6 = (int *)*piVar9;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*piVar6 + 0xd);
        piVar9 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      *puVar15 = (uint)piVar9;
      uVar7 = (*this)[1];
      uVar1 = *(uint *)(uVar7 + 8);
      cVar2 = *(char *)(uVar1 + 0xd);
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*(uint *)(uVar1 + 8) + 0xd);
        uVar7 = uVar1;
        uVar1 = *(uint *)(uVar1 + 8);
      }
      (*this)[2] = uVar7;
      local_164 = (uint *)CONCAT13(1,(undefined3)local_164);
    }
  }
  puVar15 = local_15c;
  local_8 = 0x23;
  FUN_10021710((int *)local_15c[1]);
  local_15c[1] = (uint)puVar15;
  *local_15c = (uint)puVar15;
  local_15c[2] = (uint)puVar15;
  local_158 = (uint *)0x0;
  FUN_10002410(local_15c,0x40);
LAB_10016c90:
  FUN_10009740((int *)&local_c4);
  FUN_10009740((int *)local_124);
  FUN_10009ba0((int *)&local_178);
  ExceptionList = local_10;
  uStack_17c = 0x10016cce;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}















void __cdecl FUN_10016ce0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  char ****ppppcVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  ushort *puVar10;
  void *pvVar11;
  byte *pbVar12;
  undefined8 uVar13;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 *local_ec;
  byte *local_e8;
  byte *local_e4;
  byte *local_e0;
  byte *local_dc;
  int *local_d8;
  int local_d4;
  int *local_d0;
  int *local_cc;
  byte *local_c8;
  int *local_c4;
  undefined1 local_bd;
  int local_bc [6];
  char ***local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  uint uStack_90;
  char ***local_8c [5];
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  byte local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [3];
  byte *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = DAT_100348f0;
  puStack_c = &LAB_1002ae50;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_ec = param_1;
  local_cc = (int *)0x0;
  local_8 = 0;
  FUN_10021530(&DAT_100348f0,(int *)DAT_100348f0[1]);
  DAT_100348f0[1] = (int)piVar1;
  *DAT_100348f0 = (int)piVar1;
  DAT_100348f0[2] = (int)piVar1;
  DAT_100348f4 = 0;
  FUN_10002450(DAT_10034868,DAT_1003486c);
  piVar1 = DAT_10034928;
  DAT_1003486c = DAT_10034868;
  local_8 = 1;
  FUN_100215e0(&DAT_10034928,(int *)DAT_10034928[1]);
  DAT_10034928[1] = (int)piVar1;
  *DAT_10034928 = (int)piVar1;
  DAT_10034928[2] = (int)piVar1;
  piVar1 = DAT_10034944;
  DAT_1003492c = 0;
  local_8 = 2;
  FUN_100215e0(&DAT_10034944,(int *)DAT_10034944[1]);
  DAT_10034944[1] = (int)piVar1;
  *DAT_10034944 = (int)piVar1;
  DAT_10034944[2] = (int)piVar1;
  DAT_100348e8 = DAT_100348e4;
  DAT_100348c8 = DAT_100348c4;
  DAT_10034948 = 0;
  DAT_1003493c = DAT_10034938;
  local_8 = 3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_cc = (int *)0x1;
  FUN_100256a0(local_2c,param_1[4] + 1);
  puVar4 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar4 = (undefined4 *)*param_1;
  }
  FUN_10023f40(local_2c,puVar4,param_1[4]);
  FUN_10023f40(local_2c,&DAT_1002d974,1);
  puVar4 = FUN_10023f40(local_2c,"Config",6);
  local_a4 = (char ***)*puVar4;
  uStack_a0 = puVar4[1];
  uStack_9c = puVar4[2];
  uStack_98 = puVar4[3];
  local_94 = puVar4[4];
  uStack_90 = puVar4[5];
  puVar4[4] = 0;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  local_8._0_1_ = 5;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
LAB_10016edc:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar11);
  }
  local_20 = (byte *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8._0_1_ = 6;
  ppppcVar5 = &local_a4;
  if (0xf < uStack_90) {
    ppppcVar5 = (char ****)local_a4;
  }
  cVar3 = FUN_100177a0((char *)ppppcVar5,&local_20);
  if (cVar3 != '\0') {
    local_f0 = 0;
    uVar2 = (local_1c - (int)local_20) / 0x18;
    local_e0 = local_20;
    if (uVar2 != 0) {
      local_d0 = (int *)0x2;
      pbVar12 = local_20;
      do {
        pbVar8 = pbVar12;
        if (0xf < *(uint *)(pbVar12 + 0x14)) {
          pbVar8 = *(byte **)pbVar12;
        }
        local_e0 = pbVar12;
        puVar6 = FUN_10005100(pbVar8,pbVar8 + *(int *)(pbVar12 + 0x10),(undefined4 *)0x0,
                              &DAT_10034914,0x10,pbVar8);
        if ((char)puVar6 == '\0') {
          local_dc = (byte *)0x0;
          local_d8 = (int *)0x0;
          local_d4 = 0;
          local_8._0_1_ = 7;
          FUN_10019dd0((undefined4 *)pbVar12,&DAT_1003489c,&local_dc);
          pbVar12 = local_dc;
          local_cc = (int *)(((int)local_d8 - (int)local_dc) / 0x18);
          if (local_cc == (int *)0x0) {
            local_8._0_1_ = 6;
            FUN_10009ba0((int *)&local_dc);
            pbVar12 = local_e0;
          }
          else {
            pbVar8 = local_dc;
            if (0xf < *(uint *)(local_dc + 0x14)) {
              pbVar8 = *(byte **)local_dc;
            }
            uVar7 = FUN_10006650(pbVar8,*(uint *)(local_dc + 0x10),(byte *)"VP_ID",5);
            if ((char)uVar7 == '\0') {
              pbVar8 = pbVar12;
              if (0xf < *(uint *)(pbVar12 + 0x14)) {
                pbVar8 = *(byte **)pbVar12;
              }
              uVar7 = FUN_10006650(pbVar8,*(uint *)(pbVar12 + 0x10),(byte *)"FPGA_ID",7);
              if ((char)uVar7 == '\0') {
                pbVar8 = pbVar12;
                if (0xf < *(uint *)(pbVar12 + 0x14)) {
                  pbVar8 = *(byte **)pbVar12;
                }
                uVar7 = FUN_10006650(pbVar8,*(uint *)(pbVar12 + 0x10),(byte *)"SensorName",10);
                if ((char)uVar7 == '\0') {
                  if (DAT_100348f4 == 0) {
LAB_10017705:
                    FUN_100197a0((int *)0x385);
LAB_10017712:
                    FUN_10009ba0((int *)&local_dc);
                    goto LAB_1001772c;
                  }
                  pbVar8 = pbVar12;
                  if (0xf < *(uint *)(pbVar12 + 0x14)) {
                    pbVar8 = *(byte **)pbVar12;
                  }
                  uVar7 = FUN_10006650(pbVar8,*(uint *)(pbVar12 + 0x10),&DAT_1002d9bc,1);
                  if ((char)uVar7 == '\0') {
                    pbVar8 = pbVar12;
                    if (0xf < *(uint *)(pbVar12 + 0x14)) {
                      pbVar8 = *(byte **)pbVar12;
                    }
                    uVar7 = FUN_10006650(pbVar8,*(uint *)(pbVar12 + 0x10),&DAT_1002d9c0,1);
                    if ((char)uVar7 == '\0') goto LAB_10017705;
                    local_c4 = (int *)*DAT_100348f0;
                    if (local_c4 != DAT_100348f0) {
                      local_e8 = pbVar12 + 0x30;
                      local_e4 = pbVar12 + 0x18;
                      do {
                        local_f8 = (uint)*(ushort *)(local_c4 + 4);
                        piVar1 = local_c4 + 5;
                        local_64 = 0;
                        uStack_60 = 0xf;
                        local_74 = local_74 & 0xffffff00;
                        FUN_100243b0(&local_74,"SensorName",10);
                        local_8._0_1_ = 0x11;
                        pbVar8 = FUN_1000b400(piVar1,(byte *)&local_74);
                        FUN_10009740((int *)&local_74);
                        local_4c = 0;
                        local_48 = 0xf;
                        local_5c[0] = 0;
                        local_8._0_1_ = 0x12;
                        FUN_1000f6b0(pbVar8,(void **)local_5c);
                        param_1 = local_ec;
                        puVar6 = FUN_100012d0(local_44,local_ec,"/");
                        local_8._0_1_ = 0x13;
                        puVar4 = FUN_10001220(&local_74,puVar6,(undefined4 *)local_5c);
                        local_8._0_1_ = 0x14;
                        puVar4 = FUN_10001270(local_bc,puVar4,"/");
                        local_8._0_1_ = 0x15;
                        FUN_10001220(local_8c,puVar4,(undefined4 *)local_e8);
                        FUN_10009740(local_bc);
                        FUN_10009740((int *)&local_74);
                        local_8._0_1_ = 0x19;
                        FUN_10009740((int *)local_44);
                        puVar10 = FUN_1000b200(&DAT_10034944,(ushort *)&local_f8);
                        pbVar8 = FUN_1000b490(puVar10,local_e4);
                        ppppcVar5 = local_8c;
                        if (0xf < local_78) {
                          ppppcVar5 = (char ****)local_8c[0];
                        }
                        cVar3 = FUN_100177a0((char *)ppppcVar5,(undefined4 *)pbVar8);
                        if (cVar3 == '\0') goto LAB_100176eb;
                        FUN_10009740((int *)local_8c);
                        local_8._0_1_ = 7;
                        FUN_10009740((int *)local_5c);
                        std::_Tree_unchecked_const_iterator<>::operator++
                                  ((_Tree_unchecked_const_iterator<> *)&local_c4);
                      } while (local_c4 != DAT_100348f0);
                    }
                  }
                  else {
                    local_c4 = (int *)*DAT_100348f0;
                    if (local_c4 != DAT_100348f0) {
                      local_e4 = pbVar12 + 0x30;
                      local_e8 = pbVar12 + 0x18;
                      do {
                        local_f4 = (uint)*(ushort *)(local_c4 + 4);
                        piVar1 = local_c4 + 5;
                        local_34 = 0;
                        local_30 = 0xf;
                        local_44[0] = 0;
                        FUN_100243b0(local_44,"SensorName",10);
                        local_8._0_1_ = 8;
                        pbVar8 = FUN_1000b400(piVar1,local_44);
                        FUN_10009740((int *)local_44);
                        local_4c = 0;
                        local_48 = 0xf;
                        local_5c[0] = 0;
                        local_8._0_1_ = 9;
                        FUN_1000f6b0(pbVar8,(void **)local_5c);
                        param_1 = local_ec;
                        local_cc = (int *)((uint)local_d0 | 4);
                        local_8._0_1_ = 10;
                        local_34 = 0;
                        local_30 = 0xf;
                        local_44[0] = 0;
                        FUN_100256a0(local_44,local_ec[4] + 1);
                        puVar4 = param_1;
                        if (0xf < (uint)param_1[5]) {
                          puVar4 = (undefined4 *)*param_1;
                        }
                        FUN_10023f40(local_44,puVar4,param_1[4]);
                        FUN_10023f40(local_44,&DAT_1002d974,1);
                        puVar4 = FUN_10001220(local_bc,local_44,(undefined4 *)local_5c);
                        local_8._0_1_ = 0xb;
                        puVar9 = FUN_10023f40(puVar4,&DAT_1002d974,1);
                        local_74 = *puVar9;
                        uStack_70 = puVar9[1];
                        uStack_6c = puVar9[2];
                        uStack_68 = puVar9[3];
                        local_64 = puVar9[4];
                        uStack_60 = puVar9[5];
                        puVar9[4] = 0;
                        puVar9[5] = 0xf;
                        *(undefined1 *)puVar9 = 0;
                        local_d0 = (int *)((uint)local_d0 | 0xc);
                        local_8._0_1_ = 0xc;
                        local_cc = local_d0;
                        FUN_10001220(local_8c,&local_74,(undefined4 *)local_e4);
                        FUN_10009740((int *)&local_74);
                        FUN_10009740(local_bc);
                        local_d0 = (int *)((uint)local_d0 & 0xfffffffb);
                        local_8._0_1_ = 0x10;
                        FUN_10009740((int *)local_44);
                        puVar10 = FUN_1000b200(&DAT_10034928,(ushort *)&local_f4);
                        pbVar8 = FUN_1000b490(puVar10,local_e8);
                        ppppcVar5 = local_8c;
                        if (0xf < local_78) {
                          ppppcVar5 = (char ****)local_8c[0];
                        }
                        cVar3 = FUN_100177a0((char *)ppppcVar5,(undefined4 *)pbVar8);
                        if (cVar3 == '\0') goto LAB_100176eb;
                        FUN_10009740((int *)local_8c);
                        local_8._0_1_ = 7;
                        FUN_10009740((int *)local_5c);
                        std::_Tree_unchecked_const_iterator<>::operator++
                                  ((_Tree_unchecked_const_iterator<> *)&local_c4);
                      } while (local_c4 != DAT_100348f0);
                    }
                    if (DAT_10034870 == DAT_1003486c) {
                      FUN_100025a0(&DAT_10034868,DAT_1003486c,(undefined4 *)(pbVar12 + 0x18));
                    }
                    else {
                      FUN_10007280(DAT_1003486c,(undefined4 *)(pbVar12 + 0x18));
                      DAT_1003486c = DAT_1003486c + 6;
                    }
                  }
                }
                else {
                  local_c4 = (int *)0x1;
                  if ((int *)0x1 < local_cc) {
                    local_c8 = pbVar12 + 0x18;
                    do {
                      cVar3 = FUN_10015580(param_1,local_c8);
                      if (cVar3 == '\0') goto LAB_10017712;
                      local_c4 = (int *)((int)local_c4 + 1);
                      local_c8 = local_c8 + 0x18;
                    } while (local_c4 < local_cc);
                  }
                }
              }
              else if ((int *)0x1 < local_cc) {
                pbVar8 = pbVar12 + 0x18;
                if (0xf < *(uint *)(pbVar12 + 0x2c)) {
                  pbVar8 = *(byte **)pbVar8;
                }
                uVar13 = FUN_1000fe20((int)pbVar8,*(uint *)(pbVar12 + 0x28));
                local_c4 = (int *)((uint)uVar13 & 0xffff);
                if (DAT_10034940 == DAT_1003493c) {
                  FUN_10002700(&DAT_10034938,DAT_1003493c,(undefined2 *)&local_c4);
                }
                else {
                  *DAT_1003493c = (short)uVar13;
                  DAT_1003493c = DAT_1003493c + 1;
                }
              }
            }
            else if ((int *)0x2 < local_cc) {
              pbVar8 = pbVar12 + 0x18;
              if (0xf < *(uint *)(pbVar12 + 0x2c)) {
                pbVar8 = *(byte **)pbVar8;
              }
              uVar13 = FUN_1000fe20((int)pbVar8,*(uint *)(pbVar12 + 0x28));
              local_c4 = (int *)((uint)uVar13 & 0xffff);
              if (DAT_100348ec == DAT_100348e8) {
                FUN_10002700(&DAT_100348e4,DAT_100348e8,(undefined2 *)&local_c4);
              }
              else {
                *DAT_100348e8 = (short)uVar13;
                DAT_100348e8 = DAT_100348e8 + 1;
              }
              pbVar8 = pbVar12 + 0x30;
              if (0xf < *(uint *)(pbVar12 + 0x44)) {
                pbVar8 = *(byte **)pbVar8;
              }
              uVar13 = FUN_1000fe20((int)pbVar8,*(uint *)(pbVar12 + 0x40));
              local_c4 = (int *)((uint)uVar13 & 0xffff);
              if (DAT_100348cc == DAT_100348c8) {
                FUN_10002700(&DAT_100348c4,DAT_100348c8,(undefined2 *)&local_c4);
              }
              else {
                *DAT_100348c8 = (short)uVar13;
                DAT_100348c8 = DAT_100348c8 + 1;
              }
            }
            local_8._0_1_ = 6;
            FUN_10002450((int *)pbVar12,local_d8);
            pbVar8 = pbVar12;
            if ((0xfff < (uint)(((local_d4 - (int)pbVar12) / 0x18) * 0x18)) &&
               (pbVar8 = *(byte **)(pbVar12 + -4), (byte *)0x1f < pbVar12 + (-4 - (int)pbVar8)))
            goto LAB_10016edc;
            FUN_100284c9(pbVar8);
            local_dc = (byte *)0x0;
            local_d8 = (int *)0x0;
            local_d4 = 0;
            pbVar12 = local_e0;
          }
        }
        pbVar12 = pbVar12 + 0x18;
        local_f0 = local_f0 + 1;
        local_e0 = pbVar12;
      } while (local_f0 < uVar2);
    }
    if ((((DAT_100348e4 != DAT_100348e8) && (DAT_100348c4 != DAT_100348c8)) &&
        (DAT_10034938 != DAT_1003493c)) && ((DAT_1003492c != 0 && (DAT_10034948 != 0)))) {
      local_bd = 1;
      goto LAB_10017733;
    }
    FUN_100197a0((int *)0x385);
  }
LAB_1001772c:
  local_bd = 0;
LAB_10017733:
  FUN_10009ba0((int *)&local_20);
  if (0xf < uStack_90) {
    ppppcVar5 = (char ****)local_a4;
    if ((0xfff < uStack_90 + 1) &&
       (ppppcVar5 = (char ****)local_a4[-1],
       (char *)0x1f < (char *)((int)local_a4 + (-4 - (int)ppppcVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(ppppcVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_100176eb:
  FUN_10009740((int *)local_8c);
  FUN_10009740((int *)local_5c);
  FUN_10009ba0((int *)&local_dc);
  goto LAB_1001772c;
}














void __cdecl FUN_100177a0(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FILE *_File;
  uint _Count;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *****pppppbVar13;
  char *pcVar14;
  byte ****ppppbVar15;
  char *pcVar16;
  uint local_c4;
  char *local_b4;
  byte ****local_ac [4];
  int local_9c;
  uint local_98;
  char local_94 [128];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002aea1;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10002450((int *)*param_2,(int *)param_2[1]);
  param_2[1] = *param_2;
  _File = fopen(param_1,"rb");
  if (_File == (FILE *)0x0) {
    memset(local_94,0,0x80);
    FUN_10027e10(local_94,"Fail to open %s");
    pcVar9 = local_94;
    local_9c = 0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    do {
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    FUN_100243b0(local_ac,local_94,(int)pcVar9 - (int)(local_94 + 1));
    local_8 = 2;
    FUN_10019700(local_ac);
    if (0xf < local_98) {
      ppppbVar15 = local_ac[0];
      if ((0xfff < local_98 + 1) &&
         (ppppbVar15 = (byte ****)local_ac[0][-1],
         0x1f < (uint)((int)local_ac[0] + (-4 - (int)ppppbVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(ppppbVar15);
    }
  }
  else {
    fseek(_File,0,2);
    _Count = ftell(_File);
    pcVar9 = malloc(_Count + 1);
    fseek(_File,0,0);
    fread(pcVar9,1,_Count,_File);
    iVar12 = 0;
    if (0 < (int)_Count) {
      if (0x3f < _Count) {
        uVar10 = _Count & 0x8000003f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
        }
        do {
          puVar2 = (uint *)(pcVar9 + iVar12);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (uint *)(pcVar9 + iVar12);
          *puVar3 = *puVar2 ^ 0xd8d8d8d8;
          puVar3[1] = uVar6 ^ 0xd8d8d8d8;
          puVar3[2] = uVar7 ^ 0xd8d8d8d8;
          puVar3[3] = uVar8 ^ 0xd8d8d8d8;
          puVar2 = (uint *)(pcVar9 + iVar12 + 0x10);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (uint *)(pcVar9 + iVar12 + 0x10);
          *puVar3 = *puVar2 ^ 0xd8d8d8d8;
          puVar3[1] = uVar6 ^ 0xd8d8d8d8;
          puVar3[2] = uVar7 ^ 0xd8d8d8d8;
          puVar3[3] = uVar8 ^ 0xd8d8d8d8;
          puVar2 = (uint *)(pcVar9 + iVar12 + 0x20);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (uint *)(pcVar9 + iVar12 + 0x20);
          *puVar3 = *puVar2 ^ 0xd8d8d8d8;
          puVar3[1] = uVar6 ^ 0xd8d8d8d8;
          puVar3[2] = uVar7 ^ 0xd8d8d8d8;
          puVar3[3] = uVar8 ^ 0xd8d8d8d8;
          puVar2 = (uint *)(pcVar9 + iVar12 + 0x30);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (uint *)(pcVar9 + iVar12 + 0x30);
          *puVar3 = *puVar2 ^ 0xd8d8d8d8;
          puVar3[1] = uVar6 ^ 0xd8d8d8d8;
          puVar3[2] = uVar7 ^ 0xd8d8d8d8;
          puVar3[3] = uVar8 ^ 0xd8d8d8d8;
          iVar12 = iVar12 + 0x40;
        } while (iVar12 < (int)(_Count - uVar10));
      }
      for (; iVar12 < (int)_Count; iVar12 = iVar12 + 1) {
        pcVar9[iVar12] = pcVar9[iVar12] ^ 0xd8;
      }
    }
    pcVar14 = pcVar9;
    uVar10 = 0;
    local_b4 = pcVar9;
    if (0 < (int)_Count) {
      pcVar16 = pcVar9;
      local_c4 = _Count;
      do {
        if (*pcVar16 == '\r') {
          *pcVar16 = '\0';
        }
        else if (*pcVar16 == '\n') {
          *pcVar16 = '\0';
          pcVar1 = pcVar14 + 1;
          local_9c = 0;
          local_98 = 0xf;
          local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
          do {
            cVar4 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar4 != '\0');
          FUN_100243b0(local_ac,local_b4,(int)pcVar14 - (int)pcVar1);
          local_8 = 0;
          if ((int)(pcVar16 + (1 - (int)pcVar9)) < (int)_Count) {
            local_b4 = pcVar16 + 1;
          }
          pppppbVar13 = local_ac;
          if (0xf < local_98) {
            pppppbVar13 = (byte *****)local_ac[0];
          }
          puVar11 = FUN_10005100((byte *)pppppbVar13,(byte *)((int)pppppbVar13 + local_9c),
                                 (undefined4 *)0x0,&DAT_10034914,0x10,pppppbVar13);
          if (((char)puVar11 == '\0') && (local_9c != 0)) {
            piVar5 = (int *)param_2[1];
            if ((int *)param_2[2] == piVar5) {
              FUN_100025a0(param_2,piVar5,local_ac);
            }
            else {
              FUN_10007280(piVar5,local_ac);
              param_2[1] = param_2[1] + 0x18;
            }
          }
          local_8 = 0xffffffff;
          FUN_10009740((int *)local_ac);
          pcVar14 = local_b4;
        }
        pcVar16 = pcVar16 + 1;
        local_c4 = local_c4 - 1;
        uVar10 = _Count;
      } while (local_c4 != 0);
    }
    pcVar9[uVar10] = '\0';
    pcVar16 = pcVar14 + 1;
    local_9c = 0;
    local_98 = 0xf;
    local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    FUN_100243b0(local_ac,local_b4,(int)pcVar14 - (int)pcVar16);
    local_8 = 1;
    if (local_9c != 0) {
      piVar5 = (int *)param_2[1];
      if ((int *)param_2[2] == piVar5) {
        FUN_100025a0(param_2,piVar5,local_ac);
      }
      else {
        FUN_10007280(piVar5,local_ac);
        param_2[1] = param_2[1] + 0x18;
      }
    }
    free(pcVar9);
    fclose(_File);
    if (0xf < local_98) {
      ppppbVar15 = local_ac[0];
      if ((0xfff < local_98 + 1) &&
         (ppppbVar15 = (byte ****)local_ac[0][-1],
         0x1f < (uint)((int)local_ac[0] + (-4 - (int)ppppbVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(ppppbVar15);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}












undefined4 __thiscall FUN_10017bd0(void *this,short *param_1)

{
  uint uVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_1000cf30(this);
  if ((char)uVar1 != '\0') {
    local_c = 1;
    local_b = 1;
    uVar1 = FUN_1001c840(this,100,0xe8,&local_c,1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_1001c840(this,100,0xe9,&local_b,1);
      if ((char)uVar1 != '\0') {
        local_4 = 0;
        local_a = 0x65;
        uVar1 = FUN_1001c840(this,100,0xea,&local_a,1);
        if ((char)uVar1 != '\0') {
          uVar1 = FUN_10015430(this,0x65,0xec,&local_4,1);
          if ((char)uVar1 != '\0') {
            local_9 = 100;
            uVar1 = FUN_1001c840(this,100,0xea,&local_9,1);
            if ((char)uVar1 != '\0') {
              uVar1 = FUN_10015430(this,0x65,0xec,(int)&local_4 + 1,1);
              if ((char)uVar1 != '\0') {
                local_c = 0;
                uVar1 = FUN_1001c840(this,100,0xe8,&local_c,1);
                if ((char)uVar1 != '\0') {
                  local_8 = 0;
                  uVar1 = FUN_10015430(this,0x65,0xb9,(int)&local_8 + 1,1);
                  if ((char)uVar1 != '\0') {
                    uVar1 = FUN_10015430(this,0x65,0xba,&local_8,1);
                    if ((char)uVar1 != '\0') {
                      *param_1 = ((short)local_8 - (short)local_4) + 0x28;
                      return CONCAT31((int3)((uint)param_1 >> 8),1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}

















void __fastcall FUN_10017d30(char *param_1)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_50 [3];
  char local_4d [73];
  uint local_4;
  
  local_4 = DAT_10034018 ^ (uint)auStack_50;
  memset(local_4d + 9,0,0x40);
  cVar2 = FUN_1000cf30(param_1);
  if (cVar2 != '\0') {
    local_4d[1] = 1;
    local_4d[5] = 1;
    cVar2 = FUN_1001c840(param_1,100,0xe8,local_4d + 1,1);
    if (cVar2 != '\0') {
      cVar2 = FUN_1001c840(param_1,100,0xe9,local_4d + 5,1);
      if (cVar2 != '\0') {
        local_4d[0] = 'h';
        pcVar6 = local_4d + 9;
        iVar5 = 0;
        do {
          cVar2 = FUN_1001c840(param_1,100,0xea,local_4d,1);
          if (cVar2 == '\0') goto LAB_1001816a;
          cVar2 = FUN_10015430(param_1,0x65,0xec,pcVar6,1);
          if (cVar2 == '\0') goto LAB_1001816a;
          local_4d[0] = local_4d[0] + '\x01';
          pcVar6 = pcVar6 + 1;
          cVar2 = FUN_1000cf30(param_1);
          if (cVar2 == '\0') goto LAB_1001816a;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 6);
        local_4d[6] = 0x60;
        local_4d[4] = 0;
        cVar2 = FUN_1000cf30(param_1);
        if (cVar2 != '\0') {
          cVar2 = FUN_1001c840(param_1,100,0xea,local_4d + 6,1);
          if (cVar2 != '\0') {
            cVar2 = FUN_10015430(param_1,0x65,0xec,local_4d + 4,1);
            if (cVar2 != '\0') {
              local_4d[7] = 0x62;
              local_4d[3] = 0;
              cVar2 = FUN_1000cf30(param_1);
              if (cVar2 != '\0') {
                cVar2 = FUN_1001c840(param_1,100,0xea,local_4d + 7,1);
                if (cVar2 != '\0') {
                  cVar2 = FUN_10015430(param_1,0x65,0xec,local_4d + 3,1);
                  if (cVar2 != '\0') {
                    local_4d[8] = 99;
                    local_4d[2] = 0;
                    cVar2 = FUN_1000cf30(param_1);
                    if (cVar2 != '\0') {
                      cVar2 = FUN_1001c840(param_1,100,0xea,local_4d + 8,1);
                      if (cVar2 != '\0') {
                        cVar2 = FUN_10015430(param_1,0x65,0xec,local_4d + 2,1);
                        if (cVar2 != '\0') {
                          local_4d[1] = 0;
                          cVar2 = FUN_1001c840(param_1,100,0xe8,local_4d + 1,1);
                          if (cVar2 != '\0') {
                            FUN_10027e10(pcVar6,"%02hhu%02hhu%02hhu");
                            pcVar6 = local_4d + 9;
                            do {
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + 1;
                            } while (cVar2 != '\0');
                            pcVar7 = param_1 + 0x20;
                            FUN_100243b0(pcVar7,local_4d + 9,(int)pcVar6 - (int)(local_4d + 10));
                            if (*(uint *)(param_1 + 0x30) == 0) {
                              FUN_100243b0(param_1 + 0x38,"000000000000",0xc);
                              __security_check_cookie(local_4 ^ (uint)auStack_50);
                              return;
                            }
                            FUN_100257c0(param_1 + 0x38,*(uint *)(param_1 + 0x30),'\0');
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            *pcVar3 = pcVar6[2];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[1] = pcVar6[8];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[2] = pcVar6[9];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[3] = pcVar6[1];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[4] = pcVar6[6];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[5] = pcVar6[7];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[6] = *pcVar6;
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[7] = pcVar6[10];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[8] = pcVar6[0xb];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[9] = pcVar6[3];
                            pcVar6 = pcVar7;
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar6 = *(char **)pcVar7;
                            }
                            pcVar3 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar3 = *(char **)(param_1 + 0x38);
                            }
                            pcVar3[10] = pcVar6[4];
                            if (0xf < *(uint *)(param_1 + 0x34)) {
                              pcVar7 = *(char **)pcVar7;
                            }
                            pcVar6 = param_1 + 0x38;
                            if (0xf < *(uint *)(param_1 + 0x4c)) {
                              pcVar6 = *(char **)(param_1 + 0x38);
                            }
                            pcVar6[0xb] = pcVar7[5];
                            uVar4 = 0;
                            if (*(int *)(param_1 + 0x48) != 0) {
                              do {
                                uVar1 = *(uint *)(param_1 + 0x4c);
                                pcVar6 = param_1 + 0x38;
                                if (0xf < uVar1) {
                                  pcVar6 = *(char **)(param_1 + 0x38);
                                }
                                pcVar7 = param_1 + 0x38;
                                if (pcVar6[uVar4] == '9') {
                                  if (0xf < uVar1) {
                                    pcVar7 = *(char **)(param_1 + 0x38);
                                  }
                                  pcVar7[uVar4] = '0';
                                }
                                else {
                                  if (0xf < uVar1) {
                                    pcVar7 = *(char **)(param_1 + 0x38);
                                  }
                                  pcVar6 = param_1 + 0x38;
                                  if (pcVar7[uVar4] == 'z') {
                                    if (0xf < uVar1) {
                                      pcVar6 = *(char **)(param_1 + 0x38);
                                    }
                                    pcVar6[uVar4] = 'a';
                                  }
                                  else {
                                    if (0xf < uVar1) {
                                      pcVar6 = *(char **)(param_1 + 0x38);
                                    }
                                    pcVar7 = param_1 + 0x38;
                                    if (pcVar6[uVar4] == 'Z') {
                                      if (0xf < uVar1) {
                                        pcVar7 = *(char **)(param_1 + 0x38);
                                      }
                                      pcVar7[uVar4] = 'A';
                                    }
                                    else {
                                      if (0xf < uVar1) {
                                        pcVar7 = *(char **)(param_1 + 0x38);
                                      }
                                      pcVar7[uVar4] = pcVar7[uVar4] + '\x01';
                                    }
                                  }
                                }
                                uVar4 = uVar4 + 1;
                              } while (uVar4 < *(uint *)(param_1 + 0x48));
                            }
                            __security_check_cookie(local_4 ^ (uint)auStack_50);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1001816a:
  __security_check_cookie(local_4 ^ (uint)auStack_50);
  return;
}

















void __thiscall FUN_10018180(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002aed8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)this + 9) == '\0') {
    local_14 = param_1;
    puVar2 = FUN_1000b380((void *)((int)this + 0x10),&local_14);
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)((int)this + 0x50) = 1;
  }
  else {
    iVar1 = _Mtx_lock((int)this + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
    local_8 = 0;
    puVar2 = FUN_1000b380((void *)((int)this + 0x10),&param_1);
    *(undefined1 *)puVar2 = 0;
    local_8 = 1;
    iVar1 = _Mtx_unlock((int)this + 0x54);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}















void __fastcall FUN_10018250(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002af00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  iVar3 = _Mtx_lock(param_1 + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_1000ab40((void *)(param_1 + 0x30),0,0);
    FUN_1000ab40((void *)(param_1 + 0x40),0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0x18) + (uVar4 >> 5) * 4);
      bVar2 = (byte)uVar4;
      uVar4 = uVar4 + 1;
      *puVar1 = *puVar1 & ~(1 << (bVar2 & 0x1f));
    } while (uVar4 < *(uint *)(param_1 + 0x24));
  }
  local_14 = **(int **)(param_1 + 0x10);
  if ((int *)local_14 != *(int **)(param_1 + 0x10)) {
    do {
      *(undefined1 *)(local_14 + 0x14) = 0;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
    } while (local_14 != *(int *)(param_1 + 0x10));
  }
  local_8 = 0;
  iVar3 = _Mtx_unlock(param_1 + 0x54);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  ExceptionList = local_10;
  return;
}














void __thiscall FUN_10018360(void *this,uint param_1)

{
  size_t sVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint local_10;
  uint *local_c;
  int *local_8;
  size_t local_4;
  
  if (*(uint *)((int)this + 0x28) < param_1) {
    FUN_100245c0((int *)((int)this + 0x10));
    uVar6 = 0;
    if (*(int *)((int)this + 4) != 0) {
      local_4 = param_1 + 1;
      do {
        sVar1 = local_4;
        free(*(void **)(*(int *)((int)this + 0xc) + uVar6 * 4));
        local_10 = FUN_100284d7(sVar1);
        *(uint *)(*(int *)((int)this + 0xc) + uVar6 * 4) = local_10;
        piVar2 = *(int **)((int)this + 0x10);
        piVar3 = (int *)piVar2[1];
        piVar5 = piVar2;
        if (*(char *)(piVar2[1] + 0xd) == '\0') {
          do {
            if ((uint)piVar3[4] < local_10) {
              piVar4 = (int *)piVar3[2];
            }
            else {
              piVar4 = (int *)*piVar3;
              piVar5 = piVar3;
            }
            piVar3 = piVar4;
          } while (*(char *)((int)piVar4 + 0xd) == '\0');
          if ((piVar5 == piVar2) || (local_10 < (uint)piVar5[4])) goto LAB_100183dd;
        }
        else {
LAB_100183dd:
          local_c = &local_10;
          piVar2 = (int *)FUN_10001bc0((void *)((int)this + 0x10),"",&local_c);
          FUN_100041b0((void *)((int)this + 0x10),&local_8,piVar5,(uint *)(piVar2 + 4),piVar2);
          piVar5 = local_8;
        }
        *(undefined1 *)(piVar5 + 5) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)this + 4));
    }
    *(uint *)((int)this + 0x28) = param_1;
  }
  return;
}
















void __thiscall FUN_10018440(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint local_10;
  uint *local_c;
  int *local_8;
  uint local_4;
  
  if (*(uint *)((int)this + 0x28) < param_1) {
    FUN_100245c0((int *)((int)this + 0x10));
    uVar6 = 0;
    if (*(int *)((int)this + 4) != 0) {
      local_4 = (param_1 >> 1) + 2;
      do {
        uVar1 = local_4;
        free(*(void **)(*(int *)((int)this + 0xc) + uVar6 * 4));
        local_10 = FUN_100284d7(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar1 * 2));
        *(uint *)(*(int *)((int)this + 0xc) + uVar6 * 4) = local_10;
        piVar2 = *(int **)((int)this + 0x10);
        piVar3 = (int *)piVar2[1];
        piVar5 = piVar2;
        if (*(char *)(piVar2[1] + 0xd) == '\0') {
          do {
            if ((uint)piVar3[4] < local_10) {
              piVar4 = (int *)piVar3[2];
            }
            else {
              piVar4 = (int *)*piVar3;
              piVar5 = piVar3;
            }
            piVar3 = piVar4;
          } while (*(char *)((int)piVar4 + 0xd) == '\0');
          if ((piVar5 == piVar2) || (local_10 < (uint)piVar5[4])) goto LAB_100184cd;
        }
        else {
LAB_100184cd:
          local_c = &local_10;
          piVar2 = (int *)FUN_10001bc0((void *)((int)this + 0x10),"",&local_c);
          FUN_100041b0((void *)((int)this + 0x10),&local_8,piVar5,(uint *)(piVar2 + 4),piVar2);
          piVar5 = local_8;
        }
        *(undefined1 *)(piVar5 + 5) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)this + 4));
    }
    *(uint *)((int)this + 0x28) = param_1;
  }
  return;
}














/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_10018530(void *this,undefined1 *param_1)

{
  void *this_00;
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002af28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xdc) = 0;
  uVar1 = FUN_10010e60(*(int *)((int)this + 0x208));
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_10010d80(*(int *)((int)this + 0x208));
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0xc);
  this_00 = *(void **)((int)this + 0x208);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(uint *)((int)this + 0x6c) = (uint)*(ushort *)((int)this_00 + 0x62);
  local_14 = 0x302;
  local_18._0_2_ = 0x100;
  if ((short)param_1 == 0) {
    FUN_1001c840(this_00,0x40,0x54,&local_14,1);
    puVar2 = (undefined2 *)local_18;
  }
  else {
    FUN_1001c840(this_00,0x40,0x54,(int)&local_14 + 1,1);
    puVar2 = (undefined2 *)((int)local_18 + 1);
  }
  FUN_1001c840(*(void **)((int)this + 0x208),0x40,0x54,puVar2,1);
  *(undefined1 *)((int)this + 0xd9) = 1;
  *(undefined1 *)((int)this + 0xd8) = 1;
  if (*(int *)((int)this + 0xe4) != 0) {
    FUN_10025060((undefined4 *)((int)this + 0xe0));
  }
  if (*(int *)((int)this + 0xfc) != 0) {
    FUN_10025060((undefined4 *)((int)this + 0xf8));
  }
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 1;
  param_1 = (undefined1 *)FUN_10028499(0xc);
  *param_1 = 1;
  *(void **)(param_1 + 4) = this;
  *(undefined1 **)(param_1 + 8) = &LAB_1000c03a;
  local_8 = 0;
  FUN_10004c00(&local_20,&param_1);
  if (param_1 != (undefined1 *)0x0) {
    FUN_100284c9(param_1);
  }
  if (*(int *)((int)this + 0xe4) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  *(undefined4 *)((int)this + 0xe0) = local_20;
  *(undefined4 *)((int)this + 0xe4) = local_1c;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)local_1c >> 8),1);
}













void FUN_100186b0(void)

{
  int iVar1;
  byte ***pppbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  byte ****ppppbVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  int *local_110;
  int *local_10c;
  byte ***local_108 [2];
  int *local_100;
  int *local_fc;
  int *local_f8;
  char local_f1;
  undefined1 local_f0 [8];
  short local_e8;
  short local_e6;
  void *local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  void *local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  byte ***local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint local_9c;
  uint uStack_98;
  char local_94 [128];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002afb3;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_100 = (int *)0x0;
  local_f8 = (int *)0x0;
  local_fc = (int *)*DAT_100348f8;
  piVar7 = DAT_100348f8;
  if (local_fc != DAT_100348f8) {
    do {
      piVar12 = (int *)local_fc[10];
      if (piVar12 != (int *)0x0) {
        FUN_1000a5b0(piVar12);
        FUN_100284c9(piVar12);
        piVar7 = DAT_100348f8;
      }
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_fc);
    } while (local_fc != piVar7);
  }
  local_8 = 0;
  FUN_10021690((int *)piVar7[1]);
  local_8 = 0xffffffff;
  DAT_100348f8[1] = (int)piVar7;
  *DAT_100348f8 = (int)piVar7;
  DAT_100348f8[2] = (int)piVar7;
  DAT_100348fc = 0;
  FUN_10002450(DAT_1003494c,DAT_10034950);
  DAT_10034950 = DAT_1003494c;
  if (DAT_10034858 != 0) {
    libusb_free_device_list(DAT_10034858,1);
    DAT_10034858 = 0;
  }
  iVar4 = libusb_get_device_list(0,&DAT_10034858);
  local_fc = (int *)0x0;
  if (0 < iVar4) {
    do {
      libusb_get_device_descriptor(*(undefined4 *)(DAT_10034858 + (int)local_fc * 4),local_f0);
      uVar5 = 0;
      uVar11 = DAT_100348e8 - DAT_100348e4 >> 1;
      if (uVar11 != 0) {
LAB_10018805:
        if ((local_e8 != *(short *)(DAT_100348e4 + uVar5 * 2)) ||
           (local_e6 != *(short *)(DAT_100348c4 + uVar5 * 2))) goto LAB_1001881f;
        pvVar6 = (void *)FUN_10028499(0xb0);
        local_8 = 1;
        piVar7 = (int *)FUN_10008770(pvVar6,*(undefined4 *)(DAT_10034858 + (int)local_fc * 4));
        local_8 = 0xffffffff;
        if (*piVar7 == 0) goto LAB_10018d89;
        local_9c = 0;
        uStack_98 = 0xf;
        local_ac = (byte ***)((uint)local_ac & 0xffffff00);
        *(undefined2 *)((int)piVar7 + 6) = *(undefined2 *)(*DAT_100348f0 + 0x10);
        FUN_100243b0(&local_ac,"PowerOn0",8);
        local_100 = (int *)((uint)local_f8 | 1);
        local_8 = 2;
        local_f8 = local_100;
        cVar3 = FUN_1000ec50(piVar7,(byte *)&local_ac);
        if ((cVar3 == '\0') ||
           (cVar3 = FUN_10015430(piVar7,0x65,1,(undefined2 *)((int)piVar7 + 6),1), cVar3 == '\0')) {
LAB_10018906:
          local_f1 = '\0';
        }
        else {
          cVar3 = FUN_10015430(piVar7,0x65,0,(int)piVar7 + 7,1);
          local_f1 = '\x01';
          if (cVar3 == '\0') goto LAB_10018906;
        }
        local_f8 = (int *)((uint)local_f8 & 0xfffffffe);
        local_8 = 0xffffffff;
        if (0xf < uStack_98) {
          ppppbVar9 = (byte ****)local_ac;
          if ((0xfff < uStack_98 + 1) &&
             (ppppbVar9 = (byte ****)local_ac[-1],
             (byte *)0x1f < (byte *)((int)local_ac + (-4 - (int)ppppbVar9)))) goto LAB_10018dd7;
          FUN_100284c9(ppppbVar9);
        }
        local_9c = 0;
        uStack_98 = 0xf;
        local_ac = (byte ***)((uint)local_ac & 0xffffff00);
        if (local_f1 != '\0') {
          if (*(char *)(DAT_100348f0[1] + 0xd) == '\0') {
            piVar12 = (int *)DAT_100348f0[1];
            piVar10 = DAT_100348f0;
            do {
              if (*(ushort *)(piVar12 + 4) < *(ushort *)((int)piVar7 + 6)) {
                piVar8 = (int *)piVar12[2];
              }
              else {
                piVar8 = (int *)*piVar12;
                piVar10 = piVar12;
              }
              piVar12 = piVar8;
            } while (*(char *)((int)piVar8 + 0xd) == '\0');
            if ((piVar10 != DAT_100348f0) &&
               (*(ushort *)(piVar10 + 4) <= *(ushort *)((int)piVar7 + 6))) {
              cVar3 = FUN_1001c320(piVar7);
              if ((cVar3 == '\0') || (cVar3 = FUN_1000d280((char *)piVar7), cVar3 == '\0'))
              goto LAB_10018cc8;
              local_100 = piVar7 + 0xe;
              if (0xf < (uint)piVar7[0x13]) {
                local_100 = (int *)*local_100;
              }
              local_9c = 0;
              uStack_98 = 0xf;
              local_ac = (byte ***)((uint)local_ac & 0xffffff00);
              piVar12 = local_100;
              do {
                iVar1 = *piVar12;
                piVar12 = (int *)((int)piVar12 + 1);
              } while ((char)iVar1 != '\0');
              FUN_100243b0(&local_ac,local_100,(int)piVar12 - (int)((int)local_100 + 1));
              local_8 = 4;
              FUN_100250d0(&DAT_100348f8,(int *)&local_10c,(byte *)&local_ac);
              piVar12 = local_10c;
              if (local_10c == DAT_100348f8) {
LAB_10018a8f:
                local_108[0] = (byte ***)&local_ac;
                piVar10 = (int *)FUN_100019d0(&DAT_100348f8,"",local_108);
                FUN_10003ac0(&DAT_100348f8,&local_110,piVar12,(byte *)(piVar10 + 4),piVar10);
                piVar12 = local_110;
              }
              else {
                pbVar13 = (byte *)(local_10c + 4);
                if (0xf < (uint)local_10c[9]) {
                  pbVar13 = *(byte **)pbVar13;
                }
                ppppbVar9 = &local_ac;
                if (0xf < uStack_98) {
                  ppppbVar9 = (byte ****)local_ac;
                }
                uVar5 = FUN_100065c0((byte *)ppppbVar9,local_9c,pbVar13,local_10c[8]);
                if ((int)uVar5 < 0) goto LAB_10018a8f;
              }
              piVar12[10] = (int)piVar7;
              local_8 = 0xffffffff;
              if (0xf < uStack_98) {
                ppppbVar9 = (byte ****)local_ac;
                if ((0xfff < uStack_98 + 1) &&
                   (ppppbVar9 = (byte ****)local_ac[-1],
                   (byte *)0x1f < (byte *)((int)local_ac + (-4 - (int)ppppbVar9))))
                goto LAB_10018dd7;
                FUN_100284c9(ppppbVar9);
              }
              local_9c = 0;
              uStack_98 = 0xf;
              local_ac = (byte ***)((uint)local_ac & 0xffffff00);
              piVar7 = local_100;
              do {
                iVar1 = *piVar7;
                piVar7 = (int *)((int)piVar7 + 1);
              } while ((char)iVar1 != '\0');
              FUN_100243b0(&local_ac,local_100,(int)piVar7 - (int)((int)local_100 + 1));
              pppbVar2 = local_ac;
              piVar7 = DAT_10034950;
              local_8 = 5;
              if (DAT_10034954 == DAT_10034950) {
                FUN_10002c00(&DAT_1003494c,DAT_10034950,(int *)&local_ac);
                uVar5 = uStack_98;
              }
              else {
                local_ac = (byte ***)((uint)local_ac & 0xffffff00);
                *DAT_10034950 = (int)pppbVar2;
                piVar7[1] = iStack_a8;
                piVar7[2] = iStack_a4;
                piVar7[3] = iStack_a0;
                piVar7[4] = local_9c;
                piVar7[5] = uStack_98;
                DAT_10034950 = DAT_10034950 + 6;
                uVar5 = 0xf;
              }
              local_8 = 0xffffffff;
              if (0xf < uVar5) {
                ppppbVar9 = (byte ****)local_ac;
                if ((0xfff < uVar5 + 1) &&
                   (ppppbVar9 = (byte ****)local_ac[-1],
                   (byte *)0x1f < (byte *)((int)local_ac + (-4 - (int)ppppbVar9))))
                goto LAB_10018dd7;
                FUN_100284c9(ppppbVar9);
              }
              goto LAB_10018d9e;
            }
          }
          memset(local_94,0,0x80);
          FUN_10027e10(local_94,"Fail to find the setting folder with SensorID \'%hx\'");
          pcVar14 = local_94;
          local_cc = 0;
          local_c8 = 0xf;
          local_dc[0] = (void *)((uint)local_dc[0] & 0xffffff00);
          do {
            cVar3 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar3 != '\0');
          FUN_100243b0(local_dc,local_94,(int)pcVar14 - (int)(local_94 + 1));
          local_8 = 3;
          FUN_10019700(local_dc);
          local_8 = 0xffffffff;
          if (0xf < local_c8) {
            pvVar6 = local_dc[0];
            if ((0xfff < local_c8 + 1) &&
               (pvVar6 = *(void **)((int)local_dc[0] + -4),
               0x1f < (uint)((int)local_dc[0] + (-4 - (int)pvVar6)))) goto LAB_10018dd7;
            FUN_100284c9(pvVar6);
          }
        }
LAB_10018cc8:
        if (*piVar7 != 0) {
          local_b4 = 0;
          local_b0 = 0xf;
          local_c4[0] = (void *)((uint)local_c4[0] & 0xffffff00);
          *(undefined2 *)((int)piVar7 + 6) = *(undefined2 *)(*DAT_100348f0 + 0x10);
          FUN_100243b0(local_c4,"Error",5);
          local_8 = 6;
          FUN_1000ec50(piVar7,(byte *)local_c4);
          local_8 = 0xffffffff;
          if (0xf < local_b0) {
            pvVar6 = local_c4[0];
            if ((0xfff < local_b0 + 1) &&
               (pvVar6 = *(void **)((int)local_c4[0] + -4),
               0x1f < (uint)((int)local_c4[0] + (-4 - (int)pvVar6)))) {
LAB_10018dd7:
              local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(pvVar6);
          }
          local_b4 = 0;
          local_b0 = 0xf;
          local_c4[0] = (void *)((uint)local_c4[0] & 0xffffff00);
        }
LAB_10018d89:
        FUN_1000a5b0(piVar7);
        FUN_100284c9(piVar7);
      }
LAB_10018d9e:
      local_fc = (int *)((int)local_fc + 1);
    } while ((int)local_fc < iVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_1001881f:
  uVar5 = uVar5 + 1;
  if (uVar11 <= uVar5) goto LAB_10018d9e;
  goto LAB_10018805;
}














void __thiscall FUN_10018de0(void *this,byte *param_1)

{
  byte bVar1;
  char cVar2;
  ushort *this_00;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  void *pvVar7;
  int local_130;
  void *local_12c;
  undefined1 *puStack_128;
  undefined4 local_124;
  void *local_120 [4];
  undefined4 local_110;
  uint local_10c;
  char local_108 [256];
  uint local_8;
  
  local_124 = 0xffffffff;
  puStack_128 = &LAB_1002a798;
  local_12c = ExceptionList;
  local_8 = DAT_10034018 ^ (uint)local_120;
  ExceptionList = &local_12c;
  pbVar3 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar3 = *(byte **)param_1;
  }
  pbVar5 = pbVar3;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  FUN_100243b0((void *)((int)this + 100),pbVar3,(int)pbVar5 - (int)(pbVar3 + 1));
  this_00 = FUN_1000b200(&DAT_10034928,(ushort *)((int)this + 6));
  FUN_100250d0(this_00,&local_130,param_1);
  if (local_130 != *(int *)this_00) {
    pbVar3 = (byte *)(local_130 + 0x10);
    if (0xf < *(uint *)(local_130 + 0x24)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pbVar5 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar5 = *(byte **)param_1;
    }
    uVar4 = FUN_100065c0(pbVar5,*(uint *)(param_1 + 0x10),pbVar3,*(uint *)(local_130 + 0x20));
    if (-1 < (int)uVar4) {
      cVar2 = FUN_1001c990(this,(int *)(local_130 + 0x28));
      if (cVar2 != '\0') {
        FUN_100191f0(this,(double)*(ushort *)((int)this + 0x50));
      }
      goto LAB_10018f81;
    }
  }
  memset(local_108,0,0x100);
  FUN_10027e10(local_108,"Invalid mode: %s");
  pcVar6 = local_108;
  local_110 = 0;
  local_10c = 0xf;
  local_120[0] = (void *)((uint)local_120[0] & 0xffffff00);
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_100243b0(local_120,local_108,(int)pcVar6 - (int)(local_108 + 1));
  local_124 = 0;
  FUN_10019700(local_120);
  if (0xf < local_10c) {
    pvVar7 = local_120[0];
    if ((0xfff < local_10c + 1) &&
       (pvVar7 = *(void **)((int)local_120[0] + -4),
       0x1f < (uint)((int)local_120[0] + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar7);
  }
LAB_10018f81:
  ExceptionList = local_12c;
  __security_check_cookie(local_8 ^ (uint)local_120);
  return;
}
















void __thiscall FUN_10018fb0(void *this,uint param_1)

{
  uint *puVar1;
  char cVar2;
  byte *pbVar3;
  ushort *this_00;
  byte *pbVar4;
  char *pcVar5;
  void *pvVar6;
  void *local_12c [4];
  undefined4 local_11c;
  uint local_118;
  void *local_114;
  undefined1 *puStack_110;
  undefined4 local_10c;
  char local_108 [256];
  uint local_8;
  
  local_10c = 0xffffffff;
  puStack_110 = &LAB_1002afe8;
  local_114 = ExceptionList;
  local_8 = DAT_10034018 ^ (uint)local_108;
  ExceptionList = &local_114;
  if (param_1 < (uint)((DAT_1003486c - DAT_10034868) / 0x18)) {
    pbVar3 = (byte *)(DAT_10034868 + param_1 * 0x18);
    pbVar4 = (byte *)((int)this + 100);
    if (pbVar4 != pbVar3) {
      puVar1 = (uint *)(pbVar3 + 0x10);
      if (0xf < *(uint *)(pbVar3 + 0x14)) {
        pbVar3 = *(byte **)pbVar3;
      }
      FUN_100243b0(pbVar4,pbVar3,*puVar1);
    }
    this_00 = FUN_1000b200(&DAT_10034928,(ushort *)((int)this + 6));
    pbVar4 = FUN_1000b490(this_00,pbVar4);
    cVar2 = FUN_1001c990(this,(int *)pbVar4);
    if (cVar2 != '\0') {
      FUN_100191f0(this,(double)*(ushort *)((int)this + 0x50));
    }
  }
  else {
    memset(local_108,0,0x100);
    FUN_10027e10(local_108,"Invalid mode index \'%d\'");
    local_11c = 0;
    local_118 = 0xf;
    local_12c[0] = (void *)((uint)local_12c[0] & 0xffffff00);
    pcVar5 = local_108;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_100243b0(local_12c,local_108,(int)pcVar5 - (int)(local_108 + 1));
    local_10c = 0;
    FUN_10019700(local_12c);
    if (0xf < local_118) {
      pvVar6 = local_12c[0];
      if ((0xfff < local_118 + 1) &&
         (pvVar6 = *(void **)((int)local_12c[0] + -4),
         0x1f < (uint)((int)local_12c[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar6);
    }
  }
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}















undefined4 __thiscall FUN_10019150(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_EAX;
  undefined4 uVar3;
  undefined1 auStackY_100 [220];
  undefined4 uStackY_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b010;
  local_10 = ExceptionList;
  iVar2 = *(int *)this;
  if (*(int *)(iVar2 + 0x17c) != 0) {
    uStackY_24 = 0x1001918b;
    ExceptionList = &local_10;
    iVar1 = _Mtx_lock();
    if (iVar1 != 0) {
      uStackY_24 = 0x10019198;
      std::_Throw_C_error(iVar1);
    }
    *(undefined1 *)(iVar2 + 0x180) = param_1;
    local_8 = 0;
    uStackY_24 = 0x100191b1;
    iVar2 = _Mtx_unlock();
    uVar3 = 0;
    if (iVar2 != 0) {
      uStackY_24 = 0x100191be;
      std::_Throw_C_error(iVar2);
      uVar3 = extraout_EAX;
    }
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return auStackY_100;
}













void __thiscall FUN_100191f0(void *this,double param_1)

{
  char cVar1;
  ushort *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort uVar6;
  void *pvVar7;
  uint uVar8;
  undefined2 in_FPUControlWord;
  undefined8 uVar9;
  double dVar10;
  uint uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_46;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b058;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = 0;
  local_54 = 0;
  local_50 = 0;
  puVar2 = FUN_1000b180(&DAT_100348f0,(ushort *)((int)this + 6));
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_100243b0(local_44,"TRowMin",7);
  local_8 = 0;
  pbVar3 = FUN_1000b400(puVar2,(byte *)local_44);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  puVar2 = FUN_1000b180(&DAT_100348f0,(ushort *)((int)this + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"TRowMin",7);
  local_8._0_1_ = 1;
  pbVar3 = FUN_1000b400(puVar2,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  uVar9 = FUN_1000fe20((int)pbVar3,uVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar7 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar7 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar7);
  }
  uVar8 = (uint)(ushort)uVar9;
  puVar2 = FUN_1000b180(&DAT_100348f0,(ushort *)((int)this + 6));
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_100243b0(local_44,"TRow2",5);
  local_8 = 2;
  pbVar3 = FUN_1000b400(puVar2,(byte *)local_44);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  puVar2 = FUN_1000b180(&DAT_100348f0,(ushort *)((int)this + 6));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100243b0(local_2c,"TRow2",5);
  local_8._0_1_ = 3;
  pbVar3 = FUN_1000b400(puVar2,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  uVar9 = FUN_1000fe20((int)pbVar3,uVar5);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar7 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar7 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar7);
  }
  pbVar3 = (byte *)((int)this + 100);
  if (0xf < *(uint *)((int)this + 0x78)) {
    pbVar3 = *(byte **)((int)this + 100);
  }
  puVar4 = FUN_10005100(pbVar3,pbVar3 + *(int *)((int)this + 0x74),(undefined4 *)0x0,&DAT_100348d0,
                        0x10,pbVar3);
  if ((char)puVar4 == '\0') {
    if (((param_1 <= 0.0) || (2601.0 <= param_1)) &&
       ((param_1 <= 2600.0 || (uVar8 = (uint)(ushort)uVar9, 5001.0 <= param_1)))) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_100243b0(local_44,"Don\'t support exposure time out of (0, 5000]ms",0x2e);
      local_8 = 4;
      FUN_10019700(local_44);
      FUN_10009740((int *)local_44);
      goto LAB_100196b2;
    }
    uVar5 = (uint)(param_1 / ((double)uVar8 * *(double *)((int)this + 0x58)));
    uStack_58 = uVar5 & 0xffff;
    local_54 = uStack_58;
    uVar6 = (short)uVar5 + 1;
    local_50 = (uint)uVar6;
    if (uVar6 < 0x4e2) {
      local_50 = 0x4e2;
    }
  }
  local_4c = uVar8;
  cVar1 = FUN_1001c840(this,100,0xf,&local_4c,1);
  if ((((cVar1 != '\0') && (cVar1 = FUN_1001c840(this,100,0xe,(int)&local_4c + 1,1), cVar1 != '\0'))
      && (((short)local_54 == 0 ||
          ((cVar1 = FUN_1001c840(this,100,0xd,&local_54,1), cVar1 != '\0' &&
           (cVar1 = FUN_1001c840(this,100,0xc,(int)&local_54 + 1,1), cVar1 != '\0')))))) &&
     (((short)local_50 == 0 ||
      ((cVar1 = FUN_1001c840(this,100,0x11,&local_50,1), cVar1 != '\0' &&
       (cVar1 = FUN_1001c840(this,100,0x10,(int)&local_50 + 1,1), cVar1 != '\0')))))) {
    local_46 = CONCAT11(2,(undefined1)local_46);
    cVar1 = FUN_1001c840(this,100,0x1d,(int)&local_46 + 1,1);
    if (cVar1 != '\0') {
      if ((short)local_50 != 0) {
        *(short *)((int)this + 0x62) =
             (short)(int)((double)(int)((local_50 & 0xffff) * (local_4c & 0xffff)) *
                         *(double *)((int)this + 0x58));
      }
      if ((short)local_54 != 0) {
        dVar10 = ceil((double)(int)((local_54 & 0xffff) * (local_4c & 0xffff)) *
                      *(double *)((int)this + 0x58));
        uStack_58._0_2_ = (undefined2)(int)ROUND(dVar10);
        *(undefined2 *)((int)this + 0x50) = (undefined2)uStack_58;
        local_46 = in_FPUControlWord;
      }
    }
  }
LAB_100196b2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}











void __thiscall FUN_100196d0(void *this,double param_1)

{
  FUN_100191f0(*(void **)((int)this + 0x208),param_1);
  return;
}










undefined1 FUN_100196f0(void)

{
  return 1;
}











void __cdecl FUN_10019700(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = DAT_10034958;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b088;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = _Mtx_lock(DAT_10034958,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  local_8 = 0;
  if ((undefined4 *)(DAT_10034958 + 0x38) != param_1) {
    puVar1 = param_1 + 4;
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    FUN_100243b0((undefined4 *)(DAT_10034958 + 0x38),param_1,*puVar1);
  }
  local_8 = 1;
  iVar3 = _Mtx_unlock(iVar3);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  ExceptionList = local_10;
  return;
}














void __cdecl FUN_100197a0(int *param_1)

{
  int *this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int **local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = DAT_10034958;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b0b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = _Mtx_lock(DAT_10034958,DAT_10034018 ^ (uint)&stack0xfffffffc);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  this = (int *)(DAT_10034958 + 0x30);
  local_14 = param_1;
  piVar5 = (int *)*this;
  local_8 = 0;
  piVar3 = (int *)piVar5[1];
  piVar7 = piVar3;
  piVar4 = piVar5;
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      if (piVar7[4] < (int)param_1) {
        piVar8 = (int *)piVar7[2];
      }
      else {
        piVar8 = (int *)*piVar7;
        piVar4 = piVar7;
      }
      piVar7 = piVar8;
    } while (*(char *)((int)piVar8 + 0xd) == '\0');
    if ((piVar4 != piVar5) && (piVar7 = piVar5, piVar4[4] <= (int)param_1)) {
      do {
        if (piVar3[4] < (int)param_1) {
          piVar4 = (int *)piVar3[2];
        }
        else {
          piVar4 = (int *)*piVar3;
          piVar7 = piVar3;
        }
        piVar3 = piVar4;
      } while (*(char *)((int)piVar4 + 0xd) == '\0');
      if ((piVar7 == piVar5) || ((int)param_1 < piVar7[4])) {
        local_18 = &local_14;
        piVar5 = (int *)FUN_100019b0(this,"",&local_18);
        FUN_100038a0(this,&param_1,piVar7,piVar5 + 4,piVar5);
        piVar7 = param_1;
      }
      pcVar10 = (char *)piVar7[5];
      goto LAB_10019898;
    }
  }
  pcVar10 = (char *)(DAT_10034958 + 0x50);
  FUN_10027e10(pcVar10,&DAT_1002d8e8);
LAB_10019898:
  pcVar9 = pcVar10;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0((void *)(DAT_10034958 + 0x38),pcVar10,(int)pcVar9 - (int)(pcVar10 + 1));
  local_8 = 1;
  iVar6 = _Mtx_unlock(iVar6);
  if (iVar6 != 0) {
    std::_Throw_C_error(iVar6);
  }
  ExceptionList = local_10;
  return;
}













int __cdecl FUN_100198f0(int *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  int iVar13;
  double *pdVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  int local_30;
  uint local_28;
  
  piVar19 = (int *)*param_1;
  uVar10 = (param_1[1] - (int)piVar19) / 0xc;
  if (uVar10 < 2) {
    pdVar12 = (double *)*piVar19;
    dVar1 = *pdVar12;
    iVar15 = (uint)CONCAT21((short)((ulonglong)((longlong)(param_1[1] - (int)piVar19) * 0x2aaaaaab)
                                   >> 0x10),(dVar1 == 0.0) << 6 | NAN(dVar1) << 2 | 2U | dVar1 < 0.0
                           ) << 8;
    if (dVar1 == 0.0) {
      return iVar15;
    }
    pdVar12[1] = pdVar12[1] / dVar1;
  }
  else {
    iVar22 = uVar10 - 1;
    uVar16 = piVar19[1] - *piVar19 >> 3;
    if (0 < iVar22) {
      local_30 = 0;
      iVar15 = 0;
      local_28 = uVar16;
      do {
        dVar1 = *(double *)(*(int *)((int)piVar19 + local_30) + iVar15 * 8);
        uVar24 = SUB84(dVar1,0);
        uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (dVar1 == 0.0) {
          return (uint)CONCAT21((short)((uint)*(int *)((int)piVar19 + local_30) >> 0x10),
                                (dVar1 == 0.0) << 6 | NAN(dVar1) << 2 | 2U | dVar1 < 0.0) << 8;
        }
        if (iVar15 < (int)uVar16) {
          iVar13 = iVar15;
          if (7 < local_28) {
            iVar2 = *(int *)(*param_1 + local_30);
            uVar11 = local_28 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            iVar21 = iVar15 * 8 + 0x20;
            do {
              iVar13 = iVar13 + 8;
              iVar20 = iVar21 + 0x40;
              auVar23._8_4_ = uVar24;
              auVar23._0_8_ = dVar1;
              auVar23._12_4_ = uVar25;
              auVar23 = divpd(*(undefined1 (*) [16])(iVar21 + -0x20 + iVar2),auVar23);
              *(undefined1 (*) [16])(iVar21 + -0x20 + iVar2) = auVar23;
              auVar7._8_4_ = uVar24;
              auVar7._0_8_ = dVar1;
              auVar7._12_4_ = uVar25;
              auVar23 = divpd(*(undefined1 (*) [16])(iVar21 + -0x10 + iVar2),auVar7);
              *(undefined1 (*) [16])(iVar21 + -0x10 + iVar2) = auVar23;
              auVar8._8_4_ = uVar24;
              auVar8._0_8_ = dVar1;
              auVar8._12_4_ = uVar25;
              auVar23 = divpd(*(undefined1 (*) [16])(iVar2 + -0x40 + iVar20),auVar8);
              *(undefined1 (*) [16])(iVar2 + -0x40 + iVar20) = auVar23;
              auVar9._8_4_ = uVar24;
              auVar9._0_8_ = dVar1;
              auVar9._12_4_ = uVar25;
              auVar23 = divpd(*(undefined1 (*) [16])(iVar21 + 0x10 + iVar2),auVar9);
              *(undefined1 (*) [16])(iVar21 + 0x10 + iVar2) = auVar23;
              iVar21 = iVar20;
            } while (iVar13 < (int)(uVar16 - uVar11));
          }
          if (iVar13 < (int)uVar16) {
            if (3 < (int)(uVar16 - iVar13)) {
              iVar2 = *(int *)(*param_1 + local_30);
              do {
                auVar5._8_4_ = uVar24;
                auVar5._0_8_ = dVar1;
                auVar5._12_4_ = uVar25;
                auVar23 = divpd(*(undefined1 (*) [16])(iVar2 + iVar13 * 8),auVar5);
                *(undefined1 (*) [16])(iVar2 + iVar13 * 8) = auVar23;
                auVar6._8_4_ = uVar24;
                auVar6._0_8_ = dVar1;
                auVar6._12_4_ = uVar25;
                auVar23 = divpd(*(undefined1 (*) [16])(iVar2 + 0x10 + iVar13 * 8),auVar6);
                *(undefined1 (*) [16])(iVar2 + 0x10 + iVar13 * 8) = auVar23;
                iVar13 = iVar13 + 4;
              } while (iVar13 < (int)(uVar16 - 3));
            }
            if (iVar13 < (int)uVar16) {
              iVar2 = *(int *)(*param_1 + local_30);
              do {
                *(double *)(iVar2 + iVar13 * 8) = *(double *)(iVar2 + iVar13 * 8) / dVar1;
                iVar13 = iVar13 + 1;
              } while (iVar13 < (int)uVar16);
            }
          }
        }
        iVar13 = iVar15 + 1;
        if (iVar13 < (int)uVar10) {
          iVar2 = uVar16 - 1;
          iVar20 = uVar10 - iVar13;
          iVar21 = local_30;
          do {
            iVar21 = iVar21 + 0xc;
            if (iVar15 <= iVar2) {
              iVar17 = iVar2;
              if (3 < (iVar2 - iVar15) + 1) {
                iVar3 = *(int *)(local_30 + *param_1);
                iVar4 = *(int *)(iVar21 + *param_1);
                pdVar14 = (double *)(iVar2 * 8 + -8 + iVar4);
                pdVar12 = (double *)(iVar3 + (uVar16 - 4) * 8);
                iVar18 = ((iVar2 - iVar13) - 2U >> 2) + 1;
                iVar17 = iVar2 + iVar18 * -4;
                do {
                  pdVar14[1] = pdVar14[1] - pdVar12[3] * *(double *)(iVar4 + iVar15 * 8);
                  *pdVar14 = *pdVar14 -
                             *(double *)((iVar3 - iVar4) + (int)pdVar14) *
                             *(double *)(iVar4 + iVar15 * 8);
                  pdVar14[-1] = pdVar14[-1] - pdVar12[1] * *(double *)(iVar4 + iVar15 * 8);
                  dVar1 = *pdVar12;
                  pdVar12 = pdVar12 + -4;
                  pdVar14[-2] = pdVar14[-2] - dVar1 * *(double *)(iVar4 + iVar15 * 8);
                  pdVar14 = pdVar14 + -4;
                  iVar18 = iVar18 + -1;
                } while (iVar18 != 0);
              }
              if (iVar15 <= iVar17) {
                iVar3 = *(int *)(iVar21 + *param_1);
                iVar4 = *(int *)(*param_1 + local_30);
                pdVar12 = (double *)(iVar3 + iVar17 * 8);
                iVar17 = (iVar17 - iVar15) + 1;
                do {
                  *pdVar12 = *pdVar12 -
                             *(double *)((iVar4 - iVar3) + (int)pdVar12) *
                             *(double *)(iVar3 + iVar15 * 8);
                  pdVar12 = pdVar12 + -1;
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        local_28 = local_28 - 1;
        local_30 = local_30 + 0xc;
        iVar15 = iVar13;
      } while (iVar13 < iVar22);
      piVar19 = (int *)*param_1;
    }
    iVar15 = piVar19[uVar10 * 3 + -3];
    *(double *)(iVar15 + -8 + uVar16 * 8) =
         *(double *)(iVar15 + -8 + uVar16 * 8) / *(double *)(iVar15 + -8 + uVar10 * 8);
    if (0 < iVar22) {
      iVar15 = iVar22 * 0xc;
      do {
        iVar13 = iVar22 + -1;
        if (0 < iVar22) {
          iVar2 = uVar16 - 1;
          iVar20 = iVar13;
          iVar21 = iVar15;
          do {
            iVar21 = iVar21 + -0xc;
            if (iVar22 <= iVar2) {
              iVar17 = iVar2;
              if (3 < (iVar2 - iVar22) + 1) {
                iVar3 = *(int *)(iVar21 + *param_1);
                iVar4 = *(int *)(iVar15 + *param_1);
                pdVar14 = (double *)(iVar2 * 8 + -8 + iVar3);
                iVar18 = ((iVar2 - iVar22) - 3U >> 2) + 1;
                pdVar12 = (double *)(iVar4 + (uVar16 - 4) * 8);
                iVar17 = iVar2 + iVar18 * -4;
                do {
                  pdVar14[1] = pdVar14[1] - pdVar12[3] * *(double *)(iVar3 + iVar22 * 8);
                  *pdVar14 = *pdVar14 -
                             *(double *)((int)pdVar14 + (iVar4 - iVar3)) *
                             *(double *)(iVar3 + iVar22 * 8);
                  pdVar14[-1] = pdVar14[-1] - pdVar12[1] * *(double *)(iVar3 + iVar22 * 8);
                  dVar1 = *pdVar12;
                  pdVar12 = pdVar12 + -4;
                  pdVar14[-2] = pdVar14[-2] - dVar1 * *(double *)(iVar3 + iVar22 * 8);
                  pdVar14 = pdVar14 + -4;
                  iVar18 = iVar18 + -1;
                } while (iVar18 != 0);
              }
              if (iVar22 <= iVar17) {
                iVar3 = *(int *)(iVar21 + *param_1);
                iVar4 = *(int *)(*param_1 + iVar15);
                pdVar12 = (double *)(iVar3 + iVar17 * 8);
                iVar17 = (iVar17 - iVar22) + 1;
                do {
                  *pdVar12 = *pdVar12 -
                             *(double *)((iVar4 - iVar3) + (int)pdVar12) *
                             *(double *)(iVar3 + iVar22 * 8);
                  pdVar12 = pdVar12 + -1;
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
            }
            iVar20 = iVar20 + -1;
          } while (-1 < iVar20);
        }
        iVar15 = iVar15 + -0xc;
        iVar22 = iVar13;
      } while (0 < iVar13);
      return CONCAT31((int3)((uint)iVar13 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar15 >> 8),1);
}














void __cdecl FUN_10019dd0(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  byte ****ppppbVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_374 [24];
  int local_35c [12];
  undefined4 local_32c [6];
  int local_314 [12];
  undefined4 local_2e4 [2];
  int local_2dc;
  undefined4 *local_2cc;
  int local_2c8;
  undefined4 local_2a8 [3];
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_28c;
  undefined1 local_288;
  int local_284 [5];
  undefined1 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258;
  void *local_254;
  byte ***local_250;
  uint local_24c;
  uint local_248;
  char local_244 [256];
  char local_144 [256];
  byte ***local_44 [4];
  uint local_34;
  uint uStack_30;
  byte ***local_2c [4];
  uint local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b12b;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar11 = 0;
  local_24c = 0;
  local_254 = param_3;
  puVar7 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar7 = (undefined4 *)*param_1;
  }
  piVar3 = param_1 + 4;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  FUN_10007540(local_32c,param_1,*piVar3 + (int)puVar7,param_2,0);
  local_29c = 0;
  local_298 = 0;
  local_294 = 0;
  local_28c = 0;
  local_288 = 0;
  local_284[0] = 0;
  local_284[1] = 0;
  local_284[2] = 0;
  local_284[3] = 0;
  local_284[4] = 0;
  local_270 = 0;
  local_26c = 0;
  local_268 = 0;
  local_264 = 0;
  local_260 = 0;
  local_25c = 0;
  local_258 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_100074c0(local_2e4,local_32c);
  local_8 = CONCAT31(local_8._1_3_,2);
  do {
    if (local_2dc == 0) {
      FUN_10023650((int *)&local_2cc);
      FUN_10023650(local_284);
      FUN_10023650(local_314);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar8 = local_2c8 - (int)local_2cc >> 0x1f;
    puVar7 = local_2a8;
    if ((local_2c8 - (int)local_2cc) / 0xc + iVar8 != iVar8) {
      puVar7 = local_2cc;
    }
    if (*(char *)(puVar7 + 2) == '\0') {
      pvVar5 = (void *)0x0;
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)*puVar7;
      pvVar4 = (void *)puVar7[1];
    }
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    local_248 = 0;
    local_1c = 0;
    uStack_18 = 0xf;
    if (pvVar5 != pvVar4) {
      FUN_100243b0(local_2c,pvVar5,(int)pvVar4 - (int)pvVar5);
    }
    uVar10 = local_1c;
    uVar11 = uVar11 | 0xe;
    local_8._0_1_ = 4;
    local_24c = uVar11;
    local_248 = local_1c;
    if (local_1c != 0) {
      local_250 = (byte ***)local_2c;
      if (0xf < uStack_18) {
        local_250 = local_2c[0];
      }
      if (local_1c != 0) {
        memset(local_244,0,0x100);
        pbVar6 = &DAT_1002d96c;
        iVar8 = 4;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          local_244[bVar1] = '\x01';
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        ppppbVar9 = (byte ****)local_250;
        if (local_250 < (byte ****)((int)local_250 + uVar10)) {
LAB_10019fd2:
          if (local_244[*(byte *)ppppbVar9] != '\0') break;
          uVar10 = (int)ppppbVar9 - (int)local_250;
          if (uVar10 == 0xffffffff) goto LAB_10019feb;
          local_250 = (byte ***)local_2c;
          if (0xf < uStack_18) {
            local_250 = local_2c[0];
          }
          memset(local_144,0,0x100);
          pbVar6 = &DAT_1002d96c;
          iVar8 = 4;
          do {
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            local_144[bVar1] = '\x01';
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          iVar8 = -1;
          if (local_248 - 1 != -1) {
            iVar8 = local_248 - 1;
          }
          ppppbVar9 = (byte ****)((int)local_250 + iVar8);
          cVar2 = local_144[*(byte *)((int)local_250 + iVar8)];
          do {
            if (cVar2 == '\0') {
              iVar8 = (int)ppppbVar9 - (int)local_250;
LAB_1001a0ca:
              local_34 = 0;
              uStack_30 = 0xf;
              local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
              if (local_248 < uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_10023b60();
              }
              uVar11 = (iVar8 - uVar10) + 1;
              if (local_248 - uVar10 < uVar11) {
                uVar11 = local_248 - uVar10;
              }
              ppppbVar9 = local_2c;
              if (0xf < uStack_18) {
                ppppbVar9 = (byte ****)local_2c[0];
              }
              FUN_100243b0(local_44,(byte *)((int)ppppbVar9 + uVar10),uVar11);
              uVar11 = 0x1e;
              local_24c = 0x1e;
              if (0xf < uStack_18) {
                ppppbVar9 = (byte ****)local_2c[0];
                if ((0xfff < uStack_18 + 1) &&
                   (ppppbVar9 = (byte ****)local_2c[0][-1],
                   (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar9))))
                goto LAB_1001a1ea;
                FUN_100284c9(ppppbVar9);
              }
              local_2c[0] = local_44[0];
              local_1c = local_34;
              uStack_18 = uStack_30;
              goto LAB_10019ffe;
            }
            if (ppppbVar9 == (byte ****)local_250) {
              iVar8 = -1;
              goto LAB_1001a0ca;
            }
            pbVar6 = (byte *)((int)ppppbVar9 + -1);
            ppppbVar9 = (byte ****)((int)ppppbVar9 + -1);
            cVar2 = local_144[*pbVar6];
          } while( true );
        }
      }
LAB_10019feb:
      local_1c = 0;
      ppppbVar9 = local_2c;
      if (0xf < uStack_18) {
        ppppbVar9 = (byte ****)local_2c[0];
      }
      *(byte *)ppppbVar9 = 0;
    }
LAB_10019ffe:
    piVar3 = *(int **)((int)local_254 + 4);
    if (*(int **)((int)local_254 + 8) == piVar3) {
      FUN_100025a0(local_254,piVar3,local_2c);
    }
    else {
      FUN_10007280(piVar3,local_2c);
      *(int *)((int)local_254 + 4) = *(int *)((int)local_254 + 4) + 0x18;
    }
    local_8._0_1_ = 2;
    if (0xf < uStack_18) {
      ppppbVar9 = (byte ****)local_2c[0];
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar9 = (byte ****)local_2c[0][-1],
         (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar9)))) {
LAB_1001a1ea:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(ppppbVar9);
    }
    local_8._0_1_ = 3;
    FUN_100074c0(local_374,local_2e4);
    local_24c = uVar11 | 1;
    FUN_1000b5f0(local_2e4);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_10023650(local_35c);
  } while( true );
  ppppbVar9 = (byte ****)((int)ppppbVar9 + 1);
  if ((byte ****)((int)local_250 + uVar10) <= ppppbVar9) goto LAB_10019feb;
  goto LAB_10019fd2;
}














void __fastcall FUN_1001a240(int *param_1)

{
  int *this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined **local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b170;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xd7) = 1;
  if (param_1[0xd9] != 0) {
    FUN_10025060(param_1 + 0xd8);
  }
  iVar3 = *param_1;
  param_1[0x68] = *(int *)(iVar3 + 8);
  if (*(int *)(iVar3 + 0x2c) == 2) {
    iVar4 = *(int *)(iVar3 + 0x34);
  }
  else {
    iVar4 = *(int *)(iVar3 + 0x10);
  }
  iVar4 = iVar4 * *(int *)(iVar3 + 0xc);
  if (iVar4 - param_1[0x81] != 0) {
    (**(code **)(param_1[10] + 8))(iVar4 * 4 + 0x12,uVar1);
    (**(code **)(param_1[0x36] + 8))(iVar4 * 8 + 0x12);
    param_1[0x81] = iVar4;
    uVar1 = 0;
    iVar3 = param_1[6];
    if (param_1[7] - iVar3 >> 2 != 0) {
      do {
        free(*(void **)(param_1[6] + uVar1 * 4));
        uVar1 = uVar1 + 1;
        iVar3 = param_1[6];
      } while (uVar1 < (uint)(param_1[7] - iVar3 >> 2));
    }
    param_1[7] = iVar3;
    iVar3 = 0;
    if ((short)param_1[0xda] != 0) {
      do {
        local_14 = malloc(param_1[0x81] * 8 + 0x12);
        puVar2 = (undefined4 *)param_1[7];
        if ((undefined4 *)param_1[8] == puVar2) {
          FUN_10002940(param_1 + 6,puVar2,&local_14);
        }
        else {
          *puVar2 = local_14;
          param_1[7] = param_1[7] + 4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0xda));
    }
  }
  this = param_1 + 6;
  if ((uint)(param_1[7] - *this >> 2) < (uint)*(ushort *)(param_1 + 0xda)) {
    iVar3 = param_1[7] - *this >> 2;
    if (iVar3 < (int)(uint)*(ushort *)(param_1 + 0xda)) {
      do {
        local_18 = malloc(param_1[0x81] * 8 + 0x12);
        puVar2 = (undefined4 *)param_1[7];
        if ((undefined4 *)param_1[8] == puVar2) {
          FUN_10002940(this,puVar2,&local_18);
        }
        else {
          *puVar2 = local_18;
          param_1[7] = param_1[7] + 4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0xda));
    }
  }
  else if ((uint)*(ushort *)(param_1 + 0xda) < (uint)(param_1[7] - *this >> 2)) {
    uVar1 = (uint)*(ushort *)(param_1 + 0xda);
    if (uVar1 < (uint)(param_1[7] - *this >> 2)) {
      do {
        free(*(void **)(*this + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)(param_1[7] - *this >> 2));
    }
    FUN_10005aa0(this,(uint)*(ushort *)(param_1 + 0xda));
  }
  FUN_1000d140(param_1);
  (**(code **)(param_1[10] + 0x28))();
  (**(code **)(param_1[0x36] + 0x28))();
  *(undefined1 *)(param_1 + 0xd7) = 0;
  param_1[0xe7] = 1;
  puVar2 = (undefined4 *)FUN_10028499(8);
  *puVar2 = param_1;
  puVar2[1] = FUN_10012e40;
  local_8 = 0;
  local_1c = puVar2;
  FUN_10008ba0((int)&local_38);
  local_38 = std::_LaunchPad<>::vftable;
  local_1c = (undefined4 *)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_28 = puVar2;
  FUN_10022130(&local_38,&local_24);
  if (local_28 != (undefined4 *)0x0) {
    FUN_100284c9(local_28);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar3 = _Mtx_unlock(local_30);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  _Mtx_destroy(local_30);
  _Cnd_destroy(local_34);
  if (param_1[0xd9] == 0) {
    param_1[0xd8] = local_24;
    param_1[0xd9] = local_20;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}















void __fastcall FUN_1001a520(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  void *pvVar9;
  bool bVar10;
  undefined1 local_45;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b1b9;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar10 = false;
  pbVar7 = (byte *)(param_1 + 0x19);
  if (0xf < (uint)param_1[0x1e]) {
    pbVar7 = (byte *)param_1[0x19];
  }
  local_14 = uVar3;
  puVar4 = FUN_10005100(pbVar7,pbVar7 + param_1[0x1d],(undefined4 *)0x0,&DAT_10034874,0x10,pbVar7);
  *(bool *)(param_1 + 0x1f) = (char)puVar4 != '\0';
  libusb_clear_halt(*param_1,*(undefined1 *)(param_1 + 1));
  puVar1 = param_1 + 0x20;
  iVar5 = _Mtx_lock(puVar1,uVar3);
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
  }
  local_8 = 0;
  local_45 = 0;
  iVar5 = libusb_control_transfer(*param_1,0x40,0xbc,0,0,&local_45,0,10);
  if (iVar5 < 0) {
    pcVar6 = (char *)libusb_error_name(iVar5);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar8 = pcVar6;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_100243b0(local_2c,pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
    local_8._0_1_ = 2;
    FUN_10019700(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_100284c9(pvVar9);
    }
    local_8 = 3;
    iVar5 = _Mtx_unlock(puVar1);
    if (iVar5 != 0) {
      std::_Throw_C_error(iVar5);
    }
  }
  else {
    local_8 = 1;
    iVar5 = _Mtx_unlock(puVar1);
    if (iVar5 != 0) {
      std::_Throw_C_error(iVar5);
    }
    local_8 = 0xffffffff;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_100243b0(local_44,"Start",5);
    local_8 = 4;
    bVar10 = true;
    cVar2 = FUN_1000ec50(param_1,(byte *)local_44);
    if (cVar2 != '\0') {
      local_45 = 1;
      goto LAB_1001a6e3;
    }
  }
  local_45 = 0;
LAB_1001a6e3:
  if ((bVar10) && (0xf < local_30)) {
    pvVar9 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar9 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

















void __thiscall FUN_1001a740(void *this,undefined1 param_1,int param_2,undefined4 param_3)

{
  int *this_00;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ushort *this_01;
  byte *pbVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  void *local_40;
  size_t local_3c;
  int local_38;
  undefined1 *local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b200;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xdc) = 0;
  uVar2 = FUN_1000f8d0(*(int *)((int)this + 0x208));
  *(undefined4 *)((int)this + 8) = uVar2;
  uVar2 = FUN_10010e60(*(int *)((int)this + 0x208));
  *(undefined4 *)((int)this + 0xc) = uVar2;
  uVar2 = FUN_10010d80(*(int *)((int)this + 0x208));
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0xc);
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x208) + 0x62);
  *(uint *)((int)this + 0x6c) = uVar3;
  *(undefined4 *)((int)this + 0x58) = 0xe;
  *(double *)((int)this + 0x70) = (double)uVar3;
  *(undefined8 *)((int)this + 0x78) = 0;
  *(undefined1 *)((int)this + 0xd9) = 1;
  *(undefined1 *)((int)this + 0xd8) = 1;
  if (*(int *)((int)this + 0xe4) != 0) {
    FUN_10025060((undefined4 *)((int)this + 0xe0));
  }
  if (*(int *)((int)this + 0xfc) != 0) {
    FUN_10025060((undefined4 *)((int)this + 0xf8));
  }
  cVar1 = FUN_1001a520(*(undefined4 **)((int)this + 0x208));
  if (cVar1 != '\0') {
    (**(code **)(**(int **)((int)this + 0xe8) + 0x28))();
    local_3c = *(int *)((int)this + 0xc) * *(int *)((int)this + 0x10) * 2 + 0x5d;
    (**(code **)(**(int **)((int)this + 0xe8) + 8))(local_3c);
    this_00 = (int *)((int)this + 0x20c);
    iVar8 = *this_00;
    uVar3 = 0;
    if (*(int *)((int)this + 0x210) - iVar8 >> 2 != 0) {
      do {
        free(*(void **)(*this_00 + uVar3 * 4));
        uVar3 = uVar3 + 1;
        iVar8 = *this_00;
      } while (uVar3 < (uint)(*(int *)((int)this + 0x210) - iVar8 >> 2));
    }
    *(int *)((int)this + 0x210) = iVar8;
    iVar8 = *(int *)((int)this + 0x208);
    pbVar5 = (byte *)(iVar8 + 100);
    if (0xf < *(uint *)(iVar8 + 0x78)) {
      pbVar5 = *(byte **)(iVar8 + 100);
    }
    puVar4 = FUN_10005100(pbVar5,pbVar5 + *(int *)(iVar8 + 0x74),(undefined4 *)0x0,&DAT_100348b0,
                          0x10,pbVar5);
    if ((char)puVar4 == '\0') {
      *(undefined4 *)((int)this + 0x108) = 0xffffffff;
      *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
    }
    else {
      local_30 = 0;
      while( true ) {
        this_01 = FUN_1000b180(&DAT_100348f0,(ushort *)(*(int *)((int)this + 0x208) + 6));
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_100243b0(local_2c,"MultiFrameNumber",0x10);
        local_8 = 0;
        pbVar5 = FUN_1000b400(this_01,(byte *)local_2c);
        if (0xf < *(uint *)(pbVar5 + 0x14)) {
          pbVar5 = *(byte **)pbVar5;
        }
        local_38 = atoi((char *)pbVar5);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_100284c9(pvVar6);
        }
        iVar8 = local_30;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (local_38 <= local_30) break;
        local_40 = malloc(local_3c);
        puVar7 = *(undefined4 **)((int)this + 0x210);
        if (*(undefined4 **)((int)this + 0x214) == puVar7) {
          FUN_10002940(this_00,puVar7,&local_40);
          local_30 = iVar8 + 1;
        }
        else {
          *puVar7 = local_40;
          *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + 4;
          local_30 = iVar8 + 1;
        }
      }
      *(int *)((int)this + 0x108) = *(int *)((int)this + 0x210) - *this_00 >> 2;
      *(undefined4 *)((int)this + 0x10c) = 0;
    }
    if (*(void **)((int)this + 0xec) != (void *)0x0) {
      free(*(void **)((int)this + 0xec));
    }
    pvVar6 = malloc(*(int *)((int)this + 0xc) * *(int *)((int)this + 0x10) * 2);
    *(void **)((int)this + 0xec) = pvVar6;
    *(undefined1 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xdc) = 1;
    local_34 = (undefined1 *)FUN_10028499(0xc);
    *local_34 = param_1;
    *(void **)(local_34 + 4) = this;
    *(undefined1 **)(local_34 + 8) = &LAB_1000c03a;
    local_8 = 1;
    FUN_10004c00(&local_4c,&local_34);
    local_8 = 0xffffffff;
    if (local_34 != (undefined1 *)0x0) {
      FUN_100284c9(local_34);
    }
    if (*(int *)((int)this + 0xe4) != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    *(undefined4 *)((int)this + 0xe0) = local_4c;
    *(undefined4 *)((int)this + 0xe4) = local_48;
    *(int *)((int)this + 0xf4) = param_2;
    if (param_2 != 0) {
      puVar7 = (undefined4 *)FUN_10028499(0xc);
      *puVar7 = param_3;
      puVar7[1] = this;
      puVar7[2] = FUN_100131c0;
      local_8 = 2;
      local_44 = puVar7;
      FUN_10008ba0((int)&local_68);
      local_68 = std::_LaunchPad<>::vftable;
      local_44 = (undefined4 *)0x0;
      local_8 = CONCAT31(local_8._1_3_,3);
      local_58 = puVar7;
      FUN_10022130(&local_68,&local_54);
      if (local_58 != (undefined4 *)0x0) {
        FUN_100284c9(local_58);
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar8 = _Mtx_unlock(local_60);
      if (iVar8 != 0) {
        std::_Throw_C_error(iVar8);
      }
      _Mtx_destroy(local_60);
      _Cnd_destroy(local_64);
      if (*(int *)((int)this + 0xfc) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      *(undefined4 *)((int)this + 0xf8) = local_54;
      *(undefined4 *)((int)this + 0xfc) = local_50;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}















void __thiscall FUN_1001ab80(void *this,char param_1)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  double dVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong local_c4;
  double local_bc;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  uint local_98;
  void *local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  void *local_6c;
  size_t local_68;
  undefined8 local_64;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined1 local_50 [8];
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_18;
  undefined2 local_13;
  char local_10;
  ushort local_e;
  ushort local_c;
  uint local_8;
  
  local_7c = 0xffffffff;
  puStack_80 = &LAB_1002b240;
  local_84 = ExceptionList;
  local_8 = DAT_10034018 ^ (uint)&local_78;
  ExceptionList = &local_84;
  local_94 = this;
  uVar16 = _Xtime_get_ticks(local_8);
  local_88 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_a4 = (undefined4)uVar16;
  _time64((__time64_t *)0x0);
  local_b4 = FUN_1000f5d0(*(int *)((int)this + 0x208));
  local_ac = FUN_1000f4f0(*(int *)((int)this + 0x208));
  local_a8 = FUN_1000fd40(*(int *)((int)this + 0x208));
  local_b0 = FUN_1000fc60(*(int *)((int)this + 0x208));
  local_90 = FUN_1000f8d0(*(int *)((int)this + 0x208));
  uVar16 = CONCAT44(local_88,local_a4);
  *(undefined2 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  local_8c = 0;
  cVar3 = *(char *)((int)this + 0xd8);
  do {
    if (cVar3 != '\0') {
LAB_1001b34c:
      local_88 = (undefined4)((ulonglong)uVar16 >> 0x20);
      local_a4 = (undefined4)uVar16;
      if (((*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x210)) &&
          (*(int *)((int)this + 0x158) == *(int *)((int)this + 0x108))) &&
         (*(int *)((int)this + 0x15c) == *(int *)((int)this + 0x10c))) {
        FUN_10013290(this);
        uVar16 = CONCAT44(local_88,local_a4);
      }
      local_88 = (undefined4)((ulonglong)uVar16 >> 0x20);
      local_a4 = (undefined4)uVar16;
      (**(code **)(**(int **)((int)this + 0xe8) + 0x24))();
      pvVar9 = *(void **)((int)this + 0x208);
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      FUN_100243b0(local_48,"Standby",7);
      local_7c = 2;
      FUN_1000ec50(pvVar9,(byte *)local_48);
      if (0xf < local_34) {
        pvVar9 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar9 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_100284c9(pvVar9);
      }
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      *(undefined1 *)((int)this + 0xd8) = 1;
      if (*(int *)((int)this + 0xdc) == 1) {
        *(undefined4 *)((int)this + 0xdc) = 2;
      }
      ExceptionList = local_84;
      __security_check_cookie(local_8 ^ (uint)&local_78);
      return;
    }
    local_88 = (undefined4)((ulonglong)uVar16 >> 0x20);
    local_a4 = (undefined4)uVar16;
    cVar3 = FUN_10027e50(*(void **)((int)this + 0x208),(int)&local_18,0x10,(int)this);
    if (cVar3 == '\0') {
LAB_1001b336:
      uVar16 = CONCAT44(local_88,local_a4);
      *(uint *)((int)this + 0xdc) = (*(char *)((int)this + 0xd8) == '\0') + 2;
      goto LAB_1001b34c;
    }
    if (local_18 != 0x48555642) {
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      FUN_100243b0(local_30,"Wrong magic number in the image leader",0x26);
      local_7c = 1;
      FUN_10019700(local_30);
      local_7c = 0xffffffff;
      if (0xf < local_1c) {
        pvVar9 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar9 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_100284c9(pvVar9);
      }
      uVar16 = CONCAT44(local_88,local_a4);
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      *(undefined4 *)((int)this + 0xdc) = 3;
      goto LAB_1001b34c;
    }
    if (local_10 == '\x01') {
      *(undefined4 *)((int)this + 0x58) = 8;
      *(undefined4 *)((int)this + 0x60) = 0x1080001;
    }
    else if (local_10 == '\x02') {
      *(undefined4 *)((int)this + 0x58) = 10;
      *(undefined4 *)((int)this + 0x60) = 0x10a0004;
    }
    else if (local_10 == '\x03') {
      *(undefined4 *)((int)this + 0x58) = 0xc;
      *(undefined4 *)((int)this + 0x60) = 0x10c0006;
    }
    else if (local_10 == '\x04') {
      *(undefined4 *)((int)this + 0x58) = 0xe;
      *(undefined4 *)((int)this + 0x60) = 0x10e0025;
    }
    else if (local_10 == '\x05') {
      *(undefined4 *)((int)this + 0x58) = 0x10;
      *(undefined4 *)((int)this + 0x60) = 0x1100007;
    }
    uVar11 = (uint)local_e;
    uVar13 = *(uint *)((int)this + 0x60);
    *(uint *)((int)this + 0x28) = (uint)local_c;
    local_68 = local_c * uVar11;
    *(uint *)((int)this + 0x24) = uVar11;
    if ((uVar13 & 0xff000000) == 0x1000000) {
      iVar10 = 1;
    }
    else if ((uVar13 & 0xff000000) == 0x2000000) {
      if ((uVar13 == 0x2200016) || (uVar13 == 0x2200017)) {
        iVar10 = 4;
      }
      else {
        if ((((uVar13 != 0x2180014) && (uVar13 != 0x2180015)) && (uVar13 != 0x2300018)) &&
           (((uVar13 != 0x2300019 && (uVar13 != 0x230001a)) &&
            ((uVar13 != 0x230001b && (uVar13 != 0x2300033)))))) goto LAB_1001ad57;
        iVar10 = 3;
      }
    }
    else {
LAB_1001ad57:
      iVar10 = -1;
    }
    local_54 = uVar13 >> 0x10 & 0xff;
    iVar4 = FUN_10012dc0(uVar13);
    local_78 = CONCAT44((int)local_54 / iVar4,(uint)local_78);
    local_98 = ((uint)local_c - local_a8) * uVar11;
    local_64 = (double)((float)(int)(*(int *)((int)this + 0x58) * (uint)local_c * uVar11) * 0.125);
    local_64 = ceil(local_64);
    uVar17 = FUN_10028b90();
    local_58 = (int)uVar17;
    if (*(int *)((int)this + 0x20c) == *(int *)((int)this + 0x210)) {
      puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0xe8) + 0x10))();
      uVar16 = CONCAT44(local_88,local_a4);
      if (puVar5 != (undefined4 *)0x0) goto LAB_1001adf6;
LAB_1001b298:
      *(undefined4 *)((int)this + 0xdc) = 2;
      goto LAB_1001b34c;
    }
    puVar5 = *(undefined4 **)(*(int *)((int)this + 0x20c) + *(int *)((int)this + 0x158) * 4);
LAB_1001adf6:
    *(undefined1 *)((int)puVar5 + 0x26) = 1;
    *(undefined2 *)(puVar5 + 9) = local_13;
    *puVar5 = *(undefined4 *)((int)this + 0x60);
    puVar5[3] = *(undefined4 *)((int)this + 0x24);
    puVar5[4] = *(undefined4 *)((int)this + 0x28);
    *(undefined2 *)((int)puVar5 + 0x2a) = 1;
    iVar4 = _Mtx_lock();
    if (iVar4 != 0) {
      std::_Throw_C_error(iVar4);
    }
    puVar5[0xb] = *(undefined4 *)((int)this + 0x178);
    *(undefined1 *)(puVar5 + 10) = *(undefined1 *)((int)this + 0x180);
    *(undefined1 *)((int)puVar5 + 0x29) = *(undefined1 *)((int)this + 0x181);
    puVar5[0xc] = *(undefined4 *)((int)this + 0x184);
    *(undefined8 *)(puVar5 + 0xd) = *(undefined8 *)((int)this + 400);
    *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)((int)this + 0x198);
    *(undefined8 *)(puVar5 + 0x11) = *(undefined8 *)((int)this + 0x1a0);
    dVar15 = *(double *)((int)this + 0x1a8);
    *(double *)(puVar5 + 0x13) = dVar15;
    puVar5[0x15] = *(undefined4 *)((int)this + 0x1b0);
    puVar5[0x16] = *(undefined4 *)((int)this + 0x1b4);
    *(undefined1 *)(puVar5 + 0x17) = *(undefined1 *)((int)this + 0x1b8);
    local_7c = 0;
    iVar4 = _Mtx_unlock();
    if (iVar4 != 0) {
      std::_Throw_C_error(iVar4);
    }
    local_70 = (int)puVar5 + 0x5d;
    local_7c = 0xffffffff;
    cVar3 = FUN_10027e50(*(void **)((int)this + 0x208),local_70,local_58,(int)this);
    if ((cVar3 == '\0') ||
       (cVar3 = FUN_10027e50(*(void **)((int)this + 0x208),(int)local_50,8,(int)this), cVar3 == '\0'
       )) goto LAB_1001b336;
    *(undefined1 *)((int)puVar5 + 0x26) = 2;
    if (*(int *)((int)this + 0x20c) == *(int *)((int)this + 0x210)) {
      (**(code **)(**(int **)((int)this + 0xe8) + 0x1c))();
    }
    iVar4 = local_8c + 1;
    local_8c = iVar4;
    _Xtime_get_ticks();
    FUN_10028ee0();
    this = local_94;
    uVar16 = CONCAT44(local_88,local_a4);
    local_bc = dVar15 / 10000000.0;
    local_64 = local_bc;
    if (1.0 < local_bc) {
      uVar16 = _Xtime_get_ticks();
      local_8c = 0;
      *(double *)((int)this + 0x78) = (double)iVar4 / local_64;
    }
    local_88 = (undefined4)((ulonglong)uVar16 >> 0x20);
    local_a4 = (undefined4)uVar16;
    if (param_1 != '\0') goto LAB_1001b298;
    if (*(int *)((int)this + 0x20c) == *(int *)((int)this + 0x210)) {
LAB_1001b22f:
      puVar1 = (uint *)((int)this + 0x158);
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)((int)this + 0x15c) = *(int *)((int)this + 0x15c) + (uint)(0xfffffffe < uVar13);
    }
    else {
      cVar3 = FUN_10011d60(*(int *)((int)this + 0x208));
      uVar16 = CONCAT44(local_88,local_a4);
      if (cVar3 != '\0') goto LAB_1001b22f;
      cVar3 = FUN_10011d60(*(int *)((int)this + 0x208));
      uVar16 = CONCAT44(local_88,local_a4);
      if (cVar3 == '\0') {
        local_6c = calloc(local_68,2);
        iVar4 = 0;
        if (0 < (int)local_68) {
          do {
            local_c4 = 0;
            FUN_100108d0(local_70,local_54,local_78._4_4_,iVar10,iVar4,
                         (uint)*(byte *)((int)this + 0x1b9),&local_c4);
            *(undefined2 *)((int)local_6c + iVar4 * 2) = (undefined2)local_c4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_68);
        }
        local_54 = 0;
        local_64 = 0.0;
        local_64._0_4_ = 0;
        local_64._4_4_ = 0;
        uVar13 = (uint)local_64;
        uVar11 = local_64._4_4_;
        if (0 < local_b4) {
          iVar10 = *(int *)((int)this + 0x24);
          local_54 = 0;
          local_70 = iVar10 * 2;
          puVar6 = (ushort *)((int)local_6c + local_90 * 2);
          local_5c = 0;
          iVar4 = local_b4;
          do {
            if (local_90 < iVar10 - local_90) {
              iVar12 = (iVar10 - local_90) - local_90;
              local_54 = local_54 + iVar12;
              puVar8 = puVar6;
              do {
                uVar2 = *puVar8;
                puVar8 = puVar8 + 1;
                bVar14 = CARRY4(local_5c,(uint)uVar2);
                local_5c = local_5c + uVar2;
                uVar11 = uVar11 + bVar14;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            puVar6 = puVar6 + iVar10;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          local_58 = 0;
          uVar13 = local_5c;
          this = local_94;
        }
        local_78 = 0;
        local_a0 = 0;
        uVar16 = __alldiv(uVar13,uVar11,local_54,(int)local_54 >> 0x1f);
        local_54 = (uint)uVar16;
        local_64 = 0.0;
        local_64._0_4_ = 0;
        local_64._4_4_ = 0;
        uVar13 = (uint)local_64;
        uVar11 = local_64._4_4_;
        if ((int)local_98 < (int)local_68) {
          iVar10 = local_78._4_4_;
          uVar13 = (uint)local_78;
          if ((int)(local_68 - local_98) < 2) {
            local_58 = local_a0._4_4_;
            local_5c = (uint)local_a0;
          }
          else {
            local_5c = (uint)local_a0;
            local_58 = local_a0._4_4_;
            do {
              uVar11 = (uint)*(ushort *)((int)local_6c + local_98 * 2);
              bVar14 = CARRY4(uVar13,uVar11);
              uVar13 = uVar13 + uVar11;
              iVar10 = iVar10 + (uint)bVar14;
              uVar11 = (uint)*(ushort *)((int)local_6c + local_98 * 2 + 2);
              bVar14 = CARRY4(local_5c,uVar11);
              local_5c = local_5c + uVar11;
              local_58 = local_58 + (uint)bVar14;
              local_98 = local_98 + 2;
              this = local_94;
            } while ((int)local_98 < (int)(local_68 - 1));
          }
          uVar11 = (uint)local_64;
          if ((int)local_98 < (int)local_68) {
            uVar11 = (uint)*(ushort *)((int)local_6c + local_98 * 2);
          }
          local_98 = iVar10 + local_58 + (uint)CARRY4(uVar13,local_5c) +
                     (uint)CARRY4(uVar11,uVar13 + local_5c);
          uVar13 = uVar11 + uVar13 + local_5c;
          uVar11 = local_98;
        }
        free(local_6c);
        uVar7 = *(int *)((int)this + 0x24) * local_a8;
        uVar16 = __alldiv(uVar13,uVar11,uVar7,(int)uVar7 >> 0x1f);
        local_58 = (int)uVar16;
        uVar13 = *(uint *)((int)this + 0x158);
        iVar12 = local_54 - *(int *)((int)this + 0x4c);
        iVar4 = local_58 - *(int *)((int)this + 0x50);
        iVar10 = *(int *)((int)this + 0x15c);
        if (uVar13 == 0 && iVar10 == 0) {
          if (*(int *)((int)this + 0x4c) == 0) {
            uVar16 = CONCAT44(local_88,local_a4);
            if (*(int *)((int)this + 0x50) == 0) {
              *(uint *)((int)this + 0x4c) = local_54;
              *(int *)((int)this + 0x50) = local_58;
              uVar16 = CONCAT44(local_88,local_a4);
            }
          }
          else {
            if (*(int *)((int)this + 0x50) == 0) goto LAB_1001b202;
            if ((local_ac < iVar12) || (local_b0 < iVar4)) {
              *(undefined4 *)((int)this + 0x158) = 1;
              *(undefined4 *)((int)this + 0x15c) = 0;
              uVar16 = CONCAT44(local_88,local_a4);
            }
            else {
              *(uint *)((int)this + 0x4c) = local_54;
              *(int *)((int)this + 0x50) = local_58;
              uVar16 = CONCAT44(local_88,local_a4);
            }
          }
        }
        else {
LAB_1001b202:
          uVar16 = CONCAT44(local_88,local_a4);
          if (uVar13 != 0 || iVar10 != 0) {
            if (((*(int *)((int)this + 0x54) == 0) && (iVar12 < local_ac)) && (iVar4 < local_b0)) {
              *(uint *)((int)this + 0x54) = uVar13;
            }
            *(uint *)((int)this + 0x158) = uVar13 + 1;
            *(uint *)((int)this + 0x15c) = iVar10 + (uint)(0xfffffffe < uVar13);
            uVar16 = CONCAT44(local_88,local_a4);
          }
        }
      }
    }
    local_88 = (undefined4)((ulonglong)uVar16 >> 0x20);
    local_a4 = (undefined4)uVar16;
    if (((*(int *)((int)this + 0x10c) != 0) || (*(int *)((int)this + 0x108) != 0)) &&
       ((*(int *)((int)this + 0x158) == *(int *)((int)this + 0x108) &&
        (*(int *)((int)this + 0x15c) == *(int *)((int)this + 0x10c))))) {
      if (*(int *)((int)this + 0x54) == 0) {
        cVar3 = FUN_10011d60(*(int *)((int)this + 0x208));
        uVar16 = CONCAT44(local_88,local_a4);
        if (cVar3 == '\0') {
          *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x108);
          uVar16 = CONCAT44(local_88,local_a4);
        }
      }
      goto LAB_1001b298;
    }
    *(short *)((int)this + 0x104) = *(short *)((int)this + 0x104) + 1;
    cVar3 = *(char *)((int)this + 0xd8);
  } while( true );
}
















void FUN_1001b450(undefined2 *param_1,undefined2 *param_2,char param_3,int *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  ushort *puVar13;
  
  uVar1 = *param_1;
  uVar2 = *(uint *)(param_1 + 5);
  iVar3 = *(int *)(param_1 + 1);
  iVar4 = *(int *)(param_1 + 3);
  iVar6 = FUN_10012dc0(uVar2);
  iVar7 = FUN_10012dc0(uVar2);
  iVar7 = (int)((longlong)(ulonglong)((int)uVar2 >> 0x10 & 0xff) / (longlong)iVar7);
  iVar12 = iVar4 * iVar3;
  uVar5 = *(undefined4 *)(param_1 + 7);
  puVar8 = param_1 + 9;
  pbVar11 = (byte *)(param_2 + 9);
  if (0 < iVar12) {
    if (param_3 == '\0') {
      pbVar9 = pbVar11;
      if (iVar7 < 9) {
        do {
          if (0 < iVar6) {
            pbVar10 = pbVar9;
            iVar7 = iVar6;
            do {
              *pbVar10 = *(byte *)((uint)pbVar10[(int)puVar8 - (int)pbVar11] + *param_4);
              iVar7 = iVar7 + -1;
              pbVar10 = pbVar10 + 1;
            } while (iVar7 != 0);
          }
          iVar12 = iVar12 + -1;
          pbVar9 = pbVar9 + iVar6;
        } while (iVar12 != 0);
      }
      else {
        do {
          iVar7 = 0;
          puVar13 = puVar8;
          if (0 < iVar6) {
            do {
              pbVar11[iVar7] = *(byte *)((uint)*puVar13 + *param_4);
              iVar7 = iVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar7 < iVar6);
          }
          puVar8 = puVar8 + iVar6;
          pbVar11 = pbVar11 + iVar6;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else {
      pbVar9 = pbVar11;
      if (iVar7 < 9) {
        do {
          if (0 < iVar6) {
            pbVar10 = pbVar9;
            iVar7 = iVar6;
            do {
              *pbVar10 = ~*(byte *)((uint)pbVar10[(int)puVar8 - (int)pbVar11] + *param_4);
              iVar7 = iVar7 + -1;
              pbVar10 = pbVar10 + 1;
            } while (iVar7 != 0);
          }
          iVar12 = iVar12 + -1;
          pbVar9 = pbVar9 + iVar6;
        } while (iVar12 != 0);
      }
      else {
        do {
          iVar7 = 0;
          puVar13 = puVar8;
          if (0 < iVar6) {
            do {
              pbVar11[iVar7] = ~*(byte *)((uint)*puVar13 + *param_4);
              iVar7 = iVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar7 < iVar6);
          }
          puVar8 = puVar8 + iVar6;
          pbVar11 = pbVar11 + iVar6;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
  }
  *param_2 = uVar1;
  *(int *)(param_2 + 1) = iVar3;
  *(int *)(param_2 + 3) = iVar4;
  *(uint *)(param_2 + 5) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar5;
  return;
}















undefined1 FUN_1001b640(void)

{
  return 1;
}

















void __fastcall FUN_1001b650(int param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  void *pvVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar20;
  undefined1 auVar19 [16];
  float fVar21;
  longlong lVar22;
  longlong lVar23;
  void *local_9c [3];
  undefined8 local_90;
  undefined8 local_88;
  int *local_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  void *local_44;
  int local_40;
  double *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  double *local_2c;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  undefined1 auVar18 [16];
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b286;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_38 = param_1;
  iVar6 = _Mtx_lock();
  if (iVar6 != 0) {
    std::_Throw_C_error(iVar6);
  }
  piVar11 = (int *)(param_1 + 0x2a8);
  uVar7 = *(int *)(param_1 + 0x208) + 1;
  local_8 = 0;
  local_80 = piVar11;
  if (uVar7 != *(int *)(param_1 + 0x2ac) - *piVar11) {
    FUN_10005860(piVar11,uVar7);
  }
  iVar6 = *(int *)(param_1 + 0x20c);
  iVar9 = 0;
  if (0 < iVar6) {
    do {
      *(undefined1 *)(iVar9 + *piVar11) = 0;
      iVar9 = iVar9 + 1;
      iVar6 = *(int *)(param_1 + 0x20c);
    } while (iVar9 < iVar6);
  }
  uVar7 = *(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220) >> 4;
  local_34 = uVar7;
  if (uVar7 == 0) {
    uVar7 = *(uint *)(param_1 + 0x210);
    fVar21 = 255.0 / (float)(int)(uVar7 - iVar6);
    fVar15 = (float)iVar6;
    if (iVar6 < (int)uVar7) {
      do {
        *(char *)(iVar6 + *(int *)(param_1 + 0x2a8)) =
             (char)(int)((float)iVar6 * fVar21 + -(fVar15 * fVar21));
        iVar6 = iVar6 + 1;
        uVar7 = *(uint *)(param_1 + 0x210);
      } while (iVar6 < (int)uVar7);
    }
  }
  else {
    FUN_100079d0(local_9c,uVar7);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_40 = uVar7 + 1;
    if (0 < (int)uVar7) {
      local_30 = 0;
      local_44 = local_9c[0];
      local_4c = uVar7;
      do {
        iVar9 = local_40;
        iVar6 = *(int *)(local_38 + 0x220);
        local_58 = (double)CONCAT44(iVar6,(undefined4)local_58);
        iVar12 = 1;
        local_5c = 1;
        local_90 = (*(double *)(local_30 + iVar6) - (double)*(int *)(local_38 + 0x20c)) /
                   (double)(*(int *)(local_38 + 0x210) - *(int *)(local_38 + 0x20c));
        if (local_40 < 2) {
          pdVar8 = *(double **)((int)local_44 + 4);
        }
        else {
          local_88 = (double)CONCAT44((float)local_90,(undefined4)local_88);
          local_6c = (float)(1.0 - local_90);
          auVar18 = ZEXT416((uint)local_6c);
          FUN_1000edd0(local_40);
          FUN_10028ee0();
          local_28 = iVar9 + -1;
          local_78 = (double)CONCAT44((float)auVar18._0_8_,(undefined4)local_78);
          do {
            dVar16 = (double)local_88._4_4_;
            libm_sse2_pow_precise();
            local_7c = (float)dVar16;
            auVar18._0_8_ = (double)local_6c;
            auVar18._8_8_ = 0;
            libm_sse2_pow_precise();
            local_24._0_4_ = 1;
            local_3c = (double *)(iVar12 + -3);
            local_24 = 1;
            local_1c = 1;
            uVar7 = 1;
            local_14 = 1;
            local_2c = (double *)0x0;
            local_58 = (double)CONCAT44((float)auVar18._0_8_,(undefined4)local_58);
            lVar22 = 1;
            lVar23 = 1;
            lVar4 = 1;
            lVar5 = 1;
            if (0 < (int)local_3c) {
              uVar13 = 3;
              do {
                local_48 = (uint)((ulonglong)lVar22 >> 0x20);
                local_68._4_4_ = (uint)lVar22;
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,(uint)local_24,
                                  (int)((ulonglong)local_24 >> 0x20));
                local_24 = lVar22;
                lVar22 = __allmul(uVar13 - 1,(int)(uVar13 - 1) >> 0x1f,(uint)local_1c,
                                  (int)((ulonglong)local_1c >> 0x20));
                local_1c = lVar22;
                lVar22 = __allmul(uVar13,(int)uVar13 >> 0x1f,local_14,(int)local_2c);
                local_2c = (double *)((ulonglong)lVar22 >> 0x20);
                local_14 = (uint)lVar22;
                lVar22 = __allmul(uVar13 + 1,(int)(uVar13 + 1) >> 0x1f,local_68._4_4_,local_48);
                uVar7 = uVar7 + 4;
                uVar13 = uVar13 + 4;
                lVar23 = local_24;
                lVar4 = local_1c;
                lVar5 = lVar22;
              } while ((int)uVar7 <= (int)local_3c);
            }
            local_48 = (uint)((ulonglong)lVar5 >> 0x20);
            local_68._4_4_ = (uint)lVar5;
            local_24 = lVar23;
            local_1c = lVar4;
            lVar22 = __allmul(local_68._4_4_,local_48,local_14,(int)local_2c);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),(uint)local_1c,
                              (int)((ulonglong)local_1c >> 0x20));
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),(uint)local_24,
                              (int)((ulonglong)local_24 >> 0x20));
            lVar23 = lVar22;
            if ((int)uVar7 <= local_5c) {
              do {
                local_50 = (uint)((ulonglong)lVar23 >> 0x20);
                local_3c = (double *)lVar23;
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,(uint)lVar22,
                                  (int)((ulonglong)lVar22 >> 0x20));
                lVar23 = CONCAT44(local_50,local_3c);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 <= local_5c);
            }
            local_70 = (float)(local_28 + -3);
            local_2c = (double *)0x1;
            local_14 = 0;
            local_1c._4_4_ = 1;
            uVar7 = 1;
            local_1c._0_4_ = 0;
            local_24._4_4_ = 1;
            local_24._0_4_ = 0;
            local_48 = 1;
            local_68 = (double)(ulonglong)(uint)local_68;
            if ((int)local_70 < 1) {
              lVar23 = 1;
            }
            else {
              uVar13 = 3;
              do {
                local_50 = (uint)((ulonglong)lVar22 >> 0x20);
                local_3c = (double *)lVar22;
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,(uint)local_2c,local_14);
                local_14 = (uint)((ulonglong)lVar22 >> 0x20);
                local_2c = (double *)lVar22;
                lVar22 = __allmul(uVar13 - 1,(int)(uVar13 - 1) >> 0x1f,local_1c._4_4_,(uint)local_1c
                                 );
                local_1c._0_4_ = (uint)((ulonglong)lVar22 >> 0x20);
                local_1c._4_4_ = (uint)lVar22;
                lVar22 = __allmul(uVar13,(int)uVar13 >> 0x1f,local_24._4_4_,(uint)local_24);
                local_24._0_4_ = (uint)((ulonglong)lVar22 >> 0x20);
                local_24._4_4_ = (uint)lVar22;
                lVar23 = __allmul(uVar13 + 1,(int)(uVar13 + 1) >> 0x1f,local_48,
                                  (int)((ulonglong)local_68 >> 0x20));
                lVar22 = CONCAT44(local_50,local_3c);
                local_48 = (uint)lVar23;
                uVar7 = uVar7 + 4;
                uVar13 = uVar13 + 4;
                local_68 = (double)CONCAT44((int)((ulonglong)lVar23 >> 0x20),(uint)local_68);
              } while ((int)uVar7 <= (int)local_70);
            }
            local_50 = (uint)((ulonglong)lVar22 >> 0x20);
            local_3c = (double *)lVar22;
            lVar22 = __allmul((uint)lVar23,(int)((ulonglong)lVar23 >> 0x20),local_24._4_4_,
                              (uint)local_24);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),local_1c._4_4_,
                              (uint)local_1c);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),(uint)local_2c,local_14)
            ;
            if ((int)uVar7 <= local_28) {
              do {
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,(uint)lVar22,
                                  (int)((ulonglong)lVar22 >> 0x20));
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 <= local_28);
            }
            fVar15 = local_78._4_4_ * local_7c * local_58._4_4_;
            auVar18 = ZEXT416((uint)fVar15);
            local_58._4_4_ = fVar15;
            __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),(uint)local_3c,local_50);
            FUN_10028ee0();
            pvVar14 = local_44;
            pdVar8 = *(double **)((int)local_44 + 4);
            local_58 = (double)(local_58._4_4_ / (float)auVar18._0_8_);
            if (*(double **)((int)local_44 + 8) == pdVar8) {
              FUN_10002820(local_44,pdVar8,&local_58);
              pdVar8 = *(double **)((int)pvVar14 + 4);
            }
            else {
              *pdVar8 = local_58;
              pdVar8 = pdVar8 + 1;
              *(double **)((int)local_44 + 4) = pdVar8;
            }
            iVar12 = local_5c + 1;
            local_28 = local_28 + -1;
            local_5c = iVar12;
            local_3c = pdVar8;
          } while (iVar12 < local_40);
          iVar6 = *(int *)(local_38 + 0x220);
        }
        dVar16 = (double)(float)local_90;
        libm_sse2_pow_precise();
        local_90 = *(double *)(iVar6 + 8 + local_30) - (double)((float)dVar16 * 255.0);
        if (*(double **)((int)local_44 + 8) == pdVar8) {
          FUN_10002820(local_44,pdVar8,&local_90);
        }
        else {
          *pdVar8 = local_90;
          *(double **)((int)local_44 + 4) = pdVar8 + 1;
        }
        local_44 = (void *)((int)local_44 + 0xc);
        local_30 = local_30 + 0x10;
        local_4c = local_4c - 1;
      } while (local_4c != 0);
      local_4c = 0;
      uVar7 = local_34;
    }
    FUN_100198f0((int *)local_9c);
    iVar6 = 0;
    if (3 < (int)uVar7) {
      iVar9 = (uVar7 - 4 >> 2) + 1;
      iVar6 = iVar9 * 4;
      local_58 = (double)CONCAT44(iVar6,(undefined4)local_58);
      puVar10 = (undefined8 *)(*(int *)(local_38 + 0x214) + 0x10);
      piVar11 = (int *)((int)local_9c[0] + 0x18);
      do {
        iVar12 = piVar11[-3];
        puVar10[-2] = *(undefined8 *)(piVar11[-6] + -8 + local_40 * 8);
        iVar2 = *piVar11;
        puVar10[-1] = *(undefined8 *)(iVar12 + -8 + local_40 * 8);
        iVar12 = piVar11[3];
        *puVar10 = *(undefined8 *)(iVar2 + -8 + local_40 * 8);
        puVar10[1] = *(undefined8 *)(iVar12 + -8 + local_40 * 8);
        iVar9 = iVar9 + -1;
        puVar10 = puVar10 + 4;
        piVar11 = piVar11 + 0xc;
        uVar7 = local_34;
      } while (iVar9 != 0);
    }
    if (iVar6 < (int)uVar7) {
      iVar9 = uVar7 - iVar6;
      piVar11 = (int *)((int)local_9c[0] + iVar6 * 0xc);
      puVar10 = (undefined8 *)(*(int *)(local_38 + 0x214) + iVar6 * 8);
      do {
        iVar6 = *piVar11;
        piVar11 = piVar11 + 3;
        *puVar10 = *(undefined8 *)(iVar6 + -8 + local_40 * 8);
        iVar9 = iVar9 + -1;
        puVar10 = puVar10 + 1;
      } while (iVar9 != 0);
    }
    local_48 = *(uint *)(local_38 + 0x20c);
    iVar6 = *(int *)(local_38 + 0x210);
    if ((int)local_48 < iVar6) {
      do {
        pvVar14 = (void *)0x1;
        local_44 = (void *)0x1;
        local_68 = (double)(int)(local_48 - *(int *)(local_38 + 0x20c)) /
                   (double)(iVar6 - *(int *)(local_38 + 0x20c));
        local_88 = 0.0;
        if (1 < local_40) {
          local_58 = (double)CONCAT44((float)local_68,(undefined4)local_58);
          fVar15 = (float)(1.0 - local_68);
          uVar20 = 0;
          local_7c = fVar15;
          FUN_1000edd0(local_40);
          FUN_10028ee0();
          local_28 = local_40 + -1;
          local_90 = (double)CONCAT44(uVar20,fVar15);
          local_2c = *(double **)(local_38 + 0x214);
          do {
            dVar16 = (double)local_58._4_4_;
            libm_sse2_pow_precise();
            local_70 = (float)dVar16;
            auVar19._0_8_ = (double)local_7c;
            auVar19._8_8_ = 0;
            libm_sse2_pow_precise();
            local_1c._4_4_ = 0;
            local_6c = (float)auVar19._0_8_;
            iVar6 = (int)pvVar14 + -3;
            local_14 = 1;
            local_1c._0_4_ = 1;
            local_24._4_4_ = 0;
            uVar7 = 1;
            local_24._0_4_ = 1;
            local_30 = 0;
            lVar22 = 1;
            local_78._4_4_ = (float)iVar6;
            lVar23 = 1;
            if (0 < iVar6) {
              uVar13 = 3;
              do {
                local_4c = (uint)((ulonglong)lVar22 >> 0x20);
                local_34 = (uint)lVar22;
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,local_14,local_1c._4_4_);
                local_1c._4_4_ = (uint)((ulonglong)lVar22 >> 0x20);
                local_14 = (uint)lVar22;
                lVar22 = __allmul(uVar13 - 1,(int)(uVar13 - 1) >> 0x1f,(uint)local_1c,local_24._4_4_
                                 );
                local_24._4_4_ = (uint)((ulonglong)lVar22 >> 0x20);
                local_1c._0_4_ = (uint)lVar22;
                lVar22 = __allmul(uVar13,(int)uVar13 >> 0x1f,(uint)local_24,local_30);
                local_30 = (int)((ulonglong)lVar22 >> 0x20);
                local_24._0_4_ = (uint)lVar22;
                lVar22 = __allmul(uVar13 + 1,(int)(uVar13 + 1) >> 0x1f,local_34,local_4c);
                uVar7 = uVar7 + 4;
                uVar13 = uVar13 + 4;
                lVar23 = lVar22;
              } while ((int)uVar7 <= (int)local_78._4_4_);
            }
            local_4c = (uint)((ulonglong)lVar23 >> 0x20);
            local_34 = (uint)lVar23;
            lVar22 = __allmul(local_34,local_4c,(uint)local_24,local_30);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),(uint)local_1c,
                              local_24._4_4_);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),local_14,local_1c._4_4_)
            ;
            lVar23 = lVar22;
            if ((int)uVar7 <= (int)local_44) {
              do {
                local_3c = (double *)((ulonglong)lVar23 >> 0x20);
                local_50 = (uint)lVar23;
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,(uint)lVar22,
                                  (int)((ulonglong)lVar22 >> 0x20));
                lVar23 = CONCAT44(local_3c,local_50);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 <= (int)local_44);
            }
            local_78._4_4_ = (float)(local_28 + -3);
            local_14 = 1;
            local_1c._4_4_ = 0;
            local_1c._0_4_ = 1;
            uVar7 = 1;
            local_24._4_4_ = 0;
            local_24._0_4_ = 1;
            local_30 = 0;
            lVar23 = 1;
            lVar4 = 1;
            if (0 < (int)local_78._4_4_) {
              uVar13 = 3;
              do {
                local_3c = (double *)((ulonglong)lVar22 >> 0x20);
                local_50 = (uint)lVar22;
                local_4c = (uint)((ulonglong)lVar23 >> 0x20);
                local_34 = (uint)lVar23;
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,local_14,local_1c._4_4_);
                local_1c._4_4_ = (uint)((ulonglong)lVar22 >> 0x20);
                local_14 = (uint)lVar22;
                lVar22 = __allmul(uVar13 - 1,(int)(uVar13 - 1) >> 0x1f,(uint)local_1c,local_24._4_4_
                                 );
                local_24._4_4_ = (uint)((ulonglong)lVar22 >> 0x20);
                local_1c._0_4_ = (uint)lVar22;
                lVar22 = __allmul(uVar13,(int)uVar13 >> 0x1f,(uint)local_24,local_30);
                local_30 = (int)((ulonglong)lVar22 >> 0x20);
                local_24._0_4_ = (uint)lVar22;
                lVar23 = __allmul(uVar13 + 1,(int)(uVar13 + 1) >> 0x1f,local_34,local_4c);
                lVar22 = CONCAT44(local_3c,local_50);
                uVar7 = uVar7 + 4;
                uVar13 = uVar13 + 4;
                lVar4 = lVar23;
              } while ((int)uVar7 <= (int)local_78._4_4_);
            }
            local_3c = (double *)((ulonglong)lVar22 >> 0x20);
            local_50 = (uint)lVar22;
            local_4c = (uint)((ulonglong)lVar4 >> 0x20);
            local_34 = (uint)lVar4;
            lVar22 = __allmul(local_34,local_4c,(uint)local_24,local_30);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),(uint)local_1c,
                              local_24._4_4_);
            lVar22 = __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),local_14,local_1c._4_4_)
            ;
            if ((int)uVar7 <= local_28) {
              do {
                lVar22 = __allmul(uVar7,(int)uVar7 >> 0x1f,(uint)lVar22,
                                  (int)((ulonglong)lVar22 >> 0x20));
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 <= local_28);
            }
            dVar16 = (double)local_6c;
            local_78 = local_90 * *local_2c * (double)local_70 * dVar16;
            __allmul((uint)lVar22,(int)((ulonglong)lVar22 >> 0x20),local_50,(int)local_3c);
            FUN_10028ee0();
            pvVar14 = (void *)((int)local_44 + 1);
            local_2c = local_2c + 1;
            local_28 = local_28 + -1;
            local_88 = local_78 / dVar16 + local_88;
            local_44 = pvVar14;
          } while ((int)pvVar14 < local_40);
        }
        uVar7 = local_48;
        dVar16 = (double)(float)local_68;
        libm_sse2_pow_precise();
        dVar17 = (double)((float)dVar16 * 255.0) + local_88;
        dVar16 = 255.0;
        if (dVar17 <= 255.0) {
          dVar16 = dVar17;
        }
        dVar17 = 0.0;
        if (0.0 <= dVar16) {
          dVar17 = dVar16;
        }
        *(char *)(uVar7 + *local_80) = (char)(int)dVar17;
        local_48 = uVar7 + 1;
        iVar6 = *(int *)(local_38 + 0x210);
      } while ((int)local_48 < iVar6);
    }
    param_1 = local_38;
    local_8 = local_8 & 0xffffff00;
    FUN_100236c0((int *)local_9c);
    uVar7 = *(uint *)(param_1 + 0x210);
  }
  if (uVar7 < (uint)(*(int *)(param_1 + 0x2ac) - *(int *)(param_1 + 0x2a8))) {
    do {
      *(undefined1 *)(uVar7 + *(int *)(param_1 + 0x2a8)) = 0xff;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(param_1 + 0x2ac) - *(int *)(param_1 + 0x2a8)));
  }
  piVar11 = (int *)(param_1 + 0x2b4);
  local_80 = piVar11;
  FUN_100257f0(piVar11,(uint)*(ushort *)(param_1 + 0x368));
  local_34 = 0;
  if (*(short *)(param_1 + 0x368) != 0) {
    do {
      uVar7 = local_34 >> 5;
      bVar3 = (byte)local_34;
      local_34 = local_34 + 1;
      puVar1 = (uint *)(*piVar11 + uVar7 * 4);
      *puVar1 = *puVar1 | 1 << (bVar3 & 0x1f);
      piVar11 = local_80;
    } while ((int)local_34 < (int)(uint)*(ushort *)(local_38 + 0x368));
  }
  local_8 = 2;
  iVar6 = _Mtx_unlock();
  if (iVar6 != 0) {
    std::_Throw_C_error(iVar6);
  }
  ExceptionList = local_10;
  return;
}
















void __thiscall FUN_1001c0f0(void *this,uint param_1,int param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  int *this_00;
  uint uVar3;
  int iVar4;
  double dVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b2c8;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar2 = (byte)param_1;
  if (param_2 == *(int *)((int)this + 0x1b8)) {
    if (*param_3 == param_3[1]) {
      iVar4 = _Mtx_lock((int)this + 0x36c,uVar3);
      if (iVar4 != 0) {
        std::_Throw_C_error(iVar4);
      }
      local_8 = 2;
      FUN_10006770(this_00,*(void **)((int)this + 0x2a8),*(int *)((int)this + 0x2ac));
      if ((int)param_1 < *(int *)((int)this + 0x2c0)) {
        puVar1 = (uint *)(*(int *)((int)this + 0x2b4) + (param_1 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (bVar2 & 0x1f));
      }
      local_8 = 3;
    }
    else {
      iVar4 = _Mtx_lock((int)this + 0x36c,uVar3);
      if (iVar4 != 0) {
        std::_Throw_C_error(iVar4);
      }
      local_8 = 4;
      if ((int)param_1 < *(int *)((int)this + 0x2c0)) {
        uVar3 = 1 << (bVar2 & 0x1f);
        if ((*(uint *)(*(int *)((int)this + 0x2b4) + (param_1 >> 5) * 4) & uVar3) != 0) {
          FUN_10006770(param_3,*(void **)((int)this + 0x2a8),*(int *)((int)this + 0x2ac));
          puVar1 = (uint *)(*(int *)((int)this + 0x2b4) + (param_1 >> 5) * 4);
          *puVar1 = *puVar1 & ~uVar3;
        }
      }
      local_8 = 5;
    }
  }
  else {
    dVar5 = 2.0;
    *(int *)((int)this + 0x1b8) = param_2;
    libm_sse2_pow_precise();
    param_2 = 0;
    *(uint *)((int)this + 0x208) = (int)dVar5 - 1;
    FUN_10005e50((void *)((int)this + 0x230),(int)dVar5,(void *)((int)this + 0x230),&param_2);
    *(undefined4 *)((int)this + 0x210) = *(undefined4 *)((int)this + 0x208);
    *(undefined4 *)((int)this + 0x224) = *(undefined4 *)((int)this + 0x220);
    *(undefined4 *)((int)this + 0x218) = *(undefined4 *)((int)this + 0x214);
    FUN_1001b650((int)this);
    iVar4 = _Mtx_lock((int)this + 0x36c,uVar3);
    if (iVar4 != 0) {
      std::_Throw_C_error(iVar4);
    }
    local_8 = 0;
    FUN_10006770(param_3,*(void **)((int)this + 0x2a8),*(int *)((int)this + 0x2ac));
    puVar1 = (uint *)(*(int *)((int)this + 0x2b4) + (param_1 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (bVar2 & 0x1f));
    local_8 = 1;
  }
  iVar4 = _Mtx_unlock((int)this + 0x36c);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  ExceptionList = local_10;
  return;
}



















void __fastcall FUN_1001c320(void *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 local_23c;
  undefined1 local_236;
  undefined1 local_235;
  void *local_234;
  undefined1 *puStack_230;
  undefined4 local_22c;
  void *local_228 [4];
  undefined4 local_218;
  uint local_214;
  char local_210 [512];
  char local_10 [8];
  uint local_8;
  
  local_22c = 0xffffffff;
  puStack_230 = &LAB_1002b2f8;
  local_234 = ExceptionList;
  local_8 = DAT_10034018 ^ (uint)local_228;
  ExceptionList = &local_234;
  local_236 = 8;
  local_235 = 0;
  cVar1 = FUN_10015430(param_1,0x41,0x5a,&local_236,1);
  if ((cVar1 != '\0') && (cVar1 = FUN_10015430(param_1,0x41,0x5b,&local_235,1), cVar1 != '\0')) {
    local_10[0] = '\0';
    local_10[1] = '\0';
    local_10[2] = '\0';
    local_10[3] = '\0';
    local_10[4] = '\0';
    local_10[5] = '\0';
    local_10[6] = '\0';
    local_10[7] = '\0';
    FUN_10027e10(local_10,"%hhu.%hhu");
    pcVar4 = local_10;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_100243b0((void *)((int)param_1 + 8),local_10,(int)pcVar4 - (int)(local_10 + 1));
    local_23c = 0;
    cVar1 = FUN_10015430(param_1,0x41,0,&local_23c,1);
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_10015430(param_1,0x41,1,(int)&local_23c + 1,1), cVar1 != '\0')) {
      uVar2 = 0;
      uVar5 = DAT_1003493c - DAT_10034938 >> 1;
      if (uVar5 != 0) {
        do {
          if ((short)local_23c == *(short *)(DAT_10034938 + uVar2 * 2)) goto LAB_1001c526;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar5);
      }
      memset(local_210,0,0x200);
      iVar3 = FUN_10027e10(local_210,"FPGA ID not matched, Device:0x%hx, Expect:");
      pcVar4 = local_210 + iVar3;
      uVar2 = 0;
      if (DAT_1003493c - DAT_10034938 >> 1 != 0) {
        do {
          iVar3 = FUN_10027e10(pcVar4," 0x%hx");
          pcVar4 = pcVar4 + iVar3;
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)(DAT_1003493c - DAT_10034938 >> 1));
      }
      pcVar4 = local_210;
      local_218 = 0;
      local_214 = 0xf;
      local_228[0] = (void *)((uint)local_228[0] & 0xffffff00);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_100243b0(local_228,local_210,(int)pcVar4 - (int)(local_210 + 1));
      local_22c = 0;
      FUN_10019700(local_228);
      if (0xf < local_214) {
        pvVar6 = local_228[0];
        if ((0xfff < local_214 + 1) &&
           (pvVar6 = *(void **)((int)local_228[0] + -4),
           0x1f < (uint)((int)local_228[0] + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_100284c9(pvVar6);
      }
    }
  }
LAB_1001c526:
  ExceptionList = local_234;
  __security_check_cookie(local_8 ^ (uint)local_228);
  return;
}













void __thiscall FUN_1001c550(void *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)this + 9) == '\0') {
    puVar1 = (uint *)(*(int *)((int)this + 0x18) + (param_1 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (param_1 & 0x1f);
    *(undefined1 *)((int)this + 0x50) = 1;
  }
  else {
    iVar2 = _Mtx_lock((int)this + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
    }
    puVar1 = (uint *)(*(int *)((int)this + 0x18) + (param_1 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
    local_8 = 0;
    iVar2 = _Mtx_unlock((int)this + 0x54);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
    }
    local_8 = 1;
    iVar2 = _Cnd_signal((int)this + 0x84);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}















void __fastcall FUN_1001c640(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 9) == '\0') {
    lVar4 = FUN_10022190((longlong *)(param_1 + 0x40));
    uVar3 = __aullrem((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),*(uint *)(param_1 + 4),0);
    puVar1 = (uint *)(*(int *)(param_1 + 0x18) + ((uint)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((uint)uVar3 & 0x1f);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    iVar2 = _Mtx_lock(param_1 + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
    }
    uVar3 = __aullrem(*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 4),0);
    puVar1 = (uint *)(*(int *)(param_1 + 0x18) + ((uint)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
    local_8 = 0;
    iVar2 = _Mtx_unlock(param_1 + 0x54);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
    }
    local_8 = 1;
    iVar2 = _Cnd_signal(param_1 + 0x84);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}
















void __fastcall FUN_1001c750(int param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 9) == '\0') {
    lVar3 = FUN_10022190((longlong *)(param_1 + 0x40));
    uVar4 = __aullrem((uint)(lVar3 + 1),(uint)((ulonglong)(lVar3 + 1) >> 0x20),
                      *(uint *)(param_1 + 4),0);
    puVar1 = (uint *)(*(int *)(param_1 + 0x18) + ((uint)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((uint)uVar4 & 0x1f));
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    iVar2 = _Mtx_lock(param_1 + 0x54,DAT_10034018 ^ (uint)&stack0xfffffffc);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
    }
    *(undefined1 *)(param_1 + 10) = 1;
    local_8 = 0;
    iVar2 = _Mtx_unlock(param_1 + 0x54);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
    }
    local_8 = 1;
    iVar2 = _Cnd_broadcast(param_1 + 0x84);
    if (iVar2 != 0) {
      std::_Throw_C_error(iVar2);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}












void __thiscall
FUN_1001c840(void *this,byte param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002abc0;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = _Mtx_lock((int)this + 0x80,local_14);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  local_8 = 0;
  iVar2 = libusb_control_transfer
                    (*(undefined4 *)this,0x40,0xbf,(uint)param_1 | (param_2 & 0xff) << 8,0,param_3,
                     param_4,0);
  if (iVar2 < 0) {
    pcVar3 = (char *)libusb_error_name(iVar2);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_100243b0(local_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    local_8._0_1_ = 1;
    FUN_10019700(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pvVar5 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar5);
    }
  }
  local_8 = 2;
  iVar2 = _Mtx_unlock((int)this + 0x80);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}














void __thiscall FUN_1001c990(void *this,int *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  undefined4 ****ppppuVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  int local_290;
  char *local_28c;
  int *local_288;
  uint local_284;
  undefined8 *local_278 [12];
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 local_234;
  int local_230 [3];
  undefined8 local_224;
  uint local_21c;
  undefined8 local_218;
  uint local_210;
  undefined8 local_20c;
  uint local_204;
  char *local_200;
  char *local_1fc;
  int *local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  undefined1 local_1ec;
  int local_1e8 [3];
  undefined8 local_1dc;
  uint local_1d4;
  undefined8 local_1d0;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  uint local_1bc;
  undefined4 *local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  int local_198 [6];
  undefined4 local_180;
  undefined4 uStack_17c;
  uint local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  uint local_16c;
  uint local_168 [2];
  undefined8 local_160;
  undefined4 local_158;
  int *local_154;
  int iStack_150;
  undefined4 local_14c;
  int local_148;
  char *local_144;
  int *local_140;
  uint local_13c;
  undefined4 local_138 [2];
  undefined4 *local_130 [12];
  uint local_100;
  undefined4 ***local_fc;
  undefined4 ***local_f8;
  uint local_f4;
  undefined4 *local_f0;
  uint local_ec;
  char *local_e8;
  char *local_e4;
  int *local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 *local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 ***local_a0;
  longlong local_9c;
  undefined8 local_94;
  uint local_8c;
  undefined4 ***local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  void *local_74 [2];
  undefined8 local_6c;
  undefined4 local_64;
  uint local_60;
  undefined4 ***local_5c [4];
  uint local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b3ee;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f4 = 0;
  iVar12 = *param_1;
  iVar3 = param_1[1] - iVar12 >> 0x1f;
  local_f0 = this;
  if ((param_1[1] - iVar12) / 0x18 + iVar3 == iVar3) {
LAB_1001d556:
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    local_e8 = (char *)(iVar12 + local_f4 * 0x18);
    local_e4 = local_e8;
    if (0xf < *(uint *)(local_e8 + 0x14)) {
      local_e4 = *(char **)local_e8;
    }
    local_e4 = local_e4 + *(int *)(local_e8 + 0x10);
    if (0xf < *(uint *)(local_e8 + 0x14)) {
      local_e8 = *(char **)local_e8;
    }
    local_e0 = &DAT_10034888;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = (undefined4 *)0x0;
    iStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    local_bc = local_bc & 0xffffff00;
    local_b8 = 0;
    uStack_b4 = 0;
    local_b0 = local_b0 & 0xffffff00;
    local_ac = 0;
    uStack_a8 = 0;
    local_a4 = local_a4 & 0xffffff00;
    local_8 = 0;
    cVar4 = FUN_10005320(local_e8,local_e4,&local_d8,&DAT_10034888,0,local_e8);
    if (cVar4 == '\0') {
      local_e0 = (int *)0x0;
    }
    local_1b0 = 0;
    local_1ac = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 0;
    local_198[0] = 0;
    local_198[1] = 0;
    local_198[2] = 0;
    local_198[3] = 0;
    local_198[4] = 0;
    local_198[5] = local_198[5] & 0xffffff00;
    local_180 = 0;
    uStack_17c = 0;
    local_178 = local_178 & 0xffffff00;
    local_174 = 0;
    uStack_170 = 0;
    local_16c = local_16c & 0xffffff00;
    local_23c = local_1a4;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    local_248 = 0;
    local_244 = 0;
    local_240 = 0;
    local_238 = 0;
    local_234 = 0;
    FUN_10007940(local_230,local_198);
    local_224 = CONCAT44(local_198[4],local_198[3]);
    local_218 = CONCAT44(uStack_17c,local_180);
    local_21c = local_198[5];
    local_20c = CONCAT44(uStack_170,local_174);
    local_210 = local_178;
    local_204 = local_16c;
    local_200 = local_e8;
    local_1fc = local_e4;
    local_8._0_1_ = 3;
    local_1f8 = local_e0;
    local_1f4 = local_dc;
    local_1f0 = local_d8;
    local_1ec = local_d4;
    FUN_10007940(local_1e8,(int *)&local_d0);
    local_1dc = CONCAT44(uStack_c0,uStack_c4);
    local_1d0 = CONCAT44(uStack_b4,local_b8);
    local_1d4 = local_bc;
    local_1c8 = local_b0;
    local_1c4 = local_ac;
    uStack_1c0 = uStack_a8;
    local_1bc = local_a4;
    local_8._0_1_ = 5;
    FUN_100074c0(&local_290,&local_248);
    local_8._0_1_ = 6;
    FUN_100074c0(&local_148,&local_200);
    local_8._0_1_ = 8;
    local_88 = (undefined4 ****)0x0;
LAB_1001cca8:
    local_8c = local_13c;
    while( true ) {
      uVar1 = local_160;
      if (local_140 != local_288) goto LAB_1001cde5;
      if (local_140 == (int *)0x0) break;
      if (((local_148 == local_290) && (local_144 == local_28c)) && (local_13c == local_284)) {
        uVar1 = *local_278[0];
        local_158 = *(undefined4 *)(local_278[0] + 1);
        local_154 = (int *)*local_130[0];
        iStack_150 = local_130[0][1];
        local_14c = local_130[0][2];
        piVar9 = local_154;
        iVar12 = iStack_150;
        if ((char)local_14c == '\0') {
          piVar9 = (int *)0x0;
          iVar12 = 0;
        }
        if ((char)local_158 == '\0') {
          local_160._0_4_ = (int *)0x0;
          local_160._4_4_ = 0;
        }
        else {
          local_160._0_4_ = (int *)uVar1;
          local_160._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        }
        uVar17 = iVar12 - (int)piVar9;
        if (uVar17 == local_160._4_4_ - (int)(int *)local_160) {
          while (uVar16 = uVar17 - 4, 3 < uVar17) {
            if (*piVar9 != *(int *)local_160) goto LAB_1001cd86;
            piVar9 = piVar9 + 1;
            local_160._0_4_ = (int *)local_160 + 1;
            uVar17 = uVar16;
          }
          if (uVar16 == 0xfffffffc) {
LAB_1001cdc9:
            bVar18 = true;
          }
          else {
LAB_1001cd86:
            if (((char)*piVar9 == (char)*(int *)local_160) &&
               ((uVar16 == 0xfffffffd ||
                ((*(char *)((int)piVar9 + 1) == *(char *)((int)(int *)local_160 + 1) &&
                 ((uVar16 == 0xfffffffe ||
                  ((*(char *)((int)piVar9 + 2) == *(char *)((int)(int *)local_160 + 2) &&
                   ((uVar16 == 0xffffffff ||
                    (*(char *)((int)piVar9 + 3) == *(char *)((int)(int *)local_160 + 3)))))))))))))
            goto LAB_1001cdc9;
            bVar18 = false;
          }
          local_160 = uVar1;
          if (bVar18) break;
        }
      }
LAB_1001cde5:
      local_160 = uVar1;
      local_88 = (undefined4 ***)((int)local_88 + 1);
      pcVar15 = (char *)local_130[0][1];
      if ((char *)*local_130[0] != pcVar15) goto LAB_1001ce37;
      if (pcVar15 != local_144) goto LAB_1001ce03;
      local_140 = (int *)0x0;
    }
    FUN_10023650((int *)local_130);
    FUN_10023650((int *)local_278);
    FUN_10023650(local_1e8);
    local_8._0_1_ = 2;
    FUN_10023650(local_230);
    if (2 < (int)local_88) {
      iVar12 = iStack_cc - (int)local_d0 >> 0x1f;
      puVar11 = &local_ac;
      if ((iStack_cc - (int)local_d0) / 0xc + iVar12 != iVar12) {
        puVar11 = local_d0;
      }
      if (*(char *)(puVar11 + 2) == '\0') {
        pvVar10 = (void *)0x0;
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)*puVar11;
        pvVar5 = (void *)puVar11[1];
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
      if (pvVar10 != pvVar5) {
        FUN_100243b0(local_5c,pvVar10,(int)pvVar5 - (int)pvVar10);
      }
      pcVar15 = (char *)local_d0[1];
      local_8 = CONCAT31(local_8._1_3_,9);
      if ((char *)*local_d0 == pcVar15) {
        if (pcVar15 == local_e4) {
          local_e0 = (int *)0x0;
        }
        else {
          cVar4 = FUN_10005320(pcVar15,local_e4,&local_d8,local_e0,local_dc | 0x60,local_e8);
          if (cVar4 == '\0') {
            pcVar15 = pcVar15 + 1;
            goto LAB_1001cf60;
          }
        }
      }
      else {
LAB_1001cf60:
        local_dc = local_dc | 0x100;
        cVar4 = FUN_10005320(pcVar15,local_e4,&local_d8,local_e0,local_dc,local_e8);
        if (cVar4 == '\0') {
          local_e0 = (int *)0x0;
        }
      }
      iVar12 = iStack_cc - (int)local_d0 >> 0x1f;
      puVar11 = &local_ac;
      if ((iStack_cc - (int)local_d0) / 0xc + iVar12 != iVar12) {
        puVar11 = local_d0;
      }
      if (*(char *)(puVar11 + 2) == '\0') {
        pvVar10 = (void *)0x0;
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)*puVar11;
        pvVar5 = (void *)puVar11[1];
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
      if (pvVar10 != pvVar5) {
        FUN_100243b0(local_44,pvVar10,(int)pvVar5 - (int)pvVar10);
      }
      pcVar15 = (char *)local_d0[1];
      local_8 = CONCAT31(local_8._1_3_,10);
      if ((char *)*local_d0 == pcVar15) {
        if (pcVar15 == local_e4) {
          local_e0 = (int *)0x0;
        }
        else {
          cVar4 = FUN_10005320(pcVar15,local_e4,&local_d8,local_e0,local_dc | 0x60,local_e8);
          if (cVar4 == '\0') {
            pcVar15 = pcVar15 + 1;
            goto LAB_1001d060;
          }
        }
      }
      else {
LAB_1001d060:
        local_dc = local_dc | 0x100;
        cVar4 = FUN_10005320(pcVar15,local_e4,&local_d8,local_e0,local_dc,local_e8);
        if (cVar4 == '\0') {
          local_e0 = (int *)0x0;
        }
      }
      iVar12 = iStack_cc - (int)local_d0 >> 0x1f;
      puVar11 = &local_ac;
      if ((iStack_cc - (int)local_d0) / 0xc + iVar12 != iVar12) {
        puVar11 = local_d0;
      }
      if (*(char *)(puVar11 + 2) == '\0') {
        pvVar10 = (void *)0x0;
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)*puVar11;
        pvVar5 = (void *)puVar11[1];
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      if (pvVar10 != pvVar5) {
        FUN_100243b0(local_2c,pvVar10,(int)pvVar5 - (int)pvVar10);
      }
      local_88 = local_5c;
      if (0xf < local_48) {
        local_88 = local_5c[0];
      }
      local_fc = local_5c[0];
      uVar16 = 0;
      local_8 = CONCAT31(local_8._1_3_,0xb);
      ppppuVar6 = (undefined4 ****)local_88;
      uVar17 = local_4c;
      while( true ) {
        uVar17 = uVar17 - 1;
        cVar4 = *(char *)((int)ppppuVar6 + uVar16);
        if ((((cVar4 != '0') && (cVar4 != 'x')) && (cVar4 != 'X')) || (local_4c <= uVar16)) break;
        uVar16 = uVar16 + 1;
        ppppuVar6 = (undefined4 ****)local_88;
      }
      local_9c = 0;
      local_9c._0_4_ = 0;
      uVar13 = (uint)local_9c;
      if (uVar16 < local_4c) {
        local_94 = local_94 & 0xffffffff;
        local_8c = 0;
        do {
          iVar12 = 0;
          bVar2 = *(byte *)((int)local_88 + uVar16);
          if ((byte)(bVar2 - 0x30) < 10) {
            iVar12 = bVar2 - 0x30;
          }
          else if ((byte)(bVar2 + 0xbf) < 6) {
            iVar12 = bVar2 - 0x37;
          }
          else if ((byte)(bVar2 + 0x9f) < 6) {
            iVar12 = bVar2 - 0x57;
          }
          uVar13 = iVar12 << ((char)uVar17 * '\x04' & 0x1fU);
          bVar18 = CARRY4(local_8c,uVar13);
          uVar13 = local_8c + uVar13;
          local_8c = uVar13;
          local_94 = CONCAT44(local_94._4_4_ + bVar18,(uint)local_94);
          uVar16 = uVar16 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar16 < local_4c);
      }
      local_a0 = local_44;
      if (0xf < local_30) {
        local_a0 = local_44[0];
      }
      local_f8 = local_44[0];
      uVar16 = 0;
      uVar17 = local_34;
      while( true ) {
        uVar17 = uVar17 - 1;
        cVar4 = *(char *)(uVar16 + (int)local_a0);
        if ((((cVar4 != '0') && (cVar4 != 'x')) && (cVar4 != 'X')) || (local_34 <= uVar16)) break;
        uVar16 = uVar16 + 1;
      }
      local_9c = 0;
      local_9c._0_4_ = 0;
      uVar14 = (uint)local_9c;
      if (uVar16 < local_34) {
        local_88 = (undefined4 ****)0x0;
        local_94._4_4_ = 0;
        ppppuVar6 = (undefined4 ****)local_a0;
        do {
          bVar2 = *(byte *)(uVar16 + (int)ppppuVar6);
          iVar12 = 0;
          if ((byte)(bVar2 - 0x30) < 10) {
            iVar12 = bVar2 - 0x30;
          }
          else if ((byte)(bVar2 + 0xbf) < 6) {
            iVar12 = bVar2 - 0x37;
          }
          else if ((byte)(bVar2 + 0x9f) < 6) {
            iVar12 = bVar2 - 0x57;
          }
          uVar14 = iVar12 << ((char)uVar17 * '\x04' & 0x1fU);
          bVar18 = CARRY4(local_94._4_4_,uVar14);
          uVar14 = local_94._4_4_ + uVar14;
          local_94._4_4_ = uVar14;
          local_88 = (undefined4 ****)((int)local_88 + (uint)bVar18);
          uVar16 = uVar16 + 1;
          uVar17 = uVar17 - 1;
          ppppuVar6 = (undefined4 ****)local_a0;
        } while (uVar16 < local_34);
      }
      local_8c = uVar14 & 0xffff;
      ppppuVar6 = local_2c;
      if (0xf < local_18) {
        ppppuVar6 = (undefined4 ****)local_2c[0];
      }
      local_a0 = local_2c[0];
      local_9c = ZEXT48(ppppuVar6) << 0x20;
      uVar16 = 0;
      uVar17 = local_1c;
      while( true ) {
        uVar17 = uVar17 - 1;
        cVar4 = *(char *)(uVar16 + (int)ppppuVar6);
        if ((((cVar4 != '0') && (cVar4 != 'x')) && (cVar4 != 'X')) || (local_1c <= uVar16)) break;
        uVar16 = uVar16 + 1;
      }
      local_94 = 0;
      local_94._0_4_ = 0;
      local_100 = (uint)local_94;
      if (uVar16 < local_1c) {
        local_88 = (undefined4 ****)0x0;
        local_94 = 0;
        do {
          bVar2 = *(byte *)(uVar16 + (int)ppppuVar6);
          iVar12 = 0;
          if ((byte)(bVar2 - 0x30) < 10) {
            iVar12 = bVar2 - 0x30;
          }
          else if ((byte)(bVar2 + 0xbf) < 6) {
            iVar12 = bVar2 - 0x37;
          }
          else if ((byte)(bVar2 + 0x9f) < 6) {
            iVar12 = bVar2 - 0x57;
          }
          local_100 = iVar12 << ((char)uVar17 * '\x04' & 0x1fU);
          bVar18 = CARRY4(local_94._4_4_,local_100);
          local_100 = local_94._4_4_ + local_100;
          local_94 = (ulonglong)local_100 << 0x20;
          local_88 = (undefined4 ****)((int)local_88 + (uint)bVar18);
          uVar16 = uVar16 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar16 < local_1c);
      }
      local_ec._0_2_ = (short)uVar13;
      local_100 = local_100 & 0xffff;
      local_ec = uVar13 & 0xffff;
      if (((short)local_ec == 0) && ((short)uVar14 == 0)) {
        local_168[1] = 0;
        local_168[0] = local_100;
        puVar7 = FUN_10006530(&local_6c,local_168);
        local_84 = *(undefined4 *)puVar7;
        uStack_80 = *(undefined4 *)((int)puVar7 + 4);
        uStack_7c = *(undefined4 *)(puVar7 + 1);
        uStack_78 = *(undefined4 *)((int)puVar7 + 0xc);
        _Thrd_sleep(&local_84);
      }
      else {
        puVar11 = local_f0 + 0x20;
        local_1b8 = puVar11;
        iVar12 = _Mtx_lock(puVar11);
        if (iVar12 != 0) {
          std::_Throw_C_error(iVar12);
        }
        local_1b4 = 1;
        local_8._0_1_ = 0xc;
        iVar12 = libusb_control_transfer
                           (*local_f0,0x40,0xbf,local_ec & 0xff | (uVar14 & 0xff) << 8,0,&local_100,
                            1,0);
        if (iVar12 < 0) {
          pcVar8 = (char *)libusb_error_name(iVar12);
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
          pcVar15 = pcVar8;
          do {
            cVar4 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar4 != '\0');
          FUN_100243b0(local_74,pcVar8,(int)pcVar15 - (int)(pcVar8 + 1));
          local_8._0_1_ = 0xe;
          FUN_10019700(local_74);
          local_8._0_1_ = 0xc;
          if (0xf < local_60) {
            pvVar10 = local_74[0];
            if ((0xfff < local_60 + 1) &&
               (pvVar10 = *(void **)((int)local_74[0] + -4),
               0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10)))) goto LAB_1001d5df;
            FUN_100284c9(pvVar10);
          }
          local_8 = CONCAT31(local_8._1_3_,0xf);
          iVar12 = _Mtx_unlock(puVar11);
          if (iVar12 != 0) {
            std::_Throw_C_error(iVar12);
          }
          if (0xf < local_18) {
            ppppuVar6 = (undefined4 ****)local_a0;
            if ((0xfff < local_18 + 1) &&
               (ppppuVar6 = (undefined4 ****)local_a0[-1],
               0x1f < (uint)((int)local_a0 + (-4 - (int)ppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(ppppuVar6);
          }
          if (0xf < local_30) {
            ppppuVar6 = (undefined4 ****)local_f8;
            if ((0xfff < local_30 + 1) &&
               (ppppuVar6 = (undefined4 ****)local_f8[-1],
               0x1f < (uint)((int)local_f8 + (-4 - (int)ppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(ppppuVar6);
          }
          if (0xf < local_48) {
            ppppuVar6 = (undefined4 ****)local_fc;
            if ((0xfff < local_48 + 1) &&
               (ppppuVar6 = (undefined4 ****)local_fc[-1],
               0x1f < (uint)((int)local_fc + (-4 - (int)ppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(ppppuVar6);
          }
          FUN_10023650(local_198);
          FUN_10023650((int *)&local_d0);
          goto LAB_1001d556;
        }
        local_8 = CONCAT31(local_8._1_3_,0xd);
        iVar12 = _Mtx_unlock(puVar11);
        if (iVar12 != 0) {
          std::_Throw_C_error(iVar12);
        }
      }
      local_8._0_1_ = 10;
      if (0xf < local_18) {
        ppppuVar6 = (undefined4 ****)local_a0;
        if ((0xfff < local_18 + 1) &&
           (ppppuVar6 = (undefined4 ****)local_a0[-1],
           0x1f < (uint)((int)local_a0 + (-4 - (int)ppppuVar6)))) goto LAB_1001d5df;
        FUN_100284c9(ppppuVar6);
      }
      local_8._0_1_ = 9;
      if (0xf < local_30) {
        ppppuVar6 = (undefined4 ****)local_f8;
        if ((0xfff < local_30 + 1) &&
           (ppppuVar6 = (undefined4 ****)local_f8[-1],
           0x1f < (uint)((int)local_f8 + (-4 - (int)ppppuVar6)))) goto LAB_1001d5df;
        FUN_100284c9(ppppuVar6);
      }
      local_8._0_1_ = 2;
      if (0xf < local_48) {
        ppppuVar6 = (undefined4 ****)local_fc;
        if ((0xfff < local_48 + 1) &&
           (ppppuVar6 = (undefined4 ****)local_fc[-1],
           0x1f < (uint)((int)local_fc + (-4 - (int)ppppuVar6)))) {
LAB_1001d5df:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_100284c9(ppppuVar6);
      }
    }
    FUN_10023650(local_198);
    local_8 = 0xffffffff;
    FUN_10023650((int *)&local_d0);
    local_f4 = local_f4 + 1;
    iVar12 = *param_1;
    if ((uint)((param_1[1] - iVar12) / 0x18) <= local_f4) goto LAB_1001d556;
  } while( true );
LAB_1001ce03:
  cVar4 = FUN_10005320(pcVar15,local_144,local_138,local_140,local_13c | 0x60,local_148);
  if (cVar4 == '\0') {
    pcVar15 = pcVar15 + 1;
LAB_1001ce37:
    local_13c = local_13c | 0x100;
    cVar4 = FUN_10005320(pcVar15,local_144,local_138,local_140,local_13c,local_148);
    if (cVar4 == '\0') {
      local_140 = (int *)0x0;
    }
  }
  goto LAB_1001cca8;
}















void __thiscall FUN_1001d6e0(void *this,char param_1)

{
  size_t _NewSize;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  
  if ((*(int *)(*(int *)((int)this + 4) + 4) != 6) ||
     ((*(byte *)(*(int *)((int)this + 4) + 8) & 4) != 0)) {
    puVar1 = (undefined4 *)FUN_10028499(0x20);
    puVar1[1] = 6;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = std::_Node_str<char>::vftable;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = *(undefined4 *)((int)this + 4);
    iVar2 = *(int *)((int)this + 4);
    if (*(int *)(iVar2 + 0xc) != 0) {
      puVar1[3] = *(int *)(iVar2 + 0xc);
      *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar1;
      iVar2 = *(int *)((int)this + 4);
    }
    *(undefined4 **)(iVar2 + 0xc) = puVar1;
    *(undefined4 **)((int)this + 4) = puVar1;
  }
  if ((*(uint *)((int)this + 8) & 0x100) == 0) {
    if ((*(uint *)((int)this + 8) & 0x800) != 0) {
      param_1 = FUN_100259e0(*(undefined4 **)((int)this + 0xc));
    }
  }
  else {
    param_1 = std::ctype<char>::tolower(*(ctype<char> **)(*(int *)((int)this + 0xc) + 4),param_1);
  }
  iVar2 = *(int *)((int)this + 4);
  if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar2 + 0x18)) {
    _NewSize = *(uint *)(iVar2 + 0x18) + 0x10;
    pvVar3 = realloc(*(void **)(iVar2 + 0x1c),_NewSize);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    *(void **)(iVar2 + 0x1c) = pvVar3;
    *(size_t *)(iVar2 + 0x14) = _NewSize;
  }
  *(char *)(*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x18)) = param_1;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
  return;
}

















void __thiscall FUN_1001d7e0(void *this,uint param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  
  if ((*(uint *)((int)this + 8) & 0x100) != 0) {
    bVar2 = std::ctype<char>::tolower
                      (*(ctype<char> **)(*(int *)((int)this + 0xc) + 4),(char)param_1);
    param_1 = (uint)bVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  puVar3 = *(undefined4 **)(iVar1 + 0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_10028499(0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined4 **)(iVar1 + 0x18) = puVar3;
  }
  pbVar4 = (byte *)((int)puVar3 + ((param_1 & 0xff) >> 3));
  *pbVar4 = *pbVar4 | (byte)(1 << (param_1 & 7));
  return;
}
















void __fastcall FUN_1001d850(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10028499(0x2c);
  puVar1[4] = 0;
  puVar1[1] = 7;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = std::_Node_class<>::vftable;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined2 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[4] = *(undefined4 *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = *(int *)(iVar2 + 0xc);
    *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10) = puVar1;
    iVar2 = *(int *)(param_1 + 4);
  }
  *(undefined4 **)(iVar2 + 0xc) = puVar1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  return;
}














void __thiscall FUN_1001d8e0(void *this,void *param_1,void *param_2)

{
  int iVar1;
  char *pcVar2;
  byte ***pppbVar3;
  undefined1 uVar4;
  uint uVar5;
  byte ****ppppbVar6;
  uint uVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  uint local_7c;
  char *local_74;
  int local_70;
  int local_6c;
  char local_65;
  undefined4 *local_64;
  undefined1 local_5d;
  byte ***local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  byte ***local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint uStack_30;
  byte ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_1002b462;
  local_10 = ExceptionList;
  uVar5 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)this + 4);
  local_64 = *(undefined4 **)((int)this + 0xc);
  local_8 = 0;
  uStack_7 = 0;
  puVar10 = (undefined4 *)0x1;
  local_1c = 0xf00000000;
  local_2c = (byte ***)((uint)local_2c & 0xffffff00);
  local_14 = uVar5;
  if (param_1 != param_2) {
    local_74 = (char *)0x0;
    local_70 = 0;
    local_6c = 0;
    FUN_10005080(&local_74,param_1,(int)param_2);
    pcVar2 = local_74;
    iVar11 = local_70 - (int)local_74;
    local_8 = 1;
    std::ctype<char>::tolower((ctype<char> *)local_64[1],local_74,local_74 + iVar11);
    (**(code **)(*(int *)*local_64 + 0x10))(&local_44,pcVar2,pcVar2 + iVar11,uVar5);
    puVar10 = (undefined4 *)0x3;
    FUN_10009740((int *)&local_2c);
    local_2c = local_44;
    local_44 = (byte ***)((uint)local_44 & 0xffffff00);
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    local_1c = CONCAT44(uStack_30,local_34);
    local_34 = 0;
    uStack_30 = 0xf;
    FUN_10009a90((int *)&local_74);
  }
  local_7c = 0;
  do {
    local_5d = (undefined1)local_7c;
    local_64 = *(undefined4 **)((int)this + 0xc);
    local_8 = 2;
    local_4c = 0xf00000000;
    local_5c = (byte ***)((uint)local_5c & 0xffffff00);
    local_74 = (char *)0x0;
    local_70 = 0;
    local_6c = 0;
    FUN_10005080(&local_74,&local_5d,(int)&local_5c);
    pcVar2 = local_74;
    iVar11 = local_70 - (int)local_74;
    local_8 = 3;
    std::ctype<char>::tolower((ctype<char> *)local_64[1],local_74,local_74 + iVar11);
    (**(code **)(*(int *)*local_64 + 0x10))(&local_44,pcVar2,pcVar2 + iVar11);
    local_5c = local_44;
    local_64 = (undefined4 *)((uint)puVar10 | 0xc);
    local_44 = (byte ***)((uint)local_44 & 0xffffff00);
    local_8 = 2;
    uVar4 = local_8;
    local_8 = 2;
    uStack_58 = uStack_40;
    uStack_54 = uStack_3c;
    uStack_50 = uStack_38;
    local_4c._0_4_ = local_34;
    local_4c._4_4_ = uStack_30;
    local_34 = 0;
    uStack_30 = 0xf;
    if (pcVar2 != (char *)0x0) {
      pcVar12 = pcVar2;
      if ((0xfff < (uint)(local_6c - (int)pcVar2)) &&
         (pcVar12 = *(char **)(pcVar2 + -4), (char *)0x1f < pcVar2 + (-4 - (int)pcVar12)))
      goto LAB_1001dbd3;
      FUN_100284c9(pcVar12);
      local_74 = (char *)0x0;
      local_70 = 0;
      local_6c = 0;
    }
    uVar5 = local_4c._4_4_;
    pppbVar3 = local_5c;
    ppppbVar8 = &local_2c;
    if (0xf < local_1c._4_4_) {
      ppppbVar8 = (byte ****)local_2c;
    }
    ppppbVar6 = &local_5c;
    if (0xf < local_4c._4_4_) {
      ppppbVar6 = (byte ****)local_5c;
    }
    uVar7 = FUN_10006650((byte *)ppppbVar6,(uint)local_4c,(byte *)ppppbVar8,(uint)local_1c);
    local_64 = (undefined4 *)((uint)local_64 & 0xfffffffb);
    local_65 = (char)uVar7;
    local_8 = 0;
    if (0xf < uVar5) {
      ppppbVar8 = (byte ****)pppbVar3;
      if ((0xfff < uVar5 + 1) &&
         (ppppbVar8 = (byte ****)pppbVar3[-1], uVar4 = local_8,
         (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar8)))) goto LAB_1001dbd3;
      FUN_100284c9(ppppbVar8);
    }
    if (local_65 != '\0') {
      puVar10 = *(undefined4 **)(iVar1 + 0x18);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)FUN_10028499(0x20);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        *(undefined4 **)(iVar1 + 0x18) = puVar10;
      }
      pbVar9 = (byte *)((local_7c >> 3) + (int)puVar10);
      *pbVar9 = *pbVar9 | (byte)(1 << (local_7c & 7));
    }
    local_7c = local_7c + 1;
    puVar10 = local_64;
  } while (local_7c < 0x100);
  if (0xf < local_1c._4_4_) {
    ppppbVar8 = (byte ****)local_2c;
    if ((0xfff < local_1c._4_4_ + 1) &&
       (ppppbVar8 = (byte ****)local_2c[-1], uVar4 = local_8,
       (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)ppppbVar8)))) {
LAB_1001dbd3:
      local_8 = uVar4;
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(ppppbVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
















void __thiscall FUN_1001dc00(void *this,ushort param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  iVar1 = *(int *)((int)this + 4);
  do {
    if (param_1 == 0xffff) {
      if (((char)uVar4 == '_') ||
         ((*(ushort *)(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + 0xc) + (uVar4 & 0xff) * 2)
          & 0x107) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = (*(ushort *)
                (*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + 0xc) + (uVar4 & 0xff) * 2) &
              param_1) != 0;
    }
    if (bVar5 != (bool)param_2) {
      puVar2 = *(undefined4 **)(iVar1 + 0x18);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_10028499(0x20);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        *(undefined4 **)(iVar1 + 0x18) = puVar2;
      }
      pbVar3 = (byte *)((uVar4 >> 3) + (int)puVar2);
      *pbVar3 = *pbVar3 | (byte)(1 << (uVar4 & 7));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  return;
}
















void __thiscall FUN_1001dcb0(void *this,byte param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  size_t *psVar5;
  void *pvVar6;
  uint *puVar7;
  size_t sVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  
  if ((*(uint *)((int)this + 8) & 0x100) == 0) {
    uVar11 = (uint)param_1;
    uVar9 = (uint)param_2;
  }
  else {
    cVar2 = std::ctype<char>::tolower(*(ctype<char> **)(*(int *)((int)this + 0xc) + 4),param_1);
    uVar11 = (uint)cVar2;
    cVar2 = std::ctype<char>::tolower(*(ctype<char> **)(*(int *)((int)this + 0xc) + 4),param_2);
    uVar9 = (uint)cVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (uVar11 <= uVar9) {
    while (uVar9 < *(uint *)((int)this + 0x10)) {
      puVar3 = *(undefined4 **)(iVar1 + 0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_10028499(0x20);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(undefined4 **)(iVar1 + 0x18) = puVar3;
      }
      uVar4 = uVar11 & 7;
      pbVar10 = (byte *)((uVar11 >> 3) + (int)puVar3);
      uVar11 = uVar11 + 1;
      *pbVar10 = *pbVar10 | (byte)(1 << uVar4);
      if (uVar9 < uVar11) {
        return;
      }
    }
    if (uVar9 < uVar11) {
      return;
    }
    if (uVar9 - uVar11 < *(uint *)((int)this + 0x14)) {
      if (uVar9 < uVar11) {
        return;
      }
      do {
        cVar2 = (char)uVar11;
        if ((*(uint *)((int)this + 8) & 0x100) != 0) {
          cVar2 = std::ctype<char>::tolower(*(ctype<char> **)(*(int *)((int)this + 0xc) + 4),cVar2);
        }
        iVar1 = *(int *)((int)this + 4);
        psVar5 = *(size_t **)(iVar1 + 0x1c);
        if (psVar5 == (size_t *)0x0) {
          psVar5 = (size_t *)FUN_10028499(0xc);
          *psVar5 = 0;
          psVar5[1] = 0;
          psVar5[2] = 0;
          *(size_t **)(iVar1 + 0x1c) = psVar5;
        }
        if (*psVar5 <= psVar5[1]) {
          sVar8 = psVar5[1] + 0x10;
          pvVar6 = realloc((void *)psVar5[2],sVar8);
          if (pvVar6 == (void *)0x0) goto LAB_1001de96;
          psVar5[2] = (size_t)pvVar6;
          *psVar5 = sVar8;
        }
        uVar11 = uVar11 + 1;
        *(char *)(psVar5[2] + psVar5[1]) = cVar2;
        psVar5[1] = psVar5[1] + 1;
        if (uVar9 < uVar11) {
          return;
        }
      } while( true );
    }
    puVar7 = *(uint **)(iVar1 + 0x20);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)FUN_10028499(0xc);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(uint **)(iVar1 + 0x20) = puVar7;
    }
    if (*puVar7 <= puVar7[1]) {
      sVar8 = puVar7[1] + 0x10;
      pvVar6 = realloc((void *)puVar7[2],sVar8);
      if (pvVar6 == (void *)0x0) goto LAB_1001de96;
      puVar7[2] = (uint)pvVar6;
      *puVar7 = sVar8;
    }
    *(char *)(puVar7[2] + puVar7[1]) = (char)uVar11;
    puVar7[1] = puVar7[1] + 1;
    puVar7 = *(uint **)(iVar1 + 0x20);
    if (*puVar7 <= puVar7[1]) {
      sVar8 = puVar7[1] + 0x10;
      pvVar6 = realloc((void *)puVar7[2],sVar8);
      if (pvVar6 == (void *)0x0) {
LAB_1001de96:
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      puVar7[2] = (uint)pvVar6;
      *puVar7 = sVar8;
    }
    *(char *)(puVar7[2] + puVar7[1]) = (char)uVar9;
    puVar7[1] = puVar7[1] + 1;
  }
  return;
}











void __thiscall FUN_1001dea0(void *this,int param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)((int)this + 4);
  if ((*(int *)(iVar8 + 4) == 6) && (*(int *)(iVar8 + 0x18) != 1)) {
    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + -1;
    FUN_1001d6e0(this,*(char *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x1c)));
    iVar8 = *(int *)((int)this + 4);
  }
  if ((*(int *)(iVar8 + 4) == 9) || (*(int *)(iVar8 + 4) == 0xe)) {
    iVar8 = *(int *)(iVar8 + 0x14);
  }
  if ((param_1 == 0) && (param_2 == 1)) {
    puVar2 = (undefined4 *)FUN_10028499(0x14);
    puVar2[1] = 0x11;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = std::_Node_endif::vftable;
    puVar3 = (undefined4 *)FUN_10028499(0x1c);
    puVar3[1] = 0x10;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = std::_Node_if::vftable;
    puVar3[5] = puVar2;
    puVar3[6] = 0;
    puVar4 = (undefined4 *)FUN_10028499(0x1c);
    puVar4[1] = 0x10;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    *puVar4 = std::_Node_if::vftable;
    puVar4[5] = puVar2;
    puVar4[6] = 0;
    puVar5 = (undefined4 *)FUN_10028499(0x14);
    *puVar5 = std::_Node_base::vftable;
    puVar5[1] = 8;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar6 = (undefined4 *)FUN_10028499(0x18);
    puVar6[1] = 9;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = std::_Node_end_group::vftable;
    puVar6[5] = puVar5;
    puVar4[3] = puVar5;
    puVar5[4] = puVar4;
    puVar5[3] = puVar6;
    puVar6[4] = puVar5;
    puVar6[3] = puVar2;
    puVar3[6] = puVar4;
    puVar2[4] = *(undefined4 *)((int)this + 4);
    iVar7 = *(int *)((int)this + 4);
    if (*(int *)(iVar7 + 0xc) != 0) {
      puVar2[3] = *(int *)(iVar7 + 0xc);
      *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar2;
      iVar7 = *(int *)((int)this + 4);
    }
    *(undefined4 **)(iVar7 + 0xc) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)(*(int *)(iVar8 + 0x10) + 0xc) = puVar3;
    puVar3[4] = *(undefined4 *)(iVar8 + 0x10);
    *(undefined4 **)(iVar8 + 0x10) = puVar3;
    puVar3[3] = iVar8;
    if (param_3 == 0) {
      iVar7 = puVar4[3];
      uVar1 = *(undefined4 *)(iVar8 + 0x10);
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)(iVar7 + 0x10) = uVar1;
      uVar1 = puVar3[3];
      puVar3[3] = puVar4[3];
      puVar4[3] = uVar1;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_10028499(0x18);
    puVar2[1] = 0x13;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = std::_Node_end_rep::vftable;
    puVar2[5] = 0;
    puVar3 = (undefined4 *)FUN_10028499(0x28);
    iVar7 = *(int *)(*(int *)this + 0x18);
    *(int *)(*(int *)this + 0x18) = iVar7 + 1;
    puVar3[5] = param_1;
    puVar3[2] = (uint)param_3 * 2;
    puVar3[1] = 0x12;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = std::_Node_rep::vftable;
    puVar3[6] = param_2;
    puVar3[7] = puVar2;
    puVar3[8] = iVar7;
    puVar3[9] = 0xffffffff;
    puVar2[5] = puVar3;
    puVar2[4] = *(undefined4 *)((int)this + 4);
    iVar7 = *(int *)((int)this + 4);
    if (*(int *)(iVar7 + 0xc) != 0) {
      puVar2[3] = *(int *)(iVar7 + 0xc);
      *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar2;
      iVar7 = *(int *)((int)this + 4);
    }
    *(undefined4 **)(iVar7 + 0xc) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)(*(int *)(iVar8 + 0x10) + 0xc) = puVar3;
    puVar3[4] = *(undefined4 *)(iVar8 + 0x10);
    *(undefined4 **)(iVar8 + 0x10) = puVar3;
    puVar3[3] = iVar8;
  }
  return;
}










void __cdecl FUN_1001e160(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  _WIN32_FIND_DATAW local_254;
  uint local_4;
  
  local_4 = DAT_10034018 ^ (uint)&local_254;
  this = (void *)*param_1;
  DVar4 = FUN_100283be(*(HANDLE *)((int)this + 0x38),&local_254);
  if (DVar4 == 0) {
    FUN_10022f90(this,&local_254.dwFileAttributes);
  }
  else if (DVar4 == 0x12) {
    *param_1 = 0;
    piVar2 = (int *)param_1[1];
    param_1[1] = 0;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar3 = piVar2[1] + -1;
      piVar2[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)*piVar2)();
        LOCK();
        piVar1 = piVar2 + 2;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_254);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_254);
  return;
}













undefined4 __fastcall FUN_1001e210(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bStack_4;
  undefined1 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  iVar6 = param_1[0x13];
  do {
    if ((iVar6 == -1) || (uVar4 = uVar5, iVar6 == 0x7c)) goto LAB_1001e48a;
    if (iVar6 == 0x29) {
      if (param_1[4] != 0) {
LAB_1001e48a:
        return CONCAT31((int3)((uint)iVar6 >> 8),uVar4);
      }
      if ((param_1[0x14] & 0x10000000U) == 0) {
LAB_1001e49a:
                    /* WARNING: Subroutine does not return */
        FUN_10021790(5);
      }
LAB_1001e371:
      if (iVar6 == 0x7d) {
        if ((param_1[0x14] & 0x10000000U) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10021790(6);
        }
      }
      else if ((iVar6 == 0x5d) && ((param_1[0x14] & 0x10000000U) == 0)) {
LAB_1001e4a3:
                    /* WARNING: Subroutine does not return */
        FUN_10021790(4);
      }
      FUN_1001d6e0(param_1 + 9,(char)param_1[0x12]);
LAB_1001e3a4:
      FUN_10022c60(param_1);
LAB_1001e3ab:
      iVar3 = param_1[0x13];
      iVar6 = 0;
      iVar7 = -1;
      if (iVar3 != 0x2a) {
        if (iVar3 == 0x2b) {
          iVar6 = 1;
        }
        else if (iVar3 == 0x3f) {
          iVar7 = 1;
        }
        else {
          if (iVar3 != 0x7b) goto LAB_1001e47c;
          FUN_10022c60(param_1);
          iVar6 = FUN_1001faf0(param_1,10,0x7fffffff);
          if (iVar6 == 0x7fffffff) goto LAB_1001e4b5;
          iVar3 = param_1[0x13];
          iVar6 = param_1[0x11];
          iVar8 = iVar6;
          if (iVar3 == 0x2c) {
            FUN_10022c60(param_1);
            if (param_1[0x13] != 0x7d) {
              bVar1 = FUN_1001f5c0(param_1);
              if (!bVar1) goto LAB_1001e4b5;
              iVar3 = param_1[0x13];
              iVar8 = param_1[0x11];
              goto LAB_1001e42c;
            }
          }
          else {
LAB_1001e42c:
            iVar7 = iVar8;
            if (iVar3 != 0x7d) goto LAB_1001e4b5;
          }
          if ((iVar7 != -1) && (iVar7 < iVar6)) {
LAB_1001e4b5:
                    /* WARNING: Subroutine does not return */
            FUN_10021790(7);
          }
        }
      }
      *(uint *)(param_1[10] + 8) = *(uint *)(param_1[10] + 8) | 4;
      FUN_10022c60(param_1);
      if (((param_1[0x14] & 0x400U) == 0) || (param_1[0x13] != 0x3f)) {
        bStack_4 = 1;
      }
      else {
        bStack_4 = 0;
        FUN_10022c60(param_1);
      }
      FUN_1001dea0(param_1 + 9,iVar6,iVar7,bStack_4);
    }
    else {
      if (iVar6 == 0x2e) {
        FUN_10022bf0(param_1 + 9,5);
        goto LAB_1001e3a4;
      }
      if (iVar6 != 0x5c) {
        if (iVar6 == 0x5b) {
          FUN_10022c60(param_1);
          FUN_1001ee90(param_1);
          if (param_1[0x13] != 0x5d) goto LAB_1001e4a3;
          goto LAB_1001e3a4;
        }
        if (iVar6 != 0x28) {
          if (iVar6 == 0x5e) {
            FUN_10022bf0(param_1 + 9,2);
            FUN_10022c60(param_1);
          }
          else {
            if (iVar6 != 0x24) {
              if ((((iVar6 == 0x2a) || (iVar6 == 0x2b)) || (iVar6 == 0x3f)) || (iVar6 == 0x7b)) {
                    /* WARNING: Subroutine does not return */
                FUN_10021790(10);
              }
              goto LAB_1001e371;
            }
            FUN_10022bf0(param_1 + 9,3);
            FUN_10022c60(param_1);
          }
          goto LAB_1001e47c;
        }
        FUN_10022c60(param_1);
        uVar2 = FUN_10023a10(param_1);
        if (param_1[0x13] != 0x29) goto LAB_1001e49a;
        FUN_10022c60(param_1);
        if ((char)uVar2 == '\0') goto LAB_1001e47c;
        goto LAB_1001e3ab;
      }
      FUN_10022c60(param_1);
      if ((*(byte *)(param_1 + 0x14) & 0x80) == 0) {
LAB_1001e2b6:
        FUN_1001e4c0(param_1);
        goto LAB_1001e3ab;
      }
      if ((char)param_1[0x12] == 'b') {
        FUN_10022bf0(param_1 + 9,4);
        FUN_10022c60(param_1);
      }
      else {
        if ((char)param_1[0x12] != 'B') goto LAB_1001e2b6;
        FUN_10022bf0(param_1 + 9,4);
        *(uint *)(param_1[10] + 8) = *(uint *)(param_1[10] + 8) ^ 1;
        FUN_10022c60(param_1);
      }
    }
LAB_1001e47c:
    iVar6 = param_1[0x13];
    uVar5 = 1;
    uVar4 = 1;
  } while( true );
}











void __fastcall FUN_1001e4c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (((param_1[0x14] & 0x100U) == 0) ||
     (iVar2 = FUN_1001faf0(param_1,10,0x7fffffff), iVar2 == 0x7fffffff)) {
    uVar4 = FUN_1001f050(param_1);
    if ((char)uVar4 != '\0') {
      FUN_1001d6e0(param_1 + 9,(char)param_1[0x11]);
      return;
    }
    if (((param_1[0x14] & 0x20000U) != 0) &&
       (uVar4 = FUN_1001efd0(param_1,'\x01'), (char)uVar4 != '\0')) {
      return;
    }
  }
  else {
    uVar1 = param_1[0x11];
    if (uVar1 != 0) {
      if (((((param_1[0x14] & 0x200U) == 0) || (uVar1 < 10)) && (uVar1 <= (uint)param_1[3])) &&
         ((uVar1 < (uint)param_1[8] &&
          ((*(uint *)(param_1[5] + (uVar1 >> 5) * 4) & 1 << ((byte)uVar1 & 0x1f)) != 0)))) {
        puVar3 = (undefined4 *)FUN_10028499(0x18);
        puVar3[4] = 0;
        puVar3[1] = 0xf;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = std::_Node_back::vftable;
        puVar3[5] = uVar1;
        puVar3[4] = param_1[10];
        iVar2 = param_1[10];
        if (*(int *)(iVar2 + 0xc) != 0) {
          puVar3[3] = *(int *)(iVar2 + 0xc);
          *(undefined4 **)(*(int *)(param_1[10] + 0xc) + 0x10) = puVar3;
          iVar2 = param_1[10];
        }
        *(undefined4 **)(iVar2 + 0xc) = puVar3;
        param_1[10] = (int)puVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10021790(3);
    }
    if ((param_1[0x14] & 0x100000U) != 0) {
      FUN_1001d6e0(param_1 + 9,'\0');
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10021790(2);
}












void __fastcall FUN_1001e600(undefined4 *param_1)

{
  void *_Src;
  void *pvVar1;
  
  _Src = (void *)*param_1;
  memcpy(param_1,_Src,param_1[4] + 1);
  pvVar1 = _Src;
  if ((0xfff < param_1[5] + 1) &&
     (pvVar1 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar1);
  param_1[5] = 0xf;
  return;
}













uint __fastcall FUN_1001e650(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 4);
  if ((((uVar1 != 0x14) && (uVar1 != 8)) && (uVar1 != 0xd)) &&
     ((uVar1 != 2 ||
      (((uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 4), uVar1 != 0x14 &&
        (uVar1 != 8)) && (uVar1 != 0xd)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}















undefined4 * __thiscall FUN_1001e690(void *this,byte param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_10028499(0x18);
  local_8 = 0;
  puVar1[1] = param_1 + 10;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = std::_Node_assert::vftable;
  puVar1[5] = 0;
  puVar2 = (undefined4 *)FUN_10028499(0x14);
  *puVar2 = std::_Node_base::vftable;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar1[4] = *(undefined4 *)((int)this + 4);
  iVar3 = *(int *)((int)this + 4);
  if (*(int *)(iVar3 + 0xc) != 0) {
    puVar1[3] = *(int *)(iVar3 + 0xc);
    *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar1;
    iVar3 = *(int *)((int)this + 4);
  }
  *(undefined4 **)(iVar3 + 0xc) = puVar1;
  puVar1[5] = puVar2;
  puVar2[4] = puVar1;
  *(undefined4 **)((int)this + 4) = puVar2;
  ExceptionList = local_10;
  return puVar1;
}












undefined4 * __thiscall FUN_1001e780(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10028499(0x18);
  puVar1[4] = 0;
  puVar1[1] = 0xd;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = std::_Node_capture::vftable;
  puVar1[5] = param_1;
  puVar1[4] = *(undefined4 *)((int)this + 4);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = *(int *)(iVar2 + 0xc);
    *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar1;
    iVar2 = *(int *)((int)this + 4);
  }
  *(undefined4 **)(iVar2 + 0xc) = puVar1;
  *(undefined4 **)((int)this + 4) = puVar1;
  return puVar1;
}












uint __fastcall FUN_1001e7f0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x68) != 0) {
    iVar5 = *(int *)(param_1 + 0x24);
    do {
      uVar6 = 1 << ((byte)uVar3 & 0x1f);
      if (((*(uint *)(iVar5 + (uVar3 >> 5) * 4) & uVar6) != 0) &&
         ((*(uint *)(*(int *)(param_1 + 4) + (uVar3 >> 5) * 4) & uVar6) != 0)) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x34) + uVar3 * 8);
        piVar1 = (int *)(*(int *)(param_1 + 0x14) + uVar3 * 8);
        iVar2 = *piVar1;
        uVar4 = (undefined3)(uVar3 >> 8);
        if (iVar5 != iVar2) {
          return CONCAT31(uVar4,iVar5 - *(int *)(param_1 + 0x4c) < iVar2 - *(int *)(param_1 + 0x4c))
          ;
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x34) + uVar3 * 8 + 4);
        iVar2 = piVar1[1];
        if (iVar5 != iVar2) {
          return CONCAT31(uVar4,iVar5 - *(int *)(param_1 + 0x4c) < iVar2 - *(int *)(param_1 + 0x4c))
          ;
        }
        iVar5 = *(int *)(param_1 + 0x24);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x68));
  }
  return uVar3 & 0xffffff00;
}














uint __fastcall FUN_1001e870(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x68) != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    do {
      uVar5 = 1 << ((byte)uVar2 & 0x1f);
      if (((*(uint *)(iVar4 + (uVar2 >> 5) * 4) & uVar5) != 0) &&
         ((*(uint *)(*(int *)(param_1 + 4) + (uVar2 >> 5) * 4) & uVar5) != 0)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x14) + uVar2 * 8);
        piVar1 = (int *)(*(int *)(param_1 + 0x34) + uVar2 * 8);
        iVar3 = *piVar1;
        if (iVar3 != iVar4) {
LAB_1001e8ce:
          return CONCAT31((int3)(uVar2 >> 8),
                          iVar3 - *(int *)(param_1 + 0x4c) < iVar4 - *(int *)(param_1 + 0x4c));
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x14) + uVar2 * 8 + 4);
        iVar3 = piVar1[1];
        if (iVar3 != iVar4) goto LAB_1001e8ce;
        iVar4 = *(int *)(param_1 + 0x24);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x68));
  }
  return uVar2 & 0xffffff00;
}
















uint __thiscall FUN_1001e8e0(void *this,uint param_1)

{
  uint in_EAX;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 0x80000000) {
    uVar1 = FUN_10023bb0(param_1);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = *(int *)this + param_1;
    return CONCAT31((int3)(*(int *)this + param_1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b50();
}













uint __thiscall FUN_1001e930(void *this,uint param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 0x40000000) {
    uVar2 = FUN_10023c60(param_1);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    iVar1 = *(int *)this + param_1 * 4;
    *(int *)((int)this + 8) = iVar1;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b50();
}















uint __thiscall FUN_1001e980(void *this,uint param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 0x20000000) {
    uVar2 = FUN_10023cc0(param_1);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    iVar1 = *(int *)this + param_1 * 8;
    *(int *)((int)this + 8) = iVar1;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b50();
}
















void FUN_1001e9d0(void)

{
  int iVar1;
  
  iVar1 = FUN_10028499(0x18);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}














void FUN_1001e9f0(void)

{
  int iVar1;
  
  iVar1 = FUN_10028499(0x40);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}















void FUN_1001ea10(void)

{
  int iVar1;
  
  iVar1 = FUN_10028499(0x34);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}
















void __fastcall FUN_1001ea30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10028499(0x1c);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}















void __fastcall FUN_1001ea50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10028499(0x18);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}
















void __fastcall FUN_1001ea70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10028499(0x2c);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}
















void __fastcall FUN_1001ea90(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10028499(0x40);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}

















void __fastcall FUN_1001eab0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10028499(0x34);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}

















void __cdecl FUN_1001ead0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  for (; (param_1 != param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0xc)) {
    iVar2 = param_3;
    switch(*(undefined4 *)(param_1 + 4)) {
    case 10:
    case 0xb:
      FUN_1001ead0(*(int *)(param_1 + 0x14),0,0);
      break;
    case 0x10:
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 0x24) = 0;
      }
      for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        FUN_1001ead0(*(int *)(iVar1 + 0xc),*(int *)(iVar1 + 0x14),param_3);
      }
      break;
    case 0x12:
      iVar2 = param_1;
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        iVar2 = param_3;
      }
      break;
    case 0x13:
      if (param_3 == *(int *)(param_1 + 0x14)) {
        if (*(int *)(param_3 + 0x24) == -1) {
          *(undefined4 *)(param_3 + 0x24) = 1;
        }
        iVar2 = 0;
      }
    }
    param_3 = iVar2;
  }
  return;
}
















void __thiscall FUN_1001ebc0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(*(int *)((int)this + 8) - (int)pvVar1)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2 + param_1;
  *(int *)((int)this + 8) = param_3 + param_1;
  return;
}
















void __thiscall FUN_1001ec20(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffffeU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 2;
  *(int *)((int)this + 8) = param_1 + param_3 * 2;
  return;
}


















void __thiscall FUN_1001ec80(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 4;
  *(int *)((int)this + 8) = param_1 + param_3 * 4;
  return;
}
















void __thiscall FUN_1001ece0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 8;
  *(int *)((int)this + 8) = param_1 + param_3 * 8;
  return;
}
















void __thiscall FUN_1001ed40(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(int **)this != (int *)0x0) {
    FUN_10002450(*(int **)this,*(int **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x18) * 0x18)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 0x18;
  *(int *)((int)this + 8) = param_1 + param_3 * 0x18;
  return;
}














void FUN_1001edd0(undefined1 *param_1,undefined1 *param_2,uint param_3,uint *param_4)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_4;
  if (puVar5 != (uint *)0x0) {
    do {
      if (*puVar5 <= param_3) break;
      param_4 = puVar5 + 4;
      puVar5 = (uint *)*param_4;
    } while (puVar5 != (uint *)0x0);
    if ((puVar5 != (uint *)0x0) && (param_3 == *puVar5)) goto LAB_1001ee29;
  }
  puVar2 = (uint *)FUN_10028499(0x14);
  *puVar2 = param_3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *param_4 = (uint)puVar2;
  puVar2[4] = (uint)puVar5;
  puVar5 = (uint *)*param_4;
LAB_1001ee29:
  if (param_1 != param_2) {
    uVar3 = puVar5[2];
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      if (puVar5[1] <= uVar3) {
        pvVar4 = realloc((void *)puVar5[3],uVar3 + 0x10);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_alloc();
        }
        puVar5[3] = (uint)pvVar4;
        puVar5[1] = uVar3 + 0x10;
      }
      *(undefined1 *)(puVar5[3] + puVar5[2]) = uVar1;
      puVar5[2] = puVar5[2] + 1;
      uVar3 = puVar5[2];
    } while (param_1 != param_2);
  }
  return;
}













void __fastcall FUN_1001ee90(int *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uStack_4;
  int iVar4;
  
  FUN_1001d850((int)(param_1 + 9));
  if (param_1[0x13] == 0x5e) {
    *(uint *)(param_1[10] + 8) = *(uint *)(param_1[10] + 8) ^ 1;
    FUN_10022c60(param_1);
  }
  if (((param_1[0x14] & 0x20000000U) != 0) && (param_1[0x13] == 0x5d)) {
    FUN_1001d7e0(param_1 + 9,0x5d);
    FUN_10022c60(param_1);
  }
  bVar1 = FUN_1001f290(param_1);
  iVar4 = CONCAT31(extraout_var,bVar1);
  if (iVar4 == 0) {
    return;
  }
  do {
    if (iVar4 != 2) {
      if ((param_1[0x11] == 0) && ((param_1[0x14] & 0x100000U) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_10021790(2);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,(char)param_1[0x11]);
      if (param_1[0x13] == 0x2d) {
        FUN_10022c60(param_1);
        bVar3 = *(byte *)(param_1 + 0x11);
        bVar1 = FUN_1001f290(param_1);
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          FUN_1001d7e0(param_1 + 9,(uint)*(byte *)(param_1 + 0x11));
          FUN_1001d7e0(param_1 + 9,0x2d);
          return;
        }
        if (CONCAT31(extraout_var_00,bVar1) == 2) {
LAB_1001efbd:
                    /* WARNING: Subroutine does not return */
          FUN_10021790(8);
        }
        if ((param_1[0x10] & 0x800U) != 0) {
          cVar2 = FUN_100259e0((undefined4 *)param_1[0xf]);
          param_1[0x11] = (int)cVar2;
          bVar3 = FUN_100259e0((undefined4 *)param_1[0xf]);
        }
        if (*(byte *)(param_1 + 0x11) < bVar3) goto LAB_1001efbd;
        FUN_1001dcb0(param_1 + 9,bVar3,*(byte *)(param_1 + 0x11));
      }
      else {
        FUN_1001d7e0(param_1 + 9,uStack_4);
      }
    }
    bVar1 = FUN_1001f290(param_1);
    iVar4 = CONCAT31(extraout_var_01,bVar1);
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}

















undefined4 __thiscall FUN_1001efd0(void *this,char param_1)

{
  char *pcVar1;
  ushort uVar2;
  uint in_EAX;
  undefined2 extraout_var;
  undefined4 uVar3;
  
  pcVar1 = *(char **)this;
  if (pcVar1 != *(char **)((int)this + 8)) {
    uVar2 = FUN_10006910(*(void **)((int)this + 0x3c),pcVar1,pcVar1 + 1,
                         (byte)((uint)*(undefined4 *)((int)this + 0x40) >> 8) & 1);
    in_EAX = CONCAT22(extraout_var,uVar2);
    if (uVar2 != 0) {
      if (param_1 != '\0') {
        FUN_1001d850((int)this + 0x24);
      }
      FUN_1001dc00((void *)((int)this + 0x24),uVar2,
                   *(byte *)(*(int *)(*(int *)(*(int *)((int)this + 0x3c) + 4) + 0xc) +
                            (uint)*(byte *)((int)this + 0x48) * 2) & 1);
      uVar3 = FUN_10022c60(this);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

















undefined4 __fastcall FUN_1001f050(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1[0x13] == -1) goto LAB_1001f1d5;
  if (((param_1[0x14] & 0x10000U) == 0) ||
     (cVar2 = FUN_1001fd30(param_1,(char)param_1[0x12]), cVar2 == '\0')) {
    uVar3 = param_1[0x14];
    if ((uVar3 & 0x8000) != 0) {
      if ((char)param_1[0x12] == 'a') {
        param_1[0x11] = 7;
        FUN_10022c60(param_1);
        goto LAB_1001f167;
      }
      if ((char)param_1[0x12] == 'b') {
        param_1[0x11] = 8;
        goto LAB_1001f0a7;
      }
    }
    cVar2 = (char)param_1[0x12];
    if (cVar2 == 'c') {
      if ((uVar3 & 0x40000) == 0) goto LAB_1001f14a;
      FUN_10022c60(param_1);
      if ((*(ushort *)
            (*(int *)(*(int *)(param_1[0xf] + 4) + 0xc) + (uint)*(byte *)(param_1 + 0x12) * 2) &
          0x103) == 0) goto LAB_1001f1d5;
      uVar3 = (int)(char)*(byte *)(param_1 + 0x12) & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      param_1[0x11] = (int)(char)uVar3;
      FUN_10022c60(param_1);
    }
    else {
      if (cVar2 == 'x') {
        if ((uVar3 & 0x1000) != 0) {
          FUN_10022c60(param_1);
          iVar4 = 2;
LAB_1001f137:
          iVar4 = FUN_1001faf0(param_1,0x10,iVar4);
          if (iVar4 != 0) goto LAB_1001f1d5;
          goto LAB_1001f167;
        }
      }
      else if ((cVar2 == 'u') && ((uVar3 & 0x800) != 0)) {
        FUN_10022c60(param_1);
        iVar4 = 4;
        goto LAB_1001f137;
      }
LAB_1001f14a:
      if (((uVar3 & 0x2000) == 0) || (iVar4 = FUN_1001faf0(param_1,8,3), iVar4 == 3)) {
        iVar4 = (int)(char)param_1[0x12];
        if ((param_1[0x14] & 0x400000U) != 0) {
          switch(iVar4) {
          case 0x44:
          case 0x53:
          case 0x57:
          case 99:
          case 100:
          case 0x73:
          case 0x77:
            goto switchD_1001f199_caseD_44;
          default:
            goto switchD_1001f199_caseD_45;
          }
        }
        switch(iVar4) {
        case 0x22:
        case 0x2f:
          iVar1 = 0x18;
          break;
        default:
          goto switchD_1001f199_caseD_44;
        case 0x24:
        case 0x2a:
        case 0x2e:
        case 0x5b:
        case 0x5c:
        case 0x5e:
        case 0x7c:
          goto switchD_1001f199_caseD_45;
        case 0x28:
        case 0x29:
        case 0x2b:
        case 0x3f:
        case 0x7b:
        case 0x7d:
          iVar1 = 0x17;
        }
        if (((uint)param_1[0x14] >> iVar1 & 1) == 0) {
switchD_1001f199_caseD_44:
          return 0;
        }
switchD_1001f199_caseD_45:
        param_1[0x11] = iVar4;
        uVar5 = FUN_10022c60(param_1);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      if (param_1[0x11] == 0) goto LAB_1001f1d5;
    }
  }
  else {
LAB_1001f0a7:
    FUN_10022c60(param_1);
  }
LAB_1001f167:
  if ((uint)param_1[0x11] < 0x100) {
    cVar2 = (char)param_1[0x11];
    param_1[0x11] = (int)cVar2;
    return CONCAT31(cVar2 >> 7,1);
  }
LAB_1001f1d5:
                    /* WARNING: Subroutine does not return */
  FUN_10021790(2);
}















bool __fastcall FUN_1001f290(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  error_type eVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = param_1[0x13];
  if (iVar6 != 0x5c) {
    if (iVar6 != 0x5b) {
      if ((iVar6 != 0x5d) && (iVar6 != -1)) {
        param_1[0x11] = (int)(char)param_1[0x12];
        FUN_10022c60(param_1);
        return true;
      }
      return false;
    }
    FUN_10022c60(param_1);
    eVar3 = param_1[0x13];
    if (((eVar3 != 0x3a) && (eVar3 != 0x3d)) && (eVar3 != 0x2e)) {
      param_1[0x11] = 0x5b;
      return true;
    }
    FUN_10022c60(param_1);
    FUN_1001fbd0(param_1,eVar3);
    return true;
  }
  FUN_10022c60(param_1);
  uVar1 = param_1[0x14];
  if ((uVar1 & 0x200000) == 0) {
    if ((((uVar1 & 0x10000) == 0) ||
        (cVar4 = FUN_1001fd30(param_1,(char)param_1[0x12]), cVar4 == '\0')) &&
       (((param_1[0x14] & 0x8000U) == 0 ||
        (uVar7 = FUN_1001fd90(param_1,(char)param_1[0x12]), (char)uVar7 == '\0')))) {
      param_1[0x11] = 0x5c;
      return true;
    }
    FUN_10022c60(param_1);
    return true;
  }
  if (((uVar1 & 0x4000) == 0) || ((char)param_1[0x12] != '\\')) {
    if (((uVar1 & 0x20000) != 0) &&
       ((pcVar2 = (char *)*param_1, pcVar2 != (char *)param_1[2] &&
        (uVar5 = FUN_10006910((void *)param_1[0xf],pcVar2,pcVar2 + 1,
                              (byte)((uint)param_1[0x10] >> 8) & 1), uVar5 != 0)))) {
      FUN_1001dc00(param_1 + 9,uVar5,
                   *(byte *)(*(int *)(*(int *)(param_1[0xf] + 4) + 0xc) +
                            (uint)*(byte *)(param_1 + 0x12) * 2) & 1);
      FUN_10022c60(param_1);
      return true;
    }
    iVar6 = FUN_1001faf0(param_1,10,0x7fffffff);
    if (iVar6 == 0x7fffffff) {
      uVar7 = FUN_1001f050(param_1);
      return (char)uVar7 != '\0';
    }
    if (param_1[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10021790(2);
    }
  }
  else {
    param_1[0x11] = 0x5c;
    FUN_10022c60(param_1);
  }
  return true;
}















int __fastcall FUN_1001f440(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b4b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar2 = FUN_1001e780(param_1 + 9,0);
  FUN_1001f850(param_1);
  if (*param_1 == param_1[2]) {
    FUN_10021460(param_1 + 9,(int)puVar2);
    FUN_10022bf0(param_1 + 9,0x15);
    iVar1 = param_1[9];
    *(int *)(iVar1 + 0x14) = param_1[0x10];
    *(int *)(iVar1 + 0x1c) = param_1[3] + 1;
    FUN_1001ead0(iVar1,0,0);
    ExceptionList = local_10;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10021790(0xe);
}
















undefined4 __cdecl FUN_1001f500(LPWSTR param_1)

{
  uint uVar1;
  uint uVar2;
  LPWSTR pWVar3;
  undefined8 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(uint *)(param_1 + 8) < 0x104) {
    FUN_10024090(param_1,0x104 - *(uint *)(param_1 + 8),0);
  }
  else {
    pWVar3 = param_1;
    if (7 < *(uint *)(param_1 + 10)) {
      pWVar3 = *(LPWSTR *)param_1;
    }
    param_1[8] = L'Ą';
    param_1[9] = L'\0';
    pWVar3[0x104] = L'\0';
  }
  do {
    uVar1 = *(uint *)(param_1 + 8);
    pWVar3 = param_1;
    if (7 < *(uint *)(param_1 + 10)) {
      pWVar3 = *(LPWSTR *)param_1;
    }
    uVar4 = ___std_fs_get_current_path@8(uVar1,pWVar3);
    uVar2 = (uint)uVar4;
    if (*(uint *)(param_1 + 8) < uVar2) {
      FUN_10024090(param_1,uVar2 - *(uint *)(param_1 + 8),0);
    }
    else {
      pWVar3 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        pWVar3 = *(LPWSTR *)param_1;
      }
      *(uint *)(param_1 + 8) = uVar2;
      pWVar3[uVar2] = L'\0';
    }
  } while (uVar1 <= uVar2);
  ExceptionList = local_10;
  return (int)((ulonglong)uVar4 >> 0x20);
}















bool __fastcall FUN_1001f5c0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001faf0(param_1,10,0x7fffffff);
  return iVar1 != 0x7fffffff;
}














void __fastcall FUN_1001f5e0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(1);
  }
  return;
}












void __fastcall FUN_1001f5f0(int param_1)

{
  ___std_fs_directory_iterator_close@4(*(HANDLE *)(param_1 + 0x48));
  FUN_100237b0((int *)(param_1 + 0x30));
  return;
}


















void FUN_1001f610(int *param_1,int *param_2)

{
  FUN_10002450(param_1,param_2);
  return;
}

















void FUN_1001f630(void *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)param_1 + 0x14);
  local_8 = 0;
  FUN_10021710(*(int **)(iVar1 + 4));
  *(int *)(*(int *)((int)param_1 + 0x14) + 4) = iVar1;
  **(int **)((int)param_1 + 0x14) = iVar1;
  *(int *)(*(int *)((int)param_1 + 0x14) + 8) = iVar1;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  FUN_100284c9(*(void **)((int)param_1 + 0x14));
  FUN_100284c9(param_1);
  ExceptionList = local_10;
  return;
}















void FUN_1001f6b0(void *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)param_1 + 0x14);
  local_8 = 0;
  FUN_10021750(*(int **)(iVar1 + 4));
  *(int *)(*(int *)((int)param_1 + 0x14) + 4) = iVar1;
  **(int **)((int)param_1 + 0x14) = iVar1;
  *(int *)(*(int *)((int)param_1 + 0x14) + 8) = iVar1;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  FUN_100284c9(*(void **)((int)param_1 + 0x14));
  FUN_100284c9(param_1);
  ExceptionList = local_10;
  return;
}
















void FUN_1001f730(void *param_1)

{
  FUN_100284c9(param_1);
  return;
}

















void FUN_1001f750(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
    pvVar1 = *(void **)((int)param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x24) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
  FUN_100284c9(param_1);
  return;
}

















void FUN_1001f7b0(void *param_1)

{
  FUN_10009850((int *)((int)param_1 + 0x10));
  FUN_100284c9(param_1);
  return;
}

















void FUN_1001f7d0(void *param_1)

{
  FUN_100098e0((int *)((int)param_1 + 0x10));
  FUN_100284c9(param_1);
  return;
}



















void __cdecl FUN_1001f7f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  while ((param_1 != param_2 && (param_1 != (undefined4 *)0x0))) {
    puVar1 = (undefined4 *)param_1[3];
    param_1[3] = 0;
    (**(code **)*param_1)(1);
    param_1 = puVar1;
  }
  return;
}


















void __fastcall FUN_1001f820(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[3];
    puVar2[3] = 0;
    (**(code **)*puVar2)(1);
    puVar2 = puVar1;
  }
  *param_1 = 0;
  return;
}
















void __fastcall FUN_1001f850(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  
  iVar2 = param_1[10];
  uVar6 = FUN_1001e210(param_1);
  if ((char)uVar6 == '\0') {
    if (param_1[0x13] != 0x7c) {
      return;
    }
    puVar7 = FUN_10022bf0(param_1 + 9,8);
    FUN_10021460(param_1 + 9,(int)puVar7);
  }
  puVar7 = (undefined4 *)FUN_10028499(0x14);
  puVar7[4] = 0;
  puVar7[1] = 0x11;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = std::_Node_endif::vftable;
  puVar7[4] = param_1[10];
  iVar11 = param_1[10];
  if (*(int *)(iVar11 + 0xc) != 0) {
    puVar7[3] = *(int *)(iVar11 + 0xc);
    *(undefined4 **)(*(int *)(param_1[10] + 0xc) + 0x10) = puVar7;
    iVar11 = param_1[10];
  }
  *(undefined4 **)(iVar11 + 0xc) = puVar7;
  param_1[10] = (int)puVar7;
  puVar8 = (undefined4 *)FUN_10028499(0x1c);
  puVar8[1] = 0x10;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  *puVar8 = std::_Node_if::vftable;
  puVar8[5] = puVar7;
  puVar8[6] = 0;
  iVar11 = *(int *)(iVar2 + 0xc);
  *(undefined4 **)(*(int *)(iVar11 + 0x10) + 0xc) = puVar8;
  puVar8[4] = *(undefined4 *)(iVar11 + 0x10);
  *(undefined4 **)(iVar11 + 0x10) = puVar8;
  puVar8[3] = iVar11;
  iVar11 = param_1[0x13];
  do {
    if (iVar11 != 0x7c) {
      return;
    }
    pcVar9 = (char *)*param_1;
    if (pcVar9 != (char *)param_1[2]) {
      if (*pcVar9 == '\\') {
        pcVar1 = pcVar9 + 1;
        if (pcVar1 == (char *)param_1[2]) {
LAB_1001f979:
          bVar5 = false;
        }
        else {
          uVar12 = param_1[0x14];
          if ((uVar12 & 8) == 0) {
            if ((*pcVar1 != '(') && (*pcVar1 != ')')) {
              uVar12 = param_1[0x14];
              goto LAB_1001f964;
            }
          }
          else {
LAB_1001f964:
            if (((uVar12 & 0x10) != 0) || ((*pcVar1 != '{' && (*pcVar1 != '}')))) goto LAB_1001f979;
          }
          bVar5 = true;
        }
        if (bVar5) {
          pcVar9 = pcVar1;
        }
      }
      *param_1 = (int)(pcVar9 + 1);
    }
    FUN_10023810(param_1);
    uVar6 = FUN_1001e210(param_1);
    if ((char)uVar6 == '\0') {
      puVar8 = FUN_10022bf0(param_1 + 9,8);
      iVar11 = puVar8[1];
      if (iVar11 == 8) {
        iVar11 = 9;
      }
      else if (iVar11 == 10) {
        iVar11 = 0xc;
      }
      else {
        iVar11 = (uint)(iVar11 != 0xb) * 2 + 0xc;
      }
      puVar10 = (undefined4 *)FUN_10028499(0x18);
      puVar10[4] = 0;
      puVar10[1] = iVar11;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = std::_Node_end_group::vftable;
      puVar10[5] = puVar8;
      puVar10[4] = param_1[10];
      iVar11 = param_1[10];
      if (*(int *)(iVar11 + 0xc) != 0) {
        puVar10[3] = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(*(int *)(param_1[10] + 0xc) + 0x10) = puVar10;
        iVar11 = param_1[10];
      }
      *(undefined4 **)(iVar11 + 0xc) = puVar10;
      param_1[10] = (int)puVar10;
    }
    iVar11 = puVar7[3];
    iVar3 = *(int *)(iVar2 + 0xc);
    puVar7[3] = 0;
    iVar4 = param_1[10];
    param_1[10] = (int)puVar7;
    puVar7[3] = 0;
    *(undefined4 **)(iVar4 + 0xc) = puVar7;
    for (iVar4 = *(int *)(iVar3 + 0x18); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
      iVar3 = iVar4;
    }
    puVar8 = (undefined4 *)FUN_10028499(0x1c);
    puVar8[1] = 0x10;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *puVar8 = std::_Node_if::vftable;
    puVar8[5] = puVar7;
    puVar8[6] = 0;
    *(undefined4 **)(iVar3 + 0x18) = puVar8;
    puVar8[3] = iVar11;
    *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar3 + 0x18);
    iVar11 = param_1[0x13];
  } while( true );
}

















void __thiscall FUN_1001fac0(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_1001e690((void *)((int)this + 0x24),param_1);
  FUN_1001f850(this);
  FUN_10021460((void *)((int)this + 0x24),(int)puVar1);
  *(undefined4 **)((int)this + 0x28) = puVar1;
  return;
}




















int __thiscall FUN_1001faf0(void *this,int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x44) = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    cVar2 = *(char *)((int)this + 0x48);
    if (param_1 == 8) {
      if (7 < (byte)(cVar2 - 0x30U)) {
        return param_2;
      }
LAB_1001fb50:
      iVar4 = cVar2 + -0x30;
    }
    else {
      if (('/' < cVar2) && (cVar2 < ':')) goto LAB_1001fb50;
      if (param_1 != 0x10) {
        return param_2;
      }
      if ((byte)(cVar2 + 0x9fU) < 6) {
        iVar4 = cVar2 + -0x57;
      }
      else {
        if (5 < (byte)(cVar2 + 0xbfU)) {
          return param_2;
        }
        iVar4 = cVar2 + -0x37;
      }
    }
    if (iVar4 == -1) {
      return param_2;
    }
    param_2 = param_2 + -1;
    *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) * param_1 + iVar4;
    pcVar3 = *(char **)this;
    if (pcVar3 != *(char **)((int)this + 8)) {
      if (((*pcVar3 == '\\') && (pcVar1 = pcVar3 + 1, pcVar1 != *(char **)((int)this + 8))) &&
         ((((*(uint *)((int)this + 0x50) & 8) == 0 && ((*pcVar1 == '(' || (*pcVar1 == ')')))) ||
          (((*(uint *)((int)this + 0x50) & 0x10) == 0 && ((*pcVar1 == '{' || (*pcVar1 == '}'))))))))
      {
        pcVar3 = pcVar1;
      }
      *(char **)this = pcVar3 + 1;
    }
    FUN_10023810(this);
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}

















void __thiscall FUN_1001fbd0(void *this,error_type param_1)

{
  char *pcVar1;
  error_type eVar2;
  char *pcVar3;
  error_type eVar4;
  ushort uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  
  eVar4 = param_1;
  if (param_1 == 0x3a) {
    param_1 = 1;
  }
  else if (param_1 == 0x3d) {
    param_1 = 0;
  }
  else {
    bVar8 = param_1 == 0x2e;
    param_1 = 0xe;
    if (bVar8) {
      param_1 = 0;
    }
  }
  uVar7 = 0;
  pcVar3 = *(char **)this;
  eVar2 = *(error_type *)((int)this + 0x4c);
  while ((((eVar2 != 0x3a && (eVar2 != 0x3d)) && (eVar2 != 0x2e)) && (eVar2 != 0xffffffff))) {
    pcVar6 = *(char **)this;
    if (pcVar6 != *(char **)((int)this + 8)) {
      if (((*pcVar6 == '\\') && (pcVar1 = pcVar6 + 1, pcVar1 != *(char **)((int)this + 8))) &&
         ((((*(uint *)((int)this + 0x50) & 8) == 0 && ((*pcVar1 == '(' || (*pcVar1 == ')')))) ||
          (((*(uint *)((int)this + 0x50) & 0x10) == 0 && ((*pcVar1 == '{' || (*pcVar1 == '}'))))))))
      {
        pcVar6 = pcVar1;
      }
      *(char **)this = pcVar6 + 1;
    }
    FUN_10023810(this);
    uVar7 = uVar7 + 1;
    eVar2 = *(error_type *)((int)this + 0x4c);
  }
  if (eVar2 == eVar4) {
    if (eVar4 == 0x3a) {
      uVar5 = FUN_10006910(*(void **)((int)this + 0x3c),pcVar3,*(char **)this,
                           (byte)((uint)*(undefined4 *)((int)this + 0x40) >> 8) & 1);
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10021790(1);
      }
      FUN_1001dc00((void *)((int)this + 0x24),uVar5,'\0');
    }
    else if (eVar4 == 0x3d) {
      if (pcVar3 == *(char **)this) {
LAB_1001fd1d:
                    /* WARNING: Subroutine does not return */
        FUN_10021790(0);
      }
      FUN_1001d8e0((void *)((int)this + 0x24),pcVar3,*(char **)this);
    }
    else if (eVar4 == 0x2e) {
      if (pcVar3 == *(char **)this) goto LAB_1001fd1d;
      FUN_1001edd0(pcVar3,*(char **)this,uVar7,(uint *)(*(int *)((int)this + 0x28) + 0x14));
    }
    FUN_10022c60(this);
    if (*(int *)((int)this + 0x4c) == 0x5d) {
      FUN_10022c60(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10021790(param_1);
}



















undefined1 __thiscall FUN_1001fd30(void *this,char param_1)

{
  if (param_1 == 'f') {
    *(undefined4 *)((int)this + 0x44) = 0xc;
    return 1;
  }
  if (param_1 == 'n') {
    *(undefined4 *)((int)this + 0x44) = 10;
    return 1;
  }
  if (param_1 == 'r') {
    *(undefined4 *)((int)this + 0x44) = 0xd;
    return 1;
  }
  if (param_1 == 't') {
    *(undefined4 *)((int)this + 0x44) = 9;
    return 1;
  }
  if (param_1 == 'v') {
    *(undefined4 *)((int)this + 0x44) = 0xb;
    return 1;
  }
  return 0;
}


















undefined4 __thiscall FUN_1001fd90(void *this,char param_1)

{
  uint in_EAX;
  
  if (param_1 == 'a') {
    *(undefined4 *)((int)this + 0x44) = 7;
    return 1;
  }
  if (param_1 == 'b') {
    *(undefined4 *)((int)this + 0x44) = 8;
    return 1;
  }
  return in_EAX & 0xffffff00;
}



















undefined1 __thiscall FUN_1001fdc0(void *this,void *param_1)

{
  void **ppvVar1;
  uint uVar2;
  void *pvVar3;
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 uVar11;
  int local_74;
  undefined1 local_70 [12];
  int local_64;
  void *local_60;
  void *local_5c;
  int local_58;
  int local_54;
  undefined4 local_50 [3];
  undefined4 local_44;
  void *local_40;
  void *local_3c;
  void *local_34;
  void *local_30;
  size_t local_2c;
  int local_28;
  void *local_24;
  void *local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_54 = *(int *)this;
  piVar8 = (int *)((int)this + 4);
  local_1c = this;
  local_18 = piVar8;
  FUN_10007690(local_50,piVar8);
  local_44 = *(undefined4 *)((int)this + 0x10);
  ppvVar1 = (void **)((int)this + 0x14);
  local_8 = 0;
  FUN_10007830(&local_40,(int *)ppvVar1);
  local_8 = 1;
  for (pvVar10 = param_1; param_1 = pvVar10, pvVar10 != (void *)0x0;
      pvVar10 = *(void **)((int)pvVar10 + 0x18)) {
    *local_1c = local_54;
    FUN_1000ab80(piVar8,local_50);
    if (ppvVar1 != &local_40) {
      pvVar3 = *ppvVar1;
      local_20 = local_3c;
      local_24 = (void *)((int)local_3c - (int)local_40);
      uVar9 = (int)local_24 >> 3;
      uVar6 = *(int *)((int)this + 0x1c) - (int)pvVar3 >> 3;
      uVar2 = *(int *)((int)this + 0x18) - (int)pvVar3 >> 3;
      if (uVar6 < uVar9) {
        if (0x1fffffff < uVar9) goto LAB_100202d9;
        param_1 = (void *)(uVar6 >> 1);
        uVar2 = uVar9;
        if ((uVar6 <= 0x1fffffffU - (int)param_1) &&
           (uVar2 = (int)param_1 + uVar6, (int)param_1 + uVar6 < uVar9)) {
          uVar2 = uVar9;
        }
        if (pvVar3 != (void *)0x0) {
          pvVar5 = pvVar3;
          if ((0xfff < uVar6 * 8) &&
             (pvVar5 = *(void **)((int)pvVar3 + -4), param_1 = pvVar5,
             0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar5)))) goto LAB_1001ffdb;
          FUN_100284c9(pvVar5);
        }
        *ppvVar1 = (void *)0x0;
        *(undefined4 *)((int)this + 0x18) = 0;
        *(undefined4 *)((int)this + 0x1c) = 0;
        if (uVar2 != 0) {
          if (0x1fffffff < uVar2) goto LAB_100202d9;
          pvVar3 = (void *)FUN_10023cc0(uVar2);
          *ppvVar1 = pvVar3;
          *(void **)((int)this + 0x18) = pvVar3;
          *(void **)((int)this + 0x1c) = (void *)((int)*ppvVar1 + uVar2 * 8);
        }
        pvVar3 = *ppvVar1;
        FUN_10005070(&local_11);
        memmove(pvVar3,local_40,(size_t)local_24);
        *(int *)((int)this + 0x18) = (int)local_24 + (int)pvVar3;
        piVar8 = local_18;
      }
      else if (uVar2 < uVar9) {
        pvVar10 = (void *)((int)local_40 + uVar2 * 8);
        memmove(pvVar3,local_40,(int)pvVar10 - (int)local_40);
        pvVar3 = *(void **)((int)this + 0x18);
        FUN_10005070(&local_12);
        local_20 = (void *)((int)local_20 - (int)pvVar10);
        memmove(pvVar3,pvVar10,(size_t)local_20);
        *(int *)((int)this + 0x18) = (int)local_20 + (int)pvVar3;
        pvVar10 = param_1;
        piVar8 = local_18;
      }
      else {
        memmove(pvVar3,local_40,(size_t)local_24);
        *(void **)((int)this + 0x18) = (void *)((int)pvVar3 + uVar9 * 8);
        piVar8 = local_18;
      }
    }
    uVar11 = FUN_10022250(local_1c,*(void **)((int)pvVar10 + 0xc));
    if ((char)uVar11 != '\0') {
      if ((char)local_1c[0x1b] == '\0') {
        uVar7 = 1;
        goto LAB_1001ffbd;
      }
      local_74 = *local_1c;
      FUN_10007690(local_70,piVar8);
      local_64 = piVar8[3];
      local_8._0_1_ = 2;
      FUN_10007830(&local_60,(int *)ppvVar1);
      local_28 = *(int *)((int)pvVar10 + 0x18);
      local_8 = CONCAT31(local_8._1_3_,3);
      pvVar10 = (void *)(*local_1c - local_54);
      local_20 = pvVar10;
      if (local_28 == 0) goto LAB_100202bf;
      piVar8 = local_1c + 1;
      goto LAB_10020031;
    }
  }
  uVar7 = 0;
  goto LAB_1001ffbd;
  while( true ) {
    uVar11 = FUN_10022250(local_1c,*(void **)(local_28 + 0xc));
    if ((char)uVar11 != '\0') {
      local_34 = (void *)(*local_1c - local_54);
      if ((int)pvVar10 < (int)local_34) {
        local_74 = *local_1c;
        FUN_1000ab80(local_70,piVar8);
        pvVar10 = local_60;
        if (&local_60 != ppvVar1) {
          local_2c = *(size_t *)((int)this + 0x18);
          local_24 = *ppvVar1;
          local_30 = (void *)(local_2c - (int)local_24);
          uVar9 = (int)local_30 >> 3;
          uVar6 = local_58 - (int)local_60 >> 3;
          uVar2 = (int)local_5c - (int)local_60 >> 3;
          if (uVar6 < uVar9) {
            if (0x1fffffff < uVar9) goto LAB_100202d9;
            uVar2 = uVar9;
            if ((uVar6 <= 0x1fffffff - (uVar6 >> 1)) &&
               (uVar2 = uVar6 + (uVar6 >> 1), uVar2 < uVar9)) {
              uVar2 = uVar9;
            }
            if (local_60 != (void *)0x0) {
              FUN_10024720(local_60,uVar6);
            }
            FUN_1001e980(&local_60,uVar2);
            FUN_10005070(&local_11);
            pvVar3 = local_30;
            pvVar10 = local_60;
            memmove(local_60,local_24,(size_t)local_30);
            local_5c = (void *)((int)pvVar10 + (int)pvVar3);
            piVar8 = local_18;
          }
          else if (uVar2 < uVar9) {
            sVar4 = uVar2 * 8;
            pvVar10 = (void *)((int)local_24 + sVar4);
            memmove(local_60,local_24,sVar4);
            local_5c = (void *)FUN_100066c0(pvVar10,local_2c,local_5c);
            piVar8 = local_18;
          }
          else {
            memmove(local_60,local_24,(size_t)local_30);
            local_5c = (void *)((int)pvVar10 + uVar9 * 8);
            piVar8 = local_18;
          }
        }
        local_20 = local_34;
        pvVar10 = local_34;
      }
    }
    local_28 = *(int *)(local_28 + 0x18);
    if (local_28 == 0) break;
LAB_10020031:
    *local_1c = local_54;
    FUN_1000ab80(piVar8,local_50);
    if (ppvVar1 != &local_40) {
      local_2c = (int)local_3c - (int)local_40;
      local_30 = *ppvVar1;
      local_24 = local_3c;
      uVar9 = (int)local_2c >> 3;
      uVar6 = *(int *)((int)this + 0x1c) - (int)local_30 >> 3;
      uVar2 = *(int *)((int)this + 0x18) - (int)local_30 >> 3;
      if (uVar6 < uVar9) {
        if (0x1fffffff < uVar9) {
LAB_100202d9:
                    /* WARNING: Subroutine does not return */
          FUN_10023b50();
        }
        uVar2 = uVar9;
        if ((uVar6 <= 0x1fffffff - (uVar6 >> 1)) && (uVar2 = uVar6 + (uVar6 >> 1), uVar2 < uVar9)) {
          uVar2 = uVar9;
        }
        if (local_30 != (void *)0x0) {
          pvVar10 = local_30;
          if ((0xfff < uVar6 * 8) &&
             (pvVar10 = *(void **)((int)local_30 + -4),
             0x1f < (uint)((int)local_30 + (-4 - (int)pvVar10)))) {
LAB_1001ffdb:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_100284c9(pvVar10);
        }
        *ppvVar1 = (void *)0x0;
        *(undefined4 *)((int)this + 0x18) = 0;
        *(undefined4 *)((int)this + 0x1c) = 0;
        if (uVar2 != 0) {
          if (0x1fffffff < uVar2) goto LAB_100202d9;
          pvVar10 = (void *)FUN_10023cc0(uVar2);
          *ppvVar1 = pvVar10;
          *(void **)((int)this + 0x18) = pvVar10;
          *(void **)((int)this + 0x1c) = (void *)((int)*ppvVar1 + uVar2 * 8);
        }
        pvVar10 = *ppvVar1;
        FUN_10005070((undefined1 *)((int)&param_1 + 3));
        sVar4 = local_2c;
        memmove(pvVar10,local_40,local_2c);
        pvVar10 = (void *)((int)pvVar10 + sVar4);
      }
      else if (uVar2 < uVar9) {
        pvVar3 = (void *)((int)local_40 + uVar2 * 8);
        memmove(local_30,local_40,(int)pvVar3 - (int)local_40);
        pvVar10 = *(void **)((int)this + 0x18);
        FUN_10005070(&local_12);
        local_24 = (void *)((int)local_24 - (int)pvVar3);
        memmove(pvVar10,pvVar3,(size_t)local_24);
        pvVar10 = (void *)((int)local_24 + (int)pvVar10);
      }
      else {
        memmove(local_30,local_40,local_2c);
        pvVar10 = (void *)((int)local_30 + uVar9 * 8);
      }
      *(void **)((int)this + 0x18) = pvVar10;
      piVar8 = local_18;
      pvVar10 = local_20;
    }
  }
LAB_100202bf:
  FUN_1000a880(local_1c,&local_74);
  uVar7 = 1;
  FUN_100095e0((int)&local_74);
LAB_1001ffbd:
  FUN_100095e0((int)&local_54);
  ExceptionList = local_10;
  return uVar7;
}
















undefined1 __thiscall FUN_100202e0(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  undefined8 uVar11;
  int local_74;
  undefined1 local_70 [12];
  int local_64;
  undefined1 local_60 [12];
  int local_54;
  undefined4 local_50 [3];
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  size_t local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_54 = *(int *)this;
  piVar7 = (int *)((int)this + 4);
  local_24 = piVar7;
  local_18 = this;
  FUN_10007690(local_50,piVar7);
  local_44 = *(undefined4 *)((int)this + 0x10);
  ppuVar10 = (undefined4 **)((int)this + 0x14);
  local_8 = 0;
  FUN_100078c0(&local_40,(int *)ppuVar10);
  local_8 = 1;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x18)) {
    *local_18 = local_54;
    FUN_1000ab80(piVar7,local_50);
    puVar8 = local_3c;
    puVar9 = local_40;
    if (ppuVar10 != &local_40) {
      local_30 = (int *)((int)local_3c - (int)local_40);
      local_28 = *ppuVar10;
      local_20 = (int *)((int)local_30 >> 3);
      local_2c = (int *)(*(int *)((int)this + 0x18) - (int)local_28 >> 3);
      local_1c = (int *)(*(int *)((int)this + 0x1c) - (int)local_28 >> 3);
      if (local_1c < local_20) {
        if ((int *)0x1fffffff < local_20) goto LAB_1002076c;
        piVar4 = (int *)((uint)local_1c >> 1);
        piVar7 = local_20;
        if ((local_1c <= (int *)(0x1fffffff - (int)piVar4)) &&
           (piVar7 = (int *)((int)local_1c + (int)piVar4),
           (int *)((int)local_1c + (int)piVar4) < local_20)) {
          piVar7 = local_20;
        }
        local_20 = piVar7;
        if (local_28 != (int *)0x0) {
          piVar7 = local_28;
          if ((0xfff < (uint)((int)local_1c * 8)) &&
             (piVar7 = (int *)local_28[-1], uVar1 = (int)local_28 + (-4 - (int)piVar7),
             local_2c = piVar7, local_28 = piVar4, 0x1f < uVar1)) goto LAB_10020528;
          local_28 = piVar4;
          FUN_100284c9(piVar7);
          piVar4 = local_28;
        }
        local_28 = piVar4;
        *ppuVar10 = (undefined4 *)0x0;
        *(undefined4 *)((int)this + 0x18) = 0;
        *(undefined4 *)((int)this + 0x1c) = 0;
        if (local_20 != (int *)0x0) {
          if ((int *)0x1fffffff < local_20) goto LAB_1002076c;
          puVar5 = (undefined4 *)FUN_10023cc0((uint)local_20);
          *ppuVar10 = puVar5;
          *(undefined4 **)((int)this + 0x18) = puVar5;
          *(undefined4 **)((int)this + 0x1c) = *ppuVar10 + (int)local_20 * 2;
        }
        puVar5 = *ppuVar10;
        for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
          *puVar5 = *puVar9;
          puVar5[1] = puVar9[1];
          puVar5 = puVar5 + 2;
        }
LAB_10020468:
        *(undefined4 **)((int)this + 0x18) = puVar5;
        piVar7 = local_24;
      }
      else if (local_2c < local_20) {
        puVar8 = local_40 + (int)local_2c * 2;
        FUN_10005070(&local_11);
        memmove(local_28,puVar9,(int)puVar8 - (int)puVar9);
        puVar5 = *(undefined4 **)((int)this + 0x18);
        if (puVar8 == local_3c) goto LAB_10020468;
        do {
          *puVar5 = *puVar8;
          puVar9 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar5[1] = *puVar9;
          puVar5 = puVar5 + 2;
        } while (puVar8 != local_3c);
        *(undefined4 **)((int)this + 0x18) = puVar5;
        piVar7 = local_24;
      }
      else {
        piVar7 = local_28 + (int)local_20 * 2;
        FUN_10005070(&local_12);
        memmove(local_28,puVar9,(size_t)local_30);
        *(int **)((int)this + 0x18) = piVar7;
        piVar7 = local_24;
      }
    }
    uVar11 = FUN_10022700(local_18,*(int *)(param_1 + 0xc));
    if ((char)uVar11 != '\0') {
      if ((char)local_18[0x1b] == '\0') {
        uVar6 = 1;
        goto LAB_1002050a;
      }
      local_74 = *local_18;
      FUN_10007690(local_70,piVar7);
      local_64 = piVar7[3];
      local_8._0_1_ = 2;
      FUN_100078c0(local_60,(int *)ppuVar10);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_20 = *(int **)(param_1 + 0x18);
      local_2c = (int *)(*local_18 - local_54);
      iVar3 = local_54;
      goto joined_r0x10020578;
    }
  }
  uVar6 = 0;
LAB_1002050a:
  FUN_100095e0((int)&local_54);
  ExceptionList = local_10;
  return uVar6;
joined_r0x10020578:
  if (local_20 == (int *)0x0) goto LAB_10020754;
  *local_18 = iVar3;
  FUN_1000ab80(local_18 + 1,local_50);
  puVar8 = local_3c;
  puVar9 = local_40;
  if (ppuVar10 != &local_40) {
    local_34 = (int)local_3c - (int)local_40;
    local_28 = *ppuVar10;
    local_1c = (int *)((int)local_34 >> 3);
    local_30 = (int *)(*(int *)((int)this + 0x18) - (int)local_28 >> 3);
    local_24 = (int *)(*(int *)((int)this + 0x1c) - (int)local_28 >> 3);
    if (local_24 < local_1c) {
      if ((int *)0x1fffffff < local_1c) {
LAB_1002076c:
                    /* WARNING: Subroutine does not return */
        FUN_10023b50();
      }
      piVar4 = (int *)((uint)local_24 >> 1);
      piVar7 = local_1c;
      if ((local_24 <= (int *)(0x1fffffff - (int)piVar4)) &&
         (piVar7 = (int *)((int)local_24 + (int)piVar4),
         (int *)((int)local_24 + (int)piVar4) < local_1c)) {
        piVar7 = local_1c;
      }
      local_1c = piVar7;
      if (local_28 != (int *)0x0) {
        piVar7 = local_28;
        if ((0xfff < (uint)((int)local_24 * 8)) &&
           (piVar7 = (int *)local_28[-1], uVar1 = (int)local_28 + (-4 - (int)piVar7),
           local_30 = piVar7, local_28 = piVar4, 0x1f < uVar1)) {
LAB_10020528:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        local_28 = piVar4;
        FUN_100284c9(piVar7);
        piVar4 = local_28;
      }
      local_28 = piVar4;
      *ppuVar10 = (undefined4 *)0x0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      if (local_1c != (int *)0x0) {
        if ((int *)0x1fffffff < local_1c) goto LAB_1002076c;
        puVar5 = (undefined4 *)FUN_10023cc0((uint)local_1c);
        *ppuVar10 = puVar5;
        *(undefined4 **)((int)this + 0x18) = puVar5;
        *(undefined4 **)((int)this + 0x1c) = *ppuVar10 + (int)local_1c * 2;
      }
      puVar5 = *ppuVar10;
      if (puVar9 == puVar8) {
LAB_100206e4:
        *(undefined4 **)((int)this + 0x18) = puVar5;
      }
      else {
        do {
          *puVar5 = *puVar9;
          puVar2 = puVar9 + 1;
          puVar9 = puVar9 + 2;
          puVar5[1] = *puVar2;
          puVar5 = puVar5 + 2;
        } while (puVar9 != puVar8);
        *(undefined4 **)((int)this + 0x18) = puVar5;
      }
    }
    else {
      if (local_30 < local_1c) {
        puVar8 = local_40 + (int)local_30 * 2;
        FUN_10005070((undefined1 *)((int)&param_1 + 3));
        memmove(local_28,puVar9,(int)puVar8 - (int)puVar9);
        puVar5 = *(undefined4 **)((int)this + 0x18);
        for (; puVar8 != local_3c; puVar8 = puVar8 + 2) {
          *puVar5 = *puVar8;
          puVar5[1] = puVar8[1];
          puVar5 = puVar5 + 2;
        }
        goto LAB_100206e4;
      }
      FUN_10005070(&local_12);
      piVar7 = local_28;
      memmove(local_28,puVar9,local_34);
      *(int **)((int)this + 0x18) = piVar7 + (int)local_1c * 2;
    }
  }
  uVar11 = FUN_10022700(local_18,local_20[3]);
  iVar3 = local_54;
  if (((char)uVar11 != '\0') &&
     (piVar7 = (int *)(*local_18 - local_54), (int)local_2c < (int)piVar7)) {
    FUN_1000a9d0(&local_74,local_18);
    local_2c = piVar7;
  }
  local_20 = (int *)local_20[6];
  goto joined_r0x10020578;
LAB_10020754:
  FUN_1000a9d0(local_18,&local_74);
  uVar6 = 1;
  FUN_100095e0((int)&local_74);
  goto LAB_1002050a;
}














char __thiscall FUN_10020780(void *this,int param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  size_t sVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void **ppvVar11;
  undefined8 uVar12;
  int local_74;
  void *local_70;
  int local_6c;
  void *local_64;
  undefined1 local_60 [12];
  int local_54;
  undefined1 local_50 [12];
  undefined4 local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  int local_34;
  size_t local_30;
  int local_2c;
  void *local_28;
  size_t local_24;
  int *local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_74 = *(int *)this;
  ppvVar11 = (void **)((int)this + 4);
  iVar8 = 0;
  local_1c = 0;
  local_20 = this;
  FUN_10007690(&local_70,(int *)ppvVar11);
  local_64 = *(void **)((int)this + 0x10);
  local_8 = 0;
  FUN_10007830(local_60,(int *)((int)this + 0x14));
  local_8 = 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar9 = *(int *)this;
    do {
      uVar12 = FUN_10022250(this,*(void **)(param_1 + 0xc));
      if ((char)uVar12 == '\0') {
        FUN_1000a880(this,&local_74);
        cVar7 = '\0';
        goto LAB_10020bdf;
      }
      iVar8 = *(int *)(param_1 + 0x14) + -1;
      if (iVar9 != *(int *)this) {
        iVar8 = local_1c;
      }
      iVar8 = iVar8 + 1;
      iVar9 = *(int *)this;
      local_1c = iVar8;
    } while (iVar8 < *(int *)(param_1 + 0x14));
  }
  local_54 = *(int *)this;
  FUN_10007690(local_50,(int *)ppvVar11);
  local_44 = *(undefined4 *)((int)this + 0x10);
  local_8._0_1_ = 2;
  FUN_10007830(&local_40,(int *)((int)this + 0x14));
  local_2c = *(int *)this;
  local_11 = '\0';
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar12 = FUN_10022250(this,*(void **)(*(int *)(param_1 + 0x1c) + 0xc));
  iVar9 = local_2c;
  if ((char)uVar12 != '\0') {
    if (param_2 == '\0') {
LAB_10020bbb:
      cVar7 = '\x01';
      goto LAB_10020bd7;
    }
    FUN_1000a880(&local_54,this);
    local_11 = '\x01';
    iVar9 = local_2c;
  }
  do {
    local_2c = iVar9;
    if ((*(int *)(param_1 + 0x18) != -1) &&
       (local_1c = iVar8 + 1, *(int *)(param_1 + 0x18) <= iVar8)) break;
    *(int *)this = local_2c;
    if (ppvVar11 != &local_70) {
      local_24 = local_6c - (int)local_70;
      local_28 = *ppvVar11;
      uVar10 = (int)local_24 >> 2;
      uVar6 = (int)ppvVar11[2] - (int)local_28 >> 2;
      uVar1 = (int)ppvVar11[1] - (int)local_28 >> 2;
      if (uVar6 < uVar10) {
        if (0x3fffffff < uVar10) {
LAB_10020bfd:
                    /* WARNING: Subroutine does not return */
          FUN_10023b50();
        }
        pvVar2 = (void *)(uVar6 >> 1);
        uVar1 = uVar10;
        if ((uVar6 <= 0x3fffffffU - (int)pvVar2) &&
           (uVar1 = (int)pvVar2 + uVar6, (int)pvVar2 + uVar6 < uVar10)) {
          uVar1 = uVar10;
        }
        if (local_28 != (void *)0x0) {
          pvVar5 = local_28;
          if ((0xfff < uVar6 * 4) &&
             (pvVar5 = *(void **)((int)local_28 + -4), uVar6 = (int)local_28 + (-4 - (int)pvVar5),
             local_28 = pvVar5, pvVar2 = pvVar5, 0x1f < uVar6)) goto LAB_10020bb5;
          local_28 = pvVar2;
          FUN_100284c9(pvVar5);
          pvVar2 = local_28;
        }
        local_28 = pvVar2;
        *ppvVar11 = (void *)0x0;
        ppvVar11[1] = (void *)0x0;
        ppvVar11[2] = (void *)0x0;
        if (uVar1 != 0) {
          if (0x3fffffff < uVar1) goto LAB_10020bfd;
          pvVar2 = (void *)FUN_10023c60(uVar1);
          *ppvVar11 = pvVar2;
          ppvVar11[1] = pvVar2;
          ppvVar11[2] = (void *)((int)*ppvVar11 + uVar1 * 4);
        }
        pvVar2 = *ppvVar11;
        FUN_10005070(&local_12);
        memmove(pvVar2,local_70,local_24);
        pvVar2 = (void *)(local_24 + (int)pvVar2);
      }
      else if (uVar1 < uVar10) {
        pvVar5 = (void *)((int)local_70 + uVar1 * 4);
        memmove(local_28,local_70,(int)pvVar5 - (int)local_70);
        pvVar2 = ppvVar11[1];
        FUN_10005070(&local_13);
        sVar3 = local_6c - (int)pvVar5;
        memmove(pvVar2,pvVar5,sVar3);
        pvVar2 = (void *)(sVar3 + (int)pvVar2);
        ppvVar11 = (void **)(local_20 + 1);
        this = local_20;
      }
      else {
        memmove(local_28,local_70,local_24);
        pvVar2 = (void *)((int)local_28 + uVar10 * 4);
      }
      ppvVar11[1] = pvVar2;
      ppvVar11[3] = local_64;
    }
    uVar12 = FUN_10022250(this,*(void **)(param_1 + 0xc));
    if ((char)uVar12 == '\0') break;
    local_34 = *(int *)this;
    uVar12 = FUN_10022250(this,*(void **)(*(int *)(param_1 + 0x1c) + 0xc));
    if ((char)uVar12 != '\0') {
      if (param_2 == '\0') goto LAB_10020bbb;
      local_54 = *(int *)this;
      FUN_1000ab80(local_50,ppvVar11);
      pvVar2 = local_40;
      if (&local_40 != (void **)((int)this + 0x14)) {
        local_24 = *(size_t *)((int)this + 0x18);
        local_28 = *(void **)((int)this + 0x14);
        local_30 = local_24 - (int)local_28;
        uVar10 = (int)local_30 >> 3;
        uVar6 = (int)local_38 - (int)local_40 >> 3;
        uVar1 = (int)local_3c - (int)local_40 >> 3;
        if (uVar6 < uVar10) {
          if (0x1fffffff < uVar10) {
LAB_10020c02:
                    /* WARNING: Subroutine does not return */
            FUN_10023b50();
          }
          uVar1 = uVar10;
          if ((uVar6 <= 0x1fffffff - (uVar6 >> 1)) && (uVar1 = uVar6 + (uVar6 >> 1), uVar1 < uVar10)
             ) {
            uVar1 = uVar10;
          }
          if (local_40 != (void *)0x0) {
            if ((0xfff < uVar6 * 8) &&
               (pvVar2 = *(void **)((int)local_40 + -4),
               0x1f < (uint)((int)local_40 + (-4 - (int)pvVar2)))) {
LAB_10020bb5:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(pvVar2);
          }
          local_40 = (void *)0x0;
          local_3c = (void *)0x0;
          local_38 = (void *)0x0;
          if (uVar1 != 0) {
            if (0x1fffffff < uVar1) goto LAB_10020c02;
            local_40 = (void *)FUN_10023cc0(uVar1);
            local_38 = (void *)((int)local_40 + uVar1 * 8);
          }
          pvVar2 = local_40;
          FUN_10005070(&local_14);
          sVar3 = local_30;
          memmove(pvVar2,local_28,local_30);
          local_3c = (void *)(sVar3 + (int)pvVar2);
          this = local_20;
        }
        else if (uVar1 < uVar10) {
          sVar3 = uVar1 * 8;
          pvVar2 = (void *)((int)local_28 + sVar3);
          memmove(local_40,local_28,sVar3);
          FUN_10005070(&local_15);
          pvVar5 = local_3c;
          local_24 = local_24 - (int)pvVar2;
          memmove(local_3c,pvVar2,local_24);
          local_3c = (void *)((int)pvVar5 + local_24);
          this = local_20;
        }
        else {
          memmove(local_40,local_28,local_30);
          local_3c = (void *)((int)pvVar2 + uVar10 * 8);
          this = local_20;
        }
      }
      local_11 = '\x01';
    }
    iVar8 = local_1c;
    iVar9 = local_34;
  } while (local_2c != local_34);
  piVar4 = &local_54;
  if (local_11 == '\0') {
    piVar4 = &local_74;
  }
  FUN_1000a880(this,piVar4);
  cVar7 = local_11;
LAB_10020bd7:
  FUN_100095e0((int)&local_54);
LAB_10020bdf:
  FUN_100095e0((int)&local_74);
  ExceptionList = local_10;
  return cVar7;
}













char __thiscall FUN_10020c10(void *this,int param_1,char param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  void **ppvVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  size_t sVar11;
  int *this_00;
  bool bVar12;
  undefined8 uVar13;
  int local_88;
  void *local_84;
  int local_80;
  void *local_78;
  undefined1 local_74 [12];
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined4 **local_5c;
  int local_58;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  size_t local_18;
  void **local_14;
  int *local_10;
  undefined4 *local_c;
  char local_5;
  
  local_60 = 0xffffffff;
  puStack_64 = &LAB_1002b590;
  local_68 = ExceptionList;
  ExceptionList = &local_68;
  local_88 = *(int *)this;
  ppvVar7 = (void **)((int)this + 4);
  local_24 = 0;
  local_14 = ppvVar7;
  local_10 = this;
  FUN_10007690(&local_84,(int *)ppvVar7);
  local_78 = *(void **)((int)this + 0x10);
  local_5c = (undefined4 **)((int)this + 0x14);
  local_60 = 0;
  FUN_100078c0(local_74,(int *)local_5c);
  piVar2 = local_10;
  local_60 = 1;
  this_00 = this;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar8 = *(int *)this;
    do {
      uVar13 = FUN_10022700(piVar2,*(int *)(param_1 + 0xc));
      if ((char)uVar13 == '\0') {
        FUN_1000a9d0(piVar2,&local_88);
        cVar5 = '\0';
        goto LAB_100210d3;
      }
      iVar4 = *(int *)(param_1 + 0x14) + -1;
      if (iVar8 != *piVar2) {
        iVar4 = local_24;
      }
      local_24 = iVar4 + 1;
      this_00 = piVar2;
      iVar8 = *piVar2;
    } while (local_24 < *(int *)(param_1 + 0x14));
  }
  local_58 = *this_00;
  FUN_10007690(local_54,(int *)ppvVar7);
  local_48 = *(undefined4 *)((int)this + 0x10);
  local_60._0_1_ = 2;
  FUN_100078c0(&local_44,this_00 + 5);
  iVar8 = *this_00;
  local_5 = '\0';
  local_60 = CONCAT31(local_60._1_3_,3);
  uVar13 = FUN_10022700(this_00,*(int *)(*(int *)(param_1 + 0x1c) + 0xc));
  if ((char)uVar13 != '\0') {
    if (param_2 == '\0') {
LAB_100210ae:
      cVar5 = '\x01';
      goto LAB_100210cb;
    }
    FUN_1000a9d0(&local_58,this_00);
    local_5 = '\x01';
  }
  do {
    if ((*(int *)(param_1 + 0x18) != -1) &&
       (iVar4 = local_24 + 1, bVar12 = *(int *)(param_1 + 0x18) <= local_24, local_24 = iVar4,
       bVar12)) break;
    *this_00 = iVar8;
    if (ppvVar7 != &local_84) {
      local_c = (undefined4 *)(local_80 - (int)local_84);
      pvVar1 = *ppvVar7;
      puVar9 = (undefined4 *)((int)local_c >> 2);
      puVar3 = (undefined4 *)((int)local_14[2] - (int)pvVar1 >> 2);
      local_28 = (undefined4 *)((int)local_14[1] - (int)pvVar1 >> 2);
      if (puVar3 < puVar9) {
        if ((undefined4 *)0x3fffffff < puVar9) {
LAB_100210f2:
                    /* WARNING: Subroutine does not return */
          FUN_10023b50();
        }
        puVar10 = puVar9;
        if ((puVar3 <= (undefined4 *)(0x3fffffff - ((uint)puVar3 >> 1))) &&
           (puVar10 = (undefined4 *)(((uint)puVar3 >> 1) + (int)puVar3), puVar10 < puVar9)) {
          puVar10 = puVar9;
        }
        if (pvVar1 != (void *)0x0) {
          pvVar6 = pvVar1;
          if ((0xfff < (uint)((int)puVar3 * 4)) &&
             (pvVar6 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar6))
             )) goto LAB_100210a8;
          FUN_100284c9(pvVar6);
        }
        ppvVar7 = local_14;
        *local_14 = (void *)0x0;
        local_14[1] = (void *)0x0;
        local_14[2] = (void *)0x0;
        if (puVar10 != (undefined4 *)0x0) {
          if ((undefined4 *)0x3fffffff < puVar10) goto LAB_100210f2;
          pvVar1 = (void *)FUN_10023c60((uint)puVar10);
          *ppvVar7 = pvVar1;
          ppvVar7[1] = pvVar1;
          ppvVar7[2] = (void *)((int)*ppvVar7 + (int)puVar10 * 4);
        }
        pvVar1 = *ppvVar7;
        FUN_10005070(&local_29);
        memmove(pvVar1,local_84,(size_t)local_c);
        pvVar1 = (void *)((int)local_c + (int)pvVar1);
      }
      else if (local_28 < puVar9) {
        memmove(pvVar1,local_84,(int)local_28 * 4);
        pvVar1 = (void *)local_10[2];
        FUN_10005070(&local_2a);
        pvVar6 = (void *)((int)local_84 + (int)local_28 * 4);
        sVar11 = local_80 - (int)pvVar6;
        memmove(pvVar1,pvVar6,sVar11);
        pvVar1 = (void *)(sVar11 + (int)pvVar1);
        ppvVar7 = local_14;
      }
      else {
        memmove(pvVar1,local_84,(size_t)local_c);
        pvVar1 = (void *)((int)pvVar1 + (int)puVar9 * 4);
        ppvVar7 = local_14;
      }
      ppvVar7[1] = pvVar1;
      ppvVar7[3] = local_78;
      this_00 = local_10;
    }
    uVar13 = FUN_10022700(this_00,*(int *)(param_1 + 0xc));
    if ((char)uVar13 == '\0') break;
    iVar4 = *this_00;
    uVar13 = FUN_10022700(local_10,*(int *)(*(int *)(param_1 + 0x1c) + 0xc));
    if ((char)uVar13 != '\0') {
      if (param_2 == '\0') goto LAB_100210ae;
      local_58 = *local_10;
      FUN_1000ab80(local_54,ppvVar7);
      if (&local_44 != local_5c) {
        local_34 = local_5c[1];
        puVar3 = *local_5c;
        local_18 = (int)local_34 - (int)puVar3;
        local_38 = local_40;
        local_20 = (undefined4 *)((int)local_40 - (int)local_44 >> 3);
        local_c = (undefined4 *)((int)local_18 >> 3);
        local_30 = (undefined4 *)((int)local_3c - (int)local_44 >> 3);
        local_28 = local_44;
        local_1c = puVar3;
        if (local_30 < local_c) {
          if ((undefined4 *)0x1fffffff < local_c) {
LAB_100210f7:
                    /* WARNING: Subroutine does not return */
            FUN_10023b50();
          }
          local_1c = (undefined4 *)((uint)local_30 >> 1);
          puVar9 = local_c;
          if ((local_30 <= (undefined4 *)(0x1fffffff - (int)local_1c)) &&
             (puVar9 = (undefined4 *)((int)local_30 + (int)local_1c),
             (undefined4 *)((int)local_30 + (int)local_1c) < local_c)) {
            puVar9 = local_c;
          }
          local_c = puVar9;
          if (local_44 != (undefined4 *)0x0) {
            puVar9 = local_44;
            if ((0xfff < (uint)((int)local_30 * 8)) &&
               (puVar9 = (undefined4 *)local_44[-1],
               0x1f < (uint)((int)local_44 + (-4 - (int)puVar9)))) {
LAB_100210a8:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_100284c9(puVar9);
          }
          local_44 = (undefined4 *)0x0;
          local_40 = (undefined4 *)0x0;
          local_3c = (undefined4 *)0x0;
          puVar9 = local_44;
          if (local_c != (undefined4 *)0x0) {
            if ((undefined4 *)0x1fffffff < local_c) goto LAB_100210f7;
            local_44 = (undefined4 *)FUN_10023cc0((uint)local_c);
            local_3c = local_44 + (int)local_c * 2;
            puVar9 = local_44;
          }
          for (; local_40 = puVar9, ppvVar7 = local_14, puVar3 != local_34; puVar3 = puVar3 + 2) {
            *local_40 = *puVar3;
            local_40[1] = puVar3[1];
            puVar9 = local_40 + 2;
          }
        }
        else if (local_20 < local_c) {
          sVar11 = (int)local_20 * 8;
          local_20 = puVar3 + (int)local_20 * 2;
          FUN_10005070(&local_2b);
          memmove(local_28,local_1c,sVar11);
          local_40 = local_38;
          for (puVar3 = local_20; ppvVar7 = local_14, puVar3 != local_34; puVar3 = puVar3 + 2) {
            *local_40 = *puVar3;
            local_40[1] = puVar3[1];
            local_40 = local_40 + 2;
          }
        }
        else {
          FUN_10005070(&local_2c);
          puVar9 = local_28;
          memmove(local_28,puVar3,local_18);
          local_40 = puVar9 + (int)local_c * 2;
          ppvVar7 = local_14;
        }
      }
      local_5 = '\x01';
    }
    bVar12 = iVar8 != iVar4;
    this_00 = local_10;
    iVar8 = iVar4;
  } while (bVar12);
  cVar5 = local_5;
  piVar2 = &local_58;
  if (local_5 == '\0') {
    piVar2 = &local_88;
  }
  FUN_1000a9d0(this_00,piVar2);
LAB_100210cb:
  FUN_100095e0((int)&local_58);
LAB_100210d3:
  FUN_100095e0((int)&local_88);
  ExceptionList = local_68;
  return cVar5;
}

















char __thiscall FUN_10021100(void *this,int param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined1 local_2c [12];
  int *local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b5c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x24) == 1) {
    cVar3 = FUN_10020780(this,param_1,param_2);
    ExceptionList = local_10;
    return cVar3;
  }
  local_40 = *(undefined4 *)this;
  param_1._3_1_ = '\0';
  FUN_10007690(local_3c,(int *)((int)this + 4));
  local_30 = *(undefined4 *)((int)this + 0x10);
  local_8 = 0;
  FUN_10007830(local_2c,(int *)((int)this + 0x14));
  local_20 = *(int **)(*(int *)((int)this + 0x40) + 4 + *(int *)(iVar2 + 0x20) * 8);
  piVar1 = (int *)(*(int *)((int)this + 0x40) + *(int *)(iVar2 + 0x20) * 8);
  local_1c = *piVar1;
  local_18 = *(int *)this;
  local_8 = 1;
  if ((param_3 == 0) || (*local_20 != local_18)) {
    local_11 = '\x01';
  }
  else {
    local_11 = '\0';
  }
  if ((*(int *)(iVar2 + 0x18) < 0) || (param_3 < *(int *)(iVar2 + 0x18))) {
    if (param_3 < *(int *)(iVar2 + 0x14)) {
      if (local_11 == '\0') goto LAB_1002125c;
      *piVar1 = param_3 + 1;
      piVar1[1] = (int)&local_18;
      pvVar5 = *(void **)(iVar2 + 0xc);
      goto LAB_10021262;
    }
    if (param_2 != '\0') {
      if (local_11 == '\0') {
        if (1 < param_3) goto LAB_1002126e;
      }
      else {
        *piVar1 = param_3 + 1;
        piVar1[1] = (int)&local_18;
        uVar4 = FUN_10022250(this,*(void **)(iVar2 + 0xc));
        param_1._3_1_ = (char)uVar4;
        if (param_1._3_1_ != '\0') goto LAB_10021279;
      }
      *piVar1 = local_1c;
      piVar1[1] = (int)local_20;
      FUN_1000a880(this,&local_40);
      goto LAB_1002125c;
    }
    uVar4 = FUN_10022250(this,*(void **)(*(int *)(iVar2 + 0x1c) + 0xc));
    param_1._3_1_ = (char)uVar4;
    if (param_1._3_1_ != '\0') goto LAB_10021279;
    if (local_11 != '\0') {
      FUN_1000a880(this,&local_40);
      *piVar1 = param_3 + 1;
      piVar1[1] = (int)&local_18;
      pvVar5 = *(void **)(iVar2 + 0xc);
      goto LAB_10021262;
    }
  }
  else {
LAB_1002125c:
    pvVar5 = *(void **)(*(int *)(iVar2 + 0x1c) + 0xc);
LAB_10021262:
    uVar4 = FUN_10022250(this,pvVar5);
    param_1._3_1_ = (char)uVar4;
    if (param_1._3_1_ != '\0') goto LAB_10021279;
  }
LAB_1002126e:
  FUN_1000a880(this,&local_40);
LAB_10021279:
  *piVar1 = local_1c;
  piVar1[1] = (int)local_20;
  FUN_100095e0((int)&local_40);
  ExceptionList = local_10;
  return param_1._3_1_;
}
















char __thiscall FUN_100212b0(void *this,int param_1,char param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined1 local_2c [12];
  int *local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b5c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x24) == 1) {
    cVar2 = FUN_10020c10(this,param_1,param_2);
    ExceptionList = local_10;
    return cVar2;
  }
  local_40 = *(undefined4 *)this;
  param_1._3_1_ = '\0';
  FUN_10007690(local_3c,(int *)((int)this + 4));
  local_30 = *(undefined4 *)((int)this + 0x10);
  local_8 = 0;
  FUN_100078c0(local_2c,(int *)((int)this + 0x14));
  local_20 = *(int **)(*(int *)((int)this + 0x40) + 4 + *(int *)(iVar4 + 0x20) * 8);
  piVar1 = (int *)(*(int *)((int)this + 0x40) + *(int *)(iVar4 + 0x20) * 8);
  local_1c = *piVar1;
  local_18 = *(int *)this;
  local_8 = 1;
  if ((param_3 == 0) || (*local_20 != local_18)) {
    local_11 = '\x01';
  }
  else {
    local_11 = '\0';
  }
  if ((*(int *)(iVar4 + 0x18) < 0) || (param_3 < *(int *)(iVar4 + 0x18))) {
    if (param_3 < *(int *)(iVar4 + 0x14)) {
      if (local_11 == '\0') goto LAB_1002140c;
      *piVar1 = param_3 + 1;
      piVar1[1] = (int)&local_18;
      iVar4 = *(int *)(iVar4 + 0xc);
      goto LAB_10021412;
    }
    if (param_2 != '\0') {
      if (local_11 == '\0') {
        if (1 < param_3) goto LAB_1002141e;
      }
      else {
        *piVar1 = param_3 + 1;
        piVar1[1] = (int)&local_18;
        uVar3 = FUN_10022700(this,*(int *)(iVar4 + 0xc));
        param_1._3_1_ = (char)uVar3;
        if (param_1._3_1_ != '\0') goto LAB_10021429;
      }
      *piVar1 = local_1c;
      piVar1[1] = (int)local_20;
      FUN_1000a9d0(this,&local_40);
      goto LAB_1002140c;
    }
    uVar3 = FUN_10022700(this,*(int *)(*(int *)(iVar4 + 0x1c) + 0xc));
    param_1._3_1_ = (char)uVar3;
    if (param_1._3_1_ != '\0') goto LAB_10021429;
    if (local_11 != '\0') {
      FUN_1000a9d0(this,&local_40);
      *piVar1 = param_3 + 1;
      piVar1[1] = (int)&local_18;
      iVar4 = *(int *)(iVar4 + 0xc);
      goto LAB_10021412;
    }
  }
  else {
LAB_1002140c:
    iVar4 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc);
LAB_10021412:
    uVar3 = FUN_10022700(this,iVar4);
    param_1._3_1_ = (char)uVar3;
    if (param_1._3_1_ != '\0') goto LAB_10021429;
  }
LAB_1002141e:
  FUN_1000a9d0(this,&local_40);
LAB_10021429:
  *piVar1 = local_1c;
  piVar1[1] = (int)local_20;
  FUN_100095e0((int)&local_40);
  ExceptionList = local_10;
  return param_1._3_1_;
}















void __thiscall FUN_10021460(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 8) {
    iVar2 = 9;
  }
  else if (iVar2 == 10) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = (uint)(iVar2 != 0xb) * 2 + 0xc;
  }
  puVar1 = (undefined4 *)FUN_10028499(0x18);
  puVar1[4] = 0;
  puVar1[1] = iVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = std::_Node_end_group::vftable;
  puVar1[5] = param_1;
  puVar1[4] = *(undefined4 *)((int)this + 4);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = *(int *)(iVar2 + 0xc);
    *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar1;
    iVar2 = *(int *)((int)this + 4);
  }
  *(undefined4 **)(iVar2 + 0xc) = puVar1;
  *(undefined4 **)((int)this + 4) = puVar1;
  return;
}












void FUN_100214f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_100214f0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_100284c9(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}














uint __thiscall FUN_10021530(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002af00;
  uVar6 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  cVar2 = *(char *)((int)param_2 + 0xd);
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar5, cVar2 == '\0') {
    FUN_10021530(param_1,(int *)param_2[2]);
    piVar3 = (int *)*param_2;
    piVar1 = param_2 + 5;
    iVar4 = *piVar1;
    local_8 = 0;
    FUN_10021710(*(int **)(iVar4 + 4));
    local_8 = 0xffffffff;
    *(int *)(*piVar1 + 4) = iVar4;
    *(int *)*piVar1 = iVar4;
    *(int *)(*piVar1 + 8) = iVar4;
    param_2[6] = 0;
    FUN_100284c9((void *)*piVar1);
    FUN_100284c9(param_2);
    ppvVar5 = ExceptionList;
    param_2 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  ExceptionList = local_10;
  return uVar6;
}












uint __thiscall FUN_100215e0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002af00;
  uVar6 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  cVar2 = *(char *)((int)param_2 + 0xd);
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar5, cVar2 == '\0') {
    FUN_100215e0(param_1,(int *)param_2[2]);
    piVar3 = (int *)*param_2;
    piVar1 = param_2 + 5;
    iVar4 = *piVar1;
    local_8 = 0;
    FUN_10021750(*(int **)(iVar4 + 4));
    local_8 = 0xffffffff;
    *(int *)(*piVar1 + 4) = iVar4;
    *(int *)*piVar1 = iVar4;
    *(int *)(*piVar1 + 8) = iVar4;
    param_2[6] = 0;
    FUN_100284c9((void *)*piVar1);
    FUN_100284c9(param_2);
    ppvVar5 = ExceptionList;
    param_2 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  ExceptionList = local_10;
  return uVar6;
}















void FUN_10021690(int *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_10021690((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[9]) {
      pvVar3 = (void *)param_1[4];
      pvVar4 = pvVar3;
      if ((0xfff < param_1[9] + 1U) &&
         (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar4);
    }
    param_1[8] = 0;
    param_1[9] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_100284c9(param_1);
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar2;
  } while( true );
}














void FUN_10021710(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_10021710((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_10009850(param_1 + 4);
    FUN_100284c9(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}

















void FUN_10021750(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_10021750((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_100098e0(param_1 + 4);
    FUN_100284c9(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}














void FUN_10021790(error_type param_1)

{
  code *pcVar1;
  
  std::_Xregex_error(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}















int * __thiscall FUN_100217a0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = param_1;
  std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_1);
  piVar5 = (int *)*piVar1;
  piVar6 = (int *)piVar1[2];
  if (((*(char *)((int)piVar5 + 0xd) == '\0') &&
      (piVar6 = piVar5, *(char *)(piVar1[2] + 0xd) == '\0')) &&
     (piVar6 = (int *)param_1[2], param_1 != piVar1)) {
    piVar5[1] = (int)param_1;
    *param_1 = *piVar1;
    piVar5 = param_1;
    if (param_1 != (int *)piVar1[2]) {
      piVar5 = (int *)param_1[1];
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        piVar6[1] = (int)piVar5;
      }
      *piVar5 = (int)piVar6;
      param_1[2] = piVar1[2];
      *(int **)(piVar1[2] + 4) = param_1;
    }
    if (*(int **)(*(int *)this + 4) == piVar1) {
      *(int **)(*(int *)this + 4) = param_1;
    }
    else {
      piVar3 = (int *)piVar1[1];
      if ((int *)*piVar3 == piVar1) {
        *piVar3 = (int)param_1;
      }
      else {
        piVar3[2] = (int)param_1;
      }
    }
    param_1[1] = piVar1[1];
    iVar4 = param_1[3];
    *(char *)(param_1 + 3) = (char)piVar1[3];
    *(char *)(piVar1 + 3) = (char)iVar4;
  }
  else {
    piVar5 = (int *)piVar1[1];
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar6[1] = (int)piVar5;
    }
    if (*(int **)(*(int *)this + 4) == piVar1) {
      *(int **)(*(int *)this + 4) = piVar6;
    }
    else if ((int *)*piVar5 == piVar1) {
      *piVar5 = (int)piVar6;
    }
    else {
      piVar5[2] = (int)piVar6;
    }
    piVar3 = *(int **)this;
    if ((int *)*piVar3 == piVar1) {
      piVar2 = piVar5;
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        piVar2 = FUN_10022bd0(piVar6);
      }
      *piVar3 = (int)piVar2;
      piVar3 = *(int **)this;
    }
    if ((int *)piVar3[2] == piVar1) {
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        iVar4 = FUN_10022bb0((int)piVar6);
        piVar3[2] = iVar4;
      }
      else {
        piVar3[2] = (int)piVar5;
      }
    }
  }
  if ((char)piVar1[3] == '\x01') {
    if (piVar6 != *(int **)(*(int *)this + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_100221c0(this,(int)piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_100230c0(this,piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_100221c0(this,(int)piVar3);
              break;
            }
LAB_10021970:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_100230c0(this,piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_10021970;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_100221c0(this,(int)piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_100230c0(this,piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return piVar1;
}

















uint * __cdecl FUN_100219e0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_10021a30(param_1,(short *)param_2);
  if (puVar1 != param_2) {
    while (((short)*puVar1 == 0x5c || ((short)*puVar1 == 0x2f))) {
      puVar1 = (uint *)((int)puVar1 + 2);
      if (puVar1 == param_2) {
        return param_2;
      }
    }
    for (; ((puVar1 != param_2 && (*(short *)((int)param_2 + -2) != 0x5c)) &&
           (*(short *)((int)param_2 + -2) != 0x2f)); param_2 = (uint *)((int)param_2 + -2)) {
    }
  }
  return param_2;
}











uint * __cdecl FUN_10021a30(uint *param_1,short *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  iVar5 = (int)param_2 - (int)param_1 >> 1;
  if (1 < iVar5) {
    uVar1 = *param_1;
    uVar4 = uVar1 >> 0x10;
    if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      return param_1 + 1;
    }
    if (((uVar1 & 0xffff) == 0x5c) || ((uVar1 & 0xffff) == 0x2f)) {
      if (3 < iVar5) {
        sVar6 = *(short *)((int)param_1 + 6);
        if (((sVar6 == 0x5c) || (sVar6 == 0x2f)) &&
           ((iVar5 == 4 || (uVar2 = FUN_1000bdf0((short)param_1[2]), (char)uVar2 == '\0')))) {
          sVar6 = (short)(uVar1 >> 0x10);
          uVar2 = FUN_1000bdf0(sVar6);
          if ((((char)uVar2 != '\0') && (((short)param_1[1] == 0x3f || ((short)param_1[1] == 0x2e)))
              ) || ((uVar4 == 0x3f && ((short)param_1[1] == sVar6)))) {
            return (uint *)((int)param_1 + 6);
          }
        }
      }
      if ((2 < iVar5) &&
         (((uVar4 == 0x5c || (uVar4 == 0x2f)) &&
          (uVar2 = FUN_1000bdf0((short)param_1[1]), (char)uVar2 == '\0')))) {
        puVar3 = (uint *)FUN_100068e0((short *)((int)param_1 + 6),param_2);
        return puVar3;
      }
    }
  }
  return param_1;
}












void FUN_10021b50(void *param_1)

{
  FUN_100284c9(param_1);
  return;
}














void FUN_10021b70(void *param_1)

{
  FUN_100284c9(param_1);
  return;
}

















void FUN_10021b90(void *param_1)

{
  FUN_100284c9(param_1);
  return;
}














void __fastcall FUN_10021bb0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b010;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_8 = 0;
  iVar3 = _Mtx_lock(*(undefined4 *)(param_1 + 8),uVar2);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar3 = _Cnd_signal(*(undefined4 *)(param_1 + 4));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  iVar3 = _Mtx_unlock(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  (**(code **)((int)pvVar1 + 4))();
  _Cnd_do_broadcast_at_thread_exit();
  FUN_100284c9(pvVar1);
  ExceptionList = local_10;
  return;
}













void __fastcall FUN_10021c60(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b010;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_8 = 0;
  iVar3 = _Mtx_lock(*(undefined4 *)(param_1 + 8),uVar2);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar3 = _Cnd_signal(*(undefined4 *)(param_1 + 4));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  iVar3 = _Mtx_unlock(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  (*(code *)puVar1[2])(*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
  FUN_100284c9(puVar1);
  ExceptionList = local_10;
  return;
}











void __fastcall FUN_10021d10(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b010;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_8 = 0;
  iVar3 = _Mtx_lock(*(undefined4 *)(param_1 + 8),uVar2);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar3 = _Cnd_signal(*(undefined4 *)(param_1 + 4));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  iVar3 = _Mtx_unlock(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  (**(code **)(puVar1 + 8))(*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
  FUN_100284c9(puVar1);
  ExceptionList = local_10;
  return;
}












void __fastcall FUN_10021dc0(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b010;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = *(ushort **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_8 = 0;
  iVar3 = _Mtx_lock(*(undefined4 *)(param_1 + 8),uVar2);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar3 = _Cnd_signal(*(undefined4 *)(param_1 + 4));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  iVar3 = _Mtx_unlock(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  FUN_1000b7f0(puVar1 + 2,*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
  FUN_100284c9(puVar1);
  ExceptionList = local_10;
  return;
}













undefined4 * __thiscall
FUN_10021e70(void *this,undefined4 *param_1,int param_2,int param_3,uint param_4,char *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int local_30 [2];
  int local_28 [3];
  uint local_1c;
  int local_18 [2];
  uint *local_10;
  int *local_c;
  uint *local_8;
  int local_4;
  
  uVar6 = (param_2 - *(int *)this >> 2) * 0x20 + param_3;
  local_1c = uVar6;
  if (param_4 != 0) {
    local_c = this;
    if (0x7fffffffU - *(int *)((int)this + 0xc) < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_10023b40();
    }
    local_4 = 0;
    FUN_10005e50(this,param_4 + 0x1f + *(int *)((int)this + 0xc) >> 5,this,&local_4);
    if (*(int *)((int)this + 0xc) == 0) {
      *(uint *)((int)this + 0xc) = param_4;
      local_1c = uVar6;
    }
    else {
      FUN_100249e0(this,(int *)&local_8);
      *(uint *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_4;
      puVar2 = (undefined4 *)FUN_100249e0(this,local_28);
      local_18[1] = 0;
      local_10 = (uint *)*puVar2;
      uVar4 = puVar2[1];
      local_18[0] = *local_c;
      piVar3 = (int *)FUN_1000b720(local_18,local_30,uVar6);
      puVar5 = (uint *)*piVar3;
      iVar1 = piVar3[1];
      while ((puVar5 != local_8 || (this = local_c, iVar1 != local_4))) {
        if (local_4 == 0) {
          local_4 = 0x1f;
          local_8 = local_8 + -1;
        }
        else {
          local_4 = local_4 + -1;
        }
        if (uVar4 == 0) {
          uVar4 = 0x1f;
          local_10 = local_10 + -1;
        }
        else {
          uVar4 = uVar4 - 1;
        }
        if ((*local_8 & 1 << ((byte)local_4 & 0x1f)) == 0) {
          *local_10 = *local_10 & ~(1 << (uVar4 & 0x1f));
        }
        else {
          *local_10 = *local_10 | 1 << (uVar4 & 0x1f);
        }
      }
    }
  }
  if (((int)local_1c < 0) && (local_1c != 0)) {
    iVar1 = -((~local_1c >> 5) * 4 + 4);
  }
  else {
    iVar1 = (local_1c >> 5) * 4;
  }
  puVar5 = (uint *)(*(int *)this + iVar1);
  local_1c = local_1c & 0x1f;
  *param_1 = puVar5;
  param_1[1] = local_1c;
  if (((int)param_4 < 0) && (local_1c < -param_4)) {
    iVar1 = -((~(param_4 + local_1c) >> 5) * 4 + 4);
  }
  else {
    iVar1 = (param_4 + local_1c >> 5) * 4;
  }
  puVar7 = (uint *)((int)puVar5 + iVar1);
  uVar6 = param_4 + local_1c;
  while ((puVar5 != puVar7 || (local_1c != (uVar6 & 0x1f)))) {
    if (*param_5 == '\0') {
      uVar4 = *puVar5 & ~(1 << (local_1c & 0x1f));
    }
    else {
      uVar4 = *puVar5 | 1 << (local_1c & 0x1f);
    }
    *puVar5 = uVar4;
    if (local_1c < 0x1f) {
      local_1c = local_1c + 1;
    }
    else {
      local_1c = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return param_1;
}













bool __cdecl FUN_10022050(int param_1)

{
  if (*(short *)(param_1 + 0x2c) == 0x2e) {
    if (*(short *)(param_1 + 0x2e) == 0) {
      return true;
    }
    if (*(short *)(param_1 + 0x2e) == 0x2e) {
      return *(short *)(param_1 + 0x30) == 0;
    }
  }
  return false;
}















uint __fastcall FUN_10022080(int *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*param_1 + 1);
  if (pcVar2 != (char *)param_1[2]) {
    if (((param_1[0x14] & 8U) == 0) && ((*pcVar2 == '(' || (*pcVar2 == ')')))) {
LAB_100220ab:
      return CONCAT31((int3)((uint)pcVar2 >> 8),1);
    }
    if ((param_1[0x14] & 0x10U) == 0) {
      cVar1 = *pcVar2;
      pcVar2 = (char *)CONCAT31((int3)((uint)pcVar2 >> 8),cVar1);
      if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_100220ab;
    }
  }
  return (uint)pcVar2 & 0xffffff00;
}


















uint __fastcall FUN_100220c0(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = param_1[0x18];
  if (((uVar2 & 0x100) == 0) && (pbVar1 = (byte *)*param_1, pbVar1 == (byte *)param_1[0x13])) {
    if (pbVar1 == (byte *)param_1[0x14]) {
      return CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0xc) == 0);
    }
    if (((uVar2 & 4) == 0) && (uVar2 = (uint)*pbVar1, (&DAT_1002d408)[uVar2] != '\0')) {
      return 1;
    }
  }
  else {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)param_1[0x14]) {
      return (uint)((&DAT_1002d408)[pbVar1[-1]] != (&DAT_1002d408)[*pbVar1]);
    }
    if (((uVar2 & 8) == 0) && (uVar2 = (uint)pbVar1[-1], (&DAT_1002d408)[uVar2] != '\0')) {
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}










void __thiscall FUN_10022130(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _Thrd_start(param_1,&LAB_1001ebb0,this);
  iVar3 = 1;
  if (iVar2 != 4) {
    iVar3 = iVar2;
  }
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  cVar1 = *(char *)((int)this + 0xc);
  while (cVar1 == '\0') {
    iVar3 = _Cnd_wait(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8));
    if (iVar3 != 0) {
      std::_Throw_C_error(iVar3);
    }
    cVar1 = *(char *)((int)this + 0xc);
  }
  return;
}














longlong __cdecl FUN_10022190(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  do {
    lVar3 = *param_1;
    lVar2 = *param_1;
    LOCK();
    lVar1 = *param_1;
    if (*param_1 == lVar1) {
      *param_1 = *param_1;
      iVar4 = (int)lVar3;
      iVar5 = *(int *)((int)param_1 + 4);
    }
    else {
      iVar4 = (int)lVar1;
      iVar5 = (int)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
  } while (((int)lVar3 != iVar4) || (*(int *)((int)param_1 + 4) != iVar5));
  return lVar2;
}













void __thiscall FUN_100221c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)this + 4)) {
    *(int **)(*(int *)this + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}














void __cdecl FUN_10022210(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = std::_Execute_once((once_flag *)&DAT_10034848,
                             (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_10002d40,&DAT_1003484c
                            );
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x1002222b. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    terminate();
    return;
  }
  *param_1 = param_2;
  param_1[1] = &DAT_1003484c;
  return;
}















undefined8 __thiscall FUN_10022250(void *this,void *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char *extraout_EAX;
  undefined3 uVar8;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  undefined8 uVar11;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b5e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar9 = *(int *)((int)this + 0x7c);
  if (0 < iVar9) {
    iVar9 = iVar9 + -1;
    *(int *)((int)this + 0x7c) = iVar9;
    if (iVar9 < 1) {
LAB_10022690:
      std::_Xregex_error(0xc);
      goto LAB_10022697;
    }
  }
  pcVar4 = *(char **)((int)this + 0x78);
  if (0 < (int)pcVar4) {
    pcVar4 = pcVar4 + -1;
    *(char **)((int)this + 0x78) = pcVar4;
    if ((int)pcVar4 < 1) {
LAB_10022697:
      std::_Xregex_error(0xb);
      return CONCAT44(CONCAT31((int3)((uint)extraout_EDX >> 8),(char)extraout_EDX + *extraout_EAX),
                      extraout_EAX);
    }
  }
  uVar7 = (uint)this & 0xffffff00;
  local_14 = uVar7;
  if (param_1 != (void *)0x0) {
LAB_100222b4:
    iVar9 = *(int *)((int)param_1 + 4);
    pcVar4 = (char *)(iVar9 + -1);
    uVar8 = (undefined3)(uVar7 >> 8);
    switch(pcVar4) {
    case (char *)0x0:
    case (char *)0x7:
    case (char *)0x8:
    case (char *)0x10:
    case (char *)0x13:
      break;
    case (char *)0x1:
      local_14 = *(uint *)((int)this + 0x60);
      if (((local_14 & 0x100) == 0) &&
         (pcVar4 = *(char **)this, pcVar4 == *(char **)((int)this + 0x4c))) {
        local_14 = local_14 & 0xffffff01;
        uVar7 = local_14;
      }
      else {
        pcVar4 = *(char **)this;
        local_14 = CONCAT31((int3)(local_14 >> 8),pcVar4[-1] != '\n');
        uVar7 = local_14;
      }
      break;
    case (char *)0x2:
      pcVar4 = *(char **)this;
      if (pcVar4 == *(char **)((int)this + 0x50)) {
        local_14 = CONCAT31((uint3)(*(uint *)((int)this + 0x60) >> 9),
                            (char)(*(uint *)((int)this + 0x60) >> 1)) & 0xffffff01;
        uVar7 = local_14;
      }
      else {
        local_14 = CONCAT31(uVar8,*pcVar4 != '\n');
        uVar7 = local_14;
      }
      break;
    case (char *)0x3:
      pcVar4 = (char *)FUN_100220c0(this);
      local_14 = (uint)((byte)pcVar4 == ((byte)*(undefined4 *)((int)param_1 + 8) & 1));
      uVar7 = local_14;
      break;
    case (char *)0x4:
      pcVar4 = *(char **)this;
      if (((pcVar4 == *(char **)((int)this + 0x50)) || (*pcVar4 == '\n')) || (*pcVar4 == '\r'))
      goto LAB_10022661;
      pcVar4 = pcVar4 + 1;
      *(char **)this = pcVar4;
      break;
    case (char *)0x5:
      pcVar4 = FUN_10001d00(*(char **)this,*(char **)((int)this + 0x50),
                            *(char **)((int)param_1 + 0x1c),
                            *(char **)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x18),
                            *(undefined4 **)((int)this + 0x70),*(uint *)((int)this + 0x5c));
      if (pcVar4 == *(char **)this) goto LAB_10022661;
      *(char **)this = pcVar4;
      uVar7 = local_14;
      break;
    case (char *)0x6:
      pcVar5 = *(char **)this;
      if (pcVar5 != *(char **)((int)this + 0x50)) {
        local_18 = CONCAT31(local_18._1_3_,*pcVar5);
        if ((*(uint *)((int)this + 0x5c) & 0x100) != 0) {
          cVar3 = std::ctype<char>::tolower
                            (*(ctype<char> **)(*(int *)((int)this + 0x70) + 4),*pcVar5);
          pcVar5 = *(char **)this;
          local_18 = CONCAT31(local_18._1_3_,cVar3);
        }
        pcVar6 = pcVar5 + 1;
        if ((*(uint **)((int)param_1 + 0x14) == (uint *)0x0) ||
           (pcVar4 = FUN_10004cb0(pcVar5,*(char **)((int)this + 0x50),
                                  *(uint **)((int)param_1 + 0x14)), pcVar4 == pcVar5)) {
          iVar9 = *(int *)((int)param_1 + 0x20);
          if (iVar9 != 0) {
            if ((*(uint *)((int)this + 0x5c) & 0x800) == 0) {
              uVar7 = local_18 & 0xff;
            }
            else {
              uVar7 = FUN_100259e0(*(undefined4 **)((int)this + 0x70));
            }
            uVar7 = FUN_10004d90(uVar7 & 0xff,iVar9);
            if ((char)uVar7 != '\0') {
              pcVar5 = (char *)0x1;
              goto LAB_1002245e;
            }
          }
          if ((*(int *)((int)param_1 + 0x18) == 0) ||
             ((*(byte *)((uint)((byte)local_18 >> 3) + *(int *)((int)param_1 + 0x18)) &
              (byte)(1 << ((byte)local_18 & 7))) == 0)) {
            pcVar5 = (char *)0x0;
          }
          else {
            pcVar5 = (char *)0x1;
          }
        }
        else {
          pcVar5 = (char *)0x1;
          pcVar6 = pcVar4;
        }
LAB_1002245e:
        pcVar4 = (char *)(*(uint *)((int)param_1 + 8) & 1);
        if (pcVar5 == pcVar4) goto LAB_10022661;
        uVar7 = 0;
        *(char **)this = pcVar6;
        local_14 = uVar7;
        goto LAB_1002238c;
      }
LAB_10022661:
      uVar7 = 1;
LAB_10022663:
      iVar9 = *(int *)((int)this + 0x7c);
      goto LAB_10022666;
    case (char *)0x9:
    case (char *)0xa:
      local_30 = *(undefined4 *)this;
      local_1c = local_30;
      FUN_10007690(local_2c,(int *)((int)this + 4));
      local_20 = *(undefined4 *)((int)this + 0x10);
      local_8 = 0;
      uVar11 = FUN_10022250(this,*(void **)((int)param_1 + 0x14));
      if ((bool)(char)uVar11 == (iVar9 == 0xb)) {
        *(undefined4 *)this = local_30;
        FUN_1000ab80((int *)((int)this + 4),local_2c);
        local_14 = 1;
      }
      else {
        *(undefined4 *)this = local_1c;
      }
      local_8 = 0xffffffff;
      pcVar4 = (char *)FUN_10009330((int)&local_30);
      uVar7 = local_14;
      break;
    case (char *)0xb:
      goto switchD_100222c8_caseD_b;
    case (char *)0xc:
      pcVar4 = *(char **)this;
      *(char **)(*(int *)((int)this + 0x14) + *(int *)((int)param_1 + 0x14) * 8) = pcVar4;
      uVar10 = *(uint *)((int)this + 0x10);
      uVar7 = local_14;
      if (*(uint *)((int)param_1 + 0x14) < uVar10) {
        do {
          uVar10 = uVar10 - 1;
          puVar1 = (uint *)(*(int *)((int)this + 4) + (uVar10 >> 5) * 4);
          pcVar4 = (char *)(*puVar1 & ~(1 << (uVar10 & 0x1f)));
          *puVar1 = (uint)pcVar4;
        } while (*(uint *)((int)param_1 + 0x14) < uVar10);
      }
      break;
    case (char *)0xd:
      iVar9 = *(int *)((int)param_1 + 0x14);
      if ((*(char *)((int)this + 0x65) != '\0') || (*(int *)(iVar9 + 0x14) != 0)) {
        puVar1 = (uint *)(*(int *)((int)this + 4) + (*(uint *)(iVar9 + 0x14) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << (*(uint *)(iVar9 + 0x14) & 0x1f);
        pcVar4 = *(char **)this;
        *(char **)(*(int *)((int)this + 0x14) + 4 + *(int *)(iVar9 + 0x14) * 8) = pcVar4;
        uVar7 = local_14;
      }
      break;
    case (char *)0xe:
      pcVar4 = (char *)(1 << ((byte)*(undefined4 *)((int)param_1 + 0x14) & 0x1f));
      uVar7 = local_14;
      if ((*(uint *)(*(int *)((int)this + 4) + (*(uint *)((int)param_1 + 0x14) >> 5) * 4) &
          (uint)pcVar4) != 0) {
        pcVar5 = *(char **)(*(int *)((int)this + 0x14) + *(int *)((int)param_1 + 0x14) * 8);
        pcVar4 = *(char **)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)param_1 + 0x14) * 8);
        pcVar6 = *(char **)this;
        if ((pcVar5 != pcVar4) &&
           (pcVar4 = FUN_10001d00(*(char **)this,*(char **)((int)this + 0x50),pcVar5,pcVar4,
                                  *(undefined4 **)((int)this + 0x70),*(uint *)((int)this + 0x5c)),
           pcVar6 = pcVar4, pcVar4 == *(char **)this)) goto LAB_10022661;
        *(char **)this = pcVar6;
        uVar7 = local_14;
      }
      break;
    case (char *)0xf:
      uVar2 = FUN_1001fdc0(this,param_1);
      pcVar4 = (char *)CONCAT31(extraout_var,uVar2);
      goto LAB_100225bd;
    case (char *)0x11:
      cVar3 = FUN_10021100(this,(int)param_1,(byte)(*(uint *)((int)param_1 + 8) >> 1) & 1,0);
      pcVar4 = (char *)CONCAT31(extraout_var_00,cVar3);
LAB_100225bd:
      uVar7 = local_14 & 0xff;
      local_14 = uVar7;
      if ((char)pcVar4 == '\0') {
        uVar7 = 1;
        local_14 = uVar7;
      }
switchD_100222c8_caseD_b:
      param_1 = (void *)0x0;
      break;
    case (char *)0x12:
      iVar9 = *(int *)((int)param_1 + 0x14);
      pcVar4 = *(char **)((int)this + 0x40);
      if (*(int *)(iVar9 + 0x24) == 0) {
        cVar3 = FUN_10021100(this,iVar9,(byte)(*(uint *)(iVar9 + 8) >> 1) & 1,
                             *(int *)(pcVar4 + *(int *)(iVar9 + 0x20) * 8));
        pcVar4 = (char *)CONCAT31(extraout_var_01,cVar3);
        goto LAB_100225bd;
      }
LAB_10022657:
      param_1 = (void *)0x0;
      uVar7 = local_14;
      break;
    case (char *)0x14:
      if ((((*(uint *)((int)this + 0x60) & 0x2020) == 0) ||
          (pcVar4 = *(char **)((int)this + 0x4c), pcVar4 != *(char **)this)) &&
         ((*(char *)((int)this + 0x74) == '\0' ||
          (pcVar4 = *(char **)this, pcVar4 == *(char **)((int)this + 0x50))))) {
        if ((*(char *)((int)this + 100) == '\0') ||
           (pcVar4 = (char *)FUN_1001e7f0((int)this), (char)pcVar4 != '\0')) {
          pcVar4 = (char *)FUN_1000a880((void *)((int)this + 0x20),this);
          *(undefined1 *)((int)this + 100) = 1;
        }
        goto LAB_10022657;
      }
      local_14 = CONCAT31(uVar8,1);
      param_1 = (void *)0x0;
      uVar7 = local_14;
      break;
    default:
      std::_Xregex_error(0xd);
      goto LAB_10022690;
    }
    if ((char)uVar7 != '\0') goto LAB_10022663;
LAB_1002238c:
    if ((param_1 == (void *)0x0) ||
       (param_1 = *(void **)((int)param_1 + 0xc), param_1 == (void *)0x0)) goto LAB_10022663;
    goto LAB_100222b4;
  }
LAB_10022666:
  if (0 < iVar9) {
    pcVar4 = (char *)(iVar9 + 1);
    *(char **)((int)this + 0x7c) = pcVar4;
  }
  ExceptionList = local_10;
  return CONCAT44(iVar9,CONCAT31((int3)((uint)pcVar4 >> 8),(char)uVar7 == '\0'));
}

















/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __thiscall FUN_10022700(void *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char *extraout_EAX;
  char extraout_CH;
  undefined3 uVar10;
  char *pcVar8;
  uint uVar9;
  char cVar11;
  int iVar12;
  undefined4 extraout_EDX;
  undefined3 uVar14;
  int unaff_EBX;
  char *unaff_ESI;
  char *pcVar15;
  uint uVar16;
  undefined2 in_GS;
  undefined8 uVar17;
  undefined4 local_38;
  undefined4 local_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_18;
  undefined3 uStack_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  uint *puVar13;
  
  cVar5 = (char)unaff_EBX;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b618;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar12 = *(int *)((int)this + 0x7c);
  if (0 < iVar12) {
    iVar12 = iVar12 + -1;
    *(int *)((int)this + 0x7c) = iVar12;
    if (iVar12 < 1) {
LAB_10022b4a:
      cVar5 = (char)unaff_EBX;
      std::_Xregex_error(0xc);
      goto LAB_10022b51;
    }
  }
  pcVar6 = *(char **)((int)this + 0x78);
  if (0 < (int)pcVar6) {
    pcVar6 = pcVar6 + -1;
    *(char **)((int)this + 0x78) = pcVar6;
    if ((int)pcVar6 < 1) {
LAB_10022b51:
      std::_Xregex_error(0xb);
      uVar14 = (undefined3)((uint)extraout_EDX >> 8);
      cVar11 = (char)extraout_EDX + *extraout_EAX;
      puVar13 = (uint *)CONCAT31(uVar14,cVar11);
      uVar10 = (undefined3)((uint)extraout_EAX >> 8);
      if (cVar11 != '\0' && SCARRY1((char)extraout_EDX,*extraout_EAX) == cVar11 < '\0') {
        bVar4 = (byte)extraout_EAX - (char)*puVar13;
        *(char *)((int)puVar13 + -0x1deffdd7) =
             *(char *)((int)puVar13 + -0x1deffdd7) + (char)((uint)extraout_EAX >> 8) +
             ((byte)extraout_EAX < (byte)*puVar13);
        uVar9 = *puVar13;
        *puVar13 = *puVar13 - CONCAT31(uVar10,bVar4);
        *unaff_ESI = *unaff_ESI + cVar5 + (uVar9 < CONCAT31(uVar10,bVar4));
        cVar5 = bVar4 - (char)*puVar13;
        _DAT_3a10022a = (char *)CONCAT31(uVar10,cVar5);
        *(char *)((int)this + 0x2a) =
             *(char *)((int)this + 0x2a) + extraout_CH + (bVar4 < (byte)*puVar13);
        cVar11 = cVar11 + *_DAT_3a10022a + *_DAT_3a10022a;
        *(undefined2 *)CONCAT31(uVar14,cVar11) = in_GS;
        pcVar6 = (char *)CONCAT31(uVar14,cVar11 + *_DAT_3a10022a);
        *pcVar6 = *pcVar6 - cVar5;
        pcVar2 = (code *)swi(3);
        uVar17 = (*pcVar2)();
        return uVar17;
      }
      return CONCAT44(CONCAT31(uVar14,cVar11 + *extraout_EAX + *(char *)CONCAT31(uVar10,0x27)),
                      (char *)CONCAT31(uVar10,0x27));
    }
  }
  uVar9 = (uint)this & 0xffffff00;
  local_14 = uVar9;
  if (param_1 != 0) {
LAB_10022764:
    iVar12 = *(int *)(param_1 + 4);
    unaff_ESI = (char *)0x1;
    pcVar6 = (char *)(iVar12 + -1);
    uVar10 = (undefined3)(uVar9 >> 8);
    switch(pcVar6) {
    case (char *)0x0:
    case (char *)0x7:
    case (char *)0x8:
    case (char *)0x10:
    case (char *)0x13:
      break;
    case (char *)0x1:
      local_14 = *(uint *)((int)this + 0x60);
      if (((local_14 & 0x100) == 0) &&
         (pcVar6 = *(char **)this, pcVar6 == *(char **)((int)this + 0x4c))) {
        local_14 = local_14 & 0xffffff01;
        uVar9 = local_14;
      }
      else {
        pcVar6 = *(char **)this;
        local_14 = CONCAT31((int3)(local_14 >> 8),pcVar6[-1] != '\n');
        uVar9 = local_14;
      }
      break;
    case (char *)0x2:
      pcVar6 = *(char **)this;
      if (pcVar6 == *(char **)((int)this + 0x50)) {
        local_14 = CONCAT31((uint3)(*(uint *)((int)this + 0x60) >> 9),
                            (char)(*(uint *)((int)this + 0x60) >> 1)) & 0xffffff01;
        uVar9 = local_14;
      }
      else {
        local_14 = CONCAT31(uVar10,*pcVar6 != '\n');
        uVar9 = local_14;
      }
      break;
    case (char *)0x3:
      pcVar6 = (char *)FUN_100220c0(this);
      local_14 = (uint)((byte)pcVar6 == ((byte)*(undefined4 *)(param_1 + 8) & 1));
      uVar9 = local_14;
      break;
    case (char *)0x4:
      pcVar6 = *(char **)this;
      if (((pcVar6 == *(char **)((int)this + 0x50)) || (*pcVar6 == '\n')) || (*pcVar6 == '\r')) {
LAB_10022b1b:
        uVar9 = 1;
LAB_10022b1d:
        iVar12 = *(int *)((int)this + 0x7c);
        goto LAB_10022b20;
      }
      pcVar6 = pcVar6 + 1;
      *(char **)this = pcVar6;
      break;
    case (char *)0x5:
      puVar7 = (undefined4 *)
               FUN_10001e20(&local_1c,*(char **)this,*(char **)((int)this + 0x50),
                            *(char **)(param_1 + 0x1c),
                            *(char **)(param_1 + 0x1c) + *(int *)(param_1 + 0x18),
                            *(undefined4 **)((int)this + 0x70),*(uint *)((int)this + 0x5c));
LAB_10022828:
      pcVar6 = (char *)*puVar7;
      if (pcVar6 == *(char **)this) goto LAB_10022b1b;
LAB_10022835:
      *(char **)this = pcVar6;
      uVar9 = local_14;
      break;
    case (char *)0x6:
      pcVar6 = *(char **)this;
      if (pcVar6 == *(char **)((int)this + 0x50)) goto LAB_10022b1b;
      _local_18 = CONCAT31(uStack_17,*pcVar6);
      if ((*(uint *)((int)this + 0x5c) & 0x100) != 0) {
        cVar5 = std::ctype<char>::tolower(*(ctype<char> **)(*(int *)((int)this + 0x70) + 4),*pcVar6)
        ;
        _local_18 = CONCAT31(uStack_17,cVar5);
        pcVar6 = *(char **)this;
      }
      pcVar15 = pcVar6 + 1;
      if (*(uint **)(param_1 + 0x14) == (uint *)0x0) {
LAB_100228b5:
        iVar12 = *(int *)(param_1 + 0x20);
        if (iVar12 != 0) {
          if ((*(uint *)((int)this + 0x5c) & 0x800) == 0) {
            bVar4 = local_18;
          }
          else {
            bVar4 = FUN_100259e0(*(undefined4 **)((int)this + 0x70));
          }
          uVar9 = FUN_10004d90((uint)bVar4,iVar12);
          if ((char)uVar9 != '\0') {
            pcVar8 = (char *)0x1;
            goto LAB_1002291f;
          }
        }
        if ((*(int *)(param_1 + 0x18) == 0) ||
           ((*(byte *)((uint)(local_18 >> 3) + *(int *)(param_1 + 0x18)) &
            (byte)(1 << (local_18 & 7))) == 0)) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)0x1;
        }
      }
      else {
        puVar7 = (undefined4 *)
                 FUN_10004d10(&local_20,*(char **)this,*(char **)((int)this + 0x50),
                              *(uint **)(param_1 + 0x14));
        if ((char *)*puVar7 == *(char **)this) goto LAB_100228b5;
        pcVar8 = (char *)0x1;
        pcVar15 = (char *)*puVar7;
      }
LAB_1002291f:
      pcVar6 = (char *)(*(uint *)(param_1 + 8) & 1);
      if (pcVar8 == pcVar6) goto LAB_10022b1b;
      uVar9 = 0;
      *(char **)this = pcVar15;
      local_14 = uVar9;
      goto LAB_10022842;
    case (char *)0x9:
    case (char *)0xa:
      uVar1 = *(undefined4 *)this;
      local_38 = uVar1;
      FUN_10007690(local_34,(int *)((int)this + 4));
      local_28 = *(undefined4 *)((int)this + 0x10);
      local_8 = 0;
      uVar17 = FUN_10022700(this,*(int *)(param_1 + 0x14));
      if ((bool)(char)uVar17 == (iVar12 == 0xb)) {
        *(undefined4 *)this = local_38;
        FUN_1000ab80((void *)((int)this + 4),local_34);
        local_14 = 1;
      }
      else {
        *(undefined4 *)this = uVar1;
      }
      local_8 = 0xffffffff;
      pcVar6 = (char *)FUN_10009330((int)&local_38);
      uVar9 = local_14;
      break;
    case (char *)0xb:
      goto switchD_10022778_caseD_b;
    case (char *)0xc:
      pcVar6 = *(char **)this;
      *(char **)(*(int *)((int)this + 0x14) + *(int *)(param_1 + 0x14) * 8) = pcVar6;
      uVar16 = *(uint *)((int)this + 0x10);
      uVar9 = local_14;
      if (*(uint *)(param_1 + 0x14) < uVar16) {
        do {
          uVar16 = uVar16 - 1;
          puVar13 = (uint *)(*(int *)((int)this + 4) + (uVar16 >> 5) * 4);
          pcVar6 = (char *)(*puVar13 & ~(1 << (uVar16 & 0x1f)));
          *puVar13 = (uint)pcVar6;
        } while (*(uint *)(param_1 + 0x14) < uVar16);
      }
      break;
    case (char *)0xd:
      iVar12 = *(int *)(param_1 + 0x14);
      if ((*(char *)((int)this + 0x65) != '\0') || (*(int *)(iVar12 + 0x14) != 0)) {
        puVar13 = (uint *)(*(int *)((int)this + 4) + (*(uint *)(iVar12 + 0x14) >> 5) * 4);
        *puVar13 = *puVar13 | 1 << (*(uint *)(iVar12 + 0x14) & 0x1f);
        pcVar6 = *(char **)this;
        *(char **)(*(int *)((int)this + 0x14) + 4 + *(int *)(iVar12 + 0x14) * 8) = pcVar6;
        uVar9 = local_14;
      }
      break;
    case (char *)0xe:
      pcVar6 = (char *)(1 << ((byte)*(undefined4 *)(param_1 + 0x14) & 0x1f));
      uVar9 = local_14;
      if ((*(uint *)(*(int *)((int)this + 4) + (*(uint *)(param_1 + 0x14) >> 5) * 4) & (uint)pcVar6)
          != 0) {
        pcVar6 = *(char **)this;
        puVar7 = (undefined4 *)(*(int *)((int)this + 0x14) + *(int *)(param_1 + 0x14) * 8);
        pcVar15 = (char *)*puVar7;
        pcVar8 = (char *)puVar7[1];
        if (pcVar15 != pcVar8) {
          puVar7 = FUN_10001f90(&local_24,pcVar6,*(char **)((int)this + 0x50),pcVar15,pcVar8,
                                *(undefined4 **)((int)this + 0x70),*(uint *)((int)this + 0x5c));
          goto LAB_10022828;
        }
        goto LAB_10022835;
      }
      break;
    case (char *)0xf:
      uVar3 = FUN_100202e0(this,param_1);
      pcVar6 = (char *)CONCAT31(extraout_var,uVar3);
      goto LAB_10022a77;
    case (char *)0x11:
      cVar5 = FUN_100212b0(this,param_1,(byte)(*(uint *)(param_1 + 8) >> 1) & 1,0);
      pcVar6 = (char *)CONCAT31(extraout_var_00,cVar5);
LAB_10022a77:
      uVar9 = local_14 & 0xff;
      local_14 = uVar9;
      if ((char)pcVar6 == '\0') {
        uVar9 = 1;
        local_14 = uVar9;
      }
switchD_10022778_caseD_b:
      param_1 = 0;
      break;
    case (char *)0x12:
      iVar12 = *(int *)(param_1 + 0x14);
      pcVar6 = *(char **)((int)this + 0x40);
      if (*(int *)(iVar12 + 0x24) == 0) {
        cVar5 = FUN_100212b0(this,iVar12,(byte)(*(uint *)(iVar12 + 8) >> 1) & 1,
                             *(int *)(pcVar6 + *(int *)(iVar12 + 0x20) * 8));
        pcVar6 = (char *)CONCAT31(extraout_var_01,cVar5);
        goto LAB_10022a77;
      }
LAB_10022b11:
      param_1 = 0;
      uVar9 = local_14;
      break;
    case (char *)0x14:
      if ((((*(uint *)((int)this + 0x60) & 0x2020) == 0) ||
          (pcVar6 = *(char **)((int)this + 0x4c), pcVar6 != *(char **)this)) &&
         ((*(char *)((int)this + 0x74) == '\0' ||
          (pcVar6 = *(char **)this, pcVar6 == *(char **)((int)this + 0x50))))) {
        if ((*(char *)((int)this + 100) == '\0') ||
           (pcVar6 = (char *)FUN_1001e870((int)this), (char)pcVar6 != '\0')) {
          pcVar6 = (char *)FUN_1000a9d0((void *)((int)this + 0x20),this);
          *(undefined1 *)((int)this + 100) = 1;
        }
        goto LAB_10022b11;
      }
      local_14 = CONCAT31(uVar10,1);
      param_1 = 0;
      uVar9 = local_14;
      break;
    default:
      std::_Xregex_error(0xd);
      unaff_EBX = param_1;
      goto LAB_10022b4a;
    }
    if ((char)uVar9 != '\0') goto LAB_10022b1d;
LAB_10022842:
    if ((param_1 == 0) || (param_1 = *(int *)(param_1 + 0xc), param_1 == 0)) goto LAB_10022b1d;
    goto LAB_10022764;
  }
LAB_10022b20:
  if (0 < iVar12) {
    pcVar6 = (char *)(iVar12 + 1);
    *(char **)((int)this + 0x7c) = pcVar6;
  }
  ExceptionList = local_10;
  return CONCAT44(iVar12,CONCAT31((int3)((uint)pcVar6 >> 8),(char)uVar9 == '\0'));
}


















int __cdecl FUN_10022bb0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 8) + 0xd);
  iVar2 = *(int *)(param_1 + 8);
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = *(int *)(iVar3 + 8);
    cVar1 = *(char *)(iVar2 + 0xd);
    param_1 = iVar3;
  }
  return param_1;
}
















int * __cdecl FUN_10022bd0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)(*param_1 + 0xd);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar3;
  }
  return param_1;
}















undefined4 * __thiscall FUN_10022bf0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10028499(0x14);
  puVar1[4] = 0;
  *puVar1 = std::_Node_base::vftable;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = *(undefined4 *)((int)this + 4);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = *(int *)(iVar2 + 0xc);
    *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = puVar1;
    iVar2 = *(int *)((int)this + 4);
  }
  *(undefined4 **)(iVar2 + 0xc) = puVar1;
  *(undefined4 **)((int)this + 4) = puVar1;
  return puVar1;
}












void __fastcall FUN_10022c60(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 == (char *)param_1[2]) goto LAB_10022cac;
  if ((*pcVar2 == '\\') && (pcVar1 = pcVar2 + 1, pcVar1 != (char *)param_1[2])) {
    uVar3 = param_1[0x14];
    if ((uVar3 & 8) == 0) {
      uVar3 = param_1[0x14];
      if ((*pcVar1 != '(') && (*pcVar1 != ')')) goto LAB_10022c95;
    }
    else {
LAB_10022c95:
      if (((uVar3 & 0x10) != 0) || ((*pcVar1 != '{' && (*pcVar1 != '}')))) goto LAB_10022ca9;
    }
    pcVar2 = pcVar1;
  }
LAB_10022ca9:
  *param_1 = (int)(pcVar2 + 1);
LAB_10022cac:
  FUN_10023810(param_1);
  return;
}












/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_10022cc0(LPCWSTR param_1,uint param_2,undefined4 *param_3,LPWIN32_FIND_DATAW param_4)

{
  HANDLE pvVar1;
  bool bVar2;
  DWORD DVar3;
  uint local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b648;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 7;
  local_2c[0]._0_2_ = 0;
  FUN_100244a0(local_2c,&DAT_1002d908,1);
  local_8 = 0;
  FUN_1000be70(param_1,local_2c);
  FUN_100237b0((int *)local_2c);
  if (7 < *(uint *)(param_1 + 10)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  DVar3 = ___std_fs_directory_iterator_open@12(param_1,param_3,param_4);
  if (DVar3 == 0) {
    pvVar1 = (HANDLE)*param_3;
    bVar2 = FUN_10022050((int)param_4);
    if (bVar2) {
      do {
        DVar3 = FUN_100283be(pvVar1,param_4);
        if (DVar3 != 0) break;
        bVar2 = FUN_10022050((int)param_4);
      } while (bVar2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}















void __cdecl
FUN_10022db0(undefined1 *param_1,void *param_2,uint param_3,LPCWSTR param_4,LPCWSTR param_5)

{
  uint uVar1;
  undefined4 ****ppppuVar2;
  uint uVar3;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002b699;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  uVar3 = *(uint *)(param_4 + 8);
  if (7 < *(uint *)(param_4 + 10)) {
    param_4 = *(LPCWSTR *)param_4;
  }
  uVar1 = FUN_100282b9();
  FUN_10002250((LPSTR)local_44,uVar1,param_4,uVar3);
  local_8 = 1;
  uVar3 = *(uint *)(param_5 + 8);
  if (7 < *(uint *)(param_5 + 10)) {
    param_5 = *(LPCWSTR *)param_5;
  }
  uVar1 = FUN_100282b9();
  FUN_10002250((LPSTR)local_2c,uVar1,param_5,uVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_100256a0(param_1,(uint)(local_1c != 0) * 4 + 4 + local_34 + local_1c + param_3);
  FUN_10023f40(param_1,param_2,param_3);
  FUN_10023f40(param_1,&DAT_1002d8fc,3);
  ppppuVar2 = local_44;
  if (0xf < local_30) {
    ppppuVar2 = (undefined4 ****)local_44[0];
  }
  FUN_10023f40(param_1,ppppuVar2,local_34);
  if (local_1c != 0) {
    FUN_10023f40(param_1,&DAT_1002d900,4);
    ppppuVar2 = local_2c;
    if (0xf < local_18) {
      ppppuVar2 = (undefined4 ****)local_2c[0];
    }
    FUN_10023f40(param_1,ppppuVar2,local_1c);
  }
  FUN_10025460(param_1,0x22);
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
    if (0xfff < local_18 + 1) {
      ppppuVar2 = (undefined4 ****)local_2c[0][-1];
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(ppppuVar2);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    ppppuVar2 = (undefined4 ****)local_44[0];
    if (0xfff < local_30 + 1) {
      ppppuVar2 = (undefined4 ****)local_44[0][-1];
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(ppppuVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}















void __thiscall FUN_10022f90(void *this,uint *param_1)

{
  uint *this_00;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 local_2c [8];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b6c8;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(uint *)((int)this + 0x10) = *param_1;
  *(uint *)((int)this + 0x14) = param_1[9];
  *(undefined4 *)((int)this + 0x1c) = 6;
  if ((*param_1 & 0x400) == 0) {
    uVar1 = param_1[7];
    *(uint *)((int)this + 8) = param_1[8];
    *(uint *)((int)this + 0xc) = uVar1;
    *(uint *)this = param_1[5];
    *(uint *)((int)this + 4) = param_1[6];
    *(undefined4 *)((int)this + 0x1c) = 0x2e;
  }
  this_00 = (uint *)((int)this + 0x20);
  puVar4 = param_1 + 0xb;
  do {
    uVar1 = *puVar4;
    puVar4 = (uint *)((int)puVar4 + 2);
  } while ((short)uVar1 != 0);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = 0;
  FUN_100244a0(local_2c,param_1 + 0xb,(int)puVar4 - ((int)param_1 + 0x2e) >> 1);
  local_8 = 1;
  puVar4 = this_00;
  if (7 < *(uint *)((int)this + 0x34)) {
    puVar4 = (uint *)*this_00;
  }
  uVar1 = *(uint *)((int)this + 0x30);
  puVar2 = FUN_100219e0(puVar4,(uint *)((int)puVar4 + uVar1 * 2));
  uVar3 = (int)puVar2 - (int)puVar4 >> 1;
  if (uVar3 <= uVar1) {
    puVar4 = this_00;
    if (7 < *(uint *)((int)this + 0x34)) {
      puVar4 = (uint *)*this_00;
    }
    *(uint *)((int)this + 0x30) = uVar3;
    *(undefined2 *)((int)puVar4 + uVar3 * 2) = 0;
    local_8 = local_8 & 0xffffff00;
    FUN_1000be70(this_00,(uint *)local_2c);
    FUN_100237b0((int *)local_2c);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b60();
}

















void __thiscall FUN_100230c0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)this + 4)) {
    *(int *)(*(int *)this + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}

















byte * __thiscall FUN_10023120(void *this,byte *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_3;
  if (param_3 == 0) {
    uVar6 = *(uint *)((int)this + 0x58);
  }
  if (param_1 != param_2) {
    while (uVar6 != 0) {
      switch(*(undefined4 *)(uVar6 + 4)) {
      case 1:
      case 8:
      case 9:
      case 0xd:
      case 0xe:
      case 0x14:
        uVar6 = *(uint *)(uVar6 + 0xc);
        break;
      case 2:
        if (param_1[-1] == 10) {
          return param_1;
        }
        param_3 = 10;
        pbVar4 = (byte *)FUN_10006880((char *)param_1,(char *)param_2,(int *)&param_3);
        if (pbVar4 == param_2) {
          return pbVar4;
        }
        return pbVar4 + 1;
      case 3:
        param_3 = 10;
        pbVar4 = (byte *)FUN_10006880((char *)param_1,(char *)param_2,(int *)&param_3);
        return pbVar4;
      default:
        goto switchD_10023156_caseD_4;
      case 6:
        goto switchD_10023156_caseD_6;
      case 7:
        goto switchD_10023156_caseD_7;
      case 0xc:
      case 0x15:
        uVar6 = 0;
        break;
      case 0x10:
        goto switchD_10023156_caseD_10;
      }
    }
  }
switchD_10023156_caseD_4:
  return param_1;
switchD_10023156_caseD_7:
  uVar5 = (uint)*param_1;
  param_3 = CONCAT31(param_3._1_3_,*param_1);
  if (*(uint **)(uVar6 + 0x14) == (uint *)0x0) {
LAB_10023218:
    iVar1 = *(int *)(uVar6 + 0x20);
    if (iVar1 != 0) {
      if ((*(uint *)((int)this + 0x5c) & 0x800) != 0) {
        bVar2 = FUN_100259e0(*(undefined4 **)((int)this + 0x70));
        uVar5 = (uint)bVar2;
      }
      uVar5 = FUN_10004d90(uVar5,iVar1);
      if ((char)uVar5 != '\0') {
        uVar5 = 1;
        goto LAB_10023277;
      }
    }
    if ((*(int *)(uVar6 + 0x18) == 0) ||
       ((*(byte *)((uint)((byte)param_3 >> 3) + *(int *)(uVar6 + 0x18)) &
        (byte)(1 << ((byte)param_3 & 7))) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    pbVar4 = (byte *)FUN_10004cb0((char *)param_1,(char *)(param_1 + 1),*(uint **)(uVar6 + 0x14));
    if (pbVar4 == param_1) {
      uVar5 = param_3 & 0xff;
      goto LAB_10023218;
    }
    uVar5 = 1;
  }
LAB_10023277:
  if (uVar5 != (*(uint *)(uVar6 + 8) & 1)) {
    return param_1;
  }
  param_1 = param_1 + 1;
  if (param_1 == param_2) {
    return param_1;
  }
  goto switchD_10023156_caseD_7;
switchD_10023156_caseD_10:
  do {
    if (uVar6 == 0) {
      return param_2;
    }
    param_2 = FUN_10023120(this,param_1,param_2,*(uint *)(uVar6 + 0xc));
    uVar6 = *(uint *)(uVar6 + 0x18);
  } while (param_1 != param_2);
  return param_2;
switchD_10023156_caseD_6:
  do {
    pbVar4 = param_1 + 1;
    pbVar3 = (byte *)FUN_10001d00((char *)param_1,(char *)pbVar4,*(char **)(uVar6 + 0x1c),
                                  *(char **)(uVar6 + 0x1c) + 1,*(undefined4 **)((int)this + 0x70),
                                  *(uint *)((int)this + 0x5c));
    if (pbVar3 != param_1) {
      return param_1;
    }
    param_1 = pbVar4;
  } while (pbVar4 != param_2);
  return pbVar4;
}















int * __thiscall FUN_10023300(void *this,int *param_1,char *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *local_8;
  undefined4 local_4;
  
  uVar5 = param_4;
  if (param_4 == 0) {
    uVar5 = *(uint *)((int)this + 0x58);
  }
  if (param_2 != param_3) {
    while (uVar5 != 0) {
      switch(*(undefined4 *)(uVar5 + 4)) {
      case 1:
      case 8:
      case 9:
      case 0xd:
      case 0xe:
      case 0x14:
        uVar5 = *(uint *)(uVar5 + 0xc);
        break;
      case 2:
        if (param_2[-1] != '\n') {
          param_4 = 10;
          piVar3 = (int *)FUN_100068b0(&local_8,param_2,param_3,(int *)&param_4);
          param_2 = (char *)*piVar3;
          if (param_2 != param_3) {
            param_2 = param_2 + 1;
          }
        }
        goto switchD_10023337_caseD_4;
      case 3:
        param_4 = 10;
        FUN_100068b0(param_1,param_2,param_3,(int *)&param_4);
        return param_1;
      default:
        goto switchD_10023337_caseD_4;
      case 6:
        goto switchD_10023337_caseD_6;
      case 7:
        goto LAB_100233f0;
      case 0xc:
      case 0x15:
        uVar5 = 0;
        break;
      case 0x10:
        goto switchD_10023337_caseD_10;
      }
    }
  }
switchD_10023337_caseD_4:
  *param_1 = (int)param_2;
  return param_1;
LAB_100233f0:
  param_4 = CONCAT31(param_4._1_3_,*param_2);
  local_8 = param_2 + 1;
  if ((*(uint **)(uVar5 + 0x14) == (uint *)0x0) ||
     (piVar3 = (int *)FUN_10004d10(&local_4,param_2,local_8,*(uint **)(uVar5 + 0x14)),
     (char *)*piVar3 == param_2)) {
    iVar2 = *(int *)(uVar5 + 0x20);
    if (iVar2 != 0) {
      if ((*(uint *)((int)this + 0x5c) & 0x800) == 0) {
        uVar4 = param_4 & 0xff;
      }
      else {
        uVar4 = FUN_100259e0(*(undefined4 **)((int)this + 0x70));
      }
      uVar4 = FUN_10004d90(uVar4 & 0xff,iVar2);
      if ((char)uVar4 != '\0') {
        uVar4 = 1;
        goto LAB_10023492;
      }
    }
    if ((*(int *)(uVar5 + 0x18) == 0) ||
       ((*(byte *)((uint)((byte)param_4 >> 3) + *(int *)(uVar5 + 0x18)) &
        (byte)(1 << ((byte)param_4 & 7))) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
LAB_10023492:
  if ((uVar4 != (*(uint *)(uVar5 + 8) & 1)) || (param_2 = local_8, local_8 == param_3)) {
    *param_1 = (int)param_2;
    return param_1;
  }
  goto LAB_100233f0;
switchD_10023337_caseD_6:
  while( true ) {
    pcVar1 = param_2 + 1;
    piVar3 = (int *)FUN_10001e20(&param_4,param_2,pcVar1,*(char **)(uVar5 + 0x1c),
                                 *(char **)(uVar5 + 0x1c) + 1,*(undefined4 **)((int)this + 0x70),
                                 *(uint *)((int)this + 0x5c));
    if ((char *)*piVar3 != param_2) break;
    param_2 = pcVar1;
    if (pcVar1 == param_3) {
      *param_1 = (int)pcVar1;
      return param_1;
    }
  }
  goto switchD_10023337_caseD_4;
  while( true ) {
    piVar3 = FUN_10023300(this,(int *)&param_4,param_2,param_3,*(uint *)(uVar5 + 0xc));
    param_3 = (char *)*piVar3;
    uVar5 = *(uint *)(uVar5 + 0x18);
    if (param_2 == param_3) break;
switchD_10023337_caseD_10:
    if (uVar5 == 0) break;
  }
  *param_1 = (int)param_3;
  return param_1;
}


















void FUN_10023540(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_90 [2];
  char *local_88;
  undefined1 local_84 [92];
  undefined4 local_28 [6];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b6f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_88 = param_1;
  puVar3 = (undefined4 *)FUN_10022210(local_90,param_2);
  uVar1 = *puVar3;
  piVar2 = (int *)puVar3[1];
  FUN_10007400(local_28,local_88);
  local_8 = 0;
  FUN_10009040(local_84,local_28,uVar1,piVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_84,(ThrowInfo *)&DAT_10031a8c);
}














void FUN_100235c0(char *param_1,undefined4 param_2,LPCWSTR param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_94 [2];
  LPCWSTR local_8c;
  char *local_88;
  undefined1 local_84 [92];
  undefined4 local_28 [6];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_88 = param_1;
  local_8c = param_3;
  puVar3 = (undefined4 *)FUN_10022210(local_94,param_2);
  uVar1 = *puVar3;
  piVar2 = (int *)puVar3[1];
  FUN_10007400(local_28,local_88);
  local_8 = 0;
  FUN_10008f50(local_84,local_28,local_8c,uVar1,piVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_84,(ThrowInfo *)&DAT_10031a8c);
}



















void __fastcall FUN_10023650(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0xc) * 0xc)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}














void __fastcall FUN_100236c0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    FUN_10002530((int *)*param_1,(int *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0xc) * 0xc)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}














void __fastcall FUN_10023740(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    for (pvVar2 = pvVar1; pvVar2 != (void *)param_1[1]; pvVar2 = (void *)((int)pvVar2 + 8)) {
      if (*(int *)((int)pvVar2 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
    }
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}















void __fastcall FUN_100237b0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (7 < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] * 2 + 2U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}


















void __fastcall FUN_10023810(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  if ((char *)*param_1 == (char *)param_1[2]) {
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    iVar2 = -1;
  }
  else {
    cVar1 = *(char *)*param_1;
    *(char *)(param_1 + 0x12) = cVar1;
    pcVar3 = strchr("()$^.*+?[]|\\-{},:=!\n\r\b",(int)cVar1);
    if (pcVar3 == (char *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(char)param_1[0x12];
    }
  }
  param_1[0x13] = iVar2;
  switch((char)param_1[0x12]) {
  case '\n':
    if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
      return;
    }
    if (param_1[4] != 0) {
      return;
    }
    param_1[0x13] = 0x7c;
    return;
  default:
    goto switchD_1002385f_caseD_b;
  case '$':
    if ((param_1[0x14] & 0x2000000U) == 0) {
      return;
    }
    if ((char *)(*param_1 + 1) == (char *)param_1[2]) {
      return;
    }
    if (*(char *)(*param_1 + 1) == '\n') {
      return;
    }
    param_1[0x13] = 0;
    return;
  case '(':
  case ')':
    bVar5 = (*(byte *)(param_1 + 0x14) & 8) == 0;
    break;
  case '*':
    if ((param_1[0x14] & 0x4000000U) == 0) {
      return;
    }
    uVar4 = FUN_1001e650((int)(param_1 + 9));
    if ((char)uVar4 == '\0') {
      return;
    }
    param_1[0x13] = 0;
    return;
  case '+':
  case '?':
    bVar5 = (*(byte *)(param_1 + 0x14) & 1) == 0;
    break;
  case '\\':
    uVar4 = FUN_10022080(param_1);
    if ((char)uVar4 == '\0') {
      return;
    }
    cVar1 = *(char *)(*param_1 + 1);
    *(char *)(param_1 + 0x12) = cVar1;
    param_1[0x13] = (int)cVar1;
    return;
  case '^':
    if ((param_1[0x14] & 0x2000000U) == 0) {
      return;
    }
    uVar4 = FUN_1001e650((int)(param_1 + 9));
    bVar5 = (char)uVar4 == '\0';
    break;
  case '{':
  case '}':
    bVar5 = (*(byte *)(param_1 + 0x14) & 0x10) == 0;
    break;
  case '|':
    bVar5 = (*(byte *)(param_1 + 0x14) & 2) == 0;
  }
  if (bVar5) {
    param_1[0x13] = 0;
  }
switchD_1002385f_caseD_b:
  return;
}















void __thiscall FUN_100239b0(void *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < 0x80000000) {
    uVar3 = param_1 + 0x1f >> 5;
    if ((uVar3 < (uint)(*(int *)((int)this + 4) - *(int *)this >> 2)) &&
       (iVar2 = *(int *)this + uVar3 * 4, iVar2 != *(int *)((int)this + 4))) {
      *(int *)((int)this + 4) = iVar2;
    }
    *(uint *)((int)this + 0xc) = param_1;
    if ((param_1 & 0x1f) != 0) {
      puVar1 = (uint *)(*(int *)this + uVar3 * 4 + -4);
      *puVar1 = *puVar1 & (1 << (sbyte)(param_1 & 0x1f)) - 1U;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b40();
}














undefined4 __fastcall FUN_10023a10(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  param_1[4] = param_1[4] + 1;
  if (((param_1[0x14] & 0x8000000U) == 0) && (param_1[0x13] == 0x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_10021790(5);
  }
  if (((param_1[0x14] & 0x20U) != 0) && (param_1[0x13] == 0x3f)) {
    FUN_10022c60(param_1);
    iVar2 = param_1[0x13];
    FUN_10022c60(param_1);
    if (iVar2 == 0x3a) {
      puVar3 = FUN_10022bf0(param_1 + 9,8);
      FUN_1001f850(param_1);
      uVar4 = FUN_10021460(param_1 + 9,(int)puVar3);
      param_1[4] = param_1[4] + -1;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    if (iVar2 == 0x21) {
      uVar5 = FUN_1001fac0(param_1,1);
      param_1[4] = param_1[4] + -1;
      return uVar5 & 0xffffff00;
    }
    if (iVar2 == 0x3d) {
      uVar5 = FUN_1001fac0(param_1,0);
      param_1[4] = param_1[4] + -1;
      return uVar5 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10021790(0xe);
  }
  if ((param_1[0x10] & 0x200U) != 0) {
    puVar3 = FUN_10022bf0(param_1 + 9,8);
    FUN_1001f850(param_1);
    uVar4 = FUN_10021460(param_1 + 9,(int)puVar3);
    param_1[4] = param_1[4] + -1;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  param_1[3] = param_1[3] + 1;
  puVar3 = FUN_1001e780(param_1 + 9,param_1[3]);
  FUN_1001f850(param_1);
  FUN_10021460(param_1 + 9,(int)puVar3);
  FUN_100257f0(param_1 + 5,param_1[3] + 1);
  puVar1 = (uint *)(param_1[5] + ((uint)puVar3[5] >> 5) * 4);
  uVar5 = *puVar1 | 1 << (puVar3[5] & 0x1f);
  *puVar1 = uVar5;
  param_1[4] = param_1[4] + -1;
  return CONCAT31((int3)(uVar5 >> 8),1);
}


















void FUN_10023b30(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}













void FUN_10023b40(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<bool> too long");
}

















void FUN_10023b50(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<T> too long");
}



















void FUN_10023b60(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid string position");
}

















void FUN_10023b70(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid vector<T> subscript");
}















void FUN_10023b80(void)

{
  undefined4 *puVar1;
  undefined4 local_1c [2];
  undefined1 local_14 [20];
  
  puVar1 = (undefined4 *)FUN_10025130(local_1c,0x16);
  FUN_10009180(local_14,*puVar1,(int *)puVar1[1]);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_10031a68);
}
















uint FUN_10023bb0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 0x1000) {
    if (param_1 != 0) {
      uVar1 = FUN_10028499(param_1);
      return uVar1;
    }
    return 0;
  }
  uVar1 = param_1 + 0x23;
  if (uVar1 <= param_1) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_10028499(uVar1);
  if (iVar2 != 0) {
    uVar1 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar1 - 4) = iVar2;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}
























uint FUN_10023c00(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * 2;
  if (param_1 < 0x80000000) {
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        uVar3 = FUN_10028499(uVar3);
        return uVar3;
      }
      return 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar1 = uVar3 + 0x23;
  if (uVar1 <= uVar3) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_10028499(uVar1);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar3 - 4) = iVar2;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



















uint FUN_10023c60(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * 4;
  if (param_1 < 0x40000000) {
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        uVar3 = FUN_10028499(uVar3);
        return uVar3;
      }
      return 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar1 = uVar3 + 0x23;
  if (uVar1 <= uVar3) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_10028499(uVar1);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar3 - 4) = iVar2;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}
















uint FUN_10023cc0(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * 8;
  if (param_1 < 0x20000000) {
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        uVar3 = FUN_10028499(uVar3);
        return uVar3;
      }
      return 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar1 = uVar3 + 0x23;
  if (uVar1 <= uVar3) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_10028499(uVar1);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar3 - 4) = iVar2;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}












uint FUN_10023d20(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * 0x18;
  if (param_1 < 0xaaaaaab) {
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        uVar3 = FUN_10028499(uVar3);
        return uVar3;
      }
      return 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar1 = uVar3 + 0x23;
  if (uVar1 <= uVar3) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_10028499(uVar1);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar3 - 4) = iVar2;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}
















uint FUN_10023d80(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * 0xc;
  if (param_1 < 0x15555556) {
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        uVar3 = FUN_10028499(uVar3);
        return uVar3;
      }
      return 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar1 = uVar3 + 0x23;
  if (uVar1 <= uVar3) {
    uVar1 = 0xffffffff;
  }
  iVar2 = FUN_10028499(uVar1);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar3 - 4) = iVar2;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}

















undefined4 * __thiscall FUN_10023de0(void *this,uint param_1,char param_2)

{
  uint uVar1;
  size_t _Size;
  void *_Src;
  void *pvVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 0x14);
  _Size = *(size_t *)((int)this + 0x10);
  if (param_1 <= uVar1 - _Size) {
    *(uint *)((int)this + 0x10) = param_1 + _Size;
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(void **)this;
    }
    memset((void *)((int)pvVar2 + _Size),(int)param_2,param_1);
    *(undefined1 *)((int)((int)pvVar2 + _Size) + param_1) = 0;
    return this;
  }
  if (0x7fffffff - _Size < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar4 = param_1 + _Size | 0xf;
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar4 = 0x7fffffff;
    }
    else {
      uVar3 = (uVar1 >> 1) + uVar1;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
    }
  }
  else {
    uVar4 = 0x7fffffff;
  }
  _Dst = (void *)FUN_10023bb0(uVar4 + 1);
  *(uint *)((int)this + 0x10) = param_1 + _Size;
  *(uint *)((int)this + 0x14) = uVar4;
  pvVar2 = (void *)((int)_Dst + _Size);
  if (uVar1 < 0x10) {
    memcpy(_Dst,this,_Size);
    memset(pvVar2,(int)param_2,param_1);
    *(undefined1 *)((int)pvVar2 + param_1) = 0;
    *(void **)this = _Dst;
    return this;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,_Size);
  memset(pvVar2,(int)param_2,param_1);
  *(undefined1 *)((int)pvVar2 + param_1) = 0;
  pvVar2 = _Src;
  if ((0xfff < uVar1 + 1) &&
     (pvVar2 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar2);
  *(void **)this = _Dst;
  return this;
}


















undefined4 * __thiscall FUN_10023f40(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  size_t _Size;
  void *_Src;
  void *pvVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 0x14);
  _Size = *(size_t *)((int)this + 0x10);
  if (param_2 <= uVar1 - _Size) {
    *(uint *)((int)this + 0x10) = param_2 + _Size;
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(void **)this;
    }
    memmove((void *)((int)pvVar2 + _Size),param_1,param_2);
    *(undefined1 *)((int)((int)pvVar2 + _Size) + param_2) = 0;
    return this;
  }
  if (0x7fffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar4 = param_2 + _Size | 0xf;
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar4 = 0x7fffffff;
    }
    else {
      uVar3 = (uVar1 >> 1) + uVar1;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
    }
  }
  else {
    uVar4 = 0x7fffffff;
  }
  _Dst = (void *)FUN_10023bb0(uVar4 + 1);
  *(uint *)((int)this + 0x14) = uVar4;
  *(uint *)((int)this + 0x10) = param_2 + _Size;
  pvVar2 = (void *)((int)_Dst + _Size);
  if (uVar1 < 0x10) {
    memcpy(_Dst,this,_Size);
    memcpy(pvVar2,param_1,param_2);
    *(undefined1 *)((int)pvVar2 + param_2) = 0;
    *(void **)this = _Dst;
    return this;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,_Size);
  memcpy(pvVar2,param_1,param_2);
  *(undefined1 *)((int)pvVar2 + param_2) = 0;
  pvVar2 = _Src;
  if ((0xfff < uVar1 + 1) &&
     (pvVar2 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar2);
  *(void **)this = _Dst;
  return this;
}
















undefined4 * __thiscall FUN_10024090(void *this,uint param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  
  uVar5 = *(uint *)((int)this + 0x14);
  iVar2 = *(int *)((int)this + 0x10);
  if (param_1 <= uVar5 - iVar2) {
    *(uint *)((int)this + 0x10) = iVar2 + param_1;
    pvVar4 = this;
    if (7 < uVar5) {
      pvVar4 = *(void **)this;
    }
    if (param_1 != 0) {
      puVar8 = (undefined4 *)(iVar2 * 2 + (int)pvVar4);
      for (uVar5 = param_1 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = CONCAT22(param_2,param_2);
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = (uint)((param_1 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined2 *)puVar8 = param_2;
        puVar8 = (undefined4 *)((int)puVar8 + 2);
      }
    }
    *(undefined2 *)((int)pvVar4 + (iVar2 + param_1) * 2) = 0;
    return this;
  }
  if (0x7ffffffeU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar1 = iVar2 + param_1;
  uVar6 = uVar1 | 7;
  if (uVar6 < 0x7fffffff) {
    if (0x7ffffffe - (uVar5 >> 1) < uVar5) {
      uVar6 = 0x7ffffffe;
    }
    else {
      uVar3 = (uVar5 >> 1) + uVar5;
      if (uVar6 < uVar3) {
        uVar6 = uVar3;
      }
    }
  }
  else {
    uVar6 = 0x7ffffffe;
  }
  pvVar4 = (void *)FUN_10023c00(uVar6 + 1);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x10) = uVar1;
  _Size = iVar2 * 2;
  if (uVar5 < 8) {
    memcpy(pvVar4,this,_Size);
    if (param_1 != 0) {
      puVar8 = (undefined4 *)(_Size + (int)pvVar4);
      for (uVar5 = param_1 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = CONCAT22(param_2,param_2);
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = (uint)((param_1 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined2 *)puVar8 = param_2;
        puVar8 = (undefined4 *)((int)puVar8 + 2);
      }
    }
    *(undefined2 *)((int)pvVar4 + uVar1 * 2) = 0;
    *(void **)this = pvVar4;
    return this;
  }
  _Src = *(void **)this;
  memcpy(pvVar4,_Src,_Size);
  if (param_1 != 0) {
    puVar8 = (undefined4 *)(_Size + (int)pvVar4);
    for (uVar6 = param_1 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = CONCAT22(param_2,param_2);
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = (uint)((param_1 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined2 *)puVar8 = param_2;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
    }
  }
  *(undefined2 *)((int)pvVar4 + uVar1 * 2) = 0;
  pvVar7 = _Src;
  if ((0xfff < uVar5 * 2 + 2) &&
     (pvVar7 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar7);
  *(void **)this = pvVar4;
  return this;
}












undefined4 * __thiscall FUN_10024240(void *this,void *param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  size_t _Size;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  
  uVar2 = *(uint *)((int)this + 0x14);
  iVar3 = *(int *)((int)this + 0x10);
  if (param_2 <= uVar2 - iVar3) {
    *(uint *)((int)this + 0x10) = param_2 + iVar3;
    pvVar5 = this;
    if (7 < uVar2) {
      pvVar5 = *(void **)this;
    }
    memmove((void *)((int)pvVar5 + iVar3 * 2),param_1,param_2 * 2);
    *(undefined2 *)((int)pvVar5 + (param_2 + iVar3) * 2) = 0;
    return this;
  }
  if (0x7ffffffeU - iVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar6 = param_2 + iVar3 | 7;
  if (uVar6 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7ffffffe;
    }
    else {
      uVar4 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
    }
  }
  else {
    uVar6 = 0x7ffffffe;
  }
  pvVar5 = (void *)FUN_10023c00(uVar6 + 1);
  *(uint *)((int)this + 0x14) = uVar6;
  _Size = iVar3 * 2;
  *(uint *)((int)this + 0x10) = param_2 + iVar3;
  puVar1 = (undefined2 *)((int)pvVar5 + (param_2 + iVar3) * 2);
  if (uVar2 < 8) {
    memcpy(pvVar5,this,_Size);
    memcpy((void *)((int)pvVar5 + _Size),param_1,param_2 * 2);
    *puVar1 = 0;
    *(void **)this = pvVar5;
    return this;
  }
  _Src = *(void **)this;
  memcpy(pvVar5,_Src,_Size);
  memcpy((void *)((int)pvVar5 + _Size),param_1,param_2 * 2);
  *puVar1 = 0;
  pvVar7 = _Src;
  if ((0xfff < uVar2 * 2 + 2) &&
     (pvVar7 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar7);
  *(void **)this = pvVar5;
  return this;
}













int * __thiscall FUN_100243b0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  
  uVar2 = *(uint *)((int)this + 0x14);
  if (param_2 <= uVar2) {
    pvVar4 = this;
    if (0xf < uVar2) {
      pvVar4 = *(void **)this;
    }
    *(uint *)((int)this + 0x10) = param_2;
    memmove(pvVar4,param_1,param_2);
    *(undefined1 *)((int)pvVar4 + param_2) = 0;
    return this;
  }
  if (0x7fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar6 = param_2 | 0xf;
  if (uVar6 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar1 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
    }
  }
  else {
    uVar6 = 0x7fffffff;
  }
  pvVar4 = (void *)FUN_10023bb0(uVar6 + 1);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x10) = param_2;
  memcpy(pvVar4,param_1,param_2);
  *(undefined1 *)((int)pvVar4 + param_2) = 0;
  if (0xf < uVar2) {
    pvVar3 = *(void **)this;
    pvVar5 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar5 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar5);
  }
  *(void **)this = pvVar4;
  return this;
}











int * __thiscall FUN_100244a0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  
  uVar2 = *(uint *)((int)this + 0x14);
  if (param_2 <= uVar2) {
    pvVar4 = this;
    if (7 < uVar2) {
      pvVar4 = *(void **)this;
    }
    *(uint *)((int)this + 0x10) = param_2;
    memmove(pvVar4,param_1,param_2 * 2);
    *(undefined2 *)(param_2 * 2 + (int)pvVar4) = 0;
    return this;
  }
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar6 = param_2 | 7;
  if (uVar6 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7ffffffe;
    }
    else {
      uVar1 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
    }
  }
  else {
    uVar6 = 0x7ffffffe;
  }
  pvVar4 = (void *)FUN_10023c00(uVar6 + 1);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x10) = param_2;
  memcpy(pvVar4,param_1,param_2 * 2);
  *(undefined2 *)(param_2 * 2 + (int)pvVar4) = 0;
  if (7 < uVar2) {
    pvVar3 = *(void **)this;
    pvVar5 = pvVar3;
    if ((0xfff < uVar2 * 2 + 2) &&
       (pvVar5 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(pvVar5);
  }
  *(void **)this = pvVar4;
  return this;
}












undefined4 * __fastcall FUN_100245b0(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (undefined4 *)*param_1;
  }
  return param_1;
}












void __fastcall FUN_100245c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002b750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  piVar4 = *(int **)(iVar1 + 4);
  iVar3 = iVar1;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    do {
      FUN_100214f0((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_100284c9(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  ExceptionList = local_10;
  return;
}














undefined4 __cdecl FUN_10024650(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar2 = *param_1;
  if (uVar1 <= uVar2) {
    bVar4 = uVar2 < uVar1;
    bVar5 = uVar2 == uVar1;
    puVar3 = param_2;
    do {
      if (!bVar4 && !bVar5) {
        return 1;
      }
      if (param_3 == 1) {
        return 0;
      }
      uVar1 = *(ushort *)((int)param_1 + (2 - (int)param_2) + (int)puVar3);
      puVar3 = puVar3 + 1;
      param_3 = param_3 + -1;
      bVar4 = uVar1 < *puVar3;
      bVar5 = uVar1 == *puVar3;
    } while (!bVar4);
  }
  return 0xffffffff;
}















void FUN_100246a0(void *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < param_2) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar1);
  return;
}


















void FUN_100246e0(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 4)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar1);
  return;
}
















void FUN_10024720(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 8)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar1);
  return;
}















void FUN_10024760(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x18)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar1);
  return;
}
















void FUN_100247a0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002b770;
  local_10 = ExceptionList;
  uVar1 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = std::_Winerror_map(param_2);
  if (iVar2 != 0) {
    iVar3 = std::_Execute_once((once_flag *)&DAT_1003483c,
                               (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_10002d20,
                               &DAT_10034840);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      terminate(uVar1);
    }
    *param_1 = iVar2;
    param_1[1] = (int)&DAT_10034840;
    ExceptionList = local_10;
    return;
  }
  iVar2 = std::_Execute_once((once_flag *)&DAT_10034848,
                             (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_10002d40,&DAT_1003484c
                            );
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    terminate(uVar1);
  }
  *param_1 = param_2;
  param_1[1] = (int)&DAT_1003484c;
  ExceptionList = local_10;
  return;
}


















void __thiscall FUN_10024860(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



















uint __thiscall FUN_10024870(void *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
  iVar1 = _Strcoll(param_1,param_2,param_3,param_4,(_Collvec *)((int)this + 8));
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (uint)(iVar1 != 0);
}















uint FUN_100248b0(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x811c9dc5;
  uVar2 = 0;
  if (param_2 != param_1) {
    do {
      pbVar1 = (byte *)(uVar2 + param_1);
      uVar2 = uVar2 + 1;
      uVar3 = (*pbVar1 ^ uVar3) * 0x1000193;
    } while (uVar2 < (uint)(param_2 - param_1));
  }
  return uVar3;
}


















char * __thiscall FUN_100248e0(void *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *_String1;
  uint uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100299d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\x0f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *param_1 = '\0';
  local_8 = 0;
  uVar2 = 0;
  if ((int)param_3 - (int)param_2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar2 = (int)param_3 - (int)param_2;
    do {
      if (uVar3 < uVar2) {
        FUN_10023de0(param_1,uVar2 - uVar3,'\0');
      }
      else {
        pcVar1 = param_1;
        if (0xf < *(uint *)(param_1 + 0x14)) {
          pcVar1 = *(char **)param_1;
        }
        *(uint *)(param_1 + 0x10) = uVar2;
        pcVar1[uVar2] = '\0';
      }
      pcVar1 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar1 = *(char **)param_1;
      }
      _String1 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        _String1 = *(char **)param_1;
      }
      uVar2 = _Strxfrm(_String1,pcVar1 + *(int *)(param_1 + 0x10),param_2,param_3,
                       (_Collvec *)((int)this + 8));
      uVar3 = *(uint *)(param_1 + 0x10);
    } while ((uVar3 < uVar2) && (uVar2 != 0));
  }
  if (*(uint *)(param_1 + 0x10) < uVar2) {
    FUN_10023de0(param_1,uVar2 - *(uint *)(param_1 + 0x10),'\0');
  }
  else {
    pcVar1 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar1 = *(char **)param_1;
    }
    *(uint *)(param_1 + 0x10) = uVar2;
    pcVar1[uVar2] = '\0';
  }
  ExceptionList = local_10;
  return param_1;
}
















void __thiscall FUN_100249e0(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (((int)uVar1 < 0) && (uVar1 != 0)) {
    *param_1 = *(int *)this - ((~uVar1 >> 5) * 4 + 4);
    param_1[1] = uVar1 & 0x1f;
    return;
  }
  *param_1 = *(int *)this + (uVar1 >> 5) * 4;
  param_1[1] = uVar1 & 0x1f;
  return;
}













uint __thiscall FUN_10024a30(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 == *(uint *)(param_1[1] + 4)) && (uVar1 = *param_1, uVar1 == param_2)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}
















uint __thiscall FUN_10024a60(void *this,undefined4 param_1)

{
  int *piVar1;
  int *unaff_retaddr;
  undefined1 local_8 [8];
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xc))(local_8,param_1);
  if ((*(int *)(piVar1[1] + 4) == *(int *)(unaff_retaddr[1] + 4)) &&
     (piVar1 = (int *)*piVar1, piVar1 == (int *)*unaff_retaddr)) {
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}


















undefined4 * __thiscall FUN_10024aa0(void *this,uint param_1)

{
  void *pvVar1;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(void **)this;
    }
    *(uint *)((int)this + 0x10) = param_1;
    *(undefined2 *)((int)pvVar1 + param_1 * 2) = 0;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b60();
}















void __thiscall
FUN_10024ad0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *local_18;
  uint local_14;
  int *local_10;
  uint *local_c;
  uint local_8;
  uint *local_4;
  
  local_18 = *(uint **)this;
  local_8 = *(uint *)((int)this + 0xc);
  local_14 = 0;
  puVar5 = local_18;
  uVar6 = 0;
  local_10 = this;
  local_4 = local_18;
  if (local_8 != 0) {
    FUN_1000be10(&local_18,(param_2 - (int)local_18 >> 2) * 0x20 + param_3);
    puVar5 = local_18;
    uVar6 = local_14;
  }
  local_14 = 0;
  uVar3 = 0;
  local_18 = local_4;
  if (local_8 != 0) {
    local_c = local_4;
    FUN_1000be10(&local_18,(param_4 - (int)local_4 >> 2) * 0x20 + param_5);
    uVar3 = local_14;
  }
  local_14 = ((int)puVar5 - (int)local_4 >> 2) * 0x20 + uVar6;
  if ((puVar5 != local_18) || (uVar6 != uVar3)) {
    if (((int)local_8 < 0) && (local_8 != 0)) {
      iVar1 = -((~local_8 >> 5) * 4 + 4);
    }
    else {
      iVar1 = (local_8 >> 5) * 4;
    }
    local_4 = (uint *)((int)local_4 + iVar1);
    local_8 = local_8 & 0x1f;
    puVar4 = local_18;
    while ((puVar4 != local_4 || (uVar3 != local_8))) {
      if ((*puVar4 & 1 << ((byte)uVar3 & 0x1f)) == 0) {
        uVar2 = *puVar5 & ~(1 << (uVar6 & 0x1f));
      }
      else {
        uVar2 = *puVar5 | 1 << (uVar6 & 0x1f);
      }
      *puVar5 = uVar2;
      if (uVar6 < 0x1f) {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar6 = 0;
        puVar5 = puVar5 + 1;
      }
      if (uVar3 < 0x1f) {
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    local_c = local_18;
    FUN_100239b0(local_10,((int)puVar5 - *local_10 >> 2) * 0x20 + uVar6);
    local_4 = (uint *)*local_10;
  }
  if (((int)local_14 < 0) && (local_14 != 0)) {
    *param_1 = (int)local_4 - ((~local_14 >> 5) * 4 + 4);
    param_1[1] = local_14 & 0x1f;
    return;
  }
  *param_1 = (int)(local_4 + (local_14 >> 5));
  param_1[1] = local_14 & 0x1f;
  return;
}



















void __thiscall FUN_10024c70(void *this,int *param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)this;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    puVar4 = puVar1;
    do {
      if (*(ushort *)(puVar2 + 4) < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
    if ((puVar4 != puVar1) && (*(ushort *)(puVar4 + 4) <= *param_2)) {
      *param_1 = (int)puVar4;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}

















void __thiscall FUN_10024cc0(void *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)this;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    puVar4 = puVar1;
    do {
      if ((uint)puVar2[4] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
    if ((puVar4 != puVar1) && ((uint)puVar4[4] <= *param_2)) {
      *param_1 = (int)puVar4;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}



















void __thiscall FUN_10024d10(void *this,int *param_1,byte *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = param_2;
  FUN_100250d0(this,(int *)&param_2,param_2);
  pbVar3 = param_2;
  pbVar2 = *(byte **)this;
  if (param_2 != pbVar2) {
    pbVar4 = param_2 + 0x10;
    if (0xf < *(uint *)(param_2 + 0x24)) {
      pbVar4 = *(byte **)pbVar4;
    }
    puVar1 = (uint *)(pbVar6 + 0x10);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    uVar5 = FUN_100065c0(pbVar6,*puVar1,pbVar4,*(uint *)(param_2 + 0x20));
    if (-1 < (int)uVar5) {
      *param_1 = (int)pbVar3;
      return;
    }
  }
  *param_1 = (int)pbVar2;
  return;
}


















uint __thiscall FUN_10024d70(void *this,byte *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  pbVar8 = param_1;
  do {
    bVar3 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar3 != 0);
  puVar1 = (uint *)((int)this + 0x10);
  uVar9 = (int)pbVar8 - (int)(param_1 + 1);
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  if ((*puVar1 < uVar9) || (uVar7 = *puVar1 - uVar9, uVar7 < param_2)) {
    return 0xffffffff;
  }
  if (uVar9 != 0) {
    iVar2 = uVar7 + 1;
    bVar3 = *param_1;
    for (pbVar8 = memchr((void *)(param_2 + (int)this),(int)(char)bVar3,
                         (int)this + (iVar2 - (int)(param_2 + (int)this))); pbVar5 = param_1,
        pbVar6 = pbVar8, uVar7 = uVar9, pbVar8 != (byte *)0x0;
        pbVar8 = memchr(pbVar8 + 1,(int)(char)bVar3,(int)this + (iVar2 - (int)(pbVar8 + 1)))) {
      while (uVar4 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_10024e06;
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
        uVar7 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_10024e3a:
        uVar7 = 0;
      }
      else {
LAB_10024e06:
        bVar10 = *pbVar6 < *pbVar5;
        if ((*pbVar6 == *pbVar5) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar10 = pbVar6[1] < pbVar5[1], pbVar6[1] == pbVar5[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar10 = pbVar6[2] < pbVar5[2], pbVar6[2] == pbVar5[2] &&
               ((uVar4 == 0xffffffff || (bVar10 = pbVar6[3] < pbVar5[3], pbVar6[3] == pbVar5[3])))))
              ))))))) goto LAB_10024e3a;
        uVar7 = -(uint)bVar10 | 1;
      }
      if (uVar7 == 0) {
        return (int)pbVar8 - (int)this;
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}















undefined4 * __thiscall FUN_10024e80(void *this,uint param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  size_t sVar7;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b60();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (param_3 <= uVar2 - uVar1) {
    *(uint *)((int)this + 0x10) = uVar1 + param_3;
    pvVar3 = this;
    if (0xf < uVar2) {
      pvVar3 = *(void **)this;
    }
    pvVar5 = (void *)((int)pvVar3 + param_1);
    sVar7 = param_3;
    if ((pvVar5 < (void *)(param_3 + (int)param_2)) && (param_2 <= (void *)((int)pvVar3 + uVar1))) {
      if (param_2 < pvVar5) {
        sVar7 = (int)pvVar5 - (int)param_2;
      }
      else {
        sVar7 = 0;
      }
    }
    memmove((void *)((int)pvVar5 + param_3),pvVar5,(uVar1 - param_1) + 1);
    memcpy(pvVar5,param_2,sVar7);
    memcpy((void *)((int)pvVar5 + sVar7),(void *)((int)param_2 + param_3 + sVar7),param_3 - sVar7);
    return this;
  }
  if (0x7fffffff - uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar6 = uVar1 + param_3 | 0xf;
  if (uVar6 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar4 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
    }
  }
  else {
    uVar6 = 0x7fffffff;
  }
  pvVar5 = (void *)FUN_10023bb0(uVar6 + 1);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x10) = uVar1 + param_3;
  sVar7 = (uVar1 - param_1) + 1;
  pvVar3 = (void *)((int)pvVar5 + param_1);
  if (uVar2 < 0x10) {
    memcpy(pvVar5,this,param_1);
    memcpy(pvVar3,param_2,param_3);
    memcpy((void *)((int)pvVar3 + param_3),(void *)((int)this + param_1),sVar7);
    *(void **)this = pvVar5;
    return this;
  }
  _Src = *(void **)this;
  memcpy(pvVar5,_Src,param_1);
  memcpy(pvVar3,param_2,param_3);
  memcpy((void *)((int)pvVar3 + param_3),(void *)((int)_Src + param_1),sVar7);
  pvVar3 = _Src;
  if ((0xfff < uVar2 + 1) &&
     (pvVar3 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar3);
  *(void **)this = pvVar5;
  return this;
}
















void __fastcall FUN_10025060(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    std::_Throw_Cpp_error(1);
    if (param_1[1] == 0) {
      std::_Throw_Cpp_error(1);
    }
  }
  iVar1 = _Thrd_id();
  if (param_1[1] == iVar1) {
    std::_Throw_Cpp_error(5);
  }
  iVar1 = _Thrd_join(*param_1,param_1[1],0);
  if (iVar1 != 0) {
    std::_Throw_Cpp_error(2);
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
















void __thiscall FUN_100250d0(void *this,int *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)this;
  if (*(char *)((int)puVar6[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_2 + 0x14);
    puVar5 = puVar6;
    puVar7 = (undefined4 *)puVar6[1];
    do {
      puVar6 = puVar7;
      pbVar2 = (byte *)(puVar6 + 4);
      pbVar4 = param_2;
      if (0xf < uVar1) {
        pbVar4 = *(byte **)param_2;
      }
      if (0xf < (uint)puVar6[9]) {
        pbVar2 = *(byte **)pbVar2;
      }
      uVar3 = FUN_100065c0(pbVar2,puVar6[8],pbVar4,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        puVar7 = (undefined4 *)puVar6[2];
        puVar6 = puVar5;
      }
      else {
        puVar7 = (undefined4 *)*puVar6;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  *param_1 = (int)puVar6;
  return;
}


















void __cdecl FUN_10025130(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = std::_Execute_once((once_flag *)&DAT_1003483c,
                             (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_10002d20,&DAT_10034840
                            );
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x1002514b. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    terminate();
    return;
  }
  *param_1 = param_2;
  param_1[1] = &DAT_10034840;
  return;
}


















undefined1 * FUN_10025170(undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = std::_Syserror_map(param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_100243b0(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_1;
}


















char * FUN_100251c0(char *param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  void *_Dst;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100299d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10007300(param_1,0x7fff,'\0');
  local_8 = 0;
  pcVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar1 = *(char **)param_1;
  }
  uVar2 = std::_Winerror_message(param_2,pcVar1,0x7fff);
  if (uVar2 == 0) {
    FUN_100243b0(param_1,"unknown error",0xd);
  }
  else if (*(uint *)(param_1 + 0x10) < uVar2) {
    FUN_10023de0(param_1,uVar2 - *(uint *)(param_1 + 0x10),'\0');
  }
  else {
    pcVar1 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar1 = *(char **)param_1;
    }
    *(ulong *)(param_1 + 0x10) = uVar2;
    pcVar1[uVar2] = '\0';
  }
  if (0xf < *(uint *)(param_1 + 0x14)) {
    if (*(uint *)(param_1 + 0x10) < 0x10) {
      FUN_1001e600((undefined4 *)param_1);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x10) | 0xf;
      if (0x7fffffff < uVar3) {
        uVar3 = 0x7fffffff;
      }
      if (uVar3 < *(uint *)(param_1 + 0x14)) {
        _Dst = (void *)FUN_10023bb0(uVar3 + 1);
        memcpy(_Dst,*(void **)param_1,*(int *)(param_1 + 0x10) + 1);
        FUN_100246a0(*(void **)param_1,*(int *)(param_1 + 0x14) + 1);
        *(void **)param_1 = _Dst;
        *(uint *)(param_1 + 0x14) = uVar3;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}



















char * FUN_100252e0(void)

{
  return "generic";
}
















char * FUN_100252f0(void)

{
  return "system";
}


















void __thiscall FUN_10025300(void *this,undefined4 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  bool bVar7;
  bool bVar8;
  char *pcVar9;
  void **ppvVar10;
  void *pvVar11;
  char *pcVar12;
  void *local_44 [4];
  int local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002b7a9;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == 0) {
    local_34 = iVar3;
    uStack_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    ppvVar10 = local_44;
    bVar8 = true;
    bVar7 = false;
  }
  else {
    pcVar12 = *(char **)(iVar3 + 0x18);
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)(iVar3 + 0x1c);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar9 = pcVar12;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_100243b0(local_2c,pcVar12,(int)pcVar9 - (int)(pcVar12 + 1));
    ppvVar10 = local_2c;
    bVar8 = false;
    bVar7 = true;
  }
  pvVar11 = *ppvVar10;
  pvVar4 = ppvVar10[1];
  pvVar5 = ppvVar10[2];
  pvVar6 = ppvVar10[3];
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = pvVar11;
  param_1[1] = pvVar4;
  param_1[2] = pvVar5;
  param_1[3] = pvVar6;
  uVar1 = *(undefined8 *)(ppvVar10 + 4);
  ppvVar10[4] = (void *)0x0;
  ppvVar10[5] = (void *)0xf;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)ppvVar10 = 0;
  if (bVar7) {
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar11 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_100284c9(pvVar11);
    }
  }
  if ((bVar8) && (0xf < uStack_30)) {
    pvVar11 = local_44[0];
    if (0xfff < uStack_30 + 1) {
      pvVar11 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_100284c9(pvVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
















void __thiscall FUN_10025460(void *this,undefined1 param_1)

{
  undefined1 *puVar1;
  uint _Size;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  void *pvVar5;
  
  _Size = *(uint *)((int)this + 0x10);
  uVar2 = *(uint *)((int)this + 0x14);
  if (_Size < uVar2) {
    *(uint *)((int)this + 0x10) = _Size + 1;
    if (0xf < uVar2) {
      this = *(void **)this;
    }
    *(undefined1 *)((int)this + _Size) = param_1;
    *(undefined1 *)((int)this + _Size + 1) = 0;
    return;
  }
  if (_Size == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar4 = _Size + 1 | 0xf;
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar4 = 0x7fffffff;
    }
    else {
      uVar3 = (uVar2 >> 1) + uVar2;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
    }
  }
  else {
    uVar4 = 0x7fffffff;
  }
  _Dst = (void *)FUN_10023bb0(uVar4 + 1);
  *(uint *)((int)this + 0x14) = uVar4;
  *(uint *)((int)this + 0x10) = _Size + 1;
  puVar1 = (undefined1 *)((int)_Dst + _Size);
  if (uVar2 < 0x10) {
    memcpy(_Dst,this,_Size);
    *puVar1 = param_1;
    puVar1[1] = 0;
    *(void **)this = _Dst;
    return;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,_Size);
  *puVar1 = param_1;
  puVar1[1] = 0;
  pvVar5 = _Src;
  if ((0xfff < uVar2 + 1) &&
     (pvVar5 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar5);
  *(void **)this = _Dst;
  return;
}















void __thiscall FUN_10025580(void *this,undefined2 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  size_t _Size;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  void *pvVar6;
  
  uVar2 = *(uint *)((int)this + 0x10);
  uVar3 = *(uint *)((int)this + 0x14);
  if (uVar2 < uVar3) {
    *(uint *)((int)this + 0x10) = uVar2 + 1;
    if (7 < uVar3) {
      this = *(void **)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = param_1;
    *(undefined2 *)((int)this + uVar2 * 2 + 2) = 0;
    return;
  }
  if (uVar2 == 0x7ffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_10023b30();
  }
  uVar5 = uVar2 + 1 | 7;
  if (uVar5 < 0x7fffffff) {
    if (0x7ffffffe - (uVar3 >> 1) < uVar3) {
      uVar5 = 0x7ffffffe;
    }
    else {
      uVar4 = (uVar3 >> 1) + uVar3;
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
    }
  }
  else {
    uVar5 = 0x7ffffffe;
  }
  _Dst = (void *)FUN_10023c00(uVar5 + 1);
  *(uint *)((int)this + 0x10) = uVar2 + 1;
  _Size = uVar2 * 2;
  *(uint *)((int)this + 0x14) = uVar5;
  puVar1 = (undefined2 *)(_Size + (int)_Dst);
  if (uVar3 < 8) {
    memcpy(_Dst,this,_Size);
    *puVar1 = param_1;
    puVar1[1] = 0;
    *(void **)this = _Dst;
    return;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,_Size);
  *puVar1 = param_1;
  puVar1[1] = 0;
  pvVar6 = _Src;
  if ((0xfff < uVar3 * 2 + 2) &&
     (pvVar6 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_100284c9(pvVar6);
  *(void **)this = _Dst;
  return;
}
















void __thiscall FUN_100256a0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  void *_Dst;
  uint uVar4;
  void *pvVar5;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 <= param_1) {
    uVar3 = *(uint *)((int)this + 0x14);
    if (uVar3 != param_1) {
      if (uVar3 < param_1) {
        if (0x7fffffff - uVar2 < param_1 - uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_10023b30();
        }
        uVar4 = param_1 | 0xf;
        if (uVar4 < 0x80000000) {
          if (0x7fffffff - (uVar3 >> 1) < uVar3) {
            uVar4 = 0x7fffffff;
          }
          else {
            uVar1 = (uVar3 >> 1) + uVar3;
            if (uVar4 < uVar1) {
              uVar4 = uVar1;
            }
          }
        }
        else {
          uVar4 = 0x7fffffff;
        }
        _Dst = (void *)FUN_10023bb0(uVar4 + 1);
        *(uint *)((int)this + 0x14) = uVar4;
        *(uint *)((int)this + 0x10) = param_1;
        if (0xf < uVar3) {
          _Src = *(void **)this;
          memcpy(_Dst,_Src,uVar2 + 1);
          pvVar5 = _Src;
          if ((0xfff < uVar3 + 1) &&
             (pvVar5 = *(void **)((int)_Src + -4), 0x1f < (uint)((int)_Src + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_100284c9(pvVar5);
          *(void **)this = _Dst;
          *(uint *)((int)this + 0x10) = uVar2;
          return;
        }
        memcpy(_Dst,this,uVar2 + 1);
        *(void **)this = _Dst;
        *(uint *)((int)this + 0x10) = uVar2;
      }
      else if ((param_1 < 0x10) && (0xf < uVar3)) {
        FUN_1001e600(this);
        return;
      }
    }
  }
  return;
}
















void __thiscall FUN_100257c0(void *this,uint param_1,char param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((int)this + 0x10);
  if (param_1 <= *puVar1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(void **)this;
    }
    *puVar1 = param_1;
    *(undefined1 *)((int)this + param_1) = 0;
    return;
  }
  FUN_10023de0(this,param_1 - *puVar1,param_2);
  return;
}
















void __thiscall FUN_100257f0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_1c [2];
  int local_14 [2];
  int local_c [2];
  int *local_4;
  
  uVar2 = *(uint *)((int)this + 0xc);
  local_4 = this;
  if (uVar2 < param_1) {
    if (((int)uVar2 < 0) && (uVar2 != 0)) {
      iVar1 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      iVar1 = (uVar2 >> 5) * 4;
    }
    FUN_10021e70(this,local_c,*(int *)this + iVar1,uVar2 & 0x1f,param_1 - uVar2,&stack0x00000008);
    return;
  }
  if (param_1 < uVar2) {
    piVar4 = (int *)FUN_100249e0(this,local_14);
    local_c[1] = 0;
    iVar1 = *piVar4;
    iVar3 = piVar4[1];
    local_c[0] = *local_4;
    piVar4 = (int *)FUN_1000b720(local_c,local_1c,param_1);
    FUN_10024ad0(local_4,local_c,*piVar4,piVar4[1],iVar1,iVar3);
  }
  return;
}




















uint __thiscall FUN_100258b0(void *this,byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  pbVar6 = param_1;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  uVar5 = *(uint *)((int)this + 0x10);
  uVar7 = (int)pbVar6 - (int)(param_1 + 1);
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  if (uVar7 == 0) {
    if (uVar5 < param_2) {
      param_2 = uVar5;
    }
    return param_2;
  }
  if (uVar5 < uVar7) {
    return 0xffffffff;
  }
  if (uVar5 - uVar7 < param_2) {
    param_2 = uVar5 - uVar7;
  }
  pbVar6 = (byte *)((int)this + param_2);
  do {
    pbVar3 = param_1;
    pbVar4 = pbVar6;
    uVar5 = uVar7;
    if (*pbVar6 == *param_1) {
      while (uVar2 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_10025927;
        pbVar3 = pbVar3 + 4;
        pbVar4 = pbVar4 + 4;
        uVar5 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_1002595b:
        uVar5 = 0;
      }
      else {
LAB_10025927:
        bVar8 = *pbVar4 < *pbVar3;
        if ((*pbVar4 == *pbVar3) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = pbVar4[1] < pbVar3[1], pbVar4[1] == pbVar3[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = pbVar4[2] < pbVar3[2], pbVar4[2] == pbVar3[2] &&
               ((uVar2 == 0xffffffff || (bVar8 = pbVar4[3] < pbVar3[3], pbVar4[3] == pbVar3[3]))))))
             )))))) goto LAB_1002595b;
        uVar5 = -(uint)bVar8 | 1;
      }
      if (uVar5 == 0) {
        return (int)pbVar6 - (int)this;
      }
    }
    if (pbVar6 == this) {
      return 0xffffffff;
    }
    pbVar6 = pbVar6 + -1;
  } while( true );
}





















undefined1 * __thiscall FUN_10025990(void *this,undefined1 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  if (param_2 <= *(uint *)((int)this + 0x10)) {
    uVar1 = *(uint *)((int)this + 0x10) - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(void **)this;
    }
    FUN_100243b0(param_1,(void *)((int)this + param_2),param_3);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10023b60();
}

















void __fastcall FUN_100259e0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_1c [8];
  uint uStack_14;
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_10034018 ^ (uint)local_1c;
  puStack_24 = &stack0x00000005;
  puStack_28 = &stack0x00000004;
  (**(code **)(*(int *)*param_1 + 0x10))(local_1c);
  if (0xf < uStack_14) {
    puVar1 = puStack_28;
    if ((0xfff < uStack_14 + 1) &&
       (puVar1 = *(undefined1 **)(puStack_28 + -4),
       (undefined1 *)0x1f < puStack_28 + (-4 - (int)puVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(puVar1);
  }
  __security_check_cookie(uStack_10 ^ (uint)&puStack_28);
  return;
}






















undefined1 * __fastcall FUN_10025a70(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}

















int * __fastcall FUN_10025a80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x44);
  if (0xf < *(uint *)(param_1 + 0x58)) {
    piVar1 = (int *)*piVar1;
  }
  return piVar1;
}

















void __cdecl FUN_10026db0(char *param_1,undefined4 param_2,byte *******param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  LPCWSTR ******pppppppWVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint *puVar11;
  byte ************ppppppppppppbVar12;
  byte *******pppppppbVar13;
  undefined1 auStack_6c [4];
  char *local_68;
  undefined8 local_64;
  byte ************local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_4c [4];
  undefined4 local_3c;
  uint local_38;
  byte ***********local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  LPCWSTR *****local_1c [4];
  byte *******local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_10034018 ^ (uint)auStack_6c;
  local_68 = param_1;
  iVar2 = FUN_1000fab0(param_1);
  if (iVar2 == 0) {
    local_3c = 0;
    local_38 = 0xf;
    local_4c[0] = (void *)((uint)local_4c[0] & 0xffffff00);
    FUN_100243b0(local_4c,"Invalid device ID",0x11);
    FUN_10019700(local_4c);
    if (0xf < local_38) {
      pvVar9 = local_4c[0];
      if ((0xfff < local_38 + 1) &&
         (pvVar9 = *(void **)((int)local_4c[0] + -4),
         0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar9);
    }
    __security_check_cookie(local_4 ^ (uint)auStack_6c);
    return;
  }
  local_24 = 0xf00000000;
  local_34 = (byte ***********)((uint)local_34 & 0xffffff00);
  if (param_3 == (byte *******)0x0) {
    local_c = param_3;
    local_1c[0] = (LPCWSTR *****)((uint)local_1c[0] & 0xffff0000);
    local_8 = 7;
    iVar3 = FUN_1001f500((LPWSTR)local_1c);
    if (iVar3 != 0) {
      FUN_10023540("current_path()",iVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pppppppWVar4 = local_1c;
    if (7 < local_8) {
      pppppppWVar4 = (LPCWSTR ******)local_1c[0];
    }
    pppppppbVar13 = local_c;
    uVar5 = FUN_100282b9();
    FUN_10002250((LPSTR)local_4c,uVar5,(LPCWSTR)pppppppWVar4,(uint)pppppppbVar13);
    puVar6 = FUN_10023f40(local_4c,&DAT_1002d974,1);
    local_5c = (byte ************)*puVar6;
    uStack_58 = puVar6[1];
    uStack_54 = puVar6[2];
    uStack_50 = puVar6[3];
    local_64 = *(undefined8 *)(puVar6 + 4);
    puVar6[4] = 0;
    puVar6[5] = 0xf;
    *(undefined1 *)puVar6 = 0;
    FUN_10009740((int *)&local_34);
    local_34 = (byte ***********)local_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    uStack_28 = uStack_50;
    local_24 = local_64;
    if (0xf < local_38) {
      pvVar9 = local_4c[0];
      if ((0xfff < local_38 + 1) &&
         (pvVar9 = *(void **)((int)local_4c[0] + -4),
         0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar9);
    }
    local_3c = 0;
    local_38 = 0xf;
    local_4c[0] = (void *)((uint)local_4c[0] & 0xffffff00);
    FUN_100237b0((int *)local_1c);
    FUN_10023f40(&local_34,"/Correct",8);
    param_3 = (byte *******)&local_34;
    if (0xf < local_24._4_4_) {
      param_3 = (byte *******)local_34;
    }
  }
  puVar6 = (undefined4 *)DAT_1003481c[1];
  puVar10 = DAT_1003481c;
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    do {
      if ((char *)puVar6[4] < local_68) {
        puVar7 = (undefined4 *)puVar6[2];
      }
      else {
        puVar7 = (undefined4 *)*puVar6;
        puVar10 = puVar6;
      }
      puVar6 = puVar7;
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
    if ((puVar10 != DAT_1003481c) && ((char *)puVar10[4] <= local_68)) goto LAB_10027052;
  }
  puVar6 = (undefined4 *)FUN_10028499(0xb0);
  *puVar6 = CCorrectionBase::vftable;
  puVar6[2] = 0x3f800000;
  puVar6[3] = 0;
  puVar6[4] = 0;
  uVar8 = FUN_1001e9d0();
  puVar6[3] = uVar8;
  puVar6[7] = 2;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  *(undefined2 *)(puVar6 + 0x14) = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  *(undefined1 *)(puVar6 + 1) = 1;
  *puVar6 = CUSBCorrection::vftable;
  puVar6[0x1b] = iVar2;
  puVar6[0x1c] = 0;
  FUN_10007190(puVar6 + 0x1d,"^\\s*//",1);
  FUN_10007190(puVar6 + 0x22,"[^\\s]+",1);
  FUN_10007190(puVar6 + 0x27,"^\\s*$",1);
  pvVar9 = (void *)FUN_10028499(0x2f0);
  puVar10 = FUN_100089c0(pvVar9,iVar2);
  puVar6[0x1c] = puVar10;
  puVar11 = FUN_1000b300(&DAT_1003481c,(uint *)&local_68);
  *puVar11 = (uint)puVar6;
LAB_10027052:
  puVar11 = FUN_1000b300(&DAT_1003481c,(uint *)&local_68);
  pvVar9 = (void *)*puVar11;
  FUN_10011e40(pvVar9,param_2,1,(byte *)param_3);
  FUN_100127c0((int)pvVar9);
  if (0xf < local_24._4_4_) {
    ppppppppppppbVar12 = (byte ************)local_34;
    if ((0xfff < local_24._4_4_ + 1) &&
       (ppppppppppppbVar12 = (byte ************)local_34[-1],
       0x1f < (uint)((int)local_34 + (-4 - (int)ppppppppppppbVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_100284c9(ppppppppppppbVar12);
  }
  __security_check_cookie(local_4 ^ (uint)auStack_6c);
  return;
}














undefined * FUN_10027dd0(void)

{
  return &DAT_10034830;
}












void __cdecl FUN_10027de0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = &stack0x0000000c;
  uVar2 = 0;
  puVar1 = (undefined4 *)FUN_10027dd0();
  __stdio_common_vfprintf(*puVar1,puVar1[1],param_1,param_2,uVar2,puVar3);
  return;
}














int __cdecl FUN_10027e10(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x0000000c;
  uVar4 = 0;
  uVar3 = 0xffffffff;
  puVar1 = (uint *)FUN_10027dd0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,uVar3,param_2,uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}















void __thiscall FUN_10027e50(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  void *pvVar8;
  int iVar9;
  int local_4c;
  int local_48;
  int local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b850;
  local_10 = ExceptionList;
  local_14 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_1;
  if (*(char *)((int)this + 4) == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_100243b0(local_2c,"No bulk end point found",0x17);
    local_8 = 1;
    FUN_10019700(local_2c);
    if (0xf < local_18) {
      pvVar8 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar8 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_100284c9(pvVar8);
    }
  }
  else {
    uVar2 = *(ushort *)((int)this + 0x62);
    iVar9 = 0;
    local_4c = 0;
    do {
      iVar3 = libusb_bulk_transfer
                        (*(undefined4 *)this,*(undefined1 *)((int)this + 4),local_48,param_2,
                         &local_4c,500);
      if ((iVar3 != 0) && (iVar3 != -7)) {
        pcVar5 = (char *)libusb_error_name(iVar3);
        local_34 = 0;
        local_30 = 0xf;
        local_44[0]._0_1_ = 0;
        pcVar7 = pcVar5;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_100243b0(local_44,pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
        local_8 = 0;
        FUN_10019700(local_44);
        FUN_10009740(local_44);
        break;
      }
      if (local_4c == param_2) {
        pbVar6 = (byte *)((int)this + 100);
        if (0xf < *(uint *)((int)this + 0x78)) {
          pbVar6 = *(byte **)((int)this + 100);
        }
        puVar4 = FUN_10005100(pbVar6,pbVar6 + *(int *)((int)this + 0x74),(undefined4 *)0x0,
                              &DAT_10034874,0x10,pbVar6);
        if (((char)puVar4 == '\0') && (*(char *)((int)this + 0x7c) == '\0')) {
          *(undefined1 *)((int)this + 0x7c) = 1;
        }
        break;
      }
      param_2 = param_2 - local_4c;
      local_48 = local_48 + local_4c;
      if (local_4c == 0) {
        if (*(char *)(param_3 + 0xd8) != '\0') break;
        pbVar6 = (byte *)((int)this + 100);
        if (0xf < *(uint *)((int)this + 0x78)) {
          pbVar6 = *(byte **)((int)this + 100);
        }
        puVar4 = FUN_10005100(pbVar6,pbVar6 + *(int *)((int)this + 0x74),(undefined4 *)0x0,
                              &DAT_10034874,0x10,pbVar6);
        if (((char)puVar4 != '\0') && (*(char *)((int)this + 0x7c) != '\0')) {
          iVar9 = iVar9 + 1;
        }
      }
    } while (iVar9 < (int)(uVar2 / 500 + 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



















void FUN_10028060(void)

{
  int iVar1;
  
  iVar1 = FUN_10028499(0x1c);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}

















void FUN_10028080(void)

{
  int iVar1;
  
  iVar1 = FUN_10028499(0x2c);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}

















void __fastcall FUN_10028153(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002b770;
  local_10 = ExceptionList;
  uVar2 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 8);
  guard_check_icall();
  puVar3 = (undefined4 *)(*pcVar1)(uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    uVar4 = 1;
    pcVar1 = *(code **)*puVar3;
    guard_check_icall();
    (*pcVar1)(uVar4);
  }
  ExceptionList = local_10;
  return;
}



















void FUN_100281b2(void)

{
  undefined4 *puVar1;
  
  while (puVar1 = DAT_10034960, DAT_10034960 != (undefined4 *)0x0) {
    DAT_10034960 = (undefined4 *)*DAT_10034960;
    FUN_10028153((int)puVar1);
    FUN_100284c9(puVar1);
  }
  return;
}
















uint FUN_100282b9(void)

{
  UINT UVar1;
  BOOL BVar2;
  
  UVar1 = ___lc_codepage_func();
  if (UVar1 == 0xfde9) {
    return 0xfde9;
  }
  BVar2 = AreFileApisANSI();
  return (uint)(BVar2 == 0);
}















DWORD FUN_100283be(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}

















void __cdecl FUN_10028499(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  
  do {
    uStack_c = 0x100284b3;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    uStack_c = 0x100284a6;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    FUN_10029521();
    return;
  }
  FUN_100294dc(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_10031bf4);
}

















void __cdecl FUN_100284c9(void *param_1)

{
  free(param_1);
  return;
}

















void __cdecl FUN_100284d7(size_t param_1)

{
  FUN_10028499(param_1);
  return;
}

















bool FUN_10028586(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1002865d(0);
  return (char)uVar1 != '\0';
}


















void FUN_100285f4(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    execute_onexit_table(&DAT_10034980);
    return;
  }
  iVar2 = FUN_100299ba();
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100299a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}
















void FUN_10028617(void)

{
  FUN_1001b640();
  FUN_1001b640();
  return;
}

















undefined4 __cdecl FUN_1002865d(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  
  if (DAT_1003497d != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    ___scrt_fastfail();
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar2) == 0) || (param_1 != 0)) {
    bVar1 = 0x20 - ((byte)DAT_10034018 & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar1 | -1 << 0x20 - bVar1) ^ DAT_10034018;
    DAT_10034980 = uVar4;
    DAT_10034984 = uVar4;
    DAT_10034988 = uVar4;
    DAT_1003498c = uVar4;
    DAT_10034990 = uVar4;
    DAT_10034994 = uVar4;
LAB_100286ee:
    DAT_1003497d = '\x01';
    uVar3 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar3 = initialize_onexit_table(&DAT_10034980);
    if (uVar3 == 0) {
      uVar3 = initialize_onexit_table(&DAT_1003498c);
      uVar4 = 0;
      if (uVar3 == 0) goto LAB_100286ee;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}
















uint __cdecl FUN_10028852(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_10034018 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_10034018;
}















/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002886f(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  undefined *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1002a4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_10034998,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if (hModule == (HMODULE)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_10028956;
  }
  pFVar1 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar2 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar3 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((pFVar1 == (FARPROC)0x0) || (pFVar2 == (FARPROC)0x0)) || (pFVar3 == (FARPROC)0x0)) {
    _DAT_100349b4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (_DAT_100349b4 == (HANDLE)0x0) {
LAB_10028956:
                    /* WARNING: Subroutine does not return */
      ___scrt_fastfail();
    }
  }
  else {
    _DAT_100349b4 = (HANDLE)0x0;
    puVar4 = &DAT_100349b0;
    guard_check_icall();
    (*pFVar1)(puVar4);
    _DAT_100349b8 = FUN_10028852((uint)pFVar2);
    _DAT_100349bc = FUN_10028852((uint)pFVar3);
  }
  ExceptionList = local_10;
  return;
}
















/* WARNING: Removing unreachable block (ram,0x10028bd8) */
/* WARNING: Removing unreachable block (ram,0x10028be6) */
/* WARNING: Removing unreachable block (ram,0x10028c1f) */
/* WARNING: Removing unreachable block (ram,0x10028c2d) */
/* WARNING: Removing unreachable block (ram,0x10028c37) */
/* WARNING: Removing unreachable block (ram,0x10028c47) */

ulonglong FUN_10028b90(void)

{
  double dVar1;
  float in_XMM0_Da;
  ulonglong in_XMM0_Qb;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  if ((((uint)ABS(in_XMM0_Da) < 0x7f800000) &&
      (dVar1 = (double)in_XMM0_Da, dVar1 < 9.223372036854776e+18)) &&
     (-9.223372036854776e+18 <= dVar1)) {
    auVar4._0_8_ = ABS(dVar1);
    auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    uVar3 = 0;
    if (auVar4._0_8_ != 0.0) {
      auVar5 = auVar4 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar6 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar4._0_8_ >> 0x34);
      uVar7 = auVar5._0_8_ >> lVar6;
      iVar2 = -(uint)(0x433 < (uint)((ulonglong)((longlong)dVar1 << 1) >> 0x35));
      uVar3 = CONCAT44(iVar2,iVar2);
      uVar3 = ~uVar3 & uVar7 |
              auVar5._0_8_ << ((ulonglong)auVar4._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar3;
      uVar3 = ~-(ulonglong)(dVar1 == auVar4._0_8_) & -uVar3 |
              uVar3 & -(ulonglong)(dVar1 == auVar4._0_8_);
      if ((0 < (int)lVar6) &&
         (auVar8._0_8_ = uVar7 << lVar6,
         auVar8._8_8_ = (auVar5._8_8_ >> lVar6) << -(auVar4._8_8_ >> 0x34),
         SUB164(auVar5 ^ auVar8,0) != 0 || SUB164(auVar5 ^ auVar8,4) != 0)) {
        FUN_10028d2d(1,0x10);
      }
    }
    return uVar3;
  }
  FUN_10028d2d(1,8);
  return 0x8000000000000000;
}


















void __fastcall FUN_10028d2d(undefined4 param_1,int param_2)

{
  byte in_FPUControlWord;
  
  if ((param_2 == 8) || ((*(byte *)((int)&DAT_1002e788 + param_2 + 7) & in_FPUControlWord) == 0)) {
    except1(param_2,0);
  }
  return;
}















/* WARNING: Removing unreachable block (ram,0x10028dc2) */
/* WARNING: Removing unreachable block (ram,0x10028dde) */
/* WARNING: Removing unreachable block (ram,0x10028de3) */
/* WARNING: Removing unreachable block (ram,0x10028bd8) */
/* WARNING: Removing unreachable block (ram,0x10028be6) */
/* WARNING: Removing unreachable block (ram,0x10028df9) */
/* WARNING: Removing unreachable block (ram,0x10028e0d) */
/* WARNING: Removing unreachable block (ram,0x10028e42) */
/* WARNING: Removing unreachable block (ram,0x10028e4b) */
/* WARNING: Removing unreachable block (ram,0x10028e59) */
/* WARNING: Removing unreachable block (ram,0x10028e5d) */
/* WARNING: Removing unreachable block (ram,0x10028e73) */
/* WARNING: Removing unreachable block (ram,0x10028e7d) */
/* WARNING: Removing unreachable block (ram,0x10028e87) */
/* WARNING: Removing unreachable block (ram,0x10028e99) */
/* WARNING: Removing unreachable block (ram,0x10028e1b) */
/* WARNING: Removing unreachable block (ram,0x10028e29) */
/* WARNING: Removing unreachable block (ram,0x10028c1f) */
/* WARNING: Removing unreachable block (ram,0x10028c2d) */
/* WARNING: Removing unreachable block (ram,0x10028c37) */
/* WARNING: Removing unreachable block (ram,0x10028c47) */

ulonglong FUN_10028d71(void)

{
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  int iVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  if (((((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff) < 0x7ff00000) &&
      (in_XMM0_Qa < 9.223372036854776e+18)) && (-9.223372036854776e+18 <= in_XMM0_Qa)) {
    auVar3._0_8_ = ABS(in_XMM0_Qa);
    auVar3._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    uVar2 = 0;
    if (auVar3._0_8_ != 0.0) {
      auVar4 = auVar3 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar5 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar3._0_8_ >> 0x34);
      uVar6 = auVar4._0_8_ >> lVar5;
      iVar1 = -(uint)(0x433 < (uint)((ulonglong)auVar3._0_8_ >> 0x34));
      uVar2 = CONCAT44(iVar1,iVar1);
      uVar2 = ~uVar2 & uVar6 |
              auVar4._0_8_ << ((ulonglong)auVar3._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar2;
      uVar2 = ~-(ulonglong)(in_XMM0_Qa == auVar3._0_8_) & -uVar2 |
              uVar2 & -(ulonglong)(in_XMM0_Qa == auVar3._0_8_);
      if ((0 < (int)lVar5) &&
         (auVar7._0_8_ = uVar6 << lVar5,
         auVar7._8_8_ = (auVar4._8_8_ >> lVar5) << -(auVar3._8_8_ >> 0x34),
         SUB164(auVar4 ^ auVar7,0) != 0 || SUB164(auVar4 ^ auVar7,4) != 0)) {
        FUN_10028d2d(1,0x10);
      }
    }
    return uVar2;
  }
  FUN_10028d2d(1,8);
  return 0x8000000000000000;
}














void FUN_10028ee0(void)

{
  return;
}















undefined4 * __thiscall FUN_10028f07(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}














/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_10029114(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *local_14;
  
  uVar4 = ___scrt_initialize_crt(0);
  if ((char)uVar4 != '\0') {
    ___scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_10034974 != 0) {
                    /* WARNING: Subroutine does not return */
      ___scrt_fastfail();
    }
    DAT_10034974 = 1;
    bVar3 = FUN_10028586();
    if (bVar3) {
      FUN_100298ae();
      FUN_1002986d();
      FUN_1002988b();
      iVar5 = initterm_e(&DAT_1002d300,&DAT_1002d308);
      if ((iVar5 == 0) && (uVar4 = ___scrt_dllmain_after_initialize_c(), (char)uVar4 != '\0')) {
        initterm(&DAT_1002d2a4,&DAT_1002d2fc);
        DAT_10034974 = 2;
        bVar2 = false;
      }
    }
    FUN_1002920c();
    if (!bVar2) {
      piVar6 = (int *)FUN_100298a8();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        uVar4 = 2;
        pcVar1 = (code *)*piVar6;
        guard_check_icall();
        (*pcVar1)(param_1,uVar4,param_2);
      }
      DAT_100349cc = DAT_100349cc + 1;
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}














void FUN_1002920c(void)

{
  int unaff_EBP;
  
  ___scrt_release_startup_lock((char)*(undefined4 *)(unaff_EBP + -0x1d));
  return;
}
















/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

bool __cdecl FUN_1002921e(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 local_14;
  
  if (DAT_100349cc < 1) {
    bVar2 = false;
  }
  else {
    DAT_100349cc = DAT_100349cc + -1;
    ___scrt_acquire_startup_lock();
    if (DAT_10034974 != 2) {
                    /* WARNING: Subroutine does not return */
      ___scrt_fastfail();
    }
    FUN_100285f4();
    FUN_10029879();
    FUN_100298da();
    DAT_10034974 = 0;
    FUN_10029299();
    cVar1 = ___scrt_uninitialize_crt(param_1,'\0');
    bVar2 = cVar1 != '\0';
  }
  ExceptionList = local_14;
  return bVar2;
}















void FUN_10029299(void)

{
  int unaff_EBP;
  
  FUN_10028617();
  ___scrt_release_startup_lock((char)*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}














void __cdecl
FUN_1002946b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_10034018,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}
















undefined4 * __thiscall FUN_1002948e(void *this,int param_1)

{
  FUN_10008e70(this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return this;
}
















undefined4 * __fastcall FUN_100294a9(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}















undefined4 * __thiscall FUN_100294c1(void *this,int param_1)

{
  FUN_10008e70(this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return this;
}
















undefined4 * __fastcall FUN_100294dc(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

















undefined4 * __thiscall FUN_100294f4(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_100284c9(this);
  }
  return this;
}

















void FUN_10029521(void)

{
  undefined4 local_10 [3];
  
  FUN_100294a9(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_10031bbc);
}





















undefined4 FUN_10029560(void)

{
  return 1;
}























/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002968a(void)

{
  _DAT_100349d0 = 0;
  return;
}





















void FUN_1002986d(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_10034cf8);
  return;
}





















void FUN_10029879(void)

{
  __std_type_info_destroy_list(&DAT_10034cf8);
  return;
}





















undefined * FUN_10029885(void)

{
  return &DAT_10034d00;
}




















void FUN_1002988b(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_10027dd0();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_10029885();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}





















undefined * FUN_100298a8(void)

{
  return &DAT_10034d08;
}


















/* WARNING: Removing unreachable block (ram,0x100298be) */
/* WARNING: Removing unreachable block (ram,0x100298bf) */
/* WARNING: Removing unreachable block (ram,0x100298c5) */
/* WARNING: Removing unreachable block (ram,0x100298cf) */
/* WARNING: Removing unreachable block (ram,0x100298d6) */

void FUN_100298ae(void)

{
  return;
}

















/* WARNING: Removing unreachable block (ram,0x100298ea) */
/* WARNING: Removing unreachable block (ram,0x100298eb) */
/* WARNING: Removing unreachable block (ram,0x100298f1) */
/* WARNING: Removing unreachable block (ram,0x100298fb) */
/* WARNING: Removing unreachable block (ram,0x10029902) */

void FUN_100298da(void)

{
  return;
}



















undefined4 FUN_100299ba(void)

{
  return 0;
}



















void FUN_1002b890(void)

{
  FUN_100245c0((int *)&DAT_1003481c);
  FUN_100284c9(DAT_1003481c);
  return;
}



















void FUN_1002b8c0(void)

{
  FUN_100245c0((int *)&DAT_10034824);
  FUN_100284c9(DAT_10034824);
  return;
}





















void FUN_1002b8f0(void)

{
  if (DAT_10034934 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1002b8f9. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    terminate();
    return;
  }
  return;
}





















void ** FUN_1002b900(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_10034874 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_10034874 + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_10034874,(undefined4 *)0x0);
    }
  }
  DAT_10034874 = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_10034884 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_10034884 + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}



















void ** FUN_1002b990(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_100348d0 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_100348d0 + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_100348d0,(undefined4 *)0x0);
    }
  }
  DAT_100348d0 = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_100348e0 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_100348e0 + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}




















void ** FUN_1002ba20(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_10034914 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_10034914 + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_10034914,(undefined4 *)0x0);
    }
  }
  DAT_10034914 = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_10034924 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_10034924 + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}












void ** FUN_1002bab0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_100348b0 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_100348b0 + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_100348b0,(undefined4 *)0x0);
    }
  }
  DAT_100348b0 = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_100348c0 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_100348c0 + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}













void ** FUN_1002bb40(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_1003489c != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_1003489c + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_1003489c,(undefined4 *)0x0);
    }
  }
  DAT_1003489c = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_100348ac != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_100348ac + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}















void ** FUN_1002bbd0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_10034900 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_10034900 + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_10034900,(undefined4 *)0x0);
    }
  }
  DAT_10034900 = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_10034910 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_10034910 + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}

















void ** FUN_1002bc60(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002b820;
  local_10 = ExceptionList;
  uVar3 = DAT_10034018 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = ExceptionList;
  if (DAT_10034888 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = DAT_10034888 + 8;
    iVar2 = *piVar1;
    ppvVar4 = (void **)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar4 = (void **)FUN_1001f7f0(DAT_10034888,(undefined4 *)0x0);
    }
  }
  DAT_10034888 = (undefined4 *)0x0;
  local_8 = 0;
  if (DAT_10034898 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*DAT_10034898 + 8))(uVar3);
    ppvVar4 = (void **)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      ppvVar4 = (void **)(**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return ppvVar4;
}
















void FUN_1002bcf0(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = DAT_100348f8;
  puStack_c = &LAB_1002b010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10021690((int *)DAT_100348f8[1]);
  DAT_100348f8[1] = (int)piVar1;
  *DAT_100348f8 = (int)piVar1;
  DAT_100348f8[2] = (int)piVar1;
  DAT_100348fc = 0;
  FUN_100284c9(DAT_100348f8);
  ExceptionList = local_10;
  return;
}















void FUN_1002bd80(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = DAT_10034944;
  puStack_c = &LAB_1002b340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100215e0(&DAT_10034944,(int *)DAT_10034944[1]);
  DAT_10034944[1] = (int)piVar1;
  *DAT_10034944 = (int)piVar1;
  DAT_10034944[2] = (int)piVar1;
  DAT_10034948 = 0;
  FUN_100284c9(DAT_10034944);
  ExceptionList = local_10;
  return;
}















void FUN_1002be10(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = DAT_10034928;
  puStack_c = &LAB_1002b340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100215e0(&DAT_10034928,(int *)DAT_10034928[1]);
  DAT_10034928[1] = (int)piVar1;
  *DAT_10034928 = (int)piVar1;
  DAT_10034928[2] = (int)piVar1;
  DAT_1003492c = 0;
  FUN_100284c9(DAT_10034928);
  ExceptionList = local_10;
  return;
}















void FUN_1002bea0(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = DAT_100348f0;
  puStack_c = &LAB_1002b340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10021530(&DAT_100348f0,(int *)DAT_100348f0[1]);
  DAT_100348f0[1] = (int)piVar1;
  *DAT_100348f0 = (int)piVar1;
  DAT_100348f0[2] = (int)piVar1;
  DAT_100348f4 = 0;
  FUN_100284c9(DAT_100348f0);
  ExceptionList = local_10;
  return;
}















void FUN_1002bf30(void)

{
  FUN_10009ba0(&DAT_1003494c);
  return;
}













void FUN_1002bf40(void)

{
  void *pvVar1;
  
  if (DAT_10034938 != (void *)0x0) {
    pvVar1 = DAT_10034938;
    if ((0xfff < (DAT_10034940 - (int)DAT_10034938 & 0xfffffffeU)) &&
       (pvVar1 = *(void **)((int)DAT_10034938 + -4),
       0x1f < (uint)((int)DAT_10034938 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x1002bf97. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_100284c9(pvVar1);
    DAT_10034938 = (void *)0x0;
    DAT_1003493c = 0;
    DAT_10034940 = 0;
  }
  return;
}

















void FUN_1002bfa0(void)

{
  FUN_10009ba0(&DAT_10034868);
  return;
}














void FUN_1002bfc0(void)

{
  void *pvVar1;
  
  if (DAT_100348c4 != (void *)0x0) {
    pvVar1 = DAT_100348c4;
    if ((0xfff < (DAT_100348cc - (int)DAT_100348c4 & 0xfffffffeU)) &&
       (pvVar1 = *(void **)((int)DAT_100348c4 + -4),
       0x1f < (uint)((int)DAT_100348c4 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x1002c017. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_100284c9(pvVar1);
    DAT_100348c4 = (void *)0x0;
    DAT_100348c8 = 0;
    DAT_100348cc = 0;
  }
  return;
}
















void FUN_1002c020(void)

{
  void *pvVar1;
  
  if (DAT_100348e4 != (void *)0x0) {
    pvVar1 = DAT_100348e4;
    if ((0xfff < (DAT_100348ec - (int)DAT_100348e4 & 0xfffffffeU)) &&
       (pvVar1 = *(void **)((int)DAT_100348e4 + -4),
       0x1f < (uint)((int)DAT_100348e4 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x1002c077. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_100284c9(pvVar1);
    DAT_100348e4 = (void *)0x0;
    DAT_100348e8 = 0;
    DAT_100348ec = 0;
  }
  return;
}



















void FUN_1002c07d(void)

{
  FUN_100281b2();
  return;
}

