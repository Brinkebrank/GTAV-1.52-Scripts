#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = -1;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<2> Local_105 = { 0, 0 } ;
	struct<5> Local_107[32];
	struct<444> Local_268 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<92> Local_712 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_65 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_869();
	}
	else
	{
		func_866();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_854())
		{
			func_866();
		}
		func_10();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	if (func_9())
	{
		func_3();
	}
}

void func_3()
{
	int iVar0;
	int iVar1;

	if (Local_105 == func_8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_7(iVar1))
			{
				if (func_6(iVar1, 1, 1))
				{
					if (func_5(iVar1))
					{
						Local_105 = iVar1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_4())
	{
		Local_105 = func_8();
	}
}

int func_4()
{
	if (Local_105 == func_8())
	{
		return 1;
	}
	if (!func_5(Local_105))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_105))
	{
		return 1;
	}
	if (!func_6(Local_105, 1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)
{
	if (iParam0 == func_8())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 10);
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	if (iParam0 != func_8())
	{
		return NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0);
	}
	return 0;
}

int func_8()
{
	return -1;
}

bool func_9()
{
	return (MISC::GET_FRAME_COUNT() % 3) == 0;
}

void func_10()
{
	func_852();
	func_94();
	func_92();
	func_87();
	func_85();
	func_83();
	func_78();
	func_76(0);
	func_75();
	func_70();
	func_65();
	func_63();
	func_11();
}

void func_11()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<4> Var10;

	if (func_61())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_25(0, 0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_268.f_1, 5))
	{
		if (func_23())
		{
			iVar6 = func_21(8350, -1, 0);
			iVar7 = UNK_0x5A002C4821A13338();
			iVar8 = (iVar6 - iVar7);
			if (iVar8 > 0)
			{
				NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(iVar8, &Var0);
				iVar9 = (Var0.f_3 * 3600000);
				iVar9 = (iVar9 + (Var0.f_4 * 60000));
				iVar9 = (iVar9 + Var0.f_5 * 1000);
				Var10 = { func_20(iVar9, 0, 0) };
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CAS_WHEEL_TR");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var10);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
			}
		}
		else
		{
			func_12("CAS_WHEEL_RE");
		}
		MISC::SET_BIT(&(Local_268.f_1), 5);
	}
}

int func_12(char* sParam0)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_13(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_19() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_14(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_14(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_15(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_15(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()
{
	return Global_1312763;
}

bool func_19()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<4> func_20(int iParam0, bool bParam1, bool bParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (bParam2 && iParam0 == 0))
	{
		iVar8 = iParam0;
		iVar4 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 3600000)));
		iVar8 = (iVar8 - (iVar4 * 3600000));
		iVar5 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 60000)));
		iVar8 = (iVar8 - (iVar5 * 60000));
		iVar6 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 1000)));
		iVar8 = (iVar8 - iVar6 * 1000);
		iVar7 = iVar8;
		if (iVar4 > 0)
		{
			StringIntConCat(&Var0, iVar4, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
		}
		else
		{
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar7 > 100)
				{
					StringIntConCat(&Var0, iVar7, 16);
				}
				else if (iVar7 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_22(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_21(8350, -1, 0);
	iVar1 = func_24(-1753117686);
	iVar2 = UNK_0x5A002C4821A13338();
	if (iVar2 > iVar0 && iVar2 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_24(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	iVar0 = 0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_58(8.7587f))
		{
			return 1;
		}
	}
	if (func_56(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (Global_2405074.f_2674)
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_53())
		{
			return 1;
		}
	}
	if (func_52())
	{
		return 1;
	}
	if (func_51(0))
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	if (func_49())
	{
		return 1;
	}
	if (func_48(1))
	{
		return 1;
	}
	bVar2 = func_47(0);
	if (Global_262145.f_26227)
	{
		if (bVar2)
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_50())
			{
				func_46("CASINO_LUCK_WD", -1);
			}
		}
		iVar0 = 1;
	}
	if (!func_45(PLAYER::PLAYER_ID()))
	{
		if ((bVar2 && !MISC::IS_BIT_SET(Global_1678288.f_6, 4)) && !func_44(4, &uVar1))
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_50())
			{
				MISC::SET_BIT(&(Global_1678288.f_6), 4);
				func_42("CAS_MG_MEMB2", func_43(0), -1);
			}
		}
		iVar0 = 1;
	}
	if (bParam0)
	{
		if (func_23())
		{
			if (bVar2 && !func_41(20))
			{
				if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_50())
				{
					func_46("LUCKY_WHEEL_US", -1);
					func_40(20);
				}
			}
			iVar0 = 1;
		}
	}
	if (bParam1)
	{
		if (bVar2)
		{
			if (!func_39())
			{
				if (func_38("LW_PLAY"))
				{
					HUD::CLEAR_HELP(true);
				}
				if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_50())
				{
					func_46("POD_TOO_MANY", -1);
				}
				iVar0 = 1;
			}
			else if (func_38("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (func_38("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (MISC::IS_BIT_SET(Local_268.f_1, 1))
	{
		iVar0 = 1;
	}
	if (MISC::IS_BIT_SET(Global_1678288.f_4, 2))
	{
		iVar0 = 1;
	}
	if (func_28())
	{
		iVar0 = 1;
	}
	if (func_44(4, &uVar1))
	{
		if (bVar2)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_46("CAS_LW_REGL", -1);
				func_40(28);
			}
		}
		iVar0 = 1;
	}
	if (Global_1696943 != 0)
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 1;
	}
	if (func_26())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return iVar0;
}

int func_26()
{
	if (((func_27() != -1 && func_27() != 28) && func_27() != 17) && func_27() != 12)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	return Global_968397;
}

int func_28()
{
	int iVar0;

	if (func_36(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_35();
		if (func_6(iVar0, 1, 1) && MISC::IS_BIT_SET(Global_1590682[iVar0 /*883*/].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_34(PLAYER::PLAYER_ID(), 0) && func_32(PLAYER::PLAYER_ID())) || func_29(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (func_31(iParam0) != func_8())
	{
		return func_31(iParam0) == func_30(iParam0);
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_8();
}

int func_31(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_32(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_34(int iParam0, bool bParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (bParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

var func_35()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_36(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_37(iParam0))
		{
			return false;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_8();
}

int func_37(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_8())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_38(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_6(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 1109.469f, 228.9432f, -50.64041f, 1111.215f, 228.8777f, -48.39041f, 1.82f, false, true, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_268, iParam0))
	{
		MISC::SET_BIT(&Local_268, iParam0);
	}
}

bool func_41(int iParam0)
{
	return MISC::IS_BIT_SET(Local_268, iParam0);
}

void func_42(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_43(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_44(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		case 1:
			iVar0 = 1316161270;
			break;
		case 2:
			iVar0 = 1023703758;
			break;
		case 5:
			iVar0 = 1045499606;
			break;
		case 3:
			iVar0 = 1697066635;
			break;
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!MONEY::_NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_45(int iParam0)
{
	if (iParam0 == func_8())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 18);
}

void func_46(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_47(bool bParam0)
{
	if (bParam0)
	{
		if ((MISC::GET_FRAME_COUNT() % 3) == 0)
		{
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, false, true, 0);
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, false, true, 0);
	}
	return 0;
}

bool func_48(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_49()
{
	if (Global_2440049.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_50()
{
	return Global_74030;
}

int func_51(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_2540384.f_6662;
}

bool func_53()
{
	return SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_54()) < 5f;
}

Vector3 func_54()
{
	return 1111.052f, 229.8492f, -50.6409f;
}

int func_55()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_34, 4);
	}
	return 0;
}

int func_56(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_57(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58(float fParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_60(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0, 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	fVar3 = func_59(ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), vVar0);
	if (fVar3 >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_59(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_60(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_61()
{
	if (func_62())
	{
		return Global_1678288.f_483 == 0;
	}
	return 0;
}

bool func_62()
{
	return Global_1678288.f_482;
}

void func_63()
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (STREAMING::IS_MODEL_VALID(Global_262145.f_26058))
		{
			if (func_21(8517, -1, 0) != Global_262145.f_26058)
			{
				MISC::SET_BIT(&Global_1590545, 17);
				func_64(8517, Global_262145.f_26058, -1, 1, 0);
			}
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_65()
{
	int iVar0;

	if (Local_268.f_45 == 0)
	{
		if (MISC::IS_BIT_SET(Local_268.f_1, 4))
		{
			iVar0 = func_67(26806, -1, -1);
			if (iVar0 < 4)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_46("CAS_LW_VOUCH", -1);
					iVar0++;
					func_66(26806, iVar0, -1, 1);
					MISC::CLEAR_BIT(&(Local_268.f_1), 4);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_268.f_1), 4);
			}
		}
	}
}

bool func_66(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	iVar1 = func_69(iParam0, iParam1);
	iVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

void func_70()
{
	if (MISC::IS_BIT_SET(Local_268.f_1, 2))
	{
		if (!func_74(&(Local_268.f_43)))
		{
			func_73(&(Local_268.f_43), 0, 0);
		}
		else if (func_72(&(Local_268.f_43), 40000, 0) || (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()))
		{
			MISC::CLEAR_BIT(&(Local_268.f_1), 2);
			func_71(&(Local_268.f_43));
		}
	}
}

void func_71(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_72(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_74(var uParam0)
{
	return uParam0->f_1;
}

void func_75()
{
	if (Global_1377236.f_1149 >= 30000)
	{
		if (Local_105 != PLAYER::PLAYER_ID())
		{
			func_76(1);
		}
	}
}

void func_76(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (Local_105 != func_8() || iParam0 == 1)
	{
		if (Local_105 != PLAYER::PLAYER_ID() || iParam0 == 1)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1109.16f, 228.4484f, -50.63083f, 1112.186f, 228.9841f, -48.13083f, 2.75f, false, true, 0))
			{
				if (!MISC::IS_BIT_SET(Local_268.f_1, 1))
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_77(iVar3, &vVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 1f, -1, 0.25f, false, 40000f);
					MISC::SET_BIT(&(Local_268.f_1), 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0)
			{
				if (MISC::IS_BIT_SET(Local_268.f_1, 1))
				{
					MISC::CLEAR_BIT(&(Local_268.f_1), 1);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0)
		{
			if (MISC::IS_BIT_SET(Local_268.f_1, 1))
			{
				MISC::CLEAR_BIT(&(Local_268.f_1), 1);
			}
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0)
	{
		if (MISC::IS_BIT_SET(Local_268.f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_268.f_1), 1);
		}
	}
}

void func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1114.812f, 226.8861f, -50.8408f };
			break;
		case 1:
			*uParam1 = { 1115.391f, 222.8374f, -50.4301f };
			break;
		case 2:
			*uParam1 = { 1111.762f, 223.4791f, -50.8408f };
			break;
		case 3:
			*uParam1 = { 1110.287f, 222.9306f, -50.8408f };
			break;
		case 4:
			*uParam1 = { 1108.957f, 223.4897f, -50.8408f };
			break;
		case 5:
			*uParam1 = { 1106.042f, 226.8098f, -50.8408f };
			break;
	}
}

void func_78()
{
	if (func_41(24))
	{
		Local_268.f_23 = func_81();
		STREAMING::REQUEST_ANIM_DICT(Local_268.f_23);
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_268.f_23))
		{
			Local_268.f_10 = Local_105.f_1;
			func_80(14);
			func_79(24);
		}
	}
}

void func_79(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_268, iParam0))
	{
		MISC::CLEAR_BIT(&Local_268, iParam0);
	}
}

void func_80(int iParam0)
{
	Local_268.f_45 = iParam0;
}

char* func_81()
{
	char* sVar0;

	if (func_82(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@FEMALE";
	}
	else
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@MALE";
	}
	return sVar0;
}

int func_82(int iParam0)
{
	if (((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_FREEMODE_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_WEED_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_FORGERY_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_COCAINE_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_COUNTERFEIT_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_F_Y_SWEATSHOP_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_BEVHILLS_04")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_GENHOT_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_SCDRESSY_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("IG_TRACYDISANTO"))
	{
		return 1;
	}
	return 0;
}

void func_83()
{
	if (func_41(0))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SET_FRONTEND_ACTIVE(false);
		func_84();
	}
}

void func_84()
{
	Global_22411.f_6 = 1;
}

void func_85()
{
	if (func_86())
	{
		CAM::_0x79C0E43EB9B944E2(5891389);
	}
}

int func_86()
{
	if (Local_268.f_45 >= 5 && Local_268.f_45 <= 12)
	{
		return 1;
	}
	if (Local_268.f_45 == 13)
	{
		return 1;
	}
	if (Local_268.f_45 == 4)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_87()
{
	if (Local_268.f_17 < 6 && Local_268.f_17 != -1)
	{
		if (!func_74(&(Local_268.f_35)))
		{
			func_91();
			func_90();
			func_73(&(Local_268.f_35), 0, 0);
		}
		else if (func_72(&(Local_268.f_35), 250, 0) && !func_74(&(Local_268.f_37)))
		{
			func_89();
			if (Local_268.f_17 != 5)
			{
				func_88();
			}
			func_73(&(Local_268.f_37), 0, 0);
			Local_268.f_17++;
		}
		else if (func_74(&(Local_268.f_37)))
		{
			if (func_72(&(Local_268.f_37), 250, 0))
			{
				func_71(&(Local_268.f_37));
				func_71(&(Local_268.f_35));
			}
		}
	}
	else if (Local_268.f_17 == 6)
	{
		Local_268.f_17 = -1;
	}
}

void func_88()
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("VW_PROP_VW_JACKPOT_ON"), false);
}

void func_89()
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("VW_PROP_VW_LUCKYLIGHT_ON"), false);
}

void func_90()
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("VW_PROP_VW_JACKPOT_ON"), 0);
}

void func_91()
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("VW_PROP_VW_LUCKYLIGHT_ON"), 0);
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				if (iVar2 == 2032669874)
				{
					if (Global_1391942.f_785)
					{
						return;
					}
					func_93(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_93(int iParam0)
{
	struct<4> Var0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_105.f_1 = Var0.f_2;
		}
		if (PLAYER::PLAYER_ID() != Var0.f_1 && Var0.f_3)
		{
			func_40(24);
		}
	}
}

void func_94()
{
	switch (Local_268.f_45)
	{
		case 0:
			func_851();
			if (Local_268.f_17 == -1)
			{
				if (!func_41(23))
				{
					func_89();
					func_40(23);
				}
			}
			if (!func_850())
			{
				if (!func_41(0) && !func_25(1, 1))
				{
					func_849();
					if (func_846())
					{
						func_845(PLAYER::PLAYER_ID(), 1);
						func_844();
						func_831();
						func_40(0);
						func_80(1);
					}
				}
				else
				{
					func_829();
				}
			}
			if (!MISC::IS_BIT_SET(Local_268.f_1, 0) && ENTITY::DOES_ENTITY_EXIST(Local_268.f_72))
			{
				if (Local_105.f_1 != Local_268.f_14 && Local_105 == func_8())
				{
					ENTITY::SET_ENTITY_ROTATION(Local_268.f_72, 0f, -func_828(Local_105.f_1), 0f, 2, true);
					Local_268.f_14 = Local_105.f_1;
					MISC::SET_BIT(&(Local_268.f_1), 0);
				}
				else if (Local_105 == PLAYER::PLAYER_ID())
				{
					MISC::SET_BIT(&(Local_268.f_1), 0);
				}
			}
			break;
		case 1:
			if (Local_105 == PLAYER::PLAYER_ID())
			{
				func_827(PLAYER::PLAYER_ID(), 1);
				func_826(0);
				if (!MISC::IS_BIT_SET(Local_268.f_1, 3))
				{
					func_73(&(Local_268.f_41), 0, 0);
					func_80(2);
				}
				else
				{
					func_80(3);
				}
			}
			else if (func_72(&(Local_268.f_29), 1500, 0))
			{
				func_80(17);
			}
			break;
		case 2:
			func_816();
			break;
		case 3:
			func_808();
			if (func_41(8))
			{
				func_80(4);
			}
			break;
		case 4:
			func_808();
			if (func_41(9))
			{
				func_80(5);
			}
			break;
		case 5:
			func_807();
			break;
		case 7:
			func_806();
			break;
		case 6:
			func_801();
			break;
		case 8:
			func_800();
			func_796();
			if (func_41(5))
			{
				Local_268.f_10 = Local_105.f_1;
				if (!func_795(PLAYER::PLAYER_ID()))
				{
					Local_268.f_428 = UNK_0x5A002C4821A13338();
					func_794(Local_268.f_10, 1);
					func_40(21);
					func_793(1);
				}
				func_73(&(Local_268.f_33), 0, 0);
				func_80(13);
				if (func_38("LUCK_WHEEL_SPIN") || func_38("LUCK_W_SPIN_PC"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 13:
			if (func_74(&(Local_268.f_33)))
			{
				if (func_72(&(Local_268.f_33), 190, 0))
				{
					func_782(func_791(func_792(PLAYER::PLAYER_ID())), 0, 0, 1, 0);
					func_71(&(Local_268.f_33));
					func_781(173);
					Local_268.f_422 = 1f;
					func_80(9);
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						Local_105.f_1 = func_780(Local_105);
					}
				}
			}
			break;
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(Local_268.f_72) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_268.f_72))
			{
				func_778();
			}
			func_777(Local_268.f_422);
			func_776(Local_268.f_422);
			if (func_773(func_791(func_792(PLAYER::PLAYER_ID())), 0, 0))
			{
				func_782(func_772(func_792(PLAYER::PLAYER_ID())), 0, 1, 1, 0);
			}
			if (func_771(0))
			{
				func_40(14);
			}
			if ((func_41(14) && ENTITY::DOES_ENTITY_EXIST(Local_268.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_268.f_72))
			{
				func_753(0);
			}
			break;
		case 10:
			if (Local_268.f_425 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(Local_268.f_425);
				Local_268.f_425 = -1;
			}
			func_79(14);
			if (func_773(func_752(), 0, 1))
			{
				if (func_751())
				{
					func_749();
				}
				func_79(17);
				func_71(&(Local_268.f_74.f_329));
				func_80(11);
			}
			break;
		case 11:
			if (func_181())
			{
				func_40(21);
				func_170();
				func_160();
				Local_268.f_428 = UNK_0x5A002C4821A13338();
				func_80(16);
			}
			break;
		case 12:
			if (func_41(10))
			{
				if (func_773(14, 0, 1))
				{
					if (func_751())
					{
						func_749();
					}
					func_79(10);
					func_80(17);
				}
			}
			else
			{
				func_80(17);
			}
			break;
		case 14:
			func_154();
			break;
		case 15:
			func_153();
			break;
		case 16:
			func_138();
			break;
		case 17:
			func_95();
			break;
	}
}

void func_95()
{
	struct<331> Var0;

	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	if (func_38("LUCK_WHEEL_SPIN") || func_38("LUCK_W_SPIN_PC"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (PLAYER::PLAYER_ID() == Local_105)
	{
		func_130();
		func_116(PLAYER::PLAYER_ID(), 1, 0);
		HUD::_0x15CFA549788D35EF();
		if (Local_268.f_74.f_320 != 0)
		{
			if (Local_268.f_74.f_320 == 1)
			{
				func_109(func_114());
			}
			Local_268.f_74.f_320 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_268.f_73) && Local_268.f_73 != Global_1696944)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_268.f_73));
		}
		else
		{
			Local_268.f_73 = -1;
		}
		if (func_108())
		{
			func_107();
		}
		HUD::DISPLAY_RADAR(true);
	}
	func_106(1);
	func_103(1, -1);
	func_827(PLAYER::PLAYER_ID(), 0);
	if (func_41(0))
	{
		func_116(PLAYER::PLAYER_ID(), 1, 0);
	}
	StringCopy(&(Local_268.f_405), "", 64);
	Local_268.f_421 = 0;
	Local_268.f_422 = 0f;
	Local_268.f_47 = -1;
	Var0.f_1 = 307;
	Local_268.f_74 = { Var0 };
	func_80(0);
	func_99();
	func_98();
	func_793(0);
	func_71(&(Local_268.f_33));
	func_71(&(Local_268.f_29));
	func_71(&(Local_268.f_41));
	func_97(-1);
	func_96(0);
}

void func_96(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_268.f_429, iParam0))
	{
		MISC::CLEAR_BIT(&(Local_268.f_429), iParam0);
	}
}

void func_97(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		Local_107[PLAYER::PLAYER_ID() /*5*/].f_4 = iParam0;
	}
}

void func_98()
{
	func_845(PLAYER::PLAYER_ID(), 0);
}

void func_99()
{
	Local_268 = 0;
	func_102(5000);
	Local_268.f_2 = 0;
	Local_268.f_3 = 0;
	Local_268.f_4 = 0;
	Local_268.f_5 = 0;
	Local_268.f_6 = 0;
	Local_268.f_8 = 0;
	Local_268.f_9 = 0;
	func_101(-1);
	Local_268.f_11 = -1;
	Local_268.f_12 = 0;
	Local_268.f_13 = 0;
	Local_268.f_15 = 0;
	Local_268.f_18 = 0f;
	Local_268.f_19 = 0f;
	Local_268.f_16 = 0;
	Local_268.f_20 = 0f;
	Local_268.f_21 = 0f;
	func_97(-1);
	Local_268.f_46 = 1;
	func_100(-1);
	func_71(&(Local_268.f_27));
	func_71(&(Local_268.f_29));
	func_71(&(Local_268.f_31));
	func_71(&(Local_268.f_39));
}

void func_100(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_107[PLAYER::PLAYER_ID() /*5*/] != iParam0)
		{
			Local_107[PLAYER::PLAYER_ID() /*5*/] = iParam0;
		}
	}
}

void func_101(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_107[PLAYER::PLAYER_ID() /*5*/].f_2 != iParam0)
		{
			Local_107[PLAYER::PLAYER_ID() /*5*/].f_2 = iParam0;
		}
	}
}

void func_102(int iParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_107[PLAYER::PLAYER_ID() /*5*/].f_3 != iParam0)
		{
			Local_107[PLAYER::PLAYER_ID() /*5*/].f_3 = iParam0;
		}
	}
}

void func_103(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_105(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22550.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22550.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_104(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_104(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_105(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22550.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_22550.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22550.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_106(bool bParam0)
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_268.f_424))
	{
		AUDIO::STOP_SOUND(Local_268.f_424);
		AUDIO::RELEASE_SOUND_ID(Local_268.f_424);
		Local_268.f_424 = -1;
	}
	if (!bParam0)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_268.f_426))
		{
			AUDIO::STOP_SOUND(Local_268.f_426);
			AUDIO::RELEASE_SOUND_ID(Local_268.f_426);
			Local_268.f_426 = -1;
		}
		if (!AUDIO::HAS_SOUND_FINISHED(Local_268.f_427))
		{
			AUDIO::STOP_SOUND(Local_268.f_427);
			AUDIO::RELEASE_SOUND_ID(Local_268.f_427);
			Local_268.f_427 = -1;
		}
	}
}

void func_107()
{
	Global_2440049.f_1267.f_10 = 0;
}

bool func_108()
{
	return Global_2440049.f_1267.f_10;
}

void func_109(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_112(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_110(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_110(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_111(&(uParam0->f_14));
	func_111(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_111(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_112(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_113()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_114()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_115(iVar0) != 2147483647)
		{
			if (func_112(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

void func_116(int iParam0, bool bParam1, int iParam2)
{
	if (func_129(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		func_117(iParam0, bParam1, iParam2, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, !bParam1);
	}
}

void func_117(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;

	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_128())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			bParam3 = true;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		UNK_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_126())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || bParam3 == 1))
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_16(PLAYER::PLAYER_ID(), 0) && !func_125()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2425869[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_122(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_121(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_120();
					func_119();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425869[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_121(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
						}
					}
					if (func_118(Global_4456448.f_129348))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			UNK_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar28);
		}
	}
}

bool func_118(int iParam0)
{
	return iParam0 == 17;
}

void func_119()
{
	vector3 vVar0;

	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { vVar0 };
}

void func_120()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_121(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_122(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_124();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_16(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_123(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_123(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_124()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = UNK_0xF7B3A1430308F92B(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_125()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_126()
{
	if (func_127() == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	return Global_1312485.f_18;
}

int func_128()
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_130()
{
	func_131(0);
}

void func_131(bool bParam0)
{
	if (bParam0)
	{
		func_137();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_51(0))
		{
			func_132(0);
		}
	}
	else if (Global_19681.f_1 == 1)
	{
		if (!Global_19681.f_1 == 0)
		{
			Global_19681.f_1 = 3;
		}
	}
}

void func_132(int iParam0)
{
	if (func_136())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_135())
		{
			func_134(1, 1);
		}
		else
		{
			func_134(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7552, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 30);
	}
	if (!func_133())
	{
		Global_19681.f_1 = 3;
	}
}

int func_133()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_134(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19618);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
}

bool func_135()
{
	return MISC::IS_BIT_SET(Global_1689730, 5);
}

bool func_136()
{
	return MISC::IS_BIT_SET(Global_1689730, 19);
}

void func_137()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_138()
{
	if (func_113())
	{
		if (func_141(&(Local_268.f_443), 147735386, (Local_268.f_428 + 86400)))
		{
			if (Local_268.f_443 == 2)
			{
				func_139(0);
				func_80(17);
			}
			Local_268.f_443 = 0;
		}
	}
	else
	{
		func_139(0);
		func_80(17);
	}
}

void func_139(bool bParam0)
{
	func_140(-1753117686, (Local_268.f_428 + 86400));
	if (!bParam0)
	{
		func_64(8350, (Local_268.f_428 + 86400), -1, 1, 0);
	}
	Global_2462182 = 1;
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

bool func_141(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_114() != -1)
		{
			return false;
		}
		if (func_149(78225582, 1888666031, iParam1, 1668906031, iParam2, 0, iParam2, 1, 0, 3))
		{
			if (func_144())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else
		{
			*uParam0 = 3;
		}
	}
	else if (*uParam0 == 1)
	{
		if (func_143(func_114()))
		{
			if (func_142(func_114()) == 2)
			{
				*uParam0 = 2;
			}
			else
			{
				*uParam0 = 3;
			}
			func_109(func_114());
		}
	}
	return *uParam0 != 1;
}

int func_142(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_144()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	bVar1 = true;
	iVar2 = func_114();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_148(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463410)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_115(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || bVar1)
			{
				func_145(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_145(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	int iVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1191422458;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	iVar36 = func_147(vVar0.y);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_146();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_146()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_147(int iParam0)
{
	var uVar0;

	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_148(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 1982688246:
				return 0;
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
			default:
				return 0;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
				return 1;
			case 1775876058:
			case -518651910:
				return 2;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;

	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_114();
	if (iVar1 == -1)
	{
		if (!func_151(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_150(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4264051[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4264051[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4264051[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4264051[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4264051[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_152(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, iParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_113())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_145(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_153()
{
	if (func_771(1))
	{
		func_40(14);
	}
	if ((func_41(14) && ENTITY::DOES_ENTITY_EXIST(Local_268.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_268.f_72))
	{
		func_753(1);
	}
}

void func_154()
{
	if (func_795(Local_105))
	{
		func_100(func_780(Local_105));
		func_102(func_159(Local_105));
		Local_268.f_15 = func_158();
		Local_268.f_8 = func_157();
		func_155();
		func_80(15);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_105.f_1 = func_780(Local_105);
		}
	}
}

void func_155()
{
	char* sVar0;

	sVar0 = func_156(func_792(Local_105));
	ENTITY::SET_ENTITY_ROTATION(Local_268.f_72, 0f, 0f, 0f, 2, true);
	ENTITY::PLAY_ENTITY_ANIM(Local_268.f_72, sVar0, Local_268.f_23, 1000f, false, true, false, 0f, 2);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_268.f_72);
}

char* func_156(int iParam0)
{
	char* sVar0;

	sVar0 = "null";
	switch (iParam0)
	{
		case 0:
			if (func_82(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_268.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01_wheel";
					case 1:
						return "spinningwheel_low_effort_02_wheel";
					case 2:
						return "spinningwheel_low_effort_03_wheel";
					case 3:
						return "spinningwheel_low_effort_04_wheel";
					case 4:
						return "spinningwheel_low_effort_05_wheel";
					case 5:
						return "spinningwheel_low_effort_06_wheel";
					case 6:
						return "spinningwheel_low_effort_07_wheel";
					case 7:
						return "spinningwheel_low_effort_08_wheel";
					case 8:
						return "spinningwheel_low_effort_09_wheel";
					case 9:
						return "spinningwheel_low_effort_10_wheel";
					case 10:
						return "spinningwheel_low_effort_11_wheel";
					case 11:
						return "spinningwheel_low_effort_12_wheel";
					case 12:
						return "spinningwheel_low_effort_13_wheel";
					case 13:
						return "spinningwheel_low_effort_14_wheel";
					case 14:
						return "spinningwheel_low_effort_15_wheel";
					case 15:
						return "spinningwheel_low_effort_16_wheel";
					case 16:
						return "spinningwheel_low_effort_17_wheel";
					case 17:
						return "spinningwheel_low_effort_18_wheel";
					case 18:
						return "spinningwheel_low_effort_19_wheel";
					case 19:
						return "spinningwheel_low_effort_20_wheel";
				}
			}
			else
			{
				switch (Local_268.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01";
					case 1:
						return "spinningwheel_low_effort_02";
					case 2:
						return "spinningwheel_low_effort_03";
					case 3:
						return "spinningwheel_low_effort_04";
					case 4:
						return "spinningwheel_low_effort_05";
					case 5:
						return "spinningwheel_low_effort_06";
					case 6:
						return "spinningwheel_low_effort_07";
					case 7:
						return "spinningwheel_low_effort_08";
					case 8:
						return "spinningwheel_low_effort_09";
					case 9:
						return "spinningwheel_low_effort_10";
					case 10:
						return "spinningwheel_low_effort_11";
					case 11:
						return "spinningwheel_low_effort_12";
					case 12:
						return "spinningwheel_low_effort_13";
					case 13:
						return "spinningwheel_low_effort_14";
					case 14:
						return "spinningwheel_low_effort_15";
					case 15:
						return "spinningwheel_low_effort_16";
					case 16:
						return "spinningwheel_low_effort_17";
					case 17:
						return "spinningwheel_low_effort_18";
					case 18:
						return "spinningwheel_low_effort_19";
					case 19:
						return "spinningwheel_low_effort_20";
				}
			}
			break;
		case 1:
			if (func_82(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_268.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_20_wheel";
					case 1:
						return "spinningwheel_med_effort_01_wheel";
					case 2:
						return "spinningwheel_med_effort_02_wheel";
					case 3:
						return "spinningwheel_med_effort_03_wheel";
					case 4:
						return "spinningwheel_med_effort_04_wheel";
					case 5:
						return "spinningwheel_med_effort_05_wheel";
					case 6:
						return "spinningwheel_med_effort_06_wheel";
					case 7:
						return "spinningwheel_med_effort_07_wheel";
					case 8:
						return "spinningwheel_med_effort_08_wheel";
					case 9:
						return "spinningwheel_med_effort_09_wheel";
					case 10:
						return "spinningwheel_med_effort_10_wheel";
					case 11:
						return "spinningwheel_med_effort_11_wheel";
					case 12:
						return "spinningwheel_med_effort_12_wheel";
					case 13:
						return "spinningwheel_med_effort_13_wheel";
					case 14:
						return "spinningwheel_med_effort_14_wheel";
					case 15:
						return "spinningwheel_med_effort_15_wheel";
					case 16:
						return "spinningwheel_med_effort_16_wheel";
					case 17:
						return "spinningwheel_med_effort_17_wheel";
					case 18:
						return "spinningwheel_med_effort_18_wheel";
					case 19:
						return "spinningwheel_med_effort_19_wheel";
				}
			}
			else
			{
				switch (Local_268.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_01";
					case 1:
						return "spinningwheel_med_effort_02";
					case 2:
						return "spinningwheel_med_effort_03";
					case 3:
						return "spinningwheel_med_effort_04";
					case 4:
						return "spinningwheel_med_effort_05";
					case 5:
						return "spinningwheel_med_effort_06";
					case 6:
						return "spinningwheel_med_effort_07";
					case 7:
						return "spinningwheel_med_effort_08";
					case 8:
						return "spinningwheel_med_effort_09";
					case 9:
						return "spinningwheel_med_effort_10";
					case 10:
						return "spinningwheel_med_effort_11";
					case 11:
						return "spinningwheel_med_effort_12";
					case 12:
						return "spinningwheel_med_effort_13";
					case 13:
						return "spinningwheel_med_effort_14";
					case 14:
						return "spinningwheel_med_effort_15";
					case 15:
						return "spinningwheel_med_effort_16";
					case 16:
						return "spinningwheel_med_effort_17";
					case 17:
						return "spinningwheel_med_effort_18";
					case 18:
						return "spinningwheel_med_effort_19";
					case 19:
						return "spinningwheel_med_effort_20";
				}
			}
			break;
		case 2:
			if (func_82(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_268.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01_wheel";
					case 1:
						return "spinningwheel_high_effort_02_wheel";
					case 2:
						return "spinningwheel_high_effort_03_wheel";
					case 3:
						return "spinningwheel_high_effort_04_wheel";
					case 4:
						return "spinningwheel_high_effort_05_wheel";
					case 5:
						return "spinningwheel_high_effort_06_wheel";
					case 6:
						return "spinningwheel_high_effort_07_wheel";
					case 7:
						return "spinningwheel_high_effort_08_wheel";
					case 8:
						return "spinningwheel_high_effort_09_wheel";
					case 9:
						return "spinningwheel_high_effort_10_wheel";
					case 10:
						return "spinningwheel_high_effort_11_wheel";
					case 11:
						return "spinningwheel_high_effort_12_wheel";
					case 12:
						return "spinningwheel_high_effort_13_wheel";
					case 13:
						return "spinningwheel_high_effort_14_wheel";
					case 14:
						return "spinningwheel_high_effort_15_wheel";
					case 15:
						return "spinningwheel_high_effort_16_wheel";
					case 16:
						return "spinningwheel_high_effort_17_wheel";
					case 17:
						return "spinningwheel_high_effort_18_wheel";
					case 18:
						return "spinningwheel_high_effort_19_wheel";
					case 19:
						return "spinningwheel_high_effort_20_wheel";
				}
			}
			else
			{
				switch (Local_268.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01";
					case 1:
						return "spinningwheel_high_effort_02";
					case 2:
						return "spinningwheel_high_effort_03";
					case 3:
						return "spinningwheel_high_effort_04";
					case 4:
						return "spinningwheel_high_effort_05";
					case 5:
						return "spinningwheel_high_effort_06";
					case 6:
						return "spinningwheel_high_effort_07";
					case 7:
						return "spinningwheel_high_effort_08";
					case 8:
						return "spinningwheel_high_effort_09";
					case 9:
						return "spinningwheel_high_effort_10";
					case 10:
						return "spinningwheel_high_effort_11";
					case 11:
						return "spinningwheel_high_effort_12";
					case 12:
						return "spinningwheel_high_effort_13";
					case 13:
						return "spinningwheel_high_effort_14";
					case 14:
						return "spinningwheel_high_effort_15";
					case 15:
						return "spinningwheel_high_effort_16";
					case 16:
						return "spinningwheel_high_effort_17";
					case 17:
						return "spinningwheel_high_effort_18";
					case 18:
						return "spinningwheel_high_effort_19";
					case 19:
						return "spinningwheel_high_effort_20";
				}
			}
			break;
	}
	return sVar0;
}

int func_157()
{
	int iVar0;

	iVar0 = 0;
	if (func_159(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 4;
	}
	else if (func_159(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_158()
{
	int iVar0;

	iVar0 = 535;
	if (func_159(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 110;
	}
	else if (func_159(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 353;
	}
	return iVar0;
}

int func_159(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_107[iParam0 /*5*/].f_3;
}

void func_160()
{
	int iVar0;
	char* sVar1;

	if (!Global_262145.f_26112)
	{
		return;
	}
	if (func_169())
	{
		return;
	}
	Local_268.f_48 = MISC::GET_HASH_KEY("LUCKYWHEEL");
	Local_268.f_48.f_1 = MISC::GET_HASH_KEY("STANDARD");
	Local_268.f_48.f_4 = MISC::GET_HASH_KEY("WIN");
	Local_268.f_48.f_11 = func_168(PLAYER::PLAYER_ID());
	Local_268.f_48.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_167())
	{
		Local_268.f_48.f_19 = NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	iVar0 = func_166();
	sVar1 = func_165(iVar0);
	Local_268.f_48.f_21 = MISC::GET_HASH_KEY(sVar1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_163()))
	{
		Local_268.f_48.f_22 = 0;
	}
	else
	{
		Local_268.f_48.f_22 = MISC::GET_HASH_KEY(func_163());
	}
	switch (func_780(PLAYER::PLAYER_ID()))
	{
		case 3:
			Local_268.f_48.f_6 = 10000;
			break;
		case 7:
			Local_268.f_48.f_6 = 15000;
			break;
		case 10:
			Local_268.f_48.f_6 = 20000;
			break;
		case 15:
			Local_268.f_48.f_6 = 25000;
			break;
		case 11:
			switch (Local_268.f_47)
			{
				case 2:
					Local_268.f_48.f_6 = Local_268.f_421;
					break;
			}
			break;
	}
	Local_268.f_48.f_7 = func_162();
	Local_268.f_48.f_23 = func_161();
	Local_268.f_48.f_15 = 1;
	if (func_168(PLAYER::PLAYER_ID()))
	{
		Local_268.f_48.f_20 = MISC::GET_HASH_KEY("VIP membership");
	}
	else
	{
		Local_268.f_48.f_20 = MISC::GET_HASH_KEY("paid membership");
	}
	Local_268.f_48.f_10 = 1;
	STATS::_PLAYSTATS_CASINO_LUCKYSEVEN(&(Local_268.f_48));
}

int func_161()
{
	int iVar0;

	iVar0 = func_780(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 2500;
		case 2:
			return 20000;
		case 3:
			return 10000;
		case 5:
			return 5000;
		case 7:
			return 15000;
		case 9:
			return 7500;
		case 6:
			return 30000;
		case 10:
			return 20000;
		case 13:
			return 10000;
		case 14:
			return 40000;
		case 17:
			return 15000;
		case 19:
			return 50000;
		case 15:
			return 25000;
		case 11:
			switch (Local_268.f_47)
			{
				case 2:
				case 4:
				case 3:
					return Local_268.f_421;
			}
			break;
	}
	return 0;
}

int func_162()
{
	return func_21(8249, -1, 0);
}

char* func_163()
{
	int iVar0;

	iVar0 = func_780(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 18:
			return func_164(&(Local_268.f_405));
		case 11:
			switch (Local_268.f_47)
			{
				case 0:
				case 6:
				case 1:
				case 5:
					return func_164(&(Local_268.f_405));
			}
			break;
	}
	return "";
}

var func_164(var uParam0)
{
	return uParam0;
}

char* func_165(int iParam0)
{
	if (iParam0 == 5)
	{
		switch (Local_268.f_47)
		{
			case 0:
				return "MYSTREYCLOTHING";
			case 1:
				return "MYSTREYVEHICLE";
			case 2:
				return "MYSTREYCHIPS";
			case 3:
				return "MYSTREYCASH";
			case 4:
				return "MYSTREYRP";
			case 5:
				return "MYSTREYINVENTORY";
			case 6:
				return "MYSTREYBUSINESS";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "CLOTHING";
			case 1:
				return "RP";
			case 2:
				return "CASH";
			case 3:
				return "HOUSECHIPS";
			case 4:
				return "DISCOUNTVOUCHER";
			case 6:
				return "PODIUMVEHICLE";
			default:
				break;
		}
	}
	return "";
}

int func_166()
{
	int iVar0;

	iVar0 = func_780(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 0:
			return 0;
		case 5:
			return 1;
		case 7:
			return 3;
		case 11:
			return 5;
		case 8:
			return 0;
		case 9:
			return 1;
		case 6:
			return 2;
		case 10:
			return 3;
		case 12:
			return 0;
		case 13:
			return 1;
		case 18:
			return 6;
		case 14:
			return 2;
		case 16:
			return 0;
		case 17:
			return 1;
		case 19:
			return 2;
		case 15:
			return 3;
		case 4:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_167()
{
	return -1;
}

int func_168(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_169()
{
	if (MISC::ARE_STRINGS_EQUAL(&(Local_268.f_405), "INVALID"))
	{
		if (func_780(PLAYER::PLAYER_ID()) == 11 && Local_268.f_47 == 1)
		{
			return 1;
		}
		if (func_780(PLAYER::PLAYER_ID()) == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_170()
{
	if (func_180() || (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_268.f_405)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_268.f_405))))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_268.f_405)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_268.f_405)))
		{
			func_42("CAS_LW_RP", 20000, -1);
			MISC::SET_BIT(&(Local_268.f_1), 2);
		}
		else
		{
			func_42(func_179(), func_178(), -1);
			MISC::SET_BIT(&(Local_268.f_1), 2);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_268.f_405)))
	{
		if (!MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_268.f_405)))
		{
			func_46(func_179(), -1);
			MISC::SET_BIT(&(Local_268.f_1), 2);
		}
	}
	else
	{
		func_46(func_179(), -1);
		MISC::SET_BIT(&(Local_268.f_1), 2);
	}
	if (Local_268.f_14 == 4)
	{
		if (!MISC::IS_BIT_SET(Local_268.f_1, 4))
		{
			MISC::SET_BIT(&(Local_268.f_1), 4);
		}
	}
	if (func_177())
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_268.f_405)) && !MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_268.f_405))) && !MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_268.f_405)))
		{
			HUD::_0x15CFA549788D35EF();
			if (func_176())
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("TWOSTRINGS");
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_268.f_405));
			}
			if (func_176())
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_173(Local_268.f_74.f_328, 1));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Local_268.f_405));
			}
			if (Local_268.f_14 == 11 && func_180())
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Local_268.f_421);
			}
			HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(func_172(), func_171(), &(Local_268.f_405), 1);
		}
	}
}

int func_171()
{
	switch (Local_268.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return 7;
		case 4:
			return 18;
		case 11:
			return 19;
		case 18:
			return 5;
	}
	return -1;
}

char* func_172()
{
	switch (Local_268.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_RCLO";
		case 4:
			return "CAS_LW_RDISC";
		case 11:
			return "CAS_LW_RMYST";
		case 18:
			return "CAS_LW_RVEHI";
	}
	return "";
}

char* func_173(int iParam0, bool bParam1)
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
	{
		return func_175(iParam0, bParam1);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		return func_174(iParam0, bParam1);
	}
	switch (iParam0)
	{
		case joaat("KHAMELION"):
			return "HIJAK";
		case joaat("ISSI2"):
		case 1854776567:
			return "WEENY";
		case joaat("ELEGY2"):
		case -362150785:
			return "ANNIS";
		case joaat("ROMERO"):
			return "CHARIOT";
		case joaat("BALLER"):
		case joaat("BALLER2"):
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("BALLER5"):
		case joaat("BALLER6"):
			if (bParam1)
			{
				return "GALLIVAN";
			}
			else
			{
				return "GALIVANTER";
			}
			break;
		case joaat("SURFER"):
		case joaat("SURFER2"):
		case joaat("DUNE"):
		case joaat("BFINJECTION"):
			return "BF";
		case joaat("FELTZER2"):
		case joaat("DUBSTA"):
		case joaat("SURANO"):
		case joaat("SCHWARZER"):
		case joaat("SCHAFTER2"):
		case joaat("SERRANO"):
		case joaat("DUBSTA2"):
		case joaat("FELTZER3"):
			if (bParam1)
			{
				return "BENEFAC";
			}
			else
			{
				return "BENEFACTOR";
			}
			break;
		case joaat("SENTINEL"):
		case joaat("SENTINEL2"):
		case joaat("ZION"):
		case joaat("ZION2"):
		case 1862507111:
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
			if (bParam1)
			{
				return "UBERMACH";
			}
			else
			{
				return "UBERMACHT";
			}
			break;
		case joaat("ZTYPE"):
		case joaat("ADDER"):
		case 1044193113:
			return "TRUFFADE";
		case joaat("JB700"):
		case joaat("RAPIDGT"):
		case joaat("RAPIDGT2"):
		case joaat("EXEMPLAR"):
		case joaat("MASSACRO"):
		case joaat("MASSACRO2"):
			if (bParam1)
			{
				return "DEWBAUCH";
			}
			else
			{
				return "DEWBAUCHEE";
			}
			break;
		case joaat("TAILGATER"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("ROCOTO"):
		case 686471183:
			return "OBEY";
		case joaat("PICADOR"):
		case joaat("SURGE"):
		case joaat("FUGITIVE"):
		case joaat("MARSHALL"):
			return "CHEVAL";
		case joaat("MOWER"):
			if (bParam1)
			{
				return "JACKSHP";
			}
			else
			{
				return "JACKSHEEPE";
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
		case joaat("BURRITO"):
		case joaat("BURRITO2"):
		case joaat("PREMIER"):
		case joaat("VOODOO2"):
		case joaat("SABREGT"):
		case joaat("RANCHERXL"):
		case joaat("VIGERO"):
		case joaat("ASEA"):
		case joaat("ASEA2"):
		case joaat("GRANGER"):
		case joaat("PRANGER"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
		case joaat("GBURRITO"):
		case joaat("GBURRITO2"):
		case joaat("STALION"):
			return "DECLASSE";
		case joaat("BUCCANEER"):
		case joaat("CAVALCADE"):
		case joaat("CAVALCADE2"):
		case joaat("EMPEROR"):
		case joaat("EMPEROR2"):
		case joaat("MANANA"):
		case joaat("PRIMO"):
		case joaat("WASHINGTON"):
		case joaat("VIRGO"):
			return "ALBANY";
		case joaat("BANSHEE"):
		case joaat("BISON"):
		case joaat("GRESLEY"):
		case joaat("YOUGA"):
		case joaat("GAUNTLET"):
		case joaat("BUFFALO"):
		case joaat("BUFFALO2"):
		case joaat("RATLOADER"):
		case joaat("DLOADER"):
		case joaat("RATLOADER2"):
		case joaat("RUMPO"):
		case joaat("BANSHEE2"):
		case 722226637:
			return "BRAVADO";
		case joaat("STINGER"):
		case joaat("STINGERGT"):
		case joaat("CHEETAH"):
		case joaat("CARBONIZZARE"):
			if (bParam1)
			{
				return "GROTTI";
			}
			else
			{
				return "Grotti_2";
			}
			break;
		case joaat("COQUETTE"):
		case joaat("COQUETTE3"):
			if (bParam1)
			{
				return "INVERTO";
			}
			else
			{
				return "Invetero";
			}
			break;
		case joaat("RADI"):
		case joaat("SADLER"):
		case joaat("DOMINATOR"):
		case joaat("SANDKING"):
		case joaat("SANDKING2"):
		case joaat("POLICE"):
		case joaat("POLICE3"):
		case joaat("POLICET"):
		case joaat("BENSON"):
		case joaat("BULLET"):
		case joaat("MINIVAN"):
		case joaat("SPEEDO"):
		case joaat("SPEEDO2"):
		case joaat("PEYOTE"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("BOBCATXL"):
		case joaat("STANIER"):
		case joaat("HOTKNIFE"):
		case joaat("SLAMVAN"):
		case joaat("GUARDIAN"):
		case joaat("CHINO"):
		case -1349095620:
			return "VAPID";
		case joaat("TIPTRUCK"):
		case joaat("TACO"):
		case joaat("UTILLITRUCK"):
		case joaat("UTILLITRUCK2"):
		case joaat("UTILLITRUCK3"):
		case joaat("CAMPER"):
		case joaat("RIOT"):
		case joaat("TOURBUS"):
		case joaat("AMBULANCE"):
		case joaat("STOCKADE"):
		case joaat("BOXVILLE"):
		case joaat("PONY"):
			return "BRUTE";
		case joaat("PRAIRIE"):
			return "BOLLOKAN";
		case joaat("JACKAL"):
		case joaat("F620"):
		case joaat("LOCUST"):
			return "OCELOT";
		case joaat("MESA"):
		case joaat("MESA3"):
		case joaat("BODHI2"):
		case joaat("SEMINOLE"):
		case joaat("CRUSADER"):
			return "CANIS";
		case joaat("ENTITYXF"):
			return "OVERFLOD";
		case joaat("MONROE"):
		case joaat("INFERNUS"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("VACCA"):
		case joaat("RUFFIAN"):
		case joaat("FAGGIO2"):
		case joaat("OSIRIS"):
		case -682108547:
			return "PEGASSI";
		case joaat("PHOENIX"):
		case joaat("RUINER"):
		case joaat("DUKES"):
		case joaat("DUKES2"):
			return "IMPONTE";
		case joaat("BJXL"):
		case joaat("REBEL"):
		case joaat("REBEL2"):
		case joaat("ASTEROPE"):
		case joaat("INTRUDER"):
		case joaat("FUTO"):
		case joaat("SULTAN"):
		case joaat("DILETTANTE"):
		case joaat("DILETTANTE2"):
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
		case joaat("SULTANRS"):
			return "KARIN";
		case joaat("PENUMBRA"):
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
		case joaat("MULE"):
			return "MAIBATSU";
		case joaat("BLISTA"):
		case joaat("BLISTA2"):
		case joaat("BLISTA3"):
		case joaat("DOUBLE"):
		case joaat("JESTER"):
		case joaat("JESTER2"):
		case joaat("ENDURO"):
		case joaat("VINDICATOR"):
		case joaat("AKUMA"):
			return "DINKA";
		case joaat("FQ2"):
			return "FATHOM";
		case joaat("VOLTIC"):
		case joaat("BRAWLER"):
			return "COIL";
	}
	switch (iParam0)
	{
		case joaat("FELON"):
		case joaat("FELON2"):
		case joaat("CASCO"):
		case -1829436850:
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
		case joaat("COMET2"):
			return "PFISTER";
		case joaat("FUSILADE"):
			return "SCHYSTER";
		case joaat("STRETCH"):
		case joaat("REGINA"):
		case joaat("LANDSTALKER"):
			if (bParam1)
			{
				return "DUNDREAR";
			}
			else
			{
				return "DUNDREARY";
			}
			break;
		case joaat("HANDLER"):
		case joaat("BULLDOZER"):
		case joaat("DOCKTUG"):
		case joaat("CUTTER"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("BARRACKS"):
		case joaat("BARRACKS2"):
		case joaat("BIFF"):
		case joaat("FORKLIFT"):
		case joaat("RIPLEY"):
		case joaat("AIRTUG"):
		case joaat("DUMP"):
		case joaat("INSURGENT2"):
		case joaat("INSURGENT"):
			return "HVY";
		case joaat("PACKER"):
		case joaat("FLATBED"):
		case joaat("TIPTRUCK2"):
		case joaat("POUNDER"):
		case joaat("FIRETRUK"):
			return "MTL";
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
			return "STANLEY";
		case joaat("HAULER"):
		case joaat("PHANTOM"):
		case joaat("TRASH"):
			return "JOBUILT";
		case joaat("PATRIOT"):
			return "MAMMOTH";
		case joaat("JOURNEY"):
		case joaat("STRATUM"):
			if (bParam1)
			{
				return "ZIRCONIU";
			}
			else
			{
				return "ZIRCONIUM";
			}
			break;
		case joaat("VADER"):
		case joaat("PCJ"):
			return "SHITZU";
		case joaat("BAGGER"):
		case joaat("DAEMON"):
		case joaat("SOVEREIGN"):
			if (bParam1)
			{
				return "WESTERN";
			}
			else
			{
				return "WESTERNMOTORCYCLE";
			}
			break;
		case joaat("BLAZER"):
		case joaat("CADDY"):
		case joaat("CARBONRS"):
		case joaat("BLAZER3"):
		case joaat("BLAZER2"):
			return "NAGASAKI";
		case joaat("NEMESIS"):
		case joaat("LECTRO"):
			if (bParam1)
			{
				return "PRINCIPL";
			}
			else
			{
				return "PRINCIPE";
			}
			break;
		case joaat("HEXER"):
			return "LCC";
		case joaat("BMX"):
		case joaat("CRUISER"):
		case joaat("SCORCHER"):
			if (!bParam1)
			{
				return "Ped";
			}
			break;
		case joaat("TRIBIKE"):
		case joaat("TRIBIKE2"):
		case joaat("TRIBIKE3"):
			if (!bParam1)
			{
				return "TriCycles";
			}
			break;
		case joaat("COGCABRIO"):
		case joaat("SUPERD"):
		case joaat("WINDSOR"):
			return "ENUS";
		case joaat("HABANERO"):
			if (bParam1)
			{
				return "EMPEROR";
			}
			else
			{
				return "EMPORER";
			}
			break;
		case joaat("INGOT"):
		case -882629065:
			return "VULCAR";
		case joaat("T20"):
			return "PROGEN";
	}
	if (iParam0 == joaat("BIFTA"))
	{
		return "BF";
	}
	else if (iParam0 == joaat("KALAHARI"))
	{
		return "CANIS";
	}
	else if (iParam0 == joaat("PARADISE"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("BTYPE"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("ZENTORNO"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("JESTER"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("MASSACRO"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	else if (iParam0 == joaat("TURISMOR"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	else if (iParam0 == joaat("HUNTLEY"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("ALPHA"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("THRUST"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("SOVEREIGN"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("THRUST"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("BLADE") || iParam0 == joaat("MONSTER"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("WARRENER"))
	{
		return "VULCAR";
	}
	if ((iParam0 == joaat("GLENDALE") || iParam0 == joaat("PANTO")) || iParam0 == joaat("DUBSTA3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("RHAPSODY"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("PIGALLE"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("COQUETTE2"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	if (iParam0 == joaat("INNOVATION"))
	{
		return "LCC";
	}
	if (iParam0 == joaat("HAKUCHOU"))
	{
		return "SHITZU";
	}
	if (iParam0 == joaat("FUROREGT"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("RATLOADER2"))
	{
		return "BRAVADO";
	}
	else if (iParam0 == joaat("SLAMVAN"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("JESTER2"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("MASSACRO2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("WINDSOR"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("CHINO") || iParam0 == joaat("CHINO2"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("VINDICATOR"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("VIRGO"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("SWIFT2") || iParam0 == joaat("LUXOR2"))
	{
		return "BUCKING";
	}
	else if (iParam0 == joaat("FELTZER3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	else if (iParam0 == joaat("T20"))
	{
		return "PROGEN";
	}
	else if (iParam0 == joaat("OSIRIS"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("COQUETTE3"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	else if (iParam0 == joaat("TORO"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	else if (iParam0 == joaat("BRAWLER"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("PRIMO2") || iParam0 == joaat("BUCCANEER2"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("FACTION") || iParam0 == joaat("FACTION2"))
	{
		return "WILLARD";
	}
	else if ((iParam0 == joaat("MOONBEAM2") || iParam0 == joaat("VOODOO")) || iParam0 == joaat("MOONBEAM"))
	{
		return "DECLASSE";
	}
	else if (iParam0 == joaat("CHINO2") || iParam0 == joaat("DUKES2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("FACTION3"))
	{
		return "WILLARD";
	}
	if ((iParam0 == joaat("SABREGT2") || iParam0 == joaat("TORNADO5")) || iParam0 == joaat("VIRGO"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("VIRGO2") || iParam0 == joaat("VIRGO3"))
	{
		if (bParam1)
		{
			return "DUNDREAR";
		}
		else
		{
			return "DUNDREARY";
		}
	}
	if (iParam0 == joaat("SLAMVAN3") || iParam0 == joaat("MINIVAN2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("LURCHER") || iParam0 == joaat("BTYPE2"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("MAMBA") || iParam0 == joaat("TAMPA"))
	{
		return "DECLASSE";
	}
	if (((iParam0 == joaat("COGNOSCENTI") || iParam0 == joaat("COG55")) || iParam0 == joaat("COG552")) || iParam0 == joaat("COGNOSCENTI2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("VERLIERER2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("SCHAFTER4") || iParam0 == joaat("SCHAFTER3")) || iParam0 == joaat("SCHAFTER5")) || iParam0 == joaat("SCHAFTER6"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (((iParam0 == joaat("BALLER3") || iParam0 == joaat("BALLER4")) || iParam0 == joaat("BALLER5")) || iParam0 == joaat("BALLER6"))
	{
		if (bParam1)
		{
			return "GALLIVAN";
		}
		else
		{
			return "GALIVANTER";
		}
	}
	if (iParam0 == joaat("NIGHTSHADE"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("BTYPE3"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("PFISTER811"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("SEVEN70"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("RUMPO3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("BESTIAGTS"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("XLS") || iParam0 == joaat("XLS2"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("FMJ"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("WINDSOR2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("REAPER"))
	{
		return "PEGASSI";
	}
	if (((iParam0 == joaat("CONTENDER") || iParam0 == joaat("TROPHYTRUCK")) || iParam0 == joaat("TROPHYTRUCK2")) || iParam0 == joaat("DOMINATOR2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("BF400"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("CLIFFHANGER") || iParam0 == joaat("GARGOYLE"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("BUFFALO3") || iParam0 == joaat("GAUNTLET2"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("OMNIS"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("LE7B"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("TROPOS"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("TAMPA2") || iParam0 == joaat("STALION2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("BRIOSO"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("TYRUS"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("LYNX"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("SHEAVA"))
	{
		if (bParam1)
		{
			return "EMPEROR";
		}
		else
		{
			return "EMPORER";
		}
	}
	if (iParam0 == joaat("RALLYTRUCK"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("TORNADO6"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("AVARUS") || iParam0 == joaat("SANCTUS"))
	{
		return "LCC";
	}
	if ((iParam0 == joaat("CHIMERA") || iParam0 == joaat("SHOTARO")) || iParam0 == joaat("BLAZER4"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("DEFILER") || iParam0 == joaat("HAKUCHOU2"))
	{
		return "SHITZU";
	}
	if (((((iParam0 == joaat("NIGHTBLADE") || iParam0 == joaat("ZOMBIEA")) || iParam0 == joaat("ZOMBIEB")) || iParam0 == joaat("DAEMON2")) || iParam0 == joaat("RATBIKE")) || iParam0 == joaat("WOLFSBANE"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("YOUGA2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("ESSKEY") || iParam0 == joaat("VORTEX")) || iParam0 == joaat("FAGGIO3")) || iParam0 == joaat("FAGGIO"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("RAPTOR"))
	{
		return "BF";
	}
	if (iParam0 == joaat("MANCHEZ"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("BLAZER5"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("COMET3"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("DIABLOUS") || iParam0 == joaat("DIABLOUS2"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((iParam0 == joaat("FCR") || iParam0 == joaat("FCR2")) || iParam0 == joaat("TEMPESTA"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("NERO") || iParam0 == joaat("NERO2"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("PENETRATOR"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("RUINER2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("TECHNICAL2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("PHANTOM2"))
	{
		return "JOBUILT";
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("WASTELANDER"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("ITALIGTB") || iParam0 == joaat("ITALIGTB2"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("DUNE5") || iParam0 == joaat("DUNE4"))
	{
		return "BF";
	}
	if (iParam0 == joaat("ELEGY") || iParam0 == joaat("ELEGY2"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("SPECTER") || iParam0 == joaat("SPECTER2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("INFERNUS2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("RUSTON"))
	{
		return "HIJAK";
	}
	if (iParam0 == joaat("TURISMO2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("DUKES2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("ARDENT") || iParam0 == joaat("XA21"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("CHEETAH2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("INSURGENT3") || iParam0 == joaat("NIGHTSHARK")) || iParam0 == joaat("APC"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("TECHNICAL3"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("HALFTRACK") || iParam0 == joaat("BISON3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("TORERO") || iParam0 == joaat("OPPRESSOR"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("DUNE3"))
	{
		return "BF";
	}
	if (iParam0 == joaat("TAMPA3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("VAGNER") || iParam0 == joaat("RAPIDGT3"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("CYCLONE"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("RETINUE") || iParam0 == joaat("HUSTLER")) || iParam0 == joaat("RIATA"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("VISIONE") || iParam0 == joaat("VIGILANTE"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("Z190"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("AVENGER") || iParam0 == joaat("THRUSTER"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("DELUXO"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("STROMBERG") || iParam0 == joaat("PARIAH"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("HERMES"))
	{
		return "ALBANY";
	}
	if ((iParam0 == joaat("SENTINEL3") || iParam0 == joaat("SC1")) || iParam0 == joaat("REVOLTER"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("SAVESTRA"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("YOSEMITE"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("RAIDEN"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("NEON") || iParam0 == joaat("COMET4")) || iParam0 == joaat("COMET5"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("STREITER"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("KAMACHO"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("GT500"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("VISERIS"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("BARRAGE"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("AUTARCH") || iParam0 == joaat("TYRANT")) || iParam0 == joaat("ENTITY2"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("ISSI3"))
	{
		return "WEENY";
	}
	if ((((iParam0 == joaat("GB200") || iParam0 == joaat("ELLIE")) || iParam0 == joaat("FLASHGT")) || iParam0 == joaat("CARACARA")) || iParam0 == joaat("DOMINATOR3"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("FAGALOA"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("MICHELLI"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("HOTRING"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("TEZERACT"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("JESTER3"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("TAIPAN"))
	{
		return "CHEVAL";
	}
	if (iParam0 == joaat("CHEBUREK"))
	{
		return "RUNE";
	}
	if (iParam0 == joaat("SWINGER"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("FREECRAWLER"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("MULE4"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("POUNDER2"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("SPEEDO4"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("PATRIOT2"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("OPPRESSOR2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("STAFFORD"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("MENACER"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("SCRAMJET"))
	{
		return "DECLASSE";
	}
	if ((iParam0 == joaat("MONSTER3") || iParam0 == joaat("MONSTER4")) || iParam0 == joaat("MONSTER5"))
	{
		return "BRAVADO";
	}
	if ((iParam0 == joaat("SCARAB") || iParam0 == joaat("SCARAB2")) || iParam0 == joaat("SCARAB3"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("ISSI4") || iParam0 == joaat("ISSI5")) || iParam0 == joaat("ISSI6"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("TOROS"))
	{
		return "PEGASSI";
	}
	if ((((((((((iParam0 == joaat("CLIQUE") || iParam0 == joaat("IMPERATOR")) || iParam0 == joaat("IMPERATOR2")) || iParam0 == joaat("IMPERATOR3")) || iParam0 == joaat("DOMINATOR4")) || iParam0 == joaat("DOMINATOR5")) || iParam0 == joaat("DOMINATOR6")) || iParam0 == joaat("SLAMVAN4")) || iParam0 == joaat("SLAMVAN5")) || iParam0 == joaat("SLAMVAN6")) || iParam0 == joaat("SLAMVAN2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("DEVESTE"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((((((((iParam0 == joaat("IMPALER") || iParam0 == joaat("IMPALER2")) || iParam0 == joaat("IMPALER3")) || iParam0 == joaat("IMPALER4")) || iParam0 == joaat("VAMOS")) || iParam0 == joaat("TULIP")) || iParam0 == joaat("BRUTUS")) || iParam0 == joaat("BRUTUS2")) || iParam0 == joaat("BRUTUS3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("DEVIANT"))
	{
		return "SCHYSTER";
	}
	if (iParam0 == joaat("SCHLAGEN"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("ITALIGTO"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("CERBERUS") || iParam0 == joaat("CERBERUS2")) || iParam0 == joaat("CERBERUS3"))
	{
		return "MTL";
	}
	if ((iParam0 == joaat("DEATHBIKE") || iParam0 == joaat("DEATHBIKE2")) || iParam0 == joaat("DEATHBIKE3"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if ((iParam0 == joaat("BRUISER") || iParam0 == joaat("BRUISER2")) || iParam0 == joaat("BRUISER3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if ((iParam0 == joaat("ZR380") || iParam0 == joaat("ZR3802")) || iParam0 == joaat("ZR3803"))
	{
		return "ANNIS";
	}
	if (iParam0 == -1349095620 || iParam0 == -1804415708)
	{
		return "VAPID";
	}
	if (iParam0 == 686471183)
	{
		return "OBEY";
	}
	if (iParam0 == 310284501 || iParam0 == 1854776567)
	{
		return "WEENY";
	}
	if (iParam0 == 722226637 || iParam0 == 1934384720)
	{
		return "BRAVADO";
	}
	if (iParam0 == -362150785 || iParam0 == -324618589)
	{
		return "ANNIS";
	}
	if (iParam0 == -664141241)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("LOCUST") || iParam0 == -208911803)
	{
		return "OCELOT";
	}
	if (iParam0 == -882629065)
	{
		return "VULCAR";
	}
	if (iParam0 == -1829436850)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == -447711397 || iParam0 == 1416466158)
	{
		return "ENUS";
	}
	if (iParam0 == 1044193113)
	{
		return "TRUFFADE";
	}
	if (iParam0 == 1862507111)
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == 1323778901)
	{
		return "PROGEN";
	}
	if (iParam0 == -1620126302)
	{
		return "VYSSER";
	}
	if (iParam0 == 916547552)
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("BURRITO") || iParam0 == joaat("BURRITO2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == 340154634)
	{
		return "PROGEN";
	}
	if (iParam0 == -1756021720)
	{
		return "KARIN";
	}
	if (iParam0 == -1132721664)
	{
		return "OVERFLOD";
	}
	if (iParam0 == 409049982)
	{
		return "DINKA";
	}
	if (iParam0 == -834353991)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == 83136452)
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == 987469656)
	{
		return "DINKA";
	}
	if (iParam0 == 872704284)
	{
		return "KARIN";
	}
	if (iParam0 == 1456336509)
	{
		return "ALBANY";
	}
	if (iParam0 == 1284356689)
	{
		return "RUNE";
	}
	if (!bParam1)
	{
		if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "GALLIVAN"))
		{
			return "GALIVANTER";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "BENEFAC"))
		{
			return "BENEFACTOR";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "UBERMACH"))
		{
			return "UBERMACHT";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "DEWBAUCH"))
		{
			return "DEWBAUCHEE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "JACKSHP"))
		{
			return "JACKSHEEPE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "GROTTI"))
		{
			return "Grotti_2";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "INVERTO"))
		{
			return "Invetero";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "LAMPADA"))
		{
			return "LAMPADATI";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "DUNDREAR"))
		{
			return "DUNDREARY";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "ZIRCONIU"))
		{
			return "ZIRCONIUM";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "WESTERN"))
		{
			return "WESTERNMOTORCYCLE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "PRINCIPL"))
		{
			return "PRINCIPE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "EMPEROR"))
		{
			return "EMPORER";
		}
		else
		{
			return VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0);
		}
	}
	else
	{
		return VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0);
	}
	return "";
}

char* func_174(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("FROGGER"):
		case joaat("FROGGER2"):
			return "MAIBATSU";
		case joaat("MAVERICK"):
		case joaat("POLMAV"):
		case joaat("LUXOR"):
		case joaat("SHAMAL"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		case joaat("CARGOBOB"):
		case joaat("ANNIHILATOR"):
		case joaat("CUBAN800"):
		case joaat("DUSTER"):
		case joaat("STUNT"):
			return "WESTERN";
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
			return "NAGASAKI";
		case joaat("MAMMATUS"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("LAZER"):
			return "JOBUILT";
	}
	if (iParam0 == joaat("VESTRA"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (((((iParam0 == joaat("MILJET") || iParam0 == joaat("SWIFT")) || iParam0 == joaat("SWIFT2")) || iParam0 == joaat("LUXOR2")) || iParam0 == joaat("SUPERVOLITO")) || iParam0 == joaat("SUPERVOLITO2"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (iParam0 == joaat("BESRA"))
	{
		return "WESTERN";
	}
	if (iParam0 == joaat("HYDRA") || iParam0 == joaat("THRUSTER"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("VOLATUS") || iParam0 == joaat("NIMBUS"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	return "";
}

char* func_175(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("SQUALO"):
		case joaat("TROPIC"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		case joaat("JETMAX"):
		case joaat("SUNTRAP"):
			return "OCELOT";
		case joaat("DINGHY"):
			if (!bParam1)
			{
				return "OCELOT";
			}
			break;
		case joaat("SEASHARK2"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		case joaat("SEASHARK3"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		case joaat("SEASHARK"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		case joaat("TORO"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
	}
	if (iParam0 == joaat("SPEEDER") || iParam0 == joaat("SPEEDER2"))
	{
		if (bParam1)
		{
			return "PEGASSI";
		}
		else
		{
			return "PEGASSI";
		}
	}
	return "";
}

int func_176()
{
	switch (Local_268.f_14)
	{
		case 11:
			switch (Local_268.f_47)
			{
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 18:
			return 1;
	}
	return 0;
}

int func_177()
{
	switch (Local_268.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 4:
		case 11:
		case 18:
			return 1;
	}
	return 0;
}

int func_178()
{
	switch (Local_268.f_14)
	{
		case 1:
			return 2500;
		case 5:
			return 5000;
		case 9:
			return 7500;
		case 13:
			return 10000;
		case 17:
			return 15000;
		case 2:
			return 20000;
		case 6:
			return 30000;
		case 14:
			return 40000;
		case 19:
			return 50000;
		case 3:
			return 10000;
		case 7:
			return 15000;
		case 10:
			return 20000;
		case 15:
			return 25000;
		case 11:
			switch (Local_268.f_47)
			{
				case 2:
				case 3:
				case 4:
					return Local_268.f_421;
			}
			break;
	}
	return 0;
}

char* func_179()
{
	switch (Local_268.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_CLO";
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
			return "CAS_LW_RP";
		case 2:
		case 6:
		case 14:
		case 19:
			return "CAS_LW_CASH";
		case 4:
			return "CAS_LW_DISC";
		case 3:
		case 7:
		case 10:
		case 15:
			return "CAS_LW_CHIP";
		case 11:
			return "CAS_LW_MYST";
		case 18:
			return "CAS_LW_VEHI";
	}
	return "";
}

int func_180()
{
	switch (Local_268.f_14)
	{
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
		case 2:
		case 6:
		case 14:
		case 19:
		case 3:
		case 7:
		case 10:
		case 15:
			return 1;
		case 11:
			switch (Local_268.f_47)
			{
				case 2:
				case 3:
				case 4:
					return 1;
			}
			break;
	}
	return 0;
}

int func_181()
{
	switch (func_748(Local_268.f_14))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return func_741(&(Local_268.f_405), &Local_268, func_748(Local_268.f_14), 0);
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_733(&(Local_268.f_421), &(Local_268.f_405), func_748(Local_268.f_14), 0);
		case 9:
		case 10:
		case 11:
		case 12:
			return func_720(&(Local_268.f_421), &(Local_268.f_405), func_748(Local_268.f_14), 0);
		case 13:
		case 14:
		case 15:
		case 16:
			return func_690(&(Local_268.f_421), &(Local_268.f_405), &(Local_268.f_443), func_748(Local_268.f_14), 0);
		case 17:
			if (!MISC::IS_BIT_SET(Local_268, 19))
			{
				Local_268.f_47 = func_688();
				MISC::SET_BIT(&Local_268, 19);
			}
			else
			{
				return func_539(&(Local_268.f_421), &(Local_268.f_405), &(Local_268.f_73), &(Local_268.f_74), Local_268.f_47, &Local_268, Local_712, &(Local_268.f_443));
			}
			break;
		case 18:
			return func_191(&(Local_268.f_405), &(Local_268.f_73), &(Local_268.f_74), func_748(Local_268.f_14), 0);
		case 19:
			return func_182(&(Local_268.f_405), func_748(Local_268.f_14));
	}
	return 0;
}

int func_182(char* sParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		iVar0 = func_189();
		func_184(func_188(iVar0));
		StringCopy(sParam0, func_183(iVar0), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ELT_NAME";
		case 1:
			return "BOATS_NAMEb";
		case 2:
			return "LGM_NAME";
		case 3:
			return "SSS_NAME";
		case 4:
			return "CANDC_NAMEb";
		case 5:
			return "PAM_NAME";
		default:
			break;
	}
	return "LRMVOUCHER_INVALID";
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];

	if (iParam0 == 8)
	{
		func_187(129, 1, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_187(135, 1, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_187(136, 1, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_187(137, 1, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		iVar0 = UNK_0x5A002C4821A13338();
		func_64(8270, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		iVar1 = UNK_0x5A002C4821A13338();
		func_64(8271, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		iVar2 = UNK_0x5A002C4821A13338();
		func_64(8272, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		iVar3 = UNK_0x5A002C4821A13338();
		func_64(8273, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		iVar4 = UNK_0x5A002C4821A13338();
		func_64(8274, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		iVar5 = UNK_0x5A002C4821A13338();
		func_64(8275, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!MISC::IS_BIT_SET(Global_111858.f_20560.f_471, iParam0))
		{
			bVar6 = true;
			MISC::SET_BIT(&(Global_111858.f_20560.f_471), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_111858.f_20560.f_471, iParam0) || !MISC::IS_BIT_SET(Global_2097152[func_186() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar6 = true;
		MISC::SET_BIT(&(Global_111858.f_20560.f_471), iParam0);
		MISC::SET_BIT(&(Global_2097152[func_186() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_STR");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_185(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar7, &cVar7, true, 0, "", 0);
	}
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_186()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

bool func_187(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar25, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 13;
		case 2:
			return 14;
		case 3:
			return 15;
		case 4:
			return 16;
		case 5:
			return 17;
		default:
			break;
	}
	return 14;
}

int func_189()
{
	int iVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;

	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		iVar0[iVar8] = iVar8;
		iVar7 = (iVar7 + func_190(iVar0[iVar8]));
		iVar8++;
	}
	iVar9 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar7);
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar9 <= func_190(iVar0[iVar8]))
		{
			return iVar0[iVar8];
		}
		else
		{
			iVar9 = (iVar9 - func_190(iVar0[iVar8]));
		}
		iVar8++;
	}
	return -1;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26146;
		case 1:
			return Global_262145.f_26146;
		case 2:
			return Global_262145.f_26146;
		case 3:
			return Global_262145.f_26146;
		case 4:
			return Global_262145.f_26146;
		case 5:
			return Global_262145.f_26146;
		default:
			break;
	}
	return 0;
}

int func_191(char* sParam0, int* iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		if (!func_538() && ENTITY::DOES_ENTITY_EXIST(Global_1696944))
		{
			*iParam1 = Global_1696944;
			if (func_270(*iParam1, uParam2, &(uParam2->f_320), &(uParam2->f_321), &(uParam2->f_322), &(uParam2->f_323), 1, 0, 1, 1) || func_72(&(uParam2->f_329), 60000, 0))
			{
				if (uParam2->f_323 != 3 && !func_72(&(uParam2->f_329), 60000, 0))
				{
					StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
					Global_1696946 = UNK_0x5A002C4821A13338();
					uParam2->f_328 = ENTITY::GET_ENTITY_MODEL(*iParam1);
					if (func_113())
					{
						Global_1696945 = 1;
					}
					else
					{
						func_140(-30941642, ENTITY::GET_ENTITY_MODEL(*iParam1));
						func_269();
					}
					func_245(158, "LUCKY_POD_TXT", 1, 0, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					if (func_72(&(uParam2->f_329), 60000, 0))
					{
					}
					StringCopy(sParam0, "INVALID", 64);
				}
				if (Global_262145.f_28161)
				{
					if (uParam2->f_328 == joaat("CLIQUE"))
					{
						iVar0 = func_24(-364482041);
						MISC::SET_BIT(&iVar0, 6);
						func_140(-364482041, iVar0);
					}
				}
				MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_847), 0);
				func_243();
				func_71(&(uParam2->f_329));
				return 1;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1696944))
			{
			}
			StringCopy(sParam0, "GIVE_RP_FOR_VEH", 64);
			func_192(0, PLAYER::PLAYER_PED_ID(), "200000", -1827353931, 1223799452, 20000, 1, -1, 0, 0, 0);
			return 1;
		}
	}
	else if (iParam3 == -1)
	{
		if (func_270(*iParam1, uParam2, &(uParam2->f_320), &(uParam2->f_321), &(uParam2->f_322), &(uParam2->f_323), 1, 0, 1, 0) || func_72(&(uParam2->f_329), 60000, 0))
		{
			if (uParam2->f_323 != 3 && !func_72(&(uParam2->f_329), 60000, 0))
			{
				StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
			}
			else
			{
				if (func_72(&(uParam2->f_329), 60000, 0))
				{
				}
				StringCopy(sParam0, "INVALID", 64);
			}
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_847), 0);
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_847), 1);
			}
			func_71(&(uParam2->f_329));
			return 1;
		}
	}
	return 0;
}

var func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	var uVar0;
	int iVar1;

	uVar0 = func_202(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_198(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), uVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_193(iParam1, uVar0, iParam8, iParam10);
	}
	return uVar0;
}

void func_193(int iParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_196(iParam0, 1) };
	if (iParam0 == func_195(PLAYER::PLAYER_PED_ID()))
	{
		func_194(1);
	}
	func_198(vVar0, uParam1, 0, iParam2, iParam3);
}

void func_194(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_195(int iParam0)
{
	return iParam0;
}

Vector3 func_196(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_197(PLAYER::PLAYER_PED_ID()) && UNK_0xF7B3A1430308F92B(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (UNK_0xF7B3A1430308F92B(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_197(int iParam0)
{
	return iParam0;
}

void func_198(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { vParam0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_201(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam3;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam4;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_200();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_199();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_199()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_200()
{
	var uVar0;

	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_201(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_202(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	uVar0 = func_203(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_203(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_242(PLAYER::PLAYER_ID()) || func_241(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_238() || func_235(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_234(sParam2))
	{
	}
	if (func_233())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_231(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_230(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_227(0, &iVar1);
					break;
				case 3:
					func_227(1, &iVar1);
					break;
				case 1:
					func_223(&iVar1);
					break;
			}
		}
		if (iVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_221(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_212((func_220(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_221(1165, iVar1, -1);
				}
				func_206(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_204((func_205(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_204((func_205(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_204(int iParam0)
{
	if (func_233())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_140(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

int func_205(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_24(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_24(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_206(int iParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_211(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_209(func_210(&Var0));
			if (iVar13 == 0)
			{
				func_208(&Global_1388052, iParam0);
				func_207(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_208(&Global_1388053, iParam0);
				func_207(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_208(&Global_1388054, iParam0);
				func_207(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_208(&Global_1388055, iParam0);
				func_207(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_208(&Global_1388056, iParam0);
				func_207(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		default:
			break;
	}
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_209(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_210(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

struct<13> func_211(int iParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	if (func_233())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_22(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_22(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_219(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_217(iParam0, 1);
		}
		func_216(639, iParam0, -1, 1);
		func_64(640, func_217(iParam0, 1), -1, 1, 0);
		Global_1388197[func_22(-1)] = iParam0;
		func_213(-1109644434, 7, 0);
	}
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_215(iParam1, bParam2))
	{
		iVar0 = func_214();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_214()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_215(int iParam0, bool bParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((bParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_216(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2551832[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_22(iParam2)] = iParam1;
			break;
		case 788:
			Global_1388131[func_22(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388137[func_22(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388143[func_22(iParam2)] = iParam1;
			break;
		case 8727:
			Global_1388149[func_22(iParam2)] = iParam1;
			break;
		case 777:
			Global_1388095[func_22(iParam2)] = iParam1;
			break;
		case 778:
			Global_1388101[func_22(iParam2)] = iParam1;
			break;
		case 779:
			Global_1388107[func_22(iParam2)] = iParam1;
			break;
		case 780:
			Global_1388113[func_22(iParam2)] = iParam1;
			break;
		case 8729:
			Global_1388119[func_22(iParam2)] = iParam1;
			break;
		case 767:
			Global_1388065[func_22(iParam2)] = iParam1;
			break;
		case 768:
			Global_1388071[func_22(iParam2)] = iParam1;
			break;
		case 769:
			Global_1388077[func_22(iParam2)] = iParam1;
			break;
		case 770:
			Global_1388083[func_22(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388089[func_22(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388155[func_22(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388161[func_22(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388167[func_22(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388173[func_22(iParam2)] = iParam1;
			break;
		case 8733:
			Global_1388179[func_22(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388185[func_22(iParam2)] = iParam1;
			break;
		case 7234:
			Global_1388191[func_22(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388197[func_22(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388203[func_22(iParam2)] = iParam1;
			break;
		case 1877:
			Global_2590417[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 2268:
			Global_2590417[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 2930:
			Global_2590417[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3059:
			Global_2590417[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 10138:
			Global_2590566[func_22(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388209[func_22(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388215[func_22(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388221[func_22(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388227[func_22(iParam2)] = iParam1;
			break;
		case 9534:
			Global_1388233[func_22(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388239[func_22(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2590490[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2590490[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2590490[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2590490[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2590490[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2590569[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2590569[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2590569[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2590569[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2590569[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2590585[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2590585[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2590585[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2590585[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3646:
			Global_2590585[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3222:
			Global_2590490[5 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3228:
			Global_2590417[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2590601[func_22(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2590610[func_22(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2590604[func_22(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2590613[func_22(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2590607[func_22(iParam2)] = iParam1;
			break;
		case 3669:
			Global_2590616[func_22(iParam2)] = iParam1;
			break;
		case 3690:
			Global_2590619[func_22(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2590490[6 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3231:
			Global_2590417[5 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3235:
			Global_2590490[7 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 3233:
			Global_2590417[6 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2590490[8 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4021:
			Global_2590417[7 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2590490[9 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4024:
			Global_2590417[8 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2590490[10 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4027:
			Global_2590417[9 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2590490[11 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 4030:
			Global_2590417[10 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2590490[12 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6111:
			Global_2590417[11 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2590490[13 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6169:
			Global_2590417[12 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2590490[14 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6547:
			Global_2590417[13 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2590490[15 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6560:
			Global_2590417[14 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2590490[16 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6563:
			Global_2590417[15 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2590490[17 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 6566:
			Global_2590417[16 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 7284:
			Global_2590417[17 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 7286:
			Global_2590417[18 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 7288:
			Global_2590417[19 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 8011:
			Global_2590417[20 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2590622[func_22(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2590625[func_22(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2590628[func_22(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2590631[func_22(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2590634[func_22(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2590637[func_22(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2590640[func_22(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2590643[func_22(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2590646[func_22(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2590649[func_22(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2590652[func_22(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2590655[func_22(iParam2)] = iParam1;
			break;
		case 8295:
			Global_2590658[func_22(iParam2)] = iParam1;
			break;
		case 8901:
			Global_2590661[func_22(iParam2)] = iParam1;
			break;
		case 8535:
			Global_2590417[21 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2590490[23 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 8976:
			Global_2590417[22 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 8981:
			Global_2590490[24 /*3*/][func_22(iParam2)] = iParam1;
			break;
		case 8979:
			Global_2590417[23 /*3*/][func_22(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

int func_217(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_218(iParam0, 0);
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2440049.f_1, iParam0);
	}
	return 1;
}

int func_220(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_22(-1)];
			}
			else if (func_219(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_22(-1)];
	}
	return 0;
}

void func_221(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_21(iParam0, func_22(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_222(iParam0))
	{
		func_64(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_216(iParam0, iVar0, iParam2, 1);
	}
}

int func_222(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
		}
	}
	return 0;
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_226(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_225(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_224(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_224(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_224(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_225(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515173 = { func_211(iParam0) };
		Global_2515186 = { func_211(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515173))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515186))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515103, 35, &Global_2515173);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 0);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 1);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 2);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 4);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 5);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 6);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 8);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 9);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 10);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 12);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 13);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 14);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 15);
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_227(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_225(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_228(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_225(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_224(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_224(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_228(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_229(iParam0), func_229(iParam1));
	return 0f;
}

Vector3 func_229(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_230(int iParam0)
{
	int iVar0;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_224(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_231(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_220(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_220(PLAYER::PLAYER_ID());
		}
	}
	if (func_232(8000, 0, 0) > 0)
	{
		if (func_232(8000, 0, 0) < (iParam0 + func_220(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_232(8000, 0, 0) - func_220(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_232(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_233()
{
	return 1;
}

int func_234(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	return func_236(func_237(iParam0));
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_237(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_238()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_240();
	}
	return func_239(Global_4456448.f_82708);
}

int func_239(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_240()
{
	return Global_2451787.f_18;
}

bool func_241(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_242(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_243()
{
	vector3 vVar0;
	int iVar3;

	vVar0.x = 971897466;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = 1;
	iVar3 = func_244(1, 1);
	if (iVar3 != -1)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_244(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || bParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_245(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	MISC::CLEAR_BIT(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_247(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_246(iParam0) };
			Global_8238 = iParam0;
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_246(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_247(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_262();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
	}
	if (func_261() == 0)
	{
		func_259();
		return 0;
	}
	func_258(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = iParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = iParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = iParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = iParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_257(0);
		func_257(2);
		func_257(1);
	}
	else
	{
		func_262();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_257(0);
					Global_8257 = 0;
					break;
				case 1:
					func_257(1);
					Global_8257 = 1;
					break;
				case 2:
					func_257(2);
					Global_8257 = 2;
					break;
				case 3:
					func_257(3);
					Global_8257 = 3;
					break;
				default:
					Global_8257 = 4;
					break;
			}
		}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_262();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_256())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_255(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_251(1);
			func_255(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_248(iParam0, sParam1);
	return 1;
}

void func_248(int iParam0, char* sParam1)
{
	if (!func_249())
	{
		return;
	}
	UNK_0x1A2DCF21E22955B0(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_249()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return 0;
	}
	if (func_250(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_250(int iParam0)
{
	return func_33(iParam0, 20);
}

void func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_254(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										case 1:
											iVar6 = Global_42813;
											break;
										case 2:
											iVar6 = Global_42814;
											break;
										default:
											break;
									}
									func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7557);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7552, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_252(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_252(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_253(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_253(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_253(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_253(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_253(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_253(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_254(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_255(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_256()
{
	return Global_1312896;
}

void func_257(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = iVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_260(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_260(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_261()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_260(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

void func_262()
{
	if (func_254(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_263();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_263()
{
	func_264();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_264()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_267(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_266(PLAYER::PLAYER_PED_ID());
			if (func_265(iVar0) && (!func_254(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_265(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_265(int iParam0)
{
	return iParam0 < 3;
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_267(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_267(int iParam0)
{
	if (func_265(iParam0))
	{
		return func_268(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_268(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_269()
{
	func_64(8351, (Global_1696946 + 604800), -1, 1, 0);
	Global_2462182 = 1;
}

int func_270(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_537(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				func_529(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_528(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_520(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!MISC::IS_BIT_SET(uParam1->f_314, 7))
					{
						if (func_404(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !func_403())
						{
							if (PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::CLEAR_BIT(&(uParam1->f_314), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2, 202) || func_402())
							{
								MISC::CLEAR_BIT(&(uParam1->f_314), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_314), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_401(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (func_400())
				{
					iVar5 = 0;
					while (iVar5 < 307)
					{
						if (func_396(iVar5))
						{
							bVar2 = true;
							iVar5 = 308;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_402())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (MISC::IS_BIT_SET(Global_1323678[0 /*141*/].f_102, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_402())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		case 1:
			if (func_129(iParam0))
			{
				if (func_113())
				{
					if (func_349(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_345(*uParam4, *iParam3, -1);
							}
							if (!func_537(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								func_340(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
							}
							func_301(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1);
							func_271(iParam0, *iParam3);
							func_213(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_345(*uParam4, *iParam3, -1);
					}
					if (!func_537(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						func_340(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
					}
					func_301(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1);
					func_271(iParam0, *iParam3);
					func_213(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_300(iParam0);
	func_272(iParam1);
}

void func_272(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 307)
	{
		MISC::SET_BIT(&(Global_1323678[iParam0 /*141*/].f_102), 2);
		func_298(101, 1, -1, 1);
		func_279(iParam0, &(Global_1323678[iParam0 /*141*/]), 1, -1, 0, 0);
		if (!Global_1315821)
		{
			func_273(91, 3, 1);
			Global_1315821 = 1;
		}
		else
		{
			func_273(91, 3, 0);
		}
	}
}

void func_273(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8237 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		func_262();
		if (iParam1 == 4)
		{
			func_278(iParam0, 0, 1);
			func_278(iParam0, 1, 1);
			func_278(iParam0, 2, 1);
			func_277(iParam0, 0, 1);
			func_277(iParam0, 1, 1);
			func_277(iParam0, 2, 1);
		}
		else
		{
			if (func_276(iParam0, iParam1) == 1 && func_275(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_278(iParam0, iVar0, 1);
			func_277(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76833)
			{
				if (iParam1 != 4)
				{
					if (Global_19681 != iParam1)
					{
						Global_8210[iParam1 /*4*/] = { func_246(iParam0) };
						Global_8227[iParam1] = 1;
						Global_8232[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19681)
					{
					}
					else
					{
						Global_8161[1 /*6*/] = { func_246(iParam0) };
						Global_8161[1 /*6*/].f_5 = iParam1;
						func_274();
					}
				}
				else
				{
					Global_8161[1 /*6*/] = { func_246(iParam0) };
					Global_8161[1 /*6*/].f_5 = iParam1;
					func_274();
				}
			}
			else
			{
				Global_8161[1 /*6*/] = { func_246(iParam0) };
				Global_8161[1 /*6*/].f_5 = iParam1;
				func_274();
			}
		}
	}
}

void func_274()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;

	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1848[Global_8237 /*29*/].f_7)), 64);
	if (Global_8256 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8161[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8161[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7551, 0);
}

int func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

int func_276(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

void func_277(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_279(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_186() /*10931*/].f_6175.f_1274 = UNK_0x5A002C4821A13338();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_297(1411, iParam0);
	func_66(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_297(1412, iParam0);
	func_66(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_296(iParam0))
	{
	}
	else
	{
		iVar1 = func_297(1413, iParam0);
		func_66(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_297(1414, iParam0) + iVar0);
				func_66(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_295(iParam0) + (iVar0 - 25));
				func_66(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_297(1439, iParam0) + iVar0);
			func_66(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_297(1441, iParam0);
	func_66(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_297(1442, iParam0);
	func_66(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_297(1443, iParam0);
	func_66(iVar1, uParam1->f_64, iParam3, 1);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(1444, iParam0);
		func_66(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_297(1445, iParam0);
	func_66(iVar1, uParam1->f_67, iParam3, 1);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(1446, iParam0);
		func_66(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_297(1447, iParam0);
	func_66(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_297(1448, iParam0);
	func_66(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_297(1449, iParam0);
	func_66(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_297(1450, iParam0);
	func_66(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_297(1451, iParam0);
	func_66(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_297(1452, iParam0);
	func_66(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_297(1453, iParam0);
	func_66(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_297(1454, iParam0);
	func_66(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_297(1455, iParam0);
	func_66(iVar1, uParam1->f_8, iParam3, 1);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(3880, iParam0);
		func_66(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_297(3881, iParam0);
		func_66(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_297(3882, iParam0);
		func_66(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_294(iParam0);
		func_66(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_293(iParam0);
		func_66(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_282(iParam0);
		func_66(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_186() /*10931*/].f_6175.f_1274;
	if (bParam5)
	{
		iVar2 = UNK_0x5A002C4821A13338();
	}
	func_64(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_64(func_281(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_296(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_280(func_281(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_280(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = Global_2551832[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

int func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				case 1:
					return 1636;
				case 2:
					return 1643;
				case 3:
					return 1650;
				case 4:
					return 1657;
				case 5:
					return 1664;
				case 6:
					return 1671;
				case 7:
					return 1678;
				case 8:
					return 1685;
				case 9:
					return 1692;
				case 10:
					return 1699;
				case 11:
					return 1705;
				case 12:
					return 1711;
				case 13:
					return 1717;
				case 14:
					return 1796;
				case 15:
					return 1803;
				case 16:
					return 1810;
				case 17:
					return 1817;
				case 18:
					return 1824;
				case 19:
					return 1831;
				case 20:
					return 1838;
				case 21:
					return 1845;
				case 22:
					return 1852;
				case 23:
					return 1859;
				case 24:
					return 1865;
				case 25:
					return 1871;
				case 26:
					return 2166;
				case 27:
					return 2173;
				case 28:
					return 2180;
				case 29:
					return 2187;
				case 30:
					return 2194;
				case 31:
					return 2201;
				case 32:
					return 2208;
				case 33:
					return 2215;
				case 34:
					return 2222;
				case 35:
					return 2229;
				case 36:
					return 2236;
				case 37:
					return 2242;
				case 38:
					return 2248;
				case 39:
					return 2829;
				case 40:
					return 2836;
				case 41:
					return 2843;
				case 42:
					return 2850;
				case 43:
					return 2857;
				case 44:
					return 2864;
				case 45:
					return 2871;
				case 46:
					return 2878;
				case 47:
					return 2885;
				case 48:
					return 2892;
				case 49:
					return 2899;
				case 50:
					return 2905;
				case 51:
					return 2911;
				case 52:
					return 2953;
				case 53:
					return 2960;
				case 54:
					return 2967;
				case 55:
					return 2974;
				case 56:
					return 2981;
				case 57:
					return 2988;
				case 58:
					return 2995;
				case 59:
					return 3002;
				case 60:
					return 3009;
				case 61:
					return 3016;
				case 62:
					return 3023;
				case 63:
					return 3029;
				case 64:
					return 3035;
				case 65:
					return 3236;
				case 66:
					return 3244;
				case 67:
					return 3252;
				case 68:
					return 3260;
				case 69:
					return 3268;
				case 70:
					return 3276;
				case 71:
					return 3284;
				case 72:
					return 3292;
				case 73:
					return 3300;
				case 74:
					return 3308;
				case 75:
					return 3316;
				case 76:
					return 3324;
				case 77:
					return 3332;
				case 78:
					return 3340;
				case 79:
					return 3348;
				case 80:
					return 3356;
				case 81:
					return 3364;
				case 82:
					return 3372;
				case 83:
					return 3380;
				case 84:
					return 3388;
				case 85:
					return 3396;
				case 86:
					return 3403;
				case 87:
					return 3410;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				case 89:
					return 4040;
				case 90:
					return 4048;
				case 91:
					return 4056;
				case 92:
					return 4064;
				case 93:
					return 4072;
				case 94:
					return 4080;
				case 95:
					return 4088;
				case 96:
					return 4096;
				case 97:
					return 4104;
				case 98:
					return 4112;
				case 99:
					return 4120;
				case 100:
					return 4128;
				case 101:
					return 4136;
				case 102:
					return 4144;
				case 103:
					return 4152;
				case 104:
					return 4160;
				case 105:
					return 4168;
				case 106:
					return 4176;
				case 107:
					return 4184;
				case 108:
					return 4192;
				case 109:
					return 4200;
				case 110:
					return 4208;
				case 111:
					return 4216;
				case 112:
					return 4224;
				case 113:
					return 4232;
				case 114:
					return 4240;
				case 115:
					return 4248;
				case 116:
					return 4256;
				case 117:
					return 4264;
				case 118:
					return 4272;
				case 119:
					return 4280;
				case 120:
					return 4288;
				case 121:
					return 4296;
				case 122:
					return 4304;
				case 123:
					return 4312;
				case 124:
					return 4320;
				case 125:
					return 4328;
				case 126:
					return 4336;
				case 127:
					return 4344;
				case 128:
					return 4352;
				case 129:
					return 4360;
				case 130:
					return 4368;
				case 131:
					return 4376;
				case 132:
					return 4384;
				case 133:
					return 4392;
				case 134:
					return 4400;
				case 135:
					return 4408;
				case 136:
					return 4416;
				case 137:
					return 4424;
				case 138:
					return 4432;
				case 139:
					return 4440;
				case 140:
					return 4448;
				case 141:
					return 4456;
				case 142:
					return 4464;
				case 143:
					return 4472;
				case 144:
					return 4480;
				case 145:
					return 4488;
				case 146:
					return 4496;
				case 147:
					return 4504;
				case 148:
					return 4512;
				case 149:
					return 4520;
				case 150:
					return 4528;
				case 151:
					return 4536;
				case 152:
					return 4544;
				case 153:
					return 4552;
				case 154:
					return 4560;
				case 155:
					return 4568;
				case 156:
					return 4576;
				case 157:
					return 4584;
				case 158:
					return 5477;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				case 160:
					return 5933;
				case 161:
					return 5940;
				case 162:
					return 5947;
				case 163:
					return 5954;
				case 164:
					return 5961;
				case 165:
					return 5968;
				case 166:
					return 5975;
				case 167:
					return 5982;
				case 168:
					return 5989;
				case 169:
					return 5996;
				case 170:
					return 6003;
				case 171:
					return 6010;
				case 172:
					return 6017;
				case 173:
					return 6024;
				case 174:
					return 6031;
				case 175:
					return 6038;
				case 176:
					return 6045;
				case 177:
					return 6052;
				case 178:
					return 6059;
				case 179:
					return 6066;
				case 180:
					return 6073;
				case 181:
					return 6080;
				case 182:
					return 6087;
				case 183:
					return 6094;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				case 185:
					return 6178;
				case 186:
					return 6185;
				case 187:
					return 6192;
				case 188:
					return 6199;
				case 189:
					return 6206;
				case 190:
					return 6213;
				case 191:
					return 6220;
				case 192:
					return 6227;
				case 193:
					return 6234;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				case 195:
					return 6575;
				case 196:
					return 6582;
				case 197:
					return 6589;
				case 198:
					return 6596;
				case 199:
					return 6603;
				case 200:
					return 6610;
				case 201:
					return 6617;
				case 202:
					return 6624;
				case 203:
					return 6631;
				case 204:
					return 6638;
				case 205:
					return 6645;
				case 206:
					return 6652;
				case 207:
					return 6659;
				case 208:
					return 6666;
				case 209:
					return 6673;
				case 210:
					return 6680;
				case 211:
					return 6687;
				case 212:
					return 6694;
				case 213:
					return 6701;
				case 214:
					return 6708;
				case 215:
					return 6715;
				case 216:
					return 6722;
				case 217:
					return 6729;
				case 218:
					return 6736;
				case 219:
					return 6743;
				case 220:
					return 6750;
				case 221:
					return 6757;
				case 222:
					return 6764;
				case 223:
					return 6771;
				case 224:
					return 6778;
				case 225:
					return 6785;
				case 226:
					return 6792;
				case 227:
					return 6799;
				case 228:
					return 6806;
				case 229:
					return 6813;
				case 230:
					return 6820;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				case 232:
					return 7297;
				case 233:
					return 7304;
				case 234:
					return 7311;
				case 235:
					return 7318;
				case 236:
					return 7325;
				case 237:
					return 7332;
				case 238:
					return 7339;
				case 239:
					return 7346;
				case 240:
					return 7353;
				case 241:
					return 7360;
				case 242:
					return 7367;
				case 243:
					return 7374;
				case 244:
					return 7381;
				case 245:
					return 7388;
				case 246:
					return 7395;
				case 247:
					return 7402;
				case 248:
					return 7409;
				case 249:
					return 7416;
				case 250:
					return 7423;
				case 251:
					return 7430;
				case 252:
					return 7437;
				case 253:
					return 7444;
				case 254:
					return 7451;
				case 255:
					return 7458;
				case 256:
					return 7465;
				case 257:
					return 7472;
				case 258:
					return 7479;
				case 259:
					return 7486;
				case 260:
					return 7493;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				case 262:
					return 8020;
				case 263:
					return 8027;
				case 264:
					return 8034;
				case 265:
					return 8041;
				case 266:
					return 8048;
				case 267:
					return 8055;
				case 268:
					return 8062;
				case 269:
					return 8069;
				case 270:
					return 8076;
				case 271:
					return 8537;
				case 272:
					return 8544;
				case 273:
					return 8551;
				case 274:
					return 8558;
				case 275:
					return 8565;
				case 276:
					return 8572;
				case 277:
					return 8579;
				case 278:
					return 8586;
				case 279:
					return 8593;
				case 280:
					return 8600;
				case 281:
					return 8982;
				case 282:
					return 8989;
				case 283:
					return 8996;
				case 284:
					return 9003;
				case 285:
					return 9010;
				case 286:
					return 9017;
				case 287:
					return 9024;
				case 288:
					return 9031;
				case 289:
					return 9038;
				case 290:
					return 9045;
				case 291:
					return 9052;
				case 292:
					return 9058;
				case 293:
					return 9064;
				case 294:
					return 9070;
				case 295:
					return 9077;
				case 296:
					return 9084;
				case 297:
					return 9091;
				case 298:
					return 9098;
				case 299:
					return 9105;
				case 300:
					return 9112;
				case 301:
					return 9119;
				case 302:
					return 9126;
				case 303:
					return 9133;
				case 304:
					return 9140;
				case 305:
					return 9146;
				case 306:
					return 9152;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				case 1:
					return 1637;
				case 2:
					return 1644;
				case 3:
					return 1651;
				case 4:
					return 1658;
				case 5:
					return 1665;
				case 6:
					return 1672;
				case 7:
					return 1679;
				case 8:
					return 1686;
				case 9:
					return 1693;
				case 10:
					return 1700;
				case 11:
					return 1706;
				case 12:
					return 1712;
				case 13:
					return 1718;
				case 14:
					return 1797;
				case 15:
					return 1804;
				case 16:
					return 1811;
				case 17:
					return 1818;
				case 18:
					return 1825;
				case 19:
					return 1832;
				case 20:
					return 1839;
				case 21:
					return 1846;
				case 22:
					return 1853;
				case 23:
					return 1860;
				case 24:
					return 1866;
				case 25:
					return 1872;
				case 26:
					return 2167;
				case 27:
					return 2174;
				case 28:
					return 2181;
				case 29:
					return 2188;
				case 30:
					return 2195;
				case 31:
					return 2202;
				case 32:
					return 2209;
				case 33:
					return 2216;
				case 34:
					return 2223;
				case 35:
					return 2230;
				case 36:
					return 2237;
				case 37:
					return 2243;
				case 38:
					return 2249;
				case 39:
					return 2830;
				case 40:
					return 2837;
				case 41:
					return 2844;
				case 42:
					return 2851;
				case 43:
					return 2858;
				case 44:
					return 2865;
				case 45:
					return 2872;
				case 46:
					return 2879;
				case 47:
					return 2886;
				case 48:
					return 2893;
				case 49:
					return 2900;
				case 50:
					return 2906;
				case 51:
					return 2912;
				case 52:
					return 2954;
				case 53:
					return 2961;
				case 54:
					return 2968;
				case 55:
					return 2975;
				case 56:
					return 2982;
				case 57:
					return 2989;
				case 58:
					return 2996;
				case 59:
					return 3003;
				case 60:
					return 3010;
				case 61:
					return 3017;
				case 62:
					return 3024;
				case 63:
					return 3030;
				case 64:
					return 3036;
				case 65:
					return 3237;
				case 66:
					return 3245;
				case 67:
					return 3253;
				case 68:
					return 3261;
				case 69:
					return 3269;
				case 70:
					return 3277;
				case 71:
					return 3285;
				case 72:
					return 3293;
				case 73:
					return 3301;
				case 74:
					return 3309;
				case 75:
					return 3317;
				case 76:
					return 3325;
				case 77:
					return 3333;
				case 78:
					return 3341;
				case 79:
					return 3349;
				case 80:
					return 3357;
				case 81:
					return 3365;
				case 82:
					return 3373;
				case 83:
					return 3381;
				case 84:
					return 3389;
				case 85:
					return 3397;
				case 86:
					return 3404;
				case 87:
					return 3411;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				case 89:
					return 4041;
				case 90:
					return 4049;
				case 91:
					return 4057;
				case 92:
					return 4065;
				case 93:
					return 4073;
				case 94:
					return 4081;
				case 95:
					return 4089;
				case 96:
					return 4097;
				case 97:
					return 4105;
				case 98:
					return 4113;
				case 99:
					return 4121;
				case 100:
					return 4129;
				case 101:
					return 4137;
				case 102:
					return 4145;
				case 103:
					return 4153;
				case 104:
					return 4161;
				case 105:
					return 4169;
				case 106:
					return 4177;
				case 107:
					return 4185;
				case 108:
					return 4193;
				case 109:
					return 4201;
				case 110:
					return 4209;
				case 111:
					return 4217;
				case 112:
					return 4225;
				case 113:
					return 4233;
				case 114:
					return 4241;
				case 115:
					return 4249;
				case 116:
					return 4257;
				case 117:
					return 4265;
				case 118:
					return 4273;
				case 119:
					return 4281;
				case 120:
					return 4289;
				case 121:
					return 4297;
				case 122:
					return 4305;
				case 123:
					return 4313;
				case 124:
					return 4321;
				case 125:
					return 4329;
				case 126:
					return 4337;
				case 127:
					return 4345;
				case 128:
					return 4353;
				case 129:
					return 4361;
				case 130:
					return 4369;
				case 131:
					return 4377;
				case 132:
					return 4385;
				case 133:
					return 4393;
				case 134:
					return 4401;
				case 135:
					return 4409;
				case 136:
					return 4417;
				case 137:
					return 4425;
				case 138:
					return 4433;
				case 139:
					return 4441;
				case 140:
					return 4449;
				case 141:
					return 4457;
				case 142:
					return 4465;
				case 143:
					return 4473;
				case 144:
					return 4481;
				case 145:
					return 4489;
				case 146:
					return 4497;
				case 147:
					return 4505;
				case 148:
					return 4513;
				case 149:
					return 4521;
				case 150:
					return 4529;
				case 151:
					return 4537;
				case 152:
					return 4545;
				case 153:
					return 4553;
				case 154:
					return 4561;
				case 155:
					return 4569;
				case 156:
					return 4577;
				case 157:
					return 4585;
				case 158:
					return 5478;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				case 160:
					return 5934;
				case 161:
					return 5941;
				case 162:
					return 5948;
				case 163:
					return 5955;
				case 164:
					return 5962;
				case 165:
					return 5969;
				case 166:
					return 5976;
				case 167:
					return 5983;
				case 168:
					return 5990;
				case 169:
					return 5997;
				case 170:
					return 6004;
				case 171:
					return 6011;
				case 172:
					return 6018;
				case 173:
					return 6025;
				case 174:
					return 6032;
				case 175:
					return 6039;
				case 176:
					return 6046;
				case 177:
					return 6053;
				case 178:
					return 6060;
				case 179:
					return 6067;
				case 180:
					return 6074;
				case 181:
					return 6081;
				case 182:
					return 6088;
				case 183:
					return 6095;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				case 185:
					return 6179;
				case 186:
					return 6186;
				case 187:
					return 6193;
				case 188:
					return 6200;
				case 189:
					return 6207;
				case 190:
					return 6214;
				case 191:
					return 6221;
				case 192:
					return 6228;
				case 193:
					return 6235;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				case 195:
					return 6576;
				case 196:
					return 6583;
				case 197:
					return 6590;
				case 198:
					return 6597;
				case 199:
					return 6604;
				case 200:
					return 6611;
				case 201:
					return 6618;
				case 202:
					return 6625;
				case 203:
					return 6632;
				case 204:
					return 6639;
				case 205:
					return 6646;
				case 206:
					return 6653;
				case 207:
					return 6660;
				case 208:
					return 6667;
				case 209:
					return 6674;
				case 210:
					return 6681;
				case 211:
					return 6688;
				case 212:
					return 6695;
				case 213:
					return 6702;
				case 214:
					return 6709;
				case 215:
					return 6716;
				case 216:
					return 6723;
				case 217:
					return 6730;
				case 218:
					return 6737;
				case 219:
					return 6744;
				case 220:
					return 6751;
				case 221:
					return 6758;
				case 222:
					return 6765;
				case 223:
					return 6772;
				case 224:
					return 6779;
				case 225:
					return 6786;
				case 226:
					return 6793;
				case 227:
					return 6800;
				case 228:
					return 6807;
				case 229:
					return 6814;
				case 230:
					return 6821;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				case 232:
					return 7298;
				case 233:
					return 7305;
				case 234:
					return 7312;
				case 235:
					return 7319;
				case 236:
					return 7326;
				case 237:
					return 7333;
				case 238:
					return 7340;
				case 239:
					return 7347;
				case 240:
					return 7354;
				case 241:
					return 7361;
				case 242:
					return 7368;
				case 243:
					return 7375;
				case 244:
					return 7382;
				case 245:
					return 7389;
				case 246:
					return 7396;
				case 247:
					return 7403;
				case 248:
					return 7410;
				case 249:
					return 7417;
				case 250:
					return 7424;
				case 251:
					return 7431;
				case 252:
					return 7438;
				case 253:
					return 7445;
				case 254:
					return 7452;
				case 255:
					return 7459;
				case 256:
					return 7466;
				case 257:
					return 7473;
				case 258:
					return 7480;
				case 259:
					return 7487;
				case 260:
					return 7494;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				case 262:
					return 8021;
				case 263:
					return 8028;
				case 264:
					return 8035;
				case 265:
					return 8042;
				case 266:
					return 8049;
				case 267:
					return 8056;
				case 268:
					return 8063;
				case 269:
					return 8070;
				case 270:
					return 8077;
				case 271:
					return 8538;
				case 272:
					return 8545;
				case 273:
					return 8552;
				case 274:
					return 8559;
				case 275:
					return 8566;
				case 276:
					return 8573;
				case 277:
					return 8580;
				case 278:
					return 8587;
				case 279:
					return 8594;
				case 280:
					return 8601;
				case 281:
					return 8983;
				case 282:
					return 8990;
				case 283:
					return 8997;
				case 284:
					return 9004;
				case 285:
					return 9011;
				case 286:
					return 9018;
				case 287:
					return 9025;
				case 288:
					return 9032;
				case 289:
					return 9039;
				case 290:
					return 9046;
				case 291:
					return 9053;
				case 292:
					return 9059;
				case 293:
					return 9065;
				case 294:
					return 9071;
				case 295:
					return 9078;
				case 296:
					return 9085;
				case 297:
					return 9092;
				case 298:
					return 9099;
				case 299:
					return 9106;
				case 300:
					return 9113;
				case 301:
					return 9120;
				case 302:
					return 9127;
				case 303:
					return 9134;
				case 304:
					return 9141;
				case 305:
					return 9147;
				case 306:
					return 9153;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				case 1:
					return 1638;
				case 2:
					return 1645;
				case 3:
					return 1652;
				case 4:
					return 1659;
				case 5:
					return 1666;
				case 6:
					return 1673;
				case 7:
					return 1680;
				case 8:
					return 1687;
				case 9:
					return 1694;
				case 10:
					return 1701;
				case 11:
					return 1707;
				case 12:
					return 1713;
				case 13:
					return 1719;
				case 14:
					return 1798;
				case 15:
					return 1805;
				case 16:
					return 1812;
				case 17:
					return 1819;
				case 18:
					return 1826;
				case 19:
					return 1833;
				case 20:
					return 1840;
				case 21:
					return 1847;
				case 22:
					return 1854;
				case 23:
					return 1861;
				case 24:
					return 1867;
				case 25:
					return 1873;
				case 26:
					return 2168;
				case 27:
					return 2175;
				case 28:
					return 2182;
				case 29:
					return 2189;
				case 30:
					return 2196;
				case 31:
					return 2203;
				case 32:
					return 2210;
				case 33:
					return 2217;
				case 34:
					return 2224;
				case 35:
					return 2231;
				case 36:
					return 2238;
				case 37:
					return 2244;
				case 38:
					return 2250;
				case 39:
					return 2831;
				case 40:
					return 2838;
				case 41:
					return 2845;
				case 42:
					return 2852;
				case 43:
					return 2859;
				case 44:
					return 2866;
				case 45:
					return 2873;
				case 46:
					return 2880;
				case 47:
					return 2887;
				case 48:
					return 2894;
				case 49:
					return 2901;
				case 50:
					return 2907;
				case 51:
					return 2913;
				case 52:
					return 2955;
				case 53:
					return 2962;
				case 54:
					return 2969;
				case 55:
					return 2976;
				case 56:
					return 2983;
				case 57:
					return 2990;
				case 58:
					return 2997;
				case 59:
					return 3004;
				case 60:
					return 3011;
				case 61:
					return 3018;
				case 62:
					return 3025;
				case 63:
					return 3031;
				case 64:
					return 3037;
				case 65:
					return 3238;
				case 66:
					return 3246;
				case 67:
					return 3254;
				case 68:
					return 3262;
				case 69:
					return 3270;
				case 70:
					return 3278;
				case 71:
					return 3286;
				case 72:
					return 3294;
				case 73:
					return 3302;
				case 74:
					return 3310;
				case 75:
					return 3318;
				case 76:
					return 3326;
				case 77:
					return 3334;
				case 78:
					return 3342;
				case 79:
					return 3350;
				case 80:
					return 3358;
				case 81:
					return 3366;
				case 82:
					return 3374;
				case 83:
					return 3382;
				case 84:
					return 3390;
				case 85:
					return 3398;
				case 86:
					return 3405;
				case 87:
					return 3412;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				case 89:
					return 4042;
				case 90:
					return 4050;
				case 91:
					return 4058;
				case 92:
					return 4066;
				case 93:
					return 4074;
				case 94:
					return 4082;
				case 95:
					return 4090;
				case 96:
					return 4098;
				case 97:
					return 4106;
				case 98:
					return 4114;
				case 99:
					return 4122;
				case 100:
					return 4130;
				case 101:
					return 4138;
				case 102:
					return 4146;
				case 103:
					return 4154;
				case 104:
					return 4162;
				case 105:
					return 4170;
				case 106:
					return 4178;
				case 107:
					return 4186;
				case 108:
					return 4194;
				case 109:
					return 4202;
				case 110:
					return 4210;
				case 111:
					return 4218;
				case 112:
					return 4226;
				case 113:
					return 4234;
				case 114:
					return 4242;
				case 115:
					return 4250;
				case 116:
					return 4258;
				case 117:
					return 4266;
				case 118:
					return 4274;
				case 119:
					return 4282;
				case 120:
					return 4290;
				case 121:
					return 4298;
				case 122:
					return 4306;
				case 123:
					return 4314;
				case 124:
					return 4322;
				case 125:
					return 4330;
				case 126:
					return 4338;
				case 127:
					return 4346;
				case 128:
					return 4354;
				case 129:
					return 4362;
				case 130:
					return 4370;
				case 131:
					return 4378;
				case 132:
					return 4386;
				case 133:
					return 4394;
				case 134:
					return 4402;
				case 135:
					return 4410;
				case 136:
					return 4418;
				case 137:
					return 4426;
				case 138:
					return 4434;
				case 139:
					return 4442;
				case 140:
					return 4450;
				case 141:
					return 4458;
				case 142:
					return 4466;
				case 143:
					return 4474;
				case 144:
					return 4482;
				case 145:
					return 4490;
				case 146:
					return 4498;
				case 147:
					return 4506;
				case 148:
					return 4514;
				case 149:
					return 4522;
				case 150:
					return 4530;
				case 151:
					return 4538;
				case 152:
					return 4546;
				case 153:
					return 4554;
				case 154:
					return 4562;
				case 155:
					return 4570;
				case 156:
					return 4578;
				case 157:
					return 4586;
				case 158:
					return 5479;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				case 160:
					return 5935;
				case 161:
					return 5942;
				case 162:
					return 5949;
				case 163:
					return 5956;
				case 164:
					return 5963;
				case 165:
					return 5970;
				case 166:
					return 5977;
				case 167:
					return 5984;
				case 168:
					return 5991;
				case 169:
					return 5998;
				case 170:
					return 6005;
				case 171:
					return 6012;
				case 172:
					return 6019;
				case 173:
					return 6026;
				case 174:
					return 6033;
				case 175:
					return 6040;
				case 176:
					return 6047;
				case 177:
					return 6054;
				case 178:
					return 6061;
				case 179:
					return 6068;
				case 180:
					return 6075;
				case 181:
					return 6082;
				case 182:
					return 6089;
				case 183:
					return 6096;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				case 185:
					return 6180;
				case 186:
					return 6187;
				case 187:
					return 6194;
				case 188:
					return 6201;
				case 189:
					return 6208;
				case 190:
					return 6215;
				case 191:
					return 6222;
				case 192:
					return 6229;
				case 193:
					return 6236;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				case 195:
					return 6577;
				case 196:
					return 6584;
				case 197:
					return 6591;
				case 198:
					return 6598;
				case 199:
					return 6605;
				case 200:
					return 6612;
				case 201:
					return 6619;
				case 202:
					return 6626;
				case 203:
					return 6633;
				case 204:
					return 6640;
				case 205:
					return 6647;
				case 206:
					return 6654;
				case 207:
					return 6661;
				case 208:
					return 6668;
				case 209:
					return 6675;
				case 210:
					return 6682;
				case 211:
					return 6689;
				case 212:
					return 6696;
				case 213:
					return 6703;
				case 214:
					return 6710;
				case 215:
					return 6717;
				case 216:
					return 6724;
				case 217:
					return 6731;
				case 218:
					return 6738;
				case 219:
					return 6745;
				case 220:
					return 6752;
				case 221:
					return 6759;
				case 222:
					return 6766;
				case 223:
					return 6773;
				case 224:
					return 6780;
				case 225:
					return 6787;
				case 226:
					return 6794;
				case 227:
					return 6801;
				case 228:
					return 6808;
				case 229:
					return 6815;
				case 230:
					return 6822;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				case 232:
					return 7299;
				case 233:
					return 7306;
				case 234:
					return 7313;
				case 235:
					return 7320;
				case 236:
					return 7327;
				case 237:
					return 7334;
				case 238:
					return 7341;
				case 239:
					return 7348;
				case 240:
					return 7355;
				case 241:
					return 7362;
				case 242:
					return 7369;
				case 243:
					return 7376;
				case 244:
					return 7383;
				case 245:
					return 7390;
				case 246:
					return 7397;
				case 247:
					return 7404;
				case 248:
					return 7411;
				case 249:
					return 7418;
				case 250:
					return 7425;
				case 251:
					return 7432;
				case 252:
					return 7439;
				case 253:
					return 7446;
				case 254:
					return 7453;
				case 255:
					return 7460;
				case 256:
					return 7467;
				case 257:
					return 7474;
				case 258:
					return 7481;
				case 259:
					return 7488;
				case 260:
					return 7495;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				case 262:
					return 8022;
				case 263:
					return 8029;
				case 264:
					return 8036;
				case 265:
					return 8043;
				case 266:
					return 8050;
				case 267:
					return 8057;
				case 268:
					return 8064;
				case 269:
					return 8071;
				case 270:
					return 8078;
				case 271:
					return 8539;
				case 272:
					return 8546;
				case 273:
					return 8553;
				case 274:
					return 8560;
				case 275:
					return 8567;
				case 276:
					return 8574;
				case 277:
					return 8581;
				case 278:
					return 8588;
				case 279:
					return 8595;
				case 280:
					return 8602;
				case 281:
					return 8984;
				case 282:
					return 8991;
				case 283:
					return 8998;
				case 284:
					return 9005;
				case 285:
					return 9012;
				case 286:
					return 9019;
				case 287:
					return 9026;
				case 288:
					return 9033;
				case 289:
					return 9040;
				case 290:
					return 9047;
				case 291:
					return 9054;
				case 292:
					return 9060;
				case 293:
					return 9066;
				case 294:
					return 9072;
				case 295:
					return 9079;
				case 296:
					return 9086;
				case 297:
					return 9093;
				case 298:
					return 9100;
				case 299:
					return 9107;
				case 300:
					return 9114;
				case 301:
					return 9121;
				case 302:
					return 9128;
				case 303:
					return 9135;
				case 304:
					return 9142;
				case 305:
					return 9148;
				case 306:
					return 9154;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				case 1:
					return 1639;
				case 2:
					return 1646;
				case 3:
					return 1653;
				case 4:
					return 1660;
				case 5:
					return 1667;
				case 6:
					return 1674;
				case 7:
					return 1681;
				case 8:
					return 1688;
				case 9:
					return 1695;
				case 10:
					return 1702;
				case 11:
					return 1708;
				case 12:
					return 1714;
				case 13:
					return 1720;
				case 14:
					return 1799;
				case 15:
					return 1806;
				case 16:
					return 1813;
				case 17:
					return 1820;
				case 18:
					return 1827;
				case 19:
					return 1834;
				case 20:
					return 1841;
				case 21:
					return 1848;
				case 22:
					return 1855;
				case 23:
					return 1862;
				case 24:
					return 1868;
				case 25:
					return 1874;
				case 26:
					return 2169;
				case 27:
					return 2176;
				case 28:
					return 2183;
				case 29:
					return 2190;
				case 30:
					return 2197;
				case 31:
					return 2204;
				case 32:
					return 2211;
				case 33:
					return 2218;
				case 34:
					return 2225;
				case 35:
					return 2232;
				case 36:
					return 2239;
				case 37:
					return 2245;
				case 38:
					return 2251;
				case 39:
					return 2832;
				case 40:
					return 2839;
				case 41:
					return 2846;
				case 42:
					return 2853;
				case 43:
					return 2860;
				case 44:
					return 2867;
				case 45:
					return 2874;
				case 46:
					return 2881;
				case 47:
					return 2888;
				case 48:
					return 2895;
				case 49:
					return 2902;
				case 50:
					return 2908;
				case 51:
					return 2914;
				case 52:
					return 2956;
				case 53:
					return 2963;
				case 54:
					return 2970;
				case 55:
					return 2977;
				case 56:
					return 2984;
				case 57:
					return 2991;
				case 58:
					return 2998;
				case 59:
					return 3005;
				case 60:
					return 3012;
				case 61:
					return 3019;
				case 62:
					return 3026;
				case 63:
					return 3032;
				case 64:
					return 3038;
				case 65:
					return 3239;
				case 66:
					return 3247;
				case 67:
					return 3255;
				case 68:
					return 3263;
				case 69:
					return 3271;
				case 70:
					return 3279;
				case 71:
					return 3287;
				case 72:
					return 3295;
				case 73:
					return 3303;
				case 74:
					return 3311;
				case 75:
					return 3319;
				case 76:
					return 3327;
				case 77:
					return 3335;
				case 78:
					return 3343;
				case 79:
					return 3351;
				case 80:
					return 3359;
				case 81:
					return 3367;
				case 82:
					return 3375;
				case 83:
					return 3383;
				case 84:
					return 3391;
				case 85:
					return 3399;
				case 86:
					return 3406;
				case 87:
					return 3413;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				case 89:
					return 4043;
				case 90:
					return 4051;
				case 91:
					return 4059;
				case 92:
					return 4067;
				case 93:
					return 4075;
				case 94:
					return 4083;
				case 95:
					return 4091;
				case 96:
					return 4099;
				case 97:
					return 4107;
				case 98:
					return 4115;
				case 99:
					return 4123;
				case 100:
					return 4131;
				case 101:
					return 4139;
				case 102:
					return 4147;
				case 103:
					return 4155;
				case 104:
					return 4163;
				case 105:
					return 4171;
				case 106:
					return 4179;
				case 107:
					return 4187;
				case 108:
					return 4195;
				case 109:
					return 4203;
				case 110:
					return 4211;
				case 111:
					return 4219;
				case 112:
					return 4227;
				case 113:
					return 4235;
				case 114:
					return 4243;
				case 115:
					return 4251;
				case 116:
					return 4259;
				case 117:
					return 4267;
				case 118:
					return 4275;
				case 119:
					return 4283;
				case 120:
					return 4291;
				case 121:
					return 4299;
				case 122:
					return 4307;
				case 123:
					return 4315;
				case 124:
					return 4323;
				case 125:
					return 4331;
				case 126:
					return 4339;
				case 127:
					return 4347;
				case 128:
					return 4355;
				case 129:
					return 4363;
				case 130:
					return 4371;
				case 131:
					return 4379;
				case 132:
					return 4387;
				case 133:
					return 4395;
				case 134:
					return 4403;
				case 135:
					return 4411;
				case 136:
					return 4419;
				case 137:
					return 4427;
				case 138:
					return 4435;
				case 139:
					return 4443;
				case 140:
					return 4451;
				case 141:
					return 4459;
				case 142:
					return 4467;
				case 143:
					return 4475;
				case 144:
					return 4483;
				case 145:
					return 4491;
				case 146:
					return 4499;
				case 147:
					return 4507;
				case 148:
					return 4515;
				case 149:
					return 4523;
				case 150:
					return 4531;
				case 151:
					return 4539;
				case 152:
					return 4547;
				case 153:
					return 4555;
				case 154:
					return 4563;
				case 155:
					return 4571;
				case 156:
					return 4579;
				case 157:
					return 4587;
				case 158:
					return 5480;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				case 160:
					return 5936;
				case 161:
					return 5943;
				case 162:
					return 5950;
				case 163:
					return 5957;
				case 164:
					return 5964;
				case 165:
					return 5971;
				case 166:
					return 5978;
				case 167:
					return 5985;
				case 168:
					return 5992;
				case 169:
					return 5999;
				case 170:
					return 6006;
				case 171:
					return 6013;
				case 172:
					return 6020;
				case 173:
					return 6027;
				case 174:
					return 6034;
				case 175:
					return 6041;
				case 176:
					return 6048;
				case 177:
					return 6055;
				case 178:
					return 6062;
				case 179:
					return 6069;
				case 180:
					return 6076;
				case 181:
					return 6083;
				case 182:
					return 6090;
				case 183:
					return 6097;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				case 185:
					return 6181;
				case 186:
					return 6188;
				case 187:
					return 6195;
				case 188:
					return 6202;
				case 189:
					return 6209;
				case 190:
					return 6216;
				case 191:
					return 6223;
				case 192:
					return 6230;
				case 193:
					return 6237;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				case 195:
					return 6578;
				case 196:
					return 6585;
				case 197:
					return 6592;
				case 198:
					return 6599;
				case 199:
					return 6606;
				case 200:
					return 6613;
				case 201:
					return 6620;
				case 202:
					return 6627;
				case 203:
					return 6634;
				case 204:
					return 6641;
				case 205:
					return 6648;
				case 206:
					return 6655;
				case 207:
					return 6662;
				case 208:
					return 6669;
				case 209:
					return 6676;
				case 210:
					return 6683;
				case 211:
					return 6690;
				case 212:
					return 6697;
				case 213:
					return 6704;
				case 214:
					return 6711;
				case 215:
					return 6718;
				case 216:
					return 6725;
				case 217:
					return 6732;
				case 218:
					return 6739;
				case 219:
					return 6746;
				case 220:
					return 6753;
				case 221:
					return 6760;
				case 222:
					return 6767;
				case 223:
					return 6774;
				case 224:
					return 6781;
				case 225:
					return 6788;
				case 226:
					return 6795;
				case 227:
					return 6802;
				case 228:
					return 6809;
				case 229:
					return 6816;
				case 230:
					return 6823;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				case 232:
					return 7300;
				case 233:
					return 7307;
				case 234:
					return 7314;
				case 235:
					return 7321;
				case 236:
					return 7328;
				case 237:
					return 7335;
				case 238:
					return 7342;
				case 239:
					return 7349;
				case 240:
					return 7356;
				case 241:
					return 7363;
				case 242:
					return 7370;
				case 243:
					return 7377;
				case 244:
					return 7384;
				case 245:
					return 7391;
				case 246:
					return 7398;
				case 247:
					return 7405;
				case 248:
					return 7412;
				case 249:
					return 7419;
				case 250:
					return 7426;
				case 251:
					return 7433;
				case 252:
					return 7440;
				case 253:
					return 7447;
				case 254:
					return 7454;
				case 255:
					return 7461;
				case 256:
					return 7468;
				case 257:
					return 7475;
				case 258:
					return 7482;
				case 259:
					return 7489;
				case 260:
					return 7496;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				case 262:
					return 8023;
				case 263:
					return 8030;
				case 264:
					return 8037;
				case 265:
					return 8044;
				case 266:
					return 8051;
				case 267:
					return 8058;
				case 268:
					return 8065;
				case 269:
					return 8072;
				case 270:
					return 8079;
				case 271:
					return 8540;
				case 272:
					return 8547;
				case 273:
					return 8554;
				case 274:
					return 8561;
				case 275:
					return 8568;
				case 276:
					return 8575;
				case 277:
					return 8582;
				case 278:
					return 8589;
				case 279:
					return 8596;
				case 280:
					return 8603;
				case 281:
					return 8985;
				case 282:
					return 8992;
				case 283:
					return 8999;
				case 284:
					return 9006;
				case 285:
					return 9013;
				case 286:
					return 9020;
				case 287:
					return 9027;
				case 288:
					return 9034;
				case 289:
					return 9041;
				case 290:
					return 9048;
				case 291:
					return 9055;
				case 292:
					return 9061;
				case 293:
					return 9067;
				case 294:
					return 9073;
				case 295:
					return 9080;
				case 296:
					return 9087;
				case 297:
					return 9094;
				case 298:
					return 9101;
				case 299:
					return 9108;
				case 300:
					return 9115;
				case 301:
					return 9122;
				case 302:
					return 9129;
				case 303:
					return 9136;
				case 304:
					return 9143;
				case 305:
					return 9149;
				case 306:
					return 9155;
				default:
					break;
			}
			Jump @26036; //curOff = 15113
			switch (iParam1)
			{
				case 0:
					return 1633;
				case 1:
					return 1640;
				case 2:
					return 1647;
				case 3:
					return 1654;
				case 4:
					return 1661;
				case 5:
					return 1668;
				case 6:
					return 1675;
				case 7:
					return 1682;
				case 8:
					return 1689;
				case 9:
					return 1696;
				case 10:
					return 1703;
				case 11:
					return 1709;
				case 12:
					return 1715;
				case 13:
					return 1721;
				case 14:
					return 1800;
				case 15:
					return 1807;
				case 16:
					return 1814;
				case 17:
					return 1821;
				case 18:
					return 1828;
				case 19:
					return 1835;
				case 20:
					return 1842;
				case 21:
					return 1849;
				case 22:
					return 1856;
				case 23:
					return 1863;
				case 24:
					return 1869;
				case 25:
					return 1875;
				case 26:
					return 2170;
				case 27:
					return 2177;
				case 28:
					return 2184;
				case 29:
					return 2191;
				case 30:
					return 2198;
				case 31:
					return 2205;
				case 32:
					return 2212;
				case 33:
					return 2219;
				case 34:
					return 2226;
				case 35:
					return 2233;
				case 36:
					return 2240;
				case 37:
					return 2246;
				case 38:
					return 2252;
				case 39:
					return 2833;
				case 40:
					return 2840;
				case 41:
					return 2847;
				case 42:
					return 2854;
				case 43:
					return 2861;
				case 44:
					return 2868;
				case 45:
					return 2875;
				case 46:
					return 2882;
				case 47:
					return 2889;
				case 48:
					return 2896;
				case 49:
					return 2903;
				case 50:
					return 2909;
				case 51:
					return 2915;
				case 52:
					return 2957;
				case 53:
					return 2964;
				case 54:
					return 2971;
				case 55:
					return 2978;
				case 56:
					return 2985;
				case 57:
					return 2992;
				case 58:
					return 2999;
				case 59:
					return 3006;
				case 60:
					return 3013;
				case 61:
					return 3020;
				case 62:
					return 3027;
				case 63:
					return 3033;
				case 64:
					return 3039;
				case 65:
					return 3240;
				case 66:
					return 3248;
				case 67:
					return 3256;
				case 68:
					return 3264;
				case 69:
					return 3272;
				case 70:
					return 3280;
				case 71:
					return 3288;
				case 72:
					return 3296;
				case 73:
					return 3304;
				case 74:
					return 3312;
				case 75:
					return 3320;
				case 76:
					return 3328;
				case 77:
					return 3336;
				case 78:
					return 3344;
				case 79:
					return 3352;
				case 80:
					return 3360;
				case 81:
					return 3368;
				case 82:
					return 3376;
				case 83:
					return 3384;
				case 84:
					return 3392;
				case 85:
					return 3400;
				case 86:
					return 3407;
				case 87:
					return 3414;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				case 89:
					return 4044;
				case 90:
					return 4052;
				case 91:
					return 4060;
				case 92:
					return 4068;
				case 93:
					return 4076;
				case 94:
					return 4084;
				case 95:
					return 4092;
				case 96:
					return 4100;
				case 97:
					return 4108;
				case 98:
					return 4116;
				case 99:
					return 4124;
				case 100:
					return 4132;
				case 101:
					return 4140;
				case 102:
					return 4148;
				case 103:
					return 4156;
				case 104:
					return 4164;
				case 105:
					return 4172;
				case 106:
					return 4180;
				case 107:
					return 4188;
				case 108:
					return 4196;
				case 109:
					return 4204;
				case 110:
					return 4212;
				case 111:
					return 4220;
				case 112:
					return 4228;
				case 113:
					return 4236;
				case 114:
					return 4244;
				case 115:
					return 4252;
				case 116:
					return 4260;
				case 117:
					return 4268;
				case 118:
					return 4276;
				case 119:
					return 4284;
				case 120:
					return 4292;
				case 121:
					return 4300;
				case 122:
					return 4308;
				case 123:
					return 4316;
				case 124:
					return 4324;
				case 125:
					return 4332;
				case 126:
					return 4340;
				case 127:
					return 4348;
				case 128:
					return 4356;
				case 129:
					return 4364;
				case 130:
					return 4372;
				case 131:
					return 4380;
				case 132:
					return 4388;
				case 133:
					return 4396;
				case 134:
					return 4404;
				case 135:
					return 4412;
				case 136:
					return 4420;
				case 137:
					return 4428;
				case 138:
					return 4436;
				case 139:
					return 4444;
				case 140:
					return 4452;
				case 141:
					return 4460;
				case 142:
					return 4468;
				case 143:
					return 4476;
				case 144:
					return 4484;
				case 145:
					return 4492;
				case 146:
					return 4500;
				case 147:
					return 4508;
				case 148:
					return 4516;
				case 149:
					return 4524;
				case 150:
					return 4532;
				case 151:
					return 4540;
				case 152:
					return 4548;
				case 153:
					return 4556;
				case 154:
					return 4564;
				case 155:
					return 4572;
				case 156:
					return 4580;
				case 157:
					return 4588;
				case 158:
					return 5481;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				case 160:
					return 5937;
				case 161:
					return 5944;
				case 162:
					return 5951;
				case 163:
					return 5958;
				case 164:
					return 5965;
				case 165:
					return 5972;
				case 166:
					return 5979;
				case 167:
					return 5986;
				case 168:
					return 5993;
				case 169:
					return 6000;
				case 170:
					return 6007;
				case 171:
					return 6014;
				case 172:
					return 6021;
				case 173:
					return 6028;
				case 174:
					return 6035;
				case 175:
					return 6042;
				case 176:
					return 6049;
				case 177:
					return 6056;
				case 178:
					return 6063;
				case 179:
					return 6070;
				case 180:
					return 6077;
				case 181:
					return 6084;
				case 182:
					return 6091;
				case 183:
					return 6098;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				case 185:
					return 6182;
				case 186:
					return 6189;
				case 187:
					return 6196;
				case 188:
					return 6203;
				case 189:
					return 6210;
				case 190:
					return 6217;
				case 191:
					return 6224;
				case 192:
					return 6231;
				case 193:
					return 6238;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				case 195:
					return 6579;
				case 196:
					return 6586;
				case 197:
					return 6593;
				case 198:
					return 6600;
				case 199:
					return 6607;
				case 200:
					return 6614;
				case 201:
					return 6621;
				case 202:
					return 6628;
				case 203:
					return 6635;
				case 204:
					return 6642;
				case 205:
					return 6649;
				case 206:
					return 6656;
				case 207:
					return 6663;
				case 208:
					return 6670;
				case 209:
					return 6677;
				case 210:
					return 6684;
				case 211:
					return 6691;
				case 212:
					return 6698;
				case 213:
					return 6705;
				case 214:
					return 6712;
				case 215:
					return 6719;
				case 216:
					return 6726;
				case 217:
					return 6733;
				case 218:
					return 6740;
				case 219:
					return 6747;
				case 220:
					return 6754;
				case 221:
					return 6761;
				case 222:
					return 6768;
				case 223:
					return 6775;
				case 224:
					return 6782;
				case 225:
					return 6789;
				case 226:
					return 6796;
				case 227:
					return 6803;
				case 228:
					return 6810;
				case 229:
					return 6817;
				case 230:
					return 6824;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				case 232:
					return 7301;
				case 233:
					return 7308;
				case 234:
					return 7315;
				case 235:
					return 7322;
				case 236:
					return 7329;
				case 237:
					return 7336;
				case 238:
					return 7343;
				case 239:
					return 7350;
				case 240:
					return 7357;
				case 241:
					return 7364;
				case 242:
					return 7371;
				case 243:
					return 7378;
				case 244:
					return 7385;
				case 245:
					return 7392;
				case 246:
					return 7399;
				case 247:
					return 7406;
				case 248:
					return 7413;
				case 249:
					return 7420;
				case 250:
					return 7427;
				case 251:
					return 7434;
				case 252:
					return 7441;
				case 253:
					return 7448;
				case 254:
					return 7455;
				case 255:
					return 7462;
				case 256:
					return 7469;
				case 257:
					return 7476;
				case 258:
					return 7483;
				case 259:
					return 7490;
				case 260:
					return 7497;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				case 262:
					return 8024;
				case 263:
					return 8031;
				case 264:
					return 8038;
				case 265:
					return 8045;
				case 266:
					return 8052;
				case 267:
					return 8059;
				case 268:
					return 8066;
				case 269:
					return 8073;
				case 270:
					return 8080;
				case 271:
					return 8541;
				case 272:
					return 8548;
				case 273:
					return 8555;
				case 274:
					return 8562;
				case 275:
					return 8569;
				case 276:
					return 8576;
				case 277:
					return 8583;
				case 278:
					return 8590;
				case 279:
					return 8597;
				case 280:
					return 8604;
				case 281:
					return 8986;
				case 282:
					return 8993;
				case 283:
					return 9000;
				case 284:
					return 9007;
				case 285:
					return 9014;
				case 286:
					return 9021;
				case 287:
					return 9028;
				case 288:
					return 9035;
				case 289:
					return 9042;
				case 290:
					return 9049;
				case 291:
					return 9056;
				case 292:
					return 9062;
				case 293:
					return 9068;
				case 294:
					return 9074;
				case 295:
					return 9081;
				case 296:
					return 9088;
				case 297:
					return 9095;
				case 298:
					return 9102;
				case 299:
					return 9109;
				case 300:
					return 9116;
				case 301:
					return 9123;
				case 302:
					return 9130;
				case 303:
					return 9137;
				case 304:
					return 9144;
				case 305:
					return 9150;
				case 306:
					return 9156;
				default:
					break;
			}
			Jump @26036; //curOff = 18849
			switch (iParam1)
			{
				case 0:
					return 1635;
				case 1:
					return 1642;
				case 2:
					return 1649;
				case 3:
					return 1656;
				case 4:
					return 1663;
				case 5:
					return 1670;
				case 6:
					return 1677;
				case 7:
					return 1684;
				case 8:
					return 1691;
				case 9:
					return 1698;
				case 13:
					return 1723;
				case 14:
					return 1802;
				case 15:
					return 1809;
				case 16:
					return 1816;
				case 17:
					return 1823;
				case 18:
					return 1830;
				case 19:
					return 1837;
				case 20:
					return 1844;
				case 21:
					return 1851;
				case 22:
					return 1858;
				case 26:
					return 2172;
				case 27:
					return 2179;
				case 28:
					return 2186;
				case 29:
					return 2193;
				case 30:
					return 2200;
				case 31:
					return 2207;
				case 32:
					return 2214;
				case 33:
					return 2221;
				case 34:
					return 2228;
				case 35:
					return 2235;
				case 39:
					return 2835;
				case 40:
					return 2842;
				case 41:
					return 2849;
				case 42:
					return 2856;
				case 43:
					return 2863;
				case 44:
					return 2870;
				case 45:
					return 2877;
				case 46:
					return 2884;
				case 47:
					return 2891;
				case 48:
					return 2898;
				case 52:
					return 2959;
				case 53:
					return 2966;
				case 54:
					return 2973;
				case 55:
					return 2980;
				case 56:
					return 2987;
				case 57:
					return 2994;
				case 58:
					return 3001;
				case 59:
					return 3008;
				case 60:
					return 3015;
				case 61:
					return 3022;
				case 65:
					return 3243;
				case 66:
					return 3251;
				case 67:
					return 3259;
				case 68:
					return 3267;
				case 69:
					return 3275;
				case 70:
					return 3283;
				case 71:
					return 3291;
				case 72:
					return 3299;
				case 73:
					return 3307;
				case 74:
					return 3315;
				case 75:
					return 3323;
				case 76:
					return 3331;
				case 77:
					return 3339;
				case 78:
					return 3347;
				case 79:
					return 3355;
				case 80:
					return 3363;
				case 81:
					return 3371;
				case 82:
					return 3379;
				case 83:
					return 3387;
				case 84:
					return 3395;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				case 89:
					return 4047;
				case 90:
					return 4055;
				case 91:
					return 4063;
				case 92:
					return 4071;
				case 93:
					return 4079;
				case 94:
					return 4087;
				case 95:
					return 4095;
				case 96:
					return 4103;
				case 97:
					return 4111;
				case 98:
					return 4119;
				case 99:
					return 4127;
				case 100:
					return 4135;
				case 101:
					return 4143;
				case 102:
					return 4151;
				case 103:
					return 4159;
				case 104:
					return 4167;
				case 105:
					return 4175;
				case 106:
					return 4183;
				case 107:
					return 4191;
				case 108:
					return 4199;
				case 109:
					return 4207;
				case 110:
					return 4215;
				case 111:
					return 4223;
				case 112:
					return 4231;
				case 113:
					return 4239;
				case 114:
					return 4247;
				case 115:
					return 4255;
				case 116:
					return 4263;
				case 117:
					return 4271;
				case 118:
					return 4279;
				case 119:
					return 4287;
				case 120:
					return 4295;
				case 121:
					return 4303;
				case 122:
					return 4311;
				case 123:
					return 4319;
				case 124:
					return 4327;
				case 125:
					return 4335;
				case 126:
					return 4343;
				case 127:
					return 4351;
				case 128:
					return 4359;
				case 129:
					return 4367;
				case 130:
					return 4375;
				case 131:
					return 4383;
				case 132:
					return 4391;
				case 133:
					return 4399;
				case 134:
					return 4407;
				case 135:
					return 4415;
				case 136:
					return 4423;
				case 137:
					return 4431;
				case 138:
					return 4439;
				case 139:
					return 4447;
				case 140:
					return 4455;
				case 141:
					return 4463;
				case 142:
					return 4471;
				case 143:
					return 4479;
				case 144:
					return 4487;
				case 145:
					return 4495;
				case 146:
					return 4503;
				case 147:
					return 4511;
				case 148:
					return 4519;
				case 149:
					return 4527;
				case 150:
					return 4535;
				case 151:
					return 4543;
				case 152:
					return 4551;
				case 153:
					return 4559;
				case 154:
					return 4567;
				case 155:
					return 4575;
				case 156:
					return 4583;
				case 157:
					return 4591;
				case 158:
					return 5484;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				case 160:
					return 5939;
				case 161:
					return 5946;
				case 162:
					return 5953;
				case 163:
					return 5960;
				case 164:
					return 5967;
				case 165:
					return 5974;
				case 166:
					return 5981;
				case 167:
					return 5988;
				case 168:
					return 5995;
				case 169:
					return 6002;
				case 170:
					return 6009;
				case 171:
					return 6016;
				case 172:
					return 6023;
				case 173:
					return 6030;
				case 174:
					return 6037;
				case 175:
					return 6044;
				case 176:
					return 6051;
				case 177:
					return 6058;
				case 178:
					return 6065;
				case 179:
					return 6072;
				case 180:
					return 6079;
				case 181:
					return 6086;
				case 182:
					return 6093;
				case 183:
					return 6100;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				case 185:
					return 6184;
				case 186:
					return 6191;
				case 187:
					return 6198;
				case 188:
					return 6205;
				case 189:
					return 6212;
				case 190:
					return 6219;
				case 191:
					return 6226;
				case 192:
					return 6233;
				case 193:
					return 6240;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				case 195:
					return 6581;
				case 196:
					return 6588;
				case 197:
					return 6595;
				case 198:
					return 6602;
				case 199:
					return 6609;
				case 200:
					return 6616;
				case 201:
					return 6623;
				case 202:
					return 6630;
				case 203:
					return 6637;
				case 204:
					return 6644;
				case 205:
					return 6651;
				case 206:
					return 6658;
				case 207:
					return 6665;
				case 208:
					return 6672;
				case 209:
					return 6679;
				case 210:
					return 6686;
				case 211:
					return 6693;
				case 212:
					return 6700;
				case 213:
					return 6707;
				case 214:
					return 6714;
				case 215:
					return 6721;
				case 216:
					return 6728;
				case 217:
					return 6735;
				case 218:
					return 6742;
				case 219:
					return 6749;
				case 220:
					return 6756;
				case 221:
					return 6763;
				case 222:
					return 6770;
				case 223:
					return 6777;
				case 224:
					return 6784;
				case 225:
					return 6791;
				case 226:
					return 6798;
				case 227:
					return 6805;
				case 228:
					return 6812;
				case 229:
					return 6819;
				case 230:
					return 6826;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				case 232:
					return 7303;
				case 233:
					return 7310;
				case 234:
					return 7317;
				case 235:
					return 7324;
				case 236:
					return 7331;
				case 237:
					return 7338;
				case 238:
					return 7345;
				case 239:
					return 7352;
				case 240:
					return 7359;
				case 241:
					return 7366;
				case 242:
					return 7373;
				case 243:
					return 7380;
				case 244:
					return 7387;
				case 245:
					return 7394;
				case 246:
					return 7401;
				case 247:
					return 7408;
				case 248:
					return 7415;
				case 249:
					return 7422;
				case 250:
					return 7429;
				case 251:
					return 7436;
				case 252:
					return 7443;
				case 253:
					return 7450;
				case 254:
					return 7457;
				case 255:
					return 7464;
				case 256:
					return 7471;
				case 257:
					return 7478;
				case 258:
					return 7485;
				case 259:
					return 7492;
				case 260:
					return 7499;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				case 262:
					return 8026;
				case 263:
					return 8033;
				case 264:
					return 8040;
				case 265:
					return 8047;
				case 266:
					return 8054;
				case 267:
					return 8061;
				case 268:
					return 8068;
				case 269:
					return 8075;
				case 270:
					return 8082;
				case 271:
					return 8543;
				case 272:
					return 8550;
				case 273:
					return 8557;
				case 274:
					return 8564;
				case 275:
					return 8571;
				case 276:
					return 8578;
				case 277:
					return 8585;
				case 278:
					return 8592;
				case 279:
					return 8599;
				case 280:
					return 8606;
				case 281:
					return 8988;
				case 282:
					return 8995;
				case 283:
					return 9002;
				case 284:
					return 9009;
				case 285:
					return 9016;
				case 286:
					return 9023;
				case 287:
					return 9030;
				case 288:
					return 9037;
				case 289:
					return 9044;
				case 290:
					return 9051;
				case 294:
					return 9076;
				case 295:
					return 9083;
				case 296:
					return 9090;
				case 297:
					return 9097;
				case 298:
					return 9104;
				case 299:
					return 9111;
				case 300:
					return 9118;
				case 301:
					return 9125;
				case 302:
					return 9132;
				case 303:
					return 9139;
				default:
					break;
			}
			Jump @26036; //curOff = 22297
			switch (iParam1)
			{
				case 0:
					return 1634;
				case 1:
					return 1641;
				case 2:
					return 1648;
				case 3:
					return 1655;
				case 4:
					return 1662;
				case 5:
					return 1669;
				case 6:
					return 1676;
				case 7:
					return 1683;
				case 8:
					return 1690;
				case 9:
					return 1697;
				case 10:
					return 1704;
				case 11:
					return 1710;
				case 12:
					return 1716;
				case 13:
					return 1722;
				case 14:
					return 1801;
				case 15:
					return 1808;
				case 16:
					return 1815;
				case 17:
					return 1822;
				case 18:
					return 1829;
				case 19:
					return 1836;
				case 20:
					return 1843;
				case 21:
					return 1850;
				case 22:
					return 1857;
				case 23:
					return 1864;
				case 24:
					return 1870;
				case 25:
					return 1876;
				case 26:
					return 2171;
				case 27:
					return 2178;
				case 28:
					return 2185;
				case 29:
					return 2192;
				case 30:
					return 2199;
				case 31:
					return 2206;
				case 32:
					return 2213;
				case 33:
					return 2220;
				case 34:
					return 2227;
				case 35:
					return 2234;
				case 36:
					return 2241;
				case 37:
					return 2247;
				case 38:
					return 2253;
				case 39:
					return 2834;
				case 40:
					return 2841;
				case 41:
					return 2848;
				case 42:
					return 2855;
				case 43:
					return 2862;
				case 44:
					return 2869;
				case 45:
					return 2876;
				case 46:
					return 2883;
				case 47:
					return 2890;
				case 48:
					return 2897;
				case 49:
					return 2904;
				case 50:
					return 2910;
				case 51:
					return 2916;
				case 52:
					return 2958;
				case 53:
					return 2965;
				case 54:
					return 2972;
				case 55:
					return 2979;
				case 56:
					return 2986;
				case 57:
					return 2993;
				case 58:
					return 3000;
				case 59:
					return 3007;
				case 60:
					return 3014;
				case 61:
					return 3021;
				case 62:
					return 3028;
				case 63:
					return 3034;
				case 64:
					return 3040;
				case 65:
					return 3241;
				case 66:
					return 3249;
				case 67:
					return 3257;
				case 68:
					return 3265;
				case 69:
					return 3273;
				case 70:
					return 3281;
				case 71:
					return 3289;
				case 72:
					return 3297;
				case 73:
					return 3305;
				case 74:
					return 3313;
				case 75:
					return 3321;
				case 76:
					return 3329;
				case 77:
					return 3338;
				case 78:
					return 3346;
				case 79:
					return 3353;
				case 80:
					return 3361;
				case 81:
					return 3369;
				case 82:
					return 3377;
				case 83:
					return 3385;
				case 84:
					return 3393;
				case 85:
					return 3401;
				case 86:
					return 3408;
				case 87:
					return 3415;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				case 89:
					return 4045;
				case 90:
					return 4053;
				case 91:
					return 4061;
				case 92:
					return 4069;
				case 93:
					return 4077;
				case 94:
					return 4085;
				case 95:
					return 4093;
				case 96:
					return 4101;
				case 97:
					return 4109;
				case 98:
					return 4117;
				case 99:
					return 4125;
				case 100:
					return 4134;
				case 101:
					return 4142;
				case 102:
					return 4149;
				case 103:
					return 4157;
				case 104:
					return 4165;
				case 105:
					return 4173;
				case 106:
					return 4181;
				case 107:
					return 4189;
				case 108:
					return 4197;
				case 109:
					return 4205;
				case 110:
					return 4213;
				case 111:
					return 4221;
				case 112:
					return 4229;
				case 113:
					return 4237;
				case 114:
					return 4245;
				case 115:
					return 4253;
				case 116:
					return 4261;
				case 117:
					return 4269;
				case 118:
					return 4277;
				case 119:
					return 4285;
				case 120:
					return 4294;
				case 121:
					return 4302;
				case 122:
					return 4309;
				case 123:
					return 4317;
				case 124:
					return 4325;
				case 125:
					return 4333;
				case 126:
					return 4341;
				case 127:
					return 4349;
				case 128:
					return 4357;
				case 129:
					return 4365;
				case 130:
					return 4373;
				case 131:
					return 4381;
				case 132:
					return 4389;
				case 133:
					return 4397;
				case 134:
					return 4405;
				case 135:
					return 4413;
				case 136:
					return 4421;
				case 137:
					return 4429;
				case 138:
					return 4437;
				case 139:
					return 4445;
				case 140:
					return 4454;
				case 141:
					return 4462;
				case 142:
					return 4469;
				case 143:
					return 4477;
				case 144:
					return 4485;
				case 145:
					return 4493;
				case 146:
					return 4501;
				case 147:
					return 4509;
				case 148:
					return 4517;
				case 149:
					return 4525;
				case 150:
					return 4533;
				case 151:
					return 4541;
				case 152:
					return 4549;
				case 153:
					return 4557;
				case 154:
					return 4565;
				case 155:
					return 4573;
				case 156:
					return 4581;
				case 157:
					return 4589;
				case 158:
					return 5482;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				case 160:
					return 5938;
				case 161:
					return 5945;
				case 162:
					return 5952;
				case 163:
					return 5959;
				case 164:
					return 5966;
				case 165:
					return 5973;
				case 166:
					return 5980;
				case 167:
					return 5987;
				case 168:
					return 5994;
				case 169:
					return 6001;
				case 170:
					return 6008;
				case 171:
					return 6015;
				case 172:
					return 6022;
				case 173:
					return 6029;
				case 174:
					return 6036;
				case 175:
					return 6043;
				case 176:
					return 6050;
				case 177:
					return 6057;
				case 178:
					return 6064;
				case 179:
					return 6071;
				case 180:
					return 6078;
				case 181:
					return 6085;
				case 182:
					return 6092;
				case 183:
					return 6099;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				case 185:
					return 6183;
				case 186:
					return 6190;
				case 187:
					return 6197;
				case 188:
					return 6204;
				case 189:
					return 6211;
				case 190:
					return 6218;
				case 191:
					return 6225;
				case 192:
					return 6232;
				case 193:
					return 6239;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				case 195:
					return 6580;
				case 196:
					return 6587;
				case 197:
					return 6594;
				case 198:
					return 6601;
				case 199:
					return 6608;
				case 200:
					return 6615;
				case 201:
					return 6622;
				case 202:
					return 6629;
				case 203:
					return 6636;
				case 204:
					return 6643;
				case 205:
					return 6650;
				case 206:
					return 6657;
				case 207:
					return 6664;
				case 208:
					return 6671;
				case 209:
					return 6678;
				case 210:
					return 6685;
				case 211:
					return 6692;
				case 212:
					return 6699;
				case 213:
					return 6706;
				case 214:
					return 6713;
				case 215:
					return 6720;
				case 216:
					return 6727;
				case 217:
					return 6734;
				case 218:
					return 6741;
				case 219:
					return 6748;
				case 220:
					return 6755;
				case 221:
					return 6762;
				case 222:
					return 6769;
				case 223:
					return 6776;
				case 224:
					return 6783;
				case 225:
					return 6790;
				case 226:
					return 6797;
				case 227:
					return 6804;
				case 228:
					return 6811;
				case 229:
					return 6818;
				case 230:
					return 6825;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				case 232:
					return 7302;
				case 233:
					return 7309;
				case 234:
					return 7316;
				case 235:
					return 7323;
				case 236:
					return 7330;
				case 237:
					return 7337;
				case 238:
					return 7344;
				case 239:
					return 7351;
				case 240:
					return 7358;
				case 241:
					return 7365;
				case 242:
					return 7372;
				case 243:
					return 7379 /* GXTEntry: "1100000" */;
				case 244:
					return 7386;
				case 245:
					return 7393;
				case 246:
					return 7400;
				case 247:
					return 7407;
				case 248:
					return 7414;
				case 249:
					return 7421;
				case 250:
					return 7428;
				case 251:
					return 7435;
				case 252:
					return 7442;
				case 253:
					return 7449;
				case 254:
					return 7456;
				case 255:
					return 7463;
				case 256:
					return 7470;
				case 257:
					return 7477;
				case 258:
					return 7484;
				case 259:
					return 7491;
				case 260:
					return 7498;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				case 262:
					return 8025;
				case 263:
					return 8032;
				case 264:
					return 8039;
				case 265:
					return 8046;
				case 266:
					return 8053;
				case 267:
					return 8060;
				case 268:
					return 8067;
				case 269:
					return 8074;
				case 270:
					return 8081;
				case 271:
					return 8542;
				case 272:
					return 8549;
				case 273:
					return 8556;
				case 274:
					return 8563;
				case 275:
					return 8570;
				case 276:
					return 8577;
				case 277:
					return 8584;
				case 278:
					return 8591;
				case 279:
					return 8598;
				case 280:
					return 8605;
				case 281:
					return 8987;
				case 282:
					return 8994;
				case 283:
					return 9001;
				case 284:
					return 9008;
				case 285:
					return 9015;
				case 286:
					return 9022;
				case 287:
					return 9029;
				case 288:
					return 9036;
				case 289:
					return 9043;
				case 290:
					return 9050;
				case 291:
					return 9057;
				case 292:
					return 9063;
				case 293:
					return 9069;
				case 294:
					return 9075;
				case 295:
					return 9082;
				case 296:
					return 9089;
				case 297:
					return 9096;
				case 298:
					return 9103;
				case 299:
					return 9110;
				case 300:
					return 9117;
				case 301:
					return 9124;
				case 302:
					return 9131;
				case 303:
					return 9138;
				case 304:
					return 9145;
				case 305:
					return 9151;
				case 306:
					return 9157;
				default:
					break;
			}
			return 1629;
		}

int func_282(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_283(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 108;
		case 9:
			return 128;
		case 10:
			return 148;
		case 11:
			return 156;
		case 6:
			return 75;
		case 7:
			return 88;
		case 5:
			return -1;
		case 12:
			return 179;
		case 13:
			return 186;
		case 14:
			return 192;
		case 15:
			return 202;
		case 16:
			return 212;
		case 17:
			return 222;
		case 18:
			return 236;
		case 19:
			return 246;
		case 20:
			return 256;
		case 21:
			return 268;
		case 22:
			return 278;
		case 23:
			return 294;
		case 24:
			return 307;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_292(iParam0);
		return func_291(iVar0);
	}
	return (func_284(iParam0, -1, 1) * iParam0 + 1);
}

int func_284(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_287(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_286(iParam1))
			{
				return 0;
			}
			else if (func_285(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049924[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
		case 5:
			return 0;
		case 6:
			return 10;
		case 8:
		case 9:
		case 10:
			return 20;
		case 11:
			return 8;
		case 12:
			return 20;
		case 13:
			return 7;
		case 14:
			return 1;
		case 15:
		case 16:
		case 17:
			return 10;
		case 18:
		case 19:
		case 20:
			return 10;
		case 21:
			return 10;
		case 22:
			return 10;
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
		}
	}
	return 0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
	}
	return 0;
}

int func_287(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_288(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_288(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
		}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
	}
	return 0;
}

bool func_288(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_8())
	{
		if (!func_290(Global_1590518))
		{
			return false;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590518)
			{
				if (MISC::IS_BIT_SET(Global_2425869[Global_1590518 /*443*/].f_199, 24) || func_289(Global_1590518))
				{
					return true;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_199, 24);
}

int func_289(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_290(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		case 2:
			return 224;
		case 1:
			return 227;
		case 3:
			return 279;
		default:
			break;
	}
	return -1;
}

int func_292(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_293(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_294(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_295(int iParam0)
{
	int iVar0;

	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_283(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
	}
	return 0;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;

	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_283(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_283(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_283(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_283(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

void func_298(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_299())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_22(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_299()
{
	return 1;
	return 0;
}

void func_300(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	var uVar1;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_338();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 12);
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 15);
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 2);
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 8);
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 9);
			func_336();
			func_335(iParam1, 1);
			Global_1683886 = 1;
		}
		func_305(iParam0, &(Global_1323678[iParam1 /*141*/]), bParam5);
		Global_1323678[iParam1 /*141*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 1);
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 6);
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 0);
		}
		if (bParam4)
		{
			func_304(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 15);
			MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 2);
		}
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 27);
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (MISC::IS_BIT_SET(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_303(&iParam0, &(Global_1323678[iParam1 /*141*/].f_9), &(Global_1323678[iParam1 /*141*/].f_59));
			if (func_302(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2097152[func_186() /*10931*/].f_6087.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 25);
				MISC::CLEAR_BIT(&(Global_1323678[iParam1 /*141*/].f_102), 26);
			}
		}
		Global_2097152[func_186() /*10931*/].f_6175.f_1274 = UNK_0x5A002C4821A13338();
		func_279(iParam1, &(Global_1323678[iParam1 /*141*/]), 0, iParam9, 0, 0);
	}
}

bool func_302(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return false;
	}
	return *uParam1 != -1;
}

int func_303(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_304(int iParam0)
{
	Global_2097152[func_186() /*10931*/].f_6175.f_2 = iParam0;
}

void func_305(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	func_334(uParam1);
	if (bParam2)
	{
		uParam1->f_102 = 0;
		uParam1->f_104 = 0;
		StringCopy(&(uParam1->f_105), "", 64);
		StringCopy(&(uParam1->f_121), "", 64);
		uParam1->f_139 = 0;
		uParam1->f_137 = -1;
		uParam1->f_138 = -1;
		uParam1->f_140 = UNK_0x5A002C4821A13338();
		if (Global_262145.f_10624)
		{
			MISC::SET_BIT(&(uParam1->f_102), 22);
		}
	}
	if (func_333(iParam0, 0))
	{
		func_332();
		MISC::SET_BIT(&(uParam1->f_102), 3);
	}
	func_308(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_102), 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(uParam1->f_102, 8))
	{
		if (!func_306(iParam0))
		{
		}
	}
	else if (func_306(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_102), 8);
		MISC::SET_BIT(&(uParam1->f_102), 9);
	}
}

int func_306(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_307(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return MISC::IS_BIT_SET(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_308(int iParam0, var uParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_328(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (MISC::IS_BIT_SET(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_306(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_326(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::_GET_VEHICLE_DEFAULT_HORN_VARIATION(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam0, &(uParam1->f_97));
		VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0);
		iVar0 = func_316(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_8())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_315(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("DEATHBIKE2")))
		{
			uParam1->f_99 = func_309(func_312(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

var func_309(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = func_311(iParam0);
	func_310(iVar1, &uVar0);
	return uVar0;
}

bool func_310(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		case 1:
			*iParam1 = 5;
			break;
		case 2:
			*iParam1 = 6;
			break;
		case 3:
			*iParam1 = 7;
			break;
		case 4:
			*iParam1 = 111;
			break;
		case 5:
			*iParam1 = 112;
			break;
		case 6:
			*iParam1 = 107;
			break;
		case 7:
			*iParam1 = 104;
			break;
		case 8:
			*iParam1 = 98;
			break;
		case 9:
			*iParam1 = 100;
			break;
		case 10:
			*iParam1 = 102;
			break;
		case 11:
			*iParam1 = 99;
			break;
		case 12:
			*iParam1 = 105;
			break;
		case 13:
			*iParam1 = 106;
			break;
		case 14:
			*iParam1 = 37;
			break;
		case 15:
			*iParam1 = 90;
			break;
		case 16:
			*iParam1 = 88;
			break;
		case 17:
			*iParam1 = 89;
			break;
		case 18:
			*iParam1 = 91;
			break;
		case 19:
			*iParam1 = 38;
			break;
		case 20:
			*iParam1 = 138;
			break;
		case 21:
			*iParam1 = 36;
			break;
		case 22:
			*iParam1 = 27;
			break;
		case 23:
			*iParam1 = 28;
			break;
		case 24:
			*iParam1 = 29;
			break;
		case 25:
			*iParam1 = 150;
			break;
		case 26:
			*iParam1 = 30;
			break;
		case 27:
			*iParam1 = 31;
			break;
		case 28:
			*iParam1 = 32;
			break;
		case 29:
			*iParam1 = 35;
			break;
		case 30:
			*iParam1 = 135;
			break;
		case 31:
			*iParam1 = 137;
			break;
		case 32:
			*iParam1 = 136;
			break;
		case 33:
			*iParam1 = 71;
			break;
		case 34:
			*iParam1 = 145;
			break;
		case 35:
			*iParam1 = 63;
			break;
		case 36:
			*iParam1 = 64;
			break;
		case 37:
			*iParam1 = 65;
			break;
		case 38:
			*iParam1 = 66;
			break;
		case 39:
			*iParam1 = 67;
			break;
		case 40:
			*iParam1 = 68;
			break;
		case 41:
			*iParam1 = 69;
			break;
		case 42:
			*iParam1 = 73;
			break;
		case 43:
			*iParam1 = 70;
			break;
		case 44:
			*iParam1 = 74;
			break;
		case 45:
			*iParam1 = 51;
			break;
		case 46:
			*iParam1 = 53;
			break;
		case 47:
			*iParam1 = 54;
			break;
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 36;
		case 2:
			return 35;
		case 3:
			return 46;
		case 4:
			return 48;
		case 5:
			return 16;
		case 6:
			return 14;
		case 7:
			return 19;
		case 8:
			return 22;
		case 9:
			return 31;
		case 10:
			return 30;
		case 11:
			return 33;
		case 12:
			return 34;
		default:
			break;
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_313()) && Global_1314052)
	{
		if ((iParam0 == Global_1314053 && iParam1 == Global_1314054) && iParam2 == Global_1314055)
		{
			return 13;
		}
	}
	return 0;
}

int func_313()
{
	struct<13> Var0;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_314() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_314()
{
	struct<13> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_315(int iParam0)
{
	if (Global_2540384.f_298 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_325(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_324(iParam0);
		}
		else if (func_323(iParam0, 1))
		{
			return func_322(iParam0, 1, 0);
		}
		else if (func_321(iParam0, 1))
		{
			return func_320(iParam0, 1, 0);
		}
		else if (func_319(iParam0, 1))
		{
			*uParam1 = 2;
			return func_317(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_317(int iParam0)
{
	int iVar0;

	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return func_318(iVar0, 0, 1, 0);
}

int func_318(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_6(iVar0, 0, 1) || (bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_6(iParam3, 0, 1) || (bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_8();
}

int func_319(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_320(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_321(iParam0, 1))
	{
		return func_8();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return func_318(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_321(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_322(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_323(iParam0, 1))
	{
		return func_8();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_318(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_323(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	int iVar0;

	if (!func_325(iParam0, 1))
	{
		return func_8();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_318(iVar0, 0, 1, 0);
}

int func_325(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1315750));
			iVar3 = 20000;
			if (Global_1574416)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_327(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_327(int iParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!MISC::IS_BIT_SET(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_328(int iParam0, var uParam1)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_331(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_303(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_329(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_331(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_332()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (MISC::IS_BIT_SET(Global_1323678[iVar0 /*141*/].f_102, 3))
		{
			MISC::CLEAR_BIT(&(Global_1323678[iVar0 /*141*/].f_102), 3);
		}
		iVar0++;
	}
}

int func_333(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_334(var uParam0)
{
	func_331(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2540384.f_2305[iVar0 /*44*/].f_40 == iParam0)
			{
				func_335(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2540384.f_2305[iParam0 /*44*/]), "", 24);
		Global_2540384.f_2305[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2540384.f_2305[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2540384.f_2305[iParam0 /*44*/].f_23), "", 64);
		Global_2540384.f_2305[iParam0 /*44*/].f_39 = -1;
		Global_2540384.f_2305[iParam0 /*44*/].f_40 = -1;
		func_71(&(Global_2540384.f_2305[iParam0 /*44*/].f_41));
		Global_2540384.f_2305[iParam0 /*44*/].f_43 = 0;
	}
}

void func_336()
{
	func_337(10);
}

void func_337(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1574583.f_3[iVar0]), iVar1);
}

void func_338()
{
	Global_2440049.f_502.f_58 = 0;
	func_339(25);
	func_339(24);
}

void func_339(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2440049.f_502.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2440049.f_502.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2440049.f_502.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2440049.f_502.f_2), (iParam0 - 32));
	}
}

void func_340(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_344() < 0 && Global_1689553)
	{
		return;
	}
	if (func_343(35))
	{
		bParam0 = true;
	}
	if (MISC::IS_BIT_SET(Global_2440049.f_502.f_52, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_342(2);
	}
	else
	{
		func_342(1);
	}
	if (bParam1)
	{
		func_342(11);
	}
	if (bParam2)
	{
		func_342(32);
		if (bParam3)
		{
			if (func_344() >= 0 && MISC::IS_BIT_SET(Global_1323678[func_344() /*141*/].f_102, 0))
			{
				func_342(33);
			}
		}
		else
		{
			func_339(33);
		}
		if (func_344() >= 0)
		{
			if (func_341(Global_1323678[func_344() /*141*/].f_66))
			{
				func_342(40);
			}
		}
	}
	else if (bParam5)
	{
		func_342(37);
	}
	if (bParam4)
	{
		func_342(36);
	}
	if (func_343(36))
	{
		if (func_343(2))
		{
			func_339(36);
		}
	}
	if (bParam6)
	{
		func_342(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2540384.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_341(int iParam0)
{
	if (iParam0 == joaat("TRAILERSMALL2"))
	{
		return 1;
	}
	return 0;
}

void func_342(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_2440049.f_502.f_1, iParam0))
		{
			MISC::SET_BIT(&(Global_2440049.f_502.f_1), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2440049.f_502.f_2, (iParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2440049.f_502.f_2), (iParam0 - 32));
	}
}

bool func_343(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2440049.f_502.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2440049.f_502.f_2, (iParam0 - 32));
}

int func_344()
{
	if (Global_2097152[func_186() /*10931*/].f_6175.f_2 >= 307)
	{
		Global_2097152[func_186() /*10931*/].f_6175.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_186() /*10931*/].f_6175.f_2;
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_346(iParam0, iParam1, iParam2);
	if (iParam0 >= 307)
	{
		return;
	}
	if (iParam2 == func_18() || iParam2 == -1)
	{
		Global_1672964[iParam0] = iParam1;
	}
}

void func_346(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_66(func_348(iParam0), iParam1, iParam2, 1);
		func_66(func_347(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_66(func_348(iParam0), 255, iParam2, 1);
		func_66(func_347(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_347(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	return (24625 + iParam0);
}

int func_348(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	return (4036 + iParam0);
}

bool func_349(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_395() && Global_1695683)
			{
				return false;
			}
			iVar0 = func_394(iParam1);
			iVar1 = func_391(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (func_149(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_149(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_350(iParam1, iParam0, bParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_144())
			{
			}
			else
			{
				*uParam2 = 3;
				func_109(func_114());
			}
			break;
		case 1:
			if (func_114() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					*uParam2 = 2;
					func_109(func_114());
				}
				else
				{
					*uParam2 = 3;
					func_109(func_114());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_350(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char[] cVar7[8];
	char cVar11[32];
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	struct<4> Var31;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	char* sVar48;

	iVar19 = func_390(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4269154 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_389(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_388(iParam1, &iVar0, &cVar3, &iVar15, &iVar1, &cVar7, &iVar16, &iVar2, &cVar11, &iVar17, &iVar18, 0);
			if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &cVar3, 1, 24, iVar19, iVar0, iVar15))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &cVar11, 3, 24, iVar19, iVar2, iVar17))
			{
				return 0;
			}
			if (!func_385(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_386(iVar0)))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &cVar7, 2, 25, iVar19, iVar1, iVar16))
			{
				return 0;
			}
			if (!func_385(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_386(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar20 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar20 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar21 = func_383(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar22 = func_382(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar23 = func_378(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar24 = func_377(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar25 = func_376(iParam1);
		if (bVar20)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar21, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar21, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar21, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar21, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar21, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar21, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar21, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar21, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar21, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar21, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar21, iVar25, iParam1, 10))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar21, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar21, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar21, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar21, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar21, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_374(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar21, -1, 0, 23))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_374(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar21, -1, 0, 23))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar22, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar22, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar22, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar22, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar22, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar22, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar22, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar22, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar22, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar22, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar22, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar22, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar22, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar22, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar22, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar22, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar22, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar22, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar22, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar22, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar22, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar22, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar22, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar23, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			uVar26 = func_373(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_372(uVar26), 10, iVar21))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			if (!func_370(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar24))
			{
				return 0;
			}
			if (!func_370(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar24))
			{
				return 0;
			}
		}
		if (!func_368(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar20)
		{
			iVar27 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar27 = 0;
					break;
				case 3:
					iVar27 = 1;
					break;
				case 2:
					iVar27 = 2;
					break;
				case 1:
					iVar27 = 3;
					break;
				case 4:
					iVar27 = 4;
					break;
				case 5:
					iVar27 = 5;
					break;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar27, 33, iVar21, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			iVar28 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar28 = 0;
					break;
				case 0:
					iVar28 = 1;
					break;
				case 4:
					iVar28 = 2;
					break;
				case 2:
					iVar28 = 3;
					break;
				case 1:
					iVar28 = 4;
					break;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar28, 23, iVar21, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar21, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar21, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar21, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar21, -1, 0, 23))
			{
				return 0;
			}
		}
		func_388(iParam1, &iVar0, &cVar3, &iVar15, &iVar1, &cVar7, &iVar16, &iVar2, &cVar11, &iVar17, &iVar18, 1);
		iVar29 = func_367(iVar18);
		if (!func_375(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar29, 29, iVar19, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar15, iVar16);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar17, iVar18);
		if (bParam3)
		{
			while (func_366(iVar30, &Var31, &uVar35, &iVar36, &iVar37))
			{
				if (iVar36 == iVar15 && iVar37 == iVar17)
				{
					cVar11 = { Var31 };
				}
				iVar30++;
			}
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &cVar3, 1, 24, iVar19, iVar0, iVar15))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &cVar11, 3, 24, iVar19, iVar2, iVar17))
		{
			return 0;
		}
		if (!func_385(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_386(iVar0)))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &cVar7, 2, 25, iVar19, iVar1, iVar16))
		{
			return 0;
		}
		if (!func_385(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_386(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar38, &iVar39, &iVar40);
		switch (func_363(iVar38, iVar39, iVar40))
		{
			case 1:
				iVar41 = 3;
				break;
			case 2:
				iVar41 = 4;
				break;
			case 3:
				iVar41 = 5;
				break;
			case 4:
				iVar41 = 6;
				break;
			case 5:
				iVar41 = 11;
				break;
			case 6:
				iVar41 = 7;
				break;
			case 7:
				iVar41 = 10;
				break;
			case 8:
				iVar41 = 8;
				break;
			case 9:
				iVar41 = 12;
				break;
			case 10:
				iVar41 = 13;
				break;
			case 11:
				iVar41 = -1;
				break;
			case 12:
				iVar41 = 9;
				break;
			case 0:
				if (func_362(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("OPPRESSOR2")))
				{
					iVar41 = 255;
				}
			else
			{
				}
		}
		if (bVar20)
		{
			if (!func_361(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar41, 18, iVar21))
			{
				return 0;
			}
		}
		iVar42 = func_360(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar20)
		{
			if (!func_359(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar42, 21, iVar21, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar38, &iVar39, &iVar40);
		iVar43 = func_312(iVar38, iVar39, iVar40);
		if (bVar20)
		{
			if (!func_359(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar43, 21, iVar21, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar21, func_358(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam1), 39, iVar23, func_358(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_357(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar21))
				{
					return 0;
				}
			}
		}
		if (bVar20)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam1, &iVar47);
			bVar44 = false;
			iVar45 = 0;
			while (func_356(iVar45, &iVar46) && !bVar44)
			{
				if (iVar46 == iVar47)
				{
					bVar44 = true;
					sVar48 = func_355(iVar45);
				}
				else
				{
					iVar45++;
				}
			}
			if (bVar44)
			{
				func_354(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar48, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam1, &iVar47);
			bVar44 = false;
			iVar45 = 0;
			while (func_310(iVar45, &iVar46) && !bVar44)
			{
				if (iVar46 == iVar47)
				{
					bVar44 = true;
					sVar48 = func_353(iVar45);
				}
				else
				{
					iVar45++;
				}
			}
			if (!bVar44)
			{
				if (iVar47 == 0)
				{
					sVar48 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar44 = true;
				}
				else if (iVar47 == 132)
				{
					sVar48 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar44 = true;
				}
			}
			if (bVar44)
			{
				func_354(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar48, 65, 6, 3);
			}
		}
		if (bParam2 && bVar20)
		{
			if (!func_352(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar20)
		{
			if (!func_351(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_351(int iParam0, char* sParam1)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_352(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	char cVar16[16];
	char cVar20[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar16) || MISC::GET_HASH_KEY(&cVar16) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar20, "VEM_INSURANCE_", 64);
	StringConCat(&cVar20, &cVar16, 64);
	switch (iParam2)
	{
		case joaat("DUBSTA2"):
		case joaat("CAVALCADE2"):
		case joaat("MESA2"):
		case joaat("RAPIDGT2"):
		case joaat("EMPEROR2"):
		case 1717532765:
			StringConCat(&cVar20, "2", 64);
			break;
		case joaat("MESA3"):
		case joaat("EMPEROR3"):
		case joaat("BURRITO3"):
		case joaat("MULE3"):
			StringConCat(&cVar20, "3", 64);
			break;
		case joaat("TORNADO4"):
			StringConCat(&cVar20, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar20)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar20), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
		case 1:
			return "BLUE_SILVER";
		case 2:
			return "ROLLED_STEEL";
		case 3:
			return "SHADOW_SILVER";
		case 4:
			return "WHITE";
		case 5:
			return "FROST_WHITE";
		case 6:
			return "CREAM";
		case 7:
			return "SIENNA_BROWN";
		case 8:
			return "SADDLE_BROWN";
		case 9:
			return "MOSS_BROWN";
		case 10:
			return "WOODBEECH_BROWN";
		case 11:
			return "STRAW_BROWN";
		case 12:
			return "SANDY_BROWN";
		case 13:
			return "BLEECHED_BROWN";
		case 14:
			return "GOLD";
		case 15:
			return "BRONZE";
		case 16:
			return "YELLOW";
		case 17:
			return "RACE_YELLOW";
		case 18:
			return "FLUR_YELLOW";
		case 19:
			return "ORANGE";
		case 20:
			return "BRIGHT_ORANGE";
		case 21:
			return "SUNRISE_ORANGE";
		case 22:
			return "RED";
		case 23:
			return "TORINO_RED";
		case 24:
			return "FORMULA_RED";
		case 25:
			return "LAVA_RED";
		case 26:
			return "BLAZE_RED";
		case 27:
			return "GRACE_RED";
		case 28:
			return "GARNET_RED";
		case 29:
			return "CANDY_RED";
		case 30:
			return "HOT PINK";
		case 31:
			return "PINK";
		case 32:
			return "SALMON_PINK";
		case 33:
			return "PURPLE";
		case 34:
			return "BRIGHT_PURPLE";
		case 35:
			return "SAXON_BLUE";
		case 36:
			return "BLUE";
		case 37:
			return "MARINER_BLUE";
		case 38:
			return "HARBOR_BLUE";
		case 39:
			return "DIAMOND_BLUE";
		case 40:
			return "SURF_BLUE";
		case 41:
			return "NAUTICAL_BLUE";
		case 42:
			return "RACING_BLUE";
		case 43:
			return "ULTRA_BLUE";
		case 44:
			return "LIGHT_BLUE";
		case 45:
			return "SEA_GREEN";
		case 46:
			return "BRIGHT_GREEN";
		case 47:
			return "PETROL_GREEN";
		case 48:
			return "LIME_GREEN";
	}
	return "";
}

int func_354(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		StringCopy(&cVar16, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar16, iParam4, 64);
		StringConCat(&cVar16, "_", 64);
		StringConCat(&cVar16, sParam2, 64);
		StringConCat(&cVar16, "_t", 64);
		StringIntConCat(&cVar16, iParam3, 64);
		StringConCat(&cVar16, "_v", 64);
		StringIntConCat(&cVar16, iParam5, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
		case 1:
			return "GRAPHITE";
		case 2:
			return "ANTHR_BLACK";
		case 3:
			return "BLACK_STEEL";
		case 4:
			return "DARK_SILVER";
		case 5:
			return "BLUE_SILVER";
		case 6:
			return "ROLLED_STEEL";
		case 7:
			return "SHADOW_SILVER";
		case 8:
			return "STONE_SILVER";
		case 9:
			return "MIDNIGHT_SILVER";
		case 10:
			return "CAST_IRON_SIL";
		case 11:
			return "RED";
		case 12:
			return "TORINO_RED";
		case 13:
			return "LAVA_RED";
		case 14:
			return "BLAZE_RED";
		case 15:
			return "GRACE_RED";
		case 16:
			return "GARNET_RED";
		case 17:
			return "SUNSET_RED";
		case 18:
			return "CABERNET_RED";
		case 19:
			return "WINE_RED";
		case 20:
			return "CANDY_RED";
		case 21:
			return "PINK";
		case 22:
			return "SALMON_PINK";
		case 23:
			return "SUNRISE_ORANGE";
		case 24:
			return "ORANGE";
		case 25:
			return "BRIGHT_ORANGE";
		case 26:
			return "BRONZE";
		case 27:
			return "YELLOW";
		case 28:
			return "RACE_YELLOW";
		case 29:
			return "FLUR_YELLOW";
		case 30:
			return "DARK_GREEN";
		case 31:
			return "RACING_GREEN";
		case 32:
			return "SEA_GREEN";
		case 33:
			return "OLIVE_GREEN";
		case 34:
			return "BRIGHT_GREEN";
		case 35:
			return "PETROL_GREEN";
		case 36:
			return "LIME_GREEN";
		case 37:
			return "MIDNIGHT_BLUE";
		case 38:
			return "GALAXY_BLUE";
		case 39:
			return "DARK_BLUE";
		case 40:
			return "SAXON_BLUE";
		case 41:
			return "MARINER_BLUE";
		case 42:
			return "HARBOR_BLUE";
		case 43:
			return "DIAMOND_BLUE";
		case 44:
			return "SURF_BLUE";
		case 45:
			return "NAUTICAL_BLUE";
		case 46:
			return "RACING_BLUE";
		case 47:
			return "ULTRA_BLUE";
		case 48:
			return "LIGHT_BLUE";
		case 49:
			return "CHOCOLATE_BROWN";
		case 50:
			return "BISON_BROWN";
		case 51:
			return "CREEK_BROWN";
		case 52:
			return "UMBER_BROWN";
		case 53:
			return "MAPLE_BROWN";
		case 54:
			return "BEECHWOOD_BROWN";
		case 55:
			return "SIENNA_BROWN";
		case 56:
			return "SADDLE_BROWN";
		case 57:
			return "MOSS_BROWN";
		case 58:
			return "WOODBEECH_BROWN";
		case 59:
			return "STRAW_BROWN";
		case 60:
			return "SANDY_BROWN";
		case 61:
			return "BLEECHED_BROWN";
		case 62:
			return "SPIN_PURPLE";
		case 63:
			return "MIGHT_PURPLE";
		case 64:
			return "BRIGHT_PURPLE";
		case 65:
			return "CREAM";
		case 66:
			return "WHITE";
		case 67:
			return "FROST_WHITE";
	}
	return "";
}

bool func_356(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		case 2:
			*iParam1 = 11;
			break;
		case 3:
			*iParam1 = 2;
			break;
		case 4:
			*iParam1 = 3;
			break;
		case 5:
			*iParam1 = 5;
			break;
		case 6:
			*iParam1 = 6;
			break;
		case 7:
			*iParam1 = 7;
			break;
		case 8:
			*iParam1 = 8;
			break;
		case 9:
			*iParam1 = 9;
			break;
		case 10:
			*iParam1 = 10;
			break;
		case 11:
			*iParam1 = 27;
			break;
		case 12:
			*iParam1 = 28;
			break;
		case 13:
			*iParam1 = 150;
			break;
		case 14:
			*iParam1 = 30;
			break;
		case 15:
			*iParam1 = 31;
			break;
		case 16:
			*iParam1 = 32;
			break;
		case 17:
			*iParam1 = 33;
			break;
		case 18:
			*iParam1 = 34;
			break;
		case 19:
			*iParam1 = 143;
			break;
		case 20:
			*iParam1 = 35;
			break;
		case 21:
			*iParam1 = 137;
			break;
		case 22:
			*iParam1 = 136;
			break;
		case 23:
			*iParam1 = 36;
			break;
		case 24:
			*iParam1 = 38;
			break;
		case 25:
			*iParam1 = 138;
			break;
		case 26:
			*iParam1 = 90;
			break;
		case 27:
			*iParam1 = 88;
			break;
		case 28:
			*iParam1 = 89;
			break;
		case 29:
			*iParam1 = 91;
			break;
		case 30:
			*iParam1 = 49;
			break;
		case 31:
			*iParam1 = 50;
			break;
		case 32:
			*iParam1 = 51;
			break;
		case 33:
			*iParam1 = 52;
			break;
		case 34:
			*iParam1 = 53;
			break;
		case 35:
			*iParam1 = 54;
			break;
		case 36:
			*iParam1 = 92;
			break;
		case 37:
			*iParam1 = 141;
			break;
		case 38:
			*iParam1 = 61;
			break;
		case 39:
			*iParam1 = 62;
			break;
		case 40:
			*iParam1 = 63;
			break;
		case 41:
			*iParam1 = 65;
			break;
		case 42:
			*iParam1 = 66;
			break;
		case 43:
			*iParam1 = 67;
			break;
		case 44:
			*iParam1 = 68;
			break;
		case 45:
			*iParam1 = 69;
			break;
		case 46:
			*iParam1 = 73;
			break;
		case 47:
			*iParam1 = 70;
			break;
		case 48:
			*iParam1 = 74;
			break;
		case 49:
			*iParam1 = 96;
			break;
		case 50:
			*iParam1 = 101;
			break;
		case 51:
			*iParam1 = 95;
			break;
		case 52:
			*iParam1 = 94;
			break;
		case 53:
			*iParam1 = 97;
			break;
		case 54:
			*iParam1 = 103;
			break;
		case 55:
			*iParam1 = 104;
			break;
		case 56:
			*iParam1 = 98;
			break;
		case 57:
			*iParam1 = 100;
			break;
		case 58:
			*iParam1 = 102;
			break;
		case 59:
			*iParam1 = 99;
			break;
		case 60:
			*iParam1 = 105;
			break;
		case 61:
			*iParam1 = 106;
			break;
		case 62:
			*iParam1 = 72;
			break;
		case 63:
			*iParam1 = 146;
			break;
		case 64:
			*iParam1 = 145;
			break;
		case 65:
			*iParam1 = 107;
			break;
		case 66:
			*iParam1 = 111;
			break;
		case 67:
			*iParam1 = 112;
			break;
	}
	return *iParam1 != -1;
}

int func_357(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WINDSOR"):
			return 1;
	}
	return -1;
}

int func_359(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar16, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_360(bool bParam0, bool bParam1, bool bParam2)
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_361(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar16, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("STRIKEFORCE"):
		case joaat("SEASPARROW"):
		case -365873403:
		case 295054921:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_363(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314053 && iParam1 == Global_1314054) && iParam2 == Global_1314055)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_365())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_364())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_364()
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_365()
{
	return DLC::IS_DLC_PRESENT(42019760);
}

bool func_366(int iParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	*uParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_367(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 8:
			iVar0 = 5;
			break;
		case 122:
			iVar0 = 6;
			break;
		case 27:
			iVar0 = 7;
			break;
		case 30:
			iVar0 = 8;
			break;
		case 45:
			iVar0 = 9;
			break;
		case 35:
			iVar0 = 10;
			break;
		case 33:
			iVar0 = 11;
			break;
		case 136:
			iVar0 = 12;
			break;
		case 135:
			iVar0 = 13;
			break;
		case 36:
			iVar0 = 14;
			break;
		case 41:
			iVar0 = 15;
			break;
		case 138:
			iVar0 = 16;
			break;
		case 37:
			iVar0 = 17;
			break;
		case 99:
			iVar0 = 18;
			break;
		case 90:
			iVar0 = 19;
			break;
		case 95:
			iVar0 = 20;
			break;
		case 115:
			iVar0 = 21;
			break;
		case 109:
			iVar0 = 22;
			break;
		case 153:
			iVar0 = 23;
			break;
		case 154:
			iVar0 = 24;
			break;
		case 88:
			iVar0 = 25;
			break;
		case 89:
			iVar0 = 26;
			break;
		case 91:
			iVar0 = 27;
			break;
		case 55:
			iVar0 = 28;
			break;
		case 125:
			iVar0 = 29;
			break;
		case 53:
			iVar0 = 30;
			break;
		case 56:
			iVar0 = 31;
			break;
		case 151:
			iVar0 = 32;
			break;
		case 82:
			iVar0 = 33;
			break;
		case 64:
			iVar0 = 34;
			break;
		case 87:
			iVar0 = 35;
			break;
		case 70:
			iVar0 = 36;
			break;
		case 140:
			iVar0 = 37;
			break;
		case 81:
			iVar0 = 38;
			break;
		case 145:
			iVar0 = 39;
			break;
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_368(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar16 = func_369(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar16))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, iVar16, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_369(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_370(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	iVar32 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar32 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar16, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar16, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar16, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar32), 64);
	}
	StringConCat(&cVar16, "_t19_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_371(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_372(int iParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = "";
	iVar1 = iParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INDEP_HORN_1"):
			return 1;
		case joaat("INDEP_HORN_2"):
			return 2;
		case joaat("INDEP_HORN_3"):
			return 3;
		case joaat("INDEP_HORN_4"):
			return 4;
		case joaat("HIPSTER_HORN_1"):
			return 5;
		case joaat("HIPSTER_HORN_2"):
			return 6;
		case joaat("HIPSTER_HORN_3"):
			return 7;
		case joaat("HIPSTER_HORN_4"):
			return 8;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_C0"):
			return 9;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_D0"):
			return 10;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_E0"):
			return 11;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_F0"):
			return 12;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_G0"):
			return 13;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_A0"):
			return 14;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_B0"):
			return 15;
		case joaat("DLC_BUSI2_C_MAJOR_NOTES_C1"):
			return 16;
		case joaat("MUSICAL_HORN_BUSINESS_1"):
			return 17;
		case joaat("MUSICAL_HORN_BUSINESS_2"):
			return 18;
		case joaat("MUSICAL_HORN_BUSINESS_3"):
			return 19;
		case joaat("MUSICAL_HORN_BUSINESS_4"):
			return 20;
		case joaat("MUSICAL_HORN_BUSINESS_5"):
			return 21;
		case joaat("MUSICAL_HORN_BUSINESS_6"):
			return 22;
		case joaat("MUSICAL_HORN_BUSINESS_7"):
			return 23;
		case joaat("LUXE_HORN_2"):
			return 24;
		case joaat("LUXE_HORN_1"):
			return 25;
		case joaat("LUXE_HORN_3"):
			return 26;
		case joaat("LUXURY_HORN_2"):
			return 27;
		case joaat("LUXORY_HORN_1"):
			return 28;
		case joaat("LUXURY_HORN_3"):
			return 29;
		case joaat("LOWRIDER_HORN_1"):
			return 30;
		case joaat("LOWRIDER_HORN_2"):
			return 31;
		case joaat("LOWRIDER_HORN_1_PREVIEW"):
			return 32;
		case joaat("LOWRIDER_HORN_2_PREVIEW"):
			return 33;
		case joaat("ORGAN_HORN_LOOP_01"):
			return 34;
		case joaat("ORGAN_HORN_LOOP_02"):
			return 35;
		case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
			return 36;
		case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
			return 37;
		case joaat("XM15_HORN_01"):
			return 38;
		case joaat("XM15_HORN_02"):
			return 39;
		case joaat("XM15_HORN_03"):
			return 40;
		case joaat("XM15_HORN_01_PREVIEW"):
			return 41;
		case joaat("XM15_HORN_02_PREVIEW"):
			return 42;
		case joaat("XM15_HORN_03_PREVIEW"):
			return 43;
		case joaat("HORN_CLOWN"):
			return 46;
		case joaat("HORN_COP"):
			return 45;
		case joaat("HORN_TRUCK"):
			return 44;
		case joaat("HORN_MUSICAL_1"):
			return 47;
		case joaat("HORN_MUSICAL_2"):
			return 48;
		case joaat("HORN_MUSICAL_3"):
			return 49;
		case joaat("HORN_MUSICAL_4"):
			return 50;
		case joaat("HORN_MUSICAL_5"):
			return 51;
		case joaat("HORN_SAD_TROMBONE"):
			return 52;
		case joaat("DLC_AW_AIRHORN_01"):
			return 53;
		case joaat("DLC_AW_AIRHORN_02"):
			return 54;
		case joaat("DLC_AW_AIRHORN_03"):
			return 55;
		case joaat("DLC_AW_AIRHORN_01_PREVIEW"):
			return 56;
		case joaat("DLC_AW_AIRHORN_02_PREVIEW"):
			return 57;
		case joaat("DLC_AW_AIRHORN_03_PREVIEW"):
			return 58;
	}
	return 0;
}

int func_374(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !MISC::IS_BIT_SET(Global_4269483[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar16, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar16, "_n", 64);
		StringIntConCat(&cVar16, iParam6, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_376(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("REVOLTER"):
		case joaat("SAVESTRA"):
		case joaat("COMET4"):
		case joaat("VISERIS"):
			iVar0 = 1;
			break;
		case joaat("AVENGER"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FACTION3"):
			return 12;
		case joaat("DIABLOUS"):
			return 4;
		case joaat("FCR"):
			return 4;
	}
	return func_390(iParam0);
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BTYPE2"):
			return 9;
		case joaat("LURCHER"):
			return 8;
		case joaat("SULTANRS"):
			return 6;
		case joaat("BANSHEE2"):
			return 7;
		case joaat("BTYPE3"):
			return 5;
		case joaat("OMNIS"):
			return 13;
		case joaat("BF400"):
			return 14;
		case joaat("TROPOS"):
			return 15;
		case joaat("BRIOSO"):
			return 16;
		case joaat("TROPHYTRUCK"):
			return 17;
		case joaat("TROPHYTRUCK2"):
			return 18;
		case joaat("CLIFFHANGER"):
			return 19;
		case joaat("TAMPA2"):
			return 20;
		case joaat("GARGOYLE"):
			return 21;
		case joaat("LE7B"):
			return 22;
		case joaat("LYNX"):
			return 24;
		case joaat("SHEAVA"):
			return 25;
		case joaat("DIABLOUS2"):
			return 28;
		case joaat("FCR2"):
			return 28;
		case joaat("ITALIGTB2"):
			return 27;
		case joaat("SPECTER2"):
			return 27;
		case joaat("NERO2"):
			return 27;
		case joaat("COMET3"):
			return 26;
		case joaat("ELEGY"):
			return 26;
		case joaat("TRAILERLARGE"):
			return 32;
		case joaat("RCBANDITO"):
			return 39;
		case 1802742206:
		case -2122646867:
		case 1717532765:
		case 1107404867:
		case 67753863:
		case -913589546:
			return 27;
	}
	if (func_381(iParam0))
	{
		return 33;
	}
	else if (func_380(iParam0))
	{
		return 34;
	}
	if (func_379(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCARAB"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("MONSTER3"):
		case joaat("DOMINATOR4"):
		case joaat("IMPALER2"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("DEATHBIKE"):
		case joaat("ZR380"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HUNTER"):
		case joaat("BOMBUSHKA"):
		case joaat("VOLATOL"):
		case joaat("AKULA"):
		case joaat("KHANJALI"):
		case joaat("STRIKEFORCE"):
		case -365873403:
		case 295054921:
			return 1;
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAVOK"):
		case joaat("MICROLIGHT"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("SEABREEZE"):
		case joaat("TULA"):
		case joaat("PYRO"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("STARLING"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("CUBAN800"):
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
		case 1229411063:
			return 1;
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VIRGO2"):
			return 10;
		case joaat("SLAMVAN3"):
			return 11;
	}
	switch (iParam0)
	{
		case joaat("SULTANRS"):
			return 6;
		case joaat("BANSHEE2"):
			return 7;
	}
	switch (iParam0)
	{
		case joaat("BTYPE3"):
			return 5;
	}
	switch (iParam0)
	{
		case joaat("FACTION3"):
			return 3;
		case joaat("MINIVAN2"):
			return 3;
		case joaat("SABREGT2"):
			return 3;
		case joaat("SLAMVAN3"):
			return 3;
		case joaat("TORNADO5"):
			return 3;
		case joaat("VIRGO2"):
			return 3;
	}
	switch (iParam0)
	{
		case joaat("DIABLOUS2"):
			return 28;
		case joaat("FCR2"):
			return 28;
		case joaat("ITALIGTB2"):
			return 27;
		case joaat("SPECTER2"):
			return 27;
		case joaat("NERO2"):
			return 27;
		case joaat("COMET3"):
			return 26;
		case joaat("ELEGY"):
			return 26;
		case joaat("RCBANDITO"):
			return 39;
		case 1802742206:
		case -2122646867:
		case 1717532765:
		case 1107404867:
		case 67753863:
		case -913589546:
			return 27;
	}
	if (func_379(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VIRGO2"):
			return 10;
		case joaat("SLAMVAN3"):
			return 11;
	}
	switch (iParam0)
	{
		case joaat("SULTANRS"):
			return 6;
		case joaat("BANSHEE2"):
			return 7;
	}
	switch (iParam0)
	{
		case joaat("BTYPE3"):
			return 5;
	}
	switch (iParam0)
	{
		case joaat("FACTION3"):
			return 3;
		case joaat("MINIVAN2"):
			return 0;
		case joaat("SABREGT2"):
			return 0;
		case joaat("SLAMVAN3"):
			return 0;
		case joaat("TORNADO5"):
			return 0;
		case joaat("VIRGO2"):
			return 3;
		case joaat("VIRGO3"):
			return 3;
	}
	switch (iParam0)
	{
		case joaat("FCR"):
			return 0;
		case joaat("DIABLOUS"):
			return 0;
		case joaat("DIABLOUS2"):
			return 28;
		case joaat("FCR2"):
			return 28;
		case joaat("ITALIGTB"):
			return 3;
		case joaat("SPECTER"):
			return 3;
		case joaat("NERO"):
			return 3;
		case joaat("ITALIGTB2"):
			return 27;
		case joaat("SPECTER2"):
			return 27;
		case joaat("NERO2"):
			return 27;
		case joaat("COMET3"):
			return 26;
		case joaat("ELEGY"):
			return 26;
		case 1802742206:
			return 27;
		case -2122646867:
			return 27;
		case 1717532765:
			return 27;
		case 1107404867:
			return 27;
		case 67753863:
			return 27;
		case -913589546:
			return 27;
	}
	switch (iParam0)
	{
		case joaat("APC"):
			return 29;
		case joaat("HALFTRACK"):
			return 29;
		case joaat("TRAILERSMALL2"):
			return 29;
		case joaat("DELUXO"):
			return 29;
		case joaat("STROMBERG"):
			return 29;
		case joaat("CARACARA"):
			return 29;
		case joaat("DUNE3"):
			return 30;
		case joaat("INSURGENT3"):
			return 30;
		case joaat("TAMPA3"):
			return 30;
		case joaat("TECHNICAL3"):
			return 30;
		case joaat("OPPRESSOR"):
			return 31;
		case joaat("OPPRESSOR2"):
			return 31;
		case joaat("PHANTOM3"):
			return 32;
		case joaat("HAULER2"):
			return 32;
		case joaat("TRAILERLARGE"):
			return 32;
		case joaat("BARRAGE"):
			return 35;
		case joaat("MULE4"):
			return 37;
		case joaat("SPEEDO4"):
			return 36;
		case joaat("POUNDER2"):
			return 36;
		case joaat("RCBANDITO"):
			return 39;
		case -1254331310:
			return 36;
		case 394110044:
			return 36;
	}
	if (func_381(iParam0))
	{
		return 33;
	}
	else if (func_380(iParam0))
	{
		return 34;
	}
	else if (func_379(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("VIGILANTE"):
			return 31;
	}
	if (func_384(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("ADDER"):
			return 3;
		case joaat("AIRBUS"):
			return 0;
		case joaat("AKUMA"):
			return 4;
		case joaat("ALPHA"):
			return 3;
		case joaat("ANNIHILATOR"):
			return 0;
		case joaat("ASEA"):
			return 0;
		case joaat("ASTEROPE"):
			return 0;
		case joaat("BALLER2"):
			return 2;
		case joaat("BANSHEE"):
			return 3;
		case joaat("BARRACKS"):
			return 0;
		case joaat("BATI"):
			return 4;
		case joaat("BATI2"):
			return 4;
		case joaat("BESRA"):
			return 0;
		case joaat("BFINJECTION"):
			return 0;
		case joaat("BIFTA"):
			return 0;
		case joaat("BISON"):
			return 2;
		case joaat("BLADE"):
			return 3;
		case joaat("BLAZER"):
			return 0;
		case joaat("BLAZER3"):
			return 0;
		case joaat("BMX"):
			return 0;
		case joaat("BOBCATXL"):
			return 2;
		case joaat("BODHI2"):
			return 0;
		case joaat("BTYPE"):
			return 0;
		case joaat("BUFFALO"):
			return 0;
		case joaat("BUFFALO2"):
			return 1;
		case joaat("BULLET"):
			return 3;
		case joaat("BUS"):
			return 0;
		case joaat("BUZZARD"):
			return 0;
		case joaat("CARBONIZZARE"):
			return 3;
		case joaat("CARBONRS"):
			return 3;
		case joaat("CAVALCADE"):
			return 2;
		case joaat("CAVALCADE2"):
			return 2;
		case joaat("CHEETAH"):
			return 3;
		case joaat("COACH"):
			return 0;
		case joaat("COGCABRIO"):
			return 3;
		case joaat("COMET2"):
			return 3;
		case joaat("COQUETTE"):
			return 3;
		case joaat("COQUETTE2"):
			return 1;
		case joaat("CRUISER"):
			return 0;
		case joaat("CRUSADER"):
			return 0;
		case joaat("CUBAN800"):
			return 0;
		case joaat("DILETTANTE"):
			return 0;
		case joaat("DILETTANTE2"):
			return 0;
		case joaat("DOMINATOR"):
			return 1;
		case joaat("DOMINATOR2"):
			return 1;
		case joaat("DOUBLE"):
			return 4;
		case joaat("DUBSTA3"):
			return 3;
		case joaat("DUMP"):
			return 0;
		case joaat("DUNE"):
			return 0;
		case joaat("DUSTER"):
			return 0;
		case joaat("ELEGY2"):
			return 3;
		case joaat("ENTITYXF"):
			return 3;
		case joaat("EXEMPLAR"):
			return 3;
		case joaat("F620"):
			return 1;
		case joaat("FAGGIO2"):
			return 4;
		case joaat("FELON"):
			return 0;
		case joaat("FELON2"):
			return 0;
		case joaat("FELTZER2"):
			return 3;
		case joaat("FROGGER"):
			return 0;
		case joaat("FROGGER2"):
			return 0;
		case joaat("FUGITIVE"):
			return 0;
		case joaat("FUSILADE"):
			return 1;
		case joaat("GAUNTLET"):
			return 0;
		case joaat("GAUNTLET2"):
			return 0;
		case joaat("GLENDALE"):
			return 3;
		case joaat("GRANGER"):
			return 2;
		case joaat("GRESLEY"):
			return 2;
		case joaat("HEXER"):
			return 4;
		case joaat("HOTKNIFE"):
			return 3;
		case joaat("HUNTLEY"):
			return 1;
		case joaat("HYDRA"):
			return 0;
		case joaat("INFERNUS"):
			return 3;
		case joaat("INGOT"):
			return 0;
		case joaat("INTRUDER"):
			return 0;
		case joaat("ISSI2"):
			return 0;
		case joaat("JACKAL"):
			return 1;
		case joaat("JB700"):
			return 3;
		case joaat("JESTER"):
			return 3;
		case joaat("JESTER2"):
			return 3;
		case joaat("JETMAX"):
			return 0;
		case joaat("JOURNEY"):
			return 0;
		case joaat("KALAHARI"):
			return 0;
		case joaat("KHAMELION"):
			return 3;
		case joaat("LANDSTALKER"):
			return 2;
		case joaat("LUXOR"):
			return 0;
		case joaat("MAMMATUS"):
			return 0;
		case joaat("MARQUIS"):
			return 0;
		case joaat("MASSACRO"):
			return 3;
		case joaat("MASSACRO2"):
			return 3;
		case joaat("MAVERICK"):
			return 0;
		case joaat("MESA"):
			return 2;
		case joaat("MESA2"):
			return 2;
		case joaat("MESA3"):
			return 2;
		case joaat("MILJET"):
			return 0;
		case joaat("MINIVAN"):
			return 0;
		case joaat("MONROE"):
			return 3;
		case joaat("MONSTER"):
			return 0;
		case joaat("MULE"):
			return 0;
		case joaat("MULE2"):
			return 0;
		case joaat("MULE3"):
			return 0;
	}
	switch (iParam0)
	{
		case joaat("NEMESIS"):
			return 4;
		case joaat("NINEF"):
			return 3;
		case joaat("NINEF2"):
			return 3;
		case joaat("ORACLE"):
			return 1;
		case joaat("ORACLE2"):
			return 1;
		case joaat("PANTO"):
			return 3;
		case joaat("PARADISE"):
			return 0;
		case joaat("PCJ"):
			return 4;
		case joaat("PENUMBRA"):
			return 1;
		case joaat("PICADOR"):
			return 0;
		case joaat("PIGALLE"):
			return 3;
		case joaat("PREMIER"):
			return 0;
		case joaat("PRIMO"):
			return 0;
		case joaat("RADI"):
			return 0;
		case joaat("RANCHERXL"):
			return 2;
		case joaat("RANCHERXL2"):
			return 2;
		case joaat("RAPIDGT"):
			return 3;
		case joaat("RATLOADER"):
			return 2;
		case joaat("RATLOADER2"):
			return 2;
		case joaat("REBEL"):
			return 2;
		case joaat("REBEL2"):
			return 2;
		case joaat("REGINA"):
			return 0;
		case joaat("RENTALBUS"):
			return 0;
		case joaat("RHAPSODY"):
			return 3;
		case joaat("RHINO"):
			return 0;
		case joaat("ROCOTO"):
			return 2;
		case joaat("RUFFIAN"):
			return 4;
		case joaat("RUMPO"):
			return 0;
		case joaat("SADLER"):
			return 2;
		case joaat("SANCHEZ"):
			return 4;
		case joaat("SANCHEZ2"):
			return 4;
		case joaat("SANDKING"):
			return 2;
		case joaat("SANDKING2"):
			return 2;
		case joaat("SCHAFTER2"):
			return 1;
		case joaat("SCHWARZER"):
			return 1;
		case joaat("SCORCHER"):
			return 0;
		case joaat("SEASHARK"):
			return 0;
		case joaat("SEMINOLE"):
			return 2;
		case joaat("SENTINEL"):
			return 1;
		case joaat("SENTINEL2"):
			return 1;
		case joaat("SHAMAL"):
			return 0;
		case joaat("SOVEREIGN"):
			return 4;
		case joaat("SPEEDER"):
			return 0;
		case joaat("SQUALO"):
			return 0;
		case joaat("STANIER"):
			return 0;
		case joaat("STINGER"):
			return 3;
		case joaat("STINGERGT"):
			return 3;
		case joaat("STRATUM"):
			return 0;
		case joaat("STRETCH"):
			return 0;
		case joaat("STUNT"):
			return 0;
		case joaat("SUNTRAP"):
			return 0;
		case joaat("SUPERD"):
			return 3;
		case joaat("SURANO"):
			return 3;
		case joaat("SURFER"):
			return 0;
		case joaat("SURGE"):
			return 0;
		case joaat("TAILGATER"):
			return 0;
		case joaat("THRUST"):
			return 4;
		case joaat("TITAN"):
			return 0;
		case joaat("TRIBIKE"):
			return 4;
		case joaat("TRIBIKE2"):
			return 4;
		case joaat("TRIBIKE3"):
			return 4;
		case joaat("TROPIC"):
			return 0;
		case joaat("TURISMOR"):
			return 3;
		case joaat("VACCA"):
			return 3;
		case joaat("VADER"):
			return 4;
		case joaat("VALKYRIE"):
			return 0;
		case joaat("VELUM"):
			return 0;
		case joaat("VESTRA"):
			return 0;
		case joaat("VIGERO"):
			return 1;
		case joaat("VOLTIC"):
			return 3;
		case joaat("WARRENER"):
			return 3;
		case joaat("WASHINGTON"):
			return 0;
		case joaat("YOUGA"):
			return 2;
		case joaat("ZENTORNO"):
			return 3;
		case joaat("ZION"):
			return 1;
		case joaat("ZION2"):
			return 1;
		case joaat("ZTYPE"):
			return 3;
		case joaat("SWIFT"):
			return 0;
		case joaat("INNOVATION"):
			return 4;
		case joaat("HAKUCHOU"):
			return 4;
		case joaat("FUROREGT"):
			return 0;
		case joaat("KURUMA"):
			return 3;
		case joaat("BLISTA2"):
			return 0;
		case joaat("BLISTA3"):
			return 0;
		case joaat("BUFFALO3"):
			return 1;
		case joaat("DODO"):
			return 0;
		case joaat("DOMINATOR"):
			return 1;
		case joaat("DOMINATOR2"):
			return 1;
		case joaat("DUKES"):
			return 1;
		case joaat("DUKES2"):
			return 0;
		case joaat("MARSHALL"):
			return 0;
		case joaat("STALION"):
			return 0;
		case joaat("STALION2"):
			return 0;
		case joaat("SUBMERSIBLE"):
			return 0;
		case joaat("SUBMERSIBLE2"):
			return 0;
	}
	switch (iParam0)
	{
		case joaat("BAGGER"):
			return 4;
		case joaat("BALLER"):
			return 2;
		case joaat("BJXL"):
			return 2;
		case joaat("BLISTA"):
			return 0;
		case joaat("BLISTA2"):
			return 0;
		case joaat("BUCCANEER"):
			return 0;
		case joaat("DAEMON"):
			return 4;
		case joaat("DLOADER"):
			return 0;
		case joaat("FQ2"):
			return 0;
		case joaat("HABANERO"):
			return 0;
		case joaat("MANANA"):
			return 0;
		case joaat("PATRIOT"):
			return 2;
		case joaat("PEYOTE"):
			return 0;
		case joaat("PHOENIX"):
			return 0;
		case joaat("PRAIRIE"):
			return 0;
		case joaat("SABREGT"):
			return 0;
		case joaat("SERRANO"):
			return 2;
		case joaat("SPEEDO"):
			return 0;
		case joaat("SPEEDO2"):
			return 0;
		case joaat("VOODOO2"):
			return 0;
		case joaat("ROMERO"):
			return 0;
		case joaat("SURFER2"):
			return 0;
		case joaat("EMPEROR2"):
			return 0;
		case joaat("DUBSTA2"):
			return 2;
		case joaat("BLAZER2"):
			return 0;
		case joaat("ORACLE2"):
			return 1;
		case joaat("CAVALCADE2"):
			return 2;
		case joaat("DUBSTA"):
			return 2;
		case joaat("RAPIDGT2"):
			return 1;
		case joaat("BOXVILLE4"):
			return 0;
		case joaat("MESA"):
			return 2;
	}
	switch (iParam0)
	{
		case joaat("WINDSOR"):
		case joaat("OSIRIS"):
		case joaat("FELTZER3"):
		case joaat("VIRGO"):
			return 3;
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("MOONBEAM2"):
		case joaat("MOONBEAM"):
			return 3;
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 0;
		case joaat("BTYPE2"):
		case joaat("LURCHER"):
			return 3;
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("TYRUS"):
		case joaat("LE7B"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
		case joaat("ARDENT"):
		case joaat("CHEETAH2"):
		case joaat("TORERO"):
		case joaat("VAGNER"):
		case joaat("XA21"):
			return 3;
		case joaat("CONTENDER"):
			return 2;
		case joaat("TAMPA3"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("TRAILERSMALL2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("SENTINEL3"):
		case joaat("RIATA"):
			return 3;
		case joaat("GB200"):
		case joaat("ISSI3"):
		case joaat("SWINGER"):
		case joaat("PATRIOT2"):
		case joaat("MENACER"):
		case joaat("FREECRAWLER"):
		case joaat("STAFFORD"):
		case joaat("SCRAMJET"):
		case joaat("TERBYTE"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("ZR380"):
		case joaat("BRUTUS"):
		case joaat("LGUARD"):
		case joaat("BLAZER2"):
		case joaat("FIRETRUK"):
		case joaat("BURRITO2"):
		case joaat("BOXVILLE"):
		case joaat("STOCKADE"):
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case joaat("OUTLAW"):
		case 301304410:
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
		case -2122646867:
		case joaat("CLUB"):
		case 2134119907:
		case 1086534307:
		case 1429622905:
		case -210308634:
		case 298565713:
		case -1706603682:
		case 1861786828:
		case -276744698:
		case 1593933419:
		case -1045911276:
		case 2014313426:
		case -1149725334:
		case 1455990255:
		case 1644055914:
		case -980573366:
		case -102335483:
		case -857356038:
		case -1492917079:
		case 1107404867:
		case 67753863:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return 3;
	}
	return 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ADDER"):
		case joaat("BANSHEE"):
		case joaat("BULLET"):
		case joaat("CARBONIZZARE"):
		case joaat("CARBONRS"):
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("COMET2"):
		case joaat("COQUETTE"):
		case joaat("ELEGY2"):
		case joaat("ENTITYXF"):
		case joaat("EXEMPLAR"):
		case joaat("FELTZER2"):
		case joaat("HOTKNIFE"):
		case joaat("INFERNUS"):
		case joaat("JB700"):
		case joaat("KHAMELION"):
		case joaat("MONROE"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("RAPIDGT"):
		case joaat("RAPIDGT2"):
		case joaat("STINGER"):
		case joaat("STINGERGT"):
		case joaat("SUPERD"):
		case joaat("SURANO"):
		case joaat("VACCA"):
		case joaat("VOLTIC"):
		case joaat("ZTYPE"):
		case joaat("DUBSTA3"):
		case joaat("BLADE"):
		case joaat("GLENDALE"):
		case joaat("RHAPSODY"):
		case joaat("WARRENER"):
		case joaat("PANTO"):
		case joaat("PIGALLE"):
		case joaat("CASCO"):
		case joaat("KURUMA2"):
		case joaat("LECTRO"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("TECHNICAL"):
			return 1;
		case joaat("WINDSOR"):
		case joaat("OSIRIS"):
		case joaat("FELTZER3"):
		case joaat("VIRGO"):
			return 1;
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("MOONBEAM"):
		case joaat("MOONBEAM2"):
			return 1;
		case joaat("FACTION3"):
		case joaat("VIRGO2"):
			return 1;
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("COGNOSCENTI"):
		case joaat("COG55"):
		case joaat("LIMO2"):
		case joaat("MAMBA"):
		case joaat("NIGHTSHADE"):
		case joaat("SCHAFTER3"):
		case joaat("SCHAFTER4"):
		case joaat("VERLIERER2"):
			return 1;
		case joaat("TAMPA"):
			return 1;
		case joaat("BANSHEE2"):
			return 1;
		case joaat("BESTIAGTS"):
		case joaat("BRICKADE"):
		case joaat("FMJ"):
		case joaat("NIMBUS"):
		case joaat("PFISTER811"):
		case joaat("PROTOTIPO"):
		case joaat("RUMPO3"):
		case joaat("SEVEN70"):
		case joaat("TUG"):
		case joaat("VOLATUS"):
		case joaat("WINDSOR2"):
		case joaat("XLS"):
		case joaat("XLS2"):
		case joaat("REAPER"):
			return 1;
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("TYRUS"):
		case joaat("LE7B"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
			return 1;
		case joaat("AVARUS"):
		case joaat("DEFILER"):
		case joaat("NIGHTBLADE"):
		case joaat("ZOMBIEA"):
		case joaat("ZOMBIEB"):
		case joaat("CHIMERA"):
		case joaat("ESSKEY"):
		case joaat("RATBIKE"):
		case joaat("HAKUCHOU2"):
		case joaat("DAEMON2"):
		case joaat("SHOTARO"):
		case joaat("RAPTOR"):
		case joaat("BLAZER4"):
		case joaat("SANCTUS"):
		case joaat("VORTEX"):
		case joaat("MANCHEZ"):
		case joaat("TORNADO6"):
		case joaat("YOUGA2"):
		case joaat("WOLFSBANE"):
		case joaat("FAGGIO3"):
		case joaat("FAGGIO"):
			return 1;
		case joaat("BLAZER5"):
		case joaat("BOXVILLE5"):
		case joaat("COMET3"):
		case joaat("DIABLOUS"):
		case joaat("DIABLOUS2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("FCR"):
		case joaat("FCR2"):
		case joaat("ITALIGTB"):
		case joaat("NERO"):
		case joaat("PENETRATOR"):
		case joaat("PHANTOM2"):
		case joaat("RUINER2"):
		case joaat("TECHNICAL2"):
		case joaat("TEMPESTA"):
		case joaat("VOLTIC2"):
		case joaat("WASTELANDER"):
		case joaat("ELEGY"):
		case joaat("ITALIGTB2"):
		case joaat("NERO2"):
		case joaat("RUINER3"):
		case joaat("SPECTER"):
		case joaat("SPECTER2"):
			return 1;
		case joaat("GP1"):
		case joaat("RUSTON"):
		case joaat("INFERNUS2"):
		case joaat("TURISMO2"):
			return 1;
		case joaat("ARDENT"):
		case joaat("VAGNER"):
		case joaat("CHEETAH2"):
		case joaat("NIGHTSHARK"):
		case joaat("TORERO"):
		case joaat("XA21"):
		case joaat("TAMPA3"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("TRAILERSMALL2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
			return 1;
		case joaat("CYCLONE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
			return 1;
		case joaat("DELUXO"):
		case joaat("STROMBERG"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
		case joaat("AKULA"):
		case joaat("THRUSTER"):
		case joaat("AVENGER"):
		case joaat("BARRAGE"):
		case joaat("VOLATOL"):
		case joaat("COMET4"):
		case joaat("NEON"):
		case joaat("STREITER"):
		case joaat("SENTINEL3"):
		case joaat("YOSEMITE"):
		case joaat("SC1"):
		case joaat("AUTARCH"):
		case joaat("GT500"):
		case joaat("HUSTLER"):
		case joaat("REVOLTER"):
		case joaat("PARIAH"):
		case joaat("RAIDEN"):
		case joaat("SAVESTRA"):
		case joaat("RIATA"):
		case joaat("HERMES"):
		case joaat("COMET5"):
		case joaat("Z190"):
		case joaat("VISERIS"):
		case joaat("KAMACHO"):
			return 1;
	}
	switch (iParam0)
	{
		case joaat("GB200"):
		case joaat("ISSI3"):
		case joaat("ELLIE"):
		case joaat("FAGALOA"):
		case joaat("MICHELLI"):
		case joaat("FLASHGT"):
		case joaat("HOTRING"):
		case joaat("TEZERACT"):
		case joaat("TYRANT"):
		case joaat("DOMINATOR3"):
		case joaat("TAIPAN"):
		case joaat("ENTITY2"):
		case joaat("JESTER3"):
		case joaat("CHEBUREK"):
		case joaat("CARACARA"):
		case joaat("SEASPARROW"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("RCBANDITO"):
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case joaat("LOCUST"):
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -208911803:
		case -447711397:
		case 1416466158:
		case joaat("SLAMVAN2"):
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case joaat("OUTLAW"):
		case 301304410:
		case 740289177:
		case -1960756985:
		case -1254331310:
		case -2122646867:
		case 2134119907:
		case joaat("CLUB"):
		case 1107404867:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
		case 1086534307:
		case 1429622905:
		case -210308634:
		case 298565713:
		case -365873403:
		case -1706603682:
		case 1861786828:
		case -276744698:
		case 1229411063:
		case 1593933419:
		case -1045911276:
		case 2014313426:
		case 1336872304:
		case -1149725334:
		case 1455990255:
		case 1644055914:
		case -980573366:
		case 295054921:
		case -102335483:
		case -857356038:
		case -1492917079:
			return 1;
	}
	return 0;
}

int func_385(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_386(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_387(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char cVar0[64];
	char cVar16[64];

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar16, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar16, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar16, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar16, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar16, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar16, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar16, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar16, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar16, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar16, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar16, "MCT_NONE_", 64);
	}
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar16, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar16, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_388(int iParam0, int* iParam1, char* sParam2, int* iParam3, int* iParam4, char* sParam5, int* iParam6, int iParam7, char* sParam8, int* iParam9, int* iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;

	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, iParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, true);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *iParam10);
}

int func_389(int iParam0)
{
	if (iParam0 == joaat("BMX"))
	{
		return 1;
	}
	if (iParam0 == joaat("CRUISER"))
	{
		return 1;
	}
	if (iParam0 == joaat("SCORCHER"))
	{
		return 1;
	}
	if ((iParam0 == joaat("TRIBIKE") || iParam0 == joaat("TRIBIKE2")) || iParam0 == joaat("TRIBIKE3"))
	{
		return 1;
	}
	if (iParam0 == joaat("FIXTER"))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("MOONBEAM2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
		case joaat("BTYPE3"):
		case joaat("FACTION3"):
		case joaat("MINIVAN2"):
		case joaat("SABREGT2"):
		case joaat("SLAMVAN3"):
		case joaat("TORNADO5"):
		case joaat("VIRGO2"):
		case joaat("DIABLOUS2"):
		case joaat("FCR2"):
		case joaat("ITALIGTB2"):
		case joaat("SPECTER2"):
		case joaat("NERO2"):
		case joaat("COMET3"):
		case joaat("ELEGY"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("TRAILERSMALL2"):
		case joaat("DUNE3"):
		case joaat("INSURGENT3"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("OPPRESSOR"):
		case joaat("TRAILERLARGE"):
		case joaat("HAULER2"):
		case joaat("PHANTOM3"):
		case joaat("BOMBUSHKA"):
		case joaat("HUNTER"):
		case joaat("MICROLIGHT"):
		case joaat("ROGUE"):
		case joaat("TULA"):
		case joaat("HAVOK"):
		case joaat("MOGUL"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("CYCLONE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("PYRO"):
		case joaat("CUBAN800"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("AVENGER"):
		case joaat("BARRAGE"):
		case joaat("CHERNOBOG"):
		case joaat("DELUXO"):
		case joaat("KHANJALI"):
		case joaat("RIOT2"):
		case joaat("STROMBERG"):
		case joaat("THRUSTER"):
		case joaat("CARACARA"):
		case joaat("SEASPARROW"):
		case joaat("MULE4"):
		case joaat("POUNDER2"):
		case joaat("SPEEDO4"):
		case joaat("OPPRESSOR2"):
		case joaat("STRIKEFORCE"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("ZR380"):
		case joaat("BRUTUS"):
		case joaat("RCBANDITO"):
		case 394110044:
		case -1254331310:
		case 340154634:
		case -1960756985:
		case 1802742206:
		case -2122646867:
		case 1717532765:
		case 1107404867:
		case 67753863:
		case -913589546:
		case 1229411063:
		case -365873403:
		case 295054921:
			return 3;
	}
	if (func_379(iParam0))
	{
		return 3;
	}
	return func_383(iParam0);
}

int func_391(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	iVar0 = func_383(iParam0);
	StringCopy(&Var1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
	if (bParam1)
	{
		func_392(&uVar5, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, iParam3);
	}
	else
	{
		func_392(&uVar5, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, iParam3);
	}
	return MISC::GET_HASH_KEY(&uVar5);
}

void func_392(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401: /* GXTEntry: "Round" */
		case -2016195117: /* GXTEntry: "Rounds" */
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		case -414529079: /* GXTEntry: "Cartridge" */
		case -1253005183: /* GXTEntry: "Cartridges" */
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		case 336264847: /* GXTEntry: "Rocket" */
		case -1119195824: /* GXTEntry: "Rockets" */
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		case 531395379: /* GXTEntry: "Charge" */
		case -672224483: /* GXTEntry: "Charges" */
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		case 1034118160: /* GXTEntry: "Grenade" */
		case 600999375: /* GXTEntry: "Grenades" */
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		case -218834291: /* GXTEntry: "Bomb" */
		case -859056265: /* GXTEntry: "Bombs" */
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		case 1779531303: /* GXTEntry: "Firework" */
		case 82051787: /* GXTEntry: "Fireworks" */
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		case 1:
			if (iParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		case 2:
			if (iParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		case 4:
			if (iParam5 == Global_74009)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_74010)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_74011)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_74012)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_74013)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == func_393())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case joaat("FCR2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					case joaat("DIABLOUS2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					case joaat("COMET3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
					}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_393()
{
	return 1336872304;
}

int func_394(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_395()
{
	if (((func_114() == -1 && Global_2515390 == -1) && Global_2515377 == -1) && Global_2515378 != 2)
	{
		return 1;
	}
	return 0;
}

int func_396(int iParam0)
{
	if (func_397(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 6);
	}
	return 0;
}

int func_397(int iParam0)
{
	int iVar0;

	func_399(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 307) && !func_398(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
	}
	return 0;
}

void func_399(int iParam0, int iParam1)
{
	int iVar0;

	*iParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 307)
		{
			if (iParam0 == (Global_1672964[iVar0] - 1))
			{
				*iParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_400()
{
	return Global_2440049.f_502.f_49;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TECHNICAL2"):
		case joaat("BOXVILLE5"):
		case joaat("WASTELANDER"):
		case joaat("PHANTOM2"):
		case joaat("VOLTIC2"):
		case joaat("DUNE5"):
		case joaat("RUINER2"):
		case joaat("BLAZER5"):
			return 1;
	}
	return 0;
}

int func_402()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_403()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_404(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;

	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_6(PLAYER::PLAYER_ID(), 1, 1)) || func_519()) || Global_1312809) || Global_2452679.f_3475.f_32)
	{
		*iParam1 = -1;
		func_518(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_517();
	func_84();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, true);
		PAD::ENABLE_CONTROL_ACTION(2, 238, true);
		PAD::ENABLE_CONTROL_ACTION(2, 242, true);
		PAD::ENABLE_CONTROL_ACTION(2, 241, true);
		PAD::DISABLE_CONTROL_ACTION(2, 2, true);
		PAD::DISABLE_CONTROL_ACTION(2, 1, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_514(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_314), 1);
	if (func_512(0, iParam5, 0))
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_314, 0))
			{
				func_456(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_314), 0);
				func_448(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_417(1, iParam5, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_416(8, -1)) && !Global_2451787.f_782.f_5)
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (func_415())
					{
						if (uParam0->f_310 == 0)
						{
							if (Global_4269756 != uParam0->f_311)
							{
								uParam0->f_311 = Global_4269756;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4269756 != uParam0->f_312)
						{
							uParam0->f_312 = Global_4269756;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || func_414()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_310 == 0)
						{
							uParam0->f_319 = 0;
							if (uParam0->f_311 >= 0 && uParam0->f_1[uParam0->f_311] >= 0)
							{
								*uParam2 = func_520(1, 0, iParam3, func_410(uParam0->f_1[uParam0->f_311], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_409(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_528(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_314), 0);
									func_518(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_311 < 0)
							{
							}
							if (uParam0->f_311 < 0)
							{
								uParam0->f_319 = 0;
							}
							else
							{
								uParam0->f_319 = uParam0->f_1[uParam0->f_311];
							}
							uParam0->f_310 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							bVar1 = true;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_317, 2) && !MISC::IS_BIT_SET(uParam0->f_309, uParam0->f_312))
						{
							func_408(-1);
							func_407(176, "BB_YES", -1);
							func_407(177, "BB_NO", -1);
							MISC::SET_BIT(&(uParam0->f_317), 2);
						}
						else if (uParam0->f_312 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_312];
							func_409(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_528(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_314), 0);
								func_518(uParam0, iParam5, 0);
							}
							else
							{
								func_518(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_317), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 201) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_317), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 1))
				{
					if ((((func_406() || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || (func_402() && Global_4269756 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_310 == 0)
						{
							func_448(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_417(1, iParam5, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
							func_518(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_314), 7);
							return 1;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
						{
							uParam0->f_310 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
						}
						else
						{
							func_408(-1);
							func_407(176, "BB_SELECT", -1);
							func_407(177, "BB_BACK", -1);
							MISC::CLEAR_BIT(&(uParam0->f_317), 2);
						}
						MISC::SET_BIT(&(uParam0->f_317), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2, 202) && !PAD::IS_CONTROL_PRESSED(2, 238)) && !func_406())
				{
					MISC::CLEAR_BIT(&(uParam0->f_317), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_317, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))
						{
							if (uParam0->f_310 == 0)
							{
								uParam0->f_311 = (uParam0->f_311 - 1);
							}
							else
							{
								uParam0->f_312 = (uParam0->f_312 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_317), 4);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							func_71(&(uParam0->f_315));
						}
					}
					else if (func_405(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_317), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_317, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))
						{
							if (uParam0->f_310 == 0)
							{
								uParam0->f_311++;
							}
							else
							{
								uParam0->f_312++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_317), 5);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							func_71(&(uParam0->f_315));
						}
					}
					else if (func_405(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_317), 5);
					}
				}
				if (uParam0->f_310 == 0)
				{
					if (uParam0->f_311 >= uParam0->f_313)
					{
						uParam0->f_311 = 0;
					}
					if (uParam0->f_311 < 0)
					{
						uParam0->f_311 = (uParam0->f_313 - 1);
					}
				}
				else
				{
					if (uParam0->f_312 >= uParam0->f_313)
					{
						uParam0->f_312 = 0;
					}
					if (uParam0->f_312 < 0)
					{
						uParam0->f_312 = (uParam0->f_313 - 1);
					}
				}
				func_448(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_417(1, iParam5, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_405(var uParam0, int iParam1)
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_72(&(uParam0->f_315), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_406()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_407(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_408(int iParam0)
{
	int iVar0;
	int iVar1;

	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22550.f_5052 = 0;
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_105(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10165)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1672964[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_18();
	}
	if (iParam0 == 7 && !Global_262145.f_16992)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_292(iParam0);
		if (iVar1 == 0 && func_21(5394, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_413(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_412(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_411(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388203[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2590566[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2590417[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_411(int iParam0)
{
	return func_21(9513, iParam0, 0) != 0;
}

int func_412(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

bool func_413(int iParam0)
{
	if (!Global_262145.f_23676)
	{
		return false;
	}
	return func_21(7208, iParam0, 0) != 0;
}

int func_414()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_415()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4269756 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_416(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

void func_417(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;

	if (!func_105(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_446(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22550)
	{
		if (func_444(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22550 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22548;
	}
	else
	{
		fVar59 = (((Global_22548 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22549;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(false);
		if (func_443())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_443())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22550.f_5218 <= 1)
		{
			func_439(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22550.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22550.f_5728)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22548;
			}
			else
			{
				if (Global_22550)
				{
					StringCopy(&cVar65, func_438(29), 64);
					StringCopy(&cVar81, func_436(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_435(Global_22547, Global_22548, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, false);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, false);
					}
				}
				if (Global_22550.f_8387)
				{
					iVar1 = Global_22550.f_8383;
					iVar2 = Global_22550.f_8384;
					iVar3 = Global_22550.f_8385;
					iVar4 = Global_22550.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_435(Global_22547, (Global_22548 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22548 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) != 0)
				{
					func_434();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22550.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22550.f_68)
					{
						if (Global_22550.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22550.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_14[iVar16], Global_22550.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22550.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22547 + 0.00390625f), ((Global_22548 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22550.f_5735)
				{
					func_434();
					func_432((((Global_22547 + fParam5) - 0.00390625f) - func_433("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_434();
						func_432((((Global_22547 + fParam5) - 0.00390625f) - func_433("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
					}
				}
			}
			iVar6 = Global_22550.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22550.f_8397)
			{
				iVar1 = Global_22550.f_8393;
				iVar2 = Global_22550.f_8394;
				iVar3 = Global_22550.f_8395;
				iVar4 = Global_22550.f_8396;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22550.f_5225 && iVar6 <= Global_22550.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22550.f_5485[iVar6])
					{
						if (Global_22550.f_5356[iVar6] && iVar6 != Global_22550.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22550.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, false);
			if (Global_22550.f_5731 > Global_22550.f_5225)
			{
				if (Global_22550.f_8402)
				{
					iVar1 = Global_22550.f_8398;
					iVar2 = Global_22550.f_8399;
					iVar3 = Global_22550.f_8400;
					iVar4 = Global_22550.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_435(Global_22547, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.f_1 = (vVar38.y * (0.5f / fVar62));
				if (Global_22550.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22547 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22550.f_4690)) != 0 && Global_22550.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22547 + 0.0046875f);
				if (Global_22550.f_4768 != 0)
				{
					func_444(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_431(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_435(Global_22547, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_431(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22550.f_4768 != 0)
				{
					func_444(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_430(Global_22550.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4768), func_436(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
				}
				fVar51 = (fVar51 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22550.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22550.f_4767) > Global_22550.f_4766)
					{
						StringCopy(&(Global_22550.f_4690), "", 24);
						Global_22550.f_4766 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4269680.f_21)) != 0 && Global_4269680.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22547 + 0.0046875f);
				if (Global_4269680.f_67 != 0)
				{
					func_444(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_431(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_435(Global_22547, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_431(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4269680.f_67 != 0)
				{
					func_444(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_430(Global_4269680.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_438(Global_4269680.f_67), func_436(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
				}
				fVar51 = (fVar51 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4269680.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4269680.f_66) > Global_4269680.f_65)
					{
						StringCopy(&(Global_4269680.f_21), "", 16);
						Global_4269680.f_65 = -1;
					}
				}
			}
			func_426(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22550.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22550.f_5218;
			if (Global_22550.f_5729)
			{
				iVar98 = (Global_22550.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22550.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22550.f_5745[iVar6];
				}
				if (Global_22550.f_5729)
				{
					iVar6 = Global_22550.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22550.f_5738 && iVar9 < Global_22550.f_5225)
				{
					bVar33 = true;
					if (Global_22550.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22550.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22550.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22547 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22550.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22550.f_8409)
					{
						HUD::GET_HUD_COLOUR(Global_22550.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22547 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false);
					Global_22550.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22550.f_5226)
				{
					if (MISC::IS_BIT_SET(Global_22550.f_5089[iVar6], iVar8) || Global_22550.f_5056[iVar8] == 5)
					{
						if (Global_22550.f_5729)
						{
							iVar19 = Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar20 = Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar21 = Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar22 = Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar23 = Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)];
						}
						else
						{
							Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar19;
							Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar20;
							Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar21;
							Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar22;
							Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22550.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22550.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22550.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22547 + 0.0046875f) + Global_22550.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22550.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22550.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22550.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22547 + Global_22549) - 0.0046875f) - fVar34);
						}
						if ((Global_22550.f_5075[iVar8] && Global_22550.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22550.f_5056[iVar8])
						{
							case 0:
								break;
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_424(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22550.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_444(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22550.f_4433[(iVar22 + iVar14)] == 2 || Global_22550.f_4433[(iVar22 + iVar14)] == 51) || Global_22550.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar43;
										Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar44;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22550.f_5083[iVar101] == 2)
												{
													Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar101)] = (Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar101)] - Global_22550.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar43 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar44 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_444(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_444(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_438(26), func_436(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_444(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_444(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_438(27), func_436(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_424(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_423(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22550.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar28)] == 2 || Global_22550.f_4433[(iVar22 + iVar28)] == 51) || Global_22550.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_444(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_444(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_430(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4433[(iVar22 + iVar28)]), func_436(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4433[(iVar22 + iVar28)]), func_436(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22550.f_5083[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_19() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (iVar8 == 0)
												{
													func_424(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22550.f_5738 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar14)] != 2 && Global_22550.f_4433[(iVar22 + iVar14)] != 51) && Global_22550.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_444(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_444(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_430(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4433[(iVar22 + iVar14)]), func_436(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4433[(iVar22 + iVar14)]), func_436(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4433[(iVar22 + iVar14)]), func_436(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							case 2:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_424(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_423(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[iVar20]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar43 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_444(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_444(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_438(26), func_436(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_444(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_444(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_438(27), func_436(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_424(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										func_422((fVar34 + fVar42), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							case 3:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_424(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_423(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar43 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_444(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_444(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_438(26), func_436(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_444(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_444(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_438(27), func_436(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									func_424(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
									func_421((fVar34 + fVar42), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_444(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22550.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22550.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
											Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
											fVar44 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_444(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_444(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_430(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_438(26), func_436(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
											if (func_444(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_444(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_430(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_438(27), func_436(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_444(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_430(Global_22550.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_438(Global_22550.f_4433[iVar22]), func_436(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_420(Global_22550.f_4433[iVar22])), (fVar37 * func_420(Global_22550.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22550.f_5056[iVar8] == 5)
						{
							if (Global_22550.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							if (Global_22550.f_5075[iVar8])
							{
								if (func_444(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22550.f_8038[iVar9] = iVar6;
						Global_22550.f_5740 = iVar6;
						iVar9++;
						if (Global_22550.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22550.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22550.f_5728)
					{
						Global_22550.f_5485[iVar6] = 1;
						if (Global_22550.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22550.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22550.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22550.f_5728)
			{
				Global_22550.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22550.f_5733 = iVar11;
				Global_22550.f_5731 = iVar10;
				Global_22550.f_5728 = 1;
			}
		}
		if (!Global_22550.f_5729)
		{
			Global_22550.f_5732 = iVar9;
			Global_22550.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22550.f_5876 = fVar51;
	Global_22550.f_5878 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22550.f_5876);
	if (!Global_22550.f_8382)
	{
		func_419(0);
	}
	Global_22550.f_8382 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_418(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_418(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_419(int iParam0)
{
	if (func_136())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_51(0))
		{
			func_132(iParam0);
		}
		MISC::SET_BIT(&Global_7552, 2);
	}
}

float func_420(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
	}
	return 1f;
}

void func_421(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_422(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_423(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22550.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22550.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_424(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_425(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 8;
			*iParam2 = 8;
			*iParam3 = 8;
			break;
		case 1:
			*iParam1 = 37;
			*iParam2 = 37;
			*iParam3 = 39;
			break;
		case 22:
			*iParam1 = 140;
			*iParam2 = 146;
			*iParam3 = 154;
			break;
		case 23:
			*iParam1 = 91;
			*iParam2 = 93;
			*iParam3 = 94;
			break;
		case 6:
			*iParam1 = 81;
			*iParam2 = 84;
			*iParam3 = 89;
			break;
		case 111:
			*iParam1 = 240;
			*iParam2 = 240;
			*iParam3 = 240;
			break;
		case 28:
			*iParam1 = 150;
			*iParam2 = 8;
			*iParam3 = 0;
			break;
		case 34:
			*iParam1 = 38;
			*iParam2 = 3;
			*iParam3 = 6;
			break;
		case 88:
			*iParam1 = 245;
			*iParam2 = 137;
			*iParam3 = 15;
			break;
		case 45:
			*iParam1 = 74;
			*iParam2 = 22;
			*iParam3 = 7;
			break;
		case 56:
			*iParam1 = 45;
			*iParam2 = 58;
			*iParam3 = 53;
			break;
		case 58:
			*iParam1 = 71;
			*iParam2 = 120;
			*iParam3 = 60;
			break;
		case 54:
			*iParam1 = 77;
			*iParam2 = 98;
			*iParam3 = 104;
			break;
		case 73:
			*iParam1 = 14;
			*iParam2 = 49;
			*iParam3 = 109;
			break;
		case 68:
			*iParam1 = 22;
			*iParam2 = 34;
			*iParam3 = 72;
			break;
		case 140:
			*iParam1 = 0;
			*iParam2 = 174;
			*iParam3 = 239;
			break;
		case 131:
			*iParam1 = 255;
			*iParam2 = 183;
			*iParam3 = 0;
			break;
		case 90:
			*iParam1 = 142;
			*iParam2 = 140;
			*iParam3 = 70;
			break;
		case 97:
			*iParam1 = 156;
			*iParam2 = 141;
			*iParam3 = 113;
			break;
		case 89:
			*iParam1 = 145;
			*iParam2 = 115;
			*iParam3 = 71;
			break;
		case 105:
			*iParam1 = 98;
			*iParam2 = 68;
			*iParam3 = 40;
			break;
		case 100:
			*iParam1 = 124;
			*iParam2 = 27;
			*iParam3 = 68;
			break;
		case 99:
			*iParam1 = 114;
			*iParam2 = 42;
			*iParam3 = 63;
			break;
		case 136:
			*iParam1 = 246;
			*iParam2 = 151;
			*iParam3 = 153;
			break;
		case 49:
			*iParam1 = 32;
			*iParam2 = 32;
			*iParam3 = 44;
			break;
		case 146:
			*iParam1 = 26;
			*iParam2 = 1;
			*iParam3 = 23;
			break;
		default:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 255;
			break;
	}
}

void func_426(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_105(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_446(bParam4, bParam8))
	{
		return;
	}
	if (func_428())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_16(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22550.f_5026[iVar1], true), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22550.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22550.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_427(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_427(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_253(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22550.f_5026[iVar1] != 361 && MISC::IS_BIT_SET(Global_22550.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22550.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4269680.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22550.f_4769);
				func_427(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_253(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4269680.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4269680.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22550.f_8417 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22550.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_427(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_428()
{
	vector3 vVar0;

	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_429())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_19626 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_429()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_430(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		case 54:
			*iParam5 = 100;
			break;
		case 62:
			*iParam5 = 100;
			break;
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_431(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22547 + Global_22549) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_432(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_433(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_434();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_434()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22550.f_8392)
	{
		iVar0 = Global_22550.f_8388;
		iVar1 = Global_22550.f_8389;
		iVar2 = Global_22550.f_8390;
		iVar3 = Global_22550.f_8391;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22547 + 0.0046875f), ((Global_22547 + Global_22549) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_435(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_436(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_211(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_437(&uVar3);
			}
		}
		else
		{
			return func_437(&(Global_22550.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_437(var uParam0)
{
	return uParam0;
}

char* func_438(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_211(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_437(&uVar0);
		}
		else
		{
			return func_437(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_439(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 1)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22550.f_1610[Global_22550.f_5220] = bParam3;
	Global_22550.f_1867[Global_22550.f_5220] = iParam4;
	Global_22550.f_5220++;
	if (!bParam3)
	{
		func_442(Global_22550.f_5218, 1);
	}
	else
	{
		func_442(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_441(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_444(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_440(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
			if (fVar4 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 1;
	Global_22550.f_5742 = (Global_22550.f_5220 - 1);
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = iParam2;
}

float func_440(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_441(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_424(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_442(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_443()
{
	int iVar0;
	int iVar1;
	float fVar2;

	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_438(iParam0), 64);
	StringCopy(&cVar16, func_436(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(false);
			if (func_443())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_443())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DIRECTOR_MODE")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		vVar37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_445(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_445(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.f_1 = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar37.x = 106f;
			vVar37.f_1 = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22549)
			{
				*fParam4 = (*fParam4 * (Global_22549 / *fParam3));
				*fParam3 = Global_22549;
			}
		}
		return 1;
	}
	return 0;
}

float func_445(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
		case 61:
			return 0.8f;
	}
	return 1f;
}

int func_446(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_416(8, -1) && func_447() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77093) || Global_22550.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_447()
{
	return Global_1312830;
}

void func_448(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam2)
	{
		if (uParam0->f_310 == 0)
		{
			if (uParam0->f_1[uParam0->f_311] == 12)
			{
				if (!bParam4)
				{
					func_455("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_455("CAS_VEH_SELLV", 0, 0);
					func_454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_455("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_455("CAS_VEH_SELLV", 0, 0);
				func_454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_317, 2))
		{
			if (func_449(uParam0->f_1[uParam0->f_311], 0, -1, 1))
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, false, -1, 0, 0, true, 0);
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_309, uParam0->f_312))
		{
			if (func_449(uParam0->f_1[uParam0->f_311], 0, -1, 1))
			{
				func_455("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_455("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_449(uParam0->f_1[uParam0->f_311], 0, -1, 0))
			{
				func_455("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_455("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_449(uParam0->f_1[uParam0->f_311], 0, -1, 1))
		{
			func_455("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_455("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_449(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam1)
	{
		func_452(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_399(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_450(12) && iVar0 < func_283(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 88;
		case 9:
			return 108;
		case 10:
			return 128;
		case 11:
			return 148;
		case 6:
			return 65;
		case 7:
			return 75;
		case 5:
			return -1;
		case 12:
			return 159;
		case 13:
			return 179;
		case 14:
			return 191;
		case 15:
			return 192;
		case 16:
			return 202;
		case 17:
			return 212;
		case 18:
			return 227;
		case 19:
			return 237;
		case 20:
			return 247;
		case 21:
			return 258;
		case 22:
			return 268;
		case 23:
			return 281;
		case 24:
			return 294;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_292(iParam0);
		return func_451(iVar0);
	}
	return (func_284(iParam0, -1, 1) * iParam0);
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		case 2:
			return 223;
		case 1:
			return 224;
		case 3:
			return 278;
		default:
			break;
	}
	return -1;
}

void func_452(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (iParam0 == (func_453(iVar0, iParam2) - 1))
		{
			*iParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_67(func_348(iParam0), iParam1, -1);
	iVar0 = (iVar0 + func_67(func_347(iParam0), iParam1, -1));
	return iVar0;
}

void func_454(char* sParam0)
{
	if (Global_22550.f_4765 >= 3 || Global_22550.f_4762 >= 4)
	{
		return;
	}
	Global_22550.f_4696[Global_22550.f_4762] = 1;
	Global_22550.f_4762++;
	StringCopy(&(Global_22550.f_4713[Global_22550.f_4765 /*16*/]), sParam0, 64);
	Global_22550.f_4765++;
}

void func_455(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;

	StringCopy(&(Global_22550.f_4690), sParam0, 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = iParam1;
	Global_22550.f_4767 = MISC::GET_GAME_TIMER();
	Global_22550.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_456(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15[24];
	struct<16> Var21;
	struct<4> Var37;

	iVar0 = 0;
	func_511(0, 0);
	if (bParam2)
	{
		func_506(func_510(), 0);
	}
	func_505(1, 1, 0, 0, 0);
	func_504(1, 2, 1, 1, 1);
	func_503(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar10 = func_389(iParam1);
	iVar14 = 1;
	switch (uParam0->f_310)
	{
		case 0:
			uParam0->f_319 = 0;
			func_502("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 25)
			{
				iVar3 = func_410(iVar1, -1);
				if ((iVar3 > 0 && func_501(iVar3)) && func_493(iVar1))
				{
					if (!func_491(iParam1, iVar1))
					{
					}
					else
					{
						Var37 = { Global_1049924[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var37, func_489(func_490(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var37, func_487(func_488(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var37, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var37, func_486(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var37, func_486(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var37, func_486(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var37, func_485(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var37, func_485(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var37, func_485(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var37, "CASINO_GARNAME", 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var37, "ARCADE_GARNAME", 16);
						}
						if (!func_484())
						{
							if (!func_483() && !func_482(iVar3))
							{
								func_439(iVar0, &Var37, 0, 1, 0, 0);
							}
							else
							{
								cVar6 = { Var37 };
								StringConCat(&cVar6, "S", 16);
								func_439(iVar0, &cVar6, 0, 1, 0, 0);
							}
						}
						else
						{
							func_439(iVar0, "PIM_DNAME", 1, 1, 0, 0);
							func_481(HUD::_GET_LABEL_TEXT(&Var37), 0, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_21(5394, -1, 0) != 0 && func_67(15270, -1, -1) == 7) && !Global_262145.f_20617) && func_471(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_439(iVar0, func_470(0), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_469(0);
				iVar0++;
			}
			if (func_413(-1) && func_471(iParam1, 223))
			{
				func_439(iVar0, func_470(2), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_469(2);
				iVar0++;
			}
			if (func_411(-1) && func_471(iParam1, 278))
			{
				func_439(iVar0, func_470(3), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_469(3);
				iVar0++;
			}
			uParam0->f_313 = iVar0;
			func_468(uParam0->f_311, 1, 1);
			break;
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_502("DEL_VEH_SEL3ac");
			}
			else
			{
				func_502("DEL_VEH_SEL3");
			}
			uParam0->f_309 = 0;
			iVar4 = func_450(uParam0->f_319);
			iVar5 = (10 + func_450(uParam0->f_319));
			if (uParam0->f_319 >= 25)
			{
				iVar13 = func_292(uParam0->f_319);
				iVar1 = 0;
				while (iVar1 < func_467(iVar13))
				{
					iVar11 = (iVar1 + iVar4);
					if (!bVar10)
					{
						if (func_398(iVar11))
						{
							bVar2 = true;
						}
					}
					else if (!func_398(iVar11))
					{
						bVar2 = true;
					}
					if (!func_471(iParam1, iVar11))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_409(iVar11, &iVar12, 1);
						if ((iVar12 >= 0 && Global_1323678[iVar12 /*141*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1323678[iVar12 /*141*/].f_66))
						{
							iVar14 = 1;
							StringCopy(&cVar15, "", 24);
							if (func_466(&(Global_1323678[iVar12 /*141*/])))
							{
								iVar14++;
							}
							if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
							{
								iVar14++;
							}
							Var21 = { func_462(-1, iVar11, 1) };
							if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 1))
							{
								if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 2) && !bVar10)
								{
									StringCopy(&cVar15, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&cVar15, iVar14, 24);
									func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
									{
										func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
									}
									else
									{
										func_458(&Var21, 0, 0, 1);
									}
									if (func_466(&(Global_1323678[iVar12 /*141*/])))
									{
										func_461("VEH_LIVERY", 0);
									}
									if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
									{
										func_461("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
								else
								{
									func_439(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar11;
									MISC::SET_BIT(&(uParam0->f_309), iVar0);
									iVar0++;
								}
							}
							else if (bVar10)
							{
								if (func_389(Global_1323678[iVar12 /*141*/].f_66))
								{
									if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 6))
									{
										StringCopy(&cVar15, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&cVar15, iVar14, 24);
										func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
										{
											func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
										}
										else
										{
											func_458(&Var21, 0, 0, 1);
										}
										if (func_466(&(Global_1323678[iVar12 /*141*/])))
										{
											func_461("VEH_LIVERY", 0);
										}
										if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
										{
											func_461("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&cVar15, "PIL_MP_VEH_0", 24);
										StringIntConCat(&cVar15, iVar14, 24);
										func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
										{
											func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
										}
										else
										{
											func_458(&Var21, 0, 0, 1);
										}
										if (func_466(&(Global_1323678[iVar12 /*141*/])))
										{
											func_461("VEH_LIVERY", 0);
										}
										if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
										{
											func_461("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
							}
							else if (!func_389(Global_1323678[iVar12 /*141*/].f_66))
							{
								if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 6))
								{
									StringCopy(&cVar15, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&cVar15, iVar14, 24);
									func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
									{
										func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
									}
									else
									{
										func_458(&Var21, 0, 0, 1);
									}
									if (func_466(&(Global_1323678[iVar12 /*141*/])))
									{
										func_461("VEH_LIVERY", 0);
									}
									if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
									{
										func_461("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&cVar15, "PIL_MP_VEH_0", 24);
									StringIntConCat(&cVar15, iVar14, 24);
									func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
									{
										func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
									}
									else
									{
										func_458(&Var21, 0, 0, 1);
									}
									if (func_466(&(Global_1323678[iVar12 /*141*/])))
									{
										func_461("VEH_LIVERY", 0);
									}
									if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
									{
										func_461("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar11;
								iVar0++;
							}
						}
						else
						{
							func_439(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar11;
							MISC::SET_BIT(&(uParam0->f_309), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_410(uParam0->f_319, -1);
				iVar1 = 0;
				while (iVar1 < func_284(uParam0->f_319, -1, 1))
				{
					iVar11 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1049924[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar11 >= iVar4 + 2 && iVar11 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1049924[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar11 >= iVar4 + 6 && iVar11 != iVar5) && iVar11 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar10)
					{
						if (iVar11 >= iVar5 && func_398(iVar11))
						{
							bVar2 = true;
						}
					}
					else if (iVar11 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_457(iVar11, iVar3, uParam0->f_319))
					{
						bVar2 = true;
					}
					if (!func_471(iParam1, iVar11))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_409(iVar11, &iVar12, 1);
						if ((iVar12 >= 0 && Global_1323678[iVar12 /*141*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1323678[iVar12 /*141*/].f_66))
						{
							iVar14 = 1;
							StringCopy(&cVar15, "", 24);
							if (func_466(&(Global_1323678[iVar12 /*141*/])))
							{
								iVar14++;
							}
							if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
							{
								iVar14++;
							}
							Var21 = { func_462(-1, iVar11, 1) };
							if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 1))
							{
								if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 2) && !bVar10)
								{
									StringCopy(&cVar15, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&cVar15, iVar14, 24);
									func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
									{
										func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
									}
									else
									{
										func_458(&Var21, 0, 0, 1);
									}
									if (func_466(&(Global_1323678[iVar12 /*141*/])))
									{
										func_461("VEH_LIVERY", 0);
									}
									if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
									{
										func_461("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
								else
								{
									func_439(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar11;
									MISC::SET_BIT(&(uParam0->f_309), iVar0);
									iVar0++;
								}
							}
							else if (bVar10)
							{
								if (func_389(Global_1323678[iVar12 /*141*/].f_66))
								{
									if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 6))
									{
										StringCopy(&cVar15, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&cVar15, iVar14, 24);
										func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
										{
											func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
										}
										else
										{
											func_458(&Var21, 0, 0, 1);
										}
										if (func_466(&(Global_1323678[iVar12 /*141*/])))
										{
											func_461("VEH_LIVERY", 0);
										}
										if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
										{
											func_461("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&cVar15, "PIL_MP_VEH_0", 24);
										StringIntConCat(&cVar15, iVar14, 24);
										func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
										{
											func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
										}
										else
										{
											func_458(&Var21, 0, 0, 1);
										}
										if (func_466(&(Global_1323678[iVar12 /*141*/])))
										{
											func_461("VEH_LIVERY", 0);
										}
										if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
										{
											func_461("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
							}
							else if (!func_389(Global_1323678[iVar12 /*141*/].f_66))
							{
								if (MISC::IS_BIT_SET(Global_1323678[iVar12 /*141*/].f_102, 6))
								{
									StringCopy(&cVar15, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&cVar15, iVar14, 24);
									func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
									{
										func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
									}
									else
									{
										func_458(&Var21, 0, 0, 1);
									}
									if (func_466(&(Global_1323678[iVar12 /*141*/])))
									{
										func_461("VEH_LIVERY", 0);
									}
									if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
									{
										func_461("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&cVar15, "PIL_MP_VEH_0", 24);
									StringIntConCat(&cVar15, iVar14, 24);
									func_439(iVar0, &cVar15, iVar14, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
									{
										func_461(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323678[iVar12 /*141*/].f_66), 0);
									}
									else
									{
										func_458(&Var21, 0, 0, 1);
									}
									if (func_466(&(Global_1323678[iVar12 /*141*/])))
									{
										func_461("VEH_LIVERY", 0);
									}
									if (func_465(Global_1323678[iVar12 /*141*/].f_66, Global_1323678[iVar12 /*141*/].f_77, Global_1323678[iVar12 /*141*/].f_9[10]) && func_464(Global_1323678[iVar12 /*141*/].f_66))
									{
										func_461("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar11;
								iVar0++;
							}
						}
						else
						{
							func_439(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar11;
							MISC::SET_BIT(&(uParam0->f_309), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_313 = iVar0;
			if (uParam0->f_312 >= uParam0->f_313)
			{
				uParam0->f_312 = 0;
			}
			func_468(uParam0->f_312, 1, 1);
			break;
	}
	func_408(-1);
	func_407(176, "BB_SELECT", -1);
	func_407(177, "BB_BACK", -1);
}

int func_457(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 126) && func_501(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_450(iParam2)) >= 0 && (iParam0 - func_450(iParam2)) < Global_1049924[iParam1 /*1951*/].f_33) && iParam0 < 307)
			{
				return 1;
			}
			if (Global_1049924[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_450(iParam2)))
			{
				return 1;
			}
			if ((Global_1049924[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_450(iParam2))) && iParam0 <= (11 + func_450(iParam2)))
			{
				return 1;
			}
			if (Global_1049924[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_285(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_450(iParam2)) && iParam0 <= (12 + func_450(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_450(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_450(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_450(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_450(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_450(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_450(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_458(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	if (Global_22550.f_5221 >= 32)
	{
		return;
	}
	if (Global_22550.f_5743 >= 4)
	{
		return;
	}
	if (Global_22550.f_5744 != 1)
	{
		return;
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2462791[Global_22550.f_5221 /*16*/]), sParam0, 64);
	Global_22550.f_5221++;
	if (bParam3)
	{
		Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 9;
	}
	else
	{
		Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 7;
	}
	Global_22550.f_5743++;
	fVar0 = func_460();
	if (bParam2)
	{
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_460();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_444(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22550.f_5068[(Global_22550.f_5219 - 1)])
		{
			Global_22550.f_5068[(Global_22550.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22550.f_5743 >= Global_22550.f_5741)
		{
			fVar3 = func_459();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

float func_459()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_444(Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_460()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar7 = 0;
	while (iVar7 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_424(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22550.f_73[Global_22550.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(Global_22550.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(Global_22550.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[((Global_22550.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[((Global_22550.f_5223 - iVar4) + iVar10)], Global_22550.f_4304[((Global_22550.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_444(Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_461(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 >= 4)
	{
		return;
	}
	if (Global_22550.f_5744 != 1)
	{
		return;
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		return;
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam0, 24);
	Global_22550.f_5220++;
	Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 1;
	Global_22550.f_5743++;
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_460();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_444(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22550.f_5068[(Global_22550.f_5219 - 1)])
		{
			Global_22550.f_5068[(Global_22550.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22550.f_5743 >= Global_22550.f_5741)
		{
			fVar3 = func_459();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

struct<16> func_462(int iParam0, int iParam1, bool bParam2)
{
	struct<16> Var0;

	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_463(iParam1) != -1)
		{
			Var0 = { Global_2097152[func_186() /*10931*/].f_5507.f_99[func_463(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2097152[func_186() /*10931*/].f_5507.f_99[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_463(int iParam0)
{
	int iVar0;

	func_399(Global_4016696, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_519())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FACTION3"):
		case joaat("CONTENDER"):
			return 0;
	}
	return 1;
}

int func_465(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("BANSHEE"):
		case joaat("BANSHEE2"):
			if (!MISC::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("STINGER"):
		case joaat("COQUETTE2"):
		case joaat("COQUETTE3"):
			if (!MISC::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("CHINO"):
		case joaat("VOLTIC"):
		case joaat("STALION"):
		case joaat("CHINO2"):
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("FACTION3"):
			if (!MISC::IS_BIT_SET(iParam1, 1) && !MISC::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		case joaat("BUCCANEER2"):
		case -1804415708:
		case 1107404867:
			if ((!MISC::IS_BIT_SET(iParam1, 1) && !MISC::IS_BIT_SET(iParam1, 2)) && !MISC::IS_BIT_SET(iParam1, 3))
			{
				return 1;
			}
			break;
		case joaat("COQUETTE"):
			if (!MISC::IS_BIT_SET(iParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		case joaat("MAMBA"):
			if (!MISC::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		case joaat("PFISTER811"):
			if (!MISC::IS_BIT_SET(iParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		case joaat("CONTENDER"):
		case joaat("KAMACHO"):
			if (!MISC::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
		case 1717532765:
			if (MISC::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_466(var uParam0)
{
	switch (uParam0->f_66)
	{
		case joaat("WINDSOR"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_467(int iParam0)
{
	return (func_291(iParam0) - func_451(iParam0));
}

void func_468(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	Global_22550.f_5739 = iParam0;
	Global_22550.f_5874 = iParam2;
	if (Global_22550.f_5739 < Global_22550.f_5738)
	{
		Global_22550.f_5738 = Global_22550.f_5739;
	}
	else if ((Global_22550.f_5729 && Global_22550.f_5739 > Global_22550.f_5740) || (!Global_22550.f_5729 && Global_22550.f_5739 >= (Global_22550.f_5738 + Global_22550.f_5225)))
	{
		iVar0 = Global_22550.f_5738;
		while (iVar0 <= Global_22550.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22550.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22550.f_5225 && Global_22550.f_5738 < 128)
		{
			Global_22550.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22550.f_5738;
			while (iVar0 <= Global_22550.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22550.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22550.f_4690), "", 24);
		StringCopy(&(Global_4269680.f_21), "", 16);
	}
}

int func_469(int iParam0)
{
	return (1000 + iParam0);
}

char* func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		case 2:
			return "MP_BHUB_CLUBT";
		case 1:
			return "MP_BHUB_GAR0";
		case 3:
			return "MP_BHUB_SUB";
		default:
			break;
	}
	return "";
}

int func_471(int iParam0, int iParam1)
{
	if (!func_480(iParam1) && !func_401(iParam0))
	{
		if (func_479(iParam0, 0))
		{
			if (iParam1 == func_478(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_477(iParam1))
		{
			return 0;
		}
	}
	if (func_389(iParam0))
	{
		if (!func_398(iParam1))
		{
			return 0;
		}
	}
	else if (func_398(iParam1))
	{
		return 0;
	}
	if (func_476(iParam1))
	{
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)))
		{
			return 0;
		}
	}
	if (func_480(iParam1))
	{
		if (!func_401(iParam0))
		{
			return 0;
		}
		else if ((func_475(iParam0) + func_450(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_474(iParam1))
	{
		if (!func_362(iParam0))
		{
			return 0;
		}
	}
	else if (func_362(iParam0))
	{
		return 0;
	}
	if (!func_473(iParam1, 1))
	{
		if (func_472(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("OPPRESSOR2"))
	{
		return 0;
	}
	if ((iParam1 == 278 && iParam0 != 1455990255) && iParam0 != joaat("STROMBERG"))
	{
		return 0;
	}
	if ((iParam0 == joaat("CERBERUS") || iParam0 == joaat("CERBERUS2")) || iParam0 == joaat("CERBERUS3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
			return 1;
	}
	return 0;
}

int func_473(int iParam0, bool bParam1)
{
	if (iParam0 >= func_450(18) && iParam0 < func_283(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_474(int iParam0)
{
	if (iParam0 >= func_450(12) && iParam0 < func_283(12))
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
		case joaat("BOXVILLE5"):
			return 1;
		case joaat("WASTELANDER"):
			return 2;
		case joaat("PHANTOM2"):
			return 3;
		case joaat("VOLTIC2"):
			return 4;
		case joaat("DUNE4"):
			return 5;
		case joaat("DUNE5"):
			return 5;
		case joaat("RUINER2"):
			return 6;
		case joaat("BLAZER5"):
			return 7;
	}
	return -1;
}

int func_476(int iParam0)
{
	if (iParam0 >= func_450(6) && iParam0 < func_283(6))
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
	}
	if (iParam0 >= func_450(11) && iParam0 < func_283(11))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)
{
	if (func_401(iParam0))
	{
		return (func_475(iParam0) + func_450(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("TRAILERSMALL2"):
				return 157;
			case joaat("HAULER2"):
			case joaat("PHANTOM3"):
				return 158;
			case joaat("AVENGER"):
				return 190;
			case joaat("KHANJALI"):
				return 188;
			case joaat("CHERNOBOG"):
				return 187;
			case joaat("RIOT2"):
				return 186;
			case joaat("THRUSTER"):
				return 189;
		}
		if (iParam0 == joaat("TERBYTE"))
		{
			return 222;
		}
		else if (iParam0 == joaat("SPEEDO4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("MULE4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("POUNDER2"))
		{
			return 226;
		}
		if (iParam0 == joaat("RCBANDITO"))
		{
			return 257;
		}
		if (iParam0 == -1254331310)
		{
			return 279;
		}
	}
	return -1;
}

int func_479(int iParam0, bool bParam1)
{
	if (func_401(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
		case joaat("HAULER2"):
		case joaat("PHANTOM3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		case joaat("AVENGER"):
		case joaat("KHANJALI"):
		case joaat("CHERNOBOG"):
		case joaat("RIOT2"):
		case joaat("THRUSTER"):
		case joaat("SPEEDO4"):
		case joaat("MULE4"):
		case joaat("POUNDER2"):
		case joaat("TERBYTE"):
		case joaat("RCBANDITO"):
		case -1254331310:
			return 1;
	}
	return 0;
}

int func_480(int iParam0)
{
	if (iParam0 >= func_450(11) && iParam0 < func_283(11))
	{
		return 1;
	}
	return 0;
}

void func_481(char* sParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	if (Global_22550.f_5221 >= 32)
	{
		return;
	}
	if (Global_22550.f_5743 >= 4)
	{
		return;
	}
	if (Global_22550.f_5744 != 1)
	{
		return;
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2462791[Global_22550.f_5221 /*16*/]), sParam0, 64);
	Global_22550.f_5221++;
	Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 5;
	Global_22550.f_5743++;
	fVar0 = func_460();
	if (bParam2)
	{
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_460();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_444(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22550.f_5068[(Global_22550.f_5219 - 1)])
		{
			Global_22550.f_5068[(Global_22550.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22550.f_5743 >= Global_22550.f_5741)
		{
			fVar3 = func_459();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

int func_482(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_483()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 9:
		case 12:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_484()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
		case 2:
			return "ARENA_GAR_F1";
		case 3:
			return "ARENA_GAR_F2";
	}
	return "";
}

char* func_486(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
		case 2:
			return "MP_BHUB_GAR2";
		case 3:
			return "MP_BHUB_GAR3";
	}
	return "";
}

char* func_487(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
		case 2:
			return "MP_DBASE_2";
		case 3:
			return "MP_DBASE_3";
		case 4:
			return "MP_DBASE_4";
		case 5:
			return "MP_DBASE_6";
		case 6:
			return "MP_DBASE_7";
		case 7:
			return "MP_DBASE_8";
		case 8:
			return "MP_DBASE_9";
		case 9:
			return "MP_DBASE_10";
	}
	return "";
}

int func_488(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271;
	}
	return 0;
}

char* func_489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
		case 2:
			return "MP_HANGAR_2";
		case 3:
			return "MP_HANGAR_3";
		case 4:
			return "MP_HANGAR_4";
		case 5:
			return "MP_HANGAR_5";
	}
	return "";
}

int func_490(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264;
	}
	return 0;
}

int func_491(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1254331310)
	{
		return 0;
	}
	if ((((iParam0 == joaat("THRUSTER") || iParam0 == joaat("KHANJALI")) || iParam0 == joaat("RIOT2")) || iParam0 == joaat("CHERNOBOG")) || iParam0 == joaat("AVENGER"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_401(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("CERBERUS") || iParam0 == joaat("CERBERUS2")) || iParam0 == joaat("CERBERUS3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("BRUISER") || iParam0 == joaat("BRUISER2")) || iParam0 == joaat("BRUISER3")) || iParam0 == joaat("MONSTER3")) || iParam0 == joaat("MONSTER4")) || iParam0 == joaat("MONSTER5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("SPEEDO4") || iParam0 == joaat("MULE4")) || iParam0 == joaat("POUNDER2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_362(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_492())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_475(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_492()
{
	return joaat("TERBYTE");
}

int func_493(int iParam0)
{
	if (iParam0 == 22)
	{
		if (!func_494())
		{
			return 0;
		}
	}
	return 1;
}

bool func_494()
{
	return (func_497(0) && func_495(0));
}

bool func_495(bool bParam0)
{
	if (bParam0)
	{
		return MISC::IS_BIT_SET(func_21(8724, -1, 0), 4);
	}
	return func_496(PLAYER::PLAYER_ID());
}

int func_496(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1701666[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_497(bool bParam0)
{
	if (bParam0)
	{
		return func_498(27227, -1, -1);
	}
	if (PLAYER::PLAYER_ID() != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_393.f_1, 2);
	}
	return 0;
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_500(iParam0, iParam1);
	uVar2 = func_499(iParam0);
	if (0 != iVar1)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_499(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_500(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
	}
	return 1;
}

void func_502(char* sParam0)
{
	int iVar0;

	StringCopy(&(Global_22550.f_1), sParam0, 16);
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5075[0] = iParam0;
	Global_22550.f_5075[1] = iParam1;
	Global_22550.f_5075[2] = iParam2;
	Global_22550.f_5075[3] = iParam3;
	Global_22550.f_5075[4] = iParam4;
}

void func_504(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5056[0] = iParam0;
	Global_22550.f_5056[1] = iParam1;
	Global_22550.f_5056[2] = iParam2;
	Global_22550.f_5056[3] = iParam3;
	Global_22550.f_5056[4] = iParam4;
	Global_22550.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22550.f_5226++;
	}
}

void func_506(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = func_509(iParam0, iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_507(1, sVar0, sVar0);
	}
}

void func_507(int iParam0, char* sParam1, char* sParam2)
{
	Global_22550 = iParam0;
	func_508(29, sParam1, sParam2);
}

void func_508(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22550.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22550.f_7029[iParam0 /*16*/]), sParam2, 64);
}

char* func_509(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
		case 2:
			return "ShopUI_Title_Barber2";
		case 3:
			return "ShopUI_Title_Barber3";
		case 5:
			return "ShopUI_Title_Barber4";
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
		case 21:
			return "ShopUI_Title_Movie_Masks";
		case 22:
			return "ShopUI_Title_Tattoos";
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
		case 25:
			return "ShopUI_Title_Tattoos3";
		case 26:
			return "ShopUI_Title_Tattoos4";
		case 27:
			return "ShopUI_Title_Tattoos5";
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
		case 42:
			return "ShopUI_Title_Carmod2";
		case 44:
			return "ShopUI_Title_Supermod";
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
				case 10:
					return "ShopUI_Title_GR_GunMod";
				case 12:
					return "ShopUI_Title_SM_Hangar";
				case 13:
					return "ShopUI_Title_GR_GunMod";
				case 14:
					return "ShopUI_Title_GR_GunMod";
				case 15:
					return "ShopUI_Title_GR_GunMod";
				case 16:
					return "ShopUI_Title_GR_GunMod";
				case 17:
					return "ShopUI_Title_ArenaWar";
			}
			return "ShopUI_Title_IE_ModGarage";
		case 46:
			return "ShopUI_Title_GR_GunMod";
		case 47:
			return "ShopUI_Title_GR_GunMod";
		case 48:
			return "ShopUI_Title_GR_GunMod";
		case 49:
			return "ShopUI_Title_GR_GunMod";
		case 50:
			return "ShopUI_Title_Casino";
		case 51:
			return "ShopUI_Title_Casino";
		case 52:
			return "ShopUI_Title_GR_GunMod";
		case 53:
			return "ShopUI_Title_GR_GunMod";
	}
	return "";
}

int func_510()
{
	return Global_99007.f_444;
}

void func_511(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22550.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22550.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2462791[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_5089[iVar0] = 0;
		Global_22550.f_5227[iVar0] = 0;
		Global_22550.f_5356[iVar0] = 0;
		Global_22550.f_5879[iVar0] = 0f;
		Global_22550.f_5485[iVar0] = 0;
		Global_22550.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22550.f_5056[iVar0] = 0;
		Global_22550.f_5068[iVar0] = 0f;
		Global_22550.f_5062[iVar0] = -1f;
		Global_22550.f_5075[iVar0] = 0;
		Global_22550.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22550.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22550.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22550.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	Global_22550 = 0;
	Global_22550.f_5218 = 0;
	Global_22550.f_5219 = 0;
	Global_22550.f_5220 = 0;
	Global_22550.f_5222 = 0;
	Global_22550.f_5223 = 0;
	Global_22550.f_5224 = 0;
	Global_22550.f_5221 = 0;
	Global_22550.f_5874 = 0;
	Global_22550.f_6014 = 0;
	Global_22550.f_5739 = 0;
	Global_22550.f_5738 = 0;
	Global_22550.f_5740 = 0;
	StringCopy(&(Global_22550.f_4690), "", 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = 0;
	Global_22550.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_4768 = 0;
	StringCopy(&(Global_4269680.f_21), "", 16);
	Global_4269680.f_61 = 0;
	Global_4269680.f_62 = 0;
	Global_4269680.f_63 = 0;
	Global_4269680.f_64 = 0;
	Global_4269680.f_65 = 0;
	Global_4269680.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4269680.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4269680.f_67 = 0;
	StringCopy(&(Global_22550.f_1), "", 16);
	Global_22550.f_5074 = 0f;
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_5744 = 0;
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = 0;
	Global_22550.f_5742 = 0;
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	Global_22550.f_5225 = 10;
	Global_22550.f_5226 = 0;
	Global_22550.f_5876 = 0f;
	Global_22550.f_5877 = 0f;
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	Global_22550.f_5730 = 0f;
	Global_22550.f_5731 = 0;
	Global_22550.f_5733 = 0;
	Global_22550.f_5732 = 0;
	Global_22550.f_5734 = 0;
	Global_22550.f_5735 = 0;
	Global_22550.f_5736 = 0;
	Global_22550.f_5737 = 0;
	Global_22550.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22550.f_6008[iVar0] = -1;
		Global_22550.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22550.f_5081 = 0f;
	Global_22550.f_5052 = 0;
	Global_22550.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22550.f_6015)
	{
		Global_22550.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_8392 = 0;
	Global_22550.f_8387 = 0;
	Global_22550.f_8397 = 0;
	Global_22550.f_8402 = 0;
	Global_22550.f_8407 = 0;
	Global_22550.f_8409 = 0;
	Global_22550.f_8415 = 0;
	Global_22547 = 0.05f;
	Global_22548 = 0.05f;
	Global_22549 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22549 = 0.225f;
	}
}

bool func_512(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_105(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_513(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_513(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = UNK_0x5DEA4192B46CB99B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_514(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4269756 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_22547;
	fVar2 = (fVar0 + Global_22549);
	fVar3 = Global_22550.f_5730;
	fVar1 = (Global_22550.f_5730 - (IntToFloat(Global_22550.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22550.f_5732 < 1)
	{
		fVar1 = (Global_22550.f_5730 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_516();
	if (Global_4269756 == -6)
	{
		return;
	}
	Global_4269756 = -1;
	fVar7 = Global_4269750;
	fVar8 = Global_4269751;
	if (Global_22550.f_5733 > Global_22550.f_5732)
	{
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= fVar3) && Global_4269751 < (fVar3 + fVar6))
		{
			Global_4269756 = -2;
			if (bParam3)
			{
				func_515(0);
			}
			return;
		}
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= (fVar3 + fVar6)) && Global_4269751 < (fVar3 + 0.034722f))
		{
			Global_4269756 = -3;
			if (bParam3)
			{
				func_515(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22550.f_5733 == -1)
		{
			Global_4269756 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22550.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_435(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22549, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4269756 = Global_22550.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4269756 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4269756 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4269756 = -4;
		return;
	}
	Global_4269756 = -1;
}

void func_515(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22547;
	fVar1 = Global_22550.f_5730;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4269756 == -2)
	{
		func_435(fVar0, fVar1, Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4269756 == -3)
	{
		func_435(fVar0, (fVar1 + fVar2), Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_516()
{
	Global_4269752 = Global_4269750;
	Global_4269753 = Global_4269751;
	Global_4269750 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4269751 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4269754 = (Global_4269750 - Global_4269752);
	Global_4269755 = (Global_4269751 - Global_4269753);
}

void func_517()
{
	Global_2540384.f_4595 = 0;
}

void func_518(var uParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_BIT_SET(uParam0->f_314, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_311 = 0;
	uParam0->f_313 = 0;
	uParam0->f_314 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_314), 7);
	}
	uParam0->f_317 = 0;
	func_103(1, iParam1);
}

bool func_519()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

int func_520(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (Global_262145.f_10165)
	{
		if (bParam5)
		{
			return func_525(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_528(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_524(iParam3);
	}
	if (!func_401(iParam2) && func_479(iParam2, 0))
	{
		iVar6 = func_478(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_523(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_409(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (MISC::IS_BIT_SET(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1323678[iVar7 /*141*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	if (((func_21(5394, iParam4, 0) != 0 && func_67(15270, iParam4, -1) == 7) && !Global_262145.f_20617) && func_471(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_522(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_413(iParam4) && func_471(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_522(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_411(iParam4) && func_471(iParam2, 278))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1238)
		{
			iVar6 = func_522(278, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_521(iVar1))
		{
		}
		else if (func_410(iVar1, iParam4) >= Global_1049924)
		{
			return -1;
		}
		else if (func_410(iVar1, iParam4) > 0 && func_410(iVar1, iParam4) <= 126)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_410(iVar1, iParam4))
			{
				iVar4 = Global_1049924[func_410(iVar1, iParam4) /*1951*/].f_33;
				if (func_410(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_410(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_410(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_410(iVar1, iParam4) == 119 || func_410(iVar1, iParam4) == 120) || func_410(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_410(iVar1, iParam4) == 122 || func_410(iVar1, iParam4) == 123) || func_410(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_410(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (func_410(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				if (func_389(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_450(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_457(iVar6, func_410(iVar1, iParam4), iVar1) && func_471(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_523(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_409(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (MISC::IS_BIT_SET(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1323678[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_457(iVar6, func_410(iVar1, iParam4), iVar1) && func_471(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_523(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_409(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1323678[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_457(iVar6, func_410(iVar1, iParam4), iVar1) && func_471(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_523(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_409(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (MISC::IS_BIT_SET(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_457(iVar6, func_410(iVar1, iParam4), iVar1) && func_471(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_523(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_409(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
										if (MISC::IS_BIT_SET(iVar5, 1) && !MISC::IS_BIT_SET(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_457(iVar6, func_410(iVar1, iParam4), iVar1) && func_471(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_523(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_409(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (MISC::IS_BIT_SET(iVar5, 0))
												{
													return iVar6;
												}
												else if (MISC::IS_BIT_SET(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (MISC::IS_BIT_SET(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1323678[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
										else if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 1))
										{
											return iVar6;
										}
									}
									else if (MISC::IS_BIT_SET(Global_1323678[iVar7 /*141*/].f_102, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
				}
			}
		}
		iVar1++;
	}
	return -1;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
		case 22:
			if (!func_494())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_522(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_471(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_523(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_409(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (MISC::IS_BIT_SET(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1323678[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		case 1:
			iVar1 = -1;
			if (func_471(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_523(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_409(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1323678[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_471(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_523(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_409(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_471(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_523(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_409(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
						if (MISC::IS_BIT_SET(iVar0, 1) && !MISC::IS_BIT_SET(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		case 2:
			iVar1 = -1;
			if (func_471(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_523(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_409(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (MISC::IS_BIT_SET(iVar0, 0))
								{
									return iParam0;
								}
								else if (MISC::IS_BIT_SET(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (MISC::IS_BIT_SET(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1323678[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
						else if (MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 1))
						{
							return iParam0;
						}
					}
					else if (MISC::IS_BIT_SET(Global_1323678[iVar1 /*141*/].f_102, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

void func_523(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (func_453(iParam0, iParam2) - 1);
}

int func_524(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_525(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;

	bVar6 = func_113();
	bVar6 = true;
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_524(iParam3);
	}
	if (!func_401(iParam2) && func_479(iParam2, 0))
	{
		iVar7 = func_478(iParam2);
		return func_527(iVar7, iParam0, bParam1, iParam2, 1, iParam4, bParam5);
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if ((bVar6 || func_410(iVar1, iParam4) > 0) && !func_521(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_410(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_284(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1049924[func_410(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_389(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_450(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_526(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (MISC::IS_BIT_SET(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_526(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_526(iParam2, iVar7))
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (MISC::IS_BIT_SET(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_526(iParam2, iVar7))
							{
								iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
								if (MISC::IS_BIT_SET(iVar5, 1) && !MISC::IS_BIT_SET(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_526(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (MISC::IS_BIT_SET(iVar5, 0))
										{
											return iVar7;
										}
										else if (MISC::IS_BIT_SET(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (MISC::IS_BIT_SET(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
				}
			}
		}
		iVar1++;
	}
	if ((func_21(5394, iParam4, 0) != 0 && !Global_262145.f_20617) && func_471(iParam2, 156))
	{
		iVar7 = func_527(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_413(iParam4) && func_471(iParam2, 223))
	{
		iVar7 = func_527(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_411(iParam4) && func_471(iParam2, 278))
	{
		iVar7 = func_527(278, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_526(int iParam0, int iParam1)
{
	if (!func_401(iParam0))
	{
		if (func_479(iParam0, 0))
		{
			if (iParam1 == func_478(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_480(iParam1) && func_477(iParam1))
		{
			return 0;
		}
	}
	if (func_389(iParam0))
	{
		if (!func_296(iParam1))
		{
			return 0;
		}
	}
	else if (func_296(iParam1))
	{
		return 0;
	}
	if (func_474(iParam1))
	{
		if (!func_362(iParam0))
		{
			return 0;
		}
	}
	else if (func_362(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("CERBERUS") || iParam0 == joaat("CERBERUS2")) || iParam0 == joaat("CERBERUS3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_527(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (iParam0 == 158 && bParam6)
	{
		if (func_526(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_21(func_281(4, iParam0), iParam5, 0) == joaat("HAULER2") || func_21(func_281(4, iParam0), iParam5, 0) == joaat("PHANTOM3"))
				{
					return iParam0;
				}
				else if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1323678[iParam0 /*141*/].f_66 == joaat("HAULER2") || Global_1323678[iParam0 /*141*/].f_66 == joaat("PHANTOM3"))
			{
				return iParam0;
			}
			else if (Global_1323678[iParam0 /*141*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_526(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			case 1:
				if (func_526(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_526(iParam3, iParam0))
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (MISC::IS_BIT_SET(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_526(iParam3, iParam0))
				{
					iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
					if (MISC::IS_BIT_SET(iVar0, 1) && !MISC::IS_BIT_SET(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			case 2:
				if (func_526(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
							else if (MISC::IS_BIT_SET(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (MISC::IS_BIT_SET(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_526(iParam3, iParam0))
				{
				}
				else if (Global_1323678[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
				}
				break;
			case 1:
				if (!func_526(iParam3, iParam0))
				{
				}
				else if (Global_1323678[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_526(iParam3, iParam0))
					{
					}
					else if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
				}
				if (!func_526(iParam3, iParam0))
				{
				}
				else if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 2))
				{
					return iParam0;
				}
				else if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 1))
				{
				}
				break;
			case 2:
				if (!func_526(iParam3, iParam0))
				{
				}
				else if (Global_1323678[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
					else if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 1))
					{
						return iParam0;
					}
				}
				else if (MISC::IS_BIT_SET(Global_1323678[iParam0 /*141*/].f_102, 1))
				{
					return iParam0;
				}
				break;
		}
	}
	return -1;
}

int func_528(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	bVar5 = func_113();
	bVar5 = true;
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_524(iParam3);
	}
	if (iParam3 == 126)
	{
		if (func_410(22, -1) > 0)
		{
			if (!func_494())
			{
				return -1;
			}
		}
	}
	if (!func_401(iParam2) && func_479(iParam2, 0))
	{
		iVar6 = func_478(iParam2);
		return func_527(iVar6, iParam0, bParam1, iParam2, 0, iParam4, bParam5);
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_521(iVar1))
		{
		}
		else if (!bVar5 && func_410(iVar1, iParam4) >= Global_1049924)
		{
			return -1;
		}
		else if (bVar5 || (func_410(iVar1, iParam4) > 0 && func_410(iVar1, iParam4) <= 126))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_410(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_284(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1049924[func_410(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_389(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_450(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_526(iParam2, iVar6))
							{
							}
							else if (Global_1323678[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_526(iParam2, iVar6))
							{
							}
							else if (Global_1323678[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_526(iParam2, iVar6))
								{
								}
								else if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_526(iParam2, iVar6))
							{
							}
							else if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 2))
							{
								return iVar6;
							}
							else if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 1))
							{
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_526(iParam2, iVar6))
							{
							}
							else if (Global_1323678[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
								else if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 1))
								{
									return iVar6;
								}
							}
							else if (MISC::IS_BIT_SET(Global_1323678[iVar6 /*141*/].f_102, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
				}
			}
		}
		iVar1++;
	}
	if ((func_21(5394, iParam4, 0) != 0 && !Global_262145.f_20617) && func_471(iParam2, 156))
	{
		iVar6 = func_527(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_413(iParam4))
	{
		if (func_526(iParam2, 223))
		{
			iVar6 = func_527(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_411(iParam4))
	{
		if (func_526(iParam2, 278))
		{
			iVar6 = func_527(278, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_529(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (func_410(0, -1) >= 1 && func_491(iParam0, 0))
	{
		if (((((((((((func_410(1, -1) >= 1 || (func_410(6, -1) >= 1 && func_491(iParam0, 6))) || func_410(8, -1) >= 1) || func_536()) || (func_534() && func_471(iParam0, 159))) || (func_532() && func_491(iParam0, 13))) || (func_530() && func_491(iParam0, 14))) || (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = func_410(0, -1);
		return;
	}
	else if (func_410(6, -1) >= 1 && func_491(iParam0, 6))
	{
		if (((((((((func_410(8, -1) >= 1 || func_536()) || (func_534() && func_471(iParam0, 159))) || (func_532() && func_491(iParam0, 13))) || (func_530() && func_491(iParam0, 14))) || (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = func_410(6, -1);
		return;
	}
	else if (func_410(8, -1) >= 1 && func_491(iParam0, 8))
	{
		if ((((((((func_536() || (func_534() && func_471(iParam0, 159))) || (func_532() && func_491(iParam0, 13))) || (func_530() && func_491(iParam0, 14))) || (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = func_410(8, -1);
		return;
	}
	else if (func_536() && func_471(iParam0, 156))
	{
		if ((((((((func_534() && func_471(iParam0, 159)) || (func_532() && func_491(iParam0, 13))) || (func_530() && func_491(iParam0, 14))) || (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_534() && func_471(iParam0, 159))
	{
		if (((((((func_532() && func_491(iParam0, 13)) || (func_530() && func_491(iParam0, 14))) || (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = func_410(12, -1);
		return;
	}
	else if (func_532() && func_491(iParam0, 13))
	{
		if (((((func_530() && func_491(iParam0, 14)) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		if (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))
		{
			return;
		}
		*iParam1 = func_410(13, -1);
		return;
	}
	else if (func_530() && func_491(iParam0, 14))
	{
		if ((((((func_530() && func_410(15, -1) >= 1) && func_491(iParam0, 15)) || (func_410(18, -1) >= 1 && func_491(iParam0, 18))) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		if (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))
		{
			return;
		}
		*iParam1 = func_410(14, -1);
		return;
	}
	else if (func_413(-1) && iParam0 == joaat("OPPRESSOR2"))
	{
		if (((func_410(18, -1) >= 1 && func_491(iParam0, 18)) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494()))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_410(18, -1) >= 1 && func_491(iParam0, 18))
	{
		if ((((func_410(19, -1) >= 1 && func_491(iParam0, 18)) || (func_410(21, -1) >= 1 && func_491(iParam0, 21))) || ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = func_410(18, -1);
		return;
	}
	else if (func_410(21, -1) >= 1 && func_491(iParam0, 21))
	{
		if (((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494()) || (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG"))))
		{
			return;
		}
		*iParam1 = func_410(21, -1);
		return;
	}
	else if ((func_410(22, -1) >= 1 && func_491(iParam0, 22)) && func_494())
	{
		if (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG")))
		{
			return;
		}
		*iParam1 = func_410(22, -1);
		return;
	}
	else if (func_411(-1) && (iParam0 == 1455990255 || iParam0 == joaat("STROMBERG")))
	{
		*iParam1 = 1238;
		return;
	}
}

bool func_530()
{
	return func_531() != 0;
}

int func_531()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_322;
}

bool func_532()
{
	return func_533() != 0;
}

int func_533()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_271;
}

bool func_534()
{
	return func_535() != 0;
}

int func_535()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_264;
}

bool func_536()
{
	return func_21(5394, -1, 0) != 0;
}

int func_537(int iParam0, int iParam1)
{
	if (func_410(0, iParam1) != 0 && func_491(iParam0, 0))
	{
		return 1;
	}
	else if (func_410(6, iParam1) != 0 && func_491(iParam0, 6))
	{
		return 1;
	}
	else if (func_410(8, iParam1) != 0 && func_491(iParam0, 8))
	{
		return 1;
	}
	else if (func_410(11, iParam1) != 0 && func_491(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("TRAILERSMALL2"))
	{
		return 1;
	}
	else if (iParam0 == -1254331310)
	{
		return 1;
	}
	else if (((func_21(5394, iParam1, 0) != 0 && func_67(15270, iParam1, -1) == 7) && !Global_262145.f_20617) && func_471(iParam0, 156))
	{
		return 1;
	}
	else if (func_410(12, iParam1) != 0 && func_491(iParam0, 12))
	{
		return 1;
	}
	else if (func_410(13, -1) != 0 && func_491(iParam0, 13))
	{
		return 1;
	}
	else if (func_410(15, iParam1) != 0 && func_491(iParam0, 15))
	{
		return 1;
	}
	else if (func_413(iParam1) && func_471(iParam0, 223))
	{
		return 1;
	}
	else if (func_410(14, -1) != 0 && func_491(iParam0, 14))
	{
		return 1;
	}
	else if (func_410(18, iParam1) != 0 && func_491(iParam0, 18))
	{
		return 1;
	}
	else if (func_410(21, iParam1) != 0 && func_491(iParam0, 21))
	{
		return 1;
	}
	else if ((func_410(22, iParam1) != 0 && func_491(iParam0, 22)) && func_494())
	{
		return 1;
	}
	else if (func_411(iParam1) && func_471(iParam0, 278))
	{
		return 1;
	}
	return 0;
}

int func_538()
{
	int iVar0;
	int iVar1;

	if (func_24(-30941642) != Global_262145.f_26058)
	{
		return 0;
	}
	iVar0 = func_21(8351, -1, 0);
	iVar1 = UNK_0x5A002C4821A13338();
	if (iVar1 > iVar0)
	{
		return 0;
	}
	return 1;
}

int func_539(var uParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, int* iParam5, struct<92> Param6, var uParam98)
{
	switch (iParam4)
	{
		case 0:
			return func_741(sParam1, iParam5, -1, 1);
		case 1:
			return func_627(sParam1, iParam2, uParam3);
		case 2:
			return func_690(uParam0, sParam1, uParam98, -1, 1);
		case 3:
			return func_720(uParam0, sParam1, -1, 1);
		case 4:
			return func_733(uParam0, sParam1, -1, 1);
		case 5:
			return func_582(sParam1, uParam3, Param6);
		case 6:
			if (func_580())
			{
				return func_540(sParam1, func_551(0));
			}
			else
			{
				MISC::CLEAR_BIT(iParam5, 19);
			}
			break;
	}
	return 0;
}

int func_540(char* sParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 5;
				func_546(iVar0);
				break;
			case 1:
				iVar0 = func_544(PLAYER::PLAYER_ID(), 1);
				func_546(iVar0);
				break;
			case 2:
				iVar0 = func_544(PLAYER::PLAYER_ID(), 3);
				func_546(iVar0);
				break;
			case 3:
				iVar0 = func_544(PLAYER::PLAYER_ID(), 4);
				func_546(iVar0);
				break;
			case 4:
				iVar0 = func_544(PLAYER::PLAYER_ID(), 2);
				func_546(iVar0);
				break;
			case 5:
				iVar0 = func_544(PLAYER::PLAYER_ID(), 0);
				func_546(iVar0);
				break;
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				func_542(func_543(iParam1));
				break;
		}
		StringCopy(sParam0, func_541(iParam1), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMDO_OBJ_140";
		case 1:
			return "AMDO_OBJ_136";
		case 2:
			return "AMDO_OBJ_138";
		case 3:
			return "AMDO_OBJ_135";
		case 4:
			return "AMDO_OBJ_137";
		case 5:
			return "AMDO_OBJ_139";
		case 6:
			return "BYCB_FREEL";
		case 7:
			return "BYCB_SASHDE";
		case 8:
			return "BYCB_MGUN";
		case 9:
			return "BYCB_EGG";
		case 10:
			return "BYCB_DMND";
		case 11:
			return "BYCB_WATCH";
	}
	return "INVALID";
}

void func_542(int iParam0)
{
	if (0 == iParam0)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "CASINO_LUCKY_WHEEL"))
	{
		return;
	}
	Global_1696956 = iParam0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5;
		case 7:
			return 4;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 3;
		case 11:
			return 6;
		default:
			break;
	}
	return 0;
}

int func_544(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_8())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			if (func_545(Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/]) == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 2;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 1;
		case 13:
			return 4;
		case 14:
			return 2;
		case 15:
			return 0;
		case 16:
			return 3;
		case 17:
			return 1;
		case 18:
			return 4;
		case 19:
			return 2;
		case 20:
			return 0;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 31:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_546(int iParam0)
{
	int iVar0;

	if (!func_550(iParam0))
	{
		return;
	}
	iVar0 = func_549(PLAYER::PLAYER_ID(), iParam0);
	MISC::SET_BIT(&Global_2515394, iParam0);
	Global_1370204[iParam0] = 0;
	Global_2515395[iParam0] = func_547(PLAYER::PLAYER_ID(), iVar0);
}

int func_547(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_548(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_548(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_549(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == func_8())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_548(Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_550(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_551(bool bParam0)
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;

	iVar13 = 0;
	iVar14 = 0;
	while (iVar14 < 12)
	{
		iVar0[iVar14] = iVar14;
		iVar13 = (iVar13 + func_552(iVar0[iVar14], bParam0));
		iVar14++;
	}
	iVar15 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar13);
	iVar14 = 0;
	while (iVar14 < 12)
	{
		if (iVar15 <= func_552(iVar0[iVar14], bParam0))
		{
			return iVar0[iVar14];
		}
		else
		{
			iVar15 = (iVar15 - func_552(iVar0[iVar14], bParam0));
		}
		iVar14++;
	}
	return -1;
}

int func_552(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (func_578(PLAYER::PLAYER_ID()))
			{
				iVar0 = func_549(PLAYER::PLAYER_ID(), 5);
				if (((func_576(PLAYER::PLAYER_ID(), iVar0) && func_574(PLAYER::PLAYER_ID(), 5)) && func_547(PLAYER::PLAYER_ID(), iVar0) < 80) || bParam1)
				{
					return Global_262145.f_26146;
				}
			}
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (func_572(PLAYER::PLAYER_ID(), func_573(iParam0)))
			{
				if (func_569(func_573(iParam0)) || bParam1)
				{
					return Global_262145.f_26146;
				}
			}
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (func_555() || bParam1)
			{
				if (!func_553(iParam0) || bParam1)
				{
					return Global_262145.f_26146;
				}
			}
			break;
	}
	return 0;
}

bool func_553(int iParam0)
{
	int iVar0;

	iVar0 = func_543(iParam0);
	return func_554(iVar0);
}

int func_554(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1677993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_555()
{
	if ((func_568(PLAYER::PLAYER_ID()) && func_563() < 6) && func_556())
	{
		return 1;
	}
	return 0;
}

int func_556()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			if (!func_557(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_557(int iParam0)
{
	return 0 == func_558(iParam0);
}

int func_558(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_562(iParam0))
	{
		iVar0 = func_561(iParam0);
		iVar1 = func_559(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_559(int iParam0)
{
	if (func_560(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			default:
				break;
		}
	}
	return 3;
}

int func_560(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_561(int iParam0)
{
	int iVar0;

	if (func_560(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/])
			{
				return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_562(int iParam0)
{
	int iVar0;

	if (func_560(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_563()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_567(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_564(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_564(int iParam0)
{
	int iVar0;

	if (func_560(iParam0))
	{
		iVar0 = func_565(func_566(iParam0));
		return func_21(iVar0, -1, 0);
	}
	return 0;
}

int func_565(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3647;
	}
	else if (iParam0 == 1)
	{
		return 3648;
	}
	else if (iParam0 == 2)
	{
		return 3649;
	}
	else if (iParam0 == 3)
	{
		return 3650;
	}
	else if (iParam0 == 4)
	{
		return 3651;
	}
	return 3647;
}

int func_566(int iParam0)
{
	int iVar0;

	if (func_560(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_567(int iParam0)
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iParam0 /*3*/] != 0)
	{
		return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iParam0 /*3*/];
	}
	return 0;
}

int func_568(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_569(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_549(PLAYER::PLAYER_ID(), iVar0);
		if (iVar1 != 0)
		{
			if (func_545(iVar1) == iParam0)
			{
				if (((func_576(PLAYER::PLAYER_ID(), iVar1) && func_570(PLAYER::PLAYER_ID(), iVar0)) && func_574(PLAYER::PLAYER_ID(), iVar0)) && func_547(PLAYER::PLAYER_ID(), iVar1) < 80)
				{
					return 1;
				}
				else
				{
					if (!func_576(PLAYER::PLAYER_ID(), iVar1))
					{
					}
					if (!func_570(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (!func_574(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (func_547(PLAYER::PLAYER_ID(), iVar1) >= 80)
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_570(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_549(iParam0, iParam1);
	iVar2 = func_545(iVar1);
	switch (iVar2)
	{
		case 1:
			if (func_571(iParam0, iVar1) > 8)
			{
				iVar0 = 1;
			}
			break;
		case 3:
			if (func_571(iParam0, iVar1) > 2)
			{
				iVar0 = 1;
			}
			break;
		case 4:
			if (func_571(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		case 0:
			if (func_571(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (func_571(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		case 5:
			if (func_571(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_571(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_548(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == func_8())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/];
			if (func_545(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_574(int iParam0, int iParam1)
{
	if (iParam0 != func_8() && func_575(iParam0, func_549(iParam0, iParam1)))
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/].f_6;
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	int iVar0;

	if (func_548(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_576(int iParam0, int iParam1)
{
	int iVar0;

	if (func_575(iParam0, iParam1))
	{
		iVar0 = func_577(iParam0, iParam1);
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_577(int iParam0, int iParam1)
{
	int iVar0;

	if (func_548(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_578(int iParam0)
{
	return func_579(iParam0) != 0;
}

int func_579(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

int func_580()
{
	bool bVar0;
	int iVar1[5];
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (func_578(PLAYER::PLAYER_ID()))
	{
		iVar8 = func_549(PLAYER::PLAYER_ID(), 5);
		if ((func_576(PLAYER::PLAYER_ID(), iVar8) && func_574(PLAYER::PLAYER_ID(), 5)) && func_547(PLAYER::PLAYER_ID(), iVar8) < 80)
		{
			bVar0 = true;
		}
		if (!func_576(PLAYER::PLAYER_ID(), iVar8))
		{
		}
		if (!func_574(PLAYER::PLAYER_ID(), 5))
		{
		}
		if (func_547(PLAYER::PLAYER_ID(), iVar8) >= 80)
		{
		}
	}
	if (func_581(PLAYER::PLAYER_ID()))
	{
		iVar9 = 0;
		while (iVar9 < 5)
		{
			iVar10 = func_549(PLAYER::PLAYER_ID(), iVar9);
			if ((((iVar10 != 0 && func_576(PLAYER::PLAYER_ID(), iVar10)) && func_570(PLAYER::PLAYER_ID(), iVar9)) && func_574(PLAYER::PLAYER_ID(), iVar9)) && func_547(PLAYER::PLAYER_ID(), iVar10) < 80)
			{
				iVar1[iVar9] = 1;
			}
			if (iVar10 == 0)
			{
			}
			else
			{
				if (!func_576(PLAYER::PLAYER_ID(), iVar10))
				{
				}
				if (!func_570(PLAYER::PLAYER_ID(), iVar9))
				{
				}
				if (!func_574(PLAYER::PLAYER_ID(), iVar9))
				{
				}
				if (func_547(PLAYER::PLAYER_ID(), iVar10) >= 80)
				{
				}
			}
			iVar9++;
		}
	}
	if (func_555())
	{
		iVar11 = 6;
		while (iVar11 <= 11)
		{
			if (!func_553(iVar11))
			{
				bVar7 = true;
			}
			iVar11++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iVar12 = 0;
	while (iVar12 < 5)
	{
		if (iVar1[iVar12])
		{
			return 1;
		}
		iVar12++;
	}
	if (bVar7)
	{
		return 1;
	}
	return 0;
}

int func_581(int iParam0)
{
	int iVar0;

	if (iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_582(char* sParam0, var uParam1, struct<92> Param2)
{
	if (!MISC::IS_BIT_SET(uParam1->f_324, 0))
	{
		uParam1->f_325 = func_625();
		MISC::SET_BIT(&(uParam1->f_324), 0);
	}
	else if (uParam1->f_325 == -1)
	{
	}
	else
	{
		switch (uParam1->f_325)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				return func_618(sParam0, uParam1->f_325, uParam1, Param2);
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				return func_610(sParam0, uParam1, uParam1->f_325, 0);
			case 14:
				return func_610(sParam0, uParam1, uParam1->f_325, 1);
			case 15:
				if (func_609(PLAYER::PLAYER_ID()) >= 5)
				{
					func_584(func_18(), func_217(func_608(PLAYER::PLAYER_ID(), 1), 0));
					func_583();
					StringCopy(sParam0, "CAS_LW_ARMU", 64);
					return 1;
				}
				else
				{
					MISC::CLEAR_BIT(&(uParam1->f_324), 0);
				}
			default:
				break;
		}
	}
	return 0;
}

void func_583()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = SYSTEM::ROUND((50f * Global_262145.f_111));
		func_64(816, iVar0, -1, 1, 0);
		iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
		iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
		iVar3 = (iVar1 - iVar2);
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
	}
}

void func_584(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 >= func_607(238))
	{
		func_593(238, 1, 0);
	}
	if (iParam1 >= func_607(239))
	{
		func_593(239, 1, 0);
	}
	if (iParam1 >= func_607(240))
	{
		func_593(240, 1, 0);
	}
	if (iParam1 >= func_607(241))
	{
		func_593(241, 1, 0);
	}
	if (iParam1 >= func_607(242))
	{
		func_593(242, 1, 0);
	}
	if (iParam1 >= func_607(243))
	{
		func_593(243, 1, 0);
	}
	if (iParam1 >= func_607(244))
	{
		func_593(244, 1, 0);
	}
	if (iParam1 >= func_607(245))
	{
		func_593(245, 1, 0);
	}
	if (iParam1 >= func_607(246))
	{
		func_593(246, 1, 0);
	}
	if (iParam1 >= func_607(247))
	{
		func_593(247, 1, 0);
	}
	if (iParam1 >= func_607(156))
	{
		func_593(156, 1, 0);
	}
	if (iParam1 >= func_607(157))
	{
		func_593(157, 1, 0);
	}
	if (iParam1 >= func_607(158))
	{
		func_593(158, 1, 0);
	}
	if (iParam1 >= func_607(159))
	{
		func_593(159, 1, 0);
	}
	if (iParam1 >= func_607(160))
	{
		func_593(160, 1, 0);
	}
	iVar0 = 0;
	if (func_585(238))
	{
		iVar0++;
	}
	if (func_585(239))
	{
		iVar0++;
	}
	if (func_585(240))
	{
		iVar0++;
	}
	if (func_585(241))
	{
		iVar0++;
	}
	if (func_585(242))
	{
		iVar0++;
	}
	if (func_585(243))
	{
		iVar0++;
	}
	if (func_585(244))
	{
		iVar0++;
	}
	if (func_585(245))
	{
		iVar0++;
	}
	if (func_585(246))
	{
		iVar0++;
	}
	if (func_585(247))
	{
		iVar0++;
	}
	if (func_585(156))
	{
		func_64(1880, iVar0, iParam0, 1, 0);
	}
	if (func_585(157))
	{
		func_64(1881, iVar0, iParam0, 1, 0);
	}
	if (func_585(158))
	{
		func_64(1882, iVar0, iParam0, 1, 0);
	}
	if (func_585(159))
	{
		func_64(1883, iVar0, iParam0, 1, 0);
	}
	if (func_585(160))
	{
		func_64(1884, iVar0, iParam0, 1, 0);
	}
}

bool func_585(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_592())
	{
		return false;
	}
	iVar0 = func_587(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_586(iVar1));
}

int func_586(int iParam0)
{
	return (iParam0 % 32);
}

int func_587(int iParam0)
{
	int iVar0;

	iVar0 = func_21(func_588(iParam0, 999), -1, 0);
	return iVar0;
}

int func_588(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_591(iVar0);
	if (((func_590() == 0 || func_589() == 0) || iParam1 == 0) || (func_590() == 999 && func_589() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 696;
			case 1:
				return 697;
			case 2:
				return 698;
			case 3:
				return 699;
			case 4:
				return 700;
			case 5:
				return 701;
			case 6:
				return 702;
			case 7:
				return 703;
			case 8:
				return 704;
			case 9:
				return 2054;
			case 10:
				return 2066;
			case 11:
				return 2093;
			case 12:
				return 2429;
			case 13:
				return 2948;
			case 14:
				return 5511;
			case 15:
				return 5515;
			case 16:
				return 5519;
			case 17:
				return 5523;
			case 18:
				return 5527;
			case 19:
				return 5531;
			case 20:
				return 5591;
			case 21:
				return 5595;
			case 22:
				return 5599;
			case 23:
				return 5603;
			case 24:
				return 5607;
			case 25:
				return 5611;
			case 26:
				return 5615;
			case 27:
				return 5636;
			case 28:
				return 5640;
			case 29:
				return 5644;
			case 30:
				return 5648;
			case 31:
				return 5652;
			case 32:
				return 5656;
			case 33:
				return 6466;
			case 34:
				return 6470;
			case 35:
				return 6474;
			case 36:
				return 6478;
			case 37:
				return 6482;
			case 38:
				return 6486;
			case 39:
				return 6490;
		}
	}
	return 11771;
}

int func_589()
{
	return Global_30969;
}

int func_590()
{
	return Global_30968;
}

int func_591(int iParam0)
{
	return (iParam0 / 32);
}

bool func_592()
{
	return Global_1312875;
}

void func_593(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_585(iParam0))
		{
			func_606(iParam0, 1);
		}
		if (bParam2)
		{
			if (func_604(iParam0) == 0)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(func_603(iParam0));
				HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK(func_602(iParam0), 2, func_603(iParam0));
				if (AUDIO::HAS_SOUND_FINISHED(-1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
				}
				func_595(29, func_603(iParam0), func_601(iParam0), func_599(iParam0), func_597(iParam0), -1, 0, 0, 0, -1, 0);
				func_594(iParam0, 1);
			}
		}
	}
	else if (func_585(iParam0))
	{
		func_606(iParam0, 0);
	}
}

void func_594(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2550458.f_1011[func_591(iVar0)]), func_586(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2550458.f_1011[func_591(iVar0)]), func_586(iVar0));
		}
	}
}

void func_595(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_596(&Global_1385106);
	Global_1385106[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1385106[iVar0 /*106*/].f_97 = iParam5;
	Global_1385106[iVar0 /*106*/].f_104 = iParam9;
	Global_1385106[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1385106[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_596(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_597(int iParam0)
{
	char* sVar0;

	sVar0 = "MpAwards1";
	switch (iParam0)
	{
		case 155:
			return func_598(joaat("WEAPON_SMOKEGRENADE"), 0);
	}
	return sVar0;
}

char* func_598(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0";
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1";
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1";
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1";
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
				case joaat("COMPONENT_SMG_CLIP_01"):
				case joaat("COMPONENT_SMG_CLIP_02"):
				case joaat("COMPONENT_AT_PI_SUPP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
					return "MPWeaponsGang0";
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsGang0";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_RAILCOVER_01"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_SUPP"):
					return "MPWeaponsGang0";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
				case joaat("COMPONENT_AT_SR_SUPP"):
				case joaat("COMPONENT_AT_PI_FLSH"):
					return "MPWeaponsCommon";
			}
			break;
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0";
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon";
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return "MPWeaponsCommon";
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return "MPWeaponsGang0";
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsCommon";
			}
			break;
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon";
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return "MPWeaponsGang0";
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_SUPP"):
					return "MPWeaponsGang0";
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
				case joaat("COMPONENT_AT_PI_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsCommon";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsGang1";
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
				case joaat("COMPONENT_MG_CLIP_01"):
				case joaat("COMPONENT_MG_CLIP_02"):
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return "MPWeaponsGang1";
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1";
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return "MPWeaponsGang1";
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
				case joaat("COMPONENT_AT_PI_SUPP"):
				case joaat("COMPONENT_AT_PI_FLSH"):
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return "MPWeaponsCommon";
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon";
	}
	return "";
}

char* func_599(int iParam0)
{
	char* sVar0;

	sVar0 = "GenericKit";
	switch (iParam0)
	{
		case 155:
			return func_600(joaat("WEAPON_SMOKEGRENADE"), 0, 0);
	}
	return sVar0;
}

char* func_600(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return "W_ME_KNIFE_01";
			case joaat("WEAPON_STUNGUN"):
				return "W_PI_Stungun";
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_Pistol";
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						return "W_PI_Pistol_Mag1";
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						return "W_PI_Pistol_Mag2";
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_Pistol_Flash";
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						return "W_PI_Pistol_Supp";
				}
				break;
			case joaat("GADGET_PARACHUTE"):
				return "Parachute_Main";
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_SMG";
					case joaat("COMPONENT_SMG_CLIP_01"):
						return "W_SB_SMG_Mag1";
					case joaat("COMPONENT_SMG_CLIP_02"):
						return "W_SB_SMG_Mag2";
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_SB_SMG_Supp";
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_SB_SMG_Flash";
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_SniperRifle";
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						return "W_SR_SniperRifle_Mag1";
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						return "W_SR_SniperRifle_Scope";
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SR_SniperRifle_Supp";
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_CarbineRifle";
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						return "W_AR_CarbineRifle_Mag1";
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						return "W_AR_CarbineRifle_Mag2";
					case joaat("COMPONENT_AT_RAILCOVER_01"):
						return "CarbineRifle_RAILCOVER_1";
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_AR_CarbineRifle_Grip";
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_AR_CarbineRifle_Flash";
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "W_AR_CarbineRifle_Scope";
					case joaat("COMPONENT_AT_AR_SUPP"):
						return "W_AR_CarbineRifle_Supp";
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				break;
			case joaat("WEAPON_SNSPISTOL"):
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_PumpShotgun";
					case joaat("COMPONENT_AT_SR_SUPP"):
						return "W_SG_PumpShotgun_Supp";
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_SG_PumpShotgun_Flash";
				}
				break;
			case joaat("WEAPON_GRENADE"):
				return "W_Ex_GrenadeFrag";
			case joaat("WEAPON_STICKYBOMB"):
				return "W_Ex_PE";
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case 0:
						return "W_R_GrenadeLauncher";
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_R_GrenadeLauncher_Grip";
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_R_GrenadeLauncher_Flash";
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						return "W_R_GrenadeLauncher_Scope";
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_CombatMG";
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "W_MG_CombatMG_Scope";
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_MG_CombatMG_Grip";
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						return "W_MG_CombatMG_Mag2";
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						return "W_MG_CombatMG_Mag1";
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_AssaultShotgun";
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						return "W_SG_AssaultShotgun_Mag1";
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						return "W_SG_AssaultShotgun_Mag2";
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_SG_AssaultShotgun_Grip";
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_SG_AssaultShotgun_Flsh";
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SG_AssaultShotgun_Supp";
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_AppPistol";
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						return "W_PI_AppPistol_Mag1";
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						return "W_PI_AppPistol_Mag2";
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_AppPistol_Flash";
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_PI_AppPistol_Supp";
				}
				break;
			case joaat("WEAPON_RPG"):
				return "W_LR_RPG";
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_HeavySniper";
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						return "W_SR_HeavySniper_Mag1";
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						return "W_SR_HeavySniper_Scope";
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AdvancedRifle";
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						return "W_AR_AdvancedRifle_mag1";
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						return "W_AR_AdvancedRifle_Mag2";
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "AdvancedRifle_AFGRIP";
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "AssaultRifle_FLASHLIGHT";
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "AssaultRifle_SCOPE_SMALL";
					case joaat("COMPONENT_AT_AR_SUPP"):
						return "AdvancedRifle_SUPPRESSOR";
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_MicroSMG";
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						return "W_SB_MicroSMG_Mag1";
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						return "W_SB_MicroSMG_Mag2";
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_SB_MicroSMG_Flash";
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						return "W_SB_MicroSMG_Scope";
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SB_MicroSMG_Supp";
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AssaultRifle";
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						return "W_AR_AssaultRifle_Mag1";
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						return "W_AR_AssaultRifle_Mag2";
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_AR_AssaultRifle_Grip";
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_AR_AssaultRifle_Flash";
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						return "W_AR_AssaultRifle_Scope";
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_AR_AssaultRifle_Supp";
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_MG";
					case joaat("COMPONENT_MG_CLIP_01"):
						return "W_MG_MG_Mag1";
					case joaat("COMPONENT_MG_CLIP_02"):
						return "W_MG_MG_Mag2";
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						return "W_MG_MG_Scope";
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return "W_SG_SAWNOFF";
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_Minigun";
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						return "W_MG_Minigun_Laser";
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_CombatPistol";
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_PI_CombatPistol_Supp";
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_CombatPistol_Flash";
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						return "W_PI_CombatPistol_Mag1";
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						return "W_PI_CombatPistol_Mag2";
				}
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				return "W_Ex_GrenadeSmoke";
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return "W_ME_Knife_SILHOUETTE";
			case joaat("WEAPON_STUNGUN"):
				return "W_PI_Stungun_SILHOUETTE";
			case joaat("WEAPON_PISTOL"):
				return "W_PI_Pistol_SILHOUETTE";
			case joaat("GADGET_PARACHUTE"):
				return "Parachute_Main";
			case joaat("WEAPON_SMG"):
				return "W_SB_SMG_SILHOUETTE";
			case joaat("WEAPON_SNIPERRIFLE"):
				return "W_SR_SniperRifle_SILHOUETTE";
			case joaat("WEAPON_CARBINERIFLE"):
				return "W_AR_CarbineRifle_SILHOUETTE";
			case joaat("WEAPON_SPECIALCARBINE"):
				return "W_AR_CarbineRifle_SILHOUETTE";
			case joaat("WEAPON_SNSPISTOL"):
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				return "W_SG_PumpShotgun_SILHOUETTE";
			case joaat("WEAPON_GRENADE"):
				return "W_Ex_GrenadeFrag_SILHOUETTE";
			case joaat("WEAPON_STICKYBOMB"):
				return "W_Ex_PE_SILHOUETTE";
			case joaat("WEAPON_GRENADELAUNCHER"):
				return "W_R_GrenadeLauncher_SILHOUETTE";
			case joaat("WEAPON_COMBATMG"):
				return "W_MG_CombatMG_SILHOUETTE";
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return "W_SG_AssaultShotgun_SILHOUETTE";
			case joaat("WEAPON_APPISTOL"):
				return "W_PI_AppPistol_SILHOUETTE";
			case joaat("WEAPON_RPG"):
				return "W_LR_RPG_SILHOUETTE";
			case joaat("WEAPON_HEAVYSNIPER"):
				return "W_SR_HeavySniper_SILHOUETTE";
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return "W_AR_AdvancedRifle_SILHOUETTE";
			case joaat("WEAPON_MICROSMG"):
				return "W_SB_MicroSMG_SILHOUETTE";
			case joaat("WEAPON_ASSAULTRIFLE"):
				return "W_AR_AssaultRifle_SILHOUETTE";
			case joaat("WEAPON_MG"):
				return "W_MG_MG_SILHOUETTE";
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return "W_SG_SAWNOFF_SILHOUETTE";
			case joaat("WEAPON_MINIGUN"):
				return "W_MG_Minigun_SILHOUETTE";
			case joaat("WEAPON_COMBATPISTOL"):
				return "W_PI_CombatPistol_SILHOUETTE";
			case joaat("WEAPON_SMOKEGRENADE"):
				return "W_Ex_GrenadeSmoke_SILHOUETTE";
		}
	}
	return "";
}

char* func_601(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "WT_PARA";
		case 5:
			return "KIT_THERMAL";
		case 2:
			return "KIT_SMOK_RED";
		case 3:
			return "KIT_SMOK_ORA";
		case 4:
			return "KIT_SMOK_YEL";
		case 6:
			return "KIT_SMOK_BLA";
		case 7:
			return "KIT_SMOK_BLU";
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return "WM_TINTD";
	}
	return sVar0;
}

char* func_602(int iParam0)
{
	switch (iParam0)
	{
		case 56:
		case 76:
		case 96:
		case 116:
			return "TINT_PISTOL";
		case 57:
		case 77:
		case 97:
		case 117:
			return "TINT_CMBTPISTOL";
		case 58:
		case 78:
		case 98:
		case 118:
			return "TINT_APPISTOL";
		case 59:
		case 79:
		case 99:
		case 119:
			return "TINT_MICROSMG";
		case 60:
		case 80:
		case 100:
		case 120:
			return "TINT_SMG";
		case 61:
		case 81:
		case 101:
		case 121:
			return "TINT_ASLTRIFLE";
		case 62:
		case 82:
		case 102:
		case 122:
			return "TINT_CRBNRIFLE";
		case 63:
		case 83:
		case 103:
		case 123:
			return "TINT_ADVRRIFLE";
		case 64:
		case 84:
		case 104:
		case 124:
			return "TINT_MG";
		case 65:
		case 85:
		case 105:
		case 125:
			return "TINT_CMBTMG";
		case 66:
		case 86:
		case 106:
		case 126:
			return "TINT_PUMP";
		case 67:
		case 87:
		case 107:
		case 127:
			return "TINT_SAWOFF";
		case 68:
		case 88:
		case 108:
		case 128:
			return "TINT_ASLTSHTGN";
		case 71:
		case 91:
		case 111:
		case 131:
			return "TINT_SNIPERRFL";
		case 72:
		case 92:
		case 112:
		case 132:
			return "TINT_HVYSNIPER";
		case 73:
		case 93:
		case 113:
		case 133:
			return "TINT_GRNLAUNCH";
		case 74:
		case 94:
		case 114:
		case 134:
			return "TINT_RPG";
		case 75:
		case 95:
		case 115:
		case 135:
			return "TINT_MINIGUN";
		case 192:
		case 163:
		case 164:
		case 165:
			return "TINT_ASSAULTSMG";
		case 169:
		case 170:
		case 171:
			return "TINT_ASSAULTSNIPER";
		case 175:
		case 176:
		case 177:
		case 194:
			return "TINT_Pistol50";
		case 181:
		case 182:
		case 183:
		case 193:
			return "TINT_ASSAULTMG";
		case 187:
		case 188:
		case 189:
		case 191:
			return "TINT_HEAVYRIFLE";
	}
	return "WEAPON_UNLOCK";
}

char* func_603(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 5:
			return "KIT_THERMAL";
		case 2:
			return "KIT_SMOK_RED";
		case 3:
			return "KIT_SMOK_ORA";
		case 4:
			return "KIT_SMOK_YEL";
		case 6:
			return "KIT_SMOK_BLA";
		case 7:
			return "KIT_SMOK_BLU";
		case 16:
			return "AWT_651";
		case 17:
			return "AWT_651";
		case 18:
			return "AWT_651";
		case 19:
			return "AWT_651";
		case 20:
			return "AWT_651";
		case 21:
			return "AWT_651";
		case 22:
			return "AWT_651";
		case 23:
			return "AWT_651";
		case 24:
			return "AWT_651";
		case 25:
			return "AWT_651";
		case 26:
			return "AWT_651";
		case 27:
			return "AWT_651";
		case 28:
			return "AWT_651";
		case 29:
			return "AWT_651";
		case 30:
			return "AWT_651";
		case 31:
			return "AWT_651";
		case 32:
			return "AWT_651";
		case 33:
			return "AWT_651";
		case 34:
			return "AWT_651";
		case 35:
			return "AWT_651";
		case 36:
			return "AWT_650";
		case 37:
			return "AWT_650";
		case 38:
			return "AWT_650";
		case 39:
			return "AWT_650";
		case 40:
			return "AWT_650";
		case 41:
			return "AWT_650";
		case 42:
			return "AWT_650";
		case 43:
			return "AWT_650";
		case 44:
			return "AWT_650";
		case 45:
			return "AWT_650";
		case 46:
			return "AWT_650";
		case 47:
			return "AWT_650";
		case 48:
			return "AWT_650";
		case 49:
			return "AWT_650";
		case 50:
			return "AWT_650";
		case 51:
			return "AWT_650";
		case 52:
			return "AWT_650";
		case 53:
			return "AWT_650";
		case 54:
			return "AWT_650";
		case 55:
			return "AWT_650";
		case 136:
			return "AWT_657";
		case 137:
			return "AWT_657";
		case 138:
			return "AWT_657";
		case 139:
			return "AWT_657";
		case 140:
			return "AWT_657";
		case 141:
			return "AWT_657";
		case 142:
			return "AWT_657";
		case 143:
			return "AWT_657";
		case 144:
			return "AWT_657";
		case 145:
			return "AWT_657";
		case 146:
			return "AWT_657";
		case 147:
			return "AWT_657";
		case 148:
			return "AWT_657";
		case 149:
			return "AWT_657";
		case 150:
			return "AWT_657";
		case 151:
			return "AWT_657";
		case 152:
			return "AWT_657";
		case 153:
			return "AWT_657";
		case 154:
			return "AWT_657";
		case 155:
			return "AWT_657";
		case 56:
			return "TAN_TINT_HEAD";
		case 57:
			return "TAN_TINT_HEAD";
		case 58:
			return "TAN_TINT_HEAD";
		case 59:
			return "TAN_TINT_HEAD";
		case 60:
			return "TAN_TINT_HEAD";
		case 61:
			return "TAN_TINT_HEAD";
		case 62:
			return "TAN_TINT_HEAD";
		case 63:
			return "TAN_TINT_HEAD";
		case 64:
			return "TAN_TINT_HEAD";
		case 65:
			return "TAN_TINT_HEAD";
		case 66:
			return "TAN_TINT_HEAD";
		case 67:
			return "TAN_TINT_HEAD";
		case 68:
			return "TAN_TINT_HEAD";
		case 71:
			return "TAN_TINT_HEAD";
		case 72:
			return "TAN_TINT_HEAD";
		case 73:
			return "TAN_TINT_HEAD";
		case 74:
			return "TAN_TINT_HEAD";
		case 75:
			return "TAN_TINT_HEAD";
		case 76:
			return "GREEN_TINT_HEAD";
		case 77:
			return "GREEN_TINT_HEAD";
		case 78:
			return "GREEN_TINT_HEAD";
		case 79:
			return "GREEN_TINT_HEAD";
		case 80:
			return "GREEN_TINT_HEAD";
		case 81:
			return "GREEN_TINT_HEAD";
		case 82:
			return "GREEN_TINT_HEAD";
		case 83:
			return "GREEN_TINT_HEAD";
		case 84:
			return "GREEN_TINT_HEAD";
		case 85:
			return "GREEN_TINT_HEAD";
		case 86:
			return "GREEN_TINT_HEAD";
		case 87:
			return "GREEN_TINT_HEAD";
		case 88:
			return "GREEN_TINT_HEAD";
		case 91:
			return "GREEN_TINT_HEAD";
		case 92:
			return "GREEN_TINT_HEAD";
		case 93:
			return "GREEN_TINT_HEAD";
		case 94:
			return "GREEN_TINT_HEAD";
		case 95:
			return "GREEN_TINT_HEAD";
		case 96:
			return "RED_TINT_HEAD";
		case 97:
			return "RED_TINT_HEAD";
		case 98:
			return "RED_TINT_HEAD";
		case 99:
			return "RED_TINT_HEAD";
		case 100:
			return "RED_TINT_HEAD";
		case 101:
			return "RED_TINT_HEAD";
		case 102:
			return "RED_TINT_HEAD";
		case 103:
			return "RED_TINT_HEAD";
		case 104:
			return "RED_TINT_HEAD";
		case 105:
			return "RED_TINT_HEAD";
		case 106:
			return "RED_TINT_HEAD";
		case 107:
			return "RED_TINT_HEAD";
		case 108:
			return "RED_TINT_HEAD";
		case 111:
			return "RED_TINT_HEAD";
		case 112:
			return "RED_TINT_HEAD";
		case 113:
			return "RED_TINT_HEAD";
		case 114:
			return "RED_TINT_HEAD";
		case 115:
			return "RED_TINT_HEAD";
		case 116:
			return "BLUE_TINT_HEAD";
		case 117:
			return "BLUE_TINT_HEAD";
		case 118:
			return "BLUE_TINT_HEAD";
		case 119:
			return "BLUE_TINT_HEAD";
		case 120:
			return "BLUE_TINT_HEAD";
		case 121:
			return "BLUE_TINT_HEAD";
		case 122:
			return "BLUE_TINT_HEAD";
		case 123:
			return "BLUE_TINT_HEAD";
		case 124:
			return "BLUE_TINT_HEAD";
		case 125:
			return "BLUE_TINT_HEAD";
		case 126:
			return "BLUE_TINT_HEAD";
		case 127:
			return "BLUE_TINT_HEAD";
		case 128:
			return "BLUE_TINT_HEAD";
		case 131:
			return "BLUE_TINT_HEAD";
		case 132:
			return "BLUE_TINT_HEAD";
		case 133:
			return "BLUE_TINT_HEAD";
		case 134:
			return "BLUE_TINT_HEAD";
		case 135:
			return "BLUE_TINT_HEAD";
		case 163:
			return "TAN_TINT_HEAD";
		case 164:
			return "BLUE_TINT_HEAD";
		case 165:
			return "RED_TINT_HEAD";
		case 169:
			return "TAN_TINT_HEAD";
		case 170:
			return "BLUE_TINT_HEAD";
		case 171:
			return "RED_TINT_HEAD";
		case 175:
			return "TAN_TINT_HEAD";
		case 176:
			return "BLUE_TINT_HEAD";
		case 177:
			return "RED_TINT_HEAD";
		case 181:
			return "TAN_TINT_HEAD";
		case 182:
			return "BLUE_TINT_HEAD";
		case 183:
			return "RED_TINT_HEAD";
		case 187:
			return "TAN_TINT_HEAD";
		case 188:
			return "BLUE_TINT_HEAD";
		case 189:
			return "RED_TINT_HEAD";
		case 191:
			return "GREEN_TINT_HEAD";
		case 192:
			return "GREEN_TINT_HEAD";
		case 193:
			return "GREEN_TINT_HEAD";
		case 194:
			return "GREEN_TINT_HEAD";
	}
	return sVar0;
}

bool func_604(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_605(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_586(iVar1));
}

var func_605(int iParam0)
{
	var uVar0;

	uVar0 = Global_2550458.f_1011[func_591(iParam0)];
	return uVar0;
}

void func_606(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_587(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_586(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_586(iVar1));
		}
		func_64(func_588(iParam0, 999), iVar0, -1, 1, 0);
	}
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
		case 256:
			return 11;
		case 257:
			return 11;
		case 258:
			return 11;
		case 259:
			return 11;
		case 260:
			return 11;
		case 261:
			return 11;
		case 262:
			return 11;
		case 305:
			return 11;
		case 306:
			return 11;
		case 307:
			return 11;
		case 308:
			return 11;
		case 309:
			return 11;
		case 310:
			return 11;
		case 311:
			return 11;
		case 312:
			return 11;
		case 313:
			return 11;
		case 314:
			return 11;
		case 315:
			return 11;
		case 316:
			return 11;
		case 317:
			return 11;
		case 318:
			return 11;
		case 319:
			return 11;
		case 320:
			return 11;
		case 321:
			return 11;
		case 322:
			return 11;
		case 323:
			return 11;
		case 263:
			return 11;
		case 264:
			return 11;
		case 265:
			return 11;
		case 302:
			return 11;
		case 303:
			return 11;
		case 304:
			return 11;
		case 296:
			return 11;
		case 297:
			return 11;
		case 298:
			return 11;
		case 299:
			return 11;
		case 300:
			return 11;
		case 301:
			return 11;
		case 156:
			return 5;
		case 157:
			return 10;
		case 158:
			return 15;
		case 159:
			return 20;
		case 160:
			return 25;
		case 2:
			return 27;
		case 3:
			return 24;
		case 4:
			return 22;
		case 6:
			return 15;
		case 7:
			return 18;
		case 8:
			return 44;
		case 9:
			return 16;
		case 10:
			return 23;
		case 11:
			return 38;
		case 12:
			return 32;
		case 13:
			return 11;
		case 14:
			return 56;
		case 15:
			return 28;
		case 288:
			return 44;
		case 289:
			return 16;
		case 290:
			return 23;
		case 291:
			return 38;
		case 292:
			return 32;
		case 293:
			return 11;
		case 294:
			return 56;
		case 295:
			return 28;
		case 17:
			return 75;
		case 136:
			return 50;
		case 137:
			return 50;
		case 138:
			return 50;
		case 139:
			return 50;
		case 140:
			return 50;
		case 141:
			return 50;
		case 142:
			return 50;
		case 143:
			return 50;
		case 144:
			return 50;
		case 145:
			return 50;
		case 146:
			return 50;
		case 147:
			return 50;
		case 148:
			return 50;
		case 149:
			return 50;
		case 150:
			return 50;
		case 151:
			return 50;
		case 152:
			return 50;
		case 153:
			return 50;
		case 154:
			return 50;
		case 155:
			return 50;
		case 36:
			return 100;
		case 238:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 0;
			}
			break;
		case 239:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 15;
			}
			break;
		case 240:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 30;
			}
			break;
		case 241:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 45;
			}
			break;
		case 242:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 60;
			}
			break;
		case 243:
			if (Global_262145.f_2863 > -1)
			{
				return Global_262145.f_2863;
			}
			else
			{
				return 75;
			}
			break;
		case 244:
			if (Global_262145.f_2864 > -1)
			{
				return Global_262145.f_2864;
			}
			else
			{
				return 90;
			}
			break;
		case 245:
			if (Global_262145.f_2865 > -1)
			{
				return Global_262145.f_2865;
			}
			else
			{
				return 105;
			}
			break;
		case 246:
			if (Global_262145.f_2866 > -1)
			{
				return Global_262145.f_2866;
			}
			else
			{
				return 130;
			}
			break;
		case 247:
			if (Global_262145.f_2867 > -1)
			{
				return Global_262145.f_2867;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
		case 346:
			return 11;
		case 347:
			return 11;
		case 348:
			return 11;
		case 349:
			return 11;
		case 350:
			return 11;
		case 351:
			return 11;
		case 352:
			return 11;
		case 353:
			return 11;
		case 354:
			return 11;
		case 355:
			return 11;
		case 356:
			return 11;
		case 357:
			return 11;
		case 358:
			return 11;
		case 359:
			return 11;
		case 360:
			return 11;
		case 361:
			return 11;
		case 362:
			return 11;
		case 363:
			return 11;
		case 364:
			return 11;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		case 57:
			return 100;
		case 58:
			return 100;
		case 59:
			return 100;
		case 60:
			return 100;
		case 61:
			return 100;
		case 62:
			return 100;
		case 63:
			return 100;
		case 64:
			return 100;
		case 65:
			return 100;
		case 66:
			return 100;
		case 67:
			return 100;
		case 68:
			return 100;
		case 69:
			return 100;
		case 70:
			return 100;
		case 71:
			return 100;
		case 72:
			return 100;
		case 73:
			return 100;
		case 74:
			return 100;
		case 75:
			return 100;
		case 76:
			return 200;
		case 77:
			return 200;
		case 78:
			return 200;
		case 79:
			return 200;
		case 80:
			return 200;
		case 81:
			return 200;
		case 82:
			return 200;
		case 83:
			return 200;
		case 84:
			return 200;
		case 85:
			return 200;
		case 86:
			return 200;
		case 87:
			return 200;
		case 88:
			return 200;
		case 89:
			return 200;
		case 90:
			return 200;
		case 91:
			return 200;
		case 92:
			return 200;
		case 93:
			return 200;
		case 94:
			return 200;
		case 95:
			return 200;
		case 96:
			return 400;
		case 97:
			return 400;
		case 98:
			return 400;
		case 99:
			return 400;
		case 100:
			return 400;
		case 101:
			return 400;
		case 102:
			return 400;
		case 103:
			return 400;
		case 104:
			return 400;
		case 105:
			return 400;
		case 106:
			return 400;
		case 107:
			return 400;
		case 108:
			return 400;
		case 109:
			return 400;
		case 110:
			return 400;
		case 111:
			return 400;
		case 112:
			return 400;
		case 113:
			return 400;
		case 114:
			return 400;
		case 115:
			return 400;
		case 116:
			return 600;
		case 117:
			return 600;
		case 118:
			return 600;
		case 119:
			return 600;
		case 120:
			return 600;
		case 121:
			return 600;
		case 122:
			return 600;
		case 123:
			return 600;
		case 124:
			return 600;
		case 125:
			return 600;
		case 126:
			return 600;
		case 127:
			return 600;
		case 128:
			return 600;
		case 129:
			return 600;
		case 130:
			return 600;
		case 131:
			return 600;
		case 132:
			return 600;
		case 133:
			return 600;
		case 134:
			return 600;
		case 135:
			return 600;
		default:
			break;
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		case 162:
			return 50;
		case 163:
			return 100;
		case 164:
			return 600;
		case 165:
			return 400;
		case 166:
			return 100;
		case 167:
			return 75;
		case 168:
			return 50;
		case 169:
			return 100;
		case 170:
			return 600;
		case 171:
			return 400;
		case 172:
			return 100;
		case 173:
			return 75;
		case 174:
			return 50;
		case 175:
			return 100;
		case 176:
			return 600;
		case 177:
			return 400;
		case 178:
			return 100;
		case 179:
			return 75;
		case 180:
			return 50;
		case 181:
			return 100;
		case 182:
			return 600;
		case 183:
			return 400;
		case 184:
			return 100;
		default:
			break;
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		case 186:
			return 50;
		case 187:
			return 100;
		case 188:
			return 600;
		case 189:
			return 400;
		case 190:
			return 100;
		case 191:
			return 200;
		case 192:
			return 200;
		case 193:
			return 200;
		case 194:
			return 200;
		case 195:
			return 75;
		case 196:
			return 50;
		case 197:
			return 100;
		case 198:
			return 600;
		case 199:
			return 400;
		case 200:
			return 100;
		case 201:
			return 200;
		case 202:
			return 75;
		case 203:
			return 50;
		case 204:
			return 100;
		case 205:
			return 600;
		case 206:
			return 400;
		case 207:
			return 100;
		case 208:
			return 200;
		case 209:
			return 75;
		case 210:
			return 50;
		case 211:
			return 100;
		case 212:
			return 600;
		case 213:
			return 400;
		case 214:
			return 100;
		case 215:
			return 200;
		case 224:
			return 75;
		case 225:
			return 50;
		case 226:
			return 100;
		case 227:
			return 600;
		case 228:
			return 400;
		case 229:
			return 100;
		case 230:
			return 200;
		case 231:
			return 75;
		case 232:
			return 50;
		case 233:
			return 100;
		case 234:
			return 600;
		case 235:
			return 400;
		case 236:
			return 100;
		case 237:
			return 200;
		default:
			break;
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		case 267:
			return 50;
		case 268:
			return 100;
		case 269:
			return 600;
		case 270:
			return 400;
		case 271:
			return 100;
		case 272:
			return 200;
		case 273:
			return 75;
		case 274:
			return 50;
		case 275:
			return 100;
		case 276:
			return 600;
		case 277:
			return 400;
		case 278:
			return 100;
		case 279:
			return 200;
		case 280:
			return 75;
		case 281:
			return 50;
		case 282:
			return 100;
		case 283:
			return 600;
		case 284:
			return 400;
		case 285:
			return 100;
		case 286:
			return 200;
		case 324:
			return 75;
		case 325:
			return 50;
		case 326:
			return 100;
		case 327:
			return 600;
		case 328:
			return 400;
		case 329:
			return 100;
		case 330:
			return 200;
		case 331:
			return 75;
		case 332:
			return 50;
		case 333:
			return 100;
		case 334:
			return 600;
		case 335:
			return 400;
		case 336:
			return 100;
		case 337:
			return 200;
		case 338:
			return 75;
		case 339:
			return 50;
		case 340:
			return 100;
		case 341:
			return 600;
		case 342:
			return 400;
		case 343:
			return 100;
		case 344:
			return 200;
		case 372:
			return 11;
		case 373:
			return 11;
		case 374:
			return 11;
		case 375:
			return 11;
		case 376:
			return 11;
		default:
			break;
	}
	switch (iParam0)
	{
		case 1184:
			return 11;
		case 1185:
			return 11;
	}
	return 0;
}

int func_608(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_220(iParam0);
}

int func_609(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

int func_610(char* sParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_113())
	{
		if (func_615(uParam1, iParam2, bParam3))
		{
		}
		else if (uParam1->f_320 == 2)
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_115(func_114()));
			if (!bParam3)
			{
				func_614(iParam2);
				StringCopy(sParam0, func_612(func_613(iParam2)), 64);
			}
			else
			{
				func_611();
				StringCopy(sParam0, "CAS_LW_ALS", 64);
			}
			func_109(func_114());
			return 1;
		}
	}
	else
	{
		if (!bParam3)
		{
			func_614(iParam2);
			StringCopy(sParam0, func_612(func_613(iParam2)), 64);
		}
		else
		{
			func_611();
			StringCopy(sParam0, "CAS_LW_ALS", 64);
		}
		return 1;
	}
	return 0;
}

void func_611()
{
	int iVar0;

	if (func_21(1275, -1, 0) < 30)
	{
		iVar0 = (20 - func_21(1275, -1, 0));
	}
	func_221(1275, iVar0, -1);
	func_187(16, 1, -1, 1);
	if (func_21(1276, -1, 0) < 15)
	{
		iVar0 = (15 - func_21(1276, -1, 0));
	}
	func_221(1276, iVar0, -1);
	func_187(15, 1, -1, 1);
	if (func_21(1277, -1, 0) < 5)
	{
		iVar0 = (5 - func_21(1277, -1, 0));
	}
	func_187(14, 1, -1, 1);
	func_221(1277, iVar0, -1);
	if (func_21(1097, -1, 0) < 20)
	{
		iVar0 = (20 - func_21(1097, -1, 0));
	}
	func_221(1097, iVar0, -1);
	if (func_21(62, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(62, -1, 0));
	}
	func_221(62, iVar0, -1);
	if (func_21(63, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(63, -1, 0));
	}
	func_221(63, iVar0, -1);
}

char* func_612(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "CAS_LW_S1";
		case 1:
			return "CAS_LW_S2";
		case 2:
			return "CAS_LW_S3";
		case 4:
			return "CAS_LW_S4";
		case 0:
			return "CAS_LW_S5";
		case 5:
			return "CAS_LW_S6";
		default:
			break;
	}
	return "INVALID";
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_614(int iParam0)
{
	int iVar0;

	switch (func_613(iParam0))
	{
		case 3:
			if (func_21(1275, -1, 0) < 30)
			{
				iVar0 = (20 - func_21(1275, -1, 0));
			}
			func_221(1275, iVar0, -1);
			func_187(16, 1, -1, 1);
			break;
		case 1:
			if (func_21(1276, -1, 0) < 15)
			{
				iVar0 = (15 - func_21(1276, -1, 0));
			}
			func_221(1276, iVar0, -1);
			func_187(15, 1, -1, 1);
			break;
		case 2:
			if (func_21(1277, -1, 0) < 5)
			{
				iVar0 = (5 - func_21(1277, -1, 0));
			}
			func_187(14, 1, -1, 1);
			func_221(1277, iVar0, -1);
			break;
		case 4:
			if (func_21(1097, -1, 0) < 20)
			{
				iVar0 = (20 - func_21(1097, -1, 0));
			}
			func_221(1097, iVar0, -1);
			break;
		case 0:
			if (func_21(62, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(62, -1, 0));
			}
			func_221(62, iVar0, -1);
			break;
		case 5:
			if (func_21(63, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(63, -1, 0));
			}
			func_221(63, iVar0, -1);
			break;
	}
}

int func_615(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	var uVar5;

	bVar0 = false;
	switch (uParam0->f_326)
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
			{
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar3)
				{
					iVar2 = iVar3;
				}
				else
				{
					iVar2 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
				}
				iVar3 = (iVar3 - iVar2);
			}
			if (iVar3 > 0)
			{
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
					}
					iVar3 = (iVar3 - iVar1);
				}
			}
			cVar4 = func_617(func_613(iParam1));
			func_616(&uVar5, cVar4, 3);
			if (bParam2)
			{
				cVar4 = func_617(3);
				func_616(&uVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(1);
				func_616(&uVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(2);
				func_616(&uVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(4);
				func_616(&uVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(0);
				func_616(&uVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(5);
				func_616(&uVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (func_144())
					{
						HUD::_0x170F541E1CADD1DE(true);
						HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
						uParam0->f_326 = 1;
					}
					else
					{
						uParam0->f_326 = 3;
					}
				}
			}
			else if (func_149(78225582, -1303831698, MISC::GET_HASH_KEY(&uVar5), 537254313, 1, 0, 1, 8, 0, 3))
			{
				if (func_144())
				{
					HUD::_0x170F541E1CADD1DE(true);
					HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
					uParam0->f_326 = 1;
				}
				else
				{
					uParam0->f_326 = 3;
				}
			}
			else
			{
				uParam0->f_326 = 3;
			}
			break;
		case 1:
			if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					uParam0->f_326 = 2;
				}
				else
				{
					uParam0->f_326 = 3;
				}
			}
			break;
		case 2:
			uParam0->f_326 = 0;
			HUD::_0x170F541E1CADD1DE(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_320 = 2;
			return 0;
		case 3:
			func_109(func_114());
			uParam0->f_326 = 0;
			HUD::_0x170F541E1CADD1DE(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_320 = 0;
			return 0;
	}
	return 1;
	uParam0->f_326 = 0;
	uParam0->f_320 = -1;
	return 0;
}

void func_616(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

char* func_617(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		case 1:
			return "SNK_ITEM2";
		case 2:
			return "SNK_ITEM3";
		case 4:
			return "SNK_ITEM4";
		case 0:
			return "SNK_ITEM5";
		case 5:
			return "SNK_ITEM6";
		default:
			break;
	}
	return "";
}

int func_618(char* sParam0, int iParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam1)
	{
		case 4:
			if (MISC::IS_BIT_SET(Param3.f_4, 1))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 7:
			if (MISC::IS_BIT_SET(Param3.f_4, 2))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 5:
			if (MISC::IS_BIT_SET(Param3.f_4, 3))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 3:
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MG"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 6:
			if (MISC::IS_BIT_SET(Param3.f_4, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(Param3.f_4, 5))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 0:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), false))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
		case 1:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADELAUNCHER"), false) || func_619(joaat("WEAPON_GRENADE"), -1, 0))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADELAUNCHER"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_324), 0);
			}
			break;
	}
	return 0;
}

bool func_619(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == 0)
	{
	}
	if (func_592())
	{
		return false;
	}
	iVar0 = func_622(iParam0, iParam1);
	iVar1 = func_620(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_586(iVar1));
}

int func_620(int iParam0)
{
	return func_621(iParam0);
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
		case joaat("WEAPON_APPISTOL"):
			return 3;
		case joaat("WEAPON_PISTOL50"):
			return 4;
		case joaat("WEAPON_SMG"):
			return 5;
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
		case joaat("WEAPON_MICROSMG"):
			return 7;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
		case joaat("WEAPON_MG"):
			return 12;
		case joaat("WEAPON_COMBATMG"):
			return 13;
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
		case joaat("WEAPON_GRENADE"):
			return 16;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
		case joaat("WEAPON_RPG"):
			return 27;
		case joaat("WEAPON_MINIGUN"):
			return 28;
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
		case joaat("WEAPON_STUNGUN"):
			return 31;
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
		case joaat("GADGET_PARACHUTE"):
			return 33;
		case joaat("WEAPON_KNIFE"):
			return 34;
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
		case joaat("WEAPON_HAMMER"):
			return 36;
		case joaat("WEAPON_BAT"):
			return 37;
		case joaat("WEAPON_CROWBAR"):
			return 38;
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
		case joaat("WEAPON_MOLOTOV"):
			return 41;
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
		case joaat("WEAPON_PETROLCAN"):
			return 43;
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
		case joaat("WEAPON_BOTTLE"):
			return 45;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_DAGGER"):
			return 51;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
		case joaat("WEAPON_FLAREGUN"):
			return 57;
		case joaat("WEAPON_MUSKET"):
			return 53;
		case joaat("WEAPON_FIREWORK"):
			return 54;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
		case joaat("WEAPON_PROXMINE"):
			return 60;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
		case joaat("WEAPON_HATCHET"):
			return 58;
		case joaat("WEAPON_RAILGUN"):
			return 59;
		case joaat("WEAPON_COMBATPDW"):
			return 64;
		case joaat("WEAPON_KNUCKLE"):
			return 62;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
		case joaat("WEAPON_MACHETE"):
			return 65;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
		case joaat("WEAPON_REVOLVER"):
			return 70;
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
		case joaat("WEAPON_MINISMG"):
			return 73;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
		case joaat("WEAPON_POOLCUE"):
			return 77;
		case joaat("WEAPON_WRENCH"):
			return 78;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
		case joaat("WEAPON_SMG_MK2"):
			return 5;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
		case 94989220:
			return 86;
		case -1658906650:
			return 88;
		case 1470379660:
			return 87;
	}
	return 0;
}

int func_622(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_21(func_623(iParam0), iParam1, 0);
	return iVar0;
}

int func_623(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_620(iParam0);
	iVar1 = func_591(iVar0);
	if ((func_590() == 0 || func_589() == 0) || (func_590() == 999 && func_589() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
			case 1:
				return 680;
			case 2:
				return 2428;
		}
	}
	return 11771;
}

char* func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAS_LW_AM1";
		case 1:
			return "CAS_LW_AM2";
		case 2:
			return "CAS_LW_AM3";
		case 3:
			return "CAS_LW_AM4";
		case 4:
			return "CAS_LW_AM5";
		case 5:
			return "CAS_LW_AM6";
		case 6:
			return "CAS_LW_AM7";
		case 7:
			return "CAS_LW_AM8";
		default:
			break;
	}
	return "INVALID";
}

int func_625()
{
	int iVar0[16];
	int iVar17;
	int iVar18;
	int iVar19;

	iVar17 = 0;
	iVar18 = 0;
	while (iVar18 < 16)
	{
		iVar0[iVar18] = iVar18;
		iVar17 = (iVar17 + func_626(iVar0[iVar18]));
		iVar18++;
	}
	iVar19 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar17);
	iVar18 = 0;
	while (iVar18 < 16)
	{
		if (iVar19 <= func_626(iVar0[iVar18]))
		{
			return iVar0[iVar18];
		}
		else
		{
			iVar19 = (iVar19 - func_626(iVar0[iVar18]));
		}
		iVar18++;
	}
	return -1;
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26146;
		case 1:
			return Global_262145.f_26146;
		case 2:
			return Global_262145.f_26146;
		case 3:
			return Global_262145.f_26146;
		case 4:
			return Global_262145.f_26146;
		case 5:
			return Global_262145.f_26146;
		case 6:
			return Global_262145.f_26146;
		case 7:
			return Global_262145.f_26146;
		case 8:
			return Global_262145.f_26146;
		case 9:
			return Global_262145.f_26146;
		case 10:
			return Global_262145.f_26146;
		case 11:
			return Global_262145.f_26146;
		case 12:
			return Global_262145.f_26146;
		case 13:
			return Global_262145.f_26146;
		case 14:
			return Global_262145.f_26146;
		case 15:
			return Global_262145.f_26146;
		default:
			break;
	}
	return 0;
}

int func_627(char* sParam0, int* iParam1, var uParam2)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam2->f_324, 0))
	{
		uParam2->f_328 = func_684(func_685());
		MISC::SET_BIT(&(uParam2->f_324), 0);
	}
	else if (!func_683(uParam2->f_328) || (func_362(uParam2->f_328) && !func_537(uParam2->f_328, -1)))
	{
		if (func_362(uParam2->f_328) && !func_537(uParam2->f_328, -1))
		{
		}
		iVar0 = func_682(uParam2->f_328);
		func_631(iVar0, &(uParam2->f_320), &(uParam2->f_327));
		if (uParam2->f_327 == 0)
		{
			StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam2->f_328), 64);
			return 1;
		}
	}
	else if (func_628(iParam1, uParam2->f_328))
	{
		return func_191(sParam0, iParam1, uParam2, -1, 1);
	}
	return 0;
}

int func_628(int* iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (func_630(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, 947.0432f, 116.779f, 79.4955f, 318.573f, false, false, false);
				if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
				}
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
				VEHICLE::_0xAB04325045427AAE(*iParam0, false);
				VEHICLE::SET_VEHICLE_FULLBEAM(*iParam0, false);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam0, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 0f);
				VEHICLE::_0xDBC631F109350B8C(*iParam0, true);
				VEHICLE::_0x2311DD7159F00582(*iParam0, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*iParam0, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(*iParam0, false);
				ENTITY::_SET_ENTITY_SOMETHING(*iParam0, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			else if (func_129(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(*iParam0, iParam1))
				{
					return 1;
				}
				else if (func_629(*iParam0, &uLocal_64))
				{
					VEHICLE::DELETE_VEHICLE(iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_629(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_630(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_631(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	char* sVar17;

	*uParam2 = -1;
	iVar0 = func_652(iParam0, 0);
	if (iVar0 == -1)
	{
		*uParam2 = 1;
		*uParam1 = 3;
		return 1;
	}
	if (func_649(iVar0))
	{
		*uParam2 = 2;
		*uParam1 = 3;
		return 1;
	}
	if (!func_113())
	{
		func_646(iVar0);
		func_645();
		*uParam2 = 0;
		*uParam1 = 2;
		return 1;
	}
	func_632(&uVar1, iParam0, 0, -1, 0);
	switch (*uParam1)
	{
		case 0:
			if (!func_149(78225582, -1843039992, MISC::GET_HASH_KEY(&uVar1), 537254313, 1, 0, 1, 4, 0, 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_109(func_114());
				return 1;
			}
			sVar17 = "PO_COUPON_CAR_XMAS2017";
			if (!func_149(78225582, -1843039992, MISC::GET_HASH_KEY(sVar17), 537254313, 1, 0, 1, 4, MISC::GET_HASH_KEY(&uVar1), 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_109(func_114());
				return 1;
			}
			if (func_144())
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_109(func_114());
				return 1;
			}
			break;
		case 1:
			if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					*uParam2 = 0;
					*uParam1 = 2;
					func_109(func_114());
					func_646(iVar0);
					func_645();
					return 1;
				}
				else
				{
					*uParam2 = 3;
					*uParam1 = 3;
					func_109(func_114());
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_632(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	iVar0 = func_652(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 518)
	{
		StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, func_644(iParam1), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == -515263000)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar5 = func_643(iParam1, -1);
	if (iVar5 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	func_392(sParam0, Var1, iVar5, 4, 1, iParam2, -1, -1, 1, iParam4);
	if ((((func_642(iParam1) || func_641(iParam1)) || func_640(func_643(iParam1, -1)) != -1) || func_639(func_643(iParam1, -1)) != -1) || func_638(func_643(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_19758)
			{
				if ((func_642(iParam1) && func_637()) || (func_641(iParam1) && !func_633(iParam1)))
				{
					func_392(sParam0, Var1, iVar5, 4, 1, iParam2, 1, -1, 1, iParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			func_392(sParam0, Var1, iVar5, 4, 1, (iParam2 - 1), 1, -1, 1, iParam4);
		}
	}
	else if (iParam1 == 413)
	{
		func_392(sParam0, Var1, iVar5, 4, 1, iParam2, iParam3, -1, 1, iParam4);
	}
	else if ((((iParam1 == 414 || iParam1 == 527) || iParam1 == 531) || iParam1 == 533) || iParam1 == 525)
	{
		func_392(sParam0, Var1, iVar5, 4, 1, iParam2, iParam3, -1, 1, iParam4);
	}
}

int func_633(int iParam0)
{
	int iVar0;

	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		case 177:
			iVar0 = 12;
			break;
		case 185:
			iVar0 = 14;
			break;
		case 174:
			iVar0 = 9;
			break;
		case 171:
			iVar0 = 20;
			break;
		case 172:
			iVar0 = 7;
			break;
		case 173:
			iVar0 = 8;
			break;
		case 175:
			iVar0 = 10;
			break;
		case 176:
			iVar0 = 11;
			break;
		case 178:
			iVar0 = 5;
			break;
		case 179:
			iVar0 = 6;
			break;
		case 183:
			iVar0 = 21;
			break;
		case 180:
			iVar0 = 18;
			break;
		case 181:
			iVar0 = 22;
			break;
		case 182:
			iVar0 = 19;
			break;
		case 184:
			iVar0 = 13;
			break;
		case 186:
			iVar0 = 15;
			break;
		case 188:
			iVar0 = 17;
			break;
	}
	return func_634(iVar0);
}

bool func_634(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_592())
	{
		return false;
	}
	iVar0 = func_635(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_586(iVar1));
}

int func_635(int iParam0)
{
	int iVar0;

	iVar0 = func_21(func_636(iParam0), -1, 0);
	return iVar0;
}

int func_636(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_591(iVar0);
	if ((func_590() == 0 || func_589() == 0) || (func_590() == 999 && func_589() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
			case 1:
				return 739;
		}
	}
	return 11771;
}

int func_637()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 2014313426:
			return 0;
		case -210308634:
			return 1;
		case 1861786828:
			return 2;
		case 295054921:
			return 3;
		case -365873403:
			return 4;
		case -276744698:
			return 5;
		case 1429622905:
			return 6;
		case 1644055914:
			return 7;
		case -1149725334:
			return 8;
	}
	return -1;
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case -631322662:
			return 0;
		case -1810806490:
			return 1;
		case -838099166:
			return 2;
		case joaat("WOLFSBANE"):
			return 3;
		case joaat("CLUB"):
			return 4;
		case 2134119907:
			return 5;
	}
	return -1;
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FIRETRUK"):
			return 0;
		case joaat("BURRITO2"):
			return 1;
		case joaat("BOXVILLE"):
			return 2;
		case joaat("STOCKADE"):
			return 3;
		case 1118611807:
			return 4;
		case 409049982:
			return 5;
		case -1756021720:
			return 6;
		case 2031587082:
			return 7;
		case 1693751655:
			return 8;
		case 987469656:
			return 9;
		case 872704284:
			return 10;
		case joaat("OUTLAW"):
			return 11;
		case 740289177:
			return 12;
		case -834353991:
			return 13;
		case 301304410:
			return 14;
		case 960812448:
			return 15;
		case 1284356689:
			return 16;
		case -208911803:
			return 17;
		case joaat("SENTINEL3"):
			return 18;
		case 722226637:
			return 19;
		case joaat("ELLIE"):
			return 20;
		case joaat("DEFILER"):
			return 21;
		case joaat("MANCHEZ"):
			return 22;
	}
	return -1;
}

int func_641(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ZTYPE");
		case 1:
			return joaat("STINGER");
		case 2:
			return joaat("JB700");
		case 3:
			return joaat("CHEETAH");
		case 4:
			return joaat("ENTITYXF");
		case 5:
			return joaat("ADDER");
		case 6:
			return joaat("MONROE");
		case 7:
			return joaat("COGCABRIO");
		case 10:
			return joaat("SHAMAL");
		case 11:
			return joaat("STUNT");
		case 12:
			return joaat("CUBAN800");
		case 13:
			return joaat("DUSTER");
		case 14:
			return joaat("LUXOR");
		case 15:
			return joaat("FROGGER");
		case 16:
			return joaat("MAVERICK");
		case 17:
			return joaat("RHINO");
		case 18:
			return joaat("TITAN");
		case 19:
			return joaat("CARGOBOB");
		case 20:
			return joaat("BUZZARD");
		case 21:
			return joaat("CRUSADER");
		case 22:
			return joaat("BARRACKS");
		case 24:
			return joaat("MARQUIS");
		case 25:
			return joaat("JETMAX");
		case 27:
			return joaat("SQUALO");
		case 29:
			return joaat("TROPIC");
		case 30:
			return joaat("SEASHARK");
		case 31:
			return joaat("SUBMERSIBLE");
		case 32:
			return joaat("SUNTRAP");
		case 258:
			return joaat("TUG");
		case 33:
			return joaat("BMX");
		case 34:
			return joaat("SCORCHER");
		case 35:
			return joaat("TRIBIKE");
		case 36:
			return joaat("TRIBIKE2");
		case 37:
			return joaat("TRIBIKE3");
		case 38:
			return joaat("CRUISER");
		case 39:
			return joaat("SCHWARZER");
		case 40:
			return joaat("ZION");
		case 41:
			return joaat("GAUNTLET");
		case 42:
			return joaat("VIGERO");
		case 43:
			return joaat("ISSI2");
		case 44:
			return joaat("INFERNUS");
		case 45:
			return joaat("SURANO");
		case 46:
			return joaat("VACCA");
		case 47:
			return joaat("NINEF");
		case 48:
			return joaat("COMET2");
		case 49:
			return joaat("BANSHEE");
		case 50:
			return joaat("FELTZER2");
		case 51:
			return joaat("BFINJECTION");
		case 52:
			return joaat("SANDKING");
		case 53:
			return joaat("FUGITIVE");
		case 54:
			return joaat("DILETTANTE");
		case 55:
			return joaat("SUPERD");
		case 56:
			return joaat("EXEMPLAR");
		case 57:
			return joaat("BALLER2");
		case 58:
			return joaat("CAVALCADE");
		case 59:
			return joaat("ROCOTO");
		case 60:
			return joaat("FELON");
		case 61:
			return joaat("ORACLE2");
		case 62:
			return joaat("BATI");
		case 63:
			return joaat("AKUMA");
		case 64:
			return joaat("RUFFIAN");
		case 65:
			return joaat("VADER");
		case 66:
			return joaat("BLAZER");
		case 67:
			return joaat("PCJ");
		case 68:
			return joaat("SANCHEZ");
		case 69:
			return joaat("FAGGIO2");
		case 70:
			return joaat("BULLET");
		case 71:
			return joaat("CARBONIZZARE");
		case 72:
			return joaat("COQUETTE");
		case 73:
			return joaat("NINEF2");
		case 74:
			return joaat("RAPIDGT");
		case 75:
			return joaat("RAPIDGT2");
		case 76:
			return joaat("STINGERGT");
		case 77:
			return joaat("VOLTIC");
		case 78:
			return joaat("ANNIHILATOR");
		case 79:
			return joaat("MAMMATUS");
		case 80:
			return joaat("VELUM");
		case 81:
			return joaat("DUMP");
		case 82:
			return joaat("AIRBUS");
		case 83:
			return joaat("BUS");
		case 84:
			return joaat("COACH");
		case 85:
			return joaat("JOURNEY");
		case 86:
			return joaat("MULE");
		case 87:
			return joaat("RENTALBUS");
		case 88:
			return joaat("STRETCH");
		case 89:
			return joaat("BISON");
		case 90:
			return joaat("DOUBLE");
		case 91:
			return joaat("FELON2");
		case 92:
			return joaat("HEXER");
		case 93:
			return joaat("ZION2");
		case 94:
			return joaat("BATI2");
		case 95:
			return joaat("ELEGY2");
		case 96:
			return joaat("KHAMELION");
		case 97:
			return joaat("HOTKNIFE");
		case 98:
			return joaat("CARBONRS");
		default:
			break;
	}
	switch (iParam0)
	{
		case 99:
			return joaat("BIFTA");
		case 100:
			return joaat("KALAHARI");
		case 101:
			return joaat("PARADISE");
		case 102:
			return joaat("SPEEDER");
		case 103:
			return joaat("BODHI2");
		case 104:
			return joaat("DUNE");
		case 105:
			return joaat("REBEL");
		case 106:
			return joaat("SADLER");
		case 107:
			return joaat("SANCHEZ2");
		case 108:
			return joaat("SANDKING2");
		case 109:
			return joaat("BTYPE");
		case 111:
			return joaat("JESTER");
		case 114:
			return joaat("MASSACRO");
		case 112:
			return joaat("TURISMOR");
		case 115:
			return joaat("ZENTORNO");
		case 116:
			return joaat("HUNTLEY");
		case 110:
			return joaat("ALPHA");
		case 113:
			return joaat("VESTRA");
		case 117:
			return joaat("COQUETTE");
		case 118:
			return joaat("BANSHEE");
		case 119:
			return joaat("STINGER");
		case 120:
			return joaat("VOLTIC");
		case 121:
			return joaat("THRUST");
		case 128:
			return joaat("ASEA");
		case 129:
			return joaat("ASTEROPE");
		case 130:
			return joaat("BOBCATXL");
		case 131:
			return joaat("CAVALCADE2");
		case 132:
			return joaat("GRANGER");
		case 133:
			return joaat("INGOT");
		case 134:
			return joaat("INTRUDER");
		case 135:
			return joaat("MINIVAN");
		case 136:
			return joaat("PREMIER");
		case 137:
			return joaat("RADI");
		case 138:
			return joaat("RANCHERXL");
		case 139:
			return joaat("RATLOADER");
		case 140:
			return joaat("STANIER");
		case 141:
			return joaat("STRATUM");
		case 142:
			return joaat("WASHINGTON");
		case 122:
			return joaat("DOMINATOR");
		case 123:
			return joaat("F620");
		case 124:
			return joaat("FUSILADE");
		case 125:
			return joaat("PENUMBRA");
		case 126:
			return joaat("SENTINEL");
		case 127:
			return joaat("SENTINEL2");
		default:
			break;
	}
	switch (iParam0)
	{
		case 143:
			return joaat("BLADE");
		case 144:
			return joaat("WARRENER");
		case 145:
			return joaat("GLENDALE");
		case 146:
			return joaat("RHAPSODY");
		case 147:
			return joaat("PANTO");
		case 148:
			return joaat("DUBSTA3");
		case 149:
			return joaat("PIGALLE");
		case 150:
			return joaat("PICADOR");
		case 151:
			return joaat("REGINA");
		case 152:
			return joaat("SURFER");
		case 153:
			return joaat("YOUGA");
		case 154:
			return joaat("BLAZER3");
		case 155:
			return joaat("REBEL2");
		case 156:
			return joaat("PRIMO");
		case 157:
			return joaat("BUFFALO");
		case 158:
			return joaat("BUFFALO2");
		case 159:
			return joaat("TAILGATER");
		case 160:
			return joaat("MONSTER");
		case 161:
			return joaat("SOVEREIGN");
		case 162:
			return joaat("MILJET");
		case 163:
			return joaat("BESRA");
		case 164:
			return joaat("SWIFT");
		case 165:
			return joaat("COQUETTE2");
		case 166:
			return joaat("COQUETTE2");
		case 167:
			return joaat("INNOVATION");
		case 168:
			return joaat("HAKUCHOU");
		case 169:
			return joaat("FUROREGT");
		case 170:
			return joaat("KALAHARI");
		case 187:
			return joaat("VALKYRIE");
		case 177:
			return joaat("HYDRA");
		case 185:
			return joaat("SAVAGE");
		case 174:
			return joaat("ENDURO");
		case 171:
			return joaat("BOXVILLE4");
		case 172:
			return joaat("CASCO");
		case 173:
			return joaat("DINGHY3");
		case 175:
			return joaat("GBURRITO2");
		case 176:
			return joaat("GUARDIAN");
		case 178:
			return joaat("INSURGENT");
		case 179:
			return joaat("INSURGENT2");
		case 183:
			return joaat("MULE3");
		case 180:
			return joaat("KURUMA");
		case 181:
			return joaat("KURUMA2");
		case 182:
			return joaat("LECTRO");
		case 184:
			return joaat("PBUS");
		case 186:
			return joaat("TECHNICAL");
		case 188:
			return joaat("VELUM2");
		case 189:
			return joaat("GRESLEY");
		case 190:
			return joaat("JACKAL");
		case 191:
			return joaat("LANDSTALKER");
		case 192:
			return joaat("MESA3");
		case 193:
			return joaat("NEMESIS");
		case 194:
			return joaat("ORACLE");
		case 195:
			return joaat("RUMPO");
		case 196:
			return joaat("SCHAFTER2");
		case 197:
			return joaat("SEMINOLE");
		case 198:
			return joaat("SURGE");
		case 199:
			return joaat("DODO");
		case 200:
			return joaat("MARSHALL");
		case 201:
			return joaat("SUBMERSIBLE2");
		case 202:
			return joaat("BLISTA2");
		case 203:
			return joaat("STALION");
		case 204:
			return joaat("DUKES");
		case 205:
			return joaat("DUKES2");
		case 206:
			return joaat("STALION2");
		case 207:
			return joaat("DOMINATOR2");
		case 208:
			return joaat("GAUNTLET2");
		case 209:
			return joaat("BUFFALO3");
		case 210:
			return joaat("SLAMVAN");
		case 211:
			return joaat("RATLOADER2");
		case 212:
			return joaat("JESTER2");
		case 213:
			return joaat("MASSACRO2");
		case 214:
			return joaat("FELTZER3");
		case 215:
			return joaat("LUXOR2");
		case 216:
			return joaat("OSIRIS");
		case 217:
			return joaat("SWIFT2");
		case 218:
			return joaat("VIRGO");
		case 219:
			return joaat("WINDSOR");
		case 220:
			return joaat("BRAWLER");
		case 221:
			return joaat("CHINO");
		case 222:
			return joaat("COQUETTE3");
		case 223:
			return joaat("T20");
		case 224:
			return joaat("TORO");
		case 225:
			return joaat("VINDICATOR");
		case 229:
			return joaat("PRIMO");
		case 228:
			return joaat("MOONBEAM");
		case 227:
			return joaat("FACTION");
		case 226:
			return joaat("BUCCANEER");
		case 230:
			return joaat("VOODOO2");
		case 263:
			if (iParam1 == 0)
			{
				return joaat("XLS");
			}
			else if (iParam1 == 1)
			{
				return joaat("XLS2");
			}
			else
			{
				return joaat("XLS");
			}
			break;
		case 264:
			return joaat("SEVEN70");
		case 259:
			return joaat("WINDSOR2");
		case 260:
			return joaat("PROTOTIPO");
		case 261:
			return joaat("FMJ");
		case 262:
			return joaat("BESTIAGTS");
		case 265:
			return joaat("PFISTER811");
		case 266:
			return joaat("REAPER");
		case 231:
			return joaat("BTYPE2");
		case 232:
			return joaat("LURCHER");
		case 233:
			if (iParam1 == 0)
			{
				return joaat("BALLER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER5");
			}
			else
			{
				return joaat("BALLER3");
			}
			break;
		case 234:
			if (iParam1 == 0)
			{
				return joaat("BALLER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER6");
			}
			else
			{
				return joaat("BALLER4");
			}
			break;
		case 235:
			if (iParam1 == 0)
			{
				return joaat("COG55");
			}
			else if (iParam1 == 1)
			{
				return joaat("COG552");
			}
			else
			{
				return joaat("COG55");
			}
			break;
		case 236:
			if (iParam1 == 0)
			{
				return joaat("COGNOSCENTI");
			}
			else if (iParam1 == 1)
			{
				return joaat("COGNOSCENTI2");
			}
			else
			{
				return joaat("COGNOSCENTI");
			}
			break;
		case 237:
			return joaat("LIMO2");
		case 238:
			return joaat("MAMBA");
		case 239:
			return joaat("NIGHTSHADE");
		case 240:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER5");
			}
			else
			{
				return joaat("SCHAFTER3");
			}
			break;
		case 241:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER6");
			}
			else
			{
				return joaat("SCHAFTER4");
			}
			break;
		case 242:
			return joaat("VERLIERER2");
		case 243:
			return joaat("SUPERVOLITO");
		case 244:
			return joaat("SUPERVOLITO2");
		case 245:
			return Global_74009;
		case 251:
			return joaat("VIRGO3");
		case 250:
			return joaat("TORNADO");
		case 249:
			return joaat("SABREGT");
		case 252:
			return joaat("FACTION");
		case 246:
			return joaat("TAMPA");
		case 247:
			return joaat("SULTAN");
		case 49:
			return joaat("BANSHEE");
		case 248:
			return joaat("BTYPE3");
		case 253:
			return joaat("VOLATUS");
		case 254:
			return joaat("CARGOBOB2");
		case 255:
			return joaat("RUMPO3");
		case 256:
			return joaat("BRICKADE");
		case 257:
			return joaat("NIMBUS");
		case 267:
			return joaat("LE7B");
		case 268:
			return joaat("OMNIS");
		case 269:
			return joaat("TROPOS");
		case 270:
			return joaat("BRIOSO");
		case 271:
			return joaat("TROPHYTRUCK");
		case 272:
			return joaat("TROPHYTRUCK2");
		case 273:
			return joaat("CONTENDER");
		case 274:
			return joaat("CLIFFHANGER");
		case 275:
			return joaat("BF400");
		case 279:
			return joaat("TYRUS");
		case 280:
			return joaat("LYNX");
		case 281:
			return joaat("SHEAVA");
		case 276:
			return joaat("RALLYTRUCK");
		case 277:
			return joaat("TAMPA2");
		case 278:
			return joaat("GARGOYLE");
		case 282:
			return joaat("BAGGER");
		case 283:
			return joaat("ESSKEY");
		case 284:
			return joaat("NIGHTBLADE");
		case 285:
			return joaat("DEFILER");
		case 286:
			return joaat("AVARUS");
		case 287:
			return joaat("ZOMBIEA");
		case 288:
			return joaat("ZOMBIEB");
		case 289:
			return joaat("CHIMERA");
		case 290:
			return joaat("DAEMON2");
		case 291:
			return joaat("RATBIKE");
		case 292:
			return joaat("SHOTARO");
		case 293:
			return joaat("RAPTOR");
		case 294:
			return joaat("HAKUCHOU2");
		case 296:
			return joaat("BLAZER4");
		case 297:
			return joaat("SANCTUS");
		case 295:
			return joaat("VORTEX");
		case 298:
			return joaat("MANCHEZ");
		case 299:
			return joaat("TORNADO6");
		case 300:
			return joaat("YOUGA2");
		case 301:
			return joaat("WOLFSBANE");
		case 302:
			return joaat("FAGGIO3");
		case 303:
			return joaat("FAGGIO");
		case 304:
			return joaat("DUNE5");
		case 305:
			return joaat("PHANTOM2");
		case 306:
			return joaat("TECHNICAL2");
		case 307:
			return joaat("BLAZER5");
		case 308:
			return joaat("BOXVILLE5");
		case 309:
			return joaat("WASTELANDER");
		case 310:
			return joaat("RUINER2");
		case 311:
			return joaat("VOLTIC2");
		case 312:
			return joaat("PENETRATOR");
		case 313:
			return joaat("TEMPESTA");
		case 314:
			return joaat("ITALIGTB");
		case 315:
			return joaat("NERO");
		case 316:
			return joaat("DIABLOUS");
		case 317:
			return joaat("FCR");
		case 318:
			return joaat("SPECTER");
		case 319:
			return joaat("GP1");
		case 320:
			return joaat("INFERNUS2");
		case 321:
			return joaat("RUSTON");
		case 322:
			return joaat("TURISMO2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_74010;
		case 324:
			return Global_74011;
		case 325:
			return joaat("CHEETAH2");
		case 326:
			return joaat("TORERO");
		case 327:
			return joaat("VAGNER");
		case 328:
			return joaat("XA21");
		case 329:
			return joaat("APC");
		case 330:
			return joaat("DUNE3");
		case 331:
			return joaat("HALFTRACK");
		case 332:
			return joaat("OPPRESSOR");
		case 333:
			return joaat("TAMPA3");
		case 334:
			return joaat("TRAILERSMALL2");
		case 335:
			return joaat("ARDENT");
		case 336:
			return joaat("NIGHTSHARK");
		case 337:
			return joaat("LAZER");
		case 338:
			return joaat("MICROLIGHT");
		case 339:
			return joaat("MOGUL");
		case 340:
			return joaat("ROGUE");
		case 341:
			return joaat("STARLING");
		case 342:
			return joaat("SEABREEZE");
		case 343:
			return joaat("TULA");
		case 344:
			return joaat("PYRO");
		case 345:
			return joaat("MOLOTOK");
		case 346:
			return joaat("NOKOTA");
		case 347:
			return joaat("BOMBUSHKA");
		case 348:
			return joaat("HUNTER");
		case 349:
			return joaat("HAVOK");
		case 350:
			return joaat("HOWARD");
		case 351:
			return joaat("ALPHAZ1");
		case 352:
			return joaat("CYCLONE");
		case 353:
			return joaat("VISIONE");
		case 354:
			return joaat("RETINUE");
		case 355:
			return joaat("RAPIDGT3");
		case 356:
			return joaat("VIGILANTE");
		case 357:
			return Global_74012;
		case 358:
			return joaat("DELUXO");
		case 359:
			return joaat("STROMBERG");
		case 360:
			return joaat("RIOT2");
		case 361:
			return joaat("CHERNOBOG");
		case 362:
			return joaat("KHANJALI");
		case 363:
			return joaat("AKULA");
		case 364:
			return joaat("THRUSTER");
		case 365:
			return joaat("BARRAGE");
		case 366:
			return joaat("VOLATOL");
		case 367:
			return joaat("COMET4");
		case 368:
			return joaat("NEON");
		case 369:
			return joaat("STREITER");
		case 370:
			return joaat("SENTINEL3");
		case 371:
			return joaat("YOSEMITE");
		case 372:
			return joaat("SC1");
		case 373:
			return joaat("AUTARCH");
		case 374:
			return joaat("GT500");
		case 375:
			return joaat("HUSTLER");
		case 376:
			return joaat("REVOLTER");
		case 377:
			return joaat("PARIAH");
		case 378:
			return joaat("RAIDEN");
		case 379:
			return joaat("SAVESTRA");
		case 380:
			return joaat("RIATA");
		case 381:
			return joaat("HERMES");
		case 382:
			return joaat("COMET5");
		case 383:
			return joaat("Z190");
		case 384:
			return joaat("VISERIS");
		case 385:
			return joaat("KAMACHO");
		case 386:
			return joaat("GB200");
		case 387:
			return joaat("FAGALOA");
		case 388:
			return joaat("ELLIE");
		case 389:
			return joaat("ISSI3");
		case 390:
			return joaat("MICHELLI");
		case 391:
			return joaat("FLASHGT");
		case 392:
			return joaat("HOTRING");
		case 393:
			return joaat("TEZERACT");
		case 394:
			return joaat("TYRANT");
		case 395:
			return joaat("DOMINATOR3");
		case 396:
			return joaat("TAIPAN");
		case 397:
			return joaat("ENTITY2");
		case 398:
			return joaat("JESTER3");
		case 399:
			return joaat("CHEBUREK");
		case 400:
			return joaat("CARACARA");
		case 401:
			return joaat("SEASPARROW");
		case 402:
			return Global_74013;
		case 403:
			return joaat("MULE4");
		case 404:
			return joaat("POUNDER2");
		case 405:
			return joaat("SWINGER");
		case 406:
			return joaat("MENACER");
		case 407:
			return joaat("SCRAMJET");
		case 408:
			return joaat("STRIKEFORCE");
		case 409:
			return joaat("OPPRESSOR2");
		case 410:
			return joaat("PATRIOT2");
		case 411:
			return joaat("STAFFORD");
		case 412:
			return joaat("FREECRAWLER");
		case 415:
			return joaat("FUTO");
		case 416:
			return joaat("RUINER");
		case 417:
			return joaat("ROMERO");
		case 418:
			return joaat("PRAIRIE");
		case 419:
			return joaat("BALLER");
		case 420:
			return joaat("SERRANO");
		case 421:
			return joaat("BJXL");
		case 422:
			return joaat("HABANERO");
		case 423:
			return joaat("FQ2");
		case 424:
			return joaat("PATRIOT");
		case 413:
			return joaat("BLIMP3");
		case 414:
			return joaat("PBUS2");
		case 425:
			return joaat("CERBERUS");
		case 426:
			return joaat("CERBERUS2");
		case 427:
			return joaat("CERBERUS3");
		case 428:
			return joaat("BRUTUS");
		case 429:
			return joaat("BRUTUS2");
		case 430:
			return joaat("BRUTUS3");
		case 431:
			return joaat("SCARAB");
		case 432:
			return joaat("SCARAB2");
		case 433:
			return joaat("SCARAB3");
		case 434:
			return joaat("IMPERATOR");
		case 435:
			return joaat("IMPERATOR2");
		case 436:
			return joaat("IMPERATOR3");
		case 437:
			return joaat("ZR380");
		case 438:
			return joaat("ZR3802");
		case 439:
			return joaat("ZR3803");
		case 440:
			return joaat("IMPALER");
		case 450:
			return joaat("TAXI");
		case 451:
			return joaat("BULLDOZER");
		case 452:
			return joaat("SPEEDO2");
		case 453:
			return joaat("TRASH2");
		case 454:
			return joaat("BARRACKS2");
		case 455:
			return joaat("MIXER");
		case 456:
			return joaat("DUNE2");
		case 457:
			return joaat("TRACTOR");
		case 458:
			return joaat("BLISTA3");
		case 441:
			return joaat("VAMOS");
		case 442:
			return joaat("TULIP");
		case 443:
			return joaat("DEVESTE");
		case 444:
			return joaat("SCHLAGEN");
		case 445:
			return joaat("TOROS");
		case 446:
			return joaat("DEVIANT");
		case 447:
			return joaat("CLIQUE");
		case 448:
			return joaat("ITALIGTO");
		case 449:
			return joaat("RCBANDITO");
		case 459:
			return 1044193113;
		case 460:
			return 686471183;
		case 461:
			return joaat("LOCUST");
		case 462:
			return -1829436850;
		case 463:
			return -682108547;
		case 464:
			return 722226637;
		case 465:
			return 1854776567;
		case 466:
			return 1862507111;
		case 467:
			return -882629065;
		case 468:
			return -362150785;
		case 469:
			return 310284501;
		case 470:
			return 916547552;
		case 471:
			return -1804415708;
		case 472:
			return 1934384720;
		case 473:
			return -1349095620;
		case 474:
			return -208911803;
		case 475:
			return -324618589;
		case 476:
			return -664141241;
		case 477:
			return 1323778901;
		case 478:
			return -1620126302;
		case 479:
			return -447711397;
		case 480:
			return joaat("FIRETRUK");
		case 481:
			return joaat("BURRITO2");
		case 482:
			return joaat("BOXVILLE");
		case 483:
			return joaat("STOCKADE");
		case 484:
			return joaat("LGUARD");
		case 485:
			return joaat("BLAZER2");
		case 486:
			return 1284356689;
		case 487:
			return -1254331310;
		case 488:
			return 394110044;
		case 489:
			return 301304410;
		case 490:
			return 1456336509;
		case 491:
			return 340154634;
		case 492:
			return -1132721664;
		case 493:
			return -1960756985;
		case 494:
			return 960812448;
		case 495:
			return 83136452;
		case 496:
			return 740289177;
		case 497:
			return 2031587082;
		case 498:
			return 1693751655;
		case 499:
			return -834353991;
		case 500:
			return 872704284;
		case 501:
			return 987469656;
		case 502:
			return -1756021720;
		case 503:
			return 1118611807;
		case 504:
			return 409049982;
		case 505:
			return joaat("OUTLAW");
		default:
			break;
	}
	switch (iParam0)
	{
		case 506:
			return joaat("CLUB");
		case 507:
			return 2134119907;
		case 508:
			return 67753863;
		case 509:
			return -631322662;
		case 510:
			return -838099166;
		case 511:
			return -1810806490;
		case 512:
			return -1358197432;
		case 513:
			return 1492612435;
		case 514:
			return 1181339704;
		case 515:
			return -1728685474;
		case 516:
			return joaat("MANANA");
		case 517:
			return joaat("PEYOTE");
		case 518:
			return func_393();
		case 519:
			return -1149725334;
		case 520:
			return -1045911276;
		case 521:
			return 1429622905;
		case 522:
			return 1644055914;
		case 523:
			return -365873403;
		case 524:
			return 295054921;
		case 525:
			return -980573366;
		case 526:
			return 1086534307;
		case 527:
			return -276744698;
		case 528:
			return -102335483;
		case 529:
			return 1455990255;
		case 530:
			return 298565713;
		case 531:
			return 2014313426;
		case 532:
			return -210308634;
		case 533:
			return 1861786828;
		case 534:
			return -857356038;
		case 535:
			return -1492917079;
		default:
			break;
	}
	return 0;
}

char* func_644(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_643(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		case 68:
			return "SANCHEZ";
		case 105:
			return "REBEL";
		case 107:
			return "SANCHEZ2";
		case 117:
			return "COQUETTE_TLESS";
		case 118:
			return "BANSHEE_TLESS";
		case 119:
			return "STINGER_TLESS";
		case 120:
			return "VOLTIC_HTOP";
		case 154:
			return "BLAZER3";
		case 155:
			return "REBEL2";
		case 158:
			return "BUFFALO2";
		case 159:
			return "TAILGATER";
		case 166:
			return "COQUETTE2_TLESS";
		case 170:
			return "KALAHARI_TLESS";
		case 171:
			return "BOXVILLE4";
		case 173:
			return "DINGHY3";
		case 183:
			return "MULE3";
		case 191:
			return "LANDSTALKER";
		case 192:
			return "MESA3";
		case 194:
			return "ORACLE1";
		case 196:
			return "SCHAFTER2";
		case 207:
			return "DOMINATOR2";
		case 245:
			return "BIG_YACHT";
		case 254:
			return "CARGOBOB2";
		case 323:
			return "BIG_TRUCK";
		case 324:
			return "BALLISTIC";
		case 357:
			return "BIG_PLANE";
		case 402:
			return "HACKER_TRUCK";
		case 510:
			return "LANDSTLKR2";
		default:
			break;
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

void func_645()
{
	if (!Global_2540384.f_5188.f_335)
	{
		Global_2540384.f_5188.f_335 = 1;
	}
}

void func_646(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&(Global_2097152[func_186() /*10931*/].f_5500.f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2097152[func_186() /*10931*/].f_5500 = UNK_0x5A002C4821A13338();
		func_648();
		func_647();
	}
}

void func_647()
{
}

void func_648()
{
	func_64(1724, Global_2097152[func_186() /*10931*/].f_5500, -1, 1, 0);
	func_64(1725, Global_2097152[func_186() /*10931*/].f_5500.f_1[0], -1, 1, 0);
	func_64(1726, Global_2097152[func_186() /*10931*/].f_5500.f_1[1], -1, 1, 0);
	func_64(1727, Global_2097152[func_186() /*10931*/].f_5500.f_1[2], -1, 1, 0);
	func_64(1728, Global_2097152[func_186() /*10931*/].f_5500.f_1[3], -1, 1, 0);
	func_64(1729, Global_2097152[func_186() /*10931*/].f_5500.f_1[4], -1, 1, 0);
}

int func_649(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_113())
	{
		if (iParam0 == func_652(245, 0) && func_21(3169, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(323, 0) && func_21(5394, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(324, 0) && func_498(9461, -1, -1))
		{
			return 1;
		}
		if (iParam0 == func_652(357, 0) && func_21(6157, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(402, 0) && func_21(7208, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(518, 0) && func_21(9513, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				case 1:
					iVar1 = 451;
					break;
				case 2:
					iVar1 = 452;
					break;
				case 3:
					iVar1 = 453;
					break;
				case 4:
					iVar1 = 454;
					break;
				case 5:
					iVar1 = 455;
					break;
				case 6:
					iVar1 = 456;
					break;
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_652(iVar1, 0) && func_650(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_2097152[func_186() /*10931*/].f_5500.f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_650(int iParam0)
{
	return func_498(func_651(iParam0), -1, -1);
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
		case 9:
			return 24964;
		case 10:
			return 24966;
		case 11:
			return 24965;
		case 12:
			return 24968;
		case 13:
			return 25101;
		case 14:
			return 24967;
		case 15:
			return 25105;
		case 16:
			return 25106;
		case 20:
			return 25102;
		case 21:
			return 25103;
		case 22:
			return 25104;
		case 102:
			return 24969;
		case 17:
			return 25107;
		case 18:
			return 25108;
		case 19:
			return 25109;
		case 103:
			return 24972;
		case 104:
			return 24973;
		case 105:
			return 24974;
		case 106:
			return 24975;
		case 107:
			return 24976;
		case 108:
			return 24978;
		case 109:
			return 24980;
		case 110:
			return 24981;
		case 111:
			return 24982;
		case 112:
			return 24983;
		case 113:
			return 24984;
		case 114:
			return 24985;
		case 115:
			return 24986;
		case 116:
			return 24987;
		case 117:
			return 24988;
		case 118:
			return 24989;
		case 119:
			return 24990;
		case 120:
			return 24991;
		case 0:
			return 24992;
		case 1:
			return 24993;
		case 2:
			return 24994;
		case 3:
			return 24995;
		case 4:
			return 24996;
		case 5:
			return 24997;
		case 6:
			return 24998;
		case 7:
			return 24999;
		case 127:
			return 25117;
		case 128:
			return 25118;
		case 23:
			return 25119;
		case 139:
			return 25125;
		case 140:
			return 25127;
		case 141:
			return 25128;
		case 27:
			return 25129;
		case 160:
			return 25136;
		case 161:
			return 25139;
		case 162:
			return 25140;
		case 31:
			return 25141;
		case 181:
			return 25148;
		case 182:
			return 25151;
		case 183:
			return 25152;
		case 35:
			return 25153;
		case 193:
			return 25160;
		case 194:
			return 25161;
		case 39:
			return 25162;
		case 206:
			return 25168;
		case 207:
			return 25169;
		case 208:
			return 25170;
		case 209:
			return 25173;
		case 210:
			return 25174;
		case 43:
			return 25175;
		case 234:
			return 25179;
		case 235:
			return 25183;
		case 236:
			return 25184;
		case 47:
			return 25185;
		case 248:
			return 25188;
		case 249:
			return 25191;
		case 250:
			return 25192;
		case 51:
			return 25193;
		case 259:
			return 25198;
		case 260:
			return 25202;
		case 261:
			return 25203;
		case 55:
			return 25204;
		case 274:
			return 25209;
		case 275:
			return 25212;
		case 276:
			return 25213;
		case 59:
			return 25214;
		case 284:
			return 25217;
		case 285:
			return 25221;
		case 286:
			return 25222;
		case 63:
			return 25223;
		case 307:
			return 25228;
		case 308:
			return 24979;
		case 309:
			return 25229;
		case 310:
			return 25111;
		case 67:
			return 25230;
		case 68:
			return 25112;
		case 72:
			return 25231;
		case 73:
			return 25233;
		case 74:
			return 25234;
		case 75:
			return 25235;
		case 76:
			return 25236;
		case 77:
			return 25394;
		case 121:
			return 25395;
		case 122:
			return 25396;
		case 123:
			return 25397;
		case 124:
			return 25398;
		case 125:
			return 25399;
		case 126:
			return 25400;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
		case 79:
			return 25245;
		case 80:
			return 25246;
		case 81:
			return 25247;
		case 82:
			return 25248;
		case 83:
			return 25249;
		case 84:
			return 25250;
		case 85:
			return 25000;
		case 86:
			return 25251;
		case 87:
			return 25252;
		case 88:
			return 25253;
		case 89:
			return 25254;
		case 90:
			return 25255;
		case 91:
			return 25256;
		case 92:
			return 25257;
		case 93:
			return 25258;
		case 94:
			return 25259;
		case 95:
			return 25260;
		case 96:
			return 25261;
		case 97:
			return 25262;
		case 98:
			return 25263;
		case 99:
			return 25264;
		case 100:
			return 25225;
		case 101:
			return 25178;
		case 311:
			return 25265;
		case 312:
			return 25266;
		case 313:
			return 25267;
		case 314:
			return 25268;
		case 315:
			return 24977;
		case 316:
			return 25269;
		case 317:
			return 25270;
		case 318:
			return 25271;
		case 319:
			return 25272;
		case 320:
			return 25273;
		case 321:
			return 25274;
		case 322:
			return 25275;
		case 323:
			return 25276;
		case 324:
			return 25277;
		case 325:
			return 25278;
		case 326:
			return 25279;
		case 327:
			return 25280;
		case 328:
			return 25281;
		case 329:
			return 25282;
		case 330:
			return 25283;
		case 331:
			return 25284;
		case 332:
			return 25285;
		case 333:
			return 25286;
		case 334:
			return 25287;
		case 335:
			return 25288;
		case 336:
			return 25289;
		case 337:
			return 25290;
		case 338:
			return 25291;
		case 339:
			return 25292;
		case 340:
			return 25293;
		case 341:
			return 25294;
		case 342:
			return 25295;
		case 343:
			return 25296;
		case 344:
			return 25297;
		case 345:
			return 25298;
		case 346:
			return 25299;
		case 347:
			return 25300;
		case 348:
			return 25301;
		case 349:
			return 25302;
		case 350:
			return 25303;
		case 351:
			return 25304;
		case 352:
			return 25305;
		case 353:
			return 25306;
		case 354:
			return 25307;
		case 355:
			return 25308;
		case 356:
			return 25309;
		case 357:
			return 25310;
		case 358:
			return 25311;
		case 359:
			return 25312;
		case 360:
			return 25313;
		case 361:
			return 25314;
		case 362:
			return 25315;
		case 363:
			return 25316;
		case 364:
			return 25317;
		case 365:
			return 25318;
		case 366:
			return 25319;
		case 367:
			return 25320;
		case 368:
			return 25321;
		case 369:
			return 25322;
		case 370:
			return 25323;
		case 371:
			return 25324;
		case 372:
			return 25325;
		case 373:
			return 25326;
		case 374:
			return 25327;
		case 375:
			return 25328;
		case 376:
			return 25329;
		case 377:
			return 25330;
		case 378:
			return 25331;
		case 379:
			return 25332;
		case 380:
			return 25333;
		case 381:
			return 25334;
		case 382:
			return 25335;
		case 383:
			return 25336;
		case 384:
			return 25337;
		case 385:
			return 25338;
		case 386:
			return 25339;
		case 387:
			return 25340;
		case 388:
			return 25341;
		case 389:
			return 25342;
		case 390:
			return 25343;
		case 391:
			return 25344;
		case 392:
			return 25345;
		case 393:
			return 25346;
		case 394:
			return 25347;
		case 395:
			return 24970;
		case 396:
			return 25348;
		case 397:
			return 25349;
		case 398:
			return 25350;
		case 399:
			return 25351;
		case 400:
			return 25352;
		case 401:
			return 25353;
		case 402:
			return 25354;
		case 403:
			return 25355;
		case 404:
			return 25356;
		case 405:
			return 25357;
		case 406:
			return 25358;
		case 407:
			return 25359;
		case 408:
			return 25360;
		case 409:
			return 25361;
		case 410:
			return 25362;
		case 411:
			return 25363;
		case 412:
			return 25364;
		case 413:
			return 25365;
		case 414:
			return 25366;
		case 415:
			return 25367;
		case 416:
			return 25368;
		case 417:
			return 25369;
		case 418:
			return 25370;
		case 419:
			return 25371;
		case 420:
			return 25373;
		case 421:
			return 25374;
		case 422:
			return 25375;
		case 423:
			return 25377;
		case 424:
			return 25378;
		case 425:
			return 25379;
		case 426:
			return 25382;
		case 427:
			return 25383;
		case 428:
			return 25386;
		case 429:
			return 25390;
		case 430:
			return 25391;
		case 431:
			return 25392;
		case 432:
			return 25393;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
		case 25:
			return 25113;
		case 26:
			return 25114;
		case 28:
			return 25115;
		case 29:
			return 25116;
		case 30:
			return 25120;
		case 32:
			return 25121;
		case 33:
			return 25122;
		case 34:
			return 25123;
		case 36:
			return 25124;
		case 37:
			return 25126;
		case 38:
			return 25130;
		case 40:
			return 25131;
		case 41:
			return 25132;
		case 42:
			return 25133;
		case 44:
			return 25134;
		case 45:
			return 25137;
		case 46:
			return 25138;
		case 48:
			return 25142;
		case 49:
			return 25143;
		case 50:
			return 25144;
		case 52:
			return 25145;
		case 53:
			return 25146;
		case 54:
			return 25147;
		case 56:
			return 25149;
		case 57:
			return 25150;
		case 58:
			return 25154;
		case 60:
			return 25155;
		case 61:
			return 25156;
		case 62:
			return 25157;
		case 64:
			return 25158;
		case 65:
			return 25159;
		case 66:
			return 25163;
		case 69:
			return 25164;
		case 70:
			return 25165;
		case 71:
			return 25166;
		case 129:
			return 25167;
		case 130:
			return 25171;
		case 131:
			return 25172;
		case 132:
			return 25176;
		case 133:
			return 25177;
		case 134:
			return 25181;
		case 135:
			return 25182;
		case 136:
			return 25186;
		case 137:
			return 25187;
		case 138:
			return 25189;
		case 142:
			return 25190;
		case 143:
			return 25194;
		case 144:
			return 25195;
		case 145:
			return 25196;
		case 146:
			return 25197;
		case 147:
			return 25199;
		case 148:
			return 25200;
		case 149:
			return 25201;
		case 150:
			return 25205;
		case 151:
			return 25206;
		case 152:
			return 25207;
		case 153:
			return 25208;
		case 154:
			return 25210;
		case 155:
			return 25211;
		case 156:
			return 25215;
		case 157:
			return 25216;
		case 158:
			return 25218;
		case 159:
			return 25219;
		case 163:
			return 25220;
		case 164:
			return 25224;
		case 165:
			return 25226;
		case 166:
			return 25227;
		case 167:
			return 25232;
		case 168:
			return 25372;
		case 169:
			return 25376;
		case 170:
			return 25380;
		case 171:
			return 25381;
		case 172:
			return 25384;
		case 173:
			return 25385;
		case 174:
			return 25387;
		case 175:
			return 25388;
		case 176:
			return 25389;
		case 177:
			return 25407;
		case 178:
			return 25408;
		case 179:
			return 25409;
		case 180:
			return 25410;
		case 184:
			return 25411;
		case 185:
			return 25412;
		case 186:
			return 25413;
		case 187:
			return 25414;
		case 188:
			return 25415;
		case 189:
			return 25416;
		case 190:
			return 25417;
		case 191:
			return 25418;
		case 192:
			return 25419;
		case 195:
			return 25420;
		case 196:
			return 25421;
		case 197:
			return 25422;
		case 198:
			return 25423;
		case 199:
			return 25424;
		case 200:
			return 25425;
		case 201:
			return 25426;
		case 202:
			return 25427;
		case 203:
			return 25428;
		case 204:
			return 25429;
		case 205:
			return 25430;
		case 211:
			return 25431;
		case 212:
			return 25432;
		case 213:
			return 25433;
		case 214:
			return 25434;
		case 215:
			return 25435;
		case 216:
			return 25436;
		case 217:
			return 25437;
		case 218:
			return 25438;
		case 219:
			return 25439;
		case 220:
			return 25440;
		case 221:
			return 25441;
		case 222:
			return 25442;
		case 223:
			return 25443;
		case 224:
			return 25444;
		case 225:
			return 25445;
		case 226:
			return 25446;
		case 227:
			return 25447;
		case 228:
			return 25448;
		case 229:
			return 25449;
		case 230:
			return 25450;
		case 231:
			return 25451;
		case 232:
			return 25452;
		case 233:
			return 25453;
		case 237:
			return 25454;
		case 238:
			return 25455;
		case 239:
			return 25456;
		case 240:
			return 25457;
		case 241:
			return 25458;
		case 242:
			return 25459;
		case 243:
			return 25460;
		case 244:
			return 25461;
		case 245:
			return 25462;
		case 246:
			return 25463;
		case 247:
			return 25464;
		case 251:
			return 25465;
		case 252:
			return 25466;
		case 253:
			return 25467;
		case 254:
			return 25468;
		case 255:
			return 25469;
		case 256:
			return 25470;
		case 257:
			return 25471;
		case 258:
			return 25472;
		case 262:
			return 25473;
		case 263:
			return 25474;
		case 264:
			return 25475;
		case 265:
			return 25476;
		case 266:
			return 25477;
		case 267:
			return 25478;
		case 268:
			return 25479;
		case 269:
			return 25480;
		case 270:
			return 25481;
		case 271:
			return 25482;
		case 272:
			return 25483;
		case 273:
			return 25484;
		case 277:
			return 25485;
		case 278:
			return 25486;
		case 279:
			return 25487;
		case 280:
			return 25488;
		case 281:
			return 25489;
		case 282:
			return 25490;
		case 283:
			return 25491;
		case 287:
			return 25492;
		case 288:
			return 25493;
		case 289:
			return 25494;
		case 290:
			return 25495;
		case 291:
			return 25496;
		case 292:
			return 25497;
		case 293:
			return 25498;
		case 294:
			return 25499;
		case 295:
			return 25500;
		case 296:
			return 25501;
		case 297:
			return 25502;
		case 298:
			return 25503;
		case 299:
			return 25504;
		case 300:
			return 25505;
		case 301:
			return 25506;
		case 302:
			return 25507;
		case 303:
			return 25508;
		case 304:
			return 25509;
		case 305:
			return 25510;
		case 306:
			return 25511;
	}
	return 0;
}

int func_652(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 5;
		case 14:
			return 6;
		case 15:
			return 7;
		case 16:
			return 8;
		case 19:
			return 9;
		case 22:
			return 10;
		case 23:
			return 11;
		case 24:
			return 12;
		case 25:
			return 13;
		case 27:
			return 14;
		case 28:
			return 15;
		case 29:
			return 16;
		case 30:
			return 17;
		case 31:
			return 18;
		case 20:
			return 19;
		case 32:
			return 20;
		case 21:
			return 21;
		case 78:
			return 22;
		case 79:
			return 23;
		case 80:
			return 24;
		case 18:
			return 25;
		case 81:
			return 26;
		case 82:
			return 27;
		case 83:
			return 28;
		case 84:
			return 29;
		case 85:
			return 30;
		case 86:
			return 31;
		case 87:
			return 32;
		case 88:
			return 33;
		case 102:
			return 34;
		case 113:
			return 35;
		case 160:
			return 36;
		case 163:
			return 37;
		case 162:
			return 38;
		case 164:
			if (func_653(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		case 199:
			return 41;
		case 201:
			return 42;
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				case 2:
					return 44;
				case 3:
					return 45;
				case 4:
					return 46;
				case 5:
					return 47;
				case 6:
					return 48;
				case 7:
					return 49;
				case 8:
					return 50;
				case 9:
					return 51;
				case 10:
					return 52;
				case 11:
					return 53;
				case 12:
					return 54;
				case 13:
					return 55;
				case 14:
					return 56;
				case 15:
					return 57;
				case 16:
					return 58;
				case 17:
					return 59;
				case 18:
					return 60;
				case 19:
					return 61;
				case 20:
					return 62;
				case 21:
					return 63;
				case 22:
					return 64;
				case 23:
					return 65;
				case 24:
					return 66;
				case 25:
					return 67;
				default:
					break;
			}
			return 43;
		case 171:
			return 68;
		case 187:
			return 69;
		case 177:
			return 70;
		case 183:
			return 71;
		case 185:
			return 72;
		case 184:
			return 73;
		case 188:
			return 74;
		case 173:
			return 75;
		case 178:
			return 76;
		case 186:
			return 77;
		case 215:
			return 78;
		case 217:
			return 79;
		case 224:
			return 80;
		case 237:
			return 81;
		case 243:
			return 82;
		case 244:
			return 83;
		case 245:
			return 84;
		case 253:
			return 85;
		case 254:
			return 86;
		case 256:
			return 87;
		case 257:
			return 88;
		case 258:
			return 89;
		case 276:
			if (func_653(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		case 323:
			return 92;
		case 324:
			return 93;
		case 337:
			return 94;
		case 357:
			return 95;
		case 402:
			return 96;
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				case 2:
					return 98;
				case 3:
					return 99;
				case 4:
					return 100;
				case 5:
					return 101;
				case 6:
					return 102;
				case 7:
					return 103;
				case 8:
					return 104;
				default:
					break;
			}
			return 97;
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				case 2:
					return 106;
				case 3:
					return 107;
				case 4:
					return 108;
				case 5:
					return 109;
				case 6:
					return 110;
				case 7:
					return 111;
				case 8:
					return 112;
				case 9:
					return 113;
				case 10:
					return 114;
				default:
					break;
			}
			return 105;
		case 450:
			return 115;
		case 451:
			return 116;
		case 452:
			return 117;
		case 453:
			return 118;
		case 454:
			return 119;
		case 455:
			return 120;
		case 456:
			return 121;
		case 457:
			return 122;
		case 480:
			return 123;
		case 482:
			return 124;
		case 483:
			return 125;
		case 518:
			return 126;
		case 531:
			return 127;
		case 533:
			return 128;
		case 527:
			return 129;
		case 525:
			return 130;
	}
	return -1;
}

int func_653(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_643(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_637() && func_681())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_637())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_680(iParam0))
	{
		if (Global_75588)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_475(iVar0);
	if (iVar1 != -1)
	{
		if (func_678(func_679(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_642(iParam0))
	{
		if (func_637())
		{
			if ((iParam0 == 205 && Global_262145.f_19759) || (iParam0 != 205 && Global_262145.f_19758))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_641(iParam0))
	{
		if (func_633(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_677(iVar0);
	if (iVar2 != -1)
	{
		if (func_675(func_676(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_674(iVar0);
	if (iVar3 > 0)
	{
		if (func_672(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_671(iVar0);
	if (iVar4 != -1)
	{
		if (func_669(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_668(iVar0);
	if (iVar5 != -1)
	{
		if (func_666(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_665(iVar0);
	if (iVar6 != -1)
	{
		if (func_663(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("FIRETRUK") || iVar0 == joaat("BOXVILLE")) || iVar0 == joaat("STOCKADE"))
	{
		if (func_662(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_640(iVar0);
	if (iVar7 != -1)
	{
		if (func_662(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_638(iVar0);
	if (iVar8 != -1)
	{
		if (func_654(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_654(int iParam0)
{
	if (!Global_76833)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -210308634:
			if (func_659(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
			break;
		case 1429622905:
			if (func_658(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		case 2014313426:
			if (func_657(281, -1))
			{
				return 1;
			}
			break;
		case 1861786828:
			if (func_657(282, -1))
			{
				return 1;
			}
			break;
		case 295054921:
			if (func_657(283, -1))
			{
				return 1;
			}
			break;
		case -365873403:
			if (func_657(284, -1))
			{
				return 1;
			}
			break;
		case -276744698:
			if (func_657(285, -1))
			{
				return 1;
			}
			break;
		case 1644055914:
			if ((func_655(0, 1) && func_655(1, 1)) && func_655(2, 1))
			{
				return 1;
			}
			break;
		case -1149725334:
			if (func_655(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_655(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return MISC::IS_BIT_SET(func_21(9582, -1, 0), iParam0);
	}
	return func_656(PLAYER::PLAYER_ID(), iParam0);
}

int func_656(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1706028[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

int func_657(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2587834[iParam0 /*3*/][func_22(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_658(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1706028[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_659(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_660(iParam0, func_661(iParam1));
	}
	return 0;
}

int func_660(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1706028[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 7:
			return 1;
		case 1:
			return 2;
		case 5:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		case 6:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		case 15:
			return 14;
		case 16:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_662(int iParam0)
{
	int iVar0;

	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = func_21(8834, -1, 0);
	switch (iParam0)
	{
		case joaat("FIRETRUK"):
			if (MISC::IS_BIT_SET(iVar0, 0) || Global_262145.f_27870)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("BURRITO2"):
			if (MISC::IS_BIT_SET(iVar0, 1) || Global_262145.f_27871)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("BOXVILLE"):
			if (MISC::IS_BIT_SET(iVar0, 2) || Global_262145.f_27872)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("STOCKADE"):
			if (MISC::IS_BIT_SET(iVar0, 3) || Global_262145.f_27873)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1118611807:
			if (MISC::IS_BIT_SET(iVar0, 4) || Global_262145.f_27874)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 409049982:
			if (MISC::IS_BIT_SET(iVar0, 5) || Global_262145.f_27875)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case -1756021720:
			if (MISC::IS_BIT_SET(iVar0, 6) || Global_262145.f_27876)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 2031587082:
			if (MISC::IS_BIT_SET(iVar0, 7) || Global_262145.f_27877)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1693751655:
			if (MISC::IS_BIT_SET(iVar0, 8) || Global_262145.f_27878)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 987469656:
			if (MISC::IS_BIT_SET(iVar0, 9) || Global_262145.f_27879)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 872704284:
			if (MISC::IS_BIT_SET(iVar0, 10) || Global_262145.f_27880)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("OUTLAW"):
			if (MISC::IS_BIT_SET(iVar0, 11) || Global_262145.f_27881)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 740289177:
			if (MISC::IS_BIT_SET(iVar0, 12) || Global_262145.f_27882)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case -834353991:
			if (MISC::IS_BIT_SET(iVar0, 13) || Global_262145.f_27883)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 301304410:
			if (MISC::IS_BIT_SET(iVar0, 14) || Global_262145.f_27884)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 960812448:
			if (MISC::IS_BIT_SET(iVar0, 15) || Global_262145.f_27885)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1284356689:
			if (MISC::IS_BIT_SET(iVar0, 16) || Global_262145.f_27886)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case -208911803:
			if (MISC::IS_BIT_SET(iVar0, 17) || Global_262145.f_27887)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("SENTINEL3"):
			if (MISC::IS_BIT_SET(iVar0, 18) || Global_262145.f_27888)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 722226637:
			if (MISC::IS_BIT_SET(iVar0, 19) || Global_262145.f_27889)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("ELLIE"):
			if (MISC::IS_BIT_SET(iVar0, 20) || Global_262145.f_27890)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("DEFILER"):
			if (MISC::IS_BIT_SET(iVar0, 21) || Global_262145.f_27891)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("MANCHEZ"):
			if (MISC::IS_BIT_SET(iVar0, 22) || Global_262145.f_27892)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_663(int iParam0)
{
	if (!Global_76833)
	{
		return 0;
	}
	if (iParam0 == joaat("COGNOSCENTI") || iParam0 == joaat("COGNOSCENTI2"))
	{
		return 0;
	}
	if (func_665(iParam0) != -1)
	{
		if (func_650(func_664(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CERBERUS"):
			return 8;
		case joaat("CERBERUS2"):
			return 9;
		case joaat("CERBERUS3"):
			return 10;
		case joaat("BRUTUS"):
			return 11;
		case joaat("BRUTUS2"):
			return 12;
		case joaat("BRUTUS3"):
			return 13;
		case joaat("ZR380"):
			return 14;
		case joaat("ZR3802"):
			return 15;
		case joaat("ZR3803"):
			return 16;
		case joaat("SCARAB"):
			return 20;
		case joaat("SCARAB2"):
			return 21;
		case joaat("SCARAB3"):
			return 22;
		case joaat("IMPERATOR"):
			return 17;
		case joaat("IMPERATOR2"):
			return 18;
		case joaat("IMPERATOR3"):
			return 19;
		case joaat("IMPALER"):
			return 102;
		case joaat("RATLOADER2"):
			return 103;
		case joaat("GLENDALE"):
			return 104;
		case joaat("SLAMVAN"):
			return 105;
		case joaat("DOMINATOR"):
			return 106;
		case joaat("ISSI3"):
			return 107;
		case joaat("GARGOYLE"):
			return 108;
	}
	return -1;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CERBERUS"):
			return 0;
		case joaat("CERBERUS2"):
			return 1;
		case joaat("CERBERUS3"):
			return 2;
		case joaat("BRUTUS"):
			return 3;
		case joaat("BRUTUS2"):
			return 4;
		case joaat("BRUTUS3"):
			return 5;
		case joaat("SCARAB"):
			return 6;
		case joaat("SCARAB2"):
			return 7;
		case joaat("SCARAB3"):
			return 8;
		case joaat("IMPERATOR"):
			return 9;
		case joaat("IMPERATOR2"):
			return 10;
		case joaat("IMPERATOR3"):
			return 11;
		case joaat("ZR380"):
			return 12;
		case joaat("ZR3802"):
			return 13;
		case joaat("ZR3803"):
			return 14;
		case joaat("RATLOADER2"):
			return 15;
		case joaat("GLENDALE"):
			return 16;
		case joaat("SLAMVAN"):
			return 17;
		case joaat("DOMINATOR"):
			return 18;
		case joaat("IMPALER"):
			return 19;
		case joaat("ISSI3"):
			return 20;
		case joaat("GARGOYLE"):
			return 21;
		default:
			break;
	}
	return -1;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			if (func_21(7231, -1, 0) >= func_667(iParam0) || Global_262145.f_24174)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("POUNDER2"):
			if (func_21(7231, -1, 0) >= func_667(iParam0) || Global_262145.f_24175)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("OPPRESSOR2"):
			if (func_67(22050, -1, -1) >= func_667(iParam0) || Global_262145.f_24176)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("PBUS2"):
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_281.f_7, 1) || Global_262145.f_24178)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("PATRIOT2"):
			if (func_21(7229, -1, 0) >= func_667(iParam0) || Global_262145.f_24179)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("BLIMP3"):
			if (func_21(7229, -1, 0) >= func_667(iParam0) || Global_262145.f_24180)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("SCRAMJET"):
			if (func_498(22123, -1, -1) || Global_262145.f_24177)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			return Global_262145.f_24181;
		case joaat("POUNDER2"):
			return Global_262145.f_24182;
		case joaat("OPPRESSOR2"):
			return Global_262145.f_24183;
		case joaat("PATRIOT2"):
			return Global_262145.f_24184;
		case joaat("BLIMP3"):
			return Global_262145.f_24185;
	}
	return 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			return 0;
		case joaat("POUNDER2"):
			return 1;
		case joaat("OPPRESSOR2"):
			return 2;
		case joaat("SCRAMJET"):
			return 3;
		case joaat("PBUS2"):
			return 4;
		case joaat("PATRIOT2"):
			return 5;
		case joaat("BLIMP3"):
			return 6;
	}
	return -1;
}

int func_669(int iParam0)
{
	int iVar0;

	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = func_21(5662, -1, 0);
	switch (iParam0)
	{
		case joaat("DELUXO"):
			return MISC::IS_BIT_SET(iVar0, func_670(1));
		case joaat("AKULA"):
			return MISC::IS_BIT_SET(iVar0, func_670(2));
		case joaat("RIOT2"):
			return MISC::IS_BIT_SET(iVar0, func_670(6));
		case joaat("STROMBERG"):
			return MISC::IS_BIT_SET(iVar0, func_670(7));
		case joaat("CHERNOBOG"):
			return MISC::IS_BIT_SET(iVar0, func_670(10));
		case joaat("BARRAGE"):
			return MISC::IS_BIT_SET(iVar0, func_670(11));
		case joaat("KHANJALI"):
			return MISC::IS_BIT_SET(iVar0, func_670(12));
		case joaat("VOLATOL"):
			return MISC::IS_BIT_SET(iVar0, func_670(13));
		case joaat("THRUSTER"):
			return MISC::IS_BIT_SET(iVar0, func_670(15));
		default:
			break;
	}
	return 0;
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DELUXO"):
			return 0;
		case joaat("AKULA"):
			return 1;
		case joaat("RIOT2"):
			return 2;
		case joaat("STROMBERG"):
			return 3;
		case joaat("CHERNOBOG"):
			return 4;
		case joaat("BARRAGE"):
			return 5;
		case joaat("KHANJALI"):
			return 6;
		case joaat("VOLATOL"):
			return 7;
		case joaat("THRUSTER"):
			return 8;
	}
	return -1;
}

int func_672(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = func_674(iParam0);
	iVar1 = func_673();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_673()
{
	return func_21(6114, -1, 0);
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICROLIGHT"):
			return Global_262145.f_22223;
		case joaat("ROGUE"):
			return Global_262145.f_22224;
		case joaat("ALPHAZ1"):
			return Global_262145.f_22225;
		case joaat("HAVOK"):
			return Global_262145.f_22226;
		case joaat("STARLING"):
			return Global_262145.f_22227;
		case joaat("MOLOTOK"):
			return Global_262145.f_22228;
		case joaat("TULA"):
			return Global_262145.f_22229;
		case joaat("BOMBUSHKA"):
			return Global_262145.f_22230;
		case joaat("HOWARD"):
			return Global_262145.f_22231;
		case joaat("MOGUL"):
			return Global_262145.f_22232;
		case joaat("PYRO"):
			return Global_262145.f_22233;
		case joaat("SEABREEZE"):
			return Global_262145.f_22234;
		case joaat("NOKOTA"):
			return Global_262145.f_22235;
		case joaat("HUNTER"):
			return Global_262145.f_22236;
		default:
			break;
	}
	return 0;
}

bool func_675(int iParam0)
{
	if (!Global_76833)
	{
		return false;
	}
	return MISC::IS_BIT_SET(func_21(5464, -1, 0), iParam0);
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
		case joaat("HALFTRACK"):
			return 1;
		case joaat("TRAILERSMALL2"):
			return 2;
		case joaat("APC"):
			return 3;
		case joaat("TAMPA3"):
			return 5;
		case joaat("OPPRESSOR"):
			return 7;
		default:
			break;
	}
	return 3;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
		case joaat("HALFTRACK"):
			return 1;
		case joaat("TRAILERSMALL2"):
			return 2;
		case joaat("APC"):
			return 3;
		case joaat("TAMPA3"):
			return 4;
		case joaat("OPPRESSOR"):
			return 5;
	}
	return -1;
}

bool func_678(int iParam0)
{
	if (!Global_76833)
	{
		return false;
	}
	return MISC::IS_BIT_SET(func_21(5327, -1, 0), iParam0);
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DUNE4"):
			return 0;
		case joaat("DUNE5"):
			return 0;
		case joaat("WASTELANDER"):
			return 1;
		case joaat("BLAZER5"):
			return 2;
		case joaat("PHANTOM2"):
			return 3;
		case joaat("VOLTIC2"):
			return 4;
		case joaat("TECHNICAL2"):
			return 5;
		case joaat("BOXVILLE5"):
			return 6;
		case joaat("RUINER2"):
			return 7;
		default:
			break;
	}
	return 0;
}

int func_680(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_681()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150694.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ZTYPE"):
			return 0;
		case joaat("STINGER"):
			return 1;
		case joaat("JB700"):
			return 2;
		case joaat("CHEETAH"):
			return 3;
		case joaat("ENTITYXF"):
			return 4;
		case joaat("ADDER"):
			return 5;
		case joaat("MONROE"):
			return 6;
		case joaat("COGCABRIO"):
			return 7;
		case joaat("SHAMAL"):
			return 10;
		case joaat("STUNT"):
			return 11;
		case joaat("CUBAN800"):
			return 12;
		case joaat("DUSTER"):
			return 13;
		case joaat("LUXOR"):
			return 14;
		case joaat("FROGGER"):
			return 15;
		case joaat("MAVERICK"):
			return 16;
		case joaat("RHINO"):
			return 17;
		case joaat("TITAN"):
			return 18;
		case joaat("CARGOBOB"):
			return 19;
		case joaat("BUZZARD"):
			return 20;
		case joaat("CRUSADER"):
			return 21;
		case joaat("BARRACKS"):
			return 22;
		case joaat("MARQUIS"):
			return 24;
		case joaat("JETMAX"):
			return 25;
		case joaat("SQUALO"):
			return 27;
		case joaat("TROPIC"):
			return 29;
		case joaat("SEASHARK"):
			return 30;
		case joaat("SUBMERSIBLE"):
			return 31;
		case joaat("SUNTRAP"):
			return 32;
		case joaat("TUG"):
			return 258;
		case joaat("BMX"):
			return 33;
		case joaat("SCORCHER"):
			return 34;
		case joaat("TRIBIKE"):
			return 35;
		case joaat("TRIBIKE2"):
			return 36;
		case joaat("TRIBIKE3"):
			return 37;
		case joaat("CRUISER"):
			return 38;
		case joaat("SCHWARZER"):
			return 39;
		case joaat("ZION"):
			return 40;
		case joaat("GAUNTLET"):
			return 41;
		case joaat("VIGERO"):
			return 42;
		case joaat("ISSI2"):
			return 43;
		case joaat("INFERNUS"):
			return 44;
		case joaat("SURANO"):
			return 45;
		case joaat("VACCA"):
			return 46;
		case joaat("NINEF"):
			return 47;
		case joaat("COMET2"):
			return 48;
		case joaat("BANSHEE"):
			return 49;
		case joaat("FELTZER2"):
			return 50;
		case joaat("BFINJECTION"):
			return 51;
		case joaat("SANDKING"):
			return 52;
		case joaat("FUGITIVE"):
			return 53;
		case joaat("DILETTANTE"):
			return 54;
		case joaat("SUPERD"):
			return 55;
		case joaat("EXEMPLAR"):
			return 56;
		case joaat("BALLER2"):
			return 57;
		case joaat("CAVALCADE"):
			return 58;
		case joaat("ROCOTO"):
			return 59;
		case joaat("FELON"):
			return 60;
		case joaat("ORACLE2"):
			return 61;
		case joaat("BATI"):
			return 62;
		case joaat("AKUMA"):
			return 63;
		case joaat("RUFFIAN"):
			return 64;
		case joaat("VADER"):
			return 65;
		case joaat("BLAZER"):
			return 66;
		case joaat("PCJ"):
			return 67;
		case joaat("SANCHEZ"):
			return 68;
		case joaat("FAGGIO2"):
			return 69;
		case joaat("AIRBUS"):
			return 82;
		case joaat("ANNIHILATOR"):
			return 78;
		case joaat("BATI2"):
			return 94;
		case joaat("BISON"):
			return 89;
		case joaat("BULLET"):
			return 70;
		case joaat("BUS"):
			return 83;
		case joaat("CARBONIZZARE"):
			return 71;
		case joaat("COACH"):
			return 84;
		case joaat("COQUETTE"):
			return 72;
		case joaat("DOUBLE"):
			return 90;
		case joaat("DUMP"):
			return 81;
		case joaat("FELON2"):
			return 91;
		case joaat("HEXER"):
			return 92;
		case joaat("JOURNEY"):
			return 85;
		case joaat("MAMMATUS"):
			return 79;
		case joaat("MULE"):
			return 86;
		case joaat("NINEF2"):
			return 73;
		case joaat("RAPIDGT"):
			return 74;
		case joaat("RAPIDGT2"):
			return 75;
		case joaat("RENTALBUS"):
			return 87;
		case joaat("STINGERGT"):
			return 76;
		case joaat("STRETCH"):
			return 88;
		case joaat("VELUM"):
			return 80;
		case joaat("VOLTIC"):
			return 77;
		case joaat("ZION2"):
			return 93;
		case joaat("ELEGY2"):
			return 95;
		case joaat("KHAMELION"):
			return 96;
		case joaat("HOTKNIFE"):
			return 97;
		case joaat("CARBONRS"):
			return 98;
		case joaat("BODHI2"):
			return 103;
		case joaat("DUNE"):
			return 104;
		case joaat("REBEL"):
			return 105;
		case joaat("SADLER"):
			return 106;
		case joaat("SANCHEZ2"):
			return 107;
		case joaat("SANDKING2"):
			return 108;
		case joaat("ASEA"):
			return 128;
		case joaat("ASTEROPE"):
			return 129;
		case joaat("BOBCATXL"):
			return 130;
		case joaat("CAVALCADE2"):
			return 131;
		case joaat("GRANGER"):
			return 132;
		case joaat("INGOT"):
			return 133;
		case joaat("INTRUDER"):
			return 134;
		case joaat("MINIVAN"):
			return 135;
		case joaat("PREMIER"):
			return 136;
		case joaat("RADI"):
			return 137;
		case joaat("RANCHERXL"):
			return 138;
		case joaat("RATLOADER"):
			return 139;
		case joaat("STANIER"):
			return 140;
		case joaat("STRATUM"):
			return 141;
		case joaat("WASHINGTON"):
			return 142;
		case joaat("DOMINATOR"):
			return 122;
		case joaat("F620"):
			return 123;
		case joaat("FUSILADE"):
			return 124;
		case joaat("PENUMBRA"):
			return 125;
		case joaat("SENTINEL"):
			return 126;
		case joaat("SENTINEL2"):
			return 127;
		case joaat("PICADOR"):
			return 150;
		case joaat("REGINA"):
			return 151;
		case joaat("SURFER"):
			return 152;
		case joaat("YOUGA"):
			return 153;
		case joaat("BLAZER3"):
			return 154;
		case joaat("REBEL2"):
			return 155;
		case joaat("PRIMO"):
			return 156;
		case joaat("BUFFALO"):
			return 157;
		case joaat("BUFFALO2"):
			return 158;
		case joaat("TAILGATER"):
			return 159;
		default:
			break;
	}
	if (iParam0 == joaat("BIFTA"))
	{
		return 99;
	}
	else if (iParam0 == joaat("KALAHARI"))
	{
		return 100;
	}
	else if (iParam0 == joaat("PARADISE"))
	{
		return 101;
	}
	else if (iParam0 == joaat("SPEEDER"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("BTYPE"))
	{
		return 109;
	}
	else if (iParam0 == joaat("JESTER"))
	{
		return 111;
	}
	else if (iParam0 == joaat("MASSACRO"))
	{
		return 114;
	}
	else if (iParam0 == joaat("TURISMOR"))
	{
		return 112;
	}
	else if (iParam0 == joaat("ZENTORNO"))
	{
		return 115;
	}
	else if (iParam0 == joaat("HUNTLEY"))
	{
		return 116;
	}
	else if (iParam0 == joaat("ALPHA"))
	{
		return 110;
	}
	else if (iParam0 == joaat("VESTRA"))
	{
		return 113;
	}
	else if (iParam0 == joaat("COQUETTE"))
	{
		return 117;
	}
	else if (iParam0 == joaat("BANSHEE"))
	{
		return 118;
	}
	else if (iParam0 == joaat("STINGER"))
	{
		return 119;
	}
	else if (iParam0 == joaat("VOLTIC"))
	{
		return 120;
	}
	else if (iParam0 == joaat("THRUST"))
	{
		return 121;
	}
	else if (iParam0 == joaat("BLADE"))
	{
		return 143;
	}
	else if (iParam0 == joaat("WARRENER"))
	{
		return 144;
	}
	else if (iParam0 == joaat("GLENDALE"))
	{
		return 145;
	}
	else if (iParam0 == joaat("RHAPSODY"))
	{
		return 146;
	}
	else if (iParam0 == joaat("PANTO"))
	{
		return 147;
	}
	else if (iParam0 == joaat("DUBSTA3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("PIGALLE"))
	{
		return 149;
	}
	else if (iParam0 == joaat("MONSTER"))
	{
		return 160;
	}
	else if (iParam0 == joaat("SOVEREIGN"))
	{
		return 161;
	}
	else if (iParam0 == joaat("MILJET"))
	{
		return 162;
	}
	else if (iParam0 == joaat("BESRA"))
	{
		return 163;
	}
	else if (iParam0 == joaat("SWIFT"))
	{
		return 164;
	}
	else if (iParam0 == joaat("COQUETTE2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("COQUETTE2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("INNOVATION"))
	{
		return 167;
	}
	else if (iParam0 == joaat("HAKUCHOU"))
	{
		return 168;
	}
	else if (iParam0 == joaat("FUROREGT"))
	{
		return 169;
	}
	else if (iParam0 == joaat("KALAHARI"))
	{
		return 170;
	}
	else if (iParam0 == joaat("VALKYRIE"))
	{
		return 187;
	}
	else if (iParam0 == joaat("HYDRA"))
	{
		return 177;
	}
	else if (iParam0 == joaat("SAVAGE"))
	{
		return 185;
	}
	else if (iParam0 == joaat("ENDURO"))
	{
		return 174;
	}
	else if (iParam0 == joaat("BOXVILLE4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("CASCO"))
	{
		return 172;
	}
	else if (iParam0 == joaat("DINGHY3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("GBURRITO2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("GUARDIAN"))
	{
		return 176;
	}
	else if (iParam0 == joaat("INSURGENT"))
	{
		return 178;
	}
	else if (iParam0 == joaat("MULE3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("INSURGENT2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("LECTRO"))
	{
		return 182;
	}
	else if (iParam0 == joaat("PBUS"))
	{
		return 184;
	}
	else if (iParam0 == joaat("TECHNICAL"))
	{
		return 186;
	}
	else if (iParam0 == joaat("VELUM2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("GRESLEY"))
	{
		return 189;
	}
	else if (iParam0 == joaat("JACKAL"))
	{
		return 190;
	}
	else if (iParam0 == joaat("KURUMA"))
	{
		return 180;
	}
	else if (iParam0 == joaat("KURUMA2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("LANDSTALKER"))
	{
		return 191;
	}
	else if (iParam0 == joaat("MESA3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("NEMESIS"))
	{
		return 193;
	}
	else if (iParam0 == joaat("ORACLE"))
	{
		return 194;
	}
	else if (iParam0 == joaat("RUMPO"))
	{
		return 195;
	}
	else if (iParam0 == joaat("SCHAFTER2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("SEMINOLE"))
	{
		return 197;
	}
	else if (iParam0 == joaat("SURGE"))
	{
		return 198;
	}
	else if (iParam0 == joaat("DODO"))
	{
		return 199;
	}
	else if (iParam0 == joaat("MARSHALL"))
	{
		return 200;
	}
	else if (iParam0 == joaat("SUBMERSIBLE2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("BLISTA2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("STALION"))
	{
		return 203;
	}
	else if (iParam0 == joaat("DUKES"))
	{
		return 204;
	}
	else if (iParam0 == joaat("DUKES2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("STALION2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("SLAMVAN"))
	{
		return 210;
	}
	else if (iParam0 == joaat("RATLOADER2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("JESTER2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("MASSACRO2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("FELTZER3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("LUXOR2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("OSIRIS"))
	{
		return 216;
	}
	else if (iParam0 == joaat("SWIFT2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("VIRGO"))
	{
		return 218;
	}
	else if (iParam0 == joaat("WINDSOR"))
	{
		return 219;
	}
	else if (iParam0 == joaat("BRAWLER"))
	{
		return 220;
	}
	else if (iParam0 == joaat("CHINO"))
	{
		return 221;
	}
	else if (iParam0 == joaat("COQUETTE3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("T20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("TORO"))
	{
		return 224;
	}
	else if (iParam0 == joaat("VINDICATOR"))
	{
		return 225;
	}
	else if (iParam0 == joaat("PRIMO"))
	{
		return 229;
	}
	else if (iParam0 == joaat("MOONBEAM"))
	{
		return 228;
	}
	else if (iParam0 == joaat("FACTION"))
	{
		return 227;
	}
	else if (iParam0 == joaat("BUCCANEER"))
	{
		return 226;
	}
	else if (iParam0 == joaat("VOODOO2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("BTYPE2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("LURCHER"))
	{
		return 232;
	}
	else if (iParam0 == joaat("MINIVAN"))
	{
		return 135;
	}
	else if (iParam0 == joaat("VIRGO3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("TORNADO"))
	{
		return 250;
	}
	else if (iParam0 == joaat("SABREGT"))
	{
		return 249;
	}
	else if (iParam0 == joaat("SLAMVAN"))
	{
		return 210;
	}
	else if (iParam0 == joaat("FACTION"))
	{
		return 252;
	}
	else if (iParam0 == joaat("BALLER3") || iParam0 == joaat("BALLER5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("BALLER4") || iParam0 == joaat("BALLER6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("COG55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("COGNOSCENTI"))
	{
		return 236;
	}
	else if (iParam0 == joaat("LIMO2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("MAMBA"))
	{
		return 238;
	}
	else if (iParam0 == joaat("NIGHTSHADE"))
	{
		return 239;
	}
	else if (iParam0 == joaat("SCHAFTER3") || iParam0 == joaat("SCHAFTER5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("SCHAFTER4") || iParam0 == joaat("SCHAFTER6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("VERLIERER2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("SUPERVOLITO"))
	{
		return 243;
	}
	else if (iParam0 == joaat("SUPERVOLITO2"))
	{
		return 244;
	}
	else if (iParam0 == Global_74009)
	{
		return 245;
	}
	else if (iParam0 == joaat("TAMPA"))
	{
		return 246;
	}
	else if (iParam0 == joaat("SULTAN"))
	{
		return 247;
	}
	else if (iParam0 == joaat("BANSHEE"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("BTYPE3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("VOLATUS"))
	{
		return 253;
	}
	else if (iParam0 == joaat("CARGOBOB2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("RUMPO3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("BRICKADE"))
	{
		return 256;
	}
	else if (iParam0 == joaat("NIMBUS"))
	{
		return 257;
	}
	else if (iParam0 == joaat("WINDSOR2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("PROTOTIPO"))
	{
		return 260;
	}
	else if (iParam0 == joaat("FMJ"))
	{
		return 261;
	}
	else if (iParam0 == joaat("BESTIAGTS"))
	{
		return 262;
	}
	else if (iParam0 == joaat("XLS") || iParam0 == joaat("XLS2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("REAPER"))
	{
		return 266;
	}
	else if (iParam0 == joaat("LE7B"))
	{
		return 267;
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		return 268;
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		return 269;
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		return 270;
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		return 271;
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		return 273;
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		return 274;
	}
	else if (iParam0 == joaat("BF400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		return 279;
	}
	else if (iParam0 == joaat("LYNX"))
	{
		return 280;
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		return 281;
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		return 276;
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		return 278;
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		return 282;
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		return 283;
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		return 284;
	}
	else if (iParam0 == joaat("DEFILER"))
	{
		return 285;
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		return 286;
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		return 287;
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		return 288;
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		return 289;
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		return 291;
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		return 292;
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		return 293;
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		return 297;
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		return 295;
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		return 298;
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		return 301;
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		return 303;
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		return 309;
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("VOLTIC2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		return 312;
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		return 313;
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		return 314;
	}
	else if (iParam0 == joaat("NERO"))
	{
		return 315;
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		return 316;
	}
	else if (iParam0 == joaat("FCR"))
	{
		return 317;
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		return 318;
	}
	else if (iParam0 == joaat("GP1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		return 321;
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		return 322;
	}
	else if (iParam0 == Global_74009)
	{
		return 245;
	}
	else if (iParam0 == Global_74011)
	{
		return 324;
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("TORERO"))
	{
		return 326;
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		return 327;
	}
	else if (iParam0 == joaat("XA21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("APC"))
	{
		return 329;
	}
	else if (iParam0 == joaat("DUNE3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("HALFTRACK"))
	{
		return 331;
	}
	else if (iParam0 == joaat("OPPRESSOR"))
	{
		return 332;
	}
	else if (iParam0 == joaat("TAMPA3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("TRAILERSMALL2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		return 335;
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		return 336;
	}
	else if (iParam0 == joaat("LAZER"))
	{
		return 337;
	}
	else if (iParam0 == joaat("MICROLIGHT"))
	{
		return 338;
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		return 339;
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		return 340;
	}
	else if (iParam0 == joaat("STARLING"))
	{
		return 341;
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		return 342;
	}
	else if (iParam0 == joaat("TULA"))
	{
		return 343;
	}
	else if (iParam0 == joaat("PYRO"))
	{
		return 344;
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		return 345;
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		return 346;
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		return 347;
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		return 348;
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		return 349;
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		return 350;
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		return 352;
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		return 353;
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		return 354;
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		return 356;
	}
	else if (iParam0 == joaat("DELUXO"))
	{
		return 358;
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		return 359;
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		return 361;
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		return 362;
	}
	else if (iParam0 == joaat("AKULA"))
	{
		return 363;
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		return 364;
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		return 365;
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		return 366;
	}
	else if (iParam0 == joaat("COMET4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("NEON"))
	{
		return 368;
	}
	else if (iParam0 == joaat("STREITER"))
	{
		return 369;
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		return 371;
	}
	else if (iParam0 == joaat("SC1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		return 373;
	}
	else if (iParam0 == joaat("GT500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		return 375;
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		return 376;
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		return 377;
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		return 378;
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		return 379;
	}
	else if (iParam0 == joaat("RIATA"))
	{
		return 380;
	}
	else if (iParam0 == joaat("HERMES"))
	{
		return 381;
	}
	else if (iParam0 == joaat("COMET5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("Z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		return 384;
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		return 385;
	}
	else if (iParam0 == joaat("GB200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		return 388;
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		return 390;
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		return 391;
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		return 392;
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		return 393;
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		return 394;
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		return 396;
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		return 399;
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		return 400;
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		return 401;
	}
	else if (iParam0 == joaat("MULE4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		return 405;
	}
	else if (iParam0 == joaat("MENACER"))
	{
		return 406;
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		return 407;
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		return 408;
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		return 411;
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		return 412;
	}
	else if (iParam0 == joaat("FUTO"))
	{
		return 415;
	}
	else if (iParam0 == joaat("RUINER"))
	{
		return 416;
	}
	else if (iParam0 == joaat("ROMERO"))
	{
		return 417;
	}
	else if (iParam0 == joaat("PRAIRIE"))
	{
		return 418;
	}
	else if (iParam0 == joaat("BALLER"))
	{
		return 419;
	}
	else if (iParam0 == joaat("SERRANO"))
	{
		return 420;
	}
	else if (iParam0 == joaat("BJXL"))
	{
		return 421;
	}
	else if (iParam0 == joaat("HABANERO"))
	{
		return 422;
	}
	else if (iParam0 == joaat("FQ2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("PATRIOT"))
	{
		return 424;
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
		return 425;
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
		return 428;
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("SCARAB"))
	{
		return 431;
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
		return 434;
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("ZR380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("ZR3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("ZR3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("IMPALER"))
	{
		return 440;
	}
	else if (iParam0 == joaat("TAXI"))
	{
		return 450;
	}
	else if (iParam0 == joaat("BULLDOZER"))
	{
		return 451;
	}
	else if (iParam0 == joaat("SPEEDO2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("TRASH2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("BARRACKS2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("MIXER"))
	{
		return 455;
	}
	else if (iParam0 == joaat("DUNE2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("TRACTOR"))
	{
		return 457;
	}
	else if (iParam0 == joaat("BLISTA3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		return 441;
	}
	else if (iParam0 == joaat("TULIP"))
	{
		return 442;
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		return 443;
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		return 444;
	}
	else if (iParam0 == joaat("TOROS"))
	{
		return 445;
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		return 446;
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		return 447;
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		return 448;
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		return 449;
	}
	else if (iParam0 == 1044193113)
	{
		return 459;
	}
	else if (iParam0 == 686471183)
	{
		return 460;
	}
	else if (iParam0 == joaat("LOCUST"))
	{
		return 461;
	}
	else if (iParam0 == -1829436850)
	{
		return 462;
	}
	else if (iParam0 == -682108547)
	{
		return 463;
	}
	else if (iParam0 == 722226637)
	{
		return 464;
	}
	else if (iParam0 == 1854776567)
	{
		return 465;
	}
	else if (iParam0 == 1862507111)
	{
		return 466;
	}
	else if (iParam0 == -882629065)
	{
		return 467;
	}
	else if (iParam0 == -362150785)
	{
		return 468;
	}
	else if (iParam0 == 310284501)
	{
		return 469;
	}
	else if (iParam0 == 916547552)
	{
		return 470;
	}
	else if (iParam0 == -1804415708)
	{
		return 471;
	}
	else if (iParam0 == 1934384720)
	{
		return 472;
	}
	else if (iParam0 == -1349095620)
	{
		return 473;
	}
	else if (iParam0 == -208911803)
	{
		return 474;
	}
	else if (iParam0 == -324618589)
	{
		return 475;
	}
	else if (iParam0 == -664141241)
	{
		return 476;
	}
	else if (iParam0 == 1323778901)
	{
		return 477;
	}
	else if (iParam0 == -1620126302)
	{
		return 478;
	}
	else if (iParam0 == -447711397)
	{
		return 479;
	}
	else if (iParam0 == joaat("FIRETRUK"))
	{
		return 480;
	}
	else if (iParam0 == joaat("BURRITO2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("BOXVILLE"))
	{
		return 482;
	}
	else if (iParam0 == joaat("STOCKADE"))
	{
		return 483;
	}
	else if (iParam0 == joaat("LGUARD"))
	{
		return 484;
	}
	else if (iParam0 == joaat("BLAZER2"))
	{
		return 485;
	}
	else if (iParam0 == 394110044)
	{
		return 488;
	}
	else if (iParam0 == 1284356689)
	{
		return 486;
	}
	else if (iParam0 == -1254331310)
	{
		return 487;
	}
	else if (iParam0 == 301304410)
	{
		return 489;
	}
	else if (iParam0 == 1456336509)
	{
		return 490;
	}
	else if (iParam0 == 340154634)
	{
		return 491;
	}
	else if (iParam0 == -1132721664)
	{
		return 492;
	}
	else if (iParam0 == -1960756985)
	{
		return 493;
	}
	else if (iParam0 == 960812448)
	{
		return 494;
	}
	else if (iParam0 == 83136452)
	{
		return 495;
	}
	else if (iParam0 == 740289177)
	{
		return 496;
	}
	else if (iParam0 == 2031587082)
	{
		return 497;
	}
	else if (iParam0 == 1693751655)
	{
		return 498;
	}
	else if (iParam0 == -834353991)
	{
		return 499;
	}
	else if (iParam0 == 872704284)
	{
		return 500;
	}
	else if (iParam0 == 987469656)
	{
		return 501;
	}
	else if (iParam0 == -1756021720)
	{
		return 502;
	}
	else if (iParam0 == 1118611807)
	{
		return 503;
	}
	else if (iParam0 == 409049982)
	{
		return 504;
	}
	else if (iParam0 == joaat("OUTLAW"))
	{
		return 505;
	}
	else if (iParam0 == joaat("CLUB"))
	{
		return 506;
	}
	else if (iParam0 == 2134119907)
	{
		return 507;
	}
	else if (iParam0 == 67753863)
	{
		return 508;
	}
	else if (iParam0 == -631322662)
	{
		return 509;
	}
	else if (iParam0 == -838099166)
	{
		return 510;
	}
	else if (iParam0 == -1810806490)
	{
		return 511;
	}
	else if (iParam0 == -1358197432)
	{
		return 512;
	}
	else if (iParam0 == 1492612435)
	{
		return 513;
	}
	else if (iParam0 == 1181339704)
	{
		return 514;
	}
	else if (iParam0 == -1728685474)
	{
		return 515;
	}
	else if (iParam0 == joaat("PEYOTE"))
	{
		return 517;
	}
	else if (iParam0 == joaat("MANANA"))
	{
		return 516;
	}
	else if (iParam0 == func_393())
	{
		return 518;
	}
	else if (iParam0 == -1149725334)
	{
		return 519;
	}
	else if (iParam0 == -1045911276)
	{
		return 520;
	}
	else if (iParam0 == 1429622905)
	{
		return 521;
	}
	else if (iParam0 == 1644055914)
	{
		return 522;
	}
	else if (iParam0 == -365873403)
	{
		return 523;
	}
	else if (iParam0 == 295054921)
	{
		return 524;
	}
	else if (iParam0 == -980573366)
	{
		return 525;
	}
	else if (iParam0 == 1086534307)
	{
		return 526;
	}
	else if (iParam0 == -276744698)
	{
		return 527;
	}
	else if (iParam0 == -102335483)
	{
		return 528;
	}
	else if (iParam0 == 1455990255)
	{
		return 529;
	}
	else if (iParam0 == 298565713)
	{
		return 530;
	}
	else if (iParam0 == 2014313426)
	{
		return 531;
	}
	else if (iParam0 == -210308634)
	{
		return 532;
	}
	else if (iParam0 == 1861786828)
	{
		return 533;
	}
	else if (iParam0 == -857356038)
	{
		return 534;
	}
	else if (iParam0 == -1492917079)
	{
		return 535;
	}
	return -1;
}

int func_683(int iParam0)
{
	if (func_362(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("BLAZER5") || iParam0 == joaat("BOXVILLE5")) || iParam0 == joaat("DUNE5")) || iParam0 == joaat("PHANTOM2")) || iParam0 == joaat("RUINER2")) || iParam0 == joaat("TECHNICAL2")) || iParam0 == joaat("VOLTIC2")) || iParam0 == joaat("WASTELANDER")) || iParam0 == joaat("TRAILERSMALL2")) || iParam0 == joaat("TECHNICAL3")) || iParam0 == joaat("INSURGENT3")) || iParam0 == joaat("KHANJALI")) || iParam0 == joaat("CHERNOBOG")) || iParam0 == joaat("RIOT2")) || iParam0 == joaat("THRUSTER")) || iParam0 == joaat("STROMBERG")) || iParam0 == joaat("DELUXO")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("MULE4")) || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("OPPRESSOR2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("AIRBUS"):
		case joaat("AIRTUG"):
		case joaat("AMBULANCE"):
		case joaat("ANNIHILATOR"):
		case joaat("ARMYTANKER"):
		case joaat("ARMYTRAILER"):
		case joaat("ASEA2"):
		case joaat("BALETRAILER"):
		case joaat("BARRACKS"):
		case joaat("BARRACKS2"):
		case joaat("BARRACKS3"):
		case joaat("BENSON"):
		case joaat("BESRA"):
		case joaat("BIFF"):
		case joaat("BLIMP"):
		case joaat("BLIMP2"):
		case joaat("BOATTRAILER"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("BOXVILLE4"):
		case joaat("BULLDOZER"):
		case joaat("BURRITO"):
		case joaat("BURRITO3"):
		case joaat("BURRITO4"):
		case joaat("BURRITO5"):
		case joaat("BUS"):
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
		case joaat("CADDY"):
		case joaat("CADDY2"):
		case joaat("CAMPER"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("CARGOBOB3"):
		case joaat("CARGOPLANE"):
		case joaat("COACH"):
		case joaat("CRUSADER"):
		case joaat("CUBAN800"):
		case joaat("CUTTER"):
		case joaat("DILETTANTE2"):
		case joaat("DINGHY"):
		case joaat("DINGHY2"):
		case joaat("DINGHY3"):
		case joaat("DOCKTRAILER"):
		case joaat("DOCKTUG"):
		case joaat("DODO"):
		case joaat("DUMP"):
		case joaat("DUNE2"):
		case joaat("DUSTER"):
		case joaat("EMPEROR3"):
		case joaat("FBI"):
		case joaat("FBI2"):
		case joaat("FIRETRUK"):
		case joaat("FIXTER"):
		case joaat("FLATBED"):
		case joaat("FORKLIFT"):
		case joaat("FREIGHT"):
		case joaat("FREIGHTCAR"):
		case joaat("FREIGHTCONT1"):
		case joaat("FREIGHTCONT2"):
		case joaat("FREIGHTGRAIN"):
		case joaat("FROGGER"):
		case joaat("FROGGER2"):
		case joaat("GBURRITO"):
		case joaat("GRAINTRAILER"):
		case joaat("HANDLER"):
		case joaat("HAULER"):
		case joaat("HYDRA"):
		case joaat("INSURGENT"):
		case joaat("JET"):
		case joaat("JETMAX"):
		case joaat("JOURNEY"):
		case joaat("LAZER"):
		case joaat("LIMO2"):
		case joaat("LUXOR"):
		case joaat("LUXOR2"):
		case joaat("MAMMATUS"):
		case joaat("MARSHALL"):
		case joaat("MARQUIS"):
		case joaat("MAVERICK"):
		case joaat("MESA2"):
		case joaat("METROTRAIN"):
		case joaat("MONSTER"):
		case joaat("MILJET"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("MOWER"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("MULE3"):
		case joaat("PACKER"):
		case joaat("PBUS"):
		case joaat("PHANTOM"):
		case joaat("POLICE"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("PONY"):
		case joaat("PONY2"):
		case joaat("POUNDER"):
		case joaat("PRANGER"):
		case joaat("PREDATOR"):
		case joaat("PROPTRAILER"):
		case joaat("RAKETRAILER"):
		case joaat("RANCHERXL2"):
		case joaat("RENTALBUS"):
		case joaat("RHINO"):
		case joaat("RIOT"):
		case joaat("RIPLEY"):
		case joaat("RUBBLE"):
		case joaat("RUMPO2"):
		case joaat("SADLER2"):
		case joaat("SAVAGE"):
		case joaat("SCRAP"):
		case joaat("SEASHARK"):
		case joaat("SEASHARK2"):
		case joaat("SHAMAL"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
		case joaat("SKYLIFT"):
		case joaat("SPEEDER"):
		case joaat("SPEEDO2"):
		case joaat("SQUALO"):
		case joaat("STOCKADE"):
		case joaat("STOCKADE3"):
		case joaat("STRETCH"):
		case joaat("STUNT"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("SUNTRAP"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("TACO"):
		case joaat("TANKER"):
		case joaat("TANKER2"):
		case joaat("TANKERCAR"):
		case joaat("TAXI"):
		case joaat("TECHNICAL"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("TIPTRUCK"):
		case joaat("TIPTRUCK2"):
		case joaat("TITAN"):
		case joaat("TORO"):
		case joaat("TOURBUS"):
		case joaat("TR2"):
		case joaat("TR3"):
		case joaat("TR4"):
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
		case joaat("TRACTOR3"):
		case joaat("TRAILERLOGS"):
		case joaat("TRAILERS"):
		case joaat("TRAILERS2"):
		case joaat("TRAILERS3"):
		case joaat("TRAILERSMALL"):
		case joaat("TRASH"):
		case joaat("TRASH2"):
		case joaat("TRFLAT"):
		case joaat("TROPIC"):
		case joaat("TVTRAILER"):
		case joaat("UTILLITRUCK"):
		case joaat("UTILLITRUCK2"):
		case joaat("UTILLITRUCK3"):
		case joaat("VALKYRIE"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("VESTRA"):
		case joaat("CARGOBOB4"):
		case joaat("DINGHY4"):
		case joaat("SEASHARK3"):
		case joaat("SPEEDER2"):
		case joaat("TORO2"):
		case joaat("TROPIC2"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("VALKYRIE2"):
		case joaat("DUNE4"):
		case joaat("RUINER3"):
		case joaat("BRICKADE"):
		case joaat("HAULER2"):
		case joaat("PHANTOM3"):
		case 2014313426:
		case 1861786828:
		case -276744698:
			return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DODO");
		case 1:
			return joaat("TURISMOR");
		case 2:
			return joaat("TOROS");
		case 3:
			return joaat("MONROE");
		case 4:
			return joaat("VELUM");
		case 5:
			return joaat("FUROREGT");
		case 6:
			return joaat("INFERNUS");
		case 7:
			return joaat("INFERNUS2");
		case 8:
			return joaat("RUSTON");
		case 9:
			return joaat("MARQUIS");
		case 10:
			return joaat("DEFILER");
		case 11:
			return joaat("PIGALLE");
		case 12:
			return joaat("MASSACRO2");
		case 13:
			return joaat("TORNADO6");
		case 14:
			return joaat("TAMPA");
		case 15:
			return joaat("ISSI3");
		case 16:
			return joaat("JB700");
		case 17:
			return joaat("JESTER2");
		case 18:
			return joaat("KAMACHO");
		case 19:
			return joaat("FAGALOA");
		case 20:
			return joaat("IMPALER");
		case 21:
			return joaat("DOMINATOR2");
		case 22:
			return joaat("MAMMATUS");
		case 23:
			return joaat("JETMAX");
		case 24:
			return joaat("STALION2");
		case 25:
			return joaat("MASSACRO");
		case 26:
			return joaat("ESSKEY");
		case 27:
			return joaat("COGNOSCENTI");
		case 28:
			return joaat("XLS");
		case 29:
			return joaat("SUPERD");
		case 30:
			return joaat("STUNT");
		case 31:
			return joaat("CUBAN800");
		case 32:
			return joaat("VACCA");
		case 33:
			return joaat("JESTER");
		case 34:
			return joaat("GAUNTLET2");
		case 35:
			return joaat("EXEMPLAR");
		case 36:
			return joaat("SLAMVAN2");
		case 37:
			return joaat("GLENDALE");
		case 38:
			return joaat("SQUALO");
		case 39:
			return joaat("CARBONIZZARE");
		case 40:
			return joaat("VIRGO");
		case 41:
			return joaat("COGCABRIO");
		case 42:
			return joaat("DINGHY3");
		case 43:
			return joaat("BLADE");
		case 44:
			return joaat("BULLET");
		case 45:
			return joaat("BRIOSO");
		case 46:
			return joaat("VOLTIC");
		case 47:
			return joaat("VOLTIC2");
		case 48:
			return joaat("ALPHA");
		case 49:
			return joaat("FELTZER2");
		case 50:
			return joaat("CHEBUREK");
		case 51:
			return joaat("RAPIDGT2");
		case 52:
			return joaat("RHAPSODY");
		case 53:
			return joaat("COQUETTE");
		case 54:
			return joaat("COQUETTE2");
		case 55:
			return joaat("RAPIDGT");
		case 56:
			return joaat("NINEF2");
		case 57:
			return joaat("KURUMA");
		case 58:
			return joaat("NINEF");
		case 59:
			return joaat("SCHAFTER3");
		case 60:
			return joaat("SURANO");
		case 61:
			return joaat("BANSHEE");
		case 62:
			return joaat("KHAMELION");
		case 63:
			return joaat("NIGHTBLADE");
		case 64:
			return joaat("CHINO");
		case 65:
			return joaat("DIABLOUS");
		case 66:
			return joaat("VIRGO3");
		case 67:
			return joaat("FCR");
		case 68:
			return joaat("COMET2");
		case 69:
			return joaat("ZOMBIEA");
		case 70:
			return joaat("FELON2");
		case 71:
			return joaat("BF400");
		case 72:
			return joaat("FELON");
		case 73:
			return joaat("BALLER2");
		case 74:
			return joaat("HOTKNIFE");
		case 75:
			return joaat("MESA3");
		case 76:
			return joaat("PANTO");
		case 77:
			return joaat("HAKUCHOU");
		case 78:
			return joaat("BLAZER4");
		case 79:
			return joaat("F620");
		case 80:
			return joaat("ORACLE2");
		case 81:
			return joaat("BIFTA");
		case 82:
			return joaat("STALION");
		case 83:
			return joaat("BLAZER3");
		case 84:
			return joaat("MANCHEZ");
		case 85:
			return joaat("SCHAFTER2");
		case 86:
			return joaat("ZION2");
		case 87:
			return joaat("DUKES");
		case 88:
			return joaat("JACKAL");
		case 89:
			return joaat("SERRANO");
		case 90:
			return joaat("PATRIOT");
		case 91:
			return joaat("FQ2");
		case 92:
			return joaat("SLAMVAN");
		case 93:
			return joaat("ENDURO");
		case 94:
			return joaat("FAGGIO");
		case 95:
			return joaat("BLISTA2");
		case 96:
			return joaat("CARBONRS");
		case 97:
			return joaat("KALAHARI");
		case 98:
			return joaat("RATLOADER2");
		case 99:
			return joaat("FACTION");
		case 100:
			return joaat("BUFFALO");
		case 101:
			return joaat("DOMINATOR");
		case 102:
			return joaat("MOONBEAM");
		case 103:
			return joaat("GAUNTLET");
		case 104:
			return joaat("TORNADO");
		case 105:
			return joaat("BUCCANEER");
		case 106:
			return joaat("PRAIRIE");
		case 107:
			return joaat("PENUMBRA");
		case 108:
			return joaat("FUGITIVE");
		case 109:
			return joaat("ISSI2");
		case 110:
			return joaat("SEASHARK");
		case 111:
			return joaat("INTRUDER");
		case 112:
			return joaat("BAGGER");
		case 113:
			return joaat("BFINJECTION");
		case 114:
			return joaat("HEXER");
		case 115:
			return joaat("WASHINGTON");
		case 116:
			return joaat("BATI");
		case 117:
			return joaat("BATI2");
		case 118:
			return joaat("SABREGT");
		case 119:
			return joaat("SULTAN");
		case 120:
			return joaat("NEMESIS");
		case 121:
			return joaat("DOUBLE");
		case 122:
			return joaat("TRIBIKE");
		case 123:
			return joaat("TRIBIKE2");
		case 124:
			return joaat("TRIBIKE3");
		case 125:
			return joaat("RUFFIAN");
		case 126:
			return joaat("RUINER");
		case 127:
			return joaat("PICADOR");
		case 128:
			return joaat("AKUMA");
		case 129:
			return joaat("PCJ");
		case 130:
			return joaat("PRIMO");
		case 131:
			return joaat("FUTO");
		case 132:
			return joaat("BLAZER");
		case 133:
			return joaat("SANCHEZ2");
		case 134:
			return joaat("SANCHEZ");
		case 135:
			return joaat("VOODOO2");
		case 136:
			return joaat("FAGGIO2");
		case 137:
			return joaat("SCORCHER");
		case 138:
			return joaat("CRUISER");
		case 139:
			return joaat("BMX");
		case 140:
			return joaat("MINIVAN");
		default:
			break;
	}
	return 0;
}

int func_685()
{
	int iVar0[141];
	int iVar142;
	int iVar143;
	int iVar144;

	iVar142 = 0;
	iVar143 = 0;
	while (iVar143 < 141)
	{
		iVar0[iVar143] = iVar143;
		iVar142 = (iVar142 + func_686(iVar0[iVar143]));
		iVar143++;
	}
	iVar144 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar142);
	iVar143 = 0;
	while (iVar143 < 141)
	{
		if (iVar144 <= func_686(iVar0[iVar143]))
		{
			return iVar0[iVar143];
		}
		else
		{
			iVar144 = (iVar144 - func_686(iVar0[iVar143]));
		}
		iVar143++;
	}
	return -1;
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_687(joaat("DODO"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 1:
		case 2:
		case 3:
			return Global_262145.f_26145;
		case 4:
			if (func_687(joaat("VELUM"), 0))
			{
				return 0;
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			return Global_262145.f_26145;
		case 9:
			if (func_687(joaat("MARQUIS"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return Global_262145.f_26145;
		case 22:
			if (func_687(joaat("MAMMATUS"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 23:
			if (func_687(joaat("JETMAX"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return Global_262145.f_26145;
		case 30:
			if (func_687(joaat("STUNT"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 31:
			if (func_687(joaat("CUBAN800"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			return Global_262145.f_26145;
		case 37:
			return Global_262145.f_26146;
		case 38:
			if (func_687(joaat("SQUALO"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26146;
			}
			break;
		case 39:
		case 40:
		case 41:
			return Global_262145.f_26146;
		case 42:
			if (func_687(joaat("SQUALO"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26146;
			}
			break;
		case 43:
		case 44:
		case 45:
			return Global_262145.f_26146;
		case 46:
			return Global_262145.f_26147;
		case 47:
			if (func_537(joaat("VOLTIC2"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
			return Global_262145.f_26146;
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
			return Global_262145.f_26147;
		case 110:
			if (func_687(joaat("SEASHARK"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return Global_262145.f_26147;
		case 122:
			if (func_537(joaat("TRIBIKE"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 123:
			if (func_537(joaat("TRIBIKE2"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 124:
			if (func_537(joaat("TRIBIKE3"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return Global_262145.f_26147;
		case 137:
			if (func_537(joaat("SCORCHER"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 138:
			if (func_537(joaat("CRUISER"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 139:
			if (func_537(joaat("BMX"), -1))
			{
				return Global_262145.f_26147;
			}
			else
			{
				return 0;
			}
			break;
		case 140:
			return Global_262145.f_26147;
	}
	return 0;
}

int func_687(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_682(iParam0);
	iVar1 = func_652(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return func_649(iVar1);
	}
	return 0;
}

int func_688()
{
	int iVar0[7];
	int iVar8;
	int iVar9;
	int iVar10;

	iVar8 = 0;
	iVar9 = 0;
	while (iVar9 < 7)
	{
		iVar0[iVar9] = iVar9;
		iVar8 = (iVar8 + func_689(iVar0[iVar9]));
		iVar9++;
	}
	iVar10 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar8);
	iVar9 = 0;
	while (iVar9 < 7)
	{
		if (iVar10 <= func_689(iVar0[iVar9]))
		{
			return iVar0[iVar9];
		}
		else
		{
			iVar10 = (iVar10 - func_689(iVar0[iVar9]));
		}
		iVar9++;
	}
	return -1;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26138;
		case 1:
			return Global_262145.f_26139;
		case 2:
			return Global_262145.f_26140;
		case 3:
			return Global_262145.f_26141;
		case 4:
			return Global_262145.f_26142;
		case 5:
			return Global_262145.f_26143;
		case 6:
			return Global_262145.f_26144;
		default:
			break;
	}
	return 0;
}

int func_690(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		iVar0 = func_719(iParam3);
	}
	else if (iParam3 == -1)
	{
		iVar1 = func_717();
		iVar0 = func_716(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam4)
		{
			StringCopy(sParam1, func_715(), 64);
		}
		if (func_691(iVar0, 3, uParam2, 4, -1))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_691(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;

	if (iParam0 <= 0)
	{
	}
	else if (!func_714(iParam1))
	{
	}
	else
	{
		iVar0 = func_162();
		iVar1 = (Global_262145.f_26468 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_712();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_711(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_162() - Global_1696910);
			func_710(iVar4, 1);
			func_708();
			func_706();
			Global_1696910 = (Global_1696910 + iVar4);
			if (iParam1 == 0)
			{
				func_700(iVar4);
				Global_2462183 = 1;
			}
			else if (iParam1 == 3)
			{
				func_695(iVar4);
				if (iVar4 >= Global_262145.f_26476)
				{
					Global_2462182 = 1;
				}
				else if (iVar4 >= Global_262145.f_26475)
				{
					Global_2462183 = 1;
				}
			}
			Var5 = func_694(iParam1);
			Var5.f_1 = func_693(iParam1, iParam3, iParam4);
			if (func_692(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1696910;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
	}
	return 0;
}

int func_693(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			case 1:
				iVar0 = 21;
				break;
			case 4:
				iVar0 = 22;
				break;
			case 5:
				iVar0 = 23;
				break;
			case 6:
				iVar0 = 24;
				break;
			case 7:
				iVar0 = 25;
				break;
			case 9:
				iVar0 = 26;
				break;
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
		}
	}
	return iVar0;
}

int func_694(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		case 1:
			iVar0 = -1612659516;
			break;
		case 2:
			iVar0 = -1304782539;
			break;
		case 3:
			iVar0 = 1196301501;
			break;
		case 4:
			iVar0 = -1964607937;
			break;
		case 5:
			iVar0 = -2125268726;
			break;
		case 6:
			iVar0 = 1138851024;
			break;
		case 11:
			iVar0 = 1138851024;
			break;
		case 7:
			iVar0 = 1848798713;
			break;
		case 8:
			iVar0 = 1196301501;
			break;
		case 9:
			iVar0 = -1297103179;
			break;
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_699();
	iVar1 = UNK_0x5A002C4821A13338();
	iVar2 = func_698();
	if (iVar0 == 0)
	{
		func_697();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_696();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26472)
	{
		func_140(-1274895349, Global_262145.f_26472);
		func_696();
		Global_2462183 = 1;
	}
	else
	{
		func_140(-1274895349, (iVar2 + iParam0));
	}
}

void func_696()
{
	func_697();
}

void func_697()
{
	func_140(2026157635, UNK_0x5A002C4821A13338());
}

int func_698()
{
	return func_24(-1274895349);
}

int func_699()
{
	return func_24(2026157635);
}

void func_700(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_705();
	iVar1 = UNK_0x5A002C4821A13338();
	iVar2 = func_704();
	if (iVar0 == 0)
	{
		func_703();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26469)
	{
		func_702();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_701()
	{
		func_140(-1127742296, func_701());
		func_702();
	}
	else
	{
		func_140(-1127742296, (iVar2 + iParam0));
	}
}

int func_701()
{
	if (func_168(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26264;
	}
	return Global_262145.f_26263;
}

void func_702()
{
	func_703();
}

void func_703()
{
	func_140(67083818, UNK_0x5A002C4821A13338());
}

int func_704()
{
	return func_24(-1127742296);
}

int func_705()
{
	return func_24(67083818);
}

void func_706()
{
	if (MISC::IS_BIT_SET(Global_1696949, 6))
	{
		MISC::SET_BIT(&Global_1696949, 9);
		func_707(&Global_1696952, 0, 0);
	}
}

void func_707(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_708()
{
	if (func_709())
	{
		MISC::SET_BIT(&Global_1696949, 1);
	}
}

bool func_709()
{
	return (MISC::IS_BIT_SET(Global_1696949, 6) || MISC::IS_BIT_SET(Global_1696949, 5));
}

void func_710(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1696949, 6);
	Global_1696950 = iParam0;
	Global_1696951 = iParam1;
}

bool func_711(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_692(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_113())
	{
		if (*uParam0 == 0)
		{
			if (func_114() != -1)
			{
				return false;
			}
			iVar3 = 657241867;
			iVar4 = func_694(iParam1);
			iVar5 = -22148635;
			if (func_714(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_149(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_149(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_144())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_115(func_114()));
					if (func_714(iParam1))
					{
						MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_109(func_114());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_714(iParam1))
		{
			MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

int func_712()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_701() - func_704());
	iVar1 = (Global_262145.f_26468 - func_162());
	iVar2 = func_713();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_713()
{
	int iVar0;
	int iVar1;

	iVar0 = func_701();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_714(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_715()
{
	return "CAS_LW_MCI1";
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26490;
		case 1:
			return Global_262145.f_26491;
		case 2:
			return Global_262145.f_26488;
		case 3:
			return Global_262145.f_26489;
		case 4:
			return Global_262145.f_26486;
		case 5:
			return Global_262145.f_26487;
		default:
			break;
	}
	return 0;
}

int func_717()
{
	int iVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;

	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		iVar0[iVar8] = iVar8;
		iVar7 = (iVar7 + func_718(iVar0[iVar8]));
		iVar8++;
	}
	iVar9 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar7);
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar9 <= func_718(iVar0[iVar8]))
		{
			return iVar0[iVar8];
		}
		else
		{
			iVar9 = (iVar9 - func_718(iVar0[iVar8]));
		}
		iVar8++;
	}
	return -1;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26147;
		case 1:
			return Global_262145.f_26147;
		case 2:
			return Global_262145.f_26146;
		case 3:
			return Global_262145.f_26146;
		case 4:
			return Global_262145.f_26145;
		case 5:
			return Global_262145.f_26145;
		default:
			break;
	}
	return 0;
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 10000;
		case 14:
			return 15000;
		case 15:
			return 20000;
		case 16:
			return 25000;
		default:
			break;
	}
	return 0;
}

int func_720(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_732(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_730();
		iVar0 = func_729(iVar1);
	}
	if (iVar0 > 0)
	{
		if (func_113())
		{
			func_725(1261538664, iVar0, &uVar2, 0, 0, 0);
			if (bParam3)
			{
				StringCopy(sParam1, func_724(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
		else
		{
			func_721(iVar0, 0);
			UNK_0xF4F719FA8B441AAA(iVar0, 707098906);
			if (bParam3)
			{
				StringCopy(sParam1, func_724(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

void func_721(int iParam0, int iParam1)
{
	func_723(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_722(iParam0, 0);
	}
}

void func_722(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_723(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_4 = iVar1;
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_3 = (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_722(iVar1, 0);
	}
}

char* func_724()
{
	return "CAS_LW_MC1";
}

void func_725(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_113())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_726(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_726(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_726(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_726(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_726(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_152(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_728(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_727(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_109(iParam0);
	}
}

void func_728(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26497;
		case 1:
			return Global_262145.f_26498;
		case 2:
			return Global_262145.f_26499;
		case 3:
			return Global_262145.f_26494;
		case 4:
			return Global_262145.f_26495;
		case 5:
			return Global_262145.f_26496;
		case 6:
			return Global_262145.f_26492;
		case 7:
			return Global_262145.f_26493;
		default:
			break;
	}
	return 0;
}

int func_730()
{
	int iVar0[8];
	int iVar9;
	int iVar10;
	int iVar11;

	iVar9 = 0;
	iVar10 = 0;
	while (iVar10 < 8)
	{
		iVar0[iVar10] = iVar10;
		iVar9 = (iVar9 + func_731(iVar0[iVar10]));
		iVar10++;
	}
	iVar11 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar9);
	iVar10 = 0;
	while (iVar10 < 8)
	{
		if (iVar11 <= func_731(iVar0[iVar10]))
		{
			return iVar0[iVar10];
		}
		else
		{
			iVar11 = (iVar11 - func_731(iVar0[iVar10]));
		}
		iVar10++;
	}
	return -1;
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26147;
		case 1:
			return Global_262145.f_26147;
		case 2:
			return Global_262145.f_26147;
		case 3:
			return Global_262145.f_26146;
		case 4:
			return Global_262145.f_26146;
		case 5:
			return Global_262145.f_26146;
		case 6:
			return Global_262145.f_26145;
		case 7:
			return Global_262145.f_26145;
		default:
			break;
	}
	return 0;
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 20000;
		case 10:
			return 30000;
		case 11:
			return 40000;
		case 12:
			return 50000;
		default:
			break;
	}
	return 0;
}

int func_733(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_740(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_738();
		iVar0 = func_737(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam3)
		{
			StringCopy(sParam1, func_736(), 64);
		}
		*uParam0 = iVar0;
		func_735();
		func_192(0, PLAYER::PLAYER_PED_ID(), func_734(iParam2), -1827353931, 1223799452, iVar0, 1, -1, 0, 0, 0);
		return 1;
	}
	return 0;
}

char* func_734(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "LUCKY WHEEL RP2500";
		case 5:
			return "LUCKY WHEEL RP5000";
		case 6:
			return "LUCKY WHEEL RP7500";
		case 7:
			return "LUCKY WHEEL RP10K";
		case 8:
			return "LUCKY WHEEL RP15K";
		default:
			break;
	}
	return "UNKNOWN";
}

void func_735()
{
	Global_2463792 = 1;
}

char* func_736()
{
	return "CAS_LW_MRP1";
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26484;
		case 1:
			return Global_262145.f_26485;
		case 2:
			return Global_262145.f_26482;
		case 3:
			return Global_262145.f_26483;
		case 4:
			return Global_262145.f_26480;
		case 5:
			return Global_262145.f_26481;
		default:
			break;
	}
	return 0;
}

int func_738()
{
	int iVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;

	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		iVar0[iVar8] = iVar8;
		iVar7 = (iVar7 + func_739(iVar0[iVar8]));
		iVar8++;
	}
	iVar9 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar7);
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar9 <= func_739(iVar0[iVar8]))
		{
			return iVar0[iVar8];
		}
		else
		{
			iVar9 = (iVar9 - func_739(iVar0[iVar8]));
		}
		iVar8++;
	}
	return -1;
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26147;
		case 1:
			return Global_262145.f_26147;
		case 2:
			return Global_262145.f_26146;
		case 3:
			return Global_262145.f_26146;
		case 4:
			return Global_262145.f_26145;
		case 5:
			return Global_262145.f_26145;
		default:
			break;
	}
	return 0;
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 2500;
		case 5:
			return 5000;
		case 6:
			return 7500;
		case 7:
			return 10000;
		case 8:
			return 15000;
		default:
			break;
	}
	return 0;
}

int func_741(char* sParam0, int* iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_746(bParam3);
		if (iVar0 != -1)
		{
			if (func_745())
			{
				func_187(func_743(MISC::GET_HASH_KEY(func_744(iVar0))), 1, -1, 1);
				StringCopy(sParam0, func_744(iVar0), 64);
				return 1;
			}
			else if (!func_742(iVar0))
			{
				func_187(func_743(MISC::GET_HASH_KEY(func_744(iVar0))), 1, -1, 1);
				StringCopy(sParam0, func_744(iVar0), 64);
				return 1;
			}
		}
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_746(bParam3);
		if (iVar1 != -1)
		{
			if (func_745())
			{
				MISC::CLEAR_BIT(iParam1, 19);
				StringCopy(sParam0, func_744(iVar1), 64);
				return 0;
			}
			else if (!func_742(iVar1))
			{
				func_187(func_743(MISC::GET_HASH_KEY(func_744(iVar1))), 1, -1, 1);
				StringCopy(sParam0, func_744(iVar1), 64);
				return 1;
			}
		}
	}
	return 0;
}

bool func_742(int iParam0)
{
	return func_498(func_743(MISC::GET_HASH_KEY(func_744(iParam0))), -1, -1);
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLO_H2F_O_S_16"):
			return 26970;
		case joaat("CLO_ARF_O_12"):
			return 26971;
		case joaat("CLO_IEF_O_2"):
			return 26972;
		case joaat("CLO_H2F_S_6_0"):
			return 26973;
		case joaat("CLO_BIF_O_11"):
			return 26974;
		case joaat("CLO_STF_O_5"):
			return 26975;
		case joaat("CLO_SMF_O_1"):
			return 26976;
		case joaat("CLO_STF_O_E_1"):
			return 26977;
		case joaat("CLO_STF_O_8"):
			return 26978;
		case joaat("CLO_HSTF_O_20"):
			return 26979;
		case joaat("CLO_HSTM_O_20"):
			return 26979;
		case joaat("CLO_H2F_S_4_0"):
			return 26980;
		case joaat("CLO_H2F_O_G_21"):
			return 26981;
		case joaat("CLO_GRF_O_1"):
			return 26982;
		case joaat("CLO_LXF_U_3_8"):
			return 26983;
		case joaat("CLO_H2F_S_9_0"):
			return 26984;
		case joaat("CLO_H2F_S_9_5"):
			return 26985;
		case joaat("CLO_HSTF_S_1_1"):
			return 26986;
		case joaat("CLO_IEF_O_11"):
			return 26987;
		case joaat("CLO_BIF_U_23_1"):
			return 26988;
		case joaat("CLO_BHF_U_11_17"):
			return 26989;
		case joaat("CLO_EXF_OB_14"):
			return 26990;
		case joaat("CLO_H2F_U_3_25"):
			return 26991;
		case joaat("CLO_BHF_U_6_1"):
			return 26992;
		case joaat("CLO_L2F_U_7_15"):
			return 26993;
		case joaat("CLO_BHF_U_14_1"):
			return 26994;
		case joaat("CLO_L2F_U_7_12"):
			return 26995;
		case joaat("CLO_L2F_U_7_11"):
			return 26996;
		case joaat("CLO_STF_U_7_4"):
			return 26997;
		case joaat("CLO_IEF_U_3_7"):
			return 26998;
		case joaat("CLO_L2F_U_7_1"):
			return 26999;
		case joaat("CLO_EXF_OA_0"):
			return 27000;
		case joaat("CLO_HSTM_O_G_3"):
			return 27001;
		case joaat("CLO_HSTF_O_G_3"):
			return 27001;
		case joaat("CLO_BHF_U_5_18"):
			return 27002;
		case joaat("CLO_BHF_U_5_20"):
			return 27003;
		case joaat("CLO_BHF_U_2_14"):
			return 27004;
		case joaat("CLO_STF_U_5_9"):
			return 27005;
		case joaat("CLO_BHF_U_5_3"):
			return 27006;
		case joaat("CLO_BHF_U_13_0"):
			return 27007;
		case joaat("CLO_STF_U_5_1"):
			return 27008;
		case joaat("CLO_BHF_U_4_2"):
			return 27009;
		case joaat("CLO_HSTF_O_J_2"):
			return 27010;
		case joaat("CLO_HSTM_O_J_2"):
			return 27010;
		case joaat("CLO_STF_U_5_6"):
			return 27011;
		case joaat("CLO_GRF_U_21_12"):
			return 27012;
		case joaat("CLO_BHF_U_4_5"):
			return 27013;
		case joaat("CLO_GRF_U_21_20"):
			return 27014;
		case joaat("CLO_BHF_U_7_1"):
			return 27015;
		case joaat("CLO_SMF_U_2_15"):
			return 27016;
		case joaat("CLO_IEF_U_14_4"):
			return 27017;
		case joaat("CLO_IEF_U_14_21"):
			return 27018;
		case joaat("CLO_IEF_U_14_9"):
			return 27019;
		case joaat("CLO_BHF_U_7_14"):
			return 27020;
		case joaat("CLO_BIF_U_31_1"):
			return 27021;
		case joaat("CLO_SMF_U_2_7"):
			return 27022;
		case joaat("CLO_BHF_U_7_7"):
			return 27023;
		case joaat("CLO_SMF_U_2_23"):
			return 27024;
		case joaat("CLO_STF_U_5_12"):
			return 27025;
		case joaat("CLO_SMF_U_2_19"):
			return 27026;
		case joaat("CLO_STF_U_6_18"):
			return 27027;
		case joaat("CLO_IEF_U_14_0"):
			return 27028;
		case joaat("CLO_EXF_EU_5_0"):
			return 27029;
		case joaat("CLO_IEF_U_14_7"):
			return 27030;
		case joaat("CLO_BHF_U_4_18"):
			return 27031;
		case joaat("CLO_BHF_U_0_17"):
			return 27032;
		case joaat("CLO_LXF_U_5_0"):
			return 27033;
		case joaat("CLO_IEF_U_4_8"):
			return 27034;
		case joaat("CLO_HSTF_O_L_0"):
			return 27035;
		case joaat("CLO_HSTM_O_L_0"):
			return 27035;
		case joaat("CLO_HSTF_S_0_0"):
			return 27036;
		case joaat("CLO_GRF_U_20_15"):
			return 27037;
		case joaat("CLO_BHF_U_0_2"):
			return 27038;
		case joaat("CLO_IEF_U_1_9"):
			return 27039;
		case joaat("CLO_LTSFU_0_0"):
			return 27040;
		case joaat("CLO_S2F_U_3_12"):
			return 27041;
		case joaat("CLO_IEF_U_4_5"):
			return 27042;
		case joaat("CLO_GRF_U_20_24"):
			return 27043;
		case joaat("CLO_SMF_U_3_8"):
			return 27044;
		case joaat("CLO_IEF_U_4_22"):
			return 27045;
		case joaat("CLO_GRF_U_19_16"):
			return 27046;
		case joaat("CLO_HSTF_U_0_3"):
			return 27047;
		case joaat("CLO_HSTF_U_16_5"):
			return 27048;
		case joaat("CLO_SMF_U_3_5"):
			return 27049;
		case joaat("CLO_SMF_U_3_6"):
			return 27050;
		case joaat("CLO_LXF_U_6_3"):
			return 27051;
		case joaat("CLO_S2F_D_7"):
			return 27052;
		case joaat("CLO_GRF_U_19_23"):
			return 27053;
		case joaat("CLO_GRF_U_0_13"):
			return 27054;
		case joaat("CLO_S2F_D_18"):
			return 27055;
		case joaat("CLO_EXF_EU_4_2"):
			return 27056;
		case joaat("CLO_HP_F_D_10"):
			return 27057;
		case joaat("CLO_LXF_U_6_18"):
			return 27058;
		case joaat("CLO_IEF_U_7_5"):
			return 27059;
		case joaat("CLO_BIF_DECL_67"):
			return 27060;
		case joaat("CLO_BHF_U_16_1"):
			return 27061;
		case joaat("CLO_S1F_U_3_1"):
			return 27062;
		case joaat("CLO_IEF_U_7_14"):
			return 27063;
		case joaat("CLO_GRF_U_15_10"):
			return 27064;
		case joaat("CLO_GRF_U_2_6"):
			return 27065;
		case joaat("CLO_IEF_U_7_12"):
			return 27066;
		case joaat("CLO_SMF_DECL_16"):
			return 27067;
		case joaat("CLO_S1F_DEC_23"):
			return 27068;
		case joaat("CLO_SMF_DECL_15"):
			return 27069;
		case joaat("CLO_BIF_DECL_2"):
			return 27070;
		case joaat("CLO_SMF_DECL_7"):
			return 27071;
		case joaat("CLO_HP_F_D_9"):
			return 27072;
		case joaat("CLO_EXF_EU_9_5"):
			return 27073;
		case joaat("CLO_S2F_D_23"):
			return 27074;
		case joaat("CLO_SMF_DECL_5"):
			return 27075;
		case joaat("CLO_BIF_DECL_63"):
			return 27076;
		case joaat("CLO_AWF_DECL_23"):
			return 27077;
		case joaat("CLO_BIF_DECL_49"):
			return 27078;
		case joaat("CLO_HALF_D_10"):
			return 27079;
		case joaat("CLO_GRF_DECL_27"):
			return 27080;
		case joaat("CLO_LXF_DEC_35"):
			return 27081;
		case joaat("CLO_HST_F_A_0"):
			return 27082;
		case joaat("CLO_HST_F_A_9"):
			return 27083;
		case joaat("CLO_BHF_DECL_19"):
			return 27084;
		case joaat("CLO_INDF_HT_6_2"):
			return 27085;
		case joaat("CLO_EXF_DECL_3"):
			return 27086;
		case joaat("CLO_X4F_B_7_0"):
			return 27087;
		case joaat("CLO_X2F_B_2_0"):
			return 27088;
		case joaat("CLO_VWF_U_13_0"):
			return 27120;
		case joaat("CLO_VWF_U_13_1"):
			return 27121;
		case joaat("CLO_VWF_U_13_2"):
			return 27122;
		case joaat("CLO_VWF_U_13_3"):
			return 27123;
		case joaat("CLO_VWF_U_13_4"):
			return 27124;
		case joaat("CLO_VWF_U_13_5"):
			return 27125;
		case joaat("CLO_VWF_U_13_6"):
			return 27126;
		case joaat("CLO_VWF_U_18_5"):
			return 27127;
		case joaat("CLO_VWF_PH_0_0"):
			return 27128;
			return 27129;
			return 27130;
			return 27131;
			return 27132;
			return 27133;
			return 27134;
			return 27135;
			return 27136;
			return 27137;
			return 27138;
			return 27139;
			return 27140;
			return 27141;
			return 27142;
			return 27143;
			return 27144;
			return 27145;
			switch (iParam0)
			{
				case joaat("CLO_H2M_O_S_16"):
					return 26970;
				case joaat("CLO_ARM_O_12"):
					return 26971;
				case joaat("CLO_IEM_O_1"):
					return 26972;
				case joaat("CLO_H2M_S_6_0"):
					return 26973;
				case joaat("CLO_BIM_O_11"):
					return 26974;
				case joaat("CLO_STM_O_5"):
					return 26975;
				case joaat("CLO_SMM_O_1"):
					return 26976;
				case joaat("CLO_STM_O_E_1"):
					return 26977;
				case joaat("CLO_STM_O_8"):
					return 26978;
				case joaat("CLO_H2M_S_4_0"):
					return 26980;
				case joaat("CLO_H2M_O_G_21"):
					return 26981;
				case joaat("CLO_GRM_O_1"):
					return 26982;
				case joaat("CLO_H2M_S_9_0"):
					return 26983;
				case joaat("CLO_LXM_U_0_7"):
					return 26984;
				case joaat("CLO_H2M_S_9_5"):
					return 26985;
				case joaat("CLO_HSTM_S_1_1"):
					return 26986;
				case joaat("CLO_IEM_O_11"):
					return 26987;
				case joaat("CLO_BIM_U_18_1"):
					return 26988;
				case joaat("CLO_BHM_U_11_17"):
					return 26989;
				case joaat("CLO_H2M_U_3_25"):
					return 26990;
				case joaat("CLO_BHM_U_6_1"):
					return 26991;
				case joaat("CLO_L2M_U_6_15"):
					return 26992;
				case joaat("CLO_BHM_U_14_1"):
					return 26993;
				case joaat("CLO_L2M_U_6_12"):
					return 26994;
				case joaat("CLO_L2M_U_6_11"):
					return 26995;
				case joaat("CLO_EXM_OB_14"):
					return 26997;
				case joaat("CLO_STM_U_7_4"):
					return 26998;
				case joaat("CLO_IEM_U_3_7"):
					return 26999;
				case joaat("CLO_L2M_U_6_1"):
					return 27000;
				case joaat("CLO_EXM_OA_0"):
					return 27014;
				case joaat("CLO_BHM_U_5_18"):
					return 27002;
				case joaat("CLO_BHM_U_5_20"):
					return 27003;
				case joaat("CLO_BHM_U_2_14"):
					return 27004;
				case joaat("CLO_STM_U_5_9"):
					return 27005;
				case joaat("CLO_BHM_U_5_3"):
					return 27006;
				case joaat("CLO_BHM_U_13_0"):
					return 27007;
				case joaat("CLO_STM_U_5_1"):
					return 27008;
				case joaat("CLO_BHM_U_4_2"):
					return 27009;
				case joaat("CLO_STM_U_5_6"):
					return 26996;
				case joaat("CLO_GRM_U_15_12"):
					return 27011;
				case joaat("CLO_BHM_U_4_5"):
					return 27012;
				case joaat("CLO_GRM_U_15_20"):
					return 27013;
				case joaat("CLO_BHM_U_7_1"):
					return 27015;
				case joaat("CLO_SMM_U_2_15"):
					return 27017;
				case joaat("CLO_IEM_U_17_4"):
					return 27018;
				case joaat("CLO_IEM_U_17_21"):
					return 27019;
				case joaat("CLO_IEM_U_17_9"):
					return 27020;
				case joaat("CLO_BHM_U_7_14"):
					return 27021;
				case joaat("CLO_BIM_U_26_1"):
					return 27022;
				case joaat("CLO_SMM_U_2_7"):
					return 27023;
				case joaat("CLO_BHM_U_7_7"):
					return 27024;
				case joaat("CLO_SMM_U_2_23"):
					return 27025;
				case joaat("CLO_STM_U_5_12"):
					return 27026;
				case joaat("CLO_SMM_U_2_19"):
					return 27027;
				case joaat("CLO_STM_U_6_18"):
					return 27028;
				case joaat("CLO_IEM_U_17_0"):
					return 27029;
				case joaat("CLO_EXM_EU_6_0"):
					return 27030;
				case joaat("CLO_IEM_U_17_7"):
					return 27031;
				case joaat("CLO_HSTM_S_0_0"):
					return 27032;
				case joaat("CLO_BHM_U_4_18"):
					return 27033;
				case joaat("CLO_BHM_U_0_17"):
					return 27034;
				case joaat("CLO_LXM_U_1_0"):
					return 27016;
				case joaat("CLO_IEM_U_4_8"):
					return 27036;
				case joaat("CLO_HSTM_U_15_5"):
					return 27037;
				case joaat("CLO_GRM_U_14_15"):
					return 27038;
				case joaat("CLO_BHM_U_0_2"):
					return 27039;
				case joaat("CLO_LTSMU_0_0"):
					return 27040;
				case joaat("CLO_IEM_U_18_9"):
					return 27041;
				case joaat("CLO_S2M_U_5_10"):
					return 27042;
				case joaat("CLO_IEM_U_4_5"):
					return 27043;
				case joaat("CLO_GRM_U_14_24"):
					return 27044;
				case joaat("CLO_SMM_U_3_8"):
					return 27045;
				case joaat("CLO_IEM_U_4_22"):
					return 27046;
				case joaat("CLO_GRM_U_13_16"):
					return 27047;
				case joaat("CLO_HSTM_U_0_3"):
					return 27048;
				case joaat("CLO_SMM_U_3_5"):
					return 27049;
				case joaat("CLO_SMM_U_3_6"):
					return 27050;
				case joaat("CLO_LXM_U_5_3"):
					return 27051;
				case joaat("CLO_S2M_D_16"):
					return 27052;
				case joaat("CLO_GRM_U_13_23"):
					return 27053;
				case joaat("CLO_GRM_U_0_13"):
					return 27054;
				case joaat("CLO_S2M_D_27"):
					return 27055;
				case joaat("CLO_EXM_EU_5_2"):
					return 27056;
				case joaat("CLO_HP_D_10"):
					return 27057;
				case joaat("CLO_LXM_U_5_17"):
					return 27058;
				case joaat("CLO_IEM_U_7_5"):
					return 27059;
				case joaat("CLO_IEM_U_7_23"):
					return 27060;
				case joaat("CLO_BIM_DECL_67"):
					return 27061;
				case joaat("CLO_BHM_U_16_1"):
					return 27062;
				case joaat("CLO_S1M_U_3_1"):
					return 27063;
				case joaat("CLO_SMM_U_7_10"):
					return 27064;
				case joaat("CLO_GRM_U_2_6"):
					return 27065;
				case joaat("CLO_IEM_U_7_19"):
					return 27066;
				case joaat("CLO_SMM_DECL_16"):
					return 27067;
				case joaat("CLO_S1M_DEC_25"):
					return 27068;
				case joaat("CLO_SMM_DECL_15"):
					return 27069;
				case joaat("CLO_BIM_DECL_2"):
					return 27070;
				case joaat("CLO_SMM_DECL_7"):
					return 27071;
				case joaat("CLO_HP_D_9"):
					return 27072;
				case joaat("CLO_EXM_EU_10_5"):
					return 27073;
				case joaat("CLO_S2M_D_4"):
					return 27074;
				case joaat("CLO_SMM_DECL_5"):
					return 27075;
				case joaat("CLO_BIM_DECL_63"):
					return 27076;
				case joaat("CLO_AWM_DECL_23"):
					return 27077;
				case joaat("CLO_BIM_DECL_49"):
					return 27078;
				case joaat("CLO_HALM_D_10"):
					return 27079;
				case joaat("CLO_GRM_DECL_27"):
					return 27080;
				case joaat("CLO_LXM_DEC_35"):
					return 27081;
				case joaat("CLO_HST_A_0"):
					return 27082;
				case joaat("CLO_EXM_DECL_3"):
					return 27083;
				case joaat("CLO_HST_A_9"):
					return 27084;
				case joaat("CLO_BHM_DECL_19"):
					return 27085;
				case joaat("CLO_INDM_HT_6_2"):
					return 27086;
				case joaat("CLO_X4M_B_7_0"):
					return 27087;
				case joaat("CLO_X2M_B_2_0"):
					return 27088;
				case joaat("CLO_VWM_U_15_0"):
					return 27120;
				case joaat("CLO_VWM_U_15_1"):
					return 27121;
				case joaat("CLO_VWM_U_15_2"):
					return 27122;
				case joaat("CLO_VWM_U_15_3"):
					return 27123;
				case joaat("CLO_VWM_U_15_4"):
					return 27124;
				case joaat("CLO_VWM_U_15_5"):
					return 27125;
				case joaat("CLO_VWM_U_15_6"):
					return 27126;
				case joaat("CLO_VWM_U_20_5"):
					return 27127;
				case joaat("CLO_VWM_PH_0_0"):
					return 27128;
				case joaat("CLO_VWM_PH_0_1"):
					return 27129;
				case joaat("CLO_VWM_PH_0_2"):
					return 27130;
				case joaat("CLO_VWM_PH_0_3"):
					return 27131;
				case joaat("CLO_VWM_PH_0_4"):
					return 27132;
				case joaat("CLO_VWM_PH_0_5"):
					return 27133;
				case joaat("CLO_VWM_PH_0_6"):
					return 27134;
				case joaat("CLO_VWM_PH_0_7"):
					return 27135;
				case joaat("CLO_VWM_PH_0_8"):
					return 27136;
				case joaat("CLO_VWM_PH_0_9"):
					return 27137;
				case joaat("CLO_VWM_PH_0_10"):
					return 27138;
				case 1692546288:
					return 27139;
				case 1135702663:
					return 27140;
				case 1885162466:
					return 27141;
				case 156401098:
					return 27142;
				case -456805199:
					return 27143;
				case 848285764:
					return 27144;
				case -1722442286:
					return 27145;
				default:
					break;
			}
			return 0;
		}

char* func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLO_H2F_O_S_16";
		case 1:
			return "CLO_ARF_O_12";
		case 2:
			return "CLO_IEF_O_2";
		case 3:
			return "CLO_H2F_S_6_0";
		case 4:
			return "CLO_BIF_O_11";
		case 5:
			return "CLO_STF_O_5";
		case 6:
			return "CLO_SMF_O_1";
		case 7:
			return "CLO_STF_O_E_1";
		case 8:
			return "CLO_STF_O_8";
		case 9:
			return "CLO_HSTF_O_20";
		case 10:
			return "CLO_H2F_S_4_0";
		case 11:
			return "CLO_H2F_O_G_21";
		case 12:
			return "CLO_GRF_O_1";
		case 13:
			return "CLO_LXF_U_3_8";
		case 14:
			return "CLO_H2F_S_9_0";
		case 15:
			return "CLO_H2F_S_9_5";
		case 16:
			return "CLO_HSTF_S_1_1";
		case 17:
			return "CLO_IEF_O_11";
		case 18:
			return "CLO_BIF_U_23_1";
		case 19:
			return "CLO_BHF_U_11_17";
		case 20:
			return "CLO_EXF_OB_14";
		case 21:
			return "CLO_H2F_U_3_25";
		case 22:
			return "CLO_BHF_U_6_1";
		case 23:
			return "CLO_L2F_U_7_15";
		case 24:
			return "CLO_BHF_U_14_1";
		case 25:
			return "CLO_L2F_U_7_12";
		case 26:
			return "CLO_L2F_U_7_11";
		case 27:
			return "CLO_STF_U_7_4";
		case 28:
			return "CLO_IEF_U_3_7";
		case 29:
			return "CLO_L2F_U_7_1";
		case 30:
			return "CLO_EXF_OA_0";
		case 31:
			return "CLO_HSTF_O_G_3";
		case 32:
			return "CLO_BHF_U_5_18";
		case 33:
			return "CLO_BHF_U_5_20";
		case 34:
			return "CLO_BHF_U_2_14";
		case 35:
			return "CLO_STF_U_5_9";
		case 36:
			return "CLO_BHF_U_5_3";
		case 37:
			return "CLO_BHF_U_13_0";
		case 38:
			return "CLO_STF_U_5_1";
		case 39:
			return "CLO_BHF_U_4_2";
		case 40:
			return "CLO_HSTF_O_J_2";
		case 41:
			return "CLO_STF_U_5_6";
		case 42:
			return "CLO_GRF_U_21_12";
		case 43:
			return "CLO_BHF_U_4_5";
		case 44:
			return "CLO_GRF_U_21_20";
		case 45:
			return "CLO_BHF_U_7_1";
		case 46:
			return "CLO_SMF_U_2_15";
		case 47:
			return "CLO_IEF_U_14_4";
		case 48:
			return "CLO_IEF_U_14_21";
		case 49:
			return "CLO_IEF_U_14_9";
		case 50:
			return "CLO_BHF_U_7_14";
		case 51:
			return "CLO_BIF_U_31_1";
		case 52:
			return "CLO_SMF_U_2_7";
		case 53:
			return "CLO_BHF_U_7_7";
		case 54:
			return "CLO_SMF_U_2_23";
		case 55:
			return "CLO_STF_U_5_12";
		case 56:
			return "CLO_SMF_U_2_19";
		case 57:
			return "CLO_STF_U_6_18";
		case 58:
			return "CLO_IEF_U_14_0";
		case 59:
			return "CLO_EXF_EU_5_0";
		case 60:
			return "CLO_IEF_U_14_7";
		case 61:
			return "CLO_BHF_U_4_18";
		case 62:
			return "CLO_BHF_U_0_17";
		case 63:
			return "CLO_LXF_U_5_0";
		case 64:
			return "CLO_IEF_U_4_8";
		case 65:
			return "CLO_HSTM_O_L_0";
		case 66:
			return "CLO_HSTF_S_0_0";
		case 67:
			return "CLO_GRF_U_20_15";
		case 68:
			return "CLO_BHF_U_0_2";
		case 69:
			return "CLO_IEF_U_1_9";
		case 70:
			return "CLO_LTSFU_0_0";
		case 71:
			return "CLO_S2F_U_3_12";
		case 72:
			return "CLO_IEF_U_4_5";
		case 73:
			return "CLO_GRF_U_20_24";
		case 74:
			return "CLO_SMF_U_3_8";
		case 75:
			return "CLO_IEF_U_4_22";
		case 76:
			return "CLO_GRF_U_19_16";
		case 77:
			return "CLO_HSTF_U_0_3";
		case 78:
			return "CLO_HSTF_U_16_5";
		case 79:
			return "CLO_SMF_U_3_5";
		case 80:
			return "CLO_SMF_U_3_6";
		case 81:
			return "CLO_LXF_U_6_3";
		case 82:
			return "CLO_S2F_D_7";
		case 83:
			return "CLO_GRF_U_19_23";
		case 84:
			return "CLO_GRF_U_0_13";
		case 85:
			return "CLO_S2F_D_18";
		case 86:
			return "CLO_EXF_EU_4_2";
		case 87:
			return "CLO_HP_F_D_10";
		case 88:
			return "CLO_LXF_U_6_18";
		case 89:
			return "CLO_IEF_U_7_5";
		case 90:
			return "CLO_BIF_DECL_67";
		case 91:
			return "CLO_BHF_U_16_1";
		case 92:
			return "CLO_S1F_U_3_1";
		case 93:
			return "CLO_IEF_U_7_14";
		case 94:
			return "CLO_GRF_U_15_10";
		case 95:
			return "CLO_GRF_U_2_6";
		case 96:
			return "CLO_IEF_U_7_12";
		case 97:
			return "CLO_SMF_DECL_16";
		case 98:
			return "CLO_S1F_DEC_23";
		case 99:
			return "CLO_SMF_DECL_15";
		case 100:
			return "CLO_BIF_DECL_2";
		case 101:
			return "CLO_SMF_DECL_7";
		case 102:
			return "CLO_HP_F_D_9";
		case 103:
			return "CLO_EXF_EU_9_5";
		case 104:
			return "CLO_S2F_D_23";
		case 105:
			return "CLO_SMF_DECL_5";
		case 106:
			return "CLO_BIF_DECL_63";
		case 107:
			return "CLO_AWF_DECL_23";
		case 108:
			return "CLO_BIF_DECL_49";
		case 109:
			return "CLO_HALF_D_10";
		case 110:
			return "CLO_GRF_DECL_27";
		case 111:
			return "CLO_LXF_DEC_35";
		case 112:
			return "CLO_HST_F_A_0";
		case 113:
			return "CLO_HST_F_A_9";
		case 114:
			return "CLO_BHF_DECL_19";
		case 115:
			return "CLO_INDF_HT_6_2";
		case 116:
			return "CLO_EXF_DECL_3";
		case 117:
			return "CLO_X4F_B_7_0";
		case 118:
			return "CLO_X2F_B_2_0";
		case 119:
			return "CLO_VWF_U_13_0";
		case 120:
			return "CLO_VWF_U_13_1";
		case 121:
			return "CLO_VWF_U_13_2";
		case 122:
			return "CLO_VWF_U_13_3";
		case 123:
			return "CLO_VWF_U_13_4";
		case 124:
			return "CLO_VWF_U_13_5";
		case 125:
			return "CLO_VWF_U_13_6";
		case 126:
			return "CLO_VWF_U_18_5";
		case 127:
			return "CLO_VWF_PH_0_0";
		case 128:
			return "CLO_VWF_PH_0_1";
		case 129:
			return "CLO_VWF_PH_0_2";
		case 130:
			return "CLO_VWF_PH_0_3";
		case 131:
			return "CLO_VWF_PH_0_4";
		case 132:
			return "CLO_VWF_PH_0_5";
		case 133:
			return "CLO_VWF_PH_0_6";
		case 134:
			return "CLO_VWF_PH_0_7";
		case 135:
			return "CLO_VWF_PH_0_8";
		case 136:
			return "CLO_VWF_PH_0_9";
		case 137:
			return "CLO_VWF_PH_0_10";
		case 138:
			return "CLO_VWF_DECL_0";
		case 139:
			return "CLO_VWF_DECL_1";
		case 140:
			return "CLO_VWF_DECL_3";
		case 141:
			return "CLO_VWF_DECL_5";
		case 142:
			return "CLO_VWF_DECL_7";
		case 143:
			return "CLO_VWF_DECL_8";
		case 144:
			return "CLO_VWF_DECL_9";
		default:
			break;
	}
	switch (iParam0)
	{
		case 145:
			return "CLO_H2M_O_S_16";
		case 146:
			return "CLO_ARM_O_12";
		case 147:
			return "CLO_IEM_O_1";
		case 148:
			return "CLO_H2M_S_6_0";
		case 149:
			return "CLO_BIM_O_11";
		case 150:
			return "CLO_STM_O_5";
		case 151:
			return "CLO_SMM_O_1";
		case 152:
			return "CLO_STM_O_E_1";
		case 153:
			return "CLO_STM_O_8";
		case 154:
			return "CLO_HSTM_O_20";
		case 155:
			return "CLO_H2M_S_4_0";
		case 156:
			return "CLO_H2M_O_G_21";
		case 157:
			return "CLO_GRM_O_1";
		case 158:
			return "CLO_H2M_S_9_0";
		case 159:
			return "CLO_LXM_U_0_7";
		case 160:
			return "CLO_H2M_S_9_5";
		case 161:
			return "CLO_HSTM_S_1_1";
		case 162:
			return "CLO_IEM_O_11";
		case 163:
			return "CLO_BIM_U_18_1";
		case 164:
			return "CLO_BHM_U_11_17";
		case 165:
			return "CLO_H2M_U_3_25";
		case 166:
			return "CLO_BHM_U_6_1";
		case 167:
			return "CLO_L2M_U_6_15";
		case 168:
			return "CLO_BHM_U_14_1";
		case 169:
			return "CLO_L2M_U_6_12";
		case 170:
			return "CLO_L2M_U_6_11";
		case 171:
			return "CLO_HSTM_O_J_2";
		case 172:
			return "CLO_EXM_OB_14";
		case 173:
			return "CLO_STM_U_7_4";
		case 174:
			return "CLO_IEM_U_3_7";
		case 175:
			return "CLO_L2M_U_6_1";
		case 176:
			return "CLO_EXM_OA_0";
		case 177:
			return "CLO_BHM_U_5_18";
		case 178:
			return "CLO_BHM_U_5_20";
		case 179:
			return "CLO_BHM_U_2_14";
		case 180:
			return "CLO_STM_U_5_9";
		case 181:
			return "CLO_BHM_U_5_3";
		case 182:
			return "CLO_BHM_U_13_0";
		case 183:
			return "CLO_STM_U_5_1";
		case 184:
			return "CLO_BHM_U_4_2";
		case 185:
			return "CLO_STM_U_5_6";
		case 186:
			return "CLO_GRM_U_15_12";
		case 187:
			return "CLO_BHM_U_4_5";
		case 188:
			return "CLO_GRM_U_15_20";
		case 189:
			return "CLO_HSTM_O_G_3";
		case 190:
			return "CLO_BHM_U_7_1";
		case 191:
			return "CLO_HSTM_O_L_0";
		case 192:
			return "CLO_SMM_U_2_15";
		case 193:
			return "CLO_IEM_U_17_4";
		case 194:
			return "CLO_IEM_U_17_21";
		case 195:
			return "CLO_IEM_U_17_9";
		case 196:
			return "CLO_BHM_U_7_14";
		case 197:
			return "CLO_BIM_U_26_1";
		case 198:
			return "CLO_SMM_U_2_7";
		case 199:
			return "CLO_BHM_U_7_7";
		case 200:
			return "CLO_SMM_U_2_23";
		case 201:
			return "CLO_STM_U_5_12";
		case 202:
			return "CLO_SMM_U_2_19";
		case 203:
			return "CLO_STM_U_6_18";
		case 204:
			return "CLO_IEM_U_17_0";
		case 205:
			return "CLO_EXM_EU_6_0";
		case 206:
			return "CLO_IEM_U_17_7";
		case 207:
			return "CLO_HSTM_S_0_0";
		case 208:
			return "CLO_BHM_U_4_18";
		case 209:
			return "CLO_BHM_U_0_17";
		case 210:
			return "CLO_LXM_U_1_0";
		case 211:
			return "CLO_IEM_U_4_8";
		case 212:
			return "CLO_HSTM_U_15_5";
		case 213:
			return "CLO_GRM_U_14_15";
		case 214:
			return "CLO_BHM_U_0_2";
		case 215:
			return "CLO_LTSMU_0_0";
		case 216:
			return "CLO_IEM_U_18_9";
		case 217:
			return "CLO_S2M_U_5_10";
		case 218:
			return "CLO_IEM_U_4_5";
		case 219:
			return "CLO_GRM_U_14_24";
		case 220:
			return "CLO_SMM_U_3_8";
		case 221:
			return "CLO_IEM_U_4_22";
		case 222:
			return "CLO_GRM_U_13_16";
		case 223:
			return "CLO_HSTM_U_0_3";
		case 224:
			return "CLO_SMM_U_3_5";
		case 225:
			return "CLO_SMM_U_3_6";
		case 226:
			return "CLO_LXM_U_5_3";
		case 227:
			return "CLO_S2M_D_16";
		case 228:
			return "CLO_GRM_U_13_23";
		case 229:
			return "CLO_GRM_U_0_13";
		case 230:
			return "CLO_S2M_D_27";
		case 231:
			return "CLO_EXM_EU_5_2";
		case 232:
			return "CLO_HP_D_10";
		case 233:
			return "CLO_LXM_U_5_17";
		case 234:
			return "CLO_IEM_U_7_5";
		case 235:
			return "CLO_IEM_U_7_23";
		case 236:
			return "CLO_BIM_DECL_67";
		case 237:
			return "CLO_BHM_U_16_1";
		case 238:
			return "CLO_S1M_U_3_1";
		case 239:
			return "CLO_SMM_U_7_10";
		case 240:
			return "CLO_GRM_U_2_6";
		case 241:
			return "CLO_IEM_U_7_19";
		case 242:
			return "CLO_SMM_DECL_16";
		case 243:
			return "CLO_S1M_DEC_25";
		case 244:
			return "CLO_SMM_DECL_15";
		case 245:
			return "CLO_BIM_DECL_2";
		case 246:
			return "CLO_SMM_DECL_7";
		case 247:
			return "CLO_HP_D_9";
		case 248:
			return "CLO_EXM_EU_10_5";
		case 249:
			return "CLO_S2M_D_4";
		case 250:
			return "CLO_SMM_DECL_5";
		case 251:
			return "CLO_BIM_DECL_63";
		case 252:
			return "CLO_AWM_DECL_23";
		case 253:
			return "CLO_BIM_DECL_49";
		case 254:
			return "CLO_HALM_D_10";
		case 255:
			return "CLO_GRM_DECL_27";
		case 256:
			return "CLO_LXM_DEC_35";
		case 257:
			return "CLO_HST_A_0";
		case 258:
			return "CLO_EXM_DECL_3";
		case 259:
			return "CLO_HST_A_9";
		case 260:
			return "CLO_BHM_DECL_19";
		case 261:
			return "CLO_INDM_HT_6_2";
		case 262:
			return "CLO_X4M_B_7_0";
		case 263:
			return "CLO_X2M_B_2_0";
		case 264:
			return "CLO_VWM_U_15_0";
		case 265:
			return "CLO_VWM_U_15_1";
		case 266:
			return "CLO_VWM_U_15_2";
		case 267:
			return "CLO_VWM_U_15_3";
		case 268:
			return "CLO_VWM_U_15_4";
		case 269:
			return "CLO_VWM_U_15_5";
		case 270:
			return "CLO_VWM_U_15_6";
		case 271:
			return "CLO_VWM_U_20_5";
		case 272:
			return "CLO_VWM_PH_0_0";
		case 273:
			return "CLO_VWM_PH_0_1";
		case 274:
			return "CLO_VWM_PH_0_2";
		case 275:
			return "CLO_VWM_PH_0_3";
		case 276:
			return "CLO_VWM_PH_0_4";
		case 277:
			return "CLO_VWM_PH_0_5";
		case 278:
			return "CLO_VWM_PH_0_6";
		case 279:
			return "CLO_VWM_PH_0_7";
		case 280:
			return "CLO_VWM_PH_0_8";
		case 281:
			return "CLO_VWM_PH_0_9";
		case 282:
			return "CLO_VWM_PH_0_10";
		case 283:
			return "CLO_VWM_DECL_0";
		case 284:
			return "CLO_VWM_DECL_1";
		case 285:
			return "CLO_VWM_DECL_3";
		case 286:
			return "CLO_VWM_DECL_5";
		case 287:
			return "CLO_VWM_DECL_7";
		case 288:
			return "CLO_VWM_DECL_8";
		case 289:
			return "CLO_VWM_DECL_9";
		default:
			break;
	}
	return "LRCLOTHES_INVALID";
}

int func_745()
{
	int iVar0;

	iVar0 = 26970;
	while (iVar0 <= 27088)
	{
		if (!func_498(iVar0, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 27120;
	while (iVar0 <= 27145)
	{
		if (!func_498(iVar0, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_746(bool bParam0)
{
	int iVar0[145];
	int iVar146;
	int iVar147;
	int iVar148;
	int iVar149;

	iVar146 = 0;
	iVar147 = 0;
	while (iVar147 < 145)
	{
		if (func_82(PLAYER::PLAYER_PED_ID()))
		{
			iVar148 = iVar147;
		}
		else
		{
			iVar148 = iVar147 + 145;
		}
		iVar0[iVar147] = iVar148;
		iVar146 = (iVar146 + func_747(iVar0[iVar147], bParam0));
		iVar147++;
	}
	iVar149 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar146);
	iVar147 = 0;
	while (iVar147 < 145)
	{
		if (iVar149 <= func_747(iVar0[iVar147], bParam0))
		{
			return iVar0[iVar147];
		}
		else
		{
			iVar149 = (iVar149 - func_747(iVar0[iVar147], bParam0));
		}
		iVar147++;
	}
	return -1;
}

int func_747(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 14:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			if (func_742(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26146;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return Global_262145.f_26145;
	}
	switch (iParam0)
	{
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			if (func_742(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26146;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 191:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
			if (func_742(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26146;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 207:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 208:
			if (func_742(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26146;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26147;
			}
			break;
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
			if (func_742(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26145;
			}
			break;
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 286:
		case 287:
		case 288:
		case 289:
			return Global_262145.f_26145;
	}
	return 0;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 8:
			return 1;
		case 12:
			return 2;
		case 16:
			return 3;
		case 1:
			return 4;
		case 5:
			return 5;
		case 9:
			return 6;
		case 13:
			return 7;
		case 17:
			return 8;
		case 2:
			return 9;
		case 6:
			return 10;
		case 14:
			return 11;
		case 19:
			return 12;
		case 3:
			return 13;
		case 7:
			return 14;
		case 10:
			return 15;
		case 15:
			return 16;
		case 11:
			return 17;
		case 18:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return -1;
}

void func_749()
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(func_750(PLAYER::PLAYER_ID())))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(func_750(PLAYER::PLAYER_ID()));
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(func_750(PLAYER::PLAYER_ID()));
		func_101(-1);
	}
}

int func_750(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_107[iParam0 /*5*/].f_2;
}

int func_751()
{
	if (((SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 128f)) != 0 || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 128f)) != 0) || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 128f)) != 0) || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 128f)) != 0)
	{
		return 1;
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_752()
{
	int iVar0;
	int iVar1;

	iVar0 = 12;
	iVar1 = func_780(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case 10:
		case 15:
		case 14:
		case 19:
			iVar0 = 12;
			break;
		case 18:
			iVar0 = 13;
			break;
		default:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_753(bool bParam0)
{
	func_764(bParam0);
	func_755(bParam0);
	func_754();
}

void func_754()
{
	if (Local_268.f_45 != 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_268.f_72))
		{
			ENTITY::SET_ENTITY_ROTATION(Local_268.f_72, 0f, Local_268.f_18, 0f, 2, true);
		}
	}
}

void func_755(bool bParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	if (!func_41(3))
	{
		Local_268.f_25 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), Local_268.f_16);
		Local_268.f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), func_763(&(Local_268.f_16), bParam0));
		func_40(3);
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_268.f_25));
	fVar1 = (1f - ((SYSTEM::TO_FLOAT(iVar0) / IntToFloat(Local_268.f_16)) * 1f));
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	else if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	fVar2 = SYSTEM::POW((1f - fVar1), 3f);
	fVar3 = (1f - fVar2);
	Local_268.f_18 = func_762(Local_268.f_19, Local_268.f_20, fVar3);
	Local_268.f_21 = func_762(Local_268.f_19, Local_268.f_20, fVar3);
	if (Local_268.f_18 > IntToFloat((360 * Local_268.f_9)))
	{
		Local_268.f_9++;
	}
	if (Local_268.f_21 > (IntToFloat(Local_268.f_13 + 1) * SYSTEM::TO_FLOAT(18)))
	{
		Local_268.f_13++;
	}
	Local_268.f_14 = (Local_268.f_13 % 20);
	if (!func_41(17) && PLAYER::PLAYER_ID() == Local_105)
	{
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_268.f_26))
		{
			func_782(func_752(), 0, 0, 1, 0);
			func_40(17);
		}
	}
	if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_268.f_25))
	{
		func_761();
		Local_268.f_17 = 0;
		func_88();
		if (PLAYER::PLAYER_ID() == Local_105)
		{
			func_756();
			func_80(10);
		}
		else
		{
			func_80(17);
		}
	}
}

void func_756()
{
	var uVar0;
	float fVar4;

	func_760(&uVar0, &fVar4);
	func_759(fVar4);
	func_757(func_164(&uVar0));
}

void func_757(char* sParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_268.f_427))
	{
		Local_268.f_427 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_268.f_427, sParam0, func_758(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
	}
}

Vector3 func_758()
{
	return 1111.052f, 229.8579f, -49.133f;
}

void func_759(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_268.f_426))
	{
		Local_268.f_426 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_268.f_426, "Win", func_758(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_268.f_426, "winSize", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_268.f_426, "winSize", fParam0);
	}
}

void func_760(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_780(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
		case 17:
		case 5:
		case 9:
		case 13:
			StringCopy(sParam0, "Win_RP", 16);
			*uParam1 = 0f;
			break;
		case 2:
		case 6:
		case 14:
		case 4:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 0f;
			break;
		case 19:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 1f;
			break;
		case 3:
		case 7:
		case 10:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 0f;
			break;
		case 15:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 1f;
			break;
		case 11:
			StringCopy(sParam0, "Win_Mystery", 16);
			*uParam1 = 0f;
			break;
		case 18:
			StringCopy(sParam0, "Win_Car", 16);
			*uParam1 = 1f;
			break;
		default:
			StringCopy(sParam0, "Win_Clothes", 16);
			*uParam1 = 0f;
			break;
	}
}

void func_761()
{
	Local_268.f_18 = Local_268.f_20;
	Local_268.f_19 = Local_268.f_18;
	Local_268.f_10 = func_780(PLAYER::PLAYER_ID());
	func_794(Local_268.f_10, 0);
	Local_268.f_14 = func_780(PLAYER::PLAYER_ID());
	Local_268.f_7 = Local_268.f_14;
	func_79(3);
	Local_268.f_13 = Local_268.f_12;
}

float func_762(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_763(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar1 = Local_105;
	}
	switch (func_792(iVar1))
	{
		case 0:
			iVar0 = (*uParam0 - 2400);
			break;
		case 1:
			iVar0 = (*uParam0 - 2300);
			break;
		case 2:
			iVar0 = (*uParam0 - 2000);
			break;
	}
	if (iVar0 < 0)
	{
		iVar0 = *uParam0;
	}
	return iVar0;
}

void func_764(bool bParam0)
{
	int iVar0;

	if (func_41(2))
	{
		return;
	}
	iVar0 = func_770();
	Local_268.f_12 = (iVar0 + Local_268.f_8 * 20);
	Local_268.f_12 = (Local_268.f_12 + func_769(bParam0));
	Local_268.f_13 = Local_268.f_14;
	Local_268.f_20 = func_765(bParam0);
	Local_268.f_16 = (Local_268.f_15 * Local_268.f_12);
	func_40(2);
}

float func_765(bool bParam0)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;

	fVar0 = (IntToFloat(Local_268.f_12) * SYSTEM::TO_FLOAT(18));
	if (fVar0 < 180f)
	{
		fVar0 = (fVar0 + 360f);
		Local_268.f_12 += 20;
	}
	iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_268.f_72, "Base_pivot");
	vVar2 = { ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(Local_268.f_72, iVar1) };
	fVar5 = func_767(vVar2.y);
	iVar6 = SYSTEM::FLOOR((fVar5 / 18f));
	fVar7 = SYSTEM::TO_FLOAT(iVar6 * 18);
	fVar8 = (360f - fVar7);
	fVar9 = MISC::ABSF((fVar5 - fVar7));
	fVar0 = ((fVar0 - fVar8) - fVar9);
	iVar10 = func_792(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iVar10 = func_792(Local_105);
	}
	iVar11 = SYSTEM::ROUND((fVar0 / 18f));
	fVar0 = ((SYSTEM::TO_FLOAT(iVar11 * 18) + func_766(iVar10)) + IntToFloat(Local_268.f_10 * 18));
	fVar12 = (fVar0 * -1f);
	return fVar12;
}

float func_766(int iParam0)
{
	if (func_82(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0.4746f;
			case 1:
				return ((SYSTEM::TO_FLOAT(18) * 2f) - 3.4757f);
			case 2:
				return (SYSTEM::TO_FLOAT(4) + 1.9002f);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (SYSTEM::TO_FLOAT(4) + 1.3709f);
			case 1:
				return (SYSTEM::TO_FLOAT(4) + 3.5184f);
			case 2:
				return (SYSTEM::TO_FLOAT(18) + 14.2192f);
			default:
				break;
		}
	}
	return 0f;
}

float func_767(float fParam0)
{
	fParam0 = func_768(fParam0);
	if (fParam0 < 0f)
	{
		return (360f + fParam0);
	}
	return fParam0;
}

float func_768(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_769(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		iVar0 = Local_105;
	}
	switch (func_792(iVar0))
	{
		case 1:
			if (Local_268.f_12 <= 30)
			{
				return 20;
			}
			break;
	}
	return 0;
}

int func_770()
{
	int iVar0;
	int iVar1;

	if (Local_268.f_14 > func_780(PLAYER::PLAYER_ID()))
	{
		iVar1 = (20 - Local_268.f_14);
		iVar0 = (iVar1 + func_780(PLAYER::PLAYER_ID()));
	}
	else
	{
		iVar0 = (func_780(PLAYER::PLAYER_ID()) - Local_268.f_14);
	}
	return iVar0;
}

int func_771(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(Local_268.f_72))
	{
		if (!bParam0)
		{
			sVar0 = func_156(func_792(PLAYER::PLAYER_ID()));
		}
		else
		{
			sVar0 = func_156(func_792(Local_105));
		}
		sVar1 = func_81();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_268.f_72, sVar1, sVar0, 3))
			{
				fVar2 = 1f;
				fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_268.f_72, sVar1, sVar0);
				if (fVar3 == fVar2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 9;
		case 2:
			return 10;
		default:
			break;
	}
	return -1;
}

int func_773(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	int iVar5;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar0 = PLAYER::GET_PLAYER_PED(Local_105);
		iVar1 = Local_105;
	}
	if (func_129(iVar0))
	{
		sVar2 = func_775(iParam0);
		sVar3 = func_81();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar3, sVar2, 3))
			{
				fVar4 = func_774(iParam0);
				iVar5 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(func_750(iVar1));
				if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= fVar4) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("BLEND_OUT"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("EARLY_OUT")))
				{
					if (bParam2)
					{
						func_749();
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_774(int iParam0)
{
	float fVar0;

	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 2:
			if (func_82(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = 0.7f;
			}
			break;
	}
	return fVar0;
}

char* func_775(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "Enter_to_ArmRaisedIDLE";
			break;
		case 1:
			sVar0 = "ArmRaisedIDLE";
			break;
		case 2:
			sVar0 = "ArmRaisedIDLE_to_SpinReadyIDLE";
			break;
		case 3:
			sVar0 = "SpinReadyIDLE";
			break;
		case 4:
			sVar0 = "SpinStart_ArmRaisedIDLE_to_BaseIDLE";
			break;
		case 5:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_low";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Low";
			}
			break;
		case 6:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_med";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Med";
			}
			break;
		case 7:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_high";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_High";
			}
			break;
		case 8:
			sVar0 = "SpinningIDLE_Low";
			break;
		case 9:
			sVar0 = "SpinningIDLE_Medium";
			break;
		case 10:
			sVar0 = "SpinningIDLE_High";
			break;
		case 11:
			sVar0 = "Win";
			break;
		case 12:
			sVar0 = "Win_Big";
			break;
		case 13:
			sVar0 = "Win_Huge";
			break;
		case 14:
			sVar0 = "Exit_to_Standing";
			break;
		case 15:
			sVar0 = "SpinReadyIDLE_to_ArmRaisedIDLE";
			break;
	}
	return sVar0;
}

void func_776(float fParam0)
{
	bool bVar0;

	if (func_41(27))
	{
		if (Local_268.f_425 == -1 && AUDIO::HAS_SOUND_FINISHED(Local_268.f_425))
		{
			Local_268.f_425 = AUDIO::GET_SOUND_ID();
			bVar0 = true;
			if (fParam0 > 0.5f)
			{
				bVar0 = false;
			}
			AUDIO::PLAY_SOUND_FROM_COORD(Local_268.f_425, "Spin_Single_Ticks", func_758(), "dlc_vw_casino_lucky_wheel_sounds", bVar0, 0, false);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_268.f_425, "spinSpeed", fParam0);
		}
		else
		{
			AUDIO::STOP_SOUND(Local_268.f_425);
			AUDIO::RELEASE_SOUND_ID(Local_268.f_425);
			Local_268.f_425 = -1;
			func_776(fParam0);
		}
	}
}

void func_777(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_268.f_424) && Local_268.f_424 == -1)
	{
		Local_268.f_424 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_268.f_424, "Spin_Start", func_758(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_268.f_424, "spinSpeed", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_268.f_424, "spinSpeed", fParam0);
	}
}

void func_778()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;

	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_268.f_72, "Base_pivot");
	vVar1 = { ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(Local_268.f_72, iVar0) };
	fVar4 = func_767(vVar1.y);
	vVar5 = { ENTITY::GET_ENTITY_ROTATION(Local_268.f_72, 2) };
	fVar8 = func_767(vVar5.y);
	if (!func_771(0))
	{
		fVar9 = fVar4;
	}
	else if (fVar8 == 0f && fVar4 != 0f)
	{
		fVar9 = fVar4;
	}
	else
	{
		fVar9 = fVar8;
	}
	if (!func_41(26))
	{
		Local_268.f_423 = fVar9;
		func_40(26);
	}
	fVar10 = MISC::ABSF((fVar9 - Local_268.f_423));
	if (fVar10 > 100f)
	{
		fVar10 = MISC::ABSF((fVar9 - (360f + Local_268.f_423)));
	}
	iVar11 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_268.f_25));
	fVar12 = (SYSTEM::TO_FLOAT(iVar11) / IntToFloat(Local_268.f_16));
	if (fVar12 < 0f)
	{
		fVar12 = 0f;
	}
	else if (fVar12 > 1f)
	{
		fVar12 = 1f;
	}
	if (func_779() == 0)
	{
		fVar12 = (fVar12 / 2f);
	}
	Local_268.f_422 = fVar12;
	if (fVar10 >= 18f)
	{
		func_40(27);
		Local_268.f_423 = fVar9;
	}
	else
	{
		func_79(27);
	}
	Local_268.f_422 = fVar12;
}

int func_779()
{
	if (func_159(PLAYER::PLAYER_ID()) > 3000)
	{
		return 2;
	}
	else if (func_159(PLAYER::PLAYER_ID()) > 1500)
	{
		return 1;
	}
	return 0;
}

int func_780(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_107[iParam0 /*5*/];
}

void func_781(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_186() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

void func_782(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	char cVar9[64];
	char* sVar25;

	if (bParam3)
	{
	}
	Local_268.f_22 = func_775(iParam0);
	vVar0 = { func_789(bParam1) };
	vVar3 = { 0f, 0f, func_784(bParam1) };
	fVar6 = 2f;
	fVar7 = -2f;
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		fVar6 = 8f;
		fVar7 = -1.5f;
	}
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		fVar6 = 1.5f;
	}
	if (func_82(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 3)
		{
			fVar6 = 4f;
			fVar7 = -4f;
		}
	}
	if (iParam0 == 2 || iParam0 == 1)
	{
		fVar6 = 4f;
		fVar7 = -4f;
	}
	if (iParam0 == 14)
	{
		fVar6 = 4f;
		fVar7 = -4f;
	}
	iVar8 = 5;
	if (bParam2)
	{
		iVar8 = 69;
	}
	func_101(NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vVar0, vVar3, 2, bParam4, bParam2, 1f, 0f, 1f));
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), func_750(PLAYER::PLAYER_ID()), Local_268.f_23, Local_268.f_22, fVar6, fVar7, iVar8, 0, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(func_750(PLAYER::PLAYER_ID()));
	StringCopy(&cVar9, Local_268.f_22, 64);
	StringConCat(&cVar9, "_Facial", 64);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), &cVar9, Local_268.f_23);
	if (func_783(Local_268.f_22))
	{
		sVar25 = func_156(func_792(PLAYER::PLAYER_ID()));
		ENTITY::SET_ENTITY_ROTATION(Local_268.f_72, 0f, 0f, 0f, 2, true);
		ENTITY::PLAY_ENTITY_ANIM(Local_268.f_72, sVar25, Local_268.f_23, 1000f, false, true, false, 0f, 2);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_268.f_72);
	}
}

int func_783(char* sParam0)
{
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, func_775(7)) || MISC::ARE_STRINGS_EQUAL(sParam0, func_775(6))) || MISC::ARE_STRINGS_EQUAL(sParam0, func_775(5)))
	{
		return 1;
	}
	return 0;
}

float func_784(bool bParam0)
{
	if (bParam0)
	{
		return func_786();
	}
	else
	{
		return func_785();
	}
	return 0f;
}

float func_785()
{
	return 0f;
}

var func_786()
{
	vector3 vVar0;

	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(Local_268.f_23, Local_268.f_22, func_787(Local_268.f_22), 0f, 0f, 0f, 0f, 2) };
	return vVar0.z;
}

Vector3 func_787(char* sParam0)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar3 = func_788(sParam0);
	if (iVar3 == 0)
	{
		vVar0 = { func_758() };
	}
	return vVar0;
}

int func_788(char* sParam0)
{
	int iVar0;

	iVar0 = -1;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Enter_to_ArmRaisedIDLE"))
	{
		iVar0 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinReadyIDLE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE"))
	{
		iVar0 = 3;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinStart_ArmRaisedIDLE_to_BaseIDLE"))
	{
		iVar0 = 4;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_low") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Low"))
	{
		iVar0 = 5;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_med") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Med"))
	{
		iVar0 = 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_high") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_High"))
	{
		iVar0 = 7;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Low"))
	{
		iVar0 = 8;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Med"))
	{
		iVar0 = 9;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_High"))
	{
		iVar0 = 10;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win"))
	{
		iVar0 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Big"))
	{
		iVar0 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Huge"))
	{
		iVar0 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Exit_to_Standing"))
	{
		iVar0 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE_to_ArmRaisedIDLE"))
	{
		iVar0 = 15;
	}
	return iVar0;
}

Vector3 func_789(bool bParam0)
{
	if (bParam0)
	{
		return func_790();
	}
	else
	{
		return func_54();
	}
	return 0f, 0f, 0f;
}

Vector3 func_790()
{
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_268.f_23, Local_268.f_22, func_54(), 0f, 0f, 0f, 0f, 2);
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_792(int iParam0)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Local_107[iParam0 /*5*/].f_4;
}

void func_793(bool bParam0)
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (bParam0)
		{
			if (!MISC::IS_BIT_SET(Local_107[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_107[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
			}
		}
		else if (MISC::IS_BIT_SET(Local_107[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
		{
			MISC::CLEAR_BIT(&(Local_107[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
		}
	}
}

void func_794(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2032669874;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar4 = func_244(1, 1);
	if (iVar4 != -1)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar4);
	}
}

bool func_795(int iParam0)
{
	if (iParam0 == func_8())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_107[iParam0 /*5*/].f_1, 0);
}

void func_796()
{
	if (!func_41(5))
	{
		Local_268.f_2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_268.f_24));
		if (func_41(15))
		{
			func_79(15);
			func_799();
			func_40(5);
		}
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_268.f_24) || func_798())
		{
			Local_268.f_2 = 0;
			if (func_797(3))
			{
				func_782(14, 0, 0, 1, 0);
				func_79(4);
				func_40(10);
				func_80(12);
			}
		}
	}
}

int func_797(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (func_129(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = func_775(iParam0);
		sVar1 = func_81();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar1, sVar0, 3);
		}
	}
	return 0;
}

int func_798()
{
	if (func_28())
	{
		return 1;
	}
	return 0;
}

void func_799()
{
	func_102(Local_268.f_2);
	Local_268.f_15 = func_158();
	Local_268.f_8 = func_157();
	func_97(func_779());
}

void func_800()
{
	Local_268.f_3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 128f));
	Local_268.f_4 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 128f));
}

void func_801()
{
	func_804();
	func_800();
	if (func_41(18))
	{
		if (func_773(2, 0, 0))
		{
			func_782(3, 0, 1, 0, 0);
			func_71(&(Local_268.f_27));
			func_79(18);
		}
		else if (func_41(12))
		{
			func_40(16);
			func_80(8);
		}
	}
	else if (!func_773(3, 0, 0))
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			func_46("LUCK_W_SPIN_PC", -1);
		}
		else
		{
			func_46("LUCK_WHEEL_SPIN", -1);
		}
		if (func_41(12))
		{
			func_71(&(Local_268.f_27));
			func_40(16);
			func_80(8);
		}
	}
	else if (func_803() != 7)
	{
		if (!func_802() || func_41(22))
		{
			func_782(15, 0, 0, 0, 1);
			func_80(7);
		}
	}
}

bool func_802()
{
	return ((Local_268.f_3 <= 20 && Local_268.f_3 >= -20) && Local_268.f_4 <= -120);
}

int func_803()
{
	return Local_268.f_45;
}

void func_804()
{
	if (func_803() == 6)
	{
		if (func_74(&(Local_268.f_39)))
		{
			if (func_72(&(Local_268.f_39), 10000, 0))
			{
				func_40(22);
			}
		}
	}
	if (func_41(12) || func_41(13))
	{
		return;
	}
	if (!func_74(&(Local_268.f_27)))
	{
		func_73(&(Local_268.f_27), 0, 0);
	}
	else if (!func_72(&(Local_268.f_27), 5000, 0))
	{
		if (Local_268.f_45 != 5)
		{
			if (func_805())
			{
				Local_268.f_24 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
				func_40(12);
				func_40(15);
				func_71(&(Local_268.f_27));
			}
		}
		else if (func_805())
		{
			func_40(15);
			func_80(8);
		}
		else if (func_802() && !func_41(22))
		{
			func_73(&(Local_268.f_39), 0, 0);
			func_40(12);
			func_71(&(Local_268.f_27));
		}
	}
	else if (func_803() == 6)
	{
		if (!func_802() || func_41(22))
		{
			func_782(15, 0, 0, 0, 1);
			func_80(7);
		}
	}
	else
	{
		func_40(13);
		func_71(&(Local_268.f_27));
	}
}

bool func_805()
{
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		return PAD::IS_CONTROL_JUST_PRESSED(2, 33);
	}
	return ((Local_268.f_3 <= 20 && Local_268.f_3 >= -20) && Local_268.f_4 >= 120);
}

void func_806()
{
	if (func_773(15, 0, 0))
	{
		func_79(12);
		func_79(4);
		func_71(&(Local_268.f_27));
		func_782(1, 0, 1, 0, 0);
		func_80(5);
	}
}

void func_807()
{
	if (!func_41(4))
	{
		Local_268.f_24 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		func_40(4);
	}
	func_804();
	func_800();
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		func_46("LUCK_W_SPIN_PC", -1);
	}
	else
	{
		func_46("LUCK_WHEEL_SPIN", -1);
	}
	if (func_41(12) && !func_798())
	{
		func_782(2, 0, 0, 0, 0);
		func_40(18);
		func_71(&(Local_268.f_27));
		func_80(6);
		func_79(12);
	}
	else if (func_41(13) || func_798())
	{
		func_782(14, 0, 0, 1, 0);
		func_79(4);
		func_40(10);
		func_80(12);
	}
}

void func_808()
{
	func_812();
	if (!func_41(7))
	{
		if (!func_41(8))
		{
			STREAMING::REQUEST_ANIM_DICT(Local_268.f_23);
			if (STREAMING::HAS_ANIM_DICT_LOADED(Local_268.f_23))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_789(1), 1f, 5000, func_784(1), 0.001f);
					func_73(&(Local_268.f_31), 0, 0);
					func_40(8);
				}
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(Local_268.f_23))
		{
			if (func_809())
			{
				func_782(0, 0, 0, 1, 0);
				func_71(&(Local_268.f_31));
				func_40(7);
			}
		}
	}
	else if (func_773(0, 0, 0))
	{
		func_782(1, 0, 1, 0, 0);
		func_79(7);
		func_40(9);
	}
}

int func_809()
{
	if ((func_811(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_789(1), 0.01f, 0) && func_810(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), func_784(1), 5f)) || func_72(&(Local_268.f_31), 5000, 0))
	{
		return 1;
	}
	return 0;
}

int func_810(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_811(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_812()
{
	if (!func_41(6))
	{
		if (!func_815())
		{
			func_814();
		}
		if (!func_108())
		{
			func_813();
		}
		HUD::_THEFEED_DISABLE();
		HUD::DISPLAY_RADAR(false);
		func_40(6);
	}
}

void func_813()
{
	Global_2440049.f_1267.f_10 = 1;
}

void func_814()
{
	Global_2440049.f_1267.f_9 = 1;
}

bool func_815()
{
	return Global_2440049.f_1267.f_9;
}

void func_816()
{
	func_820(&(Local_268.f_429));
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	if (func_512(0, -1, 0))
	{
		if (func_819(0))
		{
			func_818();
			func_96(0);
		}
		else
		{
			func_468(-1, 1, 1);
		}
		if (!func_538())
		{
			func_455("CAS_DIS_MAIN", 0, 0);
		}
		else
		{
			func_455("CAS_DIS_MAIN2", 0, 0);
		}
		func_817();
		func_417(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
	}
}

void func_817()
{
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 200);
		PAD::SET_INPUT_EXCLUSIVE(2, 200);
	}
	if ((Local_268.f_429.f_10 || func_72(&(Local_268.f_41), 20000, 0)) || func_25(1, 1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
		MISC::CLEAR_BIT(&(Local_268.f_1), 3);
		func_80(17);
		func_76(1);
	}
	else if (Local_268.f_429.f_9)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
		func_80(3);
		MISC::SET_BIT(&(Local_268.f_1), 3);
	}
}

void func_818()
{
	func_511(0, 0);
	func_502("CAS_BLP_DT");
	func_504(1, 2, 1, 1, 1);
	func_505(1, 1, 0, 0, 0);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
	func_507(1, "CasinoUI_Lucky_Wheel", "CasinoUI_Lucky_Wheel");
	func_407(202, "TCP_EXIT", -1);
	func_407(201, "TCP_CONT", -1);
}

bool func_819(int iParam0)
{
	return MISC::IS_BIT_SET(Local_268.f_429, iParam0);
}

void func_820(var uParam0)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			func_117(PLAYER::PLAYER_ID(), 0, 33024, 0);
		}
	}
	func_821(uParam0);
}

void func_821(var uParam0)
{
	func_825(&(uParam0->f_4), &(uParam0->f_6), &(uParam0->f_5), &(uParam0->f_7), 0);
	uParam0->f_9 = (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201));
	uParam0->f_10 = (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202));
	uParam0->f_11 = (uParam0->f_6 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
	uParam0->f_12 = (uParam0->f_6 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if ((((func_512(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_99007.f_1425)
	{
		if (MISC::IS_PC_VERSION() && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			if (PAD::_IS_USING_KEYBOARD_2(2))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 1, true);
				PAD::DISABLE_CONTROL_ACTION(0, 2, true);
				PAD::DISABLE_CONTROL_ACTION(2, 200, true);
				PAD::ENABLE_CONTROL_ACTION(0, 237, true);
				PAD::ENABLE_CONTROL_ACTION(0, 238, true);
				PAD::ENABLE_CONTROL_ACTION(0, 241, true);
				PAD::ENABLE_CONTROL_ACTION(0, 242, true);
				if ((Global_4269756 == -1 || Global_4269756 == -4) || Global_4269756 == -6)
				{
					PAD::ENABLE_CONTROL_ACTION(1, 1, true);
					PAD::ENABLE_CONTROL_ACTION(1, 2, true);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(1, 1, true);
					PAD::DISABLE_CONTROL_ACTION(1, 2, true);
				}
				func_514(0, 0, 0, 1);
				func_824(0, -1, 1);
			}
			if (func_415())
			{
				if (Global_4269756 == uParam0->f_1)
				{
					uParam0->f_9 = 1;
				}
				else
				{
					uParam0->f_1 = Global_4269756;
					func_468(uParam0->f_1, 1, 1);
				}
			}
			if (func_402())
			{
				uParam0->f_10 = 1;
			}
			if (func_823(0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (func_822(0, 0, 0))
			{
				uParam0->f_12 = 1;
			}
		}
	}
}

int func_822(bool bParam0, bool bParam1, int iParam2)
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4269756 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && bParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_823(bool bParam0, bool bParam1, int iParam2)
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4269756 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && bParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_824(bool bParam0, int iParam1, bool bParam2)
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	if (Global_4269756 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (bParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4269756 = -1;
			return 0;
		}
	}
	if (((Global_4269756 > -1 || Global_4269756 == -3) || Global_4269756 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4269756 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_4269756 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_825(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_826(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_268.f_429, iParam0))
	{
		MISC::SET_BIT(&(Local_268.f_429), iParam0);
	}
}

void func_827(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314.f_4, 6))
		{
			MISC::SET_BIT(&(Global_2425869[iParam0 /*443*/].f_314.f_4), 6);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314.f_4, 6))
	{
		MISC::CLEAR_BIT(&(Global_2425869[iParam0 /*443*/].f_314.f_4), 6);
	}
}

float func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 18f;
		case 2:
			return 36f;
		case 3:
			return 54f;
		case 4:
			return 72f;
		case 5:
			return 90f;
		case 6:
			return 108f;
		case 7:
			return 126f;
		case 8:
			return 144f;
		case 9:
			return 162f;
		case 10:
			return 180f;
		case 11:
			return 198f;
		case 12:
			return 216f;
		case 13:
			return 234f;
		case 14:
			return 252f;
		case 15:
			return 270f;
		case 16:
			return 288f;
		case 17:
			return 306f;
		case 18:
			return 324f;
		case 19:
			return 342f;
	}
	return 0f;
}

void func_829()
{
	if (func_38("LW_PLAY"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_47(0))
	{
		func_79(11);
		if (MISC::IS_BIT_SET(Global_1678288.f_6, 4))
		{
			if (func_830("CAS_MG_MEMB2", func_43(0)))
			{
				HUD::CLEAR_HELP(true);
			}
			MISC::CLEAR_BIT(&(Global_1678288.f_6), 4);
		}
		if (func_41(20))
		{
			if (func_38("LUCKY_WHEEL_US"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_79(20);
		}
		if (func_38("CASINO_LUCK_WD"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_41(25))
		{
			if (func_38("CAS_MG_CBAN"))
			{
				HUD::CLEAR_HELP(true);
				func_79(25);
			}
		}
		if (func_41(28))
		{
			if (func_38("CAS_LW_REGL"))
			{
				HUD::CLEAR_HELP(true);
				func_79(28);
			}
		}
	}
}

bool func_830(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_831()
{
	func_99();
	func_840();
	func_839();
	func_833();
	func_116(PLAYER::PLAYER_ID(), 0, 256);
	Local_268.f_23 = func_81();
	Local_268.f_22 = func_775(0);
	Local_268.f_46 = func_832();
}

int func_832()
{
	return 1;
}

void func_833()
{
	if (func_838() || func_837())
	{
		func_836();
		func_834();
	}
}

void func_834()
{
	if ((!func_519() && !func_835()) && Global_2452678)
	{
		Global_4456448.f_82708 = 0;
	}
}

bool func_835()
{
	return Global_2451787.f_689;
}

void func_836()
{
	Global_2451787.f_754 = 1;
}

var func_837()
{
	return Global_2451787.f_733;
}

bool func_838()
{
	return MISC::IS_BIT_SET(Global_2451787.f_2, 11);
}

void func_839()
{
	func_131(1);
}

void func_840()
{
	if (!func_41(1))
	{
		func_100(func_841(func_842()));
		func_40(1);
	}
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 8;
		case 2:
			return 12;
		case 3:
			return 16;
		case 4:
			return 1;
		case 5:
			return 5;
		case 6:
			return 9;
		case 7:
			return 13;
		case 8:
			return 17;
		case 9:
			return 2;
		case 10:
			return 6;
		case 11:
			return 14;
		case 12:
			return 19;
		case 13:
			return 3;
		case 14:
			return 7;
		case 15:
			return 10;
		case 16:
			return 15;
		case 17:
			return 11;
		case 18:
			return 18;
		case 19:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_842()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;

	iVar21 = 0;
	iVar22 = 0;
	while (iVar22 < 20)
	{
		iVar0[iVar22] = iVar22;
		iVar21 = (iVar21 + func_843(iVar0[iVar22]));
		iVar22++;
	}
	iVar23 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar21);
	iVar22 = 0;
	while (iVar22 < 20)
	{
		if (iVar23 <= func_843(iVar0[iVar22]))
		{
			return iVar0[iVar22];
		}
		else
		{
			iVar23 = (iVar23 - func_843(iVar0[iVar22]));
		}
		iVar22++;
	}
	return -1;
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_26228)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26118;
			}
			break;
		case 1:
			if (Global_262145.f_26228)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26119;
			}
			break;
		case 2:
			if (Global_262145.f_26228)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26120;
			}
			break;
		case 3:
			if (Global_262145.f_26228)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26121;
			}
			break;
		case 4:
			if (Global_262145.f_26229)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26122;
			}
			break;
		case 5:
			if (Global_262145.f_26229)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26123;
			}
			break;
		case 6:
			if (Global_262145.f_26229)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26124;
			}
			break;
		case 7:
			if (Global_262145.f_26229)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26125;
			}
			break;
		case 8:
			if (Global_262145.f_26229)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26126;
			}
			break;
		case 9:
			if (Global_262145.f_26230)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26127;
			}
			break;
		case 10:
			if (Global_262145.f_26230)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26128;
			}
			break;
		case 11:
			if (Global_262145.f_26230)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26129;
			}
			break;
		case 12:
			if (Global_262145.f_26230)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26130;
			}
			break;
		case 13:
			if (Global_262145.f_26231)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26131;
			}
			break;
		case 14:
			if (Global_262145.f_26231)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26132;
			}
			break;
		case 15:
			if (Global_262145.f_26231)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26133;
			}
			break;
		case 16:
			if (Global_262145.f_26231)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26134;
			}
			break;
		case 17:
			if (Global_262145.f_26232)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26135;
			}
			break;
		case 18:
			if (Global_262145.f_26233)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26136;
			}
			break;
		case 19:
			if (Global_262145.f_26234)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26137;
			}
			break;
	}
	return 0;
}

void func_844()
{
	if (func_38("LW_PLAY"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_845(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 10))
		{
			MISC::SET_BIT(&(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 10))
	{
		MISC::CLEAR_BIT(&(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2), 10);
	}
}

int func_846()
{
	if (func_41(11))
	{
		if (func_129(PLAYER::PLAYER_PED_ID()))
		{
			return func_847();
		}
	}
	return 0;
}

int func_847()
{
	if (((((PAD::IS_CONTROL_JUST_PRESSED(2, 51) && !PAD::IS_CONTROL_JUST_PRESSED(2, 199)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 200)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 199)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200)) && !func_848(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_848(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1377236.f_241.f_136[func_591(9) /*33*/][iParam0], func_586(9));
}

void func_849()
{
	if (func_47(0))
	{
		func_40(11);
	}
	if (func_41(11))
	{
		if (!MISC::IS_BIT_SET(Local_268.f_1, 2))
		{
			func_46("LW_PLAY", -1);
		}
		if (!func_47(0))
		{
			func_79(11);
		}
	}
}

bool func_850()
{
	return Local_105 != func_8();
}

void func_851()
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_268.f_424))
	{
		AUDIO::STOP_SOUND(Local_268.f_424);
		AUDIO::RELEASE_SOUND_ID(Local_268.f_424);
		Local_268.f_424 = -1;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_268.f_426))
	{
		AUDIO::STOP_SOUND(Local_268.f_426);
		AUDIO::RELEASE_SOUND_ID(Local_268.f_426);
		Local_268.f_426 = -1;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_268.f_427))
	{
		AUDIO::STOP_SOUND(Local_268.f_427);
		AUDIO::RELEASE_SOUND_ID(Local_268.f_427);
		Local_268.f_427 = -1;
	}
}

void func_852()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_268.f_72))
	{
		STREAMING::REQUEST_MODEL(func_853());
		if (!STREAMING::HAS_MODEL_LOADED(func_853()))
		{
			return;
		}
		Local_268.f_72 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_853(), func_758(), false, false, true);
		ENTITY::_SET_ENTITY_SOMETHING(Local_268.f_72, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_268.f_72, false);
	}
}

int func_853()
{
	return -945995088;
}

int func_854()
{
	int iVar0;

	iVar0 = 0;
	if (func_857())
	{
		iVar0 = 1;
	}
	if (!func_855(PLAYER::PLAYER_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_CASINO")) < 1)
	{
		iVar0 = 1;
	}
	if (Global_1696907)
	{
		Global_1696907 = 0;
		iVar0 = 1;
	}
	return iVar0;
}

int func_855(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_856(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
		case 146:
			return 19;
		case 147:
			return 20;
	}
	return -1;
}

int func_857()
{
	var uVar0;

	func_864(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_863())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_862())
	{
		return 1;
	}
	if (func_861(159))
	{
		if (!func_860())
		{
			return 1;
		}
	}
	if (func_861(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_858() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_858()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_858()
{
	switch (func_590())
	{
		case 0:
			return func_859();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_859()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

bool func_860()
{
	return Global_2451787.f_696;
}

int func_861(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_862()
{
	return Global_2462250;
}

bool func_863()
{
	return Global_2451787.f_691;
}

void func_864(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_865(iVar0);
					break;
				case 1120313136:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 397890833)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_865(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_629(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

void func_866()
{
	if (func_41(21))
	{
		func_139(1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_853());
	func_793(0);
	func_868();
	func_749();
	func_827(PLAYER::PLAYER_ID(), 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_268.f_23))
	{
		UNK_0x1082C25039B168F8(Local_268.f_23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_268.f_72))
	{
		OBJECT::DELETE_OBJECT(&(Local_268.f_72));
	}
	if (MISC::IS_BIT_SET(Global_1678288.f_6, 4))
	{
		MISC::CLEAR_BIT(&(Global_1678288.f_6), 4);
	}
	func_106(0);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CasinoUI_Lucky_Wheel");
	func_867();
}

void func_867()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_868()
{
	char* sVar0;
	char* sVar1;

	sVar0 = func_156(func_792(PLAYER::PLAYER_ID()));
	sVar1 = func_81();
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_268.f_72, sVar1, sVar0, 3))
	{
		ENTITY::STOP_ENTITY_ANIM(Local_268.f_72, sVar0, sVar1, -8f);
	}
}

void func_869()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_893(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_107, 161);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_105, 2);
	if (!func_892())
	{
		func_866();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_870();
}

void func_870()
{
	func_871(&Local_712);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CasinoUI_Lucky_Wheel", false);
}

void func_871(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(uParam0->f_7, 9))
	{
		iVar0 = 0;
		while (iVar0 <= 89)
		{
			iVar1 = func_891(iVar0, 0);
			if (func_890(iVar1))
			{
				if (!func_889(iVar1))
				{
					if (func_888(iVar1) && func_883(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), iVar1, -1))
					{
						iVar1 = func_882(iVar1);
					}
					if (func_875(iVar1, -1, 0) || func_872(iVar1))
					{
						if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) != 0)
						{
							if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MELEE") || iVar1 == joaat("WEAPON_KNUCKLE"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 0))
								{
									MISC::SET_BIT(&(uParam0->f_4), 0);
									uParam0->f_5++;
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_PISTOL"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 1))
								{
									MISC::SET_BIT(&(uParam0->f_4), 1);
									uParam0->f_5++;
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 30))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26), 30);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_RIFLE"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 3))
								{
									MISC::SET_BIT(&(uParam0->f_4), 3);
									uParam0->f_5++;
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 31))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26), 31);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SHOTGUN") || iVar1 == joaat("WEAPON_MUSKET"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 4))
								{
									MISC::SET_BIT(&(uParam0->f_4), 4);
									uParam0->f_5++;
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 0))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123), 0);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SNIPER") && iVar1 != joaat("WEAPON_MUSKET"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 5))
								{
									MISC::SET_BIT(&(uParam0->f_4), 5);
									uParam0->f_5++;
								}
								if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 5))
								{
									MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123), 5);
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_HEAVY"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 6))
								{
									MISC::SET_BIT(&(uParam0->f_4), 6);
									uParam0->f_5++;
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_THROWN") || iVar1 == joaat("WEAPON_PETROLCAN"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 7))
								{
									MISC::SET_BIT(&(uParam0->f_4), 7);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("WEAPON_STICKYBOMB") || iVar1 == joaat("WEAPON_PROXMINE"))
								{
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 2))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123), 2);
									}
								}
								else if (iVar1 == joaat("WEAPON_GRENADE") || iVar1 == joaat("WEAPON_SMOKEGRENADE"))
								{
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 3))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123), 3);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SMG") || WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MG"))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_4, 2))
								{
									MISC::SET_BIT(&(uParam0->f_4), 2);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("WEAPON_MICROSMG"))
								{
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 1))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123), 1);
									}
								}
								if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MG"))
								{
									if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 4))
									{
										MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123), 4);
									}
								}
							}
						}
						else if ((MISC::GET_FRAME_COUNT() % 60) == 0)
						{
						}
					}
					else if ((MISC::GET_FRAME_COUNT() % 60) == 0)
					{
					}
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_7), 9);
	}
}

int func_872(int iParam0)
{
	if (iParam0 == joaat("WEAPON_MOLOTOV"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) > 0)
			{
				return 1;
			}
		}
	}
	if ((((((iParam0 == joaat("WEAPON_GOLFCLUB") || iParam0 == joaat("WEAPON_CROWBAR")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_SMOKEGRENADE")) || iParam0 == joaat("WEAPON_GRENADE")) || iParam0 == joaat("WEAPON_STICKYBOMB")) && func_21(func_874(iParam0), -1, 0) > 0)
	{
		return 1;
	}
	if (iParam0 == joaat("WEAPON_STONE_HATCHET") && func_873())
	{
		return 1;
	}
	return 0;
}

int func_873()
{
	if (func_67(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_874(int iParam0)
{
	if (func_590() == 0 || func_589() == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return 199;
			case joaat("WEAPON_NIGHTSTICK"):
				return 206;
			case joaat("WEAPON_PISTOL"):
				return 257;
			case joaat("WEAPON_COMBATPISTOL"):
				return 267;
			case joaat("WEAPON_APPISTOL"):
				return 287;
			case joaat("WEAPON_SNSPISTOL"):
				return 1747;
			case joaat("WEAPON_MICROSMG"):
				return 297;
			case joaat("WEAPON_SMG"):
				return 307;
			case joaat("WEAPON_ASSAULTRIFLE"):
				return 326;
			case joaat("WEAPON_CARBINERIFLE"):
				return 335;
			case joaat("WEAPON_SPECIALCARBINE"):
				return 9616;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return 344;
			case joaat("WEAPON_MG"):
				return 353;
			case joaat("WEAPON_COMBATMG"):
				return 362;
			case joaat("WEAPON_PUMPSHOTGUN"):
				return 380;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return 390;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return 408;
			case joaat("WEAPON_STUNGUN"):
				return 418;
			case joaat("WEAPON_SNIPERRIFLE"):
				return 427;
			case joaat("WEAPON_HEAVYSNIPER"):
				return 436;
			case joaat("WEAPON_GRENADELAUNCHER"):
				return 445;
			case joaat("WEAPON_RPG"):
				return 452;
			case joaat("WEAPON_MINIGUN"):
				return 461;
			case joaat("WEAPON_GRENADE"):
				return 469;
			case joaat("WEAPON_SMOKEGRENADE"):
				return 478;
			case joaat("WEAPON_STICKYBOMB"):
				return 486;
			case joaat("WEAPON_MOLOTOV"):
				return 495;
			case joaat("WEAPON_PETROLCAN"):
				return 586;
			case joaat("WEAPON_PISTOL50"):
				return 277;
			case joaat("WEAPON_ASSAULTMG"):
				return 371;
			case joaat("WEAPON_ASSAULTSMG"):
				return 317;
			case joaat("WEAPON_ASSAULTSNIPER"):
				return 439;
			case joaat("WEAPON_HAMMER"):
				return 234;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				return 399;
			case joaat("WEAPON_BOTTLE"):
				return 1737;
			case joaat("WEAPON_HEAVYPISTOL"):
				return 9606;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 9626;
			case joaat("WEAPON_GUSENBERG"):
				return 9636;
			case joaat("GADGET_PARACHUTE"):
				return 583;
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 9919;
			case joaat("WEAPON_DAGGER"):
				return 9909;
			case joaat("WEAPON_MUSKET"):
				return 9939;
			case joaat("WEAPON_FIREWORK"):
				return 9929;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				return 10017;
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 10027;
			case joaat("WEAPON_PROXMINE"):
				return 10043;
			case joaat("WEAPON_HOMINGLAUNCHER"):
				return 10051;
			case joaat("WEAPON_COMBATPDW"):
				return 10061;
			case joaat("WEAPON_KNUCKLE"):
				return 10068;
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 10078;
			case joaat("WEAPON_HATCHET"):
				return 10035;
			case joaat("WEAPON_MACHETE"):
				return 10086;
			case joaat("WEAPON_MACHINEPISTOL"):
				return 10096;
			case joaat("WEAPON_DBSHOTGUN"):
				return 10124;
			case joaat("WEAPON_COMPACTRIFLE"):
				return 10114;
			case joaat("WEAPON_FLASHLIGHT"):
				return 10132;
			case joaat("WEAPON_GOLFCLUB"):
				return 248;
			case joaat("WEAPON_BAT"):
				return 241;
			case joaat("WEAPON_CROWBAR"):
				return 213;
			case joaat("WEAPON_AUTOSHOTGUN"):
				return 10203;
			case joaat("WEAPON_MINISMG"):
				return 10229;
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return 10219;
			case joaat("WEAPON_BATTLEAXE"):
				return 10246;
			case joaat("WEAPON_PIPEBOMB"):
				return 10237;
			case joaat("WEAPON_POOLCUE"):
				return 10247;
			case joaat("WEAPON_WRENCH"):
				return 227;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				return 326;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				return 335;
			case joaat("WEAPON_COMBATMG_MK2"):
				return 362;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				return 436;
			case joaat("WEAPON_PISTOL_MK2"):
				return 257;
			case joaat("WEAPON_SMG_MK2"):
				return 307;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				return 10711;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				return 10731;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				return 10721;
			case joaat("WEAPON_REVOLVER_MK2"):
				return 10741;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				return 10761;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				return 10771;
			case joaat("WEAPON_RAYPISTOL"):
				return 11131;
			case joaat("WEAPON_RAYCARBINE"):
				return 11141;
			case joaat("WEAPON_RAYMINIGUN"):
				return 11151;
			case joaat("WEAPON_NAVYREVOLVER"):
				return 11582;
			case joaat("WEAPON_CERAMICPISTOL"):
				return 11572;
			case -1658906650:
				return 11742;
			case 1470379660:
				return 11732;
			case 94989220:
				return 11722;
		}
	}
	return 486;
}

bool func_875(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == 0)
	{
	}
	if (func_592())
	{
		return false;
	}
	if (func_879() == 0)
	{
		return false;
	}
	if (iParam0 != joaat("GADGET_PARACHUTE") && iParam0 != joaat("WEAPON_RAILGUN"))
	{
		if (func_657(func_878(iParam0), -1))
		{
			return false;
		}
	}
	iVar0 = func_876(iParam0, iParam1);
	iVar1 = func_620(iParam0);
	return MISC::IS_BIT_SET(iVar0, func_586(iVar1));
}

int func_876(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_21(func_877(iParam0), iParam1, 0);
	return iVar0;
}

int func_877(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_620(iParam0);
	iVar1 = func_591(iVar0);
	if ((func_590() == 0 || func_589() == 0) || (func_590() == 999 && func_589() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
			case 1:
				return 800;
			case 2:
				return 2419;
		}
	}
	return 11771;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 18;
		case joaat("WEAPON_GRENADE"):
			return 66;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 68;
		case joaat("WEAPON_STICKYBOMB"):
			return 70;
		case joaat("WEAPON_MOLOTOV"):
			return 72;
		case joaat("WEAPON_PISTOL"):
			return 18;
		case joaat("WEAPON_COMBATPISTOL"):
			return 40;
		case joaat("WEAPON_PISTOL50"):
			return 22;
		case joaat("WEAPON_APPISTOL"):
			return 24;
		case joaat("WEAPON_MICROSMG"):
			return 26;
		case joaat("WEAPON_SMG"):
			return 28;
		case joaat("WEAPON_ASSAULTSMG"):
			return 30;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 32;
		case joaat("WEAPON_CARBINERIFLE"):
			return 34;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 36;
		case joaat("WEAPON_MG"):
			return 38;
		case joaat("WEAPON_ASSAULTMG"):
			return 42;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 44;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 46;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 48;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 50;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 54;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 56;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
		case joaat("WEAPON_RPG"):
			return 62;
		case joaat("WEAPON_MINIGUN"):
			return 64;
		case joaat("WEAPON_STUNGUN"):
			return 52;
		case joaat("WEAPON_PETROLCAN"):
			return 75;
		case joaat("WEAPON_KNIFE"):
			return 2;
		case joaat("WEAPON_NIGHTSTICK"):
			return 4;
		case joaat("WEAPON_HAMMER"):
			return 12;
		case joaat("WEAPON_BAT"):
			return 14;
		case joaat("WEAPON_CROWBAR"):
			return 6;
		case joaat("WEAPON_GOLFCLUB"):
			return 16;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 58;
		case joaat("WEAPON_COMBATMG"):
			return 40;
		case joaat("WEAPON_BOTTLE"):
			return 143;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 302;
		case joaat("WEAPON_SNSPISTOL"):
			return 145;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 300;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 304;
		case joaat("WEAPON_GUSENBERG"):
			return 306;
		case joaat("WEAPON_DAGGER"):
			return 327;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 329;
		case joaat("WEAPON_FIREWORK"):
			return 331;
		case joaat("WEAPON_MUSKET"):
			return 333;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 345;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 347;
		case joaat("WEAPON_PROXMINE"):
			return 351;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 353;
		case joaat("WEAPON_COMBATPDW"):
			return 355;
		case joaat("WEAPON_KNUCKLE"):
			return 357;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 359;
		case joaat("WEAPON_HATCHET"):
			return 349;
		case joaat("WEAPON_MACHETE"):
			return 361;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 363;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 366;
		case joaat("WEAPON_DBSHOTGUN"):
			return 368;
		case joaat("WEAPON_FLASHLIGHT"):
			return 370;
		case joaat("WEAPON_REVOLVER"):
			return 373;
		case joaat("WEAPON_SWITCHBLADE"):
			return 375;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 380;
		case joaat("WEAPON_MINISMG"):
			return 386;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 384;
		case joaat("WEAPON_BATTLEAXE"):
			return 382;
		case joaat("WEAPON_PIPEBOMB"):
			return 388;
		case joaat("WEAPON_POOLCUE"):
			return 390;
		case joaat("WEAPON_WRENCH"):
			return 10;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 32;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 34;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 40;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 56;
		case joaat("WEAPON_PISTOL_MK2"):
			return 18;
		case joaat("WEAPON_SMG_MK2"):
			return 28;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 347;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 44;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 373;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 145;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 302;
		case joaat("WEAPON_DOUBLEACTION"):
			return 414;
		case joaat("WEAPON_STONE_HATCHET"):
			return 420;
		case joaat("WEAPON_RAYPISTOL"):
			return 422;
		case joaat("WEAPON_RAYCARBINE"):
			return 422;
		case joaat("WEAPON_RAYMINIGUN"):
			return 422;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 430;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 428;
		case joaat("WEAPON_HAZARDCAN"):
			return 432;
		case 1470379660:
			return 436;
		case -1658906650:
			return 438;
		case 94989220:
			return 434;
	}
	return 2;
}

int func_879()
{
	if (func_881() && func_880(0))
	{
		return 1;
	}
	return 0;
}

var func_880(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_881()
{
	return func_880(func_18() + 1);
}

int func_882(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return joaat("WEAPON_PISTOL_MK2");
		case joaat("WEAPON_SMG"):
			return joaat("WEAPON_SMG_MK2");
		case joaat("WEAPON_ASSAULTRIFLE"):
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
		case joaat("WEAPON_CARBINERIFLE"):
			return joaat("WEAPON_CARBINERIFLE_MK2");
		case joaat("WEAPON_COMBATMG"):
			return joaat("WEAPON_COMBATMG_MK2");
		case joaat("WEAPON_HEAVYSNIPER"):
			return joaat("WEAPON_HEAVYSNIPER_MK2");
		case joaat("WEAPON_BULLPUPRIFLE"):
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
		case joaat("WEAPON_MARKSMANRIFLE"):
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
		case joaat("WEAPON_PUMPSHOTGUN"):
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
		case joaat("WEAPON_REVOLVER"):
			return joaat("WEAPON_REVOLVER_MK2");
		case joaat("WEAPON_SNSPISTOL"):
			return joaat("WEAPON_SNSPISTOL_MK2");
		case joaat("WEAPON_SPECIALCARBINE"):
			return joaat("WEAPON_SPECIALCARBINE_MK2");
	}
	return 0;
}

bool func_883(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_592())
	{
		return false;
	}
	iVar0 = func_886(iParam0, iParam1, iParam2);
	iVar1 = func_884(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_586(iVar1));
}

int func_884(int iParam0, int iParam1)
{
	return func_885(iParam0, iParam1);
}

int func_885(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case 195735895:
					return 95;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case 1525977990:
					return 99;
				case 1824470811:
					return 100;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			}
			break;
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case -890514874:
					return 105;
				case -507117574:
					return 106;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case -124428919:
					return 109;
				case 1048471894:
					return 110;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			Jump @8840; //curOff = 7290
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			Jump @8840; //curOff = 7780
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			Jump @8840; //curOff = 8090
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			Jump @8840; //curOff = 8580
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			Jump @8840; //curOff = 8605
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			Jump @8840; //curOff = 8660
			switch (iParam0)
			{
				case -971688363:
					return 559;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
			}
			Jump @8840; //curOff = 8712
			switch (iParam0)
			{
				case 759617595:
					return 562;
				case 1749732930:
					return 563;
				case 1803744149:
					return 564;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
			}
			Jump @8840; //curOff = 8812
			switch (iParam0)
			{
				case -1423479223:
					return 558;
			}
			return 0;
		}

int func_886(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_21(func_887(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_887(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_884(iParam0, iParam1);
	iVar1 = func_591(iVar0);
	if ((func_590() == 0 || func_589() == 0) || (func_590() == 999 && func_589() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
			case 1:
				return 688;
			case 2:
				return 689;
			case 3:
				return 690;
			case 4:
				return 1754;
			case 5:
				return 2436;
			case 6:
				return 2828;
			case 7:
				return 5502;
			case 8:
				return 5506;
			case 9:
				return 5510;
			case 10:
				return 5623;
			case 11:
				return 5627;
			case 12:
				return 5631;
			case 13:
				return 5635;
			case 14:
				return 6374;
			case 15:
				return 6497;
			case 16:
				return 6517;
			case 17:
				return 6523;
		}
	}
	return 1754;
}

int func_888(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 1;
		case joaat("WEAPON_COMBATMG"):
			return 1;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 1;
		case joaat("WEAPON_CARBINERIFLE"):
			return 1;
		case joaat("WEAPON_SMG"):
			return 1;
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_SPECIALCARBINE"):
			return 1;
	}
	return 0;
}

int func_889(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 1;
	}
	return 0;
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_HEAVYRIFLE"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_ASSAULTMG"):
		case joaat("WEAPON_ASSAULTSNIPER"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_FIREWORK"):
		case joaat("WEAPON_MUSKET"):
		case -1523701417:
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_SNOWBALL"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MARKSMANPISTOL"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_MACHINEPISTOL"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_PETROLCAN"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_AUTOSHOTGUN"):
		case joaat("WEAPON_MINISMG"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_DOUBLEACTION"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_RAYPISTOL"):
		case joaat("WEAPON_RAYCARBINE"):
		case joaat("WEAPON_RAYMINIGUN"):
		case joaat("WEAPON_NAVYREVOLVER"):
		case joaat("WEAPON_CERAMICPISTOL"):
		case 1470379660:
		case -1658906650:
		case 94989220:
			return 1;
	}
	return 0;
}

int func_891(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return joaat("WEAPON_PISTOL_MK2");
			case 5:
				return joaat("WEAPON_SMG_MK2");
			case 8:
				return joaat("WEAPON_ASSAULTRIFLE_MK2");
			case 9:
				return joaat("WEAPON_CARBINERIFLE_MK2");
			case 13:
				return joaat("WEAPON_COMBATMG_MK2");
			case 21:
				return joaat("WEAPON_HEAVYSNIPER_MK2");
			default:
				break;
		}
		switch (iParam0)
		{
			case 22:
				return joaat("WEAPON_PUMPSHOTGUN_MK2");
			case 46:
				return joaat("WEAPON_SPECIALCARBINE_MK2");
			case 47:
				return joaat("WEAPON_SNSPISTOL_MK2");
			case 56:
				return joaat("WEAPON_MARKSMANRIFLE_MK2");
			case 70:
				return joaat("WEAPON_REVOLVER_MK2");
			case 48:
				return joaat("WEAPON_BULLPUPRIFLE_MK2");
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
		case 1:
			return joaat("WEAPON_PISTOL");
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
		case 3:
			return joaat("WEAPON_APPISTOL");
		case 5:
			return joaat("WEAPON_SMG");
		case 7:
			return joaat("WEAPON_MICROSMG");
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
		case 12:
			return joaat("WEAPON_MG");
		case 13:
			return joaat("WEAPON_COMBATMG");
		case 15:
			return joaat("WEAPON_STICKYBOMB");
		case 16:
			return joaat("WEAPON_GRENADE");
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
		case 60:
			return joaat("WEAPON_PROXMINE");
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
		case 27:
			return joaat("WEAPON_RPG");
		case 28:
			return joaat("WEAPON_MINIGUN");
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
		case 31:
			return joaat("WEAPON_STUNGUN");
		case 33:
			return joaat("GADGET_PARACHUTE");
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
		case 43:
			return joaat("WEAPON_PETROLCAN");
		case 45:
			return joaat("WEAPON_BOTTLE");
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
		case 47:
			return joaat("WEAPON_SNSPISTOL");
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
		case 50:
			return joaat("WEAPON_GUSENBERG");
		case 51:
			return joaat("WEAPON_DAGGER");
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
		case 57:
			return joaat("WEAPON_FLAREGUN");
		case 53:
			return joaat("WEAPON_MUSKET");
		case 54:
			return joaat("WEAPON_FIREWORK");
		case 58:
			return joaat("WEAPON_HATCHET");
		case 59:
			return joaat("WEAPON_RAILGUN");
		case 64:
			return joaat("WEAPON_COMBATPDW");
		case 62:
			return joaat("WEAPON_KNUCKLE");
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
		case 65:
			return joaat("WEAPON_MACHETE");
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
		case 70:
			return joaat("WEAPON_REVOLVER");
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
		case 36:
			return joaat("WEAPON_HAMMER");
		case 4:
			return joaat("WEAPON_PISTOL50");
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
		case 41:
			return joaat("WEAPON_MOLOTOV");
		case 39:
			return joaat("WEAPON_GOLFCLUB");
		case 38:
			return joaat("WEAPON_CROWBAR");
		case 37:
			return joaat("WEAPON_BAT");
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
		case 73:
			return joaat("WEAPON_MINISMG");
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
		case 75:
			return joaat("WEAPON_BATTLEAXE");
		case 76:
			return joaat("WEAPON_PIPEBOMB");
		case 77:
			return joaat("WEAPON_POOLCUE");
		case 78:
			return joaat("WEAPON_WRENCH");
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
		case 81:
			return joaat("WEAPON_RAYPISTOL");
		case 82:
			return joaat("WEAPON_RAYCARBINE");
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
		case 84:
			return joaat("WEAPON_NAVYREVOLVER");
		case 85:
			return joaat("WEAPON_CERAMICPISTOL");
		case 86:
			return 94989220;
		case 88:
			return -1658906650;
		case 87:
			return 1470379660;
	}
	return joaat("WEAPON_UNARMED");
}

int func_892()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_863())
		{
			return 0;
		}
		if (func_861(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_893(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_867();
			}
			else
			{
				return 0;
			}
		}
		if (!func_894())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_867();
					}
					else
					{
						return 0;
					}
				}
				if (func_863())
				{
					if (!bParam2)
					{
						func_867();
					}
					else
					{
						return 0;
					}
				}
				if (func_861(157))
				{
					if (!bParam2)
					{
						func_867();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_867();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_867();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_867();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_894()
{
	return Global_1312872;
}

