; Generated file. Do not edit.
; To update, run src/utils/scan_api.sh

code

equ memset                                -1
equ memcpy                                -2
equ memcmp                                -3
equ strncpy                               -4
equ sin                                   -5
equ cos                                   -6
equ asin                                  -7
equ tan                                   -8
equ atan                                  -9
equ atan2                                 -10
equ sqrt                                  -11
equ floor                                 -12
equ ceil                                  -13
equ exp                                   -14
equ trap_SyscallABIVersion                -256
equ trap_Print                            -257
equ trap_Error                            -258
equ trap_Log                              -259
equ trap_Milliseconds                     -260
equ trap_Cvar_Register                    -261
equ trap_Cvar_Update                      -262
equ trap_Cvar_Set                         -263
equ trap_Cvar_VariableIntegerValue        -264
equ trap_Cvar_VariableStringBuffer        -265
equ trap_Cvar_LatchedVariableStringBuffer -266
equ trap_Argc                             -267
equ trap_Argv                             -268
equ trap_SendConsoleCommand               -269
equ trap_FS_FOpenFile                     -270
equ trap_FS_Read                          -271
equ trap_FS_Write                         -272
equ trap_FS_Rename                        -273
equ trap_FS_FCloseFile                    -274
equ trap_FS_GetFileList                   -275
equ trap_LocateGameData                   -276
equ trap_DropClient                       -277
equ trap_SendServerCommand                -278
equ trap_LinkEntity                       -279
equ trap_UnlinkEntity                     -280
equ trap_EntitiesInBox                    -281
equ trap_EntityContact                    -282
equ trap_EntityContactCapsule             -283
equ trap_Trace                            -284
equ trap_TraceNoEnts                      -284
equ trap_TraceCapsule                     -285
equ trap_TraceCapsuleNoEnts               -285
equ trap_PointContents                    -286
equ trap_SetBrushModel                    -287
equ trap_InPVS                            -288
equ trap_InPVSIgnorePortals               -289
equ trap_SetConfigstring                  -290
equ trap_GetConfigstring                  -291
equ trap_SetConfigstringRestrictions      -292
equ trap_SetUserinfo                      -293
equ trap_GetUserinfo                      -294
equ trap_GetServerinfo                    -295
equ trap_AdjustAreaPortalState            -296
equ trap_AreasConnected                   -297
equ trap_BotAllocateClient                -298
equ trap_BotFreeClient                    -299
equ trap_GetUsercmd                       -300
equ trap_GetEntityToken                   -301
equ trap_GMTime                           -302
equ trap_SnapVector                       -303
equ trap_SendGameStat                     -304
equ trap_AddCommand                       -305
equ trap_RemoveCommand                    -306
equ trap_GetTag                           -307
equ trap_LoadTag                          -308
equ trap_RegisterSound                    -309
equ trap_Parse_AddGlobalDefine            -310
equ trap_Parse_LoadSource                 -311
equ trap_Parse_FreeSource                 -312
equ trap_Parse_ReadToken                  -313
equ trap_Parse_SourceFileAndLine          -314
equ trap_BotGetServerCommand              -315
equ trap_SendMessage                      -318
equ trap_MessageStatus                    -319
equ trap_RSA_GenerateMessage              -320
equ trap_QuoteString                      -321
equ trap_GenFingerprint                   -322
equ trap_GetPlayerPubkey                  -323
equ trap_GetTimeString                    -324
equ trap_BotSetupNav                      -325
equ trap_BotShutdownNav                   -326
equ trap_BotSetNavMesh                    -327
equ trap_BotFindRoute                     -328
equ trap_BotUpdatePath                    -329
equ trap_BotNavTrace                      -330
equ trap_BotFindRandomPoint               -331
equ trap_BotFindRandomPointInRadius       -332
equ trap_BotEnableArea                    -333
equ trap_BotDisableArea                   -334
equ trap_BotAddObstacle                   -335
equ trap_BotRemoveObstacle                -336
equ trap_BotUpdateObstacles               -337
