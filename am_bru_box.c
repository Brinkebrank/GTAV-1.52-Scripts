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
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_70 = 0;
	vector3 vLocal_71[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	bool bLocal_173 = false;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_234(ScriptParam_0))
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(PLAYER::PLAYER_ID()) != 1 && !MISC::IS_BIT_SET(Global_2540384.f_897.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_226();
		if (func_216())
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(PLAYER::PLAYER_ID()) != 1 && Global_1627097 == 0)
			{
				func_228();
			}
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_173)
		{
			func_228();
		}
		NETWORK::_0x2302C0264EA58D31();
		switch (func_215(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_214())
				{
					if (func_213() == 1)
					{
						vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (func_213() == 4)
					{
						vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			case 1:
				if (func_213() == 1)
				{
					func_187();
				}
				else if (func_213() == 4)
				{
					vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
				{
					if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60.f_3, 500f, 500f, 500f, false, true, 0) && func_227(PLAYER::PLAYER_ID()) != 1) && !MISC::IS_BIT_SET(Global_2540384.f_897.f_7, 0))
					{
						vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			case 3:
				func_185(&(Local_60.f_9));
				if (func_184(&(Local_60.f_9)))
				{
					vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_228();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_213())
			{
				case 0:
					if (func_7())
					{
						Local_60 = 1;
					}
					break;
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_60.f_7 >= 32 && func_227(PLAYER::PLAYER_ID()) == 1)
	{
		if (func_4(Global_2540384.f_897.f_1))
		{
			return 1;
		}
	}
	if (func_3(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_4(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		case 1:
			Local_60.f_8 = 2;
			break;
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (MISC::IS_BIT_SET(vLocal_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!MISC::IS_BIT_SET(Local_60.f_1, 7))
			{
				if (MISC::IS_BIT_SET(vLocal_71[iVar0 /*3*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	struct<35> Var13;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_214())
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				fVar5 = 250f;
				vVar6 = { Local_60.f_3 };
				if (MISC::IS_BIT_SET(Local_60.f_1, 8))
				{
					vVar0 = { Global_2540384.f_897.f_1 };
					fVar3 = Global_2540384.f_897.f_4;
				}
				if (func_227(PLAYER::PLAYER_ID()) == 7)
				{
					iVar12 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
					if (Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_23 > 0f)
					{
						vVar6 = { Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_16 };
						vVar9 = { Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_19 };
						fVar5 = Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_23;
						iVar4 = 1;
					}
					else if (Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_22 > 0f)
					{
						vVar6 = { Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_13 };
						fVar5 = Global_4456448.f_592[iVar12 /*16355*/].f_2153[0 /*36*/].f_22;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_32 = -1082130432;
				Var13.f_34 = 1;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (MISC::IS_BIT_SET(Local_60.f_1, 8) || func_183(vVar6, fVar5, &vVar0, &fVar3, &Var13))
					{
						if (Local_60.f_7 >= 32 || func_227(PLAYER::PLAYER_ID()) == 1)
						{
							Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, true, joaat("PROP_DRUG_PACKAGE_02")));
						}
						else
						{
							Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, true, joaat("PROP_DRUG_PACKAGE_02")));
						}
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_2), fVar3);
					}
				}
				else if (MISC::IS_BIT_SET(Local_60.f_1, 8) || func_8(vVar6, vVar9, fVar5, &vVar0, &fVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_227(PLAYER::PLAYER_ID()) == 1)
					{
						Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, true, joaat("PROP_DRUG_PACKAGE_02")));
					}
					else
					{
						Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, true, joaat("PROP_DRUG_PACKAGE_02")));
					}
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_2), fVar3);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7, float fParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	struct<17> Var0;
	struct<29> Var34;

	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { vParam0 };
	Var34.f_11 = { vParam3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_9(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*fParam8 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, float fParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar86;

	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405074.f_2460 == *uParam0 || !Global_2405074.f_2460.f_1 == uParam0->f_1) || !Global_2405074.f_2460.f_2 == uParam0->f_2) || !Global_2405074.f_2463 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		case 1:
			if (((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		case 2:
			if ((((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2) || !Global_2405074.f_2480 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1312333)
	{
		if (!Global_2405074.f_2481 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_2467) && !Global_2405074.f_2467 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2405074.f_2458 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_2467))
			{
				if (Global_2405074.f_2467 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) < func_182(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) < func_182(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_181();
		}
		Global_2405074.f_2458 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) > func_182(0))
	{
		Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
		func_175();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405074.f_2458)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::_0xFEE4A5459472A9F8();
		func_181();
		if (fParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_174(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, fParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405074.f_2481 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405074.f_2460 = { *uParam0 };
					Global_2405074.f_2463 = uParam0->f_4;
					break;
				case 1:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = 0f;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = uParam0->f_14;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!fParam1->f_8 && !fParam1->f_9)
			{
				func_173(vVar8.x, vVar8.y);
			}
			Global_2405074.f_2459 = 1;
			Global_2405074.f_2458 = 1;
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2464 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2467 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405074.f_2458)
	{
		if (Global_2405074.f_2459 == 1)
		{
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 5000)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				if (fParam1->f_8 || fParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("TAILGATER");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *fParam1 };
					Var26.f_3 = fParam1->f_5;
					Var26.f_11 = fParam1->f_9;
					Var26.f_18 = 1;
					if (fParam1->f_32 > 0f)
					{
						Var26.f_6 = fParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { fParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = fParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = fParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_172(Global_4456448.f_129348))
					{
						Var26.f_9 = 1;
					}
					func_145(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((fParam1->f_7 && fParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_144(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405074.f_2459 = 9;
				}
				else
				{
					Global_2405074.f_2459 = 2;
				}
			}
		}
		if (Global_2405074.f_2459 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar11, vVar14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_141(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405074.f_2459 = 3;
				}
				else
				{
					Global_2405074.f_2459 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2469) > 7000)
			{
				func_140(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405074.f_2459 == 3)
		{
			if (func_139() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 10000)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				Global_2405074.f_2459 = 4;
			}
		}
		if (Global_2405074.f_2459 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_175();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*fParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (fParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (UNK_0x9B02A1F590CDE09E(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *fParam1, iVar0))
							{
								Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
								Global_2405074.f_2459 = 5;
							}
							break;
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &fVar24);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), vVar18, vVar21, fVar24, *fParam1, iVar0))
							{
								Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
								Global_2405074.f_2459 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *fParam1, iVar0))
							{
								Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
								Global_2405074.f_2459 = 5;
							}
							break;
					}
				}
				else
				{
					if (fParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (fParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
					Global_2405074.f_2459 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &fVar24);
							PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, fVar24, iVar0, 2f, 5000);
							break;
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
					}
				}
			}
		}
		if (Global_2405074.f_2459 == 5)
		{
			if (func_64(uParam2, uParam0, fParam1, 0))
			{
				if (Global_2405074.f_2485.f_5)
				{
					Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
					Global_2405074.f_2459 = 6;
				}
				else
				{
					Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*fParam1) == 0f)
						{
							vVar1 = { *fParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405074.f_2459 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 6)
		{
			iVar0 = 0;
			Global_2405074.f_2485.f_1 = 0;
			if (fParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (fParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2459 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &fVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, fVar24, iVar0, 2f, 5000);
					break;
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
			}
		}
		if (Global_2405074.f_2459 == 7)
		{
			if (func_64(uParam2, uParam0, fParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405074.f_2619[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_144(Global_2405074.f_2619[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
									case 1:
										if (func_60(Global_2405074.f_2619[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405074.f_2619[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
								}
							}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&vVar1, 0, 1, 1, 0, uParam0, fParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*fParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *fParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405074.f_2459 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 20000)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405074.f_486))
				{
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_10(uParam2, &(Global_2405074.f_2485.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar86 = false;
				}
				else
				{
					bVar86 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405074.f_2460 };
				func_12(uParam2[0 /*3*/], 0, bVar86, 0, 0, uParam0, fParam1);
			}
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2459 = 9;
		}
		if (Global_2405074.f_2459 == 9)
		{
			Global_2405074.f_2458 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_181();
			return 1;
		}
		Global_2405074.f_2464 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(Vector3* vParam0, bool bParam1, bool bParam2, Vector3* vParam3, bool bParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar64;
	int iVar65;
	bool bVar66;
	int iVar67;
	vector3 vVar68;
	vector3 vVar71;
	vector3 vVar74;
	float fVar77;

	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("TAILGATER");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar67 = 0;
	}
	else
	{
		iVar67 = 16;
	}
	if (!fParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar67 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar68 = { *uParam5 };
						if (func_63(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar68)))
						{
							iVar67 += 4;
						}
						break;
					case 1:
						vVar68 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar68)))
						{
							iVar67 += 4;
						}
						break;
					case 2:
						vVar68 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar68)))
						{
							iVar67 += 4;
						}
						break;
				}
			}
		}
		else
		{
			iVar67 += 4;
		}
	}
	if (func_28(*vParam0, &vVar0, iVar67, vParam3, 1))
	{
	}
	else
	{
		bVar66 = true;
	}
	if (bVar66)
	{
		vVar0 = { *vParam0 };
		Var4 = { *fParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = fParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = vParam3;
		if (fParam6->f_32 > 0f)
		{
			Var4.f_6 = fParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
			}
		}
		iVar65 = 0;
		while (iVar65 < 2)
		{
			Var4.f_38[iVar65 /*3*/] = { fParam6->f_13[iVar65 /*3*/] };
			Var4.f_45[iVar65] = fParam6->f_20[iVar65];
			iVar65++;
		}
		Var4.f_51 = fParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_24(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_145(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar71 = { *uParam5 };
				fVar77 = uParam5->f_4;
				break;
			case 1:
				vVar71 = { uParam5->f_8 };
				vVar74 = { uParam5->f_11 };
				break;
			case 2:
				vVar71 = { uParam5->f_8 };
				vVar74 = { uParam5->f_11 };
				fVar77 = uParam5->f_14;
				break;
		}
		if (!func_23(vVar0, uParam5->f_7, vVar71, vVar74, fVar77))
		{
			if (func_28(*vParam0, &vVar0, iVar67, vParam3, 0))
			{
				if (!func_23(vVar0, uParam5->f_7, vVar71, vVar74, fVar77))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar71 + vVar74 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar71 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar64, false, false))
					{
						vVar0.f_2 = uVar64;
					}
				}
			}
			else if (func_13(vParam0, 1, 1, 1, 1))
			{
				func_12(vParam0, bParam1, bParam2, vParam3, bParam4, uParam5, fParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar71 + vVar74 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar71 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar64, false, false))
				{
					vVar0.f_2 = uVar64;
				}
			}
		}
	}
	*vParam0 = { vVar0 };
	Global_2405074.f_662 = 1;
}

