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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
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
	bool bLocal_77 = false;
	int iLocal_78 = 0;
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = false;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	bool bLocal_341 = false;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<414> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	struct<33> Local_839 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 4;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	struct<38> Local_881 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	vector3 vLocal_925[1] = {{ 0f, 0f, 0f } };
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935[3] = { 0, 0, 0 };
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941[2] = { 0, 0 };
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948 = 0;
	var uLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	bool bLocal_966 = false;
	bool bLocal_967 = false;
	bool bLocal_968 = false;
	bool bLocal_969 = false;
	bool bLocal_970 = false;
	bool bLocal_971 = false;
	bool bLocal_972 = false;
	bool bLocal_973 = false;
	bool bLocal_974 = false;
	bool bLocal_975 = false;
	bool bLocal_976 = false;
	bool bLocal_977 = false;
	vector3 vLocal_978 = { 0f, 0f, 0f };
	vector3 vLocal_981 = { 0f, 0f, 0f };
	vector3 vLocal_984 = { 0f, 0f, 0f };
	vector3 vLocal_987 = { 0f, 0f, 0f };
	vector3 vLocal_990 = { 0f, 0f, 0f };
	vector3 vLocal_993 = { 0f, 0f, 0f };
	vector3 vLocal_996 = { 0f, 0f, 0f };
	vector3 vLocal_999 = { 0f, 0f, 0f };
	vector3 vLocal_1002 = { 0f, 0f, 0f };
	vector3 vLocal_1005 = { 0f, 0f, 0f };
	char* sLocal_1008 = NULL;
	vector3 vLocal_1009[24] = "";
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	vector3 vLocal_1015[24] = "";
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	struct<6> Local_1021 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	int iLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	bool bLocal_1033 = false;
	struct<28> Local_1034 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 5;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 1097859072;
	var uLocal_1108 = 1500;
	var uLocal_1109 = 45;
	var uLocal_1110 = 1103626240;
	var uLocal_1111 = 5;
	int iLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_77 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_78 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_929 = joaat("A_M_M_FARMER_01");
	iLocal_930 = joaat("PROP_BOX_WOOD04A");
	iLocal_931 = joaat("PROP_CARDBORDBOX_03A");
	iLocal_932 = joaat("PROP_BARREL_EXP_01A");
	iLocal_950 = 1;
	iLocal_954 = 112;
	vLocal_978 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_981 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_984 = { 144.3291f, -3352.773f, 3.6651f };
	vLocal_987 = { 311.9527f, -3305.613f, 10.6651f };
	vLocal_990 = { 206.636f, -3322.673f, 4.6339f };
	vLocal_993 = { 0f, 0f, 24f };
	vLocal_996 = { 208.786f, -3319.823f, 4.6339f };
	vLocal_999 = { 0f, 0f, 47f };
	vLocal_1002 = { 199.5188f, -3326.201f, 4.78716f };
	vLocal_1005 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_1008 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_1009, "txm12_deal1_7", 24);
	StringCopy(&cLocal_1015, "txm12_deal1_7", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_435(2);
		func_433();
	}
	MISC::SET_MISSION_FLAG(true);
	func_417();
	Local_409.f_102 = 1;
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_409);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)
{
	iParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_7(&(iParam0->f_244));
	iParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_9()
{
	if (func_416(&Local_409))
	{
		func_415(&Local_409);
		if (func_414(&Local_409, 0))
		{
			func_412();
		}
	}
	else
	{
		func_411(&Local_409);
		if (Local_409.f_410 >= 9)
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			func_409();
		}
		func_375(&Local_409, &uLocal_1105);
		if (Local_409.f_410 < 22)
		{
			func_374(&Local_409);
		}
		func_373(&Local_409, &uLocal_958, 0);
		if (Local_409.f_410 > 5 && !MISC::IS_BIT_SET(iLocal_959, 0))
		{
			Local_409.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			MISC::SET_BIT(&iLocal_959, 0);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_372(&Local_409))
			{
				func_339();
			}
			else
			{
				func_330(&Local_409, "Taxi Not Driveable", func_338(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_306(&Local_409, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_3))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_409.f_3, false))
			{
				if (!func_305(&Local_409, 0))
				{
					func_304(&Local_409, 0);
				}
				if (Local_409.f_410 >= 22 || iLocal_933 >= 1)
				{
					bLocal_968 = true;
				}
				func_303(&(Local_839.f_3));
				func_303(&(Local_881.f_3));
				func_302(&iLocal_941);
				func_330(&Local_409, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_299();
				func_298(&Local_409, 16, 4f, 0);
				func_296(&Local_409, vLocal_978, vLocal_981, "TaxiWalter", iLocal_929, 202f, 35f);
				func_294(&Local_409);
				func_293(&Local_409, 1);
				break;
			case 1:
				if (func_291())
				{
					func_290();
					func_289(&(vLocal_925[0 /*3*/]), "TAXI_SC_BN_12", 200);
					func_288(&Local_409, &vLocal_925);
					func_268();
					func_267(&Local_409);
					func_293(&Local_409, 2);
				}
				break;
			case 2:
				Local_409.f_14 = { vLocal_978 };
				Local_409.f_17 = { Local_839 };
				func_293(&Local_409, 3);
				break;
			case 3:
				if (func_262(&Local_409, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_409.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 4, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 0, 0, 2, 0);
					}
					func_261(&Local_409, 1, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_923, Local_409.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_409.f_413, iLocal_923);
					PED::SET_PED_CAN_BE_TARGETTED(Local_409.f_3, false);
					func_293(&Local_409, 5);
				}
				break;
			case 5:
				if (func_235(&Local_409, 0, 1109393408 /* Float: 40f */))
				{
					func_293(&Local_409, 15);
				}
				break;
			case 15:
				if (func_234(&Local_409))
				{
					func_230(&Local_409, 9, 1, 0, 0);
					func_229(&Local_409);
					func_293(&Local_409, 7);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_409.f_2, Local_409.f_4, false))
					{
						func_227(&Local_409);
						func_293(&Local_409, 5);
					}
				}
				break;
			case 7:
				if (MISC::IS_BIT_SET(iLocal_959, 0))
				{
					func_226();
					func_293(&Local_409, 9);
				}
				break;
			case 9:
				func_210();
				if ((func_209(Local_409.f_4, Local_409.f_17, 1) < 675f && !Local_409.f_140) && !bLocal_966)
				{
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_984, vLocal_987, false, true);
					PED::SET_PED_NON_CREATION_AREA(vLocal_984, vLocal_987);
					iLocal_947 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_984, vLocal_987, false, true, true, true);
					MISC::CLEAR_AREA_OF_PEDS(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_208(&Local_409);
					func_206(&uLocal_1064);
					func_205(&Local_1034, 3, 0);
					func_230(&Local_409, 97, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_409.f_2, joaat("WEAPON_COMBATPISTOL"), 200, true, true);
					bLocal_966 = true;
				}
				if (func_174(&Local_409, 16f, 1097859072 /* Float: 15f */, 1117782016 /* Float: 80f */))
				{
					HUD::REMOVE_BLIP(&(Local_409.f_9));
					func_173(&uLocal_1105, 4);
					func_173(&uLocal_1105, 8);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					SYSTEM::SETTIMERA(0);
					func_293(&Local_409, 22);
				}
				if (func_209(Local_409.f_4, Local_409.f_17, 1) < 10f && func_172(Local_409.f_4, Local_839.f_3[1], 1) < 10f)
				{
					if (func_168(&Local_409, 1, 1084227584 /* Float: 5f */))
					{
						HUD::REMOVE_BLIP(&(Local_409.f_9));
						func_166(1, 0);
						func_166(2, 0);
						func_166(3, 0);
						func_166(4, 0);
						func_166(5, 0);
						func_166(0, 1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
						SYSTEM::SETTIMERA(0);
						func_293(&Local_409, 22);
					}
				}
				if (!bLocal_970)
				{
				}
				if (!bLocal_970)
				{
					if (bLocal_971)
					{
						if ((((((((((PED::IS_PED_INJURED(Local_839.f_3[0]) || PED::IS_PED_INJURED(Local_839.f_3[1])) || PED::IS_PED_INJURED(Local_839.f_3[2])) || PED::IS_PED_INJURED(Local_839.f_3[3])) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[2], 0, 2))) || func_172(PLAYER::PLAYER_PED_ID(), Local_839.f_3[1], 1) < 6f)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[0], iLocal_923);
							func_303(&(Local_839.f_3));
							func_302(&iLocal_941);
							func_330(&Local_409, "Aggro Heard Shot", 8);
							bLocal_970 = true;
						}
					}
				}
				break;
			case 22:
				if (func_165(Local_409.f_3, 1) < 250f)
				{
					if (func_126())
					{
						func_124(&uLocal_1105, 1);
						func_124(&uLocal_1105, 16);
						func_124(&uLocal_1105, 32);
						func_230(&Local_409, 100, 1, 0, 0);
						if (!PED::IS_PED_INJURED(Local_409.f_3) && !PED::IS_PED_INJURED(Local_409.f_2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_409.f_3);
							TASK::TASK_GO_TO_ENTITY(Local_409.f_3, Local_409.f_2, 20000, 6f, 2f, 2f, 0);
						}
						SYSTEM::SETTIMERA(0);
						Local_409.f_114 = 0;
						func_293(&Local_409, 24);
					}
				}
				else
				{
					func_330(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			case 24:
				if (func_165(Local_409.f_2, 1) < 7f && SYSTEM::TIMERA() > 3000)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_409.f_3, Local_409.f_2, -1, 2048, 4);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_934);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_934);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_409.f_2, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_934);
					TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, iLocal_934);
					Local_409.f_56 = 50;
					func_122(&Local_409);
					func_118(&Local_409);
					func_117(&Local_409);
					if (iLocal_957 == 8)
					{
						func_116(&Local_409, 0);
					}
					func_293(&Local_409, 27);
				}
				else if (func_165(Local_409.f_3, 1) > 100f)
				{
					func_330(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			case 27:
				if ((!func_115() && !ENTITY::IS_ENTITY_DEAD(Local_409.f_3, false)) && func_113(&Local_409, 19) > 2f)
				{
					func_112(&Local_409, 19, 0);
					func_293(&Local_409, 29);
					if (MISC::CREATE_INCIDENT(5, vLocal_1005, 1, 0f, &iLocal_948, 0, 0))
					{
						MISC::_SET_INCIDENT_UNK(iLocal_948, 200f);
						bLocal_973 = true;
					}
					if (MISC::CREATE_INCIDENT(7, vLocal_1005, 3, 0f, &uLocal_949, 0, 0))
					{
						bLocal_973 = true;
					}
				}
				break;
			case 29:
				if (func_77(&Local_409, &iLocal_1112))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_3))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_409.f_3, false))
						{
							TASK::CLEAR_PED_TASKS(Local_409.f_3);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_934);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_934);
							TASK::TASK_SMART_FLEE_COORD(0, Local_409.f_17, 500f, 30000, false, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 0.25f, false, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 0.25f, false, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 0.25f, false, 40000f);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_934);
							TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, iLocal_934);
							PED::SET_PED_KEEP_TASK(Local_409.f_3, true);
						}
					}
					func_11(1, &Local_409, 0);
					SYSTEM::SETTIMERA(0);
					func_293(&Local_409, 30);
				}
				break;
			case 30:
				if (func_10(PLAYER::PLAYER_PED_ID(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_433();
				}
				else if (bLocal_973)
				{
					iLocal_946 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(vLocal_1005, 40f, joaat("AMBULANCE"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_946, false))
					{
						bLocal_974 = true;
					}
					iLocal_946 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(vLocal_1005, 40f, joaat("POLICE"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_946, false))
					{
						bLocal_974 = true;
					}
					iLocal_944 = PED::GET_RANDOM_PED_AT_COORD(vLocal_1005, 10f, 10f, 5f, -1);
					if (!PED::IS_PED_INJURED(iLocal_944))
					{
						bLocal_974 = true;
					}
					if (bLocal_974 || SYSTEM::TIMERA() > 30000)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						func_433();
					}
				}
				else
				{
					func_433();
				}
				break;
		}
	}
}

float func_10(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(iParam1);
		if (!PED::IS_PED_INJURED(iParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam1->f_3, 317, true);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_12(iParam1, bParam2);
}

void func_12(int iParam0, bool bParam1)
{
	func_415(iParam0);
	if (func_115())
	{
		func_49();
	}
	func_47();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_42(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iParam0->f_4);
	}
	func_39(iParam0->f_14, 1);
	func_37(iParam0->f_14, 1, 1114636288 /* Float: 60f */);
	func_36(&(iParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_33())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_23(0, 1, 1, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::DESTROY_CAM(*iParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_22(Global_111638.f_19092, 4))
	{
		func_124(&(Global_111638.f_19092), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_21(), false);
	}
	if (bParam1)
	{
		func_20(iParam0);
	}
	func_19(iParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_17(iParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_13(&iLocal_90) * 1000f)), 12, 0);
}

float func_13(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_15(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

bool func_16(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;

	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
{
	struct<8> Var0;

	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(int iParam0)
{
	VEHICLE::_REMOVE_SPEED_ZONE(iParam0->f_51[0]);
}

void func_20(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(iParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iParam0->f_413, joaat("PLAYER"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("TAXI");
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_32(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_31())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, bParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_32(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_30(0, bParam3, bParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76620 = 0;
	}
}

bool func_24()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_30(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPCAMERA")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPINTERNET")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(vector3 vParam0, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_38(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_38(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.f_2 = (vVar0.z - 22f);
	vVar3.f_2 = (vVar3.z + 22f);
	if (!bParam3)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar0, vVar3, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_38(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_39(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_40(vParam0, func_41(), 0))
	{
		vVar0 = { func_38(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_38(vParam0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar3, bParam3, true);
	}
}

bool func_40(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_41()
{
	vector3 vVar0;

	return vVar0;
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_45())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
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
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_46()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_47()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_48(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_49()
{
	Global_19671 = 0;
	func_50();
}

void func_50()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_52("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_52("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
			break;
		case 6:
			if (iParam1 == 0)
			{
				Global_111638.f_19092.f_22[6]++;
			}
			else
			{
				Global_111638.f_19092.f_22[6] = (Global_111638.f_19092.f_22[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
			break;
		case 7:
			if (iParam1 > 0)
			{
				Global_111638.f_19092.f_22[7] = (Global_111638.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111638.f_19092.f_22[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)
{
}

void func_53(int iParam0)
{
	func_51(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_435(1);
		func_63(15, 1);
	}
	func_173(&(Global_111638.f_19092), 1024);
	if (!func_22(Global_111638.f_19092, 64))
	{
		func_54(func_61(func_62(iParam0)), 0, 0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_60((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_55();
	}
}

void func_55()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), true);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_111381, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_111383, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_59(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_58() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()
{
	if (func_57(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

int func_58()
{
	return Global_30768;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

bool func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

	if (iParam2 == -1)
	{
		iParam2 = func_27();
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
	return bVar0;
}

int func_61(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 2:
			iVar0 = 201;
			break;
		case 3:
			iVar0 = 202;
			break;
		case 4:
			iVar0 = 203;
			break;
		case 5:
			iVar0 = 204;
			break;
		case 6:
			iVar0 = 205;
			break;
		case 7:
			iVar0 = 206;
			break;
		case 8:
			iVar0 = 207;
			break;
		case 9:
			break;
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_62(int iParam0)
{
	return iParam0->f_411;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)
{
	if (func_76(14) && !func_75(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_74(&Global_4270065))
	{
		if (func_72(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	func_68(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_66(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_67(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_67(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_68(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
	func_70(uParam0, (Global_4270064 - 0.5f));
}

void func_69(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_70(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_71(var uParam0)
{
	return uParam0->f_80;
}

bool func_72(var uParam0, int iParam1)
{
	return func_73(uParam0, iParam1) != -1;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_74(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
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
		default:
			break;
	}
	return 0;
}

bool func_76(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_77(int iParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_115() && func_113(iParam0, 0) > 1f)
			{
				if (func_33())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_111(iParam0);
				func_124(&(Global_111638.f_19092), 4096);
				func_108(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_110(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_107(1);
				iLocal_168 = 6;
			}
			break;
		case 6:
			if (!func_101(iParam1, 0))
			{
				func_78(iParam0);
				func_298(iParam0, 0, 0, 0);
				func_107(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_78(int iParam0)
{
	int iVar0;

	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_79(func_99(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_80(func_98(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_97();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_96(99, 1);
					func_95(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_95(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_95(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_94(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
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
					switch (iParam0)
					{
						case 0:
							func_95(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				case 1:
					func_96(97, iParam3);
					break;
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_83(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_83(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_95(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_95(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_95(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_82(iParam0);
	if (Global_41431 == 15)
	{
		func_81(0);
	}
	return 1;
}

void func_81(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	int iVar0;

	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_83(int iParam0)
{
	bool bVar0;
	char cVar1[64];

	if (iParam0 == 8)
	{
		func_60(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_60(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_60(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_60(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_86(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_86(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_86(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_86(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_86(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_86(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_85() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_85() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_84(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_84(int iParam0)
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

int func_85()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_87(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

void func_88(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_89(int iParam0)
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

	if (iParam0 == 8)
	{
		return func_91(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_91(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_91(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_91(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_90(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_90(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_90(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_90(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_90(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_90(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_85() /*10930*/].f_6174.f_10, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_87(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_91(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_93(iParam0, iParam1);
	iVar2 = func_92(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_92(int iParam0)
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
	return iVar0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_27();
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
	return iVar0;
}

int func_94(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;

	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_97()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_98(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_99()
{
	func_100();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_100()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_76(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

int func_101(int iParam0, int iParam1)
{
	if (!func_16(&(iParam0->f_2)))
	{
		func_105(&(iParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iParam0->f_8)
		{
			if (!func_16(&(iParam0->f_5)))
			{
				func_105(&(iParam0->f_5));
				func_104(iParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_16(&(iParam0->f_5)))
		{
			if (func_103(&(iParam0->f_5)) > 0.33f)
			{
				func_102(&(iParam0->f_5));
				return 0;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_103(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_16(&(iParam0->f_5)))
		{
			func_105(&(iParam0->f_5));
			func_104(iParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_103(&(iParam0->f_5)) > 0.33f)
		{
			func_102(&(iParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_102(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_103(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_104(int iParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_105(int* iParam0)
{
	func_106(iParam0, 0f);
}

void func_106(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_107(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, func_109());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_105(&(iParam0->f_2));
	iParam0->f_1 = iParam8;
	iParam0->f_9 = 1;
}

char* func_109()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_110(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_111(int iParam0)
{
	int iVar0;

	Local_169.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_169.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	func_51(11, iParam0->f_56);
	func_51(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (MISC::IS_BIT_SET(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = iParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

void func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_102(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_102(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_113(int iParam0, int iParam1)
{
	if (!func_16(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_114(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_103(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_114(int* iParam0)
{
	if (!func_16(iParam0))
	{
		func_105(iParam0);
	}
}

int func_115()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(iParam0->f_60[iParam1 /*3*/]), 2);
		iParam0->f_105 = (iParam0->f_105 + iParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_117(int iParam0)
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!func_22(iParam0->f_55, 1))
	{
		func_173(&(iParam0->f_55), 1);
	}
}

void func_118(int iParam0)
{
	func_120();
	HUD::CLEAR_PRINTS();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_230(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_230(iParam0, 103, 1, 0, 0);
		}
		func_119(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_230(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_230(iParam0, 102, 1, 0, 0);
	}
	func_298(iParam0, 16, 4f, 0);
}

void func_119(int iParam0)
{
	Global_110348.f_221 = iParam0;
}

void func_120()
{
	Global_19671 = 0;
	func_121();
}

void func_121()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_122(int iParam0)
{
	float fVar0;

	fVar0 = iParam0->f_41;
	fVar0 = func_123(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_51(4, SYSTEM::CEIL(fVar0));
	func_51(5, SYSTEM::CEIL(fVar0));
	iParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_123(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_124(var uParam0, int iParam1)
{
	func_125(uParam0, iParam1);
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_126()
{
	int iVar0;

	if (iLocal_933 < 4 && ((((((((((PED::IS_PED_INJURED(Local_839.f_3[0]) || PED::IS_PED_INJURED(Local_839.f_3[1])) || PED::IS_PED_INJURED(Local_839.f_3[2])) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[2], 0, 2))) || func_172(PLAYER::PLAYER_PED_ID(), Local_839.f_3[1], 1) < 6f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, false, true, 0) && ((((((!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_839.f_3[0])) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_839.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_839.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_839.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_839.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_839.f_3[2]))))))
	{
		Local_409.f_114 = 1;
		iLocal_933 = 4;
	}
	switch (iLocal_933)
	{
		case 0:
			func_230(&Local_409, 90, 1, 0, 0);
			func_205(&Local_1034, -1, 1);
			func_164();
			MISC::CLEAR_BIT(&iLocal_959, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_964))
			{
				if ((!PED::IS_PED_INJURED(Local_839.f_3[0]) && !PED::IS_PED_INJURED(Local_839.f_3[1])) && !PED::IS_PED_INJURED(Local_839.f_3[2]))
				{
					iLocal_964 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_996, vLocal_999, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_964, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[0], iLocal_964, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[1], iLocal_964, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[2], iLocal_964, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
				}
			}
			iLocal_951 = MISC::GET_GAME_TIMER();
			iLocal_933 = 1;
			break;
		case 1:
			if (!func_115() && !MISC::IS_BIT_SET(iLocal_959, 10))
			{
				func_230(&Local_409, 91, 1, 0, 0);
				MISC::SET_BIT(&iLocal_959, 10);
				func_114(&iLocal_1027);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_951) > 4000)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					if (func_163(&Local_409))
					{
						func_162("TAXI_VIEW", -1);
					}
					bLocal_967 = true;
					if ((!PED::IS_PED_INJURED(Local_839.f_3[3]) && !PED::IS_PED_INJURED(iLocal_941[0])) && !PED::IS_PED_INJURED(iLocal_941[1]))
					{
						iLocal_961 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], iLocal_961, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[0], iLocal_961, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[1], iLocal_961, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				}
			}
			if (func_161("TAXI_VIEW") && (PAD::IS_CONTROL_PRESSED(0, 80) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!PED::IS_PED_INJURED(Local_409.f_3) && (!func_115() || func_13(&iLocal_1027) > 9f))
			{
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_409.f_3, vLocal_1002, 1.5f, 1.5f, 2f, false, true, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_409.f_3, 242628503) == 7) && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_964) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_964) > 0.995f))
				{
					if ((!PED::IS_PED_INJURED(Local_839.f_3[0]) && !PED::IS_PED_INJURED(Local_839.f_3[1])) && !PED::IS_PED_INJURED(Local_839.f_3[2]))
					{
						iLocal_965 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_996, vLocal_999, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[0], iLocal_965, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[1], iLocal_965, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[2], iLocal_965, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_965, true);
					}
					TASK::TASK_PLAY_ANIM(Local_409.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -8f, -1, 0, 0f, false, false, false);
					iLocal_953 = MISC::GET_GAME_TIMER();
					iLocal_951 = MISC::GET_GAME_TIMER();
					iLocal_933 = 2;
				}
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_951) > 2500 && !MISC::IS_BIT_SET(iLocal_959, 1))
			{
				func_230(&Local_409, 89, 1, 1, 0);
				MISC::SET_BIT(&iLocal_959, 1);
			}
			if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_965) >= 0.838f && !PED::IS_PED_INJURED(Local_409.f_3)) && !PED::IS_PED_INJURED(Local_839.f_3[1])) && !MISC::IS_BIT_SET(iLocal_959, 6))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_839.f_3[1], joaat("WEAPON_PISTOL"), -1, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_409.f_3, joaat("WEAPON_PISTOL"), -1, true, true);
				MISC::SET_BIT(&iLocal_959, 6);
			}
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_965) >= 0.853f && !PED::IS_PED_INJURED(Local_839.f_3[2])) && !MISC::IS_BIT_SET(iLocal_959, 7))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_839.f_3[2], joaat("WEAPON_PISTOL"), -1, true, true);
				MISC::SET_BIT(&iLocal_959, 7);
			}
			if (!MISC::IS_BIT_SET(iLocal_959, 3))
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_961) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_961) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_961))
				{
					if ((!PED::IS_PED_INJURED(Local_839.f_3[3]) && !PED::IS_PED_INJURED(iLocal_941[0])) && !PED::IS_PED_INJURED(iLocal_941[1]))
					{
						iLocal_962 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], iLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[0], iLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[1], iLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_962, true);
						MISC::SET_BIT(&iLocal_959, 3);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_959, 1))
			{
				Local_1021 = { func_160() };
				if (MISC::ARE_STRINGS_EQUAL(&cLocal_1009, &Local_1021) || MISC::ARE_STRINGS_EQUAL(&cLocal_1015, &Local_1021))
				{
					if ((!PED::IS_PED_INJURED(Local_839.f_3[3]) && !PED::IS_PED_INJURED(iLocal_941[0])) && !PED::IS_PED_INJURED(iLocal_941[1]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_962))
						{
							iLocal_963 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], iLocal_963, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[0], iLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[1], iLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_963, true);
							iLocal_952 = MISC::GET_GAME_TIMER();
							iLocal_933 = 3;
						}
						else
						{
							iLocal_963 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], iLocal_963, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[0], iLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[1], iLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_963, true);
							iLocal_952 = MISC::GET_GAME_TIMER();
							iLocal_933 = 3;
						}
					}
				}
			}
			break;
		case 3:
			switch (iLocal_955)
			{
				case 0:
					if (((MISC::GET_GAME_TIMER() - iLocal_952) > 850 && !PED::IS_PED_INJURED(Local_839.f_3[3])) && !MISC::IS_BIT_SET(iLocal_959, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_839.f_3[3], joaat("WEAPON_PISTOL"), -1, true, true);
						MISC::SET_BIT(&iLocal_959, 8);
					}
					if (((!PED::IS_PED_INJURED(Local_839.f_3[0]) && !PED::IS_PED_INJURED(Local_839.f_3[1])) && !PED::IS_PED_INJURED(Local_839.f_3[2])) && !PED::IS_PED_INJURED(Local_409.f_3))
					{
						PED::SET_PED_RESET_FLAG(Local_839.f_3[0], 156, true);
						PED::SET_PED_RESET_FLAG(Local_839.f_3[1], 156, true);
						PED::SET_PED_RESET_FLAG(Local_839.f_3[2], 156, true);
						PED::SET_PED_RESET_FLAG(Local_409.f_3, 156, true);
						if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_965) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_965) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_965)) || (MISC::GET_GAME_TIMER() - iLocal_953) > 27000)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_953) > 27000)
							{
							}
							bLocal_976 = true;
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[0], Local_409.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[1], Local_409.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[2], Local_409.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_409.f_3, Local_839.f_3[1], -1, false);
							iLocal_951 = 0;
							iLocal_955++;
						}
					}
					break;
				case 1:
					if (((MISC::GET_GAME_TIMER() - iLocal_952) > 850 && !PED::IS_PED_INJURED(Local_839.f_3[3])) && !MISC::IS_BIT_SET(iLocal_959, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_839.f_3[3], joaat("WEAPON_PISTOL"), -1, true, true);
						MISC::SET_BIT(&iLocal_959, 8);
					}
					if (!PED::IS_PED_INJURED(Local_839.f_3[3]))
					{
						PED::SET_PED_RESET_FLAG(Local_839.f_3[3], 156, true);
					}
					if (!MISC::IS_BIT_SET(iLocal_959, 4))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_963) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_963) == 1f)
						{
							if (((!PED::IS_PED_INJURED(Local_839.f_3[3]) && !PED::IS_PED_INJURED(iLocal_941[0])) && !PED::IS_PED_INJURED(iLocal_941[1])) && !PED::IS_PED_INJURED(Local_409.f_3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_941[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 0.25f, false, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_941[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 0.25f, false, 40000f);
								PED::FORCE_PED_MOTION_STATE(iLocal_941[0], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_941[1], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[3], Local_409.f_3, -1, true);
								MISC::SET_BIT(&iLocal_959, 4);
							}
						}
					}
					Local_1021 = { func_160() };
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Local_1021) && iLocal_951 == 0)
					{
						iLocal_951 = MISC::GET_GAME_TIMER();
					}
					else if ((iLocal_951 > 0 && (MISC::GET_GAME_TIMER() - iLocal_951) > 1500) && !MISC::IS_BIT_SET(iLocal_959, 9))
					{
						func_159();
						func_158("TAXI_OBJ_GYB", 4000, 0);
						func_157(&(Local_839.f_3), &(Local_839.f_11));
						bLocal_967 = false;
						CAM::DESTROY_CAM(Local_409, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						iLocal_951 = MISC::GET_GAME_TIMER();
						iLocal_955 = 2;
						MISC::SET_BIT(&iLocal_959, 9);
					}
					else if (iLocal_951 > 0 && (MISC::GET_GAME_TIMER() - iLocal_951) > 1200)
					{
						if (func_156() && CAM::IS_CAM_ACTIVE(Local_409))
						{
							if (!bLocal_977)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								bLocal_977 = true;
							}
						}
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_951) > 4000 && MISC::IS_BIT_SET(iLocal_959, 9))
					{
						func_141(&(Local_409.f_244), Local_409.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_951 = MISC::GET_GAME_TIMER();
						MISC::CLEAR_BIT(&iLocal_959, 9);
					}
					if ((((!PED::IS_PED_INJURED(Local_409.f_3) && !PED::IS_PED_INJURED(Local_839.f_3[0])) && !PED::IS_PED_INJURED(Local_839.f_3[2])) && !MISC::IS_BIT_SET(iLocal_959, 9)) && (MISC::GET_GAME_TIMER() - iLocal_951) > 2000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_839.f_3[0], 115, 0);
						ENTITY::SET_ENTITY_HEALTH(Local_839.f_3[2], 115, 0);
						iLocal_951 = MISC::GET_GAME_TIMER();
						iLocal_955 = 8;
					}
					break;
				case 3:
					if (!func_115())
					{
						func_230(&Local_409, 12, 1, 0, 0);
						func_298(&Local_409, 19, 0, 0);
						iLocal_951 = MISC::GET_GAME_TIMER();
						iLocal_955++;
					}
					break;
				case 4:
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_298(&Local_409, 19, 0, 0);
						func_230(&Local_409, 116, 1, 0, 0);
						iLocal_955++;
					}
					break;
				case 5:
				case 6:
				case 7:
					if (func_113(&Local_409, 19) > 2f)
					{
						func_298(&Local_409, 19, 0, 0);
						func_230(&Local_409, 116, 1, 0, 0);
						iLocal_955++;
					}
					break;
				case 8:
					if ((!PED::IS_PED_INJURED(Local_839.f_3[0]) && !PED::IS_PED_INJURED(Local_839.f_3[1])) && !PED::IS_PED_INJURED(Local_839.f_3[2]))
					{
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_923, Local_409.f_413);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_923, Local_409.f_413);
						PED::SET_PED_ACCURACY(Local_839.f_3[0], 100);
						PED::SET_PED_ACCURACY(Local_839.f_3[2], 100);
						TASK::TASK_SHOOT_AT_ENTITY(Local_839.f_3[0], Local_409.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_SHOOT_AT_ENTITY(Local_839.f_3[1], Local_409.f_3, 5000, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::TASK_SHOOT_AT_ENTITY(Local_839.f_3[2], Local_409.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_951 = MISC::GET_GAME_TIMER();
						iLocal_955++;
					}
					break;
				case 9:
					if ((MISC::GET_GAME_TIMER() - iLocal_951) > 5000)
					{
						iLocal_933 = 4;
					}
					break;
			}
			break;
		case 4:
			if (!Local_409.f_114)
			{
				Local_409.f_114 = 1;
			}
			func_173(&uLocal_1105, 1);
			func_173(&uLocal_1105, 16);
			func_173(&uLocal_1105, 32);
			func_159();
			func_138();
			func_137();
			func_303(&(Local_839.f_3));
			func_157(&(Local_839.f_3), &(Local_839.f_11));
			func_302(&iLocal_941);
			iLocal_951 = MISC::GET_GAME_TIMER();
			iLocal_933 = 5;
			break;
		case 5:
			if (iLocal_956 >= 2 && !func_305(&Local_409, 8))
			{
				func_304(&Local_409, 8);
			}
			else if (func_305(&Local_409, 8) && func_113(&Local_409, 8) > 3f)
			{
				func_135();
				func_132();
				iLocal_951 = MISC::GET_GAME_TIMER();
				iLocal_933 = 6;
			}
			else
			{
				iLocal_956 = 0;
			}
			func_130(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11));
			break;
		case 6:
			if ((PED::IS_PED_INJURED(Local_881.f_3[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_881.f_27[0]);
			}
			if ((((PED::IS_PED_INJURED(Local_881.f_3[2]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_881.f_3[2], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_881.f_3[2], Local_409.f_3, true)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[1]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_881.f_27[1]);
			}
			if (HUD::DOES_BLIP_EXIST(Local_881.f_37[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], false))
			{
				HUD::REMOVE_BLIP(&(Local_881.f_37[0]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_881.f_37[1]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], false))
			{
				HUD::REMOVE_BLIP(&(Local_881.f_37[1]));
			}
			if (!bLocal_972 && ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[0])) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[1]))))
			{
				if (func_129(&(Local_881.f_3)))
				{
					func_157(&(Local_881.f_3), &(Local_881.f_11));
					func_128();
					bLocal_972 = true;
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_959, 2))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_951) > 5000)
				{
					func_303(&(Local_881.f_3));
					func_127(&(Local_839.f_3));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_923, Local_409.f_413);
					MISC::SET_BIT(&iLocal_959, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_881.f_3)
				{
					if (!PED::IS_PED_INJURED(Local_881.f_3[iVar0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_881.f_3[iVar0], -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_881.f_3[iVar0], -1442466670) != 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_881.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_409.f_3))
			{
				if (bLocal_975)
				{
					if (!func_115())
					{
						func_230(&Local_409, 140, 1, 0, 1);
					}
					bLocal_975 = false;
				}
			}
			return func_130(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11));
	}
	return 0;
}

void func_127(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_128()
{
	if (HUD::DOES_BLIP_EXIST(Local_881.f_37[0]))
	{
		HUD::REMOVE_BLIP(&(Local_881.f_37[0]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_881.f_37[1]))
	{
		HUD::REMOVE_BLIP(&(Local_881.f_37[1]));
	}
}

int func_129(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iLocal_957 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], false))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam1[iVar0]);
			}
			if (func_131(&Local_409, (*uParam0)[iVar0], 1))
			{
				iLocal_957++;
			}
			iLocal_956++;
		}
		else
		{
			iLocal_957 = 0;
			iVar1 = 0;
		}
		if (ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0], false))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam3)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam3[iVar0]);
				bLocal_975 = true;
			}
			if (func_131(&Local_409, (*uParam2)[iVar0], 1))
			{
				iLocal_957++;
			}
		}
		else
		{
			iLocal_957 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_131(int iParam0, int iParam1, bool bParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_132()
{
	if (!HUD::DOES_BLIP_EXIST(Local_881.f_37[0]) && !HUD::DOES_BLIP_EXIST(Local_881.f_37[1]))
	{
		Local_881.f_37[0] = func_133(Local_881.f_27[0], 0, 0);
		Local_881.f_37[1] = func_133(Local_881.f_27[1], 0, 0);
	}
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_134(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_134(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_134(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_135()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], false))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_881.f_27[0], iLocal_954, func_136(0), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_881.f_27[0], 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], false))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_881.f_27[1], iLocal_954, func_136(1), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_881.f_27[1], 1f);
	}
}

char* func_136(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_137()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_409.f_3))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_409.f_8))
			{
				Local_409.f_8 = func_133(Local_409.f_3, 1, 0);
			}
			WEAPON::GET_CURRENT_PED_WEAPON(Local_409.f_3, &iVar0, true);
			if (iVar0 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_409.f_3, joaat("WEAPON_COMBATPISTOL"), 100, false, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 12, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 24, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 34, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 37, true);
			PED::SET_PED_SEEING_RANGE(Local_409.f_3, 300f);
			PED::SET_PED_HEARING_RANGE(Local_409.f_3, 300f);
			PED::SET_PED_ID_RANGE(Local_409.f_3, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_409.f_3, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(Local_409.f_3, true);
			PED::SET_PED_ACCURACY(Local_409.f_3, 80);
			PED::SET_PED_COMBAT_RANGE(Local_409.f_3, 2);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_409.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, false, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_923, Local_409.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_409.f_413, iLocal_923);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_934);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_934);
			TASK::TASK_SEEK_COVER_FROM_POS(0, 201.9434f, -3324.029f, 4.7888f, 5000, true);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_934);
			TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, iLocal_934);
			PED::SET_PED_KEEP_TASK(Local_409.f_3, true);
		}
	}
}

void func_138()
{
	int iVar0;

	Local_881.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_881.f_32[0], func_140(1), func_139(1), true, true, false);
	Local_881.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_881.f_32[1], func_140(2), func_139(2), true, true, false);
	Local_881.f_3[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[0], 26, Local_881.f_19[0], -1, true, true);
	Local_881.f_3[1] = PED::CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[0], 26, Local_881.f_19[0], 0, true, true);
	Local_881.f_3[2] = PED::CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[1], 26, Local_881.f_19[0], -1, true, true);
	Local_881.f_3[3] = PED::CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[1], 26, Local_881.f_19[0], 0, true, true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_881.f_27[1], "LuisLopz");
	func_8(&(Local_409.f_244), 6, Local_881.f_3[0], "TaxiBruce", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_881.f_3[0], "TaxiBruce");
	WEAPON::GIVE_WEAPON_TO_PED(Local_881.f_3[0], joaat("WEAPON_SMG"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_881.f_3[1], joaat("WEAPON_PISTOL"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_881.f_3[2], joaat("WEAPON_SMG"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_881.f_3[3], joaat("WEAPON_PISTOL"), 100, true, true);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_881.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 37, true);
		PED::SET_PED_CONFIG_FLAG(Local_881.f_3[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(Local_881.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_881.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_881.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_881.f_3[iVar0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_881.f_3[iVar0], iLocal_923);
		PED::SET_PED_ACCURACY(Local_881.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
		case 2:
			return 156.7733f;
	}
	return 0f;
}

Vector3 func_140(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.66f, 4.8352f;
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
	}
	return 0f, 0f, 0f;
}

int func_141(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_142(sParam2, iParam4, 0);
}

int func_142(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_154();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_153(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_152();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_151();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_150())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_149();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_148();
		func_143();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_154();
	}
	return 0;
}

void func_143()
{
	if (!func_144())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_144()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_147())
	{
		return 0;
	}
	if (func_145(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_145(int iParam0)
{
	return func_146(iParam0, 20);
}

bool func_146(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_147()
{
	return -1;
}

void func_148()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_149()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_150()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_151()
{
	if (func_76(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_99();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_154()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_156()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_157(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_133((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_158(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_159()
{
	Global_19671 = 0;
	func_154();
}

struct<6> func_160()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_161(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_162(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_163(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_164()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_409.f_3))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_409.f_3, Local_409.f_413);
			TASK::TASK_LOOK_AT_ENTITY(Local_409.f_3, Local_839.f_3[1], -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_934);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_934);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 262144);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1002, 1f, 30000, 0.25f, false, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, -30.3f, 0);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_934);
			TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, iLocal_934);
		}
	}
}

float func_165(int iParam0, bool bParam1)
{
	return func_172(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

void func_166(int iParam0, bool bParam1)
{
	if (iParam0 < Local_343 && iParam0 >= 0)
	{
		if (bParam1)
		{
			func_167(&(Local_343.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			func_125(&(Local_343.f_1[iParam0 /*4*/]), 2);
		}
	}
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_168(int iParam0, bool bParam1, float fParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_171();
				return 1;
			}
			else if (func_169(iParam0->f_4, fParam2, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iParam0->f_4, true);
		}
	}
	return 0;
}

int func_169(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_170(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_170(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_171()
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

float func_172(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

void func_173(var uParam0, int iParam1)
{
	func_167(uParam0, iParam1);
}

int func_174(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !iParam0->f_142)
	{
		if (func_191(iParam0))
		{
			func_190(iParam0, &(iParam0->f_43));
			func_185(iParam0);
			func_184(iParam0);
			func_181(iParam0);
			func_180(iParam0, fParam2, fParam3);
			func_177(iParam0);
			return func_175(iParam0, fParam1);
		}
	}
	return 0;
}

int func_175(int iParam0, float fParam1)
{
	if (func_62(iParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((func_10(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_176(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			return func_168(iParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_176(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
	{
		return func_168(iParam0, 1, fParam1);
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_177(int iParam0)
{
	float fVar0;

	if ((func_179(iParam0) && func_22(iParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_97) >= 10000)
		{
			fVar0 = func_178(iParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_96 >= 2 && !func_115())
		{
			func_230(iParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_179(iParam0))
			{
			}
			if (!func_22(iParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_178(vector3 vParam0, int iParam3)
{
	return func_209(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, iParam3);
}

int func_179(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_180(int iParam0, float fParam1, float fParam2)
{
	if (func_179(iParam0) && func_22(iParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4) || ENTITY::GET_ENTITY_SPEED(iParam0->f_4) < 3f) && func_163(iParam0))
		{
			if (!func_305(iParam0, 2))
			{
				func_304(iParam0, 2);
			}
			else if (func_179(iParam0))
			{
				if (func_113(iParam0, 2) > fParam1 && !func_305(iParam0, 14))
				{
					if (func_35())
					{
						func_230(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_230(iParam0, 48, 1, 0, 0);
					}
					func_298(iParam0, 2, 0, 0);
					if (func_305(iParam0, 10))
					{
						func_298(iParam0, 10, 0, 0);
					}
				}
				if (!func_305(iParam0, 3))
				{
					func_298(iParam0, 3, 0, 0);
				}
				else if (func_113(iParam0, 3) >= fParam2)
				{
					func_112(iParam0, 3, 0);
					func_330(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_305(iParam0, 2))
			{
				func_112(iParam0, 2, 0);
			}
			if (func_305(iParam0, 3))
			{
				func_112(iParam0, 3, 0);
			}
		}
	}
}

void func_181(int iParam0)
{
	if (func_183(iParam0))
	{
		func_182(iParam0);
	}
}

void func_182(int iParam0)
{
	if (AUDIO::IS_RADIO_RETUNING() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_112(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_113(iParam0, 20) > 3f)
				{
					func_230(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_22(iParam0->f_81, 262144) || !func_22(iParam0->f_81, 1048576))
				{
					if (func_113(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_230(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_22(iParam0->f_82, 67108864))
				{
					if (func_113(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_230(iParam0, 85, 1, 0, 0);
						func_112(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_113(iParam0, 20) > 8f)
				{
					func_230(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (func_22(iParam0->f_81, 262144) || func_22(iParam0->f_82, 67108864))
			{
				if (!func_305(iParam0, 22))
				{
					func_304(iParam0, 22);
				}
			}
			if (func_305(iParam0, 22) && func_113(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_22(iParam0->f_81, 1048576))
					{
						func_230(iParam0, 84, 1, 0, 0);
						func_112(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_22(iParam0->f_82, 134217728))
					{
						func_230(iParam0, 85, 1, 0, 0);
						func_112(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_183(int iParam0)
{
	return iParam0->f_120;
}

void func_184(int iParam0)
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_22(iParam0->f_44, 2))
	{
		func_173(&(iParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_22(iParam0->f_44, 2))
	{
		func_124(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_51(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_230(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_185(int iParam0)
{
	if (!func_22(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_113(iParam0, 9) > 1f)
					{
						func_189(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (iParam0->f_410 != 22)
						{
							func_230(iParam0, 50, 1, 1, 0);
						}
						func_298(iParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!func_115() && func_113(iParam0, 9) > 4f)
				{
					func_230(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			case 2:
				if (func_188("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_230(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_187(iParam0)))
				{
					func_189(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_51(6, 0);
				}
				if (!func_186(iParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_113(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_230(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_188("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!func_115())
				{
					if (iParam0->f_410 != 22)
					{
						func_230(iParam0, 53, 1, 0, 1);
					}
					func_51(7, func_187(iParam0));
					func_189(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!func_115())
				{
					func_112(iParam0, 9, 0);
					func_298(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
		}
	}
}

bool func_186(int iParam0)
{
	return iParam0->f_110;
}

int func_187(int iParam0)
{
	return iParam0->f_106;
}

bool func_188(char* sParam0, int iParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_189(int iParam0, int iParam1)
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

void func_190(int iParam0, float* fParam1)
{
	STATS::STAT_GET_FLOAT(iParam0->f_428, fParam1, -1);
	iParam0->f_41 = (*fParam1 - iParam0->f_42);
}

int func_191(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3))
			{
				func_330(iParam0, "Passenger left car.", 9);
			}
			else if (func_201(iParam0))
			{
				if (func_188("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_192(iParam0, 1);
			}
		}
	}
	return 0;
}

void func_192(int iParam0, bool bParam1)
{
	func_200(iParam0, iParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if (!func_305(iParam0, 14))
			{
				if (func_115())
				{
					func_199(1);
				}
				func_198(iParam0, 11, 1);
				func_193(iParam0, 1);
				func_298(iParam0, 14, 0f, 1);
				if (iParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_179(iParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_2, false))
					{
						if (func_113(iParam0, 15) > 5f)
						{
							func_298(iParam0, 15, 0f, 1);
						}
					}
					if (func_113(iParam0, 14) > 20f)
					{
						func_330(iParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_113(iParam0, 14) > 20f)
				{
					if (func_165(iParam0->f_4, 1) > 40f)
					{
						func_330(iParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_330(iParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(iParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
				func_197(iParam0, &(iParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_179(iParam0))
				{
					func_230(iParam0, 2, 1, 0, 0);
				}
				else
				{
					func_197(iParam0, &(iParam0->f_98), 4, 3);
				}
			}
			func_194(iParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(iParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
			{
				if (iParam0->f_411 == 5 && iParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
				}
				else if (iParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_194(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_415(iParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(iParam0->f_10))
	{
		iParam0->f_10 = func_133(iParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(iParam0->f_10, true);
		func_195(iParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_230(iParam0, 3, 1, 0, 0);
		}
	}
}

void func_195(int iParam0)
{
	func_298(iParam0, 14, 0, 0);
	func_196();
}

void func_196()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_197(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_230(iParam0, iParam3, 1, 0, 0);
		func_173(uParam1, iParam2);
	}
}

void func_198(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_199(int iParam0)
{
	Global_21816 = iParam0;
}

void func_200(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_330(iParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_201(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == iParam0->f_2)
		{
			if (func_305(iParam0, 14))
			{
				func_202(iParam0);
			}
			func_193(iParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_202(int iParam0)
{
	func_112(iParam0, 14, 0);
	func_112(iParam0, 15, 0);
	func_204();
	if (func_203())
	{
		func_199(0);
	}
}

int func_203()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_205(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_206(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_207(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_49();
}

var func_207()
{
	var uVar0;

	return uVar0;
}

void func_208(int iParam0)
{
	iParam0->f_120 = 0;
}

float func_209(int iParam0, vector3 vParam1, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1, bParam4);
}

void func_210()
{
	switch (iLocal_924)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, false) && func_10(Local_409.f_4, Local_409.f_17, 1) < 300f)
			{
				func_225();
				iLocal_924 = 1;
			}
			break;
		case 1:
			if (func_223())
			{
				iLocal_924 = 2;
			}
			break;
		case 2:
			if (!bLocal_971)
			{
				func_220();
				func_219();
				func_215();
				func_214();
				func_213();
				func_212();
				iLocal_924 = 3;
				bLocal_971 = true;
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, false) && func_10(Local_409.f_4, Local_409.f_17, 1) > 350f)
			{
				func_211();
				iLocal_924 = 0;
			}
			break;
	}
}

void func_211()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_930);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_931);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_932);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_19[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_19[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_881.f_32[1]);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_954, func_136(0));
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_954, func_136(1));
	STREAMING::REMOVE_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REMOVE_ANIM_DICT(sLocal_1008);
}

void func_212()
{
	iLocal_935[0] = OBJECT::CREATE_OBJECT(iLocal_930, 204.8445f, -3333.998f, 4.795367f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_935[0], 204.8445f, -3333.998f, 4.795367f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_935[0], -0.036243f, -0.00124f, 91.56063f, 2, true);
	iLocal_935[1] = OBJECT::CREATE_OBJECT(iLocal_930, 212.67f, -3328.77f, 4.79f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_935[1], 212.67f, -3328.77f, 4.79f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_935[1], -0.04f, -0.01f, 86.36f, 2, true);
	iLocal_935[2] = OBJECT::CREATE_OBJECT(iLocal_930, 204.8248f, -3328.631f, 4.7915f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_935[2], 204.8248f, -3328.631f, 4.7915f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_935[2], -0.0027f, -0.0374f, 0.1414f, 2, true);
	iLocal_940 = OBJECT::CREATE_OBJECT(iLocal_931, 214.2505f, -3314.673f, 4.7883f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_940, 214.2505f, -3314.673f, 4.7883f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_940, 0f, 0f, -17.399f, 2, true);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_932))
	{
		iLocal_939 = OBJECT::CREATE_OBJECT(iLocal_932, 220.7266f, -3320.001f, 5.2749f, true, true, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_939, 220.7266f, -3320.001f, 5.2749f, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_939, 0f, 0f, 0f, 2, true);
	}
}

void func_213()
{
	if ((!PED::IS_PED_INJURED(iLocal_941[0]) && !PED::IS_PED_INJURED(iLocal_941[0])) && !PED::IS_PED_INJURED(Local_839.f_3[3]))
	{
		iLocal_960 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_960, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], iLocal_960, sLocal_1008, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[0], iLocal_960, sLocal_1008, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_941[1], iLocal_960, sLocal_1008, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1000f, 0);
	}
	if ((!PED::IS_PED_INJURED(Local_839.f_3[0]) && !PED::IS_PED_INJURED(Local_839.f_3[1])) && !PED::IS_PED_INJURED(Local_839.f_3[2]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_839.f_3[0], joaat("WEAPON_PISTOL"), -1, true, true);
		iLocal_964 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_996, vLocal_999, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_964, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[0], iLocal_964, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[1], iLocal_964, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_839.f_3[2], iLocal_964, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
	}
}

void func_214()
{
	int iVar0;

	iVar0 = 0;
	func_8(&(Local_409.f_244), 4, Local_839.f_3[1], "TaxiDom", 0, 1);
	func_8(&(Local_409.f_244), 5, Local_839.f_3[3], "TaxiGangM", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_839.f_3[1], "TaxiDom");
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_839.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_839.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(20, 50));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 37, true);
		PED::SET_PED_CONFIG_FLAG(Local_839.f_3[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(Local_839.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_839.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_839.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_839.f_3[iVar0], false);
		PED::SET_PED_ACCURACY(Local_839.f_3[iVar0], 1);
		iVar0++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[0], iLocal_923);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[1], iLocal_923);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[2], iLocal_923);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[3], iLocal_923);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_941[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(iLocal_941[iVar0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_941[iVar0], 100f);
		PED::SET_PED_ID_RANGE(iLocal_941[iVar0], 100f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_941[iVar0], true);
		iVar0++;
	}
	func_8(&(Local_409.f_244), 7, iLocal_941[1], "TaxiGangGirl2", 0, 1);
	func_8(&(Local_409.f_244), 8, iLocal_941[0], "TaxiGangGirl1", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_941[1], "TaxiGangGirl2");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_941[0], "TaxiGangGirl1");
}

void func_215()
{
	Local_839.f_3[0] = PED::CREATE_PED(26, Local_839.f_19[0], func_218(1), func_217(1), true, true);
	Local_839.f_3[1] = PED::CREATE_PED(26, Local_839.f_19[0], func_216(2), 0f, true, true);
	Local_839.f_3[2] = PED::CREATE_PED(26, Local_839.f_19[0], func_218(3), func_217(3), true, true);
	Local_839.f_3[3] = PED::CREATE_PED(26, Local_839.f_19[0], func_218(4), func_217(4), true, true);
	PED::SET_PED_CONFIG_FLAG(Local_839.f_3[1], 20, true);
	iLocal_941[0] = PED::CREATE_PED(26, Local_839.f_19[1], func_218(5), func_217(5), true, true);
	iLocal_941[1] = PED::CREATE_PED(26, Local_839.f_19[1], func_218(6), func_217(6), true, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_941[0], false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_941[1], false);
	if (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[0], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 3, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 10, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[1], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 10, 0, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[2], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 10, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_839.f_3[3], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
		case 2:
			return 203.4f, -3323.22f, 5.79f;
		case 3:
			return 205.66f, -3322.41f, 5.8f;
	}
	return 0f, 0f, 0f;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
		case 2:
			return -129.32f;
		case 3:
			return 39.53f;
		case 4:
			return -139.98f;
		case 5:
			return 147.25f;
		case 6:
			return 68.18f;
	}
	return 0f;
}

Vector3 func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
		case 2:
			return 204.27f, -3321.77f, 5.79f;
		case 3:
			return 204.93f, -3322.56f, 4.79f;
		case 4:
			return 218.19f, -3323.58f, 5.8f;
		case 5:
			return 219.52f, -3324f, 5.8f;
		case 6:
			return 220.14f, -3325.39f, 5.8f;
	}
	return 0f, 0f, 0f;
}

void func_219()
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_839.f_27[2], 5, false, false);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_839.f_27[3], 5, false, false);
}

void func_220()
{
	Local_839.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_839.f_32[0], func_222(1), func_221(1), true, true, false);
	Local_839.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_839.f_32[1], func_222(2), func_221(2), true, true, false);
	Local_839.f_27[2] = VEHICLE::CREATE_VEHICLE(Local_839.f_32[3], func_222(3), func_221(3), true, true, false);
	Local_839.f_27[3] = VEHICLE::CREATE_VEHICLE(Local_839.f_32[3], func_222(4), func_221(4), true, true, false);
	iLocal_945 = VEHICLE::CREATE_VEHICLE(Local_839.f_32[2], func_222(5), func_221(5), true, true, false);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_839.f_27[2], "NikoB");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_839.f_27[3], "RomanB");
}

float func_221(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
		case 2:
			return 33.5561f;
		case 3:
			return 87.9127f;
		case 4:
			return 195.38f;
		case 5:
			return 35.3307f;
	}
	return 0f;
}

Vector3 func_222(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
		case 2:
			return 202.0773f, -3320.393f, 4.7657f;
		case 3:
			return 216.1051f, -3318.837f, 4.7918f;
		case 4:
			return 221.6868f, -3324.747f, 5.3063f;
		case 5:
			return 200.1736f, -3320.666f, 4.7361f;
	}
	return 0f, 0f, 0f;
}

int func_223()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_930))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_931))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_839.f_19[0]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_839.f_19[1]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_839.f_32[0]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_839.f_32[1]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_839.f_32[2]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_839.f_32[3]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_881.f_32[1]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_950, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_954, func_136(0)))
	{
		func_224("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_950, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_954, func_136(1)))
	{
		func_224("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight"))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1008))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_950, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_932))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_950, 1000);
	}
	return 1;
}

void func_224(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_225()
{
	STREAMING::REQUEST_MODEL(iLocal_930);
	STREAMING::REQUEST_MODEL(iLocal_931);
	STREAMING::REQUEST_MODEL(iLocal_932);
	STREAMING::REQUEST_MODEL(Local_839.f_19[0]);
	STREAMING::REQUEST_MODEL(Local_839.f_19[1]);
	STREAMING::REQUEST_MODEL(Local_839.f_32[0]);
	STREAMING::REQUEST_MODEL(Local_839.f_32[1]);
	STREAMING::REQUEST_MODEL(Local_839.f_32[2]);
	STREAMING::REQUEST_MODEL(Local_839.f_32[3]);
	STREAMING::REQUEST_MODEL(Local_881.f_32[1]);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_954, func_136(0));
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_954, func_136(1));
	STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REQUEST_ANIM_DICT(sLocal_1008);
}

void func_226()
{
	func_173(&(Local_409.f_55), 2);
	func_173(&(Local_409.f_55), 4);
	func_173(&(Local_409.f_55), 16);
	func_173(&(Local_409.f_55), 64);
	func_173(&(Local_409.f_55), 256);
	func_173(&(Local_409.f_55), 512);
	func_173(&(Local_409.f_55), 1024);
	func_173(&(Local_409.f_55), 2048);
	func_173(&(Local_409.f_55), 4096);
	func_173(&(Local_409.f_55), 1073741824 /* Float: 2f */);
	func_173(&(Local_409.f_100), 8);
	func_173(&(Local_409.f_100), 2048);
	func_173(&(Local_409.f_100), 256);
	func_173(&uLocal_1105, 2);
}

void func_227(int iParam0)
{
	func_228(iParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_159();
	func_202(iParam0);
}

void func_228(var uParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_229(int iParam0)
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_228(iParam0, 1000);
}

void func_230(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_298(iParam0, 16, 4f, 0);
		if (func_231(iParam0))
		{
			func_49();
		}
	}
	func_261(iParam0, iParam2, bParam3);
}

int func_231(int iParam0)
{
	vector3 vVar0[24];
	struct<6> Var6;

	StringCopy(&cVar0, iParam0->f_143, 24);
	if (func_115())
	{
		Var6 = { func_233() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			StringConCat(&cVar0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &cVar0))
			{
				return 1;
			}
			StringCopy(&cVar0, iParam0->f_143, 24);
			StringConCat(&cVar0, "_gret1", 24);
			func_232(&cVar0);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &cVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_232(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_233()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_234(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_89) > 500) || PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_192(iParam0, 1);
			if (func_33())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_87 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_260(iParam0);
			if (iParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_305(iParam0, 14))
			{
				func_202(iParam0);
				func_193(iParam0, 0);
			}
			if (func_305(iParam0, 9))
			{
				func_112(iParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_259(iParam0, iParam0->f_3) > 300f)
				{
					func_330(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 || ((func_172(PLAYER::PLAYER_PED_ID(), iParam0->f_3, 1) < 20f && func_10(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_10(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_256(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_255(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_94)
							{
								iParam0->f_7 = func_254(iParam0->f_4, iParam0->f_3);
								iVar0 = func_253(iParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (VEHICLE::_0x639431E895B9AA57(iParam0->f_3, iParam0->f_4, false, false, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(iParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_163(iParam0))
							{
								TASK::CLEAR_PED_TASKS(iParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 7) && func_259(iParam0, iParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (iParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_94)
						{
							if (func_172(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_252(iParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_251(iParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_249(iParam0);
						if (func_259(iParam0, iParam0->f_3) < fVar4 || func_33())
						{
							if (PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
							{
								if (func_237(iParam0))
								{
									func_236(iParam0);
									iLocal_89 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 26, true);
									func_112(iParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(iParam0->f_428, &(iParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
				}
			}
		}
	}
	return 0;
}

void func_236(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
		HUD::REMOVE_BLIP(&(iParam0->f_8));
	}
}

int func_237(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;

	func_224("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar12 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
	{
		func_248();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_246(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_168(iParam0, 0, 1084227584 /* Float: 5f */) && func_176(1, 1, 1))
			{
				if (func_252(iParam0, 1))
				{
					iLocal_88 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_330(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				iParam0->f_7 = func_254(iParam0->f_4, iParam0->f_3);
				iVar9 = func_253(iParam0, &iVar10);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					if (iVar10 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, iVar11);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (VEHICLE::_0x639431E895B9AA57(iParam0->f_3, iParam0->f_4, false, false, false))
					{
						iParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		case 2:
			if (iParam0->f_7 == 0)
			{
				vVar6 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
			{
				vVar6 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar6 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_245(&(iParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.f_2 = (vVar0.z + 1.5f);
				if (iParam0->f_7 == 2)
				{
					vVar3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_244(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_120();
				func_261(iParam0, 0, 0);
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar6) };
				ENTITY::SET_ENTITY_COORDS(iParam0->f_3, vVar13, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, func_242(iParam0));
				func_241(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				CAM::SET_CAM_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar0));
				CAM::POINT_CAM_AT_ENTITY(*iParam0, iParam0->f_4, vVar3, true);
				CAM::SET_CAM_ACTIVE(*iParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::_0x2208438012482A1A(iParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		case 5:
			func_224("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0->f_4, func_240(iParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*iParam0, false);
				CAM::DESTROY_CAM(iParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_120();
				func_261(iParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_238(1, 1, 1);
				return 1;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*iParam0, false);
			CAM::DESTROY_CAM(iParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_238(1, 1, 1);
			return 1;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_238(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_23(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_239(23, 0);
}

void func_239(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 0:
			return 1;
		case -1:
			return 0;
		default:
			break;
	}
	return 2;
}

void func_241(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam1, vParam4, fParam7, false, 2);
	}
}

float func_242(int iParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	vVar1 = { func_41() };
	if (iParam0->f_7 == 2)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_243(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), vVar1);
	return fVar0;
}

float func_243(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_244(int iParam0, bool bParam1, bool bParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_42(0);
	func_23(1, 1, bParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_239(23, 1);
}

int func_245(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;

	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_246(int iParam0)
{
	if (func_247() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_42(0);
		func_159();
		return 1;
	}
	return 0;
}

int func_247()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_248()
{
	if (func_35())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_34())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_249(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (func_165(iParam0->f_3, 1) > 30f || func_250(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, false, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar0);
					func_330(iParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_250(int iParam0)
{
	if ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 3f && func_113(iParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_252(int iParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 0, false);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar4]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar4], false))
				{
					if (iVar4 == 0)
					{
						iParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						iParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						iParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*iParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*iParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*iParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("VACCA"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SENTINEL2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
		{
			iVar3 = 2;
		}
		else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, true, false, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, true, false, false))
	{
		iVar3 = 1;
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_255(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3) && func_165(iParam0->f_3, 1) < fParam2)
		{
			if (!func_305(iParam0, 5))
			{
				func_298(iParam0, 5, 0, 0);
			}
		}
		else if (func_305(iParam0, 5))
		{
			func_112(iParam0, 5, 0);
		}
		if (((func_113(iParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(iParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3)) || func_165(iParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;

	iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		vVar6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0->f_4, iVar18) };
		vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_4, vVar6) };
		vVar6.f_1 = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar6) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(vVar0, vVar3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_3, true);
			iLocal_87 = 1;
			break;
		case 1:
			if ((func_172(iParam0->f_4, iParam0->f_3, 0) <= fParam1 && !iParam0->f_142) && MISC::ABSF((vVar0.z - vVar3.z)) < 5f)
			{
				if (iParam0->f_409 == 0)
				{
					iParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 7);
				}
				else
				{
					iVar17 = SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						iParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						iParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(iParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (iParam0->f_411 != 9)
			{
				if (!func_22(iParam0->f_44, 128))
				{
					func_230(iParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_257(iParam0->f_3, "TAXI_HAIL", iParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(iParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(iParam0->f_3, iParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
			if (iParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
			iLocal_87 = 3;
			break;
		case 3:
			iLocal_87 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
	}
	return 0;
}

void func_257(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_258(iParam3), false);
}

int func_258(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

float func_259(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_163(iParam0))
		{
			return func_172(iParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_260(int iParam0)
{
	func_200(iParam0, iParam0->f_3);
	if (func_163(iParam0))
	{
		if (func_305(iParam0, 14))
		{
			func_202(iParam0);
			if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_10));
			}
		}
	}
	if (!func_305(iParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(iParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
		}
		func_298(iParam0, 9, 0, 0);
		func_158("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_261(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_49();
		func_298(iParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_262(int iParam0, int iParam1)
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_266(12);
	if (func_22(iParam0->f_44, 8))
	{
		if (!func_22(iParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_22(iParam0->f_44, 256))
			{
				func_173(&(iParam0->f_44), 256);
			}
			if (func_22(iParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_230(iParam0, 135, 1, 0, 1);
				func_173(&(iParam0->f_44), 128);
			}
		}
	}
	if (!func_265(iParam0, iParam1))
	{
		if (func_165(iParam0->f_3, 1) < 35f)
		{
			if (!func_22(iParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_230(iParam0, 133, 1, 0, 1);
				func_173(&(iParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(iParam0->f_3) || PED::IS_PED_FLEEING(iParam0->f_3)) || func_165(iParam0->f_3, 1) > 400f)
		{
			func_330(iParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		iParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(iParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == iParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iParam0->f_4);
			func_263(iParam0);
			func_51(2, 0);
			bLocal_94 = true;
			func_114(&iLocal_90);
			return 1;
		}
		else
		{
			func_330(iParam0, "No Taxi", 21);
			func_162("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_263(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
	{
		if (func_264())
		{
		}
	}
}

int func_264()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_251(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("RHINO") || iVar1 == joaat("RATLOADER")) || iVar1 == joaat("SURFER")) || iVar1 == joaat("SURFER2")) || iVar1 == joaat("ARMYTANKER")) || iVar1 == joaat("BARRACKS")) || iVar1 == joaat("BARRACKS2")) || iVar1 == joaat("CRUSADER")) || iVar1 == joaat("UTILLITRUCK")) || iVar1 == joaat("UTILLITRUCK2")) || iVar1 == joaat("UTILLITRUCK3")) || iVar1 == joaat("AIRTUG")) || iVar1 == joaat("CADDY")) || iVar1 == joaat("CADDY2")) || iVar1 == joaat("DLOADER")) || iVar1 == joaat("DOCKTUG")) || iVar1 == joaat("FLATBED")) || iVar1 == joaat("RIPLEY")) || iVar1 == joaat("ROMERO")) || iVar1 == joaat("TOWTRUCK")) || iVar1 == joaat("TOWTRUCK2")) || iVar1 == joaat("AIRBUS")) || iVar1 == joaat("BUS")) || iVar1 == joaat("COACH")) || iVar1 == joaat("RENTALBUS")) || iVar1 == joaat("TOURBUS")) || iVar1 == joaat("RIOT")) || iVar1 == joaat("TRASH")) || iVar1 == joaat("BENSON")) || iVar1 == joaat("BIFF")) || iVar1 == joaat("HAULER")) || iVar1 == joaat("PACKER")) || iVar1 == joaat("PHANTOM")) || iVar1 == joaat("POUNDER")) || iVar1 == joaat("BULLDOZER")) || iVar1 == joaat("HANDLER")) || iVar1 == joaat("TIPTRUCK2")) || iVar1 == joaat("CUTTER")) || iVar1 == joaat("DUMP")) || iVar1 == joaat("MIXER")) || iVar1 == joaat("MIXER2")) || iVar1 == joaat("RUBBLE")) || iVar1 == joaat("SCRAP")) || iVar1 == joaat("TIPTRUCK")) || iVar1 == joaat("CAMPER")) || iVar1 == joaat("TACO")) || iVar1 == joaat("BOXVILLE")) || iVar1 == joaat("BOXVILLE2")) || iVar1 == joaat("BOXVILLE3")) || iVar1 == joaat("BURRITO")) || iVar1 == joaat("BURRITO2")) || iVar1 == joaat("BURRITO3")) || iVar1 == joaat("BURRITO4")) || iVar1 == joaat("GBURRITO")) || iVar1 == joaat("JOURNEY")) || iVar1 == joaat("MULE")) || iVar1 == joaat("MULE2")) || iVar1 == joaat("PONY")) || iVar1 == joaat("RUMPO")) || iVar1 == joaat("RUMPO2")) || iVar1 == joaat("SPEEDO")) || iVar1 == joaat("SPEEDO2")) || iVar1 == joaat("YOUGA")) || iVar1 == joaat("MOWER")) || iVar1 == joaat("TRACTOR")) || iVar1 == joaat("TRACTOR2")) || iVar1 == joaat("FBI")) || iVar1 == joaat("FBI2")) || iVar1 == joaat("PRANGER")) || iVar1 == joaat("AMBULANCE")) || iVar1 == joaat("DILETTANTE2")) || iVar1 == joaat("FIRETRUK")) || iVar1 == joaat("LGUARD")) || iVar1 == joaat("DUNE")) || iVar1 == joaat("PBUS")) || iVar1 == joaat("POLICE")) || iVar1 == joaat("POLICE2")) || iVar1 == joaat("POLICE3")) || iVar1 == joaat("POLICE4")) || iVar1 == joaat("POLICEB")) || iVar1 == joaat("POLICET")) || iVar1 == joaat("SHERIFF")) || iVar1 == joaat("SHERIFF2")) || iVar1 == joaat("STOCKADE"))
				{
					bVar3 = false;
				}
				if (iParam0->f_411 == 7)
				{
					if (iVar1 == joaat("BODHI2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(iParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_162("TX_VIP_DMGD", -1);
							if (func_161("TX_VIP_DMGD"))
							{
								func_173(&(iParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(iParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_162("TX_VIP_CAR", -1);
							if (func_161("TX_VIP_CAR"))
							{
								func_173(&(iParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_22(iParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_162("TX_VIP_SMALL", -1);
							if (func_161("TX_VIP_SMALL"))
							{
								func_173(&(iParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_124(&(iParam0->f_44), 16);
			func_124(&(iParam0->f_44), 64);
			func_124(&(iParam0->f_44), 32);
		}
	}
	return 0;
}

void func_266(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		iVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &iVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_267(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_125(&(iParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_268()
{
	Local_343 = 0;
	func_285(47910, 47885, 1);
	func_285(47646, 47623, 1);
	func_285(47561, 47536, 1);
	func_285(47464, 47440, 1);
	func_285(47330, 47309, 1);
	func_285(47256, 47231, 1);
	func_285(47089, 47066, 1);
}

int func_269(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_270(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_272(uParam0->f_4))
		{
			func_271(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_272(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_274(var uParam0)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_275(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_276(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_271(uParam0, 11);
	return 1;
}

int func_277(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			if (!func_305(iParam0, 25))
			{
				func_298(iParam0, 25, 0, 0);
			}
			else if (func_113(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_305(iParam0, 25))
		{
			func_112(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_278(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_279(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_281(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_275(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_282(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_283(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_284(uParam0->f_4))
		{
			func_271(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_167(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_167(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_286(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_287(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_288(int iParam0, var uParam1)
{
	int iVar0;

	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(iParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			iParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(iParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(iParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_289(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

int func_291()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_929))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_950, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1112))
	{
		return 0;
	}
	if (!func_292(&iLocal_950, 1))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_950, 1000);
		return 0;
	}
	return 1;
}

int func_292(int iParam0, bool bParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_21()))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_293(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_294(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		iParam0->f_8 = func_295(iParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_295(int iParam0, bool bParam1, bool bParam2)
{
	return func_133(iParam0, !bParam1, bParam2);
}

int func_296(int iParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8, float fParam9, int iParam10)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		func_297(iParam0, iParam0->f_14);
		iParam0->f_11 = { vParam1 };
		iParam0->f_14 = { vParam4 };
		func_39(iParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(iParam0->f_14, 2f, 0);
		func_37(iParam0->f_14, 0, iParam10);
		if (iParam8 == 0)
		{
			iParam0->f_3 = PED::CREATE_RANDOM_PED(iParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_110348.f_225[0]))
		{
			iParam0->f_3 = Global_110348.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_3, true, true);
		}
		else
		{
			iParam0->f_3 = PED::CREATE_PED(26, iParam8, iParam0->f_11, fParam9, true, true);
		}
		func_8(&(iParam0->f_244), 3, iParam0->f_3, sParam7, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0->f_3, sParam7);
		PED::SET_PED_RESET_FLAG(iParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(iParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(iParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iParam0->f_413, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_3, iParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_297(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(vParam1, 20f, 5f, false);
}

void func_298(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_106(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_105(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_106(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_105(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_299()
{
	STREAMING::REQUEST_MODEL(iLocal_929);
	func_301(1);
	iLocal_1112 = func_300();
}

int func_300()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_301(bool bParam0)
{
	STREAMING::REQUEST_MODEL(func_21());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_22(Global_111638.f_19092, 128))
	{
		func_173(&(Global_111638.f_19092), 128);
	}
}

void func_302(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iVar0]);
			PED::SET_PED_FLEE_ATTRIBUTES((*iParam0)[iVar0], 13, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_934);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_934);
			TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1, 1000));
			TASK::TASK_SMART_FLEE_PED(0, Local_409.f_3, 4000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_934);
			TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0], iLocal_934);
			PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_303(var uParam0)
{
	int iVar0;
	int iVar1;

	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_923, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_923, Local_409.f_413);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_923, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_923);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS((*uParam0)[iVar0]);
			WEAPON::GET_CURRENT_PED_WEAPON((*uParam0)[iVar0], &iVar1, true);
			if (iVar1 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::GIVE_WEAPON_TO_PED((*uParam0)[iVar0], joaat("WEAPON_PISTOL"), -1, false, true);
			}
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 30);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam0)[iVar0], 1000f, 0);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_304(int iParam0, int iParam1)
{
	func_114(&(iParam0->f_146[iParam1 /*3*/]));
}

bool func_305(int iParam0, int iParam1)
{
	return func_16(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_113(iParam0, 10) > (20f + 10f))
				{
					if (iParam0->f_112)
					{
						func_230(iParam0, 92, 1, 0, 0);
						iParam0->f_112 = 0;
					}
					else
					{
						func_230(iParam0, 83, 1, 0, 0);
					}
					iParam0->f_113 = 1;
					func_298(iParam0, 10, 0f, 1);
				}
			}
			else if (func_113(iParam0, 10) > 20f)
			{
				if (iParam0->f_112)
				{
					func_230(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_230(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_298(iParam0, 10, 0f, 1);
			}
		}
	}
	if (iParam0->f_411 == 1)
	{
		if (func_113(iParam0, 10) > 30f)
		{
			if (!func_115())
			{
				if (iParam0->f_112)
				{
					func_230(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_230(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_298(iParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(iParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_114(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_329(iParam0))
			{
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_328(iParam0, 1);
				func_326(5, iParam0);
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_114(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_324(iParam0))
			{
				func_328(iParam0, 1);
				func_326(0, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_114(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_323(iParam0))
			{
				func_328(iParam0, 1);
				func_326(1, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
			{
				iParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(iParam0->f_4);
				func_114(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_103(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_322(iParam0))
			{
				func_328(iParam0, 1);
				func_326(8, iParam0);
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_114(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_321(iParam0))
			{
				func_328(iParam0, 1);
				func_326(6, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_114(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_320(iParam0))
			{
				func_328(iParam0, 1);
				func_326(4, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_114(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_319(iParam0))
			{
				func_326(7, iParam0);
				func_328(iParam0, 1);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_114(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_103(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_318(iParam0))
			{
				func_328(iParam0, 1);
				func_326(9, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_114(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_312(iParam0))
			{
				func_328(iParam0, 1);
				func_326(13, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_114(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_311(iParam0))
			{
				func_328(iParam0, 1);
				func_326(14, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_114(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_310(iParam0))
			{
				func_328(iParam0, 1);
				func_326(11, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_114(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_103(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_309(iParam0))
			{
				func_328(iParam0, 1);
				func_326(12, iParam0);
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_325(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_308(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_103(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_307(iParam0))
			{
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_328(iParam0, 1);
				func_326(2, iParam0);
				func_325(iParam0);
			}
		}
	}
}

int func_307(int iParam0)
{
	float fVar0;

	if (!PED::IS_PED_INJURED(iParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(iParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				iParam0->f_37 = ENTITY::GET_ENTITY_SPEED(iParam0->f_2);
				if (iParam0->f_37 > 10f)
				{
					func_114(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_103(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				iParam0->f_38 = iParam0->f_37;
				iParam0->f_37 = ENTITY::GET_ENTITY_SPEED(iParam0->f_2);
				fVar0 = (iParam0->f_38 - iParam0->f_37);
				func_102(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && iParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_102(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_308(int* iParam0, float fParam1)
{
	if (!func_16(iParam0))
	{
		func_106(iParam0, fParam1);
	}
}

int func_309(int iParam0)
{
	vector3 vVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0->f_4, true) };
		if (vVar0.y < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_114(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	vector3 vVar0;

	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0->f_4, true) };
		if (MISC::ABSF(vVar0.x) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_114(&(Local_190[11 /*10*/].f_3));
				fLocal_342 = vVar0.x;
			}
			else if (func_103(&(Local_190[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_342) - MISC::ABSF(vVar0.x)) < 0f)
			{
				func_102(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_103(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_102(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_311(int iParam0)
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			iParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 15f && func_172(iParam0->f_5, iParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(iParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_5, -1, false)))
				{
					func_114(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_103(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_172(iParam0->f_5, iParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0->f_5))
		{
			func_102(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_103(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_102(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0->f_5))
		{
			func_102(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_312(int iParam0)
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_313(iParam0->f_4) && ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_114(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_313(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;

	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &vVar3, 1, 3f, 0f);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, -1, &vVar6);
	fVar27 = SYSTEM::VMAG(vVar6 - vVar0);
	vVar9 = { func_317((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_316(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_314(ENTITY::GET_ENTITY_COORDS(iParam0, true), vVar15, vVar18, vVar21);
}

int func_314(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	vParam6.f_2 = 0f;
	vParam9.f_2 = 0f;
	vVar0 = { func_317(vParam6 - vParam3) };
	vVar3 = { func_317(vParam9 - vParam3) };
	fVar6 = func_315(vParam0, vVar0);
	fVar7 = func_315(vParam3, vVar0);
	fVar8 = func_315(vParam6, vVar0);
	fVar9 = func_315(vParam0, vVar3);
	fVar10 = func_315(vParam3, vVar3);
	fVar11 = func_315(vParam9, vVar3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_315(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_316(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_317(vector3 vParam0)
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

int func_318(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0->f_4))
			{
				if (!bLocal_341)
				{
					if (ENTITY::GET_ENTITY_ROLL(iParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(iParam0->f_4) >= 145f)
					{
						bLocal_341 = true;
					}
				}
			}
			else if (bLocal_341)
			{
				if (ENTITY::GET_ENTITY_ROLL(iParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(iParam0->f_4) >= -35f)
				{
					bLocal_341 = false;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_114(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_102(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_114(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iParam0->f_4);
			iVar1 = (iParam0->f_46 - iVar0);
			iParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (iParam0->f_113)
				{
					func_230(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_230(iParam0, 72, 1, 0, 1);
				}
				func_102(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_323(int iParam0)
{
	vector3 vVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0->f_4, true) };
		if (MISC::ABSF(vVar0.x) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_114(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_102(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(iParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_114(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_102(&(Local_190[0 /*10*/].f_3));
				func_105(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_105(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_298(iParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_326(int iParam0, int iParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_327(iParam1, iParam0);
	func_102(&(Local_190[iParam0 /*10*/].f_6));
	iParam1->f_112 = 1;
}

void func_327(int iParam0, int iParam1)
{
	iParam0->f_76 = (iParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_328(int iParam0, int iParam1)
{
	iParam0->f_104 = (iParam0->f_104 + iParam1);
}

int func_329(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_114(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_103(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_330(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];

	func_159();
	func_435(2);
	cVar0 = { func_160() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && func_115()) && !MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&cVar0, iParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!func_179(iParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_298(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				func_336(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_aggro", 24);
			}
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&cVar0, "_lost1", 24);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&cVar0, "_spotd1", 24);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&cVar0, "_wntd1", 24);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&cVar0, "_spook", 24);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_179(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
				{
					func_333(iParam0, 4096, 0);
				}
				else
				{
					func_333(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&cVar0, "_hit2", 24);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&cVar0, "_jak", 24);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_shot1", 24);
				}
				func_336(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_257(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_336(iParam0, &cVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_336(iParam0, &cVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_336(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_257(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_333(iParam0, 0, 0);
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_336(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_336(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&cVar0, "OJTX_QUIT_", 24);
			func_332(&cVar0);
			func_331(&(iParam0->f_244), "OJTXAUD", &cVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_fail1", 24);
			}
			func_336(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&cVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_336(iParam0, &cVar0);
				}
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_298(iParam0, 3, 0f, 1);
	}
}

int func_331(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_142(sParam2, iParam3, 0);
}

void func_332(char* sParam0)
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_333(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(iParam0->f_3);
		if ((func_209(iParam0->f_3, iParam0->f_29, 1) <= 200f && !func_335(iParam0->f_29)) && !bParam2)
		{
			func_334(iParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (iParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
	}
}

void func_334(int iParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (func_40(func_41(), iParam0->f_29, 0))
		{
			if (iParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
			}
			else if (iParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (iParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (iParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (iParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, iParam0->f_29, 15f, 0);
			}
			else if (iParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, iParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(iParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, iParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
	}
}

int func_335(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_336(int iParam0, char* sParam1)
{
	if (func_337(iParam0))
	{
		func_331(&(iParam0->f_244), iParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_337(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (func_172(PLAYER::PLAYER_PED_ID(), iParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	return iParam0->f_118;
}

void func_339()
{
	func_371(&Local_409);
	if (func_370(&Local_409, &Local_1034))
	{
		switch (Local_1034.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_369(&Local_409))
					{
						if (func_368("TX_OBJ_GYB_DO") || HUD::DOES_BLIP_EXIST(Local_409.f_9))
						{
							Local_1034.f_27++;
						}
						else if (func_367(&Local_409) != 10)
						{
							func_230(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((func_367(&Local_409) > 10 && func_367(&Local_409) != 15) && !func_369(&Local_409))
				{
					func_230(&Local_409, 15, 1, 0, 0);
					if (bLocal_1033)
					{
					}
					func_304(&Local_409, 7);
				}
				break;
			case 2:
				if (((func_367(&Local_409) != 16 && !func_369(&Local_409)) && func_113(&Local_409, 18) > 2f) && !func_115())
				{
					func_230(&Local_409, 16, 1, 0, 0);
					if (bLocal_1033)
					{
					}
				}
				break;
			case 3:
				if (func_113(&Local_409, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 7f))
				{
					if (!func_183(&Local_409))
					{
						func_366(&Local_409, 0);
						Local_1034.f_27++;
						if (bLocal_1033)
						{
						}
					}
				}
				break;
		}
	}
	func_340(&Local_409, &uLocal_1064, &Local_1034, bLocal_1033);
}

int func_340(int iParam0, char[4] cParam1, var uParam2, bool bParam3)
{
	func_348(iParam0, cParam1);
	if (((*uParam2 == -1 && iParam0->f_410 < 29) && !iParam0->f_109) && !func_305(iParam0, 2))
	{
		if (func_347(cParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!iParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_346(iParam0))
				{
					uParam2->f_7 = { func_345(cParam1) };
					func_331(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (func_115())
				{
					uParam2->f_13 = { func_233() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_167(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_343(cParam1);
					func_298(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (func_186(iParam0))
				{
					if (func_115())
					{
						func_298(iParam0, 17, 0f, 1);
						uParam2->f_1 = { func_342() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_115())
				{
					uParam2->f_19 = { func_160() };
				}
				else
				{
					func_167(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_343(cParam1);
					func_298(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!func_305(iParam0, 14) && !func_115()) && !func_186(iParam0)) && func_113(iParam0, 18) > 1f)
				{
					func_298(iParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!func_115())
				{
					if (func_113(iParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_341(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!func_115())
				{
					func_167(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_343(cParam1);
					func_298(iParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
		}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_142(sParam2, iParam4, 0);
}

struct<6> func_342()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_343(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_344(cParam0);
	if (iVar0 > -1)
	{
		func_124(&((cParam0[iVar0 /*8*/])->f_7), 2);
		func_124(&((cParam0[iVar0 /*8*/])->f_7), 4);
		func_173(&((cParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(cParam0[iVar0 /*8*/], func_207(), 24);
	}
}

int func_344(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((cParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_345(char[4] cParam0)
{
	int iVar0;
	struct<6> Var1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((cParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(cParam0[iVar0 /*8*/]) };
			func_173(&((cParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_346(int iParam0)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (func_188("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (func_188("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (func_188("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 3:
			if ((func_188("TX_OBJ_GYB_DO", 0, 0) || func_188("TAXI_OBJ_GYB", 0, 0)) || func_188("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		case 4:
			if (func_188("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 5:
			if ((func_188("TX_OBJ_CYI_DO", 0, 0) || func_188("TAXI_OBJ_CYI_01", 0, 0)) || func_188("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		case 6:
			if (((func_188("TX_OBJ_GYN_DO", 0, 0) || func_188("TAXI_OBJ_GYN", 0, 0)) || func_188("TAXI_OBJ_GYN_TG", 0, 0)) || func_188("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		case 7:
			if ((func_188("TAXI_OBJ_CC1", 0, 0) || func_188("TAXI_OBJ_CC2", 0, 0)) || func_188("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		case 8:
			if ((func_188("TAXI_OBJ_FTC1", 0, 0) || func_188("TAXI_OBJ_FTC2", 0, 0)) || func_188("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		case 9:
			if (func_188("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_188("TAXI_OBJ_GETRUN", 0, 0) || func_188("TAXI_OBJ_DRIVE", 0, 0)) || func_188("TAXI_OBJ_RETURN", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0)) || func_188("TAXI_OBJ_RUNOUT", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0));
}

int func_347(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((cParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_348(int iParam0, char[4] cParam1)
{
	vector3 vVar0[24];
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;

	if (func_346(iParam0))
	{
	}
	else if (!iParam0->f_110)
	{
	}
	else if (func_305(iParam0, 14))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_367(iParam0))
		{
			case 55:
				StringConCat(&cVar0, "_lvMe1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_364(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 2:
				if (!func_115())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_retrn1", 24);
					}
					if (iParam0->f_411 != 9)
					{
						func_363(iParam0, &cVar0, 0, 0, 8);
					}
				}
				else
				{
					func_360(iParam0, cVar0, func_362(iParam0, 2));
				}
				if (func_22(iParam0->f_98, 4))
				{
					func_298(iParam0, 16, 0, 0);
					func_261(iParam0, 0, 0);
				}
				func_197(iParam0, &(iParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_113(iParam0, 16) > 1f)
				{
					func_199(1);
					if (iParam0->f_411 == 9)
					{
						func_158("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_158("TAXI_VIP_RETURN", 7500, 1);
					}
					func_298(iParam0, 16, 0, 0);
					func_261(iParam0, 0, 0);
				}
				break;
			case 65:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aggro", 24);
				}
				iParam0->f_107++;
				if (iParam0->f_411 != 9)
				{
					func_363(iParam0, &cVar0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(iParam0->f_3))
				{
					func_257(iParam0->f_3, "TAXI_WHAT_THE_HELL", iParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_113(iParam0, 16) > func_134(iParam0->f_411 == 0, 1f, 4f) && !iParam0->f_142) && (((iParam0->f_411 == 0 || iParam0->f_411 == 1) && !func_115()) || (iParam0->f_411 != 0 && iParam0->f_411 != 1)))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_367(iParam0))
		{
			case 142:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_363(iParam0, &cVar0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&cVar0, "_lvMe2", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_364(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 0:
				if (iParam0->f_411 == 9)
				{
					func_331(&(iParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_230(iParam0, 1, 1, 0, 0);
				break;
			case 1:
				func_298(iParam0, 16, 0, 0);
				func_230(iParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&cVar0, "_hail1", 24);
				cVar6 = { cVar0 };
				if (!func_22(iParam0->f_44, 128))
				{
					if ((iParam0->f_411 == 0 || iParam0->f_411 == 1) || iParam0->f_411 == 4)
					{
						func_365(&(iParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_363(iParam0, &cVar0, 0, 0, 8);
					}
				}
				func_298(iParam0, 16, 4f, 0);
				iParam0->f_141 = 1;
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 5:
				if (iParam0->f_411 == 7)
				{
					func_158("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_158("TAXI_OBJ_PICKUP", 7500, 1);
				}
				iParam0->f_141 = 1;
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 8:
				StringConCat(&cVar0, "_obj1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						iParam0->f_9 = func_359(iParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(iParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(iParam0->f_9, iParam0->f_17);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
				}
				func_230(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 9:
				if ((iParam0->f_101 == 1 || iParam0->f_411 == 2) || iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_gret1", 24);
				}
				else
				{
					switch (iParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_gret3", 24);
							break;
						default:
							StringConCat(&cVar0, "_gret4", 24);
							break;
					}
				}
				func_232(&cVar0);
				if (iParam0->f_411 != 9)
				{
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					func_257(iParam0->f_3, "TAXI_START", iParam0->f_145, 4);
				}
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						iParam0->f_9 = func_359(iParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(iParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(iParam0->f_9, iParam0->f_17);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
				}
				func_230(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&cVar0, "_dest2", 24);
				func_358(iParam0, 33554432, cVar0, "", 1, 8);
				func_298(iParam0, 16, 0, 0);
				func_230(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 10:
				if (!func_115())
				{
					func_357(iParam0, 0);
					func_173(&(iParam0->f_44), 4);
					func_298(iParam0, 16, 0, 0);
					func_230(iParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&cVar0, "_bant3", 24);
						break;
					default:
						StringConCat(&cVar0, "_bant1", 24);
						break;
				}
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 11, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 15:
				if (func_113(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant1", 24);
						func_232(&cVar0);
					}
					func_355(cVar0, cParam1);
					func_173(&(iParam0->f_81), 67108864);
					func_298(iParam0, 16, 0, 0);
					func_298(iParam0, 11, 0, 0);
					func_261(iParam0, 0, 0);
				}
				break;
			case 16:
				if (func_113(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban2", 24);
					}
					else if (iParam0->f_411 == 1)
					{
						StringConCat(&cVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant2", 24);
						if (iParam0->f_411 != 6)
						{
							func_232(&cVar0);
						}
					}
					func_355(cVar0, cParam1);
					func_298(iParam0, 11, 0, 0);
					func_298(iParam0, 16, 0, 0);
					func_261(iParam0, 0, 0);
				}
				break;
			case 17:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant3", 24);
					func_232(&cVar0);
				}
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 18:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant4", 24);
				}
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 19:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant5", 24);
				}
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 20:
				StringConCat(&cVar0, "_dest2b", 24);
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 11, 0, 0);
				func_261(iParam0, 0, 0);
				func_173(&(iParam0->f_82), 262144);
				iParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&cVar0, "_seePt1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 24, 1, 0, 0);
				break;
			case 24:
				iParam0->f_417 = 24;
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 90:
				StringConCat(&cVar0, "_talk", 24);
				StringIntConCat(&cVar0, 1, 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 1, 0, 8);
				break;
			case 89:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					default:
						StringConCat(&cVar0, "_deal1", 24);
						break;
				}
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&cVar0, "_ig1c", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&cVar0, "_bTime", 24);
				if (iParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (iParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (iParam0->f_411 == 2)
				{
					func_354(&(iParam0->f_90), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_354(&(iParam0->f_90), 3, &cVar0, &iVar15, 1, 0);
				}
				func_355(cVar0, cParam1);
				func_364(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 6, 0f, 1);
				func_261(iParam0, 0, 0);
				break;
			case 26:
				StringConCat(&cVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (iParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (iParam0->f_411 == 2)
				{
					func_354(&(iParam0->f_89), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_354(&(iParam0->f_89), 3, &cVar0, &iVar15, 1, 0);
				}
				func_355(cVar0, cParam1);
				func_364(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 6, 0f, 1);
				func_261(iParam0, 0, 0);
				break;
			case 12:
				func_158("TAXI_OBJ_GYB", 3500, 1);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 11:
				if (iParam0->f_410 == 12 || iParam0->f_410 == 18)
				{
					func_158("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (iParam0->f_410 < 21)
				{
					func_158("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_158("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				iParam0->f_417 = 11;
				iParam0->f_141 = 1;
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 28:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_dest1B", 24);
						break;
					default:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
				}
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!func_22(iParam0->f_98, 268435456))
				{
					func_158("TAXI_OBJ_CYI_01", 7500, 1);
					func_173(&(iParam0->f_98), 268435456);
				}
				iParam0->f_417 = 29;
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 30:
				StringConCat(&cVar0, "_rCar1", 24);
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				iParam0->f_124 = { cVar0 };
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 31:
				StringConCat(&cVar0, "_rCar2", 24);
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				iParam0->f_124 = { cVar0 };
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 32:
				StringConCat(&cVar0, "_rCar3", 24);
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				iParam0->f_124 = { cVar0 };
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 33:
				func_158("TAXI_OBJ_CYI_02", 7500, 1);
				iParam0->f_417 = 33;
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 34:
				if (!func_22(iParam0->f_82, 8192))
				{
					if (func_113(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_airBr1", 24);
						func_232(&cVar0);
						if (iParam0->f_411 == 5)
						{
							func_355(cVar0, cParam1);
						}
						else
						{
							func_363(iParam0, &cVar0, 0, 0, 8);
						}
						func_173(&(iParam0->f_82), 8192);
						func_298(iParam0, 16, 0, 0);
						func_298(iParam0, 11, 0, 0);
						func_261(iParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!func_22(iParam0->f_82, 16384))
				{
					StringConCat(&cVar0, "_seeD1", 24);
					func_232(&cVar0);
					func_363(iParam0, &cVar0, 0, 0, 8);
					func_173(&(iParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!func_22(iParam0->f_82, 32768))
				{
					StringConCat(&cVar0, "_seeD2", 24);
					func_232(&cVar0);
					func_363(iParam0, &cVar0, 0, 0, 8);
					func_173(&(iParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&cVar0, "_done1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (iParam0->f_101 == 1)
				{
					StringConCat(&cVar0, "_ftc1", 24);
				}
				else
				{
					switch (iParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_ftc1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_ftc2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_ftc3", 24);
							break;
						default:
							StringConCat(&cVar0, "_ftc3", 24);
							break;
					}
				}
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 139, 1, 0, 0);
				iParam0->f_417 = 139;
				func_261(iParam0, 0, 0);
				break;
			case 139:
				func_158("TAXI_OBJ_FTC2", 7500, 1);
				iParam0->f_417 = 13;
				func_230(iParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&cVar0, "_dOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_22(iParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_173(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 39:
				StringConCat(&cVar0, "_bdOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_22(iParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_173(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 41:
				StringConCat(&cVar0, "_dr2P", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 42:
				StringConCat(&cVar0, "_dr2N", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 40:
				StringConCat(&cVar0, "_dOff2", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 44, 1, 0, 0);
				break;
			case 44:
				func_158("TAXI_OBJ_CC2", 7500, 1);
				iParam0->f_417 = 44;
				func_261(iParam0, 0, 0);
				func_230(iParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&cVar0, "_dOff3", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!func_115())
				{
					func_158("TAXI_OBJ_CC3", 7500, 1);
					iParam0->f_417 = 45;
					func_261(iParam0, 0, 0);
					func_230(iParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				func_158("TAXI_OBJ_FTC3", 7500, 1);
				iParam0->f_417 = 46;
				func_261(iParam0, 0, 0);
				break;
			case 21:
				if (!func_22(iParam0->f_81, 1))
				{
					func_353(iParam0, 1, cVar0, "_sick1", 8);
					func_124(&(iParam0->f_81), 2);
				}
				else if (!func_22(iParam0->f_81, 2))
				{
					func_353(iParam0, 2, cVar0, "_sick2", 8);
					func_124(&(iParam0->f_81), 1);
				}
				func_364(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 22:
				if (!func_22(iParam0->f_82, 2097152))
				{
					StringConCat(&cVar0, "_nopke1", 24);
				}
				else if (!func_22(iParam0->f_82, 4194304))
				{
					StringConCat(&cVar0, "_nopke2", 24);
				}
				func_173(&(iParam0->f_81), 2097152);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_298(iParam0, 16, 0, 0);
				func_364(17, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_261(iParam0, 0, 0);
				break;
			case 61:
				StringConCat(&cVar0, "_Puke1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_364(18, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 63:
				StringConCat(&cVar0, "_PkStp2", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_364(20, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 62:
				StringConCat(&cVar0, "_PkStp1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_364(19, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 64:
				StringConCat(&cVar0, "_PukeR1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 71:
				if (!func_22(iParam0->f_81, 4))
				{
					func_353(iParam0, 4, cVar0, "_turns1", 8);
				}
				else if (!func_22(iParam0->f_81, 8))
				{
					func_353(iParam0, 8, cVar0, "_turns2", 8);
				}
				else
				{
					func_353(iParam0, 8, cVar0, "_turns3", 8);
					func_124(&(iParam0->f_81), 4);
					func_124(&(iParam0->f_81), 8);
				}
				func_364(13, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 72:
				if (func_352(iParam0))
				{
					func_360(iParam0, cVar0, func_362(iParam0, 72));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_257(iParam0->f_3, "CRASH_GENERIC", iParam0->f_145, 4);
					}
				}
				else if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_carHt", 24);
					cVar6 = { cVar0 };
					func_365(&(iParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&cVar0, "_carHt1", 24);
					cVar6 = { cVar0 };
					if (iParam0->f_411 == 0)
					{
						func_365(&(iParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_365(&(iParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				func_364(2, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 73:
				StringConCat(&cVar0, "_genPnHi", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 75:
				if (!func_22(iParam0->f_83, 128))
				{
					StringConCat(&cVar0, "_nMiss1", 24);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 128);
					func_124(&(iParam0->f_83), 256);
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 256))
				{
					StringConCat(&cVar0, "_nMiss2", 24);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 256);
					func_124(&(iParam0->f_83), 512);
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 512))
				{
					StringConCat(&cVar0, "_nMiss3", 24);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 512);
					func_124(&(iParam0->f_83), 128);
					func_298(iParam0, 16, 0, 0);
				}
				func_261(iParam0, 0, 0);
				break;
			case 76:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(iParam0->f_83, 1))
				{
					StringConCat(&cVar0, "_air1", 24);
					if (bVar24)
					{
						func_232(&cVar0);
					}
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 1);
					func_124(&(iParam0->f_83), 2);
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 2))
				{
					StringConCat(&cVar0, "_air2", 24);
					if (bVar24)
					{
						func_232(&cVar0);
					}
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 2);
					if (iParam0->f_411 == 0)
					{
						func_124(&(iParam0->f_83), 4);
					}
					else
					{
						func_124(&(iParam0->f_83), 1);
					}
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 4))
				{
					StringConCat(&cVar0, "_air3", 24);
					if (bVar24)
					{
						func_232(&cVar0);
					}
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 4);
					func_124(&(iParam0->f_83), 1);
					func_298(iParam0, 16, 0, 0);
				}
				func_364(11, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 79:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(iParam0->f_81, 4096))
				{
					func_358(iParam0, 4096, cVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_22(iParam0->f_81, 8192))
				{
					func_358(iParam0, 8192, cVar0, "_sideW2", bVar24, 8);
				}
				func_364(15, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 80:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(iParam0->f_81, 16384))
				{
					func_358(iParam0, 16384, cVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_22(iParam0->f_81, 32768))
				{
					func_358(iParam0, 32768, cVar0, "_opLne2", bVar24, 8);
				}
				func_364(14, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 83:
				if (iParam0->f_411 == 0)
				{
					if (!func_22(iParam0->f_82, 8))
					{
						func_351(iParam0, 8, cVar0, "_bored1", 8, 0);
					}
					else if (!func_22(iParam0->f_82, 16))
					{
						func_351(iParam0, 16, cVar0, "_bored2", 8, 0);
					}
					else if (!func_22(iParam0->f_82, 32))
					{
						func_351(iParam0, 32, cVar0, "_bored3", 8, 0);
					}
					func_364(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_261(iParam0, 0, 0);
				}
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_good1", 24);
					cVar6 = { cVar0 };
					func_365(&(iParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_364(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_298(iParam0, 16, 0, 0);
					func_261(iParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&cVar0, "_EtoB1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_364(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 93:
				StringConCat(&cVar0, "_BtoE1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_364(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 81:
				if (!func_22(iParam0->f_81, 65536))
				{
					func_358(iParam0, 65536, cVar0, "_runLit1", 1, 8);
				}
				else if (!func_22(iParam0->f_81, 131072))
				{
					func_358(iParam0, 131072, cVar0, "_runLit2", 1, 8);
				}
				func_261(iParam0, 0, 0);
				break;
			case 82:
				if (func_352(iParam0))
				{
					func_360(iParam0, cVar0, func_362(iParam0, 82));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_257(iParam0->f_3, "CAR_HIT_PED_DRIVEN", iParam0->f_145, 4);
					}
				}
				else if (!func_22(iParam0->f_83, 8))
				{
					StringConCat(&cVar0, "_hitR1", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 8);
					func_124(&(iParam0->f_83), 16);
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 16))
				{
					StringConCat(&cVar0, "_hitR2", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 16);
					func_124(&(iParam0->f_83), 32);
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 32))
				{
					StringConCat(&cVar0, "_hitR3", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 32);
					if (iParam0->f_411 == 0)
					{
						func_124(&(iParam0->f_83), 64);
					}
					else
					{
						func_124(&(iParam0->f_83), 8);
					}
					func_298(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 64))
				{
					StringConCat(&cVar0, "_hitR4", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_173(&(iParam0->f_83), 64);
					func_124(&(iParam0->f_83), 8);
					func_298(iParam0, 16, 0, 0);
				}
				func_364(1, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 65:
				if (!func_115())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_aggro", 24);
					}
					func_363(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_360(iParam0, cVar0, func_362(iParam0, 65));
					func_261(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 66:
				if (!func_115())
				{
					if (iParam0->f_411 == 4)
					{
						StringCopy(&cVar0, "tm6_shoot", 24);
					}
					else if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&cVar0, "_shoot", 24);
					}
					func_363(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_360(iParam0, cVar0, func_362(iParam0, 66));
					func_261(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 13:
				if (iParam0->f_411 == 8)
				{
					if (!iParam0->f_109 && !func_115())
					{
						switch (iParam0->f_414)
						{
							case 3:
								StringConCat(&cVar0, "_warnC1", 24);
								func_363(iParam0, &cVar0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&cVar0, "_warnF1", 24);
								func_363(iParam0, &cVar0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&cVar0, "_far1", 24);
								func_363(iParam0, &cVar0, 0, 0, 8);
								func_364(21, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 2:
								StringConCat(&cVar0, "_close1", 24);
								func_363(iParam0, &cVar0, 0, 0, 8);
								func_364(22, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 10:
								StringConCat(&cVar0, "_hit1", 24);
								func_363(iParam0, &cVar0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&cVar0, "_good1", 24);
								cVar6 = { cVar0 };
								func_365(&(iParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
								func_364(23, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
								func_298(iParam0, 16, 0, 0);
								func_261(iParam0, 0, 0);
								break;
							case 9:
								if (!bLocal_64)
								{
									StringConCat(&cVar0, "_sBant1", 24);
									cVar6 = { cVar0 };
									func_363(iParam0, &cVar0, 0, 0, 8);
									func_298(iParam0, 16, 0, 0);
									func_298(iParam0, 11, 0, 0);
									func_261(iParam0, 0, 0);
									if (!bLocal_66)
									{
										bLocal_64 = true;
									}
								}
								else
								{
									if (!bLocal_65)
									{
										StringConCat(&cVar0, "_bant3", 24);
										bLocal_65 = true;
									}
									else
									{
										StringConCat(&cVar0, "_bant2", 24);
										bLocal_66 = true;
									}
									func_232(&cVar0);
									func_363(iParam0, &cVar0, 0, 0, 8);
									func_298(iParam0, 16, 0, 0);
									func_298(iParam0, 11, 0, 0);
									func_261(iParam0, 0, 0);
									bLocal_64 = false;
								}
								break;
							case 7:
								StringConCat(&cVar0, "_done1", 24);
								func_363(iParam0, &cVar0, 0, 0, 8);
								break;
						}
						func_230(iParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&cVar0, "_speed1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_364(10, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 25:
				if (!func_22(iParam0->f_82, 1))
				{
					func_351(iParam0, 1, cVar0, "_close1", 8, 0);
				}
				else if (!func_22(iParam0->f_82, 2))
				{
					func_351(iParam0, 2, cVar0, "_close2", 8, 0);
				}
				else if (!func_22(iParam0->f_82, 4))
				{
					func_351(iParam0, 4, cVar0, "_close3", 8, 0);
				}
				func_261(iParam0, 0, 0);
				break;
			case 48:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_stop1", 24);
				}
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (iParam0->f_411 != 9)
				{
					func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iParam0->f_3))
				{
					func_257(iParam0->f_3, "TAXI_STOPPED", iParam0->f_145, 4);
				}
				func_298(iParam0, 16, 0, 0);
				func_364(5, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 74:
				if (func_352(iParam0))
				{
					func_360(iParam0, cVar0, func_362(iParam0, 74));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_257(iParam0->f_3, "VEHICLE_FLIPPED", iParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&cVar0, "_roll1", 24);
					func_350(iParam0, cVar0, 8);
				}
				func_364(3, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 70:
				if (!func_22(iParam0->f_83, 1024))
				{
					func_173(&(iParam0->f_83), 1024);
					func_298(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv1", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 2048))
				{
					func_173(&(iParam0->f_83), 2048);
					func_298(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv2", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 4096))
				{
					func_173(&(iParam0->f_83), 4096);
					func_298(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv3", 24);
					func_232(&cVar0);
					func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				func_261(iParam0, 0, 0);
				break;
			case 69:
				if (!func_22(iParam0->f_82, 1024))
				{
					func_351(iParam0, 1024, cVar0, "_rvrs1", 8, 1);
					func_124(&(iParam0->f_82), 2048);
				}
				else if (!func_22(iParam0->f_82, 2048))
				{
					func_351(iParam0, 2048, cVar0, "_rvrs2", 8, 1);
				}
				func_261(iParam0, 0, 0);
				break;
			case 67:
				StringConCat(&cVar0, "_ofrd1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_364(16, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 68:
				StringConCat(&cVar0, "_ofrdch1", 24);
				func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 49:
				StringConCat(&cVar0, "_losPol1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_lsPo1", 24);
				}
				if (iParam0->f_411 != 9)
				{
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(iParam0->f_3))
				{
					func_257(iParam0->f_3, "POLICE_PURSUIT_DRIVEN", iParam0->f_145, 4);
				}
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 51:
				if (func_352(iParam0))
				{
					if (iParam0->f_411 == 2)
					{
						StringConCat(&cVar0, "_copBa1", 24);
						cVar6 = { cVar0 };
						cVar6 = { cVar0 };
						func_363(iParam0, &cVar0, 0, 0, 8);
						func_230(iParam0, 52, 1, 0, 0);
						func_298(iParam0, 16, 0, 0);
					}
					else
					{
						if (iParam0->f_411 == 5 && iParam0->f_410 > 9)
						{
							StringConCat(&cVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_copBa1", 24);
						}
						cVar6 = { cVar0 };
						func_363(iParam0, &cVar0, 0, 0, 8);
						func_298(iParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&cVar0, "_copBa1", 24);
					cVar6 = { cVar0 };
					func_365(&(iParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_298(iParam0, 16, 0, 0);
					func_261(iParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&cVar0, "_evdeP1", 24);
				func_364(8, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_298(iParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_158("TAXI_OBJ_POL", 7500, 1);
					iParam0->f_417 = 52;
				}
				func_261(iParam0, 0, 0);
				break;
			case 54:
				StringConCat(&cVar0, "_cpFz1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 84:
				if (!func_22(iParam0->f_81, 262144))
				{
					func_358(iParam0, 262144, cVar0, "_rdCh1", 1, 8);
				}
				else if (!func_22(iParam0->f_81, 1048576))
				{
					if (iParam0->f_411 == 0 || iParam0->f_411 == 1)
					{
						func_358(iParam0, 1048576, cVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_358(iParam0, 1048576, cVar0, "_rdCh2", 0, 8);
					}
				}
				func_364(7, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 85:
				if (!func_22(iParam0->f_82, 67108864))
				{
					if (iParam0->f_418.f_6)
					{
						func_349(iParam0, 67108864, cVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(iParam0->f_82, 134217728))
				{
					func_349(iParam0, 134217728, cVar0, "_rdFv1", 0, 7);
				}
				func_364(6, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 86:
				StringConCat(&cVar0, "_rdneu1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&cVar0, "_rdtip1", 24);
				cVar6 = { cVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, iParam0->f_418.f_3, 24);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 100:
				func_158("TAXI_OBJ_GYB_2", 7500, 1);
				iParam0->f_417 = 100;
				func_261(iParam0, 0, 0);
				break;
			case 47:
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_horn", 24);
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&cVar0, "_thank1", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_232(&cVar0);
				}
				func_173(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&cVar0, "_thank2", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_232(&cVar0);
				}
				func_173(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 103:
				if (iParam0->f_411 == 4)
				{
					StringConCat(&cVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_thank3", 24);
				}
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_232(&cVar0);
				}
				func_173(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 97:
				if (!func_22(iParam0->f_82, 65536))
				{
					if (func_113(iParam0, 11) > iParam0->f_36)
					{
						switch (iParam0->f_102)
						{
							case 0:
								StringConCat(&cVar0, "_ccba2", 24);
								break;
							case 1:
								StringConCat(&cVar0, "_ccba1", 24);
								break;
							default:
								StringConCat(&cVar0, "_ccba1", 24);
								break;
						}
						func_232(&cVar0);
						func_355(cVar0, cParam1);
						func_173(&(iParam0->f_82), 65536);
						func_298(iParam0, 16, 0, 0);
						func_298(iParam0, 11, 0, 0);
						func_261(iParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!func_22(iParam0->f_82, 131072))
				{
					if (func_113(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_ccbb1", 24);
						func_232(&cVar0);
						func_355(cVar0, cParam1);
						func_173(&(iParam0->f_82), 131072);
						func_298(iParam0, 16, 0, 0);
						func_298(iParam0, 11, 0, 0);
						func_261(iParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!func_22(iParam0->f_82, 8388608))
				{
					StringConCat(&cVar0, "_close1", 24);
					func_173(&(iParam0->f_82), 8388608);
				}
				else if (!func_22(iParam0->f_82, 16777216))
				{
					StringConCat(&cVar0, "_close2", 24);
					func_173(&(iParam0->f_82), 16777216);
				}
				else if (!func_22(iParam0->f_82, 33554432))
				{
					StringConCat(&cVar0, "_close3", 24);
					func_173(&(iParam0->f_82), 33554432);
				}
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 58:
				if (iParam0->f_411 == 6)
				{
					StringConCat(&cVar0, "_kill1", 24);
					cVar6 = { cVar0 };
					func_365(&(iParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_232(&cVar0);
					func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (iParam0->f_411 == 8)
				{
					StringConCat(&cVar0, "_cheat1", 24);
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&cVar0, "_kill1", 24);
					func_363(iParam0, &cVar0, 0, 0, 8);
				}
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 95:
				StringConCat(&cVar0, "_wndw2", 24);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 11, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 94:
				StringConCat(&cVar0, "_wndw0", 24);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 11, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 96:
				StringConCat(&cVar0, "_wndw1", 24);
				func_355(cVar0, cParam1);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 11, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 113:
				StringConCat(&cVar0, "_csite1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&cVar0, "_fair1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&cVar0, "_AlCk1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 116:
				StringConCat(&cVar0, "_eggG1", 24);
				cVar6 = { cVar0 };
				func_365(&(iParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_141(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 114:
				StringConCat(&cVar0, "_goons1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&cVar0, "_oRun1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&cVar0, "_gotG1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&cVar0, "_getA1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&cVar0, "_gnawy1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&cVar0, "_grl1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&cVar0, "_figt1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&cVar0, "_gEgg1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&cVar0, "_gEgg3", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&cVar0, "_gEgg2", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&cVar0, "_gLeav1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&cVar0, "_aKill1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&cVar0, "_gHelp1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&cVar0, "_gDest1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_230(iParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&cVar0, "_gKO1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&cVar0, "_gThank1", 24);
				func_173(&(iParam0->f_81), 2097152);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&cVar0, "_gDriv1", 24);
				func_232(&cVar0);
				func_355(cVar0, cParam1);
				func_173(&(iParam0->f_81), 67108864);
				func_298(iParam0, 16, 0, 0);
				func_298(iParam0, 11, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 60:
				StringConCat(&cVar0, "_cash1", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 105:
				if (!func_22(iParam0->f_81, 33554432) && iParam0->f_411 != 9)
				{
					func_358(iParam0, 33554432, cVar0, "_noPay1", 1, 8);
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_257(iParam0->f_3, "TAXI_NO_PAY", iParam0->f_145, 4);
					}
				}
				func_230(iParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&cVar0, "_foot", 24);
				func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 107:
				if (!func_22(iParam0->f_81, 268435456))
				{
					func_358(iParam0, 268435456, cVar0, "_kPay1", 1, 8);
				}
				func_230(iParam0, 52, 1, 0, 0);
				break;
			case 108:
				func_158("TAXI_OBJ_RUNOUT", 7500, 1);
				iParam0->f_417 = 108;
				func_261(iParam0, 0, 0);
				break;
			case 109:
				if (!func_22(iParam0->f_81, 4194304))
				{
					if (iParam0->f_411 == 2 || iParam0->f_411 == 6)
					{
						func_358(iParam0, 4194304, cVar0, "_mPay1", 0, 8);
					}
					else if (iParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(iParam0->f_3))
						{
							func_257(iParam0->f_3, "APOLOGY_NO_TROUBLE", iParam0->f_145, 4);
						}
					}
					else
					{
						func_358(iParam0, 4194304, cVar0, "_mPay1", 1, 8);
					}
				}
				func_230(iParam0, 111, 1, 0, 0);
				break;
			case 111:
				func_158("TAXI_OBJ_GETRUN", 7500, 1);
				iParam0->f_417 = 111;
				func_261(iParam0, 0, 0);
				break;
			case 110:
				StringConCat(&cVar0, "_runoff", 24);
				func_331(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_298(iParam0, 16, 0, 0);
				func_261(iParam0, 0, 0);
				break;
			case 141:
				if (!func_22(iParam0->f_81, 16777216))
				{
					func_358(iParam0, 16777216, cVar0, "_ret1", 1, 8);
				}
				func_261(iParam0, 0, 0);
				break;
			case 88:
				func_158("TAXI_TIEFLEE", 7500, 1);
				func_261(iParam0, 0, 0);
				break;
			case 57:
				if (!func_22(iParam0->f_98, 536870912))
				{
					func_158("TAXI_OBJ_CYI_1B", 7500, 1);
					func_173(&(iParam0->f_98), 536870912);
				}
				iParam0->f_417 = 57;
				func_261(iParam0, 0, 0);
				break;
			case 104:
				StringConCat(&cVar0, "_joke1", 24);
				func_232(&cVar0);
				func_363(iParam0, &cVar0, 0, 0, 8);
				break;
			case 136:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_wronglz", 24);
				}
				else if (iParam0->f_116)
				{
					StringConCat(&cVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_wrong", 24);
				}
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_261(iParam0, 0, 0);
				break;
			case 140:
				StringConCat(&cVar0, "_shout", 24);
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_261(iParam0, 0, 0);
				break;
			case 135:
				if (iParam0->f_411 == 4)
				{
					StringCopy(&cVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&cVar0, "_jack", 24);
				}
				func_363(iParam0, &cVar0, 0, 0, 8);
				func_261(iParam0, 0, 0);
				break;
			case 133:
				StringConCat(&cVar0, "_getCar", 24);
				func_363(iParam0, &cVar0, 1, 0, 8);
				func_230(iParam0, 134, 1, 0, 0);
				break;
			case 134:
				func_158("TX_VIP", 7500, 0);
				iParam0->f_417 = 134;
				func_230(iParam0, 0, 0, 0, 0);
				func_261(iParam0, 0, 0);
				break;
		}
	}
}

void func_349(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_173(&(iParam0->f_82), iParam1);
	func_298(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_232(&cParam2);
	}
	func_331(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_350(int iParam0, char[24] cParam1, int iParam7)
{
	vector3 vVar0[24];

	cVar0 = { cParam1 };
	if (!func_22(iParam0->f_82, 64))
	{
		func_173(&(iParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(iParam0->f_82, 128))
	{
		func_173(&(iParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_141(&(iParam0->f_244), iParam0->f_144, &cParam1, &cVar0, iParam7, 0, 0);
	func_298(iParam0, 16, 0, 0);
}

void func_351(int iParam0, int iParam1, char[12] cParam2, int iParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_173(&(iParam0->f_82), iParam1);
	func_298(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if ((((iParam0->f_411 == 1 || iParam0->f_411 == 0) || iParam0->f_411 == 5) || iParam0->f_411 == 8) || iParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_232(&cParam2);
		}
	}
	func_331(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

int func_352(int iParam0)
{
	if ((((((iParam0->f_411 == 2 || iParam0->f_411 == 3) || iParam0->f_411 == 4) || iParam0->f_411 == 5) || iParam0->f_411 == 6) || iParam0->f_411 == 7) || iParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_353(int iParam0, int iParam1, char[12] cParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_173(&(iParam0->f_81), iParam1);
	func_298(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	func_331(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

void func_354(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_232(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_355(char[24] cParam0, char[4] cParam6)
{
	int iVar0;

	iVar0 = func_356(cParam6);
	if (iVar0 > -1)
	{
		*(cParam6[iVar0 /*8*/]) = { cParam0 };
		func_173(&((cParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_356(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(cParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_357(int iParam0, bool bParam1)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_158("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_158("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_158("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_158("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_158("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_158("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				func_158("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				func_158("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_158("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				func_158("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_158("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				func_158("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		iParam0->f_139 = 1;
	}
}

void func_358(int iParam0, int iParam1, char[12] cParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_173(&(iParam0->f_81), iParam1);
	func_298(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_232(&cParam2);
	}
	func_331(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

int func_359(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_134(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_360(int iParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_298(iParam0, 16, 0, 0);
	func_298(iParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(iParam0->f_3, &cParam1, func_361(iParam0));
	}
}

char* func_361(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		case 1:
			sVar0 = "TaxiOtis";
			break;
		case 2:
			sVar0 = "TaxiKwak";
			break;
		case 3:
			sVar0 = "TaxiWalter";
			break;
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		case 7:
			sVar0 = "TaxiDarren";
			break;
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_362(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (iParam0->f_411)
			{
				case 0:
					return "_ACRH";
				case 1:
					return "_ACRH";
				case 2:
					return "_ACAA";
				case 3:
					return "_ACRH";
				case 4:
					return "_AEAA";
				case 5:
					return "_DKAA";
				case 6:
					return "_ACAA";
				case 7:
					return "_ACAA";
				case 8:
					return "_ACRH";
				default:
					break;
			}
			return "_ACRH";
		case 82:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AHIT";
				case 1:
					return "_AHIT";
				case 2:
					return "_AEAA";
				case 3:
					return "_ADAA";
				case 4:
					return "_AFAA";
				case 5:
					return "_AFAA";
				case 6:
					return "_AEAA";
				case 7:
					return "_AHAA";
				case 8:
					return "_AEAA";
				default:
					break;
			}
			return "_AHIT";
		case 74:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AROL";
				case 1:
					return "_AROL";
				case 2:
					return "_AHAA";
				case 3:
					return "_AROL";
				case 4:
					return "_AGAA";
				case 5:
					return "_AROL";
				case 6:
					return "_AROL";
				case 7:
					return "_AROL";
				case 8:
					return "_AROL";
				default:
					break;
			}
			return "_AROL";
		case 65:
			switch (iParam0->f_411)
			{
				case 0:
					return "_ABAA";
				case 1:
					return "_FUAA";
				case 2:
					return "_AFAA";
				case 3:
					return "_DBAA";
				case 4:
					return "_DLAA";
				case 5:
					return "_DKAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				case 7:
					return "_DBAA";
				case 8:
					return "_EFAA";
				default:
					return "_AROL";
			}
			break;
		case 66:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AEAA";
				case 1:
					return "_ACAA";
				case 2:
					return "_AJAA";
				case 3:
					return "_AHAA";
				case 4:
					return "_AHAA";
				case 5:
					return "_AIAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				case 7:
					return "_AUAA";
				case 8:
					return "_AHAA";
				default:
					return "_AROL";
			}
			break;
		case 2:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AAAA";
				case 1:
					return "_AAAA";
				case 2:
					return "_ADAA";
				case 3:
					return "_ABAA";
				case 4:
					return "_AAAA";
				case 5:
					return "_ABAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				case 7:
					return "_BUAA";
				case 8:
					return "_ADAA";
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_363(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_298(iParam0, 16, 0, 0);
	if (bParam3)
	{
		func_298(iParam0, 17, 0f, 1);
	}
	func_261(iParam0, iParam2, 0);
	return func_331(&(iParam0->f_244), iParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_22(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_22(*uParam2, 1073741824 /* Float: 2f */))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_22(*uParam2, 4))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_22(*uParam2, 512))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_22(*uParam2, 16))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_22(*uParam2, 64))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_22(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_22(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_22(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_22(*uParam2, 8192))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_22(*uParam2, 16384))
		{
			if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_22(*uParam2, 32768))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_22(*uParam2, 65536))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_22(*uParam2, 131072))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_22(*uParam2, 262144))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_22(*uParam2, 524288))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_22(*uParam2, 1048576))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_22(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_22(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_22(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_22(*uParam2, 67108864))
		{
			if (func_22(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_22(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_22(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_22(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_22(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_365(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_232(sParam2);
				}
				else
				{
					func_232(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_366(int iParam0, bool bParam1)
{
	iParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_367(int iParam0)
{
	return iParam0->f_416;
}

int func_368(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_188(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	if (func_115())
	{
		return 1;
	}
	if (func_305(iParam0, 17))
	{
		return 1;
	}
	if (func_305(iParam0, 14))
	{
		return 1;
	}
	if (func_186(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_370(int iParam0, var uParam1)
{
	return ((*uParam1 == -1 && iParam0->f_412 == 0) && !func_305(iParam0, 9));
}

void func_371(int iParam0)
{
	if (func_305(iParam0, 17))
	{
		if (!func_305(iParam0, 14))
		{
			if (!func_186(iParam0))
			{
				if (!func_115())
				{
					func_112(iParam0, 17, 1);
				}
			}
		}
	}
}

bool func_372(int iParam0)
{
	return iParam0->f_117;
}

void func_373(int iParam0, var uParam1, bool bParam2)
{
	if (!func_22(iParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_124)) && func_115())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!func_115())
				{
					StringCopy(&(iParam0->f_124), func_207(), 24);
					iParam0->f_56 = (iParam0->f_56 + iParam0->f_57);
					if (iParam0->f_56 < 0)
					{
						iParam0->f_56 = 0;
					}
					iParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
		}
	}
}

void func_374(int iParam0)
{
	int iVar0;

	if (iParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
		{
			if (Local_343 > 0 && !func_275(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_275(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(iParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_275(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_167(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_125(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_275(Local_343.f_1[iVar0 /*4*/], 4) && !func_275(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(iParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_167(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_330(iParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_375(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_305(iParam0, 27))
	{
		func_304(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_113(iParam0, 27) > 5f)
	{
		if (func_402(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_298(iParam0, 27, 0, 0);
			func_298(iParam0, 10, 0, 0);
			func_400(iParam0, &uVar0, uParam1);
		}
		func_397(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_376(iParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*iParam0) && !CAM::IS_CAM_ACTIVE(*iParam0))) && (CAM::DOES_CAM_EXIST(iParam0->f_1) && !CAM::IS_CAM_ACTIVE(iParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_115())
	{
		if (func_113(iParam0, 26) > 10f)
		{
			func_112(iParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_305(iParam0, 26))
	{
		func_112(iParam0, 26, 0);
	}
	return 0;
}

void func_376(int iParam0)
{
	if (!func_396(iParam0->f_429))
	{
		iParam0->f_429 = func_395();
		func_386(&(iParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_377(iParam0->f_429))
	{
		func_330(iParam0, "Player took too long to make pickup", 9);
	}
}

bool func_377(int iParam0)
{
	return func_378(func_395(), iParam0);
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_396(iParam1) || !func_396(iParam0))
	{
		return 1;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_380(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_381(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_382(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_383(int iParam0)
{
	return iParam0 & 15;
}

int func_384(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_385(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_385(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_384(*uParam0);
	iVar1 = func_383(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_394(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_394(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_393(uParam0, iParam1);
	func_392(uParam0, iParam2);
	func_391(uParam0, iParam3);
	func_390(uParam0, iParam5);
	func_389(uParam0, iParam4);
	func_388(uParam0, iParam6);
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_389(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_383(*uParam0);
	iVar1 = func_384(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_394(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

int func_395()
{
	var uVar0;

	func_393(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_392(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_391(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_389(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_390(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_388(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_396(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_384(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_383(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 1 || iVar5 > func_394(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_397(int iParam0)
{
	var uVar0;

	if (iParam0->f_410 < 7 && !iParam0->f_138)
	{
		if (((iParam0->f_411 == 9 && func_399()) && !func_163(iParam0)) || ((iParam0->f_411 != 9 && func_265(iParam0, 1)) && !func_163(iParam0)))
		{
			uVar0 = func_398(iParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			iParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_4, true, false);
			func_202(iParam0);
			func_193(iParam0, 0);
		}
	}
}

var func_398(var uParam0)
{
	return uParam0;
}

int func_399()
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_400(int iParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_401(iParam0, 0, 1))
			{
				func_330(iParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (func_401(iParam0, 0, 4))
			{
				func_330(iParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (func_401(iParam0, 0, 8))
			{
				func_330(iParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (func_401(iParam0, 1, 1))
			{
				func_330(iParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (func_401(iParam0, 0, 1))
			{
				func_330(iParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!func_22(*uParam2, 2) && func_179(iParam0))
			{
				func_330(iParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_401(int iParam0, bool bParam1, int iParam2)
{
	if (((iParam0->f_107 >= 2 && iParam0->f_410 < 29) || iParam0->f_410 <= 5) || (bParam1 && !iParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_230(iParam0, 66, 1, 0, 1);
			}
			else
			{
				func_230(iParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_402(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_408(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_406(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_405(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_403(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_403(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_404(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_165(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_405(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, true))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_407(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_172(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_408(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_165(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

void func_409()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<6> Var7;

	Var7 = { func_160() };
	if ((((iLocal_933 < 4 && func_165(Local_409.f_3, 1) < 50f) && Local_409.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !bLocal_976)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 80))
		{
			if (CAM::DOES_CAM_EXIST(Local_409))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_409))
				{
					iLocal_1124 = MISC::GET_GAME_TIMER();
					CAM::SET_CAM_ACTIVE(Local_409, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
			}
		}
	}
	if ((((iLocal_933 < 4 && func_165(Local_409.f_3, 1) < 50f) && Local_409.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !bLocal_976)
	{
		if (bLocal_967)
		{
			switch (iLocal_1122)
			{
				case 0:
					iLocal_1123 = MISC::GET_GAME_TIMER();
					vVar0 = { 223.3f, -3326.3f, 6.4f };
					vVar3 = { -4.1f, 0f, 78f };
					fVar6 = 24.3f;
					func_410(vVar0, vVar3, fVar6);
					iLocal_1122 = 1;
					break;
				case 1:
					if (MISC::ARE_STRINGS_EQUAL("txm12_ig1c_3", &Var7))
					{
						iLocal_1123 = MISC::GET_GAME_TIMER();
						vVar0 = { 211.1f, -3326.1f, 5.8f };
						vVar3 = { 4.1f, 0f, -81.2f };
						fVar6 = 24.3f;
						func_410(vVar0, vVar3, fVar6);
						iLocal_1122 = 2;
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_1123) > 5000)
					{
						iLocal_1123 = MISC::GET_GAME_TIMER();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_410(vVar0, vVar3, fVar6);
						iLocal_1122 = 3;
					}
					break;
				case 3:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_3", &Var7))
					{
						iLocal_1123 = MISC::GET_GAME_TIMER();
						vVar0 = { 194.7488f, -3328.101f, 5.9471f };
						vVar3 = { -0.3369f, -0.0169f, -55.7257f };
						fVar6 = 24.5237f;
						func_410(vVar0, vVar3, fVar6);
						iLocal_1122 = 4;
					}
					break;
				case 4:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_5", &Var7))
					{
						iLocal_1123 = MISC::GET_GAME_TIMER();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_410(vVar0, vVar3, fVar6);
						iLocal_1122 = 5;
					}
					break;
				case 5:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Var7))
					{
						iLocal_1123 = MISC::GET_GAME_TIMER();
						vVar0 = { 194.1f, -3324.9f, 6.2f };
						vVar3 = { -4.6f, 0f, -83.1f };
						fVar6 = 29f;
						func_410(vVar0, vVar3, fVar6);
						iLocal_1122 = 6;
					}
					break;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 80) && (MISC::GET_GAME_TIMER() - iLocal_1124) > 500)
			{
				if (CAM::DOES_CAM_EXIST(Local_409))
				{
					CAM::SET_CAM_ACTIVE(Local_409, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
	}
	else if (bLocal_967)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (CAM::DOES_CAM_EXIST(Local_409))
			{
				if (CAM::IS_CAM_ACTIVE(Local_409))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_CAM_ACTIVE(Local_409, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
		if (bLocal_976)
		{
			if (!func_16(&iLocal_1030))
			{
				if (func_156() && CAM::IS_CAM_ACTIVE(Local_409))
				{
					if (!bLocal_977)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						bLocal_977 = true;
					}
				}
				func_105(&iLocal_1030);
			}
			else if (func_103(&iLocal_1030) > 0.3f)
			{
				if (CAM::DOES_CAM_EXIST(Local_409))
				{
					if (CAM::IS_CAM_ACTIVE(Local_409))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(Local_409, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
}

void func_410(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (!CAM::DOES_CAM_EXIST(Local_409))
	{
		func_241(&Local_409, 0f, 0f, 0f, 0f, 0f, 0f, fParam6);
	}
	CAM::SET_CAM_COORD(Local_409, vParam0);
	CAM::SET_CAM_ROT(Local_409, vParam3, 2);
	CAM::SHAKE_CAM(Local_409, "HAND_SHAKE", 0.3f);
}

void func_411(int iParam0)
{
	if (!func_22(iParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
		{
			if (func_209(iParam0->f_4, iParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(iParam0->f_17, 25f, false, false, false, false, false, false);
				func_173(&(iParam0->f_98), 2);
			}
		}
	}
}

void func_412()
{
	if (!bLocal_969)
	{
		func_413(&Local_409);
		bLocal_969 = true;
	}
	func_435(2);
	if (bLocal_968)
	{
		if (func_10(PLAYER::PLAYER_PED_ID(), Local_409.f_17, 1) > 50f || func_130(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11)))
		{
			func_433();
		}
	}
	else
	{
		func_433();
	}
}

void func_413(int iParam0)
{
	func_11(0, iParam0, 1);
	if (iParam0->f_411 != 9)
	{
		func_435(2);
	}
}

int func_414(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_115() && func_113(iParam0, 3) > 1f) || iParam0->f_415 == 18) || iParam0->f_415 == 14) || iParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, false))
				{
					if (func_62(iParam0) == 0 || func_275(iParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
						{
							func_333(iParam0, 4160, 0);
						}
						else
						{
							func_333(iParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_333(iParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_333(iParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_333(iParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_415(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_10));
	}
}

int func_416(int iParam0)
{
	if (iParam0->f_109 && iParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_417()
{
	Local_409.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_409.f_33 = 88.9745f;
	Local_409.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_409.f_34 = 173.6662f;
	PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_923);
	func_432(1);
	func_421(&Local_409, 3);
	Local_409.f_410 = 0;
	func_420(&Local_409, 3, 6);
	func_418();
}

void func_418()
{
	func_419();
	Local_839 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_419()
{
	Local_839.f_19[0] = joaat("G_M_Y_LOST_01");
	Local_839.f_19[1] = joaat("S_F_Y_HOOKER_01");
	Local_839.f_32[0] = joaat("GBURRITO");
	Local_839.f_32[1] = joaat("DAEMON");
	Local_839.f_32[2] = joaat("HEXER");
	Local_839.f_32[3] = joaat("EMPEROR");
	Local_881.f_19[0] = joaat("G_M_Y_LOST_01");
	Local_881.f_32[0] = joaat("GBURRITO");
	Local_881.f_32[1] = joaat("HEXER");
}

void func_420(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_58 = iParam1;
	iParam0->f_59 = iParam2;
}

void func_421(int iParam0, int iParam1)
{
	func_431(1);
	func_204();
	func_7(&(iParam0->f_244));
	func_430(iParam0);
	iParam0->f_411 = iParam1;
	if (!func_22(Global_111638.f_19092, 4))
	{
		func_173(&(Global_111638.f_19092), 4);
	}
	func_425(iParam0);
	func_423(iParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	iParam0->f_102 = (func_422(iParam0->f_411) % iParam0->f_101);
	iParam0->f_80 = 0;
	iParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_422(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_423(int iParam0)
{
	switch (func_62(iParam0))
	{
		case 0:
			func_424(iParam0, "EXC", "Txm2", "Txm2aud");
			iParam0->f_101 = 2;
			break;
		case 1:
			func_424(iParam0, "TIE", "Txm1", "txm1aud");
			iParam0->f_101 = 1;
			break;
		case 2:
			func_424(iParam0, "DED", "Txm3", "Txm3aud");
			iParam0->f_101 = 1;
			break;
		case 3:
			func_424(iParam0, "GYB", "Txm12", "Txm12au");
			iParam0->f_101 = 2;
			break;
		case 4:
			func_424(iParam0, "TTB", "Txm6", "Txm6aud");
			iParam0->f_101 = 2;
			break;
		case 5:
			func_424(iParam0, "CUI", "Txm8", "Txm8aud");
			iParam0->f_101 = 1;
			break;
		case 6:
			func_424(iParam0, "GYN", "Txm9", "Txm9aud");
			iParam0->f_101 = 1;
			break;
		case 7:
			func_424(iParam0, "TCC", "Txm10", "Txm10au");
			iParam0->f_101 = 2;
			break;
		case 8:
			func_424(iParam0, "TFC", "Txm4", "Txm4aud");
			iParam0->f_101 = 1;
			break;
		case 9:
			func_424(iParam0, "PRO", "txmP", "TxmPaud");
			iParam0->f_101 = 1;
			break;
	}
}

void func_424(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	iParam0->f_122 = sParam1;
	iParam0->f_143 = sParam2;
	iParam0->f_144 = sParam3;
}

void func_425(int iParam0)
{
	int iVar0;

	switch (iParam0->f_411)
	{
		case 0:
			func_429(iParam0, 3);
			func_428(iParam0, 14);
			break;
		case 1:
			func_429(iParam0, 14);
			func_428(iParam0, 8);
			break;
		case 2:
			func_429(iParam0, 8);
			func_428(iParam0, 7);
			break;
		case 3:
			func_429(iParam0, 15);
			func_428(iParam0, 6);
			break;
		case 4:
			func_429(iParam0, 0);
			func_428(iParam0, 3);
			break;
		case 5:
			func_429(iParam0, 6);
			func_428(iParam0, 7);
			break;
		case 6:
			func_429(iParam0, 8);
			func_428(iParam0, 15);
			break;
		case 7:
			func_429(iParam0, 8);
			func_428(iParam0, 14);
			break;
		case 8:
			func_429(iParam0, 7);
			func_428(iParam0, 15);
			break;
		case 9:
			func_429(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_427((iParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_428(iParam0, iVar0);
			func_426(iParam0);
			iParam0->f_418.f_7 = 1;
			iParam0->f_418.f_8 = 1;
			break;
	}
}

void func_426(int iParam0)
{
	switch (iParam0->f_418.f_2)
	{
		case 2:
		case 8:
			iParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			iParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			iParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			iParam0->f_418.f_3 = 4;
			break;
		case 11:
			iParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			iParam0->f_418.f_3 = 6;
			break;
		case 7:
			iParam0->f_418.f_3 = 7;
			break;
	}
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_428(int iParam0, int iParam1)
{
	iParam0->f_418.f_1 = iParam1;
}

void func_429(int iParam0, int iParam1)
{
	iParam0->f_418.f_2 = iParam1;
}

void func_430(int iParam0)
{
	iParam0->f_2 = PLAYER::PLAYER_PED_ID();
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_14 = { func_41() };
	iParam0->f_17 = { func_41() };
	iParam0->f_35 = 0f;
	iParam0->f_76 = 0;
	iParam0->f_49 = 0;
	iParam0->f_109 = 0;
	iParam0->f_36 = 0f;
	iParam0->f_410 = 2;
	iParam0->f_123 = "TRS_FINDING_LOCATION";
	func_112(iParam0, 32, 0);
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_432(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_923, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_923, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), iLocal_923);
}

void func_433()
{
	func_20(&Local_409);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_984, vLocal_987, true, true);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_947, false);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_945);
	func_434();
	func_211();
	if (CAM::DOES_CAM_EXIST(Local_409))
	{
		CAM::DESTROY_CAM(Local_409, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_434()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_929);
}

void func_435(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