int func_13(Vector3* vParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409990[iVar0 /*17*/].f_16))
			{
				if (func_22(*vParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409990[iVar0 /*17*/].f_12)
						{
							*vParam0 = { Global_2409990[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *vParam0 };
							func_14(&vVar1, &(Global_2409990[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_13(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *vParam0 };
								func_14(&vVar1, &(Global_2409990[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
							}
							*vParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_14(Vector3* vParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*vParam0 = { func_21(*vParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, fParam3) };
				break;
			case 1:
				*vParam0 = { func_21(*vParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, fParam3) };
				break;
			case 2:
				*vParam0 = { func_21(*vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, fParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(vParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, fParam3, 0);
				break;
			case 1:
				func_18(vParam0, *uParam1, uParam1->f_3, fParam2, fParam3);
				break;
			case 2:
				func_15(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, fParam3);
				break;
		}
	}
}

void func_15(Vector3* vParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;

	vVar0 = { vParam4 - vParam1 };
	vVar0.f_2 = 0f;
	vVar3 = { *vParam0 - vParam1 };
	vVar3.f_2 = 0f;
	vVar6 = { func_17(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_16(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *vParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.f_2 = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *vParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_16(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *vParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *vParam0, vParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *vParam0, vParam0->f_1, 0f))
		{
			*vParam0 = { vVar10 };
		}
		else
		{
			*vParam0 = { vVar13 };
		}
	}
}

float func_16(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_18(Vector3* vParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { *vParam0 };
	fVar3 = (*vParam0 - Param1);
	fVar4 = (*vParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (vParam0->f_1 - Param1.f_1);
	fVar7 = (vParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *vParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.f_1 = (Param1.f_1 - fParam7);
	}
	*vParam0 = { vVar0 };
}

void func_19(Vector3* vParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { *vParam0 - vParam1 };
	vVar0.f_2 = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_20(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_20(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*vParam0 = vVar3.x;
	vParam0->f_1 = vVar3.y;
}

void func_20(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, float fParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_19(&vParam0, vParam3, fParam9, fParam11, fParam12, 0);
			break;
		case 1:
			func_18(&vParam0, vParam3, vParam6, fParam11, fParam12);
			break;
		case 2:
			func_15(&vParam0, vParam3, vParam6, fParam9, fParam11, fParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_144(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_60(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam3, vParam6, fParam9, false, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_22(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_144(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405074.f_2728) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_60(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, false) && !(vParam0.z < iParam3->f_2 && vParam0.z < iParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, false) && !(vParam0.z > iParam3->f_2 && vParam0.z > iParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_23(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		case 1:
			return func_60(vParam0, vParam4, vParam7, 0, 0);
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, false, true);
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_27())
			{
				return func_25(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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

int func_26(int iParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return -1;
}

int func_28(vector3 vParam0, Vector3* vParam3, int iParam4, Vector3* vParam5, Vector3* vParam6)
{
	if (func_59(vParam0, vParam3))
	{
		if (func_29(vParam0, vParam3, vParam5, vParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, false, vParam3, iParam4))
	{
		if (func_29(vParam0, vParam3, vParam5, vParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(vector3 vParam0, Vector3* vParam3, int iParam4, int iParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;

	fVar0 = SYSTEM::VDIST(vParam0, *vParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_45(Global_2405074.f_509, vParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_33(*vParam3, 1056964608 /* Float: 0.5f */))
			{
				if (!func_30(vParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(Vector3* vParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { *vParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar4])
	{
		if (func_31(vVar1, &(Global_2410195[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410195[iVar4 /*141*/][iVar0 /*7*/], Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*vParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_31(vVar1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410195[8 /*141*/][iVar0 /*7*/], Global_2410195[8 /*141*/][iVar0 /*7*/].f_3, Global_2410195[8 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*vParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(vector3 vParam0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_32(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411475[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411475[1])
	{
		if (Param0 < Global_2411479[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411475[2])
	{
		if (Param0 < Global_2411479[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411479[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411479[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_33(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_42(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_34(vParam0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, iParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_4794 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_4794)
			{
				if (Global_4718592.f_4797[iVar0 /*280*/].f_15 != 0)
				{
					if (func_34(vParam0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_58904 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_58904)
			{
				if (Global_4718592.f_58908[iVar0 /*339*/].f_12 != 0)
				{
					if (func_34(vParam0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969055.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969055.f_233[iVar0], false))
				{
					if (func_34(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969055.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969055.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969055.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969055.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969055.f_119[iVar0], false))
				{
					if (func_34(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969055.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969055.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969055.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_34(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_41(iParam7, 1008981770 /* Float: 0.01f */))
	{
		func_35(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, iParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(vector3 vParam0, float fParam3, int iParam4, var uParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_36(iParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*fParam7 = MISC::ABSF((vVar6.x - vVar3.x));
}

void func_36(int iParam0, Vector3* vParam1, Vector3* vParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, vParam1, vParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, vParam1, vParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
			return;
		}
	}
	if (SYSTEM::VMAG(*vParam1) <= 0.01f || SYSTEM::VMAG(*vParam2) <= 0.01f)
	{
		if (iParam0 == 1336872304)
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*vParam1 = (0f - (fParam4 * 0.5f));
		*vParam2 = (0f + (fParam4 * 0.5f));
		vParam1->f_1 = (0f - (fParam3 * 0.5f));
		vParam2->f_1 = (0f + (fParam3 * 0.5f));
		vParam1->f_2 = (0f - (fParam5 * 0.5f));
		vParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_37(int iParam0, Vector3* vParam1, Vector3* vParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_38(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315831[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315835[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315842[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315835[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315842[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315849[iVar0] = (Global_1315842[iVar0 /*3*/] - Global_1315835[iVar0 /*3*/]);
		Global_1315852[iVar0] = (Global_1315842[iVar0 /*3*/].f_1 - Global_1315835[iVar0 /*3*/].f_1);
		Global_1315855[iVar0] = (Global_1315842[iVar0 /*3*/].f_2 - Global_1315835[iVar0 /*3*/].f_2);
		if (Global_1315849[iVar0] > Global_1315858)
		{
			Global_1315858 = Global_1315849[iVar0];
		}
		if (Global_1315855[iVar0] > Global_1315859)
		{
			Global_1315859 = Global_1315855[iVar0];
		}
		iVar0++;
	}
	Global_1315860 = (Global_1315858 * -0.5f);
	Global_1315863 = (Global_1315858 * 0.5f);
	Global_1315860.f_1 = ((((0.5f * Global_1315852[0]) + Global_1315852[1]) + Global_1315831.f_3) * -1f);
	Global_1315863.f_1 = (0.5f * Global_1315852[0]);
	Global_1315860.f_2 = (Global_1315855[0] * -0.5f);
	Global_1315863.f_2 = (Global_1315855[0] * 0.5f);
	*vParam1 = { Global_1315860 };
	*vParam2 = { Global_1315863 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

bool func_44(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_45(vector3 vParam0, Vector3* vParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_52(vParam0))
	{
		if (func_13(vParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_47(vParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_46(*vParam3, 1056964608 /* Float: 0.5f */))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *bParam4)
	{
		if (SYSTEM::VDIST(*vParam3, *(bParam4[iVar0 /*3*/])) < (*iParam5)[iVar0])
		{
			if (bParam6)
			{
				func_19(vParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405074.f_2730[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(Vector3* vParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_49(*vParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *vParam0 };
			func_14(&vVar2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_49(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *vParam0 };
				func_14(&vVar2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*vParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_48(vector3 vParam0)
{
	float fVar0;

	if (Global_2405074.f_591 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405074.f_588);
		if (fVar0 < Global_2405074.f_591)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(vParam0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1678288.f_482;
}

int func_52(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_56(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_55(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_13(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_53(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_13(&vVar1, 0, 0, 0, 1))
					{
						if (!func_13(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
	}
	return *uParam0;
}

int func_54(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405074.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405074.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_58() != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_30968;
}

int func_59(vector3 vParam0, Vector3* vParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			fVar3 = SYSTEM::VDIST(Global_2405074.f_2257[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*vParam3 = { Global_2405074.f_2257[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_60(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_61(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_61(bool bParam0, var uParam1)
{
	var uVar0;

	if (*bParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *bParam0;
		*bParam0 = uVar0;
	}
	if (bParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = bParam0->f_1;
		bParam0->f_1 = uVar0;
	}
	if (bParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = bParam0->f_2;
		bParam0->f_2 = uVar0;
	}
}

int func_62(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;

	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.f_1 = vParam0.y;
		vVar0.f_1 = vParam3.y;
	}
	else
	{
		vVar3.f_1 = vParam3.y;
		vVar0.f_1 = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.f_2 = vParam0.z;
		vVar0.f_2 = vParam3.z;
	}
	else
	{
		vVar3.f_2 = vParam3.z;
		vVar0.f_2 = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, float fParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (Global_2405074.f_2485.f_1 == 0 && Global_2405074.f_2485 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2405074.f_2485.f_1)))
			{
				case 0:
					func_136(uParam1, fParam2);
					if (!Global_2405074.f_2485.f_2)
					{
						if (fParam2->f_7 && Global_2405074.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
							}
							if (uParam1->f_5 && func_11(Global_2405074.f_486))
							{
								if (!Global_2405074.f_2485.f_5)
								{
									Global_2405074.f_2485.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, fParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, fParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_136(uParam1, fParam2);
					break;
				case 2:
					return 0;
				case 3:
					return 0;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_136(uParam1, fParam2);
					Global_2405074.f_2485.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_136(uParam1, fParam2);
				if (!Global_2405074.f_2485.f_2)
				{
					Global_2405074.f_2485.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_133(Global_2405074.f_552, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90));
	}
	if (fParam2->f_7 && !Global_2405074.f_2485.f_4)
	{
		Global_2405074.f_2485.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, fParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405074.f_2485.f_1 > 0 || Global_2405074.f_2485 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405074.f_2485.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405074.f_2485.f_3)
					{
						iVar4 = Global_2405074.f_2485.f_3 + 1;
					}
					if (iVar4 > (Global_2405074.f_2485.f_1 - 1))
					{
						iVar4 = (Global_2405074.f_2485.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						fVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar4, &fVar5);
					}
					func_72(vVar0, fVar3, uParam1, fParam2, 0, fVar5);
					iVar6++;
					Global_2405074.f_2485.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405074.f_2485.f_1;
		}
		if (Global_2405074.f_2485.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405074.f_2882)
			{
				func_66(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2405074.f_486))
			{
				if (Global_2405074.f_2485.f_2)
				{
					func_10(uParam0, &(Global_2405074.f_2485.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, fParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_10(uParam0, &(Global_2405074.f_2485.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_2485.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, fParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, fParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
		if (uParam1->f_5 && func_11(Global_2405074.f_486))
		{
			if (!Global_2405074.f_2485.f_5)
			{
				Global_2405074.f_2485.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, fParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, fParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_65(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405074.f_2619[(3 - iVar0) /*3*/] = { Global_2405074.f_2619[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405074.f_2619[0 /*3*/] = { vParam0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405074.f_486) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;

	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;

	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_1;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_2 < fVar1 && Global_2408010[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_2;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408010[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(vector3 vParam0, float fParam3, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;

	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (iParam4->f_5)
	{
		if (Global_2405074.f_486 == 1)
		{
			if (MISC::ABSF((Global_2405074.f_509.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (iParam4->f_5)
	{
		if (func_129(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (iParam4->f_5 && iParam4->f_6)
	{
		if (!func_128(vParam0, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (iParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (iParam4->f_5)
	{
		if (!func_127(vParam0, fParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(fParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, fParam5->f_13[iVar11 /*3*/]) > fParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(fParam5->f_23) > 0f && SYSTEM::VMAG(fParam5->f_26) > 0f) && fParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, fParam5->f_23, fParam5->f_26, fParam5->f_29, false, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (iParam4->f_5)
	{
		if (func_121(vParam0, fParam3, iParam4->f_15, func_126(1), iParam4->f_16, 0, 1123024896 /* Float: 120f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1084227584 /* Float: 5f */, 1092616192 /* Float: 10f */, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405074.f_3;
		}
	}
	else if (!func_118(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (iParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_115(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_115(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405074.f_695)
		{
			vVar12 = { Global_2405074.f_509 };
			if (Global_2405074.f_486 == 26)
			{
				vVar12 = { Global_2405074.f_552.f_18 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_52(vVar12))
				{
					if (!func_13(&vParam0, 0, 0, 0, 1) && !func_114(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_114(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_113(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (iParam4->f_5)
	{
		if (!(func_112(PLAYER::PLAYER_ID()) && func_110(PLAYER::PLAYER_ID())))
		{
			if (!func_109(&vParam0, &(Global_2405074.f_2485.f_90), 0, 1065353216 /* Float: 1f */))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (iParam4->f_5)
	{
		if (!func_110(PLAYER::PLAYER_ID()))
		{
			if (!func_108(vParam0, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90), 1073741824 /* Float: 2f */))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_107(vParam0))
	{
		if (iParam4->f_5)
		{
			if (func_11(Global_2405074.f_486))
			{
				if (func_55(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (iParam4->f_5)
	{
		if (func_106(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405074.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (iParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405074.f_695)
		{
			if (!func_47(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_54(vParam0, 1008981770 /* Float: 0.01f */);
		if (iVar16 > -1)
		{
			func_105(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_100(&(Global_2405074.f_45[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(vParam0, 1056964608 /* Float: 0.5f */))
	{
		iVar8 = -1;
	}
	if (fParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (fParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (iParam4->f_5)
	{
	}
	else if (func_99(vParam0, 1, 0, iParam4->f_15, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405074.f_2882 && iParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				fParam5->f_4 = 0;
				iVar4 = 0;
			}
			else
			{
				iVar4 = 1;
			}
			if (iParam4->f_21)
			{
				fVar0 = func_91(vParam0, iParam4->f_18, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_91(vParam0, Global_2405074.f_2460, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405074.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_89(vParam0);
			}
			uVar7 = func_78(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_77(Var25);
			Global_2405074.f_2485.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405074.f_2485.f_6[iVar24 /*10*/])
			{
				if (iParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							fParam5->f_4 = 0;
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						if (iParam4->f_21)
						{
							fVar0 = func_91(vParam0, iParam4->f_18, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_91(vParam0, Global_2405074.f_2460, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_11(Global_2405074.f_486) && iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_89(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405074.f_2485.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_76(Var25, iVar24);
							Global_2405074.f_2485.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405074.f_2485.f_6[iVar24 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/] && fVar0 > Global_2405074.f_2485.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_76(Var25, iVar24);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (iParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405074.f_2485.f_6[iVar24 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/] && fVar3 > Global_2405074.f_2485.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_76(Var25, iVar24);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;

	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	bVar2 = false;
	fVar3 = 1E+13f;
	if (bParam4 && !bParam6)
	{
		if (func_26(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_141(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_75(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((bParam5 || (bParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

void func_76(struct<10> Param0, int iParam10)
{
	struct<10> Var0;

	Var0.f_2 = 1176256410;
	Var0 = { Global_2405074.f_2485.f_6[iParam10 /*10*/] };
	Global_2405074.f_2485.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_76(Var0, iParam10 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;

	Var1.f_2 = 1176256410;
	iVar11 = func_71();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] < iVar11)
		{
			Global_2408010[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] == 0)
		{
			Global_2408010[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408010[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408010[iVar13 /*10*/] = { Param0 };
	}
}

float func_78(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_26(iVar11, 1, 1) || (iParam7 == 1 && func_26(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_80(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_56(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_75(iVar11))
						{
							vVar5 = { func_79(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { NETWORK::_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.f_2 = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.f_2 = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar8, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_87(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_42(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_86(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_42(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_81(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (func_85(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_84(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2515173))
	{
		return 1;
	}
	if (func_82(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_83(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_27();
}

struct<13> func_84(int iParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515173 = { func_84(iParam0) };
		Global_2515186 = { func_84(iParam1) };
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

int func_86(int iParam0, int iParam1, int iParam2)
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

int func_87(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

float func_89(vector3 vParam0)
{
	var uVar0;

	return func_90(vParam0, &(Global_2405074.f_45), &uVar0);
}

float func_90(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405074.f_2728) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_91(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_73(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_78(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_98(), func_96(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_94(vParam0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_56(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_93(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_92(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_73(SYSTEM::VDIST(Global_2405074.f_509, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_92(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;

	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar5, &uVar4, true, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &vVar0);
		*fParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*fParam4 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_93(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 999999.9f;
	if (func_26(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417956.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417956.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_94(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;

	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], false))
			{
				if (func_95(uVar6[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405074.f_2927)
	{
		if (Global_969055.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969055.f_267)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969055.f_152[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_969055.f_152[iVar2], false))
					{
						if (func_95(Global_969055.f_152[iVar2]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_969055.f_152[iVar2], true) };
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return 1;
	}
	if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574973[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574973[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
		}
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574683[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574683[iVar1]))
				{
					case 3:
					case 5:
						return 1;
				}
			}
		}
	}
	return 0;
}

float func_96()
{
	if (func_97())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405074.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_97()
{
	if (Global_2405074.f_45.f_65 && !Global_2405074.f_45.f_301)
	{
		if (!func_87(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_98()
{
	if (func_97())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405074.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_99(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;

	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam8, false))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam9, true)))
	{
		return 1;
	}
	return 0;
}

int func_100(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_104(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		case 1:
			if (func_103(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		case 2:
			if (func_101(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_101(vector3 vParam0, vector3 vParam3, var uParam6, vector3 vParam7, vector3 vParam10, float fParam13)
{
	vector3 vVar0[8];
	int iVar25;

	func_102(vParam0, vParam3, uParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam7, vParam10, fParam13, false, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_102(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (vParam0.z == vParam3.z)
	{
		vParam3.f_2 = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		fVar6 = vParam3.z;
		fVar7 = vParam0.z;
	}
	else
	{
		fVar6 = vParam0.z;
		fVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_103(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12)
{
	vector3 vVar0[8];
	int iVar25;

	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam6, vParam9, fParam12, false, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_104(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	vector3 vVar0[4];
	int iVar13;

	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar13 /*3*/], vParam4, vParam7, fParam10, false, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_105(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { vParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar4])
	{
		if (func_31(vVar1, &(Global_2410195[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410195[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_31(vVar1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410195[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410195[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410195[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_106(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2405074.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405074.f_45.f_56))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405074.f_45.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_107(vector3 vParam0)
{
	switch (Global_2405074.f_2481)
	{
		case 0:
			return func_144(vParam0, Global_2405074.f_2460, Global_2405074.f_2463, 0, 0);
		case 1:
			return func_60(vParam0, Global_2405074.f_2474, Global_2405074.f_2477, 0, 0);
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405074.f_2474, Global_2405074.f_2477, Global_2405074.f_2480, false, true);
	}
	return 0;
}

int func_108(vector3 vParam0, int iParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam3)
	{
		fVar0 = ((iParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(iParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar5, fVar8, false, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_109(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949 /* Float: 0.1f */, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (func_58())
	{
		case 0:
			if (!func_111(iParam0))
			{
				if (Global_1590682[iParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_111(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_112(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405074.f_2619[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(Vector3 vParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_48(*vParam0))
	{
		if (bParam1)
		{
			vVar1 = { *vParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_19(&vVar1, Global_2405074.f_588, Global_2405074.f_591, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_49(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *vParam0 };
				func_19(&vVar1, Global_2405074.f_588, Global_2405074.f_591, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*vParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_115(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_26(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_116(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_141(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_75(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						bVar2 = bParam6;
						if (bParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									bVar2 = bParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_116(iVar1), vParam0, true) <= (bVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != bParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_116(iVar1), vParam0, true) <= (bVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_116(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((func_117() && Global_1590682[iVar0 /*883*/].f_854) && !func_4(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_79(iParam0);
}

var func_117()
{
	return Global_2451787.f_18;
}

int func_118(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_120(vParam0, fParam3, iParam4, fParam5, 0) || func_119(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_119(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(vParam0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_79(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417956.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_26(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_79(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, float fParam13, bool bParam14, float fParam15)
{
	Global_2405074.f_3 = 0;
	if (!func_118(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405074.f_3++;
		if (bParam5)
		{
			if (func_174(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, iParam7, bParam8, fParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_125(vParam0, iParam12))
				{
					Global_2405074.f_3++;
					if (!func_33(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_174(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, iParam7, bParam8, fParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_125(vParam0, iParam12))
				{
					Global_2405074.f_3++;
					if (!func_122(vParam0, bParam3, iParam9, bParam10, 1084227584 /* Float: 5f */))
					{
						Global_2405074.f_3++;
						if (!func_33(vParam0, 1056964608 /* Float: 0.5f */))
						{
							Global_2405074.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (func_174(vParam0, 6f, 5f, 5f, 5f, 0, fParam6, iParam7, bParam8, fParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			if (!func_125(vParam0, iParam12))
			{
				Global_2405074.f_3++;
				if (!func_122(vParam0, bParam3, iParam9, bParam10, iParam11))
				{
					Global_2405074.f_3++;
					if (!func_33(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
		}
	}
	return 0;
}

int func_122(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_124(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_123(func_79(iVar1), vParam0, bParam3, iParam4, bParam5, iParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_123(vector3 vParam0, vector3 vParam3, bool bParam6, float fParam7, bool bParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	bParam6 = (bParam6 * -1f);
	bParam6 = (bParam6 + 360f);
	vVar0.x = SYSTEM::SIN(bParam6);
	vVar0.f_1 = SYSTEM::COS(bParam6);
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.f_2 = vParam3.z;
	vVar3.f_2 = (vVar3.z + fParam9);
	vParam3.f_2 = (vParam3.z + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vVar3, bParam8, false, true);
}

bool func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_125(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_56(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_124(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_79(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(int iParam0)
{
	if ((Global_2405074.f_486 == 9 || Global_2405074.f_486 == 9) || (Global_2405074.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_127(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || bParam8 == 0)
		{
			if (func_26(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_81(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_79(iVar1), vParam0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_141(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_79(iVar1), vParam0, true) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (((func_56(iParam0, 1) || func_132(iParam0)) || func_131(iParam0, 0)) || func_130(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_131(int iParam0, bool bParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (bParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_133(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;

	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_135(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6000[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_6000[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_135(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_135(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_134(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_2412470 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412470, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1, int iParam2)
{
	Global_2412466 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_135(&Global_2412466, uParam1, iParam2 + 1);
	}
}

void func_136(var uParam0, float fParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			if (func_137(Global_2405074.f_2257[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405074.f_2257[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*fParam1) > 0.01f)
				{
					vVar1 = { *fParam1 - Global_2405074.f_2257[iVar0 /*4*/] };
					fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_72(Global_2405074.f_2257[iVar0 /*4*/], fVar4, uParam0, fParam1, 0, uParam0->f_28);
				Global_2405074.f_2485++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405074.f_2882)
	{
		func_66(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
	}
}

int func_137(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_23(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		case 1:
		case 2:
			return func_23(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		default:
			break;
	}
	return 0;
}

void func_138(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, float fParam8)
{
	float fVar0;

	func_61(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*fParam8 = (fVar0 * 0.5f);
}

bool func_139()
{
	return Global_1310987.f_4;
}

void func_140(float fParam0, float fParam1)
{
	func_181();
	func_173(fParam0, fParam1);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_142(-1, 0) == 8;
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

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_143();
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

int func_143()
{
	return Global_1312763;
}

bool func_144(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
}

void func_145(var uParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_167(uParam0, uParam1, vParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			vParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_146(uParam0, uParam1, vParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_146(Vector3* vParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	Vector3* vVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	float fVar34;
	bool bVar35;

	iVar0 = 0;
	if (!SYSTEM::VMAG(vParam2->f_35) > 0f)
	{
		vParam2->f_35 = { *vParam0 };
	}
	if (vParam2->f_15)
	{
		if (func_45(vParam2->f_35, vParam0, &(vParam2->f_38), &(vParam2->f_45), 1, 1))
		{
			vParam2->f_6 = 9999.9f;
			vParam2->f_7 = 9999.9f;
		}
	}
	if (vParam2->f_51)
	{
		vParam2->f_6 = 9999.9f;
	}
	if (vParam2->f_48)
	{
		if (func_166(vParam0, 1))
		{
		}
	}
	if (vParam0->f_2 < -80f)
	{
		vParam2->f_6 = 9999.9f;
		vParam2->f_7 = 9999.9f;
	}
	bVar5 = false;
	bVar10 = true;
	if (vParam2->f_11)
	{
		bVar5 += 2;
		bVar5++;
		bVar10 = false;
	}
	else if (vParam2->f_10 == 0 || (vParam2->f_33 > 0 && vParam2->f_16))
	{
		bVar5++;
		bVar10 = false;
	}
	bVar5 += 4;
	fVar13 = 3f;
	bVar14 = 5f;
	switch (vParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			bVar14 = 5f;
			break;
		case 1:
			fVar13 = 2.75f;
			bVar14 = 7.5f;
			break;
		default:
			fVar13 = 2.5f;
			bVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412480.f_162 = 0;
	Global_2412480.f_163 = 0;
	Global_2412480.f_164 = -99;
	Global_2412480.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412480[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412480.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_39(vParam2->f_34) != 0)
	{
		iVar17 = 3;
		vParam2->f_6 = 9999.9f;
		vParam2->f_7 = 9999.9f;
		vParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*vParam0, (iVar0 * iVar17), &fVar4, &vVar9, bVar5, fVar13, bVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412480.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412480.f_165 = { vVar1 };
			if (((vParam2->f_10 || vParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &iVar7);
				if (SYSTEM::VDIST(vVar1, vParam2->f_35) > vParam2->f_4)
				{
					if (!func_114(&vVar1, 0))
					{
						if ((vParam2->f_13 || iVar7 & 64 == 0) || vParam2->f_33 == 1)
						{
							if (vParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_165(vVar1))
									{
										vVar1 = { func_161(vVar1, &fVar4, vVar9, vParam2->f_9, *vParam2, bVar10, vParam2->f_11, vParam2->f_34, &bVar11, bVar12, 1, vParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_33(vVar1, 5f))
											{
												if (vVar1.z >= (vParam2->f_35.f_2 - vParam2->f_7) || vParam2->f_33 >= 2)
												{
													if (vVar1.z <= (vParam2->f_35.f_2 + vParam2->f_6) || vParam2->f_33 >= 2)
													{
														if (func_160(vVar1, vParam2))
														{
															if ((vParam2->f_48 && !func_166(&vVar1, 0)) || vParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((vParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, vParam2->f_35, vParam2->f_35.f_1, 0f) < vParam2->f_5) || vParam2->f_5 <= 0f) || vParam2->f_33 >= 2)
																	{
																		if ((vParam2->f_12 && !func_156(vVar1, fVar4, vParam2->f_34, PLAYER::PLAYER_ID(), 0, vParam2->f_56)) || !vParam2->f_12)
																		{
																			if (!vParam2->f_15 || !func_45(vParam2->f_35, &vVar1, &(vParam2->f_38), &(vParam2->f_45), 0, 1))
																			{
																				if (vParam2->f_8)
																				{
																					iVar19 = vParam2->f_31;
																					iVar20 = 1;
																					iVar21 = 1;
																					bVar22 = vParam2->f_49;
																					if (!vParam2->f_55)
																					{
																						iVar19 = 0;
																						iVar20 = 0;
																						iVar21 = 0;
																						bVar22 = 1f;
																					}
																					else if (vParam2->f_17)
																					{
																						iVar19 = 0;
																						iVar20 = 0;
																						iVar21 = 0;
																						if (vParam2->f_33 == 1)
																						{
																							bVar22 = (bVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						iVar20 = 1;
																						iVar21 = 1;
																						if (vParam2->f_28)
																						{
																							if (vParam2->f_33 == 1)
																							{
																								bVar22 = (bVar22 * 0.375f);
																							}
																						}
																					}
																					bVar23 = false;
																					if (!func_155(vVar1, fVar4, vParam2->f_34))
																					{
																						if (vParam2->f_3 > 7f)
																						{
																							if (func_174(vVar1, 6f, 1f, 1f, 5f, iVar19, iVar20, iVar21, bVar22, vParam2->f_58, -1, 1, vParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_174(vVar1, 6f, 1f, 1f, 5f, iVar19, iVar20, iVar21, bVar22, vParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(vVar1, fVar4, vParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							bVar23 = true;
																						}
																					}
																					if (bVar23 || vParam2->f_33 >= 2)
																					{
																						if (((vParam2->f_29 || vParam2->f_30) || vParam2->f_52) || vParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (vParam2->f_52)
																							{
																								iVar24 = func_152(vVar1, vParam2->f_54, &fVar25);
																							}
																							if (!vParam2->f_52 || (vParam2->f_52 && iVar24 <= vParam2->f_53))
																							{
																								if (vParam2->f_52)
																								{
																									if (iVar24 < vParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412480.f_162)
																										{
																											Global_2412480[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412480.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412480.f_162 = 0;
																										vParam2->f_53 = iVar24;
																									}
																								}
																								if (vParam2->f_30)
																								{
																									if (Global_2412480.f_162 == 0)
																									{
																										Global_2412480[0 /*3*/] = { vVar1 };
																										Global_2412480.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412480.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, vParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar16 /*3*/], vParam2->f_35))
																												{
																													func_151(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412480.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412480.f_162++;
																									if (Global_2412480.f_162 >= 5)
																									{
																										if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412480[Global_2412480.f_162 /*3*/] = { vVar1 };
																									Global_2412480.f_121[Global_2412480.f_162] = fVar4;
																									Global_2412480.f_162++;
																									if (func_160(vVar1, vParam2))
																									{
																										Global_2412480.f_163++;
																									}
																									if (Global_2412480.f_162 >= 10)
																									{
																										if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*vParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*vParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!vParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412480.f_162 > 0 && ((vParam2->f_29 || vParam2->f_30) || vParam2->f_33 >= 2))
				{
					if (vParam2->f_30)
					{
						*vParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
						{
							func_149(0, vParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412480.f_162);
						if (vParam2->f_18 && vParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412480[0 /*3*/] };
						uVar30 = Global_2412480.f_121[0];
						Global_2412480[0 /*3*/] = { Global_2412480[iVar26 /*3*/] };
						Global_2412480.f_121[0] = Global_2412480.f_121[iVar26];
						Global_2412480[iVar26 /*3*/] = { vVar27 };
						Global_2412480.f_121[iVar26] = uVar30;
						*vParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
				}
				else
				{
					vParam2->f_33++;
					if (vParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_148(iVar15, *vParam0, &iVar0, &vVar1, &fVar4, vParam2, bVar10, vVar9, bVar5, fVar13, bVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!vParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_45(vParam2->f_35, &vVar31, &(vParam2->f_38), &(vParam2->f_45), bVar35, 1) || func_166(&vVar31, bVar35))
						{
							if (!vParam2->f_50)
							{
								vParam2->f_33 = 0;
								vParam2->f_50 = 1;
								*vParam0 = { vVar31 };
								*uParam1 = fVar34;
								vParam2->f_6 = 9999.9f;
								vParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*vParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*vParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			vParam2->f_33++;
			if (vParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_147(&Global_1312061, vParam0, uParam1, *vParam0);
				if (vParam2->f_11)
				{
					vParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412480.f_164 = iVar8;
	}
	return 0;
}

void func_147(var uParam0, Vector3* vParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_118(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*vParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_148(int iParam0, vector3 vParam1, int iParam4, Vector3* vParam5, bool bParam6, Vector3* vParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, vParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*vParam5 = { func_161(*vParam5, bParam6, fParam9, vParam7->f_9, *vParam7, bParam8, vParam7->f_11, vParam7->f_34, &bParam13, 0, 0, vParam7->f_51) };
		if (!func_165(*vParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_149(int iParam0, Vector3* vParam1)
{
	if (!func_160(Global_2412480[iParam0 /*3*/], vParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_150(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_149(iParam0, vParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_149(iParam0 + 1, vParam1);
	}
}

void func_150(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412480[iParam0 /*3*/] = { Global_2412480[iParam0 + 1 /*3*/] };
			Global_2412480.f_121[iParam0] = Global_2412480.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_151(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { Global_2412480[iParam4 /*3*/] };
	fVar3 = Global_2412480.f_121[iParam4];
	Global_2412480[iParam4 /*3*/] = { vParam0 };
	Global_2412480.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412480.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_151(vVar0, fVar3, iParam4 + 1);
		}
	}
}

int func_152(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_80(iVar5))
		{
			vVar1 = { func_79(iVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_153(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_26(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam10) && bParam7) && func_81(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_154(vParam0, iParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), vParam0, iParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_34(vParam0, vParam5, fParam8, iParam9, 1036831949 /* Float: 0.1f */))
	{
		return 1;
	}
	if (Global_1312332 && (iParam4 == 1336872304 || iParam9 == 1336872304))
	{
		func_35(vParam0, fParam3, iParam4, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949 /* Float: 0.1f */);
		func_35(vParam5, fParam8, iParam9, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949 /* Float: 0.1f */);
		if (UNK_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_36(iParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
		vVar20 = { 0f, vVar17.y, 0f };
		func_20(&vVar20, 0f, 0f, fParam3);
		vVar23 = { 0f, vVar14.y, 0f };
		func_20(&vVar23, 0f, 0f, fParam3);
		vVar26 = { (MISC::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
		func_20(&vVar26, 0f, 0f, fParam3);
		vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
		vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
		vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
		vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
		vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
		vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
		vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
		vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_34(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949 /* Float: 0.1f */))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam10)
		{
			if (func_154(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_154(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_154(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_159(vParam0, iParam3, iParam4, iParam5, iParam6) || func_157(vParam0, iParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_157(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_158(vParam0, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_154(vParam0, iParam3, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_41(iParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_41(iParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_159(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam5, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_34(Global_2417956.f_131[iVar0 /*3*/], vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
				else if (func_34(func_79(iVar1), vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_34(Global_2417956.f_131[iVar0 /*3*/], vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_34(func_79(iVar1), vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_160(vector3 vParam0, Vector3* vParam3)
{
	if (vParam3->f_18)
	{
		switch (vParam3->f_26)
		{
			case 0:
				if (func_144(vParam0, vParam3->f_19, vParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			case 1:
				if (func_60(vParam0, vParam3->f_19, vParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3->f_19, vParam3->f_22, vParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_161(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_164(vParam0, *bParam3, vParam6))
			{
				*bParam3 = (*bParam3 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar3, &iVar4);
	if (iVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!iVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_163(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (bParam13 && *bParam12)
		{
			*bParam3 = (*bParam3 + 180f);
			if (*bParam3 > 360f)
			{
				*bParam3 = (*bParam3 + -360f);
			}
		}
		if (*bParam3 <= 90f || *bParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!iVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!iVar4 & 4 == 0 || !iVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!iVar4 & 32 == 0 && iVar4 & 4 == 0) && iVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !iVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_162(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_162(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_164(vParam0, *bParam3, vParam6))
		{
			if (bParam5 || ((iVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*bParam3 = (*bParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *bParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(vParam0, *bParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_162(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_162(iParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_162(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_36(iParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_163(vector3 vParam0)
{
	float fVar0;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_16(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_32(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_31(vParam0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_31(vParam0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_166(Vector3* vParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_144(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_60(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*vParam0 = { func_21(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(Vector3* vParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	var uVar18;

	if (Global_2405074.f_1748 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(vParam2->f_35) > 0f)
		{
			vParam2->f_35 = { *vParam0 };
		}
		if (vParam2->f_15)
		{
			if (func_45(vParam2->f_35, vParam0, &(vParam2->f_38), &(vParam2->f_45), 1, 1))
			{
				vParam2->f_6 = 9999.9f;
				vParam2->f_7 = 9999.9f;
			}
		}
		if (vParam2->f_48)
		{
			if (func_166(vParam0, 1))
			{
				vParam2->f_6 = 9999.9f;
				vParam2->f_7 = 9999.9f;
			}
		}
		if (vParam0->f_2 < -80f)
		{
			vParam2->f_6 = 9999.9f;
			vParam2->f_7 = 9999.9f;
		}
		Global_2412480.f_162 = 0;
		Global_2412480.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2412480[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2412480.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (vParam2->f_30)
		{
			func_170(*vParam0);
		}
		else if (vParam2->f_29)
		{
			func_169();
		}
		else
		{
			func_168();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405074.f_1748)
		{
			iVar2 = Global_2405074.f_2154[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				vVar3 = { Global_2405074.f_1749[iVar2 /*4*/] };
				fVar6 = Global_2405074.f_1749[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar3) > 0f)
				{
					if ((vParam2->f_57 && SYSTEM::VDIST(vVar3, vParam2->f_35) > vParam2->f_4) || vParam2->f_57 == 0)
					{
						if ((vParam2->f_5 > 0f && SYSTEM::VDIST(vVar3.x, vVar3.y, 0f, vParam2->f_35, vParam2->f_35.f_1, 0f) < vParam2->f_5) || vParam2->f_5 <= 0f)
						{
							if ((vParam2->f_12 && !func_156(vVar3, fVar6, vParam2->f_34, PLAYER::PLAYER_ID(), 0, vParam2->f_56)) || !vParam2->f_12)
							{
								if (!vParam2->f_15 || !func_45(vParam2->f_35, &vVar3, &(vParam2->f_38), &(vParam2->f_45), 0, 1))
								{
									if (vParam2->f_8)
									{
										iVar8 = vParam2->f_31;
										iVar9 = 1;
										iVar10 = 1;
										bVar11 = vParam2->f_49;
										if (!vParam2->f_55)
										{
											iVar8 = 0;
											iVar9 = 0;
											iVar10 = 0;
											bVar11 = 1f;
										}
										else if (vParam2->f_17)
										{
											iVar8 = 0;
											iVar9 = 0;
											iVar10 = 0;
											if (vParam2->f_33 == 1)
											{
												bVar11 = (bVar11 * 0.375f);
											}
										}
										else
										{
											iVar9 = 1;
											iVar10 = 1;
											if (vParam2->f_28)
											{
												if (vParam2->f_33 == 1)
												{
													bVar11 = (bVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_155(vVar3, fVar6, vParam2->f_34))
										{
											if (vParam2->f_3 > 7f)
											{
												if (func_174(vVar3, 6f, 1f, 1f, 5f, iVar8, iVar9, iVar10, bVar11, vParam2->f_58, -1, 1, vParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_174(vVar3, 6f, 1f, 1f, 5f, iVar8, iVar9, iVar10, bVar11, vParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(vVar3, fVar6, vParam2->f_34, 1, 1, 0, 0, vParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((vParam2->f_29 || vParam2->f_30) || vParam2->f_52)
											{
												fVar14 = 0f;
												if (vParam2->f_52)
												{
													iVar13 = func_152(vVar3, vParam2->f_54, &fVar14);
												}
												if (!vParam2->f_52 || (vParam2->f_52 && iVar13 <= vParam2->f_53))
												{
													if (vParam2->f_52)
													{
														if (iVar13 < vParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2412480.f_162)
															{
																Global_2412480[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2412480.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2412480.f_162 = 0;
															vParam2->f_53 = iVar13;
														}
													}
													if (vParam2->f_30)
													{
														if (Global_2412480.f_162 == 0)
														{
															Global_2412480[0 /*3*/] = { vVar3 };
															Global_2412480.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2412480.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(vVar3, vParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar7 /*3*/], vParam2->f_35))
																	{
																		func_151(vVar3, fVar6, iVar7);
																		iVar7 = Global_2412480.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 5)
														{
															if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
													else
													{
														Global_2412480[Global_2412480.f_162 /*3*/] = { vVar3 };
														Global_2412480.f_121[Global_2412480.f_162] = fVar6;
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 10)
														{
															if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
												}
											}
											else
											{
												*vParam0 = { vVar3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*vParam0 = { vVar3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412480.f_162 > 0)
		{
			if (vParam2->f_30)
			{
				*vParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
				{
					func_149(0, vParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412480.f_162);
				vVar15 = { Global_2412480[0 /*3*/] };
				uVar18 = Global_2412480.f_121[0];
				Global_2412480[0 /*3*/] = { Global_2412480[iVar0 /*3*/] };
				Global_2412480.f_121[0] = Global_2412480.f_121[iVar0];
				Global_2412480[iVar0 /*3*/] = { vVar15 };
				Global_2412480.f_121[iVar0] = uVar18;
				*vParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
		}
		else
		{
			vParam2->f_33++;
			if (vParam2->f_33 < 2)
			{
				return 0;
			}
			else if (vParam2->f_59 && Global_2405074.f_1748 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_1748);
				*vParam0 = { Global_2405074.f_1749[iVar0 /*4*/] };
				*uParam1 = Global_2405074.f_1749[iVar0 /*4*/].f_3;
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

void func_168()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_1748);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_1748);
		uVar3 = Global_2405074.f_2154[iVar1];
		Global_2405074.f_2154[iVar1] = Global_2405074.f_2154[iVar2];
		Global_2405074.f_2154[iVar2] = uVar3;
		iVar0++;
	}
}

void func_170(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_171(vParam0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_171(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405074.f_1748)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405074.f_1749[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_172(int iParam0)
{
	return iParam0 == 50;
}

void func_173(float fParam0, float fParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405074.f_2468 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405074.f_2466 = 1;
	Global_2405074.f_2469 = NETWORK::GET_NETWORK_TIME();
}

int func_174(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_127(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_115(vParam0, fParam6, iParam7, fParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

void func_175()
{
	func_180();
	func_179();
	func_178();
	func_177();
	func_176();
}

void func_176()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408010[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_177()
{
	struct<10> Var0;
	int iVar10;

	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405074.f_2485.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_178()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405074.f_2485.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_179()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405074.f_2485.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_180()
{
	struct<6> Var0;

	Var0.f_3 = -1;
	Global_2405074.f_2485 = { Var0 };
}

void func_181()
{
	if (Global_2405074.f_2466)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_2468)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405074.f_2466 = 0;
	}
}

int func_182(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_183(vector3 vParam0, float fParam3, var uParam4, float fParam5, float fParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar63;

	if (fParam6->f_5 > (fParam3 - 20f))
	{
		fParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34 = { vParam0 };
	Var34.f_3 = fParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_9(&Var34, fParam6, &Var0))
	{
		if ((fParam6->f_12 > 0f && fParam6->f_7) && fParam6->f_8)
		{
			vVar63 = { vParam0 - Var0[0 /*3*/] };
			if (vVar63.z > fParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = fParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*fParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_184(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_186(uParam0, 0, 0);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
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

void func_187()
{
	switch (vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_212();
			func_210();
			if (func_199())
			{
				func_191();
				func_190();
				func_188(35);
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_190();
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_188(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_189() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
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

int func_189()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_190()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_170))
	{
		HUD::REMOVE_BLIP(&iLocal_170);
	}
}

void func_191()
{
	if (!MISC::IS_BIT_SET(Global_2440049.f_4006, 0))
	{
		MISC::SET_BIT(&(Global_2440049.f_4006), 0);
		func_192();
	}
	else
	{
		MISC::SET_BIT(&(Global_2440049.f_4006), 1);
	}
}

void func_192()
{
	func_193(1188, -1);
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_197(iParam0, func_198(iParam1), 0);
	iVar0++;
	if (!func_196(iParam0))
	{
		func_195(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_194(iParam0, iVar0, iParam1, 1);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_198(iParam2)] = iParam1;
			break;
		case 788:
			Global_1388131[func_198(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388137[func_198(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388143[func_198(iParam2)] = iParam1;
			break;
		case 8727:
			Global_1388149[func_198(iParam2)] = iParam1;
			break;
		case 777:
			Global_1388095[func_198(iParam2)] = iParam1;
			break;
		case 778:
			Global_1388101[func_198(iParam2)] = iParam1;
			break;
		case 779:
			Global_1388107[func_198(iParam2)] = iParam1;
			break;
		case 780:
			Global_1388113[func_198(iParam2)] = iParam1;
			break;
		case 8729:
			Global_1388119[func_198(iParam2)] = iParam1;
			break;
		case 767:
			Global_1388065[func_198(iParam2)] = iParam1;
			break;
		case 768:
			Global_1388071[func_198(iParam2)] = iParam1;
			break;
		case 769:
			Global_1388077[func_198(iParam2)] = iParam1;
			break;
		case 770:
			Global_1388083[func_198(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388089[func_198(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388155[func_198(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388161[func_198(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388167[func_198(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388173[func_198(iParam2)] = iParam1;
			break;
		case 8733:
			Global_1388179[func_198(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388185[func_198(iParam2)] = iParam1;
			break;
		case 7234:
			Global_1388191[func_198(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388197[func_198(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388203[func_198(iParam2)] = iParam1;
			break;
		case 1877:
			Global_2590417[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 2268:
			Global_2590417[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 2930:
			Global_2590417[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3059:
			Global_2590417[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 10138:
			Global_2590566[func_198(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388209[func_198(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388215[func_198(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388221[func_198(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388227[func_198(iParam2)] = iParam1;
			break;
		case 9534:
			Global_1388233[func_198(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388239[func_198(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2590490[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2590490[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2590490[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2590490[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2590490[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2590569[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2590569[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2590569[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2590569[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2590569[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2590585[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2590585[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2590585[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2590585[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3646:
			Global_2590585[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3222:
			Global_2590490[5 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3228:
			Global_2590417[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2590601[func_198(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2590610[func_198(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2590604[func_198(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2590613[func_198(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2590607[func_198(iParam2)] = iParam1;
			break;
		case 3669:
			Global_2590616[func_198(iParam2)] = iParam1;
			break;
		case 3690:
			Global_2590619[func_198(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2590490[6 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3231:
			Global_2590417[5 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3235:
			Global_2590490[7 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 3233:
			Global_2590417[6 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2590490[8 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4021:
			Global_2590417[7 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2590490[9 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4024:
			Global_2590417[8 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2590490[10 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4027:
			Global_2590417[9 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2590490[11 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 4030:
			Global_2590417[10 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2590490[12 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6111:
			Global_2590417[11 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2590490[13 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6169:
			Global_2590417[12 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2590490[14 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6547:
			Global_2590417[13 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2590490[15 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6560:
			Global_2590417[14 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2590490[16 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6563:
			Global_2590417[15 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2590490[17 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 6566:
			Global_2590417[16 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 7284:
			Global_2590417[17 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 7286:
			Global_2590417[18 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 7288:
			Global_2590417[19 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 8011:
			Global_2590417[20 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2590622[func_198(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2590625[func_198(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2590628[func_198(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2590631[func_198(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2590634[func_198(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2590637[func_198(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2590640[func_198(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2590643[func_198(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2590646[func_198(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2590649[func_198(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2590652[func_198(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2590655[func_198(iParam2)] = iParam1;
			break;
		case 8295:
			Global_2590658[func_198(iParam2)] = iParam1;
			break;
		case 8901:
			Global_2590661[func_198(iParam2)] = iParam1;
			break;
		case 8535:
			Global_2590417[21 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2590490[23 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 8976:
			Global_2590417[22 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 8981:
			Global_2590490[24 /*3*/][func_198(iParam2)] = iParam1;
			break;
		case 8979:
			Global_2590417[23 /*3*/][func_198(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

void func_195(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_196(int iParam0)
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

int func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
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

int func_199()
{
	struct<14> Var0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_2))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_2), PLAYER::PLAYER_PED_ID()) && func_209(Local_60.f_2))
			{
				func_208(&(Local_60.f_2));
				if (HUD::DOES_BLIP_EXIST(iLocal_170))
				{
					HUD::REMOVE_BLIP(&iLocal_170);
				}
				if (!func_207(1))
				{
					func_202("ABB_BOXCT");
				}
				Var0.f_2 = 154008137;
				Var0.f_10 = PLAYER::PLAYER_ID();
				Var0.f_3 = uLocal_169;
				func_200(Var0, func_201(1));
				MISC::SET_BIT(&(vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_200(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = -1949011582;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_201(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_26(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || bParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_202(char* sParam0)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_203(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_203(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_206() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_141(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_204(iParam2);
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

int func_204(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_205(iVar0);
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

void func_205(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_206()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1627097 > 0;
		case 2:
			return Global_1627097.f_1 > 0;
		case 3:
			return Global_1627097.f_2 > 0;
		case 4:
			return Global_1627097.f_4 > 0;
		case 5:
			return Global_1627097.f_3 > 0;
		default:
			break;
	}
	return 0;
}

void func_208(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_209(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_210()
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_170))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			iLocal_170 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_2));
			if (func_211())
			{
				HUD::SET_BLIP_SCALE(iLocal_170, 0.85f);
			}
			else
			{
				HUD::SET_BLIP_SCALE(iLocal_170, 1.2f);
			}
			HUD::SET_BLIP_SPRITE(iLocal_170, 403);
			HUD::SET_BLIP_COLOUR(iLocal_170, 2);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_170, "ABB_BLIPN");
		}
	}
}

bool func_211()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_133494, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_133494, 0) || Global_1655243) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

void func_212()
{
	int iVar0;

	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iVar0 = func_197(1190, -1, 0);
		if (!MISC::IS_BIT_SET(iVar0, 14))
		{
			MISC::SET_BIT(&iVar0, 14);
			func_195(1190, iVar0, -1, 1, 0);
		}
	}
}

int func_213()
{
	return Local_60;
}

int func_214()
{
	STREAMING::REQUEST_MODEL(joaat("PROP_DRUG_PACKAGE_02"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("PROP_DRUG_PACKAGE_02")))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	return vLocal_71[iParam0 /*3*/];
}

int func_216()
{
	var uVar0;

	func_223(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_222())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_220(159))
	{
		if (!func_219())
		{
			return 1;
		}
	}
	if (func_220(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	switch (func_58())
	{
		case 0:
			return func_218();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_218()
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

bool func_219()
{
	return Global_2451787.f_696;
}

int func_220(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return Global_2462250;
}

bool func_222()
{
	return Global_2451787.f_691;
}

void func_223(var uParam0)
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
					func_224(iVar0);
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

void func_224(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_26(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_225(iVar4, &bVar5))
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

int func_225(int iParam0, bool bParam1)
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
					*bParam1 = 1;
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

void func_226()
{
	SYSTEM::WAIT(0);
}

int func_227(int iParam0)
{
	return Global_1590682[iParam0 /*883*/];
}

void func_228()
{
	Global_1388305 = -1;
	if (HUD::DOES_BLIP_EXIST(iLocal_170))
	{
		HUD::REMOVE_BLIP(&iLocal_170);
	}
	func_231();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_2))
			{
				func_208(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (MISC::IS_BIT_SET(Local_60.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_230()
{
	Global_2540384.f_897 = 0;
	Global_2540384.f_897.f_1 = { 0f, 0f, 0f };
	Global_2540384.f_897.f_4 = 0f;
	Global_2540384.f_897.f_8 = 0;
	MISC::CLEAR_BIT(&(Global_2540384.f_897.f_7), 0);
}

void func_231()
{
	if (MISC::IS_BIT_SET(iLocal_168, 4))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0.72f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, true);
		PLAYER::SET_MAX_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		func_232(1);
		MISC::CLEAR_BIT(&iLocal_168, 5);
		MISC::CLEAR_BIT(&iLocal_168, 7);
		MISC::CLEAR_BIT(&iLocal_168, 4);
	}
}

void func_232(int iParam0)
{
	char* sVar0;

	sVar0 = func_233(iParam0, 0);
	GRAPHICS::ANIMPOSTFX_STOP(sVar0);
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_234(struct<21> Param0)
{
	func_238(func_239(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_236(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_71, 97);
	if (!func_235())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1388305 = Local_60.f_7;
		Local_60.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (!func_4(Global_2540384.f_897.f_1))
		{
			MISC::SET_BIT(&(Local_60.f_1), 8);
		}
	}
	bLocal_173 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_235()
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
		if (func_222())
		{
			return 0;
		}
		if (func_220(157))
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

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_222())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_220(157))
				{
					if (!bParam2)
					{
						func_229();
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
					func_229();
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
				func_229();
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
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237()
{
	return Global_1312872;
}

void func_238(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_229();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 130:
			return 8;
		case 131:
			return 8;
		case 132:
			return 32;
		case 133:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 134:
			return 32;
		case 135:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 136:
			return 32;
		case 137:
			return 32;
		case 141:
			return 32;
		case 139:
			return 32;
		case 140:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 148:
			return 32;
		case 149:
			return 32;
		case 150:
			return 32;
		case 151:
			return 32;
		case 152:
			return 2;
		case 157:
			return 1;
		case 153:
			return 2;
		case 154:
			return 4;
		case 155:
			return 2;
		case 156:
			return 2;
		case 138:
			return 1;
		case 158:
			return 2;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		case 180:
			return 1;
		case 165:
			return 4;
		case 168:
			return 4;
		case 169:
			return 1;
		case 170:
			return 1;
		case 176:
			return 1;
		case 172:
			return 2;
		case 177:
			return 1;
		case 173:
			return 1;
		case 171:
			return 2;
		case 174:
			return 8;
		case 175:
			return 8;
		case 178:
			return 1;
		case 179:
			return 2;
		case 166:
			return 16;
		case 167:
			return 32;
		default:
			break;
	}
	return 0;
}

