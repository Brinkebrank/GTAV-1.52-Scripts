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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	struct<2> Local_86[8];
	struct<2> Local_103 = { 0, 0 } ;
	struct<4> Local_105[8];
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	int iLocal_143 = 0;
	int iLocal_144[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = false;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	float fLocal_158 = 0f;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	struct<60> Local_178 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_238[32];
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	vector3 vLocal_440 = { 0f, 0f, 0f };
	var uLocal_443 = 0;
	struct<23> Local_444 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 1015222895;
	var uLocal_473 = 1021665346;
	var uLocal_474 = 0;
	var uLocal_475 = 255;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = -1;
	var uLocal_485 = 996499522;
	var uLocal_486 = 1002740646;
	var uLocal_487 = 0;
	var uLocal_488 = 60;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 1016296636;
	var uLocal_550 = 220;
	var uLocal_551 = 255;
	var uLocal_552 = 255;
	var uLocal_553 = 255;
	var uLocal_554 = 255;
	var uLocal_555 = 255;
	var uLocal_556 = 255;
	var uLocal_557 = 4096;
	var uLocal_558 = 40;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 4;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 1065353216;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 1056964608;
	var uLocal_737 = 1056964608;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	vector3 vLocal_744[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
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
	fLocal_67 = 0f;
	fLocal_74 = 0f;
	fLocal_75 = 0f;
	fLocal_76 = 0f;
	fLocal_139 = 0.62f;
	fLocal_140 = 0.51f;
	fLocal_141 = 0.55f;
	fLocal_142 = 25f;
	fLocal_158 = ((0.05f + 0.275f) - 0.01f);
	iLocal_738 = -1;
	iLocal_739 = -1;
	iLocal_741 = -1;
	iLocal_742 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1152(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1100(ScriptParam_0);
	}
	else
	{
		func_1053();
	}
	while (true)
	{
		func_1052();
		if (func_1044())
		{
			func_1053();
		}
		Global_1676128.f_2 = Local_178.f_58;
		Global_1676128.f_3 = Local_178.f_59;
		switch (func_1043(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1042() == 1)
				{
					func_1041();
					if (func_1040())
					{
						func_1025(142, 1, -1, 0);
						UNK_0x53797676AD34A9AA(3);
						if (!func_1024())
						{
							OBJECT::_0x616093EC6B139DD9(PLAYER::PLAYER_ID(), joaat("PICKUP_PORTABLE_PACKAGE"), false);
						}
					}
					else
					{
						func_1025(142, 0, -1, 0);
					}
					Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 1;
				}
				else if (func_1042() == 4)
				{
					Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				break;
			case 1:
				if (func_1019(1))
				{
					Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 2;
				}
				if (func_1042() == 1)
				{
					func_427();
					func_417();
					if (func_1040() || func_416())
					{
						func_260(&(Global_1366969.f_534), &Global_1366969, 28, &(Global_1366969.f_1), &(Global_1366969.f_117), -1, 0, 0);
					}
					func_204();
				}
				else if (func_1042() == 4)
				{
					Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				func_201();
				break;
			case 3:
				func_200(&(Local_178.f_49));
				if (func_199(&(Local_178.f_49)))
				{
					Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
				}
				break;
			case 2:
				Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
			case 4:
				func_1053();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1042())
			{
				case 0:
					if (func_192())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_178.f_58), &(Local_178.f_59));
						Local_178 = 1;
						Local_178.f_33 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_178.f_34 = PLAYER::PLAYER_ID();
						func_1025(142, 1, -1, 0);
					}
					break;
				case 1:
					func_190();
					func_4();
					if (func_2())
					{
						Local_178 = 4;
					}
					else if (func_1())
					{
						Local_178 = 4;
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
	if (Global_2540384.f_5188.f_40)
	{
		Global_2540384.f_5188.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_178.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_178.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (MISC::IS_BIT_SET(Local_178.f_1, 1))
			{
				Local_178.f_32 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_178.f_1, 3))
			{
				Local_178.f_32 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_178.f_1, 4))
			{
				Local_178.f_32 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_5()
{
	if (Local_178.f_5 == 0)
	{
		if (!MISC::IS_BIT_SET(Local_178.f_1, 6))
		{
			if (!func_9(&(Local_178.f_53)))
			{
				func_8(&(Local_178.f_53), 0, 0);
			}
			else if (func_6(&(Local_178.f_53), func_7(), 0))
			{
				MISC::SET_BIT(&(Local_178.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (!func_9(&(Local_178.f_51)))
	{
		func_8(&(Local_178.f_51), 0, 0);
	}
	else if (func_6(&(Local_178.f_51), func_11(), 0))
	{
		MISC::SET_BIT(&(Local_178.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_12510;
}

void func_12()
{
	int iVar0;

	if (Local_178.f_33 < 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_178.f_33)))
	{
		if (Local_238[Local_178.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_238[Local_178.f_33 /*6*/].f_4 - 1);
			if (!MISC::IS_BIT_SET(Local_178.f_4, iVar0))
			{
				Local_178.f_36 = iVar0;
				if (func_13())
				{
					MISC::SET_BIT(&(Local_178.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar36;

	iVar0 = joaat("PROP_LD_CASE_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar36 = { func_189() };
				if (func_14(vVar36, 5f, &vLocal_440, &uLocal_443, &Var1))
				{
					Local_178.f_3 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_PACKAGE"), vLocal_440, true, iVar0));
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_178.f_3), vLocal_440 + Vector(0.5f, 0f, 0f), false, false, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_178.f_3), true);
					OBJECT::_SET_OBJECT_SOMETHING(NETWORK::NET_TO_OBJ(Local_178.f_3), true);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_178.f_3), true);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_178.f_3), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_178.f_3));
					func_8(&(Local_178.f_55), 0, 0);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(vector3 vParam0, float fParam3, var uParam4, var uParam5, float fParam6)
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
	if (func_15(&Var34, fParam6, &Var0))
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
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, float fParam1, var uParam2)
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
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) < func_188(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) < func_188(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_187();
		}
		Global_2405074.f_2458 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) > func_188(0))
	{
		Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
		func_181();
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
		func_187();
		if (fParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_180(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, fParam1->f_5, uParam0->f_17, 0, 0, 0))
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
				func_179(vVar8.x, vVar8.y);
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
					if (func_178(Global_4456448.f_129348))
					{
						Var26.f_9 = 1;
					}
					func_151(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((fParam1->f_7 && fParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_150(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
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
				if (uParam0->f_5 && !func_147(PLAYER::PLAYER_ID(), 0))
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
				func_146(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405074.f_2459 == 3)
		{
			if (func_145() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 10000)
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
				func_181();
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
							func_144(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &fVar24);
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
							func_144(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &fVar24);
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
			if (func_69(uParam2, uParam0, fParam1, 0))
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
				if (!func_68(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_67(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
					func_144(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &fVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, fVar24, iVar0, 2f, 5000);
					break;
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
			}
		}
		if (Global_2405074.f_2459 == 7)
		{
			if (func_69(uParam2, uParam0, fParam1, 1))
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
										if (func_150(Global_2405074.f_2619[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar17 /*3*/] };
										}
										break;
									case 1:
										if (func_65(Global_2405074.f_2619[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
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
						func_18(&vVar1, 0, 1, 1, 0, uParam0, fParam1);
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
				if (func_17(Global_2405074.f_486))
				{
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_16(uParam2, &(Global_2405074.f_2485.f_6));
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
				func_18(uParam2[0 /*3*/], 0, bVar86, 0, 0, uParam0, fParam1);
			}
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2459 = 9;
		}
		if (Global_2405074.f_2459 == 9)
		{
			Global_2405074.f_2458 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_187();
			return 1;
		}
		Global_2405074.f_2464 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
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

int func_17(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(Vector3* vParam0, bool bParam1, bool bParam2, Vector3* vParam3, bool bParam4, var uParam5, float fParam6)
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
						if (func_68(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar68)))
						{
							iVar67 += 4;
						}
						break;
					case 1:
						vVar68 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_67(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar68)))
						{
							iVar67 += 4;
						}
						break;
					case 2:
						vVar68 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_67(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar68)))
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
	if (func_33(*vParam0, &vVar0, iVar67, vParam3, 1))
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
		if (func_30(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_151(&vVar0, &uVar3, &Var4);
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
		if (!func_29(vVar0, uParam5->f_7, vVar71, vVar74, fVar77))
		{
			if (func_33(*vParam0, &vVar0, iVar67, vParam3, 0))
			{
				if (!func_29(vVar0, uParam5->f_7, vVar71, vVar74, fVar77))
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
			else if (func_19(vParam0, 1, 1, 1, 1))
			{
				func_18(vParam0, bParam1, bParam2, vParam3, bParam4, uParam5, fParam6);
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

int func_19(Vector3* vParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
				if (func_28(*vParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
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
							func_20(&vVar1, &(Global_2409990[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_19(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *vParam0 };
								func_20(&vVar1, &(Global_2409990[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
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

void func_20(Vector3* vParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*vParam0 = { func_27(*vParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, fParam3) };
				break;
			case 1:
				*vParam0 = { func_27(*vParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, fParam3) };
				break;
			case 2:
				*vParam0 = { func_27(*vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, fParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_25(vParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, fParam3, 0);
				break;
			case 1:
				func_24(vParam0, *uParam1, uParam1->f_3, fParam2, fParam3);
				break;
			case 2:
				func_21(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, fParam3);
				break;
		}
	}
}

void func_21(Vector3* vParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
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
	vVar6 = { func_23(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_22(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_22(vVar6, vVar3) >= 0f)
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
		vVar6 = { func_23(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *vParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_23(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_22(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_22(vVar6, vVar29) >= 0f)
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

float func_22(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_23(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_24(Vector3* vParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

void func_25(Vector3* vParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_26(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_26(&vVar0, 0f, 0f, fParam7);
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

void func_26(var uParam0, vector3 vParam1)
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

Vector3 func_27(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, float fParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_25(&vParam0, vParam3, fParam9, fParam11, fParam12, 0);
			break;
		case 1:
			func_24(&vParam0, vParam3, vParam6, fParam11, fParam12);
			break;
		case 2:
			func_21(&vParam0, vParam3, vParam6, fParam9, fParam11, fParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_150(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_65(vVar1, vParam3, vParam6, 0, 0))
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

int func_28(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_150(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405074.f_2728) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_65(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_29(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
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
			return func_65(vParam0, vParam4, vParam7, 0, 0);
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, false, true);
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1)
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
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[bParam0 /*443*/].f_314.f_9 != func_32())
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_31(int iParam0)
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

int func_32()
{
	return -1;
}

int func_33(vector3 vParam0, Vector3* vParam3, int iParam4, Vector3* vParam5, Vector3* vParam6)
{
	if (func_64(vParam0, vParam3))
	{
		if (func_34(vParam0, vParam3, vParam5, vParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, false, vParam3, iParam4))
	{
		if (func_34(vParam0, vParam3, vParam5, vParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(vector3 vParam0, Vector3* vParam3, int iParam4, int iParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;

	fVar0 = SYSTEM::VDIST(vParam0, *vParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_50(Global_2405074.f_509, vParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_38(*vParam3, 1056964608 /* Float: 0.5f */))
			{
				if (!func_35(vParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_35(Vector3* vParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { *vParam0 };
	iVar4 = func_37(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar4])
	{
		if (func_36(vVar1, &(Global_2410195[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_21(&vVar1, Global_2410195[iVar4 /*141*/][iVar0 /*7*/], Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410195[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*vParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_36(vVar1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_21(&vVar1, Global_2410195[8 /*141*/][iVar0 /*7*/], Global_2410195[8 /*141*/][iVar0 /*7*/].f_3, Global_2410195[8 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*vParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(vector3 vParam0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_37(struct<2> Param0, var uParam2)
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

int func_38(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_47(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_39(vParam0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, iParam3))
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
					if (func_39(vParam0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
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
					if (func_39(vParam0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
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
					if (func_39(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969055.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969055.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969055.f_233[iVar0]), 0.5f))
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
					if (func_39(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969055.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969055.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969055.f_119[iVar0]), 0.5f))
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

int func_39(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_46(iParam7, 1008981770 /* Float: 0.01f */))
	{
		func_40(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, iParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_40(vector3 vParam0, float fParam3, int iParam4, var uParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_26(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_41(iParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*fParam7 = MISC::ABSF((vVar6.x - vVar3.x));
}

void func_41(int iParam0, Vector3* vParam1, Vector3* vParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, vParam1, vParam2);
	}
	else
	{
		iVar0 = func_44(iParam0);
		if (iVar0 != 0)
		{
			func_42(iVar0, vParam1, vParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
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

void func_42(int iParam0, Vector3* vParam1, Vector3* vParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_43(iParam0, &Global_1315831);
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

void func_43(int iParam0, var uParam1)
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

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_45(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_46(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (iParam0 == 0)
	{
		return 5f;
	}
	func_41(iParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_47(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_48(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[bParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_48(int iParam0)
{
	return func_49(iParam0);
}

bool func_49(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_50(vector3 vParam0, Vector3* vParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_57(vParam0))
	{
		if (func_19(vParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_52(vParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_51(*vParam3, 1056964608 /* Float: 0.5f */))
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
				func_25(vParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
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

int func_51(vector3 vParam0, float fParam3)
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

int func_52(Vector3* vParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_54(*vParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *vParam0 };
			func_20(&vVar2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_54(vVar2, &uVar1) || func_53(vVar2))
			{
				vVar2 = { *vParam0 };
				func_20(&vVar2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*vParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_53(vector3 vParam0)
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

int func_54(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_56())
	{
		return 0;
	}
	iVar1 = func_55();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_28(vParam0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55()
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

bool func_56()
{
	return Global_1678288.f_482;
}

int func_57(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_61(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_60(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_19(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_19(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_59(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_58(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_19(&vVar1, 0, 0, 0, 1))
					{
						if (!func_19(&vParam0, 0, 0, 0, 1))
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

Vector3 func_58(var uParam0)
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

int func_59(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_28(vParam0, &(Global_2405074.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_60(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_28(vParam0, &(Global_2405074.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)
{
	if (func_63() != 0)
	{
		return func_62(iParam0) != 0;
	}
	return func_47(iParam0, bParam1, 0);
}

int func_62(bool bParam0)
{
	if (func_1152(bParam0, 0, 1))
	{
		return Global_2425869[bParam0 /*443*/].f_1;
	}
	return 0;
}

int func_63()
{
	return Global_30968;
}

int func_64(vector3 vParam0, Vector3* vParam3)
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

int func_65(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_66(&vParam3, &vParam6);
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

void func_66(bool bParam0, var uParam1)
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

int func_67(vector3 vParam0, vector3 vParam3, float fParam6)
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

int func_68(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0, var uParam1, float fParam2, bool bParam3)
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
					func_142(uParam1, fParam2);
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
							if (uParam1->f_5 && func_17(Global_2405074.f_486))
							{
								if (!Global_2405074.f_2485.f_5)
								{
									Global_2405074.f_2485.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, fParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, fParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_142(uParam1, fParam2);
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
					func_142(uParam1, fParam2);
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
				func_142(uParam1, fParam2);
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
		func_139(Global_2405074.f_552, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90));
	}
	if (fParam2->f_7 && !Global_2405074.f_2485.f_4)
	{
		Global_2405074.f_2485.f_4 = 1;
		func_77(*uParam1, uParam1->f_3, uParam1, fParam2, 1, -1);
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
					func_77(vVar0, fVar3, uParam1, fParam2, 0, fVar5);
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
				func_71(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_17(Global_2405074.f_486))
			{
				if (Global_2405074.f_2485.f_2)
				{
					func_16(uParam0, &(Global_2405074.f_2485.f_6));
					func_70(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, fParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_70(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_16(uParam0, &(Global_2405074.f_2485.f_6));
				func_70(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_2485.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_35(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_70(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, fParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_70(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, fParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_70(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
		if (uParam1->f_5 && func_17(Global_2405074.f_486))
		{
			if (!Global_2405074.f_2485.f_5)
			{
				Global_2405074.f_2485.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, fParam2);
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
			func_18(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, fParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_70(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_70(vector3 vParam0)
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

void func_71(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2405074.f_486) && func_76() < 4096)
	{
		func_75(uParam0, 0f);
		func_75(uParam1, uParam0->f_2);
		func_75(uParam2, uParam1->f_2);
	}
	else
	{
		func_74(uParam0);
		func_73(uParam2, uParam0->f_4);
		func_72(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_72(var uParam0, vector3 vParam1, vector3 vParam4)
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

void func_73(var uParam0, vector3 vParam1)
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

void func_74(var uParam0)
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

void func_75(var uParam0, float fParam1)
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

int func_76()
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

void func_77(vector3 vParam0, float fParam3, int iParam4, float fParam5, bool bParam6, int iParam7)
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
		if (func_135(PLAYER::PLAYER_ID()))
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
		if (!func_134(vParam0, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, 0))
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
		if (!func_133(vParam0, fParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_127(vParam0, fParam3, iParam4->f_15, func_132(1), iParam4->f_16, 0, 1123024896 /* Float: 120f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1084227584 /* Float: 5f */, 1092616192 /* Float: 10f */, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405074.f_3;
		}
	}
	else if (!func_124(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (iParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_120(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_120(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
			if (!func_51(vParam0, 0.5f))
			{
				if (func_57(vVar12))
				{
					if (!func_19(&vParam0, 0, 0, 0, 1) && !func_119(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_119(&vParam0, 0))
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
	else if (!func_118(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (iParam4->f_5)
	{
		if (!(func_117(PLAYER::PLAYER_ID()) && func_115(PLAYER::PLAYER_ID())))
		{
			if (!func_114(&vParam0, &(Global_2405074.f_2485.f_90), 0, 1065353216 /* Float: 1f */))
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
		if (!func_115(PLAYER::PLAYER_ID()))
		{
			if (!func_113(vParam0, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90), 1073741824 /* Float: 2f */))
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
	if (func_112(vParam0))
	{
		if (iParam4->f_5)
		{
			if (func_17(Global_2405074.f_486))
			{
				if (func_60(vParam0, 0.01f))
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
		if (func_111(vParam0))
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
			if (!func_52(&vParam0, 0, 0))
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
	if (!func_35(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_59(vParam0, 1008981770 /* Float: 0.01f */);
		if (iVar16 > -1)
		{
			func_110(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_105(&(Global_2405074.f_45[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_38(vParam0, 1056964608 /* Float: 0.5f */))
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
	else if (func_104(vParam0, 1, 0, iParam4->f_15, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */))
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
				fVar0 = func_96(vParam0, iParam4->f_18, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_96(vParam0, Global_2405074.f_2460, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2405074.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_94(vParam0);
			}
			uVar7 = func_83(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_82(Var25);
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
							fVar0 = func_96(vParam0, iParam4->f_18, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_96(vParam0, Global_2405074.f_2460, fParam5->f_6, fParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_17(Global_2405074.f_486) && iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_94(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405074.f_2485.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_81(Var25, iVar24);
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
						func_81(Var25, iVar24);
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
						fVar5 = func_79(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_83(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_78(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_78(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405074.f_2485.f_6[iVar24 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar24 /*10*/] && fVar3 > Global_2405074.f_2485.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_81(Var25, iVar24);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_78(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_79(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	bVar2 = false;
	fVar3 = 1E+13f;
	if (bParam4 && !bParam6)
	{
		if (func_1152(PLAYER::PLAYER_ID(), 1, 1))
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
		bVar1 = iVar0;
		if (func_1152(bVar1, 1, 1))
		{
			if (!func_147(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_80(bVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((bParam5 || (bParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, vParam0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, vParam0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), false));
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

int func_80(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425869[bParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

void func_81(struct<10> Param0, int iParam10)
{
	struct<10> Var0;

	Var0.f_2 = 1176256410;
	Var0 = { Global_2405074.f_2485.f_6[iParam10 /*10*/] };
	Global_2405074.f_2485.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_81(Var0, iParam10 + 1);
	}
}

void func_82(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;

	Var1.f_2 = 1176256410;
	iVar11 = func_76();
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

float func_83(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;

	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar11 = iVar0;
		if (func_1152(bVar11, 1, 1) || (iParam7 == 1 && func_1152(bVar11, 0, 0)))
		{
			if (!bVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_85(bVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(bVar11) == -1 || !func_61(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar11) || !bParam6)
					{
						if (func_80(bVar11))
						{
							vVar5 = { func_84(bVar11) };
							if (!bVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { NETWORK::_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(bVar11)) };
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

Vector3 func_84(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_85(bool bParam0)
{
	if (func_1152(bParam0, 0, 1))
	{
		if (!func_92(bParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_47(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_91(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_47(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_86(bParam0))
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

int func_86(bool bParam0)
{
	if (func_90(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2515173 = { func_89(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2515173))
	{
		return 1;
	}
	if (func_87(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_88(bParam0);
	if (!bVar0 == func_32())
	{
		if (bVar0 == func_88(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1630317[bParam0 /*595*/].f_11;
	}
	return func_32();
}

struct<13> func_89(bool bParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_90(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515173 = { func_89(bParam0) };
		Global_2515186 = { func_89(bParam1) };
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

int func_91(int iParam0, int iParam1, int iParam2)
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

int func_92(bool bParam0)
{
	if (func_147(bParam0, 0))
	{
		return 1;
	}
	if (func_93())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425869[bParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

float func_94(vector3 vParam0)
{
	var uVar0;

	return func_95(vParam0, &(Global_2405074.f_45), &uVar0);
}

float func_95(vector3 vParam0, var uParam3, var uParam4)
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

float func_96(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_78(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_83(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_78(fVar4, 0f, func_103(), func_101(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_99(vParam0);
	fVar0 = func_78(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_61(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_98(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_78(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_97(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_78(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_78(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_78(SYSTEM::VDIST(Global_2405074.f_509, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_97(vector3 vParam0, float fParam3, float fParam4)
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

float func_98(vector3 vParam0, bool bParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;

	fVar0 = 999999.9f;
	if (func_1152(bParam3, 0, 1))
	{
		bVar2 = false;
		while (bVar2 < 32)
		{
			if (!bParam3 == bVar2 || iParam4 == 1)
			{
				bVar3 = bVar2;
				if (func_1152(bVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar3) != PLAYER::GET_PLAYER_TEAM(bParam3) || (PLAYER::GET_PLAYER_TEAM(bVar3) == -1 && PLAYER::GET_PLAYER_TEAM(bParam3) == -1))
					{
						if (Global_2417956.f_261[bVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417956.f_131[bVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			bVar2++;
		}
	}
	return fVar0;
}

float func_99(vector3 vParam0)
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
				if (func_100(uVar6[iVar2]))
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
						if (func_100(Global_969055.f_152[iVar2]))
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

int func_100(int iParam0)
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

float func_101()
{
	if (func_102())
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

int func_102()
{
	if (Global_2405074.f_45.f_65 && !Global_2405074.f_45.f_301)
	{
		if (!func_92(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_103()
{
	if (func_102())
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

int func_104(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
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

int func_105(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_109(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		case 1:
			if (func_108(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		case 2:
			if (func_106(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_106(vector3 vParam0, vector3 vParam3, var uParam6, vector3 vParam7, vector3 vParam10, float fParam13)
{
	vector3 vVar0[8];
	int iVar25;

	func_107(vParam0, vParam3, uParam6, &vVar0);
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

void func_107(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
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
	vVar3 = { func_23(vVar0, vVar0.x, vVar0.y, 0f) };
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

int func_108(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12)
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

int func_109(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10)
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

void func_110(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { vParam0 };
	iVar4 = func_37(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar4])
	{
		if (func_36(vVar1, &(Global_2410195[iVar4 /*141*/][iVar0 /*7*/])))
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
		if (func_36(vVar1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410195[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410195[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410195[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_111(vector3 vParam0)
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

int func_112(vector3 vParam0)
{
	switch (Global_2405074.f_2481)
	{
		case 0:
			return func_150(vParam0, Global_2405074.f_2460, Global_2405074.f_2463, 0, 0);
		case 1:
			return func_65(vParam0, Global_2405074.f_2474, Global_2405074.f_2477, 0, 0);
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405074.f_2474, Global_2405074.f_2477, Global_2405074.f_2480, false, true);
	}
	return 0;
}

int func_113(vector3 vParam0, int iParam3, var uParam4, float fParam5)
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

int func_114(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_25(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949 /* Float: 0.1f */, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (func_63())
	{
		case 0:
			if (!func_116(iParam0))
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

bool func_116(bool bParam0)
{
	return Global_1590682[bParam0 /*883*/].f_196 != 0;
}

int func_117(int iParam0)
{
	if (func_47(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_118(vector3 vParam0, float fParam3, int iParam4)
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

int func_119(Vector3 vParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_53(*vParam0))
	{
		if (bParam1)
		{
			vVar1 = { *vParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_25(&vVar1, Global_2405074.f_588, Global_2405074.f_591, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_54(vVar1, &uVar0) || func_53(vVar1))
			{
				vVar1 = { *vParam0 };
				func_25(&vVar1, Global_2405074.f_588, Global_2405074.f_591, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*vParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_120(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_1152(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_121(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + fParam3))
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
		bVar1 = iVar0;
		if (func_1152(bVar1, 1, 1))
		{
			if (!func_147(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_80(bVar1) || !bParam10) && !Global_2425869[bVar1 /*443*/].f_263)
					{
						bVar2 = bParam6;
						if (bParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									bVar2 = bParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_121(bVar1), vParam0, true) <= (bVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != bParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_121(bVar1), vParam0, true) <= (bVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, vParam0, fParam3))
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

Vector3 func_121(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_123() && Global_1590682[bVar0 /*883*/].f_854) && !func_122(Global_1590682[bVar0 /*883*/].f_855))
	{
		return Global_1590682[bVar0 /*883*/].f_855;
	}
	return func_84(bParam0);
}

int func_122(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_2451787.f_18;
}

int func_124(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_126(vParam0, fParam3, iParam4, fParam5, 0) || func_125(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_125(vector3 vParam0, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_39(vParam0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_1152(bVar2, 0, 1) && func_1152(bParam3, 0, 1))
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

int func_126(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam4 == iVar0 || iParam5 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1152(bVar1, 0, 1) && func_1152(bParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1152(bVar1, 0, 1) && func_1152(bParam4, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_84(bVar1), vParam0) < 1f)
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
				else if (func_1152(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_84(bVar1), vParam0) < 1f)
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

int func_127(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, float fParam13, bool bParam14, float fParam15)
{
	Global_2405074.f_3 = 0;
	if (!func_124(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405074.f_3++;
		if (bParam5)
		{
			if (func_180(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, iParam7, bParam8, fParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_131(vParam0, iParam12))
				{
					Global_2405074.f_3++;
					if (!func_38(vParam0, 1056964608 /* Float: 0.5f */))
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
			if (func_180(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, iParam7, bParam8, fParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_131(vParam0, iParam12))
				{
					Global_2405074.f_3++;
					if (!func_128(vParam0, bParam3, iParam9, bParam10, 1084227584 /* Float: 5f */))
					{
						Global_2405074.f_3++;
						if (!func_38(vParam0, 1056964608 /* Float: 0.5f */))
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
		else if (func_180(vParam0, 6f, 5f, 5f, 5f, 0, fParam6, iParam7, bParam8, fParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			if (!func_131(vParam0, iParam12))
			{
				Global_2405074.f_3++;
				if (!func_128(vParam0, bParam3, iParam9, bParam10, iParam11))
				{
					Global_2405074.f_3++;
					if (!func_38(vParam0, 1056964608 /* Float: 0.5f */))
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

int func_128(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == bVar1)
		{
			if ((func_1152(bVar1, 1, 1) && func_80(bVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (!func_130(PLAYER::PLAYER_ID(), bVar1, -2, 0))
				{
					if (func_129(func_84(bVar1), vParam0, bParam3, iParam4, bParam5, iParam6))
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

bool func_129(vector3 vParam0, vector3 vParam3, bool bParam6, float fParam7, bool bParam8, float fParam9)
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

bool func_130(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
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

int func_131(vector3 vParam0, float fParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((func_1152(bVar1, 1, 1) && func_80(bVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(bVar1) == -1) && !func_61(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == bVar1) || !func_130(PLAYER::PLAYER_ID(), bVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_84(bVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0)
{
	if ((Global_2405074.f_486 == 9 || Global_2405074.f_486 == 9) || (Global_2405074.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_133(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || bParam8 == 0)
		{
			if (func_1152(bVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_80(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_86(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(bVar1), vParam0, true) < fParam3)
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

int func_134(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;

	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = iVar0;
			if (func_1152(bVar1, 1, 1))
			{
				if ((!func_147(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1)) && bVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_84(bVar1), vParam0, true) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, vParam0, fParam3))
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

int func_135(int iParam0)
{
	if (((func_61(iParam0, 1) || func_138(iParam0)) || func_137(iParam0, 0)) || func_136(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(bool bParam0)
{
	if (!func_1152(bParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[bParam0 /*883*/].f_35;
}

int func_137(bool bParam0, bool bParam1)
{
	if (Global_1630317[bParam0 /*595*/].f_11.f_33 != -1 || (bParam1 && Global_1630317[bParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_138(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1630317[bVar0 /*595*/] != -1;
	}
	return 0;
}

void func_139(vector3 vParam0, var uParam3, var uParam4)
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
					func_141(&Var3, uParam3, iVar0);
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
				func_141(&Var3, uParam3, iVar0);
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
					func_141(&Var3, uParam3, iVar0);
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
				func_140(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_140(var uParam0, var uParam1, int iParam2)
{
	Global_2412470 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_140(&Global_2412470, uParam1, iParam2 + 1);
	}
}

void func_141(var uParam0, var uParam1, int iParam2)
{
	Global_2412466 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_141(&Global_2412466, uParam1, iParam2 + 1);
	}
}

void func_142(var uParam0, float fParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			if (func_143(Global_2405074.f_2257[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405074.f_2257[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*fParam1) > 0.01f)
				{
					vVar1 = { *fParam1 - Global_2405074.f_2257[iVar0 /*4*/] };
					fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_77(Global_2405074.f_2257[iVar0 /*4*/], fVar4, uParam0, fParam1, 0, uParam0->f_28);
				Global_2405074.f_2485++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405074.f_2882)
	{
		func_71(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
	}
}

int func_143(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_29(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		case 1:
		case 2:
			return func_29(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		default:
			break;
	}
	return 0;
}

void func_144(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, float fParam8)
{
	float fVar0;

	func_66(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*fParam8 = (fVar0 * 0.5f);
}

bool func_145()
{
	return Global_1310987.f_4;
}

void func_146(float fParam0, float fParam1)
{
	func_187();
	func_179(fParam0, fParam1);
}

bool func_147(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_148(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[bParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_149();
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

int func_149()
{
	return Global_1312763;
}

bool func_150(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
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

void func_151(var uParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_173(uParam0, uParam1, vParam2) == 0 && iVar0 < 2)
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
	while (func_152(uParam0, uParam1, vParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_152(Vector3* vParam0, var uParam1, Vector3* vParam2)
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
		if (func_50(vParam2->f_35, vParam0, &(vParam2->f_38), &(vParam2->f_45), 1, 1))
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
		if (func_172(vParam0, 1))
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
	if (func_44(vParam2->f_34) != 0)
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
					if (!func_119(&vVar1, 0))
					{
						if ((vParam2->f_13 || iVar7 & 64 == 0) || vParam2->f_33 == 1)
						{
							if (vParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_171(vVar1))
									{
										vVar1 = { func_167(vVar1, &fVar4, vVar9, vParam2->f_9, *vParam2, bVar10, vParam2->f_11, vParam2->f_34, &bVar11, bVar12, 1, vParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_38(vVar1, 5f))
											{
												if (vVar1.z >= (vParam2->f_35.f_2 - vParam2->f_7) || vParam2->f_33 >= 2)
												{
													if (vVar1.z <= (vParam2->f_35.f_2 + vParam2->f_6) || vParam2->f_33 >= 2)
													{
														if (func_166(vVar1, vParam2))
														{
															if ((vParam2->f_48 && !func_172(&vVar1, 0)) || vParam2->f_48 == 0)
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
																		if ((vParam2->f_12 && !func_162(vVar1, fVar4, vParam2->f_34, PLAYER::PLAYER_ID(), 0, vParam2->f_56)) || !vParam2->f_12)
																		{
																			if (!vParam2->f_15 || !func_50(vParam2->f_35, &vVar1, &(vParam2->f_38), &(vParam2->f_45), 0, 1))
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
																					if (!func_161(vVar1, fVar4, vParam2->f_34))
																					{
																						if (vParam2->f_3 > 7f)
																						{
																							if (func_180(vVar1, 6f, 1f, 1f, 5f, iVar19, iVar20, iVar21, bVar22, vParam2->f_58, -1, 1, vParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_180(vVar1, 6f, 1f, 1f, 5f, iVar19, iVar20, iVar21, bVar22, vParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_159(vVar1, fVar4, vParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_158(vVar1, vParam2->f_54, &fVar25);
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
																													func_157(vVar1, fVar4, iVar16);
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
																									if (func_166(vVar1, vParam2))
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
							func_155(0, vParam2);
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
						func_154(iVar15, *vParam0, &iVar0, &vVar1, &fVar4, vParam2, bVar10, vVar9, bVar5, fVar13, bVar14, bVar11);
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
						if (func_50(vParam2->f_35, &vVar31, &(vParam2->f_38), &(vParam2->f_45), bVar35, 1) || func_172(&vVar31, bVar35))
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
				func_153(&Global_1312061, vParam0, uParam1, *vParam0);
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

void func_153(var uParam0, Vector3* vParam1, var uParam2, vector3 vParam3)
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
			if (!func_124(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
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

void func_154(int iParam0, vector3 vParam1, int iParam4, Vector3* vParam5, bool bParam6, Vector3* vParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, vParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*vParam5 = { func_167(*vParam5, bParam6, fParam9, vParam7->f_9, *vParam7, bParam8, vParam7->f_11, vParam7->f_34, &bParam13, 0, 0, vParam7->f_51) };
		if (!func_171(*vParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_155(int iParam0, Vector3* vParam1)
{
	if (!func_166(Global_2412480[iParam0 /*3*/], vParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_156(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_155(iParam0, vParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_155(iParam0 + 1, vParam1);
	}
}

void func_156(int iParam0)
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

void func_157(vector3 vParam0, float fParam3, int iParam4)
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
			func_157(vVar0, fVar3, iParam4 + 1);
		}
	}
}

int func_158(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_85(bVar5))
		{
			vVar1 = { func_84(bVar5) };
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

int func_159(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam9 == 0)
		{
			if (func_1152(bVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_80(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam10) && bParam7) && func_86(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_160(vParam0, iParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_39(func_84(bVar1), vParam0, iParam3, iParam4, fVar2))
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

int func_160(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_39(vParam0, vParam5, fParam8, iParam9, 1036831949 /* Float: 0.1f */))
	{
		return 1;
	}
	if (Global_1312332 && (iParam4 == 1336872304 || iParam9 == 1336872304))
	{
		func_40(vParam0, fParam3, iParam4, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949 /* Float: 0.1f */);
		func_40(vParam5, fParam8, iParam9, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949 /* Float: 0.1f */);
		if (UNK_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_41(iParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
		vVar20 = { 0f, vVar17.y, 0f };
		func_26(&vVar20, 0f, 0f, fParam3);
		vVar23 = { 0f, vVar14.y, 0f };
		func_26(&vVar23, 0f, 0f, fParam3);
		vVar26 = { (MISC::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
		func_26(&vVar26, 0f, 0f, fParam3);
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
			if (func_39(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949 /* Float: 0.1f */))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam10)
		{
			if (func_160(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161(vector3 vParam0, float fParam3, int iParam4)
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
		if (func_160(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
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
		if (func_160(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_165(vParam0, iParam3, iParam4, iParam5, iParam6) || func_163(vParam0, iParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_163(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam5 == iVar0 || iParam6 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_164(vParam0, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_160(vParam0, iParam3, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1152(bVar2, 0, 1) && func_1152(bParam5, 0, 1))
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

int func_164(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_46(iParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_46(iParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_165(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam5 == iVar0 || iParam6 == 1)
		{
			bVar1 = iVar0;
			if (func_1152(bVar1, 0, 1) && func_1152(bParam5, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_39(Global_2417956.f_131[iVar0 /*3*/], vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
				else if (func_39(func_84(bVar1), vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_39(Global_2417956.f_131[iVar0 /*3*/], vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (func_1152(bVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
				{
					if (func_39(func_84(bVar1), vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
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

int func_166(vector3 vParam0, Vector3* vParam3)
{
	if (vParam3->f_18)
	{
		switch (vParam3->f_26)
		{
			case 0:
				if (func_150(vParam0, vParam3->f_19, vParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			case 1:
				if (func_65(vParam0, vParam3->f_19, vParam3->f_22, 0, 0))
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

Vector3 func_167(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			if (!func_170(vParam0, *bParam3, vParam6))
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
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_169(vParam0))
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
					fVar14 = func_168(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_168(iParam11, 1.5f);
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
		if (!func_170(vParam0, *bParam3, vParam6))
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
					fVar14 = func_168(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_168(iParam11, 1.5f);
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

float func_168(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_41(iParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_169(vector3 vParam0)
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

int func_170(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_26(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_22(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_171(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_37(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_36(vParam0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_36(vParam0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_172(Vector3* vParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_150(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_65(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
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
				*vParam0 = { func_27(*vParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

int func_173(Vector3* vParam0, var uParam1, Vector3* vParam2)
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
			if (func_50(vParam2->f_35, vParam0, &(vParam2->f_38), &(vParam2->f_45), 1, 1))
			{
				vParam2->f_6 = 9999.9f;
				vParam2->f_7 = 9999.9f;
			}
		}
		if (vParam2->f_48)
		{
			if (func_172(vParam0, 1))
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
			func_176(*vParam0);
		}
		else if (vParam2->f_29)
		{
			func_175();
		}
		else
		{
			func_174();
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
							if ((vParam2->f_12 && !func_162(vVar3, fVar6, vParam2->f_34, PLAYER::PLAYER_ID(), 0, vParam2->f_56)) || !vParam2->f_12)
							{
								if (!vParam2->f_15 || !func_50(vParam2->f_35, &vVar3, &(vParam2->f_38), &(vParam2->f_45), 0, 1))
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
										if (!func_161(vVar3, fVar6, vParam2->f_34))
										{
											if (vParam2->f_3 > 7f)
											{
												if (func_180(vVar3, 6f, 1f, 1f, 5f, iVar8, iVar9, iVar10, bVar11, vParam2->f_58, -1, 1, vParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_180(vVar3, 6f, 1f, 1f, 5f, iVar8, iVar9, iVar10, bVar11, vParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_159(vVar3, fVar6, vParam2->f_34, 1, 1, 0, 0, vParam2->f_58, 0))
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
													iVar13 = func_158(vVar3, vParam2->f_54, &fVar14);
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
																		func_157(vVar3, fVar6, iVar7);
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
					func_155(0, vParam2);
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

void func_174()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_175()
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

void func_176(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_177(vParam0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_177(vector3 vParam0, float fParam3, float fParam4)
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

bool func_178(int iParam0)
{
	return iParam0 == 50;
}

void func_179(float fParam0, float fParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405074.f_2468 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405074.f_2466 = 1;
	Global_2405074.f_2469 = NETWORK::GET_NETWORK_TIME();
}

int func_180(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		if (func_133(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_120(vParam0, fParam6, iParam7, fParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

void func_181()
{
	func_186();
	func_185();
	func_184();
	func_183();
	func_182();
}

void func_182()
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

void func_183()
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

void func_184()
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

void func_185()
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

void func_186()
{
	struct<6> Var0;

	Var0.f_3 = -1;
	Global_2405074.f_2485 = { Var0 };
}

void func_187()
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

int func_188(bool bParam0)
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

Vector3 func_189()
{
	return Local_178.f_38[Local_178.f_36 /*3*/];
}

void func_190()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	bVar1 = false;
	if (Local_178 != 4)
	{
		iLocal_433 = 0;
		while (iLocal_433 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_433)))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_433));
				if (func_1152(bVar2, 1, 1))
				{
				}
				if (!MISC::IS_BIT_SET(Local_178.f_1, 1))
				{
					if (MISC::IS_BIT_SET(Local_238[iLocal_433 /*6*/].f_1, 2))
					{
						if (Local_178.f_37 != bVar2)
						{
							Local_178.f_37 = bVar2;
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_178.f_1, 1))
				{
					if (Local_238[iLocal_433 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_238[iLocal_433 /*6*/].f_5);
					}
				}
				if (!MISC::IS_BIT_SET(Local_178.f_1, 4))
				{
					if (MISC::IS_BIT_SET(Local_238[iLocal_433 /*6*/].f_1, 5))
					{
						MISC::SET_BIT(&(Local_178.f_1), 4);
						Local_178.f_35 = bVar2;
					}
				}
				if (!MISC::IS_BIT_SET(Local_178.f_1, 2))
				{
					if (!bVar1)
					{
						if (((MISC::IS_BIT_SET(Local_178.f_1, 1) || MISC::IS_BIT_SET(Local_178.f_1, 3)) || MISC::IS_BIT_SET(Local_178.f_1, 4)) || MISC::IS_BIT_SET(Local_178.f_1, 5))
						{
							if (!MISC::IS_BIT_SET(Local_238[iLocal_433 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_178.f_1, 5))
			{
				if (Local_178.f_33 > -1)
				{
					if (iLocal_433 == Local_178.f_33)
					{
						MISC::SET_BIT(&(Local_178.f_1), 5);
					}
				}
			}
			iLocal_433++;
		}
		if (!MISC::IS_BIT_SET(Local_178.f_1, 1))
		{
			iVar0 = (iVar0 + Local_178.f_6);
			if (iVar0 >= func_191())
			{
				MISC::SET_BIT(&(Local_178.f_1), 1);
			}
			if (Local_178.f_5 != iVar0)
			{
				if (Local_178.f_5 < iVar0)
				{
					Local_178.f_5 = iVar0;
				}
				else if (Local_178.f_6 != (Local_178.f_5 - iVar0))
				{
					Local_178.f_6 = (Local_178.f_5 - iVar0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_178.f_1, 2))
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(Local_178.f_1), 2);
			}
		}
	}
}

int func_191()
{
	return Global_262145.f_12512;
}

int func_192()
{
	int iVar0;
	int iVar1;

	if (func_196() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_195(Local_178.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
				if (func_193(iVar1))
				{
					Local_178.f_38[iVar0 /*3*/] = { vLocal_744[iVar1 /*3*/] };
					vLocal_744[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_195(Local_178.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_193(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_195(vLocal_744[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_195(Local_178.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_178.f_38[iVar0 /*3*/], vLocal_744[iParam0 /*3*/], true);
				if (fVar1 < func_194())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_194()
{
	return SYSTEM::TO_FLOAT(Global_262145.f_12513);
}

bool func_195(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_196()
{
	int iVar0;

	if (Local_178.f_48 != -1)
	{
		return Local_178.f_48;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (!func_198(iVar0))
	{
		Local_178.f_48 = iVar0;
		func_197();
	}
	return Local_178.f_48;
}

void func_197()
{
	switch (Local_178.f_48)
	{
		case 0:
			vLocal_744[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			vLocal_744[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			vLocal_744[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			vLocal_744[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			vLocal_744[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_744[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_744[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			vLocal_744[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			vLocal_744[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			vLocal_744[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			vLocal_744[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			vLocal_744[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			vLocal_744[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			vLocal_744[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			vLocal_744[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			vLocal_744[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			vLocal_744[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			vLocal_744[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			vLocal_744[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			vLocal_744[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		case 1:
			vLocal_744[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			vLocal_744[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			vLocal_744[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			vLocal_744[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			vLocal_744[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			vLocal_744[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			vLocal_744[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			vLocal_744[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			vLocal_744[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			vLocal_744[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_744[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_744[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			vLocal_744[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			vLocal_744[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			vLocal_744[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			vLocal_744[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			vLocal_744[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			vLocal_744[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			vLocal_744[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			vLocal_744[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		case 2:
			vLocal_744[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			vLocal_744[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			vLocal_744[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			vLocal_744[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			vLocal_744[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			vLocal_744[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			vLocal_744[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			vLocal_744[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			vLocal_744[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			vLocal_744[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			vLocal_744[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			vLocal_744[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			vLocal_744[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			vLocal_744[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			vLocal_744[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			vLocal_744[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			vLocal_744[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			vLocal_744[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			vLocal_744[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			vLocal_744[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		case 3:
			vLocal_744[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			vLocal_744[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			vLocal_744[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			vLocal_744[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			vLocal_744[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			vLocal_744[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			vLocal_744[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			vLocal_744[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			vLocal_744[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			vLocal_744[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			vLocal_744[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			vLocal_744[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			vLocal_744[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			vLocal_744[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			vLocal_744[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			vLocal_744[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			vLocal_744[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			vLocal_744[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			vLocal_744[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			vLocal_744[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_12455;
		case 1:
			return Global_262145.f_12456;
		case 2:
			return Global_262145.f_12454;
		case 3:
			return Global_262145.f_12453;
		default:
			break;
	}
	return 0;
}

int func_199(var uParam0)
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

void func_200(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_201()
{
	func_203();
	if (MISC::IS_BIT_SET(iLocal_432, 9))
	{
		return;
	}
	if (func_1040())
	{
		if (!MISC::IS_BIT_SET(iLocal_432, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			MISC::SET_BIT(&iLocal_432, 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_432, 1))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START"))
			{
				MISC::SET_BIT(&iLocal_432, 1);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_432, 1))
		{
			if (!MISC::IS_BIT_SET(iLocal_432, 3))
			{
				if (Local_178.f_5 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_MID"))
					{
						MISC::SET_BIT(&iLocal_432, 3);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_432, 3))
		{
			if (!MISC::IS_BIT_SET(iLocal_432, 4))
			{
				if (Local_178.f_5 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_FINAL"))
					{
						MISC::SET_BIT(&iLocal_432, 4);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_178.f_1, 1) || MISC::IS_BIT_SET(Local_178.f_1, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_432, 4))
			{
				if (!MISC::IS_BIT_SET(iLocal_432, 6))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
					{
						MISC::SET_BIT(&iLocal_432, 6);
						MISC::SET_BIT(&iLocal_432, 2);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
					}
				}
			}
		}
	}
	if (func_416())
	{
		if (func_202(PLAYER::PLAYER_ID(), 20))
		{
			if (!MISC::IS_BIT_SET(iLocal_432, 0))
			{
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				MISC::SET_BIT(&iLocal_432, 0);
			}
			if (!MISC::IS_BIT_SET(iLocal_432, 7))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START_ATTACK"))
				{
					MISC::SET_BIT(&iLocal_432, 7);
				}
			}
			if (MISC::IS_BIT_SET(Local_178.f_1, 1) || MISC::IS_BIT_SET(Local_178.f_1, 4))
			{
				if (MISC::IS_BIT_SET(iLocal_432, 7))
				{
					if (!MISC::IS_BIT_SET(iLocal_432, 6))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
						{
							MISC::SET_BIT(&iLocal_432, 6);
							MISC::SET_BIT(&iLocal_432, 2);
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
						}
					}
				}
			}
		}
	}
}

bool func_202(bool bParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[bParam0 /*595*/].f_11.f_4, iParam1);
}

void func_203()
{
	if (MISC::IS_BIT_SET(iLocal_432, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_432, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_432, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_432, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_432, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_432, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_432, 15);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_432, 15))
				{
					if (!MISC::IS_BIT_SET(iLocal_432, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_432, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_432, 13))
					{
						MISC::SET_BIT(&iLocal_432, 10);
					}
				}
			}
		}
	}
}

void func_204()
{
	vector3 vVar0;
	int iVar3;

	if (!func_1040() && !func_416())
	{
		return;
	}
	if (Local_178.f_34 > -1)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar3), false) };
		}
	}
	if (!func_195(vVar0, 0f, 0f, 0f, 0))
	{
		func_205(142, vVar0, &uLocal_812, 1140457472 /* Float: 500f */, 1144750080 /* Float: 750f */, 0);
	}
}

void func_205(int iParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	float fVar1;

	if ((((func_138(PLAYER::PLAYER_ID()) && !func_259(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 8)) && (func_258(PLAYER::PLAYER_ID()) || func_257(PLAYER::PLAYER_ID()))) || func_122(vParam1))
	{
		return;
	}
	Global_1676119 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_253(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_252(PLAYER::PLAYER_ID()) || func_250(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_249(PLAYER::PLAYER_ID(), 21) || func_249(PLAYER::PLAYER_ID(), 25)))
		{
			func_248(vParam1, 1, 0);
		}
		if (!*iParam4 && func_1152(PLAYER::PLAYER_ID(), 1, 1))
		{
			*iParam4 = 1;
			if (func_247(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_246(iParam0));
				if (func_245(iParam0, -1))
				{
					UNK_0x53797676AD34A9AA(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1676119.f_3), 0);
				}
			}
			if (func_244(iParam0))
			{
				fVar1 = func_243(iParam0);
				if (fVar1 != 1f)
				{
					func_240(fVar1);
					MISC::SET_BIT(&(Global_1676119.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_239(iParam0) && func_252(PLAYER::PLAYER_ID()))
				{
					func_237(1);
					func_236(2);
				}
			}
			func_235(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_202(PLAYER::PLAYER_ID(), 19))
			{
				func_234(19);
			}
		}
		if (*iParam4 && func_1152(PLAYER::PLAYER_ID(), 1, 1))
		{
			*iParam4 = 0;
			if (func_247(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1676119.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					UNK_0x53797676AD34A9AA(5);
					MISC::CLEAR_BIT(&(Global_1676119.f_3), 0);
				}
			}
			if (func_244(iParam0))
			{
				func_233();
				MISC::CLEAR_BIT(&(Global_1676119.f_3), 1);
			}
			if (bParam7 && !func_138(PLAYER::PLAYER_ID()))
			{
				if (func_232(PLAYER::PLAYER_ID()) != 152)
				{
					func_208();
				}
			}
			if (func_207(2))
			{
				func_237(0);
				func_206(2);
			}
		}
	}
}

void func_206(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_45), iParam0);
}

bool func_207(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_45, iParam0);
}

void func_208()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_24), &Global_2409333, 2);
	MISC::_COPY_MEMORY(&(Global_2405074.f_26), &Global_2409335, 19);
	func_230();
	func_211(1, 1, 0);
	func_209();
}

void func_209()
{
	func_210(0, 0);
}

void func_210(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_229();
	}
	if (!bParam2)
	{
		func_214(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_213(0);
	func_212();
}

void func_212()
{
	struct<6> Var0;

	if (Global_2405074.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_213(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_214(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_228())
		{
			func_227();
		}
		Global_2405074.f_708.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_225();
		func_218(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_215();
	}
}

void func_215()
{
	if (func_228() && !func_217())
	{
		func_227();
	}
	if (func_217())
	{
		func_216();
	}
	else
	{
		func_225();
		func_218(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_216()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_217()
{
	if ((Global_2405074.f_1746 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_1227.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_32())
	{
		if (MISC::IS_BIT_SET(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_219())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_219()
{
	if ((((((func_232(PLAYER::PLAYER_ID()) == 229 || func_232(PLAYER::PLAYER_ID()) == 191) || func_224()) || func_223()) || func_222(PLAYER::PLAYER_ID())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_220(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_220(int iParam0)
{
	if (func_258(iParam0))
	{
		return 1;
	}
	if (func_221(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221(bool bParam0)
{
	return func_202(bParam0, 20);
}

int func_222(int iParam0)
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

bool func_223()
{
	return Global_1574411;
}

int func_224()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_225()
{
	if (func_228() && !func_217())
	{
		func_227();
	}
	func_226();
	Global_2405074.f_708 = 0;
}

void func_226()
{
	int iVar0;
	struct<5> Var1;

	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_227()
{
	if (func_217())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_228()
{
	if ((Global_2405074.f_1747 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_229()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_230()
{
	func_231();
}

void func_231()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

int func_232(bool bParam0)
{
	if (func_137(bParam0, 0))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

void func_233()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2540384.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540384.f_5184 = -1;
	Global_2540384.f_5183 = 1f;
}

void func_234(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_4), iParam0);
}

void func_235(int iParam0)
{
	MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_4), iParam0);
}

void func_236(int iParam0)
{
	MISC::SET_BIT(&(Global_2540384.f_5188.f_45), iParam0);
}

void func_237(int iParam0)
{
	if (func_238() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_238()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_240(float fParam0)
{
	float fVar0;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_241())
	{
		return;
	}
	fVar0 = (Global_2540384.f_5183 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540384.f_5183 = fParam0;
	Global_2540384.f_5184 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_241()
{
	switch (func_63())
	{
		case 0:
			return func_242();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_242()
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

float func_243(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		default:
			break;
	}
	return 1f;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		case 170:
		case 166:
		case 173:
			return 1;
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_246(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
			break;
	}
	return 1f;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_248(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405074.f_45.f_49 = { vParam0 };
	Global_2405074.f_45.f_52 = iParam3;
	Global_2405074.f_45.f_53 = iParam4;
}

bool func_249(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_250(int iParam0)
{
	if (func_251(iParam0))
	{
		if (func_252(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_251(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (Global_1630317[bParam0 /*595*/].f_11 != func_32())
		{
			return Global_1630317[bParam0 /*595*/].f_11 == bParam0;
		}
	}
	return 0;
}

int func_252(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_202(bParam0, 9);
	}
	return 0;
}

void func_253(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_256(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_254();
	}
}

void func_254()
{
	if (!func_255(PLAYER::PLAYER_ID()))
	{
		func_235(25);
	}
}

bool func_255(int iParam0)
{
	return func_202(iParam0, 25);
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12530;
		case 142:
			return Global_262145.f_12518;
		case 157:
			return Global_262145.f_12485;
		case 159:
			return Global_262145.f_12468;
		case 162:
			return Global_262145.f_12579;
		case 173:
			return 100;
		case 170:
			return 100;
		default:
			break;
	}
	return -1;
}

int func_257(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[bVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_258(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[bVar0 /*595*/].f_1, 7);
	}
	return 0;
}

bool func_259(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[bParam0 /*595*/].f_1, 2);
}

void func_260(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	char* sVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	char cVar57[16];

	if (func_406(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_404() || iParam2 == 28)
	{
		if (func_350(iParam1, iParam2, uParam3, Global_1574191, 0, func_402(), sParam7))
		{
			func_349(1);
			if ((!func_347() && !func_345()) || MISC::IS_BIT_SET(Global_2540384.f_4652, 1))
			{
				if (func_344())
				{
					func_339();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_338(1);
						Global_1574191 = 0;
						iVar54 = -1;
						if (Global_1574412 != 1)
						{
							func_337(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1152(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_147(bVar35, 0))
									{
										if ((func_333(bVar35) || Global_2425869[bVar35 /*443*/].f_240 != -1) || func_116(bVar35))
										{
											bVar44 = bVar35;
											if (func_251(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_330(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_327(PLAYER::PLAYER_ID(), 0) && func_232(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_326())
							{
								if (func_1152(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_32();
								}
							}
							else
							{
								bVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_325(bVar35) && func_321(bVar35, iParam2)) && func_1152(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590682[bVar44 /*883*/].f_211.f_6;
								Var38 = { func_316(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_89(bVar35) };
								iVar37 = func_310(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574191++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_326())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_305(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_304(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								sVar51 = func_299(bVar35, 0);
								if (bVar34)
								{
									if (func_298(bVar35, 1) && iVar1[bVar44] != -1)
									{
										iVar53 = iVar1[bVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_297(iParam5))
								{
									func_296(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, sVar51, iVar50, fVar45, iVar43, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_296(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, sVar51, iVar50, fVar45, iVar46, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, bVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1152(bVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_32();
							}
							if (func_325(bVar35))
							{
								if (func_1152(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590682[bVar44 /*883*/].f_211.f_6;
									Var38 = { func_316(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_89(bVar35) };
									iVar37 = func_310(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574191++;
									sVar51 = func_299(bVar35, 1);
									if (bVar34)
									{
										if (func_298(bVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
									func_274(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, uVar42, sVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_271(uParam3, iParam1, iParam2);
						}
						func_270(&(uParam3->f_21));
						func_269();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_268(uParam3, iParam1);
							func_267(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_268(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_263(uParam3))
						{
							Global_1574412 = 1;
						}
						func_261(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_269();
			func_338(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_261(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_270(&(uParam0->f_21));
		func_262(0);
	}
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
		}
	}
}

int func_263(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_32() && func_1152(bVar15, 0, 1))
	{
		Var2 = { func_89(bVar15) };
		iVar1 = func_266(uParam0, uParam0->f_37);
		if (func_265(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_264(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_264(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_264(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_264(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_264(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_264(uParam0, iVar0, 0);
					}
					break;
			}
		}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_265(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_266(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_267(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_268(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_269()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_270(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_271(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_32())
		{
			if (func_1152(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_273(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_272(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_272(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_273(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
			break;
	}
	return iVar0;
}

void func_274(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, var uParam5, char* sParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;

	if (iParam4 >= func_295() && iParam4 < func_294())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_293("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_293(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_293("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_293("");
			if (uParam3->f_108 == 6)
			{
				func_293("");
			}
			else
			{
				func_293(&uParam5);
			}
			func_279(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_278(uParam3))
			{
				func_277("DPAD_FRIEND");
			}
			else if (func_276(uParam3))
			{
				func_277("DPAD_FRIEND");
			}
			else if (func_275(uParam3))
			{
				func_277("DPAD_CREW");
			}
			else
			{
				func_277("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_275(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_276(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_277(bool bParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_278(var uParam0)
{
	if (func_276(uParam0) && func_275(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_279(var uParam0, bool bParam1)
{
	if (func_292(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_284(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && MISC::IS_BIT_SET(Global_2425869[bParam1 /*443*/].f_420, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_280())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_280()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_282() || func_281())
		{
			return 1;
		}
	}
	return 0;
}

var func_281()
{
	return Global_2451787.f_16;
}

int func_282()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_281();
	}
	return func_283(Global_4456448.f_82708);
}

int func_283(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_284(bool bParam0)
{
	if ((func_1152(bParam0, 0, 1) && func_288()) && func_285(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_285(bool bParam0, bool bParam1)
{
	return func_286(bParam0, bParam1, 1);
}

int func_286(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_287(bParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[bParam0 /*595*/].f_11;
	if (iVar0 != func_32() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_287(bool bParam0, int iParam1)
{
	if (bParam0 != func_32())
	{
		if (Global_1630317[bParam0 /*595*/].f_11 != func_32())
		{
			if (Global_1630317[bParam0 /*595*/].f_11 == bParam0 && Global_1630317[bParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_288()
{
	if (func_138(PLAYER::PLAYER_ID()) || func_291())
	{
		if (!func_289(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_289(int iParam0)
{
	if (func_290(iParam0) == 236 || func_290(iParam0) == 150)
	{
		return func_258(iParam0);
	}
	return 0;
}

int func_290(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_291()
{
	switch (func_232(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_292(bool bParam0)
{
	if (func_280())
	{
		if (func_1152(bParam0, 0, 1))
		{
			return func_251(bParam0);
		}
	}
	if ((func_1152(bParam0, 0, 1) && func_288()) && func_287(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_293(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_294()
{
	int iVar0;

	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_295()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_296(bool bParam0, int* iParam1, var uParam2, int iParam3, var uParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;

	if (iParam3 >= func_295() && iParam3 < func_294())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_293("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					func_277(bParam16);
				}
				else
				{
					func_293(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_293("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_326())
				{
					func_293("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_277(&(uParam2->f_104));
					}
					else
					{
						func_293("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_293("");
				}
				if (uParam2->f_108 == 6)
				{
					func_293("");
				}
				else
				{
					func_293(&uParam4);
				}
				func_279(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_293("");
					func_293("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_278(uParam2))
				{
					func_277("DPAD_FRIEND");
				}
				else if (func_276(uParam2))
				{
					func_277("DPAD_FRIEND");
				}
				else if (func_275(uParam2))
				{
					func_277("DPAD_CREW");
				}
				else
				{
					func_277("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_297(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_298(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_251(bParam0))
		{
			return false;
		}
	}
	return Global_1630317[bParam0 /*595*/].f_11 != func_32();
}

int func_299(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_138(bParam0)) && !func_221(bParam0))
	{
		iVar0 = func_303();
	}
	iVar1 = func_302(bParam0);
	if (!iVar1 == -1)
	{
		return func_300(iVar1);
	}
	return iVar0;
}

int func_300(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_301(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_301(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_302(bool bParam0)
{
	if (!bParam0 == func_32())
	{
		if (func_298(bParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_88(bParam0)];
		}
	}
	return -1;
}

int func_303()
{
	return 21;
}

char* func_304(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_305(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_309(iParam3))
	{
		*fParam1 = (func_306(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_297(iParam3))
	{
		*fParam1 = (func_306(iParam3, iParam2) / 1000f);
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_308(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_307(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_307(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_308(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_310(bool bParam0)
{
	int iVar0;

	iVar0 = func_313(bParam0);
	if (iVar0 == -1)
	{
		func_311(bParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_311(bool bParam0, bool bParam1)
{
	if (!func_1152(bParam0, 0, 1))
	{
		return;
	}
	if (func_313(bParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (bParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_312(bParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = bParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_312(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_313(bool bParam0)
{
	int iVar0;

	if (!func_1152(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_314(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_314(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389221[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389382)
	{
		Global_1389221[iVar32 /*5*/] = { Global_1389221[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_315(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_315(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_32();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_316(bool bParam0)
{
	char cVar0[32];

	if (func_1152(bParam0, 0, 1))
	{
		Global_2515173 = { func_89(bParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_265(Global_2515173))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2515173))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_320(&Global_2515173))
		{
			Global_2515103 = { func_318(bParam0) };
			func_317(&Global_2515103, &cVar0);
		}
	}
	return cVar0;
}

void func_317(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_318(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_319(bParam0))
	{
		return Global_1312928[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_89(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_319(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_320(int* iParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_321(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_259(bParam0) || func_324(bParam0)) || func_323(bParam0))
		{
			return 0;
		}
	}
	if (!func_322(bParam0))
	{
		return 0;
	}
	if ((!func_333(bParam0) && Global_2425869[bParam0 /*443*/].f_240 == -1) && !func_116(bParam0))
	{
		return 0;
	}
	return 1;
}

bool func_322(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_142, 22);
}

bool func_323(bool bParam0)
{
	if (func_259(bParam0))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1630317[bParam0 /*595*/].f_1, 8);
}

int func_324(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1630317[bParam0 /*595*/].f_1, 10) || MISC::IS_BIT_SET(Global_1630317[bParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_325(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (func_147(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[bVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_326()
{
	switch (func_232(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		default:
			break;
	}
	switch (func_290(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
	}
	if (func_221(PLAYER::PLAYER_ID()))
	{
		switch (func_232(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
		}
	}
	if (func_289(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0, bool bParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_328(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (bParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_328(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		default:
			break;
	}
	return func_329(iParam0, 0);
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

void func_330(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1152(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_147(bVar1, 0))
			{
				if ((func_333(bVar1) || Global_2425869[bVar1 /*443*/].f_240 != -1) || func_116(bVar1))
				{
					if (func_331(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_331(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_32())
	{
		if (!bParam2)
		{
			if (func_332(bParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[bParam0 /*595*/].f_11 != func_32())
		{
			return bParam1 == Global_1630317[bParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_332(bool bParam0, bool bParam1)
{
	if (bParam1 != func_32())
	{
		if (bParam0 != func_32())
		{
			if (Global_1630317[bParam0 /*595*/].f_11 != func_32())
			{
				if (Global_1630317[bParam0 /*595*/].f_11 == bParam0)
				{
					return bParam1 == bParam0;
				}
			}
		}
	}
	return 0;
}

int func_333(bool bParam0)
{
	if (func_1152(bParam0, 0, 1))
	{
		if (func_1152(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(bParam0, PLAYER::PLAYER_ID()) || (func_232(bParam0) == 233 && func_334(bParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_334(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_335(PLAYER::PLAYER_ID());
	bVar1 = func_335(bParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_335(bool bParam0)
{
	return func_336(&(Global_2425869[bParam0 /*443*/].f_429), 0);
}

bool func_336(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_337(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_338(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_339()
{
	if (MISC::IS_BIT_SET(Global_2540384.f_4652, 1))
	{
		if (func_343())
		{
			func_340();
		}
	}
}

void func_340()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_341(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_341(var uParam0, int iParam1)
{
	func_342(uParam0, iParam1);
}

void func_342(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_343()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

int func_344()
{
	if (MISC::IS_BIT_SET(Global_2540384.f_4652, 0) && func_343())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2540384.f_4652, 1) && func_343())
	{
		return 1;
	}
	return 0;
}

int func_345()
{
	if (func_343())
	{
		if (func_346(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_347()
{
	if (func_343())
	{
		if (func_348(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		default:
			break;
	}
	return 0;
}

void func_349(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_350(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_401(iParam1);
	fVar7 = func_400();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_399())
		{
			if (func_398() > 0 && Global_1574193)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_384())
		{
			func_383(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2540384.f_4655, 26))
	{
		func_383(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_398() == 1)
		{
			func_382(bVar6, iParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_383(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_398() == 0 && !bParam5))
		{
			func_383(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_381();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_381();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_382(bVar6, iParam0, 0))
				{
					func_337(iParam0, 0, 0);
					sVar4 = func_379(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_377(iParam1) };
					if (bParam4)
					{
						func_374(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_367(iParam0, func_371(uParam2), func_368(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_360(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_358(iParam0, sVar9, func_359(), -1);
					}
					else if (func_280())
					{
						uParam2->f_34 = Global_1574192;
						func_374(iParam0, sVar4, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_351(iParam1);
						uParam2->f_34 = Global_1574192;
						func_374(iParam0, sVar4, "", 0, iVar8, Global_1574192, 1);
					}
					else
					{
						iVar8 = func_351(iParam1);
						func_374(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_357())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (func_356(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_355(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_354(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_352())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_352()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_123();
	}
	return func_353(Global_4456448.f_82708);
}

int func_353(int iParam0)
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

bool func_354(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_355(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_356(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_357()
{
	return Global_4456448.f_1 == 0;
}

void func_358(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_277(bParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_277("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_359()
{
	switch (func_232(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
		case 160:
			return "BD_SORT_4";
		case 154:
			return "BD_SORT_3";
		case 155:
			return "BD_SORT_3";
	}
	return "";
}

char* func_360(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
		case 1:
			return "GR_DPD_F";
		case 2:
			return "GR_DPD_S";
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
		case 1:
			return "GR_DPD_B";
		case 2:
			return "GR_DPD_C";
		case 3:
			return "GR_DPD_D";
	}
	switch (func_232(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
		case 180:
			return "GB_BIGUNLOAD_T";
		case 182:
			return "DEAL_DEALN";
		case 194:
			return "PI_BIK_13_0";
		case 189:
			return "PI_BIK_4_1";
		case 193:
			return "PI_BIK_13_1";
		case 205:
			return "PI_BIK_13_3";
		case 186:
			return "CELL_BIKER_CK";
		case 207:
			return "DV_SH_TITLE";
		case 208:
			return "BA_SH_TITLE";
		case 209:
			return "SHU_SH_TITLE";
		case 210:
			return "PI_BIK_13_4";
		case 183:
			return "CELL_BIKER_RESC";
		case 199:
			return "CELL_BIKER_SEAR";
		case 201:
			return "CELL_BIKER_STAN";
		case 142:
			return "PIM_MAGM210";
		case 163:
			return "PIM_MAGM608";
		case 160:
			return "PIM_MAGM604";
		case 154:
			return "PIM_MAGM602";
		case 155:
			return "PIM_MAGM603";
		case 148:
			if (func_363())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_362(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_362(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
		case 157:
			return "PIM_MAGM207";
		case 159:
			return "PIM_MAGM206";
		case 162:
			return "PIM_MAGM607";
		case 164:
			return "PIM_MAGM212";
		case 166:
			return "GB_DPAD_HEAD";
		case 167:
			return "GB_DPAD_BUY";
		case 168:
			return "GB_DPAD_SELL";
		case 169:
			return "GB_DPAD_DEF";
		case 170:
			return "GB_DPAD_AIR";
		case 171:
			return "GB_DPAD_CASH";
		case 172:
			return "GB_DPAD_SAL";
		case 173:
			return "GB_DPAD_FRA";
		case 178:
			return "VEX_TITLEa";
		case 188:
			return "VEX_TITLEb";
		case 218:
			return "FRT_MODE";
		case 217:
			return "FRT_TRNS";
		case 214:
			return "MODE_PLW";
		case 215:
			return "MODE_FUL";
		case 216:
			return "MODE_AA";
		case 219:
			return "MODE_VEL";
		case 220:
			return "MODE_RMP";
		case 221:
			return "MODE_STK";
		case 225:
			return "GR_TITLEL";
		case 226:
			return "GRS_TITLEL";
		case 227:
			return "GRD_TITLEL";
		case 195:
			return "GB_STEAL_T";
		case 198:
			return "SC_MENU_TITLE";
		case 190:
			return "GB_DPAD_BSEL";
		case 191:
			return "GB_DPAD_BDEF";
		case 185:
			return "GB_DPAD_GFH";
		case 197:
			return "GB_DPAD_JB";
		case 179:
			return "CELL_JOUST";
		case 200:
			return "CAG_BLIP";
		case 192:
			if (func_361(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_362(bool bParam0)
{
	return func_285(PLAYER::PLAYER_ID(), bParam0);
}

bool func_363()
{
	return (func_366() && func_364(func_365()));
}

bool func_364(bool bParam0)
{
	return func_287(bParam0, 1);
}

bool func_365()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35;
}

bool func_366()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148;
}

void func_367(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_277(bParam1);
		}
		else if (func_290(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_277("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_368(var uParam0)
{
	int iVar0;

	iVar0 = func_290(PLAYER::PLAYER_ID());
	if (func_370())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5";
		case 133:
			switch (func_369())
			{
				case 0:
					return "FM_AE_SORT_2";
				case 1:
					return "FM_AE_SORT_2";
				case 2:
					return "FM_AE_SORT_3";
				case 3:
					return "FM_AE_SORT_2";
				case 4:
					return "FM_AE_SORT_2";
				case 5:
					return "FM_AE_SORT_2";
				case 6:
					return "FM_AE_SORT_2";
				case 7:
					return "FM_AE_SORT_13";
				case 8:
					return "FM_AE_SORT_4";
				case 9:
					return "FM_AE_SORT_2";
				case 10:
					return "FM_AE_SORT_2";
				case 11:
					return "FM_AE_SORT_2";
				case 12:
					return "FM_AE_SORT_2";
				case 13:
					return "FM_AE_SORT_2";
				case 14:
					return "FM_AE_SORT_5";
				case 15:
					return "FM_AE_SORT_9";
				case 16:
					return "FM_AE_SORT_9";
				case 17:
					return "FM_AE_SORT_9";
				case 18:
					return "FM_AE_SORT_9";
				default:
					break;
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10";
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5";
		case 144:
			return "FM_AE_SORT_1";
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_369()
{
	if (func_290(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

bool func_370()
{
	return Global_1590555;
}

char* func_371(var uParam0)
{
	int iVar0;

	iVar0 = func_290(PLAYER::PLAYER_ID());
	if (func_370())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		case 132:
			if (func_373() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_373() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_369())
			{
				case 0:
					return "AMCH_0SLC";
				case 1:
					return "AMCH_1SLC";
				case 2:
					return "AMCH_2SLC";
				case 3:
					return "AMCH_3SLC";
				case 4:
					return "AMCH_4SLC";
				case 5:
					return "AMCH_5SLC";
				case 6:
					return "AMCH_6SLC";
				case 7:
					return "AMCH_7SLC";
				case 8:
					return "AMCH_8SLC";
				case 9:
					return "AMCH_12SLC";
				case 10:
					return "AMCH_13SLC";
				case 11:
					return "AMCH_15SLC";
				case 12:
					return "AMCH_16SLC";
				case 13:
					return "AMCH_23SLC";
				case 14:
					return "AMCH_9SLC";
				case 15:
					return "AMCH_19SLC";
				case 16:
					return "AMCH_20SLC";
				case 17:
					return "AMCH_21SLC";
				case 18:
					return "AMCH_22SLC";
				default:
					break;
			}
			break;
		case 136:
			return "PIM_TA10";
		case 138:
			return "PIM_TA4";
		case 139:
			return "PIM_TA5";
		case 140:
			return "PIM_TA3";
		case 141:
			return "PIM_TA8";
		case 144:
			return "PIM_TA2";
		case 129:
			if (func_372() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_372()
{
	return Global_2540384.f_5112;
}

int func_373()
{
	if (func_290(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_374(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_293(bParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_277(bParam1);
		}
		if (func_399() && bParam6)
		{
			if (func_376())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_277(bParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_375(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_123())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_375(int iParam0)
{
	if (func_356(iParam0) || func_355(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_376()
{
	return Global_1574193;
}

struct<4> func_377(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_378(PLAYER::PLAYER_ID()) || func_354(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_280() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_378(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_379(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;

	if (iParam0 == 20 && (!func_280() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_380();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
			case 1:
				return "HUD_LBD_TDM";
			case 5:
				return "HUD_LBD_GRCE";
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
			case 7:
				return "HUD_LBD_BRCE";
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
			case 3:
				return "HUD_LBD_HRD";
			case 22:
				return "HUD_LBD_SHOO";
		}
	}
	return sParam1;
}

char* func_380()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_381()
{
	Global_42556 = 1;
}

bool func_382(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = UNK_0x5DEA4192B46CB99B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = UNK_0x5DEA4192B46CB99B("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = UNK_0x5DEA4192B46CB99B("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_383(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_269();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_270(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2540384.f_4656), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_384()
{
	if (func_397())
	{
		return 0;
	}
	if (func_396())
	{
		return 0;
	}
	if (!func_394())
	{
		return 0;
	}
	if (!func_392())
	{
		return 0;
	}
	if (func_391(8, -1))
	{
		return 0;
	}
	if (func_398() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	else if (!func_47(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_389(1) || func_387(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_386() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_92(PLAYER::PLAYER_ID()) && !func_386())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (Global_1663776)
	{
		return 0;
	}
	if (func_207(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690739.f_718.f_5 || Global_1693565.f_718.f_5) || Global_1689767.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697303.f_724.f_5 || Global_1697303.f_744.f_724.f_5) || Global_1697303.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704127.f_726.f_5)
	{
		return 0;
	}
	if (func_385(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_385(int iParam0)
{
	if (iParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_386()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1696335, 0));
}

int func_387(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_388(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_389(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_390()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

bool func_391(int iParam0, int iParam1)
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

int func_392()
{
	if (func_393() == 0)
	{
		return 1;
	}
	return 0;
}

int func_393()
{
	return Global_1312485.f_18;
}

int func_394()
{
	if (func_395())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_395()
{
	return Global_1312458;
}

bool func_396()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 5;
}

bool func_397()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_398()
{
	return Global_1377236.f_68;
}

int func_399()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_400()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_402()
{
	if (func_403(PLAYER::PLAYER_ID()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_403(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_147(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

int func_404()
{
	if (func_402())
	{
		return 1;
	}
	if (func_323(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_370())
	{
		return 1;
	}
	if (func_138(PLAYER::PLAYER_ID()))
	{
		switch (func_290(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
			case 140:
				if (!func_405(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 129:
				if (!func_405(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 174:
				if (!func_405(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 175:
				return 1;
		}
	}
	return 0;
}

bool func_405(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_406(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_138(PLAYER::PLAYER_ID()) && !func_221(PLAYER::PLAYER_ID())) && !func_289(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_137(PLAYER::PLAYER_ID(), 0) && func_221(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_407(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_407(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_138(bParam0) && !func_259(bParam0)) && !MISC::IS_BIT_SET(Global_1630317[bParam0 /*595*/].f_1, 8));
	bVar2 = func_221(bParam0);
	bVar3 = func_415();
	bVar4 = func_409();
	if ((bVar1 && (func_258(bParam0) || func_257(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_252(bParam0)) && !func_408(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540384.f_5188.f_217 != iVar0)
	{
		Global_2540384.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_408(bool bParam0)
{
	return func_202(bParam0, 19);
}

int func_409()
{
	if ((func_202(PLAYER::PLAYER_ID(), 21) || func_202(PLAYER::PLAYER_ID(), 22)) || func_412())
	{
		return 1;
	}
	if (func_410())
	{
		func_235(22);
		return 1;
	}
	return 0;
}

int func_410()
{
	if (func_137(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_415() && !func_411()) || func_249(PLAYER::PLAYER_ID(), 21)) || func_249(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_234(27);
		}
	}
	return 0;
}

bool func_411()
{
	return Global_1312436.f_1;
}

bool func_412()
{
	return func_413(377, -1);
}

int func_413(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2587834[iParam0 /*3*/][func_414(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_414(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_149();
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

bool func_415()
{
	return Global_1312436;
}

bool func_416()
{
	return MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1);
}

void func_417()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_418(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_418(int iParam0)
{
	struct<6> Var0;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (Local_178.f_34 > -1)
		{
			if (func_416())
			{
				if (!func_409())
				{
					if (!MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5))
					{
						if (!MISC::IS_BIT_SET(Local_178.f_1, 4))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (Var0.f_5)
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0))
									{
										iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
										if (PED::IS_PED_A_PLAYER(iVar14))
										{
											bVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar14);
											if (bVar15 == PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar13))
														{
															iVar16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
															if (iVar16 == PLAYER::PLAYER_ID())
															{
																MISC::SET_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 5);
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
		}
	}
	if (func_416())
	{
		if (!func_202(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar14))
					{
						bVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar14);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar13))
								{
									iVar16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
									if (iVar16 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar15))
										{
											if (func_298(bVar15, 1))
											{
												if (Local_178.f_33 > -1)
												{
													bVar17 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_178.f_33));
													if (func_331(bVar15, bVar17, 1))
													{
														func_419(0);
														func_254();
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
}

void func_419(bool bParam0)
{
	if (!func_221(PLAYER::PLAYER_ID()))
	{
		if (bParam0 || func_407(PLAYER::PLAYER_ID()) != 0)
		{
			func_235(20);
			func_420(func_422());
			if (func_138(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 8);
				}
			}
		}
	}
}

void func_420(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_421() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
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

int func_421()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_422()
{
	int iVar0;

	iVar0 = func_232(PLAYER::PLAYER_ID());
	if (func_426(iVar0) == 0)
	{
		return -1;
	}
	if (func_425(iVar0))
	{
		return 65;
	}
	if (func_424(iVar0))
	{
		return 66;
	}
	if (func_423(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0;
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
		case 259:
			return 1;
		case 148:
		case 179:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_427()
{
	switch (Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2)
	{
		case 0:
			func_859();
			func_428();
			if (Local_178.f_32 == 2)
			{
				Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 2;
			}
			else if (Local_178.f_32 == 3)
			{
				Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		case 2:
			func_428();
			if (Local_178.f_32 == 3)
			{
				Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		case 3:
			func_1053();
			break;
	}
}

void func_428()
{
	struct<20> Var0;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	char* sVar26;
	int iVar27;

	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	bVar23 = func_32();
	bVar24 = func_32();
	bVar25 = func_32();
	if (!MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_431, 9))
		{
			if (MISC::IS_BIT_SET(Local_178.f_1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33 || func_1041() == Local_178.f_33)
				{
					if (func_407(PLAYER::PLAYER_ID()) >= 2)
					{
						sVar26 = func_858();
						iVar27 = func_857(PLAYER::PLAYER_ID());
						func_855(87, "GB_WINNER", "BIGM_SGHTYD", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
					}
					if (!MISC::IS_BIT_SET(iLocal_431, 6))
					{
						func_737(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_431, 6);
					}
					func_557(142, 1, &Var0, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				}
				else if (func_416())
				{
					if (func_298(PLAYER::PLAYER_ID(), 1))
					{
						if (func_407(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar26 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
							iVar27 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
							func_855(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
						if (!MISC::IS_BIT_SET(iLocal_431, 6))
						{
							func_737(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_431, 6);
						}
						func_557(142, 0, &Var0, 0);
					}
					else
					{
						if (func_407(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar26 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
							iVar27 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
							func_855(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
						if (!MISC::IS_BIT_SET(iLocal_431, 6))
						{
							func_737(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_431, 6);
						}
						func_557(142, 0, &Var0, 0);
					}
				}
				MISC::SET_BIT(&iLocal_431, 9);
			}
			else if (MISC::IS_BIT_SET(Local_178.f_1, 3))
			{
				func_550(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2, 1, 0);
				if (!MISC::IS_BIT_SET(iLocal_431, 6))
				{
					func_737(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_431, 6);
				}
				func_557(142, 0, &Var0, 0);
				MISC::SET_BIT(&iLocal_431, 9);
			}
			else if (MISC::IS_BIT_SET(Local_178.f_1, 4))
			{
				if (Local_178.f_35 > -1)
				{
					bVar24 = PLAYER::INT_TO_PLAYERINDEX(Local_178.f_35);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
				{
					if (func_407(PLAYER::PLAYER_ID()) >= 2)
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar24))
						{
							if (func_298(bVar24, 1))
							{
								sVar26 = func_551(bVar24);
								iVar27 = func_857(bVar24);
							}
							else
							{
								sVar26 = PLAYER::GET_PLAYER_NAME(bVar24);
								iVar27 = 1;
							}
							func_855(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_855(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
						}
					}
					func_557(142, 0, &Var0, 0);
					if (!MISC::IS_BIT_SET(iLocal_431, 6))
					{
						func_737(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_431, 6);
					}
				}
				else if (func_1041() == Local_178.f_33)
				{
					bVar23 = PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34);
					if (bVar23 != func_32())
					{
						if (func_407(PLAYER::PLAYER_ID()) >= 2)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar24))
							{
								if (func_298(bVar24, 1))
								{
									sVar26 = func_551(bVar24);
									iVar27 = func_857(bVar24);
								}
								else
								{
									sVar26 = PLAYER::GET_PLAYER_NAME(bVar24);
									iVar27 = 1;
								}
								func_855(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_855(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
							}
						}
						func_557(142, 0, &Var0, 0);
						if (!MISC::IS_BIT_SET(iLocal_431, 6))
						{
							func_737(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_431, 6);
						}
					}
				}
				else if (func_416())
				{
					bVar24 = PLAYER::INT_TO_PLAYERINDEX(Local_178.f_35);
					if (bVar24 != func_32())
					{
						if (bVar24 == PLAYER::PLAYER_ID())
						{
							if (func_407(PLAYER::PLAYER_ID()) >= 2)
							{
								if (func_549(1))
								{
									func_550(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2, 1, 0);
								}
								else
								{
									func_550(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2, 1, 0);
								}
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							if (!MISC::IS_BIT_SET(iLocal_431, 6))
							{
								func_737(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_431, 6);
							}
							func_557(142, 1, &Var0, 0);
						}
						else if (func_549(1))
						{
							bVar25 = func_548();
							if (func_331(bVar24, bVar25, 1))
							{
								if (func_407(PLAYER::PLAYER_ID()) >= 2)
								{
									func_511(87, bVar24, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, 0);
								}
								if (!MISC::IS_BIT_SET(iLocal_431, 6))
								{
									func_737(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									MISC::SET_BIT(&iLocal_431, 6);
								}
								func_557(142, 0, &Var0, 0);
							}
							else
							{
								if (func_407(PLAYER::PLAYER_ID()) >= 2)
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar24))
									{
										if (func_298(bVar24, 1))
										{
											sVar26 = func_551(bVar24);
											iVar27 = func_857(bVar24);
										}
										else
										{
											sVar26 = PLAYER::GET_PLAYER_NAME(bVar24);
											iVar27 = 1;
										}
										func_855(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_550(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1, 0);
									}
								}
								if (!MISC::IS_BIT_SET(iLocal_431, 6))
								{
									func_737(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									MISC::SET_BIT(&iLocal_431, 6);
								}
								func_557(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_407(PLAYER::PLAYER_ID()) >= 2)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar24))
								{
									if (func_298(bVar24, 1))
									{
										sVar26 = func_551(bVar24);
										iVar27 = func_857(bVar24);
									}
									else
									{
										sVar26 = PLAYER::GET_PLAYER_NAME(bVar24);
										iVar27 = 1;
									}
									func_855(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar26, iVar27, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_550(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1, 0);
								}
							}
							if (!MISC::IS_BIT_SET(iLocal_431, 6))
							{
								func_737(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_431, 6);
							}
							func_557(142, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_431, 9);
			}
			else if (MISC::IS_BIT_SET(Local_178.f_1, 5))
			{
				if (func_462())
				{
					if (func_1040())
					{
						if (func_407(PLAYER::PLAYER_ID()) >= 2)
						{
						}
					}
					else if (func_407(PLAYER::PLAYER_ID()) >= 2)
					{
						func_550(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_431, 6))
				{
					func_737(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_431, 6);
				}
				func_557(159, 0, &Var0, 0);
				MISC::SET_BIT(&iLocal_431, 9);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_431, 9))
		{
			func_455();
			if (!MISC::IS_BIT_SET(iLocal_432, 8))
			{
				MISC::SET_BIT(&iLocal_432, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_431, 10))
			{
				if (Local_178.f_34 != -1)
				{
					if (MISC::IS_BIT_SET(iLocal_431, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34)))
						{
							func_453(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 432, 0, 0);
							func_452(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 1, 0, 0);
							func_451(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0, 0, 0);
							func_450(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0);
							func_447(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), Global_262145.f_12363, 0, 0);
							MISC::SET_BIT(&iLocal_431, 10);
						}
					}
				}
			}
			if (func_429(&uLocal_805, 1, 0))
			{
				MISC::SET_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 4);
			}
		}
	}
}

int func_429(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	func_235(29);
	if ((*uParam0 > 0 && !func_343()) && func_407(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_445())
		{
			func_444();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1676119.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2540384.f_4652), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_443(uParam0, 1);
			}
			break;
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_436(bParam2);
				func_443(uParam0, 2);
			}
			break;
		case 2:
			func_436(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_430(func_431(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_443(uParam0, 3);
			}
			break;
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2540384.f_4652), 1);
				MISC::CLEAR_BIT(&(Global_1676119.f_3), 2);
				func_443(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2540384.f_4652), 1);
			MISC::CLEAR_BIT(&(Global_1676119.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_430(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_431(bool bParam0)
{
	if (((func_434(PLAYER::PLAYER_ID()) || func_433(PLAYER::PLAYER_ID())) || func_363()) || bParam0)
	{
		if (func_433(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_328(func_432()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_432()
{
	return Global_1652336;
}

bool func_433(bool bParam0)
{
	return func_329(func_232(bParam0), 0);
}

bool func_434(bool bParam0)
{
	return func_435(func_232(bParam0));
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148 && func_287(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_436(bool bParam0)
{
	if (MISC::IS_BIT_SET(Global_2540384.f_4652, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2540384.f_833, 2)) && func_1152(PLAYER::PLAYER_ID(), 1, 1)) && !Global_74030) && !Global_58898) && !CAM::IS_SCREEN_FADED_OUT()) && !func_202(PLAYER::PLAYER_ID(), 22)) && func_407(PLAYER::PLAYER_ID()) != 0) && !func_441(func_442())) && !func_434(PLAYER::PLAYER_ID())) && !func_440(func_232(PLAYER::PLAYER_ID()))) && !func_439(func_232(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2540384.f_4652), 1);
			func_438(func_431(bParam0), -1);
			func_437(1);
			MISC::CLEAR_BIT(&(Global_2540384.f_4652), 0);
		}
	}
}

void func_437(bool bParam0)
{
	char* sVar0;

	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_362(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (bParam0 && !func_343())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_438(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_442()
{
	char* sVar0;

	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_443(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_444()
{
	Global_2463793 = 1;
}

int func_445()
{
	if (((((((func_232(PLAYER::PLAYER_ID()) == 170 || func_232(PLAYER::PLAYER_ID()) == 219) || func_232(PLAYER::PLAYER_ID()) == 221) || func_232(PLAYER::PLAYER_ID()) == 220) || func_232(PLAYER::PLAYER_ID()) == 216) || func_232(PLAYER::PLAYER_ID()) == 215) || func_232(PLAYER::PLAYER_ID()) == 214) || func_232(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_446(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_446(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_447(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_449(iParam0))
	{
		return;
	}
	if (func_448(&(Global_2416085.f_756[iParam0]), &(Global_2416085.f_1119[iParam0]), &(Global_2416085.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_558[iParam0] = uParam1;
		}
	}
}

int func_448(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*bParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*bParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_449(int iParam0)
{
	if (iParam0 == func_32())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_241())
	{
		return 1;
	}
	return 0;
}

void func_450(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2416085.f_368), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2416085.f_368), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2416085[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416085[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416085[iParam0], true);
		}
	}
}

void func_451(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_449(iParam0))
	{
		return;
	}
	if (func_448(&(Global_2416085.f_822[iParam0]), &(Global_2416085.f_1185[iParam0]), &(Global_2416085.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_450(iParam0, bParam2);
	}
}

void func_452(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_449(iParam0))
	{
		return;
	}
	if (func_448(&(Global_2416085.f_624[iParam0]), &(Global_2416085.f_987[iParam0]), &(Global_2416085.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_459[iParam0] = iParam1;
		}
	}
}

void func_453(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_449(iParam0))
	{
		return;
	}
	if (func_448(&(Global_2416085.f_591[iParam0]), &(Global_2416085.f_954[iParam0]), &(Global_2416085.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_454();
		}
	}
}

void func_454()
{
	Global_2416085.f_1651 = 1;
}

void func_455()
{
	if (!func_461())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312603.f_9)
	{
		return;
	}
	func_456();
}

void func_456()
{
	func_458();
	func_457(0);
}

void func_457(bool bParam0)
{
	bool bVar0;

	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_458()
{
	if (!func_460())
	{
	}
	if (func_461())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_459();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_459()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			return;
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_53);
			return;
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			return;
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		default:
			break;
	}
}

bool func_460()
{
	if (!func_461())
	{
		return false;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_459();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_461()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_462()
{
	if (!func_463(1, 1, 1, 0))
	{
		return 0;
	}
	if (func_409())
	{
		return 0;
	}
	return 1;
}

int func_463(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_510(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_249(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_249(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_322(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_117(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_509())
	{
		return 0;
	}
	if (func_396())
	{
		return 0;
	}
	if (func_508())
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_48(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_392())
	{
		return 0;
	}
	if (func_249(PLAYER::PLAYER_ID(), 0) || func_249(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_249(PLAYER::PLAYER_ID(), 12) || func_249(PLAYER::PLAYER_ID(), 14)) || func_249(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_502(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_474())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_473())
		{
			return 0;
		}
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_136(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_472())
	{
		return 0;
	}
	if (func_471(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_470(PLAYER::PLAYER_ID()) && func_469(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_468())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_467(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_222(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_221(PLAYER::PLAYER_ID()))
	{
		if (func_466(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_464())
	{
		return 0;
	}
	return 1;
}

bool func_464()
{
	return func_465() == 1;
}

int func_465()
{
	return Global_1704006;
}

int func_466(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_467(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_468()
{
	return Global_1678288.f_4347 != -1;
}

int func_469(bool bParam0)
{
	if (bParam0 != func_32() && func_1152(bParam0, 1, 1))
	{
		return Global_2425869[bParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_470(bool bParam0)
{
	if (bParam0 != func_32() && func_1152(bParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425869[bParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_471(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_472()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_473()
{
	return Global_99007.f_352 > 0;
}

int func_474()
{
	int iVar0;

	iVar0 = func_232(PLAYER::PLAYER_ID());
	if (((func_501(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28) || func_500(PLAYER::PLAYER_ID())) || func_499(PLAYER::PLAYER_ID())) || func_494(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_492(PLAYER::PLAYER_ID()))
	{
		if (func_424(iVar0) || func_491(iVar0))
		{
			return 1;
		}
	}
	if (func_446(PLAYER::PLAYER_ID()))
	{
		if (func_491(iVar0))
		{
			return 1;
		}
	}
	if (func_490(PLAYER::PLAYER_ID()))
	{
		if (func_489(iVar0))
		{
			return 1;
		}
	}
	if (func_488(PLAYER::PLAYER_ID()))
	{
		if (func_487(iVar0))
		{
			return 1;
		}
	}
	if (func_486(PLAYER::PLAYER_ID()))
	{
		if (func_485(iVar0))
		{
			return 1;
		}
	}
	if (func_484(PLAYER::PLAYER_ID()))
	{
		if (func_483(iVar0))
		{
			return 1;
		}
	}
	if (func_30(PLAYER::PLAYER_ID(), 0))
	{
		if (func_423(iVar0))
		{
			if (func_481(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_480(PLAYER::PLAYER_ID()))
	{
		if (func_479(iVar0))
		{
			return 1;
		}
		if (func_478(iVar0))
		{
			return 1;
		}
		if (func_477())
		{
			return 1;
		}
	}
	if (func_476(PLAYER::PLAYER_ID()))
	{
		if (func_475())
		{
			return 1;
		}
	}
	return 0;
}

bool func_475()
{
	return Global_2540384.f_6663;
}

int func_476(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_477()
{
	return Global_2540384.f_6662;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_479(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_480(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_481(bool bParam0)
{
	if (func_482(bParam0) != func_32())
	{
		return func_482(bParam0) == func_88(bParam0);
	}
	return 0;
}

int func_482(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_484(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_485(int iParam0)
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

int func_486(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_488(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_490(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_492(int iParam0)
{
	if (func_493(Global_1590682[iParam0 /*883*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0, int iParam1)
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

int func_494(int iParam0)
{
	if (func_495(Global_1590682[iParam0 /*883*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_495(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_496(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_496(PLAYER::PLAYER_ID(), 0))
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

bool func_496(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_32())
	{
		if (!func_498(Global_1590518))
		{
			return false;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590518)
			{
				if (MISC::IS_BIT_SET(Global_2425869[Global_1590518 /*443*/].f_199, 24) || func_497(Global_1590518))
				{
					return true;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_199, 24);
}

int func_497(int iParam0)
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_498(int iParam0)
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_499(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_500(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_501(int iParam0)
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

int func_502(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[bParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_500(bParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_446(bParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_499(bParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_490(bParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_488(bParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_486(bParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_507(bParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_484(bParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_506(bParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_30(bParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_505(bParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_480(bParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_504(bParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_476(bParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_503(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_503(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_504(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_505(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_506(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_507(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_1152(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[bParam0 /*443*/].f_314.f_9 != func_32())
			{
				return func_31(Global_2425869[bParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

bool func_508()
{
	return Global_1312896;
}

bool func_509()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

bool func_510(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

int func_511(int iParam0, bool bParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_547(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = bParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_341(&(Var0.f_69), iParam8);
	}
	return func_512(&Var0);
}

int func_512(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_523(uParam0, uParam0->f_17);
	func_522(uParam0);
	if (func_123())
	{
		func_522(uParam0);
	}
	if (func_521(uParam0->f_1))
	{
		func_514();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_513(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_514();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_341(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_513(uParam0->f_69, 128))
			{
				if (func_346(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_341(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_513(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_514()
{
	bool bVar0;

	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_515();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_515()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_519(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_516(&(Global_2440049.f_3158.f_1), 1);
}

void func_516(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_77102)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_518(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_517(0);
}

void func_517(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_518(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_77081, 0);
}

void func_519(var uParam0)
{
	func_520(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_520(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_521(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_522(var uParam0)
{
	if (func_348(uParam0->f_1))
	{
		uParam0->f_72 = func_303();
	}
}

void func_523(var uParam0, bool bParam1)
{
	if (func_348(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_32() || !func_1152(bParam1, 0, 1))
	{
		return;
	}
	if (func_346(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_524(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_524(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_92(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_92(PLAYER::PLAYER_ID()) || (func_546() && func_545())) && !MISC::IS_BIT_SET(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_544();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1152(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_542(iParam1, bParam0, 0);
							}
							else
							{
								return func_536(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_536(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_542(iParam1, bParam0, 0);
				}
				else
				{
					return func_525(0, -1, 0);
				}
			}
			else
			{
				return func_525(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_542(iParam1, bParam0, 0);
		}
		else
		{
			return func_536(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_536(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_525(bool bParam0, int iParam1, bool bParam2)
{
	return func_526(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_526(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_535() || (func_534() && func_532())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_531(iParam2, iVar0);
		}
		else
		{
			return func_531(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_91(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_530(1);
				}
				else
				{
					return func_530(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_527(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_527(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_530(1);
	}
	return func_530(0);
}

int func_527(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_529(iParam0, iParam1, iParam3);
	if (func_528(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

int func_528(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_529(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_91(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_530(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_531(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_529(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_532()
{
	if (func_533())
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_133494, 4);
}

bool func_533()
{
	return MISC::IS_BIT_SET(Global_4456448.f_123318, 12);
}

bool func_534()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_133494, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_133494, 0) || Global_1655243) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

int func_535()
{
	if (func_533() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_536(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590682[bVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_538())
			{
				iVar3 = func_302(bParam0);
				if (!iVar3 == -1)
				{
					return func_300(iVar3);
				}
			}
			if ((func_130(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_91(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_530(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_537(1);
			}
			else
			{
				return func_526(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[bParam0 /*883*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_530(1);
			}
			else
			{
				return func_526(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_302(bParam0);
	if (!iVar4 == -1)
	{
		return func_300(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_537(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_538()
{
	if ((((func_281() || func_541()) || func_123()) || func_540()) || func_539())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

bool func_539()
{
	return Global_2451787.f_23;
}

bool func_540()
{
	return Global_2451787.f_20;
}

var func_541()
{
	return Global_2451787.f_17;
}

int func_542(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969055.f_14[iParam0];
	if (func_538())
	{
		iVar2 = func_302(bParam1);
		if (!iVar2 == -1)
		{
			return func_300(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_32())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_526(bParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_543(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_91(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = func_537(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_543(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

int func_544()
{
	return Global_2359302.f_2;
}

bool func_545()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_546()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

void func_547(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_32();
	uParam1->f_18 = func_32();
	uParam1->f_19 = func_32();
	uParam1->f_20 = func_32();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_548()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_549(bool bParam0)
{
	return func_298(PLAYER::PLAYER_ID(), bParam0);
}

int func_550(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_547(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_341(&(Var0.f_69), iParam7);
	}
	return func_512(&Var0);
}

char* func_551(bool bParam0)
{
	char* sVar0;
	bool bVar1;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_556(&(Global_1630317[bParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[bParam0 /*595*/].f_11.f_120 != Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_120)
	{
		sVar0 = func_554(bParam0, 0);
		return sVar0;
	}
	if (((func_202(bParam0, 28) || func_202(PLAYER::PLAYER_ID(), 28)) || func_553(bParam0)) && !func_552(bParam0))
	{
		return func_554(bParam0, 0);
	}
	bVar1 = func_88(bParam0);
	if (bVar1 != func_32())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_554(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_32())
	{
		sVar0 = func_556(&(Global_1630317[bVar1 /*595*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_554(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_552(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_89(bParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_553(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_32())
	{
		Var0 = { func_89(bParam0) };
		if (UNK_0xDCA0815D900F27F8() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_554(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_285(bParam0, 1))
		{
			return func_555();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_555()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_556(var uParam0)
{
	return uParam0;
}

void func_557(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_735(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		bVar0 = (bVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_734(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = (bVar0 + func_733(iParam0, bParam3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		bVar0 = (bVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_731(iParam0))
	{
		if (bParam1)
		{
			if (func_730(PLAYER::PLAYER_ID()) > 0)
			{
				func_729();
			}
			else
			{
				func_728();
			}
		}
		else
		{
			func_727();
		}
	}
	func_711(iParam0, bParam1, uParam2, &bVar0, &iVar4);
	func_709(iParam0, uParam2, &bVar0, &iVar5);
	func_684(iParam0, uParam2, &bVar0, &iVar5);
	func_681(iParam0, uParam2, &bVar0, &iVar5, &iVar7);
	func_664(iParam0, uParam2, &bVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2540384.f_5188.f_383 = iVar4;
	}
	else
	{
		Global_2540384.f_5188.f_383 = iVar5;
	}
	bVar8 = func_365();
	if (bVar8 != func_32() && iParam0 != 148)
	{
		if (func_298(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_331(PLAYER::PLAYER_ID(), bVar8, 1))
			{
				func_649(&bVar0, 1);
			}
		}
	}
	func_645(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	bVar0 = (bVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1676128.f_10 = iVar1;
		func_644();
		func_601(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (bVar0 > 0)
	{
		Global_1676128.f_9 = bVar0;
		func_578(iParam0, bVar0, iVar7, iVar4, iVar5, uParam2);
		func_577(iParam0, bVar0);
		if (func_576(iParam0))
		{
			if (func_575(iParam0) > -1)
			{
				func_574(func_575(iParam0), bVar0);
			}
		}
		Global_2464451 = bVar0;
		func_573(&Global_2462715, 0, 0);
	}
	if (func_252(PLAYER::PLAYER_ID()) || func_221(PLAYER::PLAYER_ID()))
	{
		func_564(iParam0);
	}
	if (func_435(iParam0))
	{
		Global_1676146.f_13 = bVar0;
		Global_1676146.f_14 = iVar1;
	}
	if (func_440(iParam0))
	{
		Global_1676200.f_13 = bVar0;
		Global_1676200.f_14 = iVar1;
	}
	if (func_489(iParam0))
	{
		Global_1676263.f_12 = bVar0;
		Global_1676263.f_13 = iVar1;
	}
	if (func_487(iParam0))
	{
		Global_1676307.f_12 = bVar0;
		Global_1676307.f_13 = iVar1;
	}
	if (func_485(iParam0))
	{
		Global_1676361.f_12 = bVar0;
		Global_1676361.f_13 = iVar1;
	}
	if (func_439(iParam0))
	{
		if (func_563(iParam0))
		{
			Global_1676443.f_12 = bVar0;
			Global_1676443.f_13 = iVar1;
		}
		else if (func_559(iParam0))
		{
			Global_1676497.f_12 = bVar0;
			Global_1676497.f_13 = iVar1;
		}
	}
	if (func_558(iParam0))
	{
		Global_1676581.f_12 = bVar0;
		Global_1676581.f_13 = iVar1;
	}
	if (func_479(iParam0))
	{
		Global_1676656.f_16 = bVar0;
		Global_1676656.f_17 = iVar1;
	}
	if (func_478(iParam0))
	{
		Global_1676743.f_16 = bVar0;
		Global_1676743.f_17 = iVar1;
	}
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_559(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_560(func_561(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_561(bool bParam0)
{
	if (func_232(bParam0) == 237 || func_232(bParam0) == 250)
	{
		return func_562(bParam0);
	}
	return -1;
}

int func_562(bool bParam0)
{
	if (func_137(bParam0, 0))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_563(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_564(int iParam0)
{
	if (func_572(PLAYER::PLAYER_ID()) && func_571())
	{
		if (func_424(iParam0))
		{
			func_566(10268, -1);
		}
		else if (func_425(iParam0))
		{
			func_566(10270, -1);
		}
		else if (func_329(iParam0, 1))
		{
			func_566(10271, -1);
		}
		else if (func_565(iParam0))
		{
			func_566(10272, -1);
		}
	}
}

int func_565(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_566(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_570(iParam0, func_414(iParam1), 0);
	iVar0++;
	if (!func_569(iParam0))
	{
		func_568(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_567(iParam0, iVar0, iParam1, 1);
	}
}

void func_567(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2551832[iParam0 /*3*/][func_414(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_414(iParam2)] = iParam1;
			break;
		case 788:
			Global_1388131[func_414(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388137[func_414(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388143[func_414(iParam2)] = iParam1;
			break;
		case 8727:
			Global_1388149[func_414(iParam2)] = iParam1;
			break;
		case 777:
			Global_1388095[func_414(iParam2)] = iParam1;
			break;
		case 778:
			Global_1388101[func_414(iParam2)] = iParam1;
			break;
		case 779:
			Global_1388107[func_414(iParam2)] = iParam1;
			break;
		case 780:
			Global_1388113[func_414(iParam2)] = iParam1;
			break;
		case 8729:
			Global_1388119[func_414(iParam2)] = iParam1;
			break;
		case 767:
			Global_1388065[func_414(iParam2)] = iParam1;
			break;
		case 768:
			Global_1388071[func_414(iParam2)] = iParam1;
			break;
		case 769:
			Global_1388077[func_414(iParam2)] = iParam1;
			break;
		case 770:
			Global_1388083[func_414(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388089[func_414(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388155[func_414(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388161[func_414(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388167[func_414(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388173[func_414(iParam2)] = iParam1;
			break;
		case 8733:
			Global_1388179[func_414(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388185[func_414(iParam2)] = iParam1;
			break;
		case 7234:
			Global_1388191[func_414(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388197[func_414(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388203[func_414(iParam2)] = iParam1;
			break;
		case 1877:
			Global_2590417[0 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 2268:
			Global_2590417[1 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 2930:
			Global_2590417[2 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3059:
			Global_2590417[3 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 10138:
			Global_2590566[func_414(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388209[func_414(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388215[func_414(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388221[func_414(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388227[func_414(iParam2)] = iParam1;
			break;
		case 9534:
			Global_1388233[func_414(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388239[func_414(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2590490[0 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2590490[1 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2590490[2 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2590490[3 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2590490[4 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2590569[0 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2590569[1 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2590569[2 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2590569[3 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2590569[4 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2590585[0 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2590585[1 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2590585[2 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2590585[3 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3646:
			Global_2590585[4 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3222:
			Global_2590490[5 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3228:
			Global_2590417[4 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2590601[func_414(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2590610[func_414(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2590604[func_414(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2590613[func_414(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2590607[func_414(iParam2)] = iParam1;
			break;
		case 3669:
			Global_2590616[func_414(iParam2)] = iParam1;
			break;
		case 3690:
			Global_2590619[func_414(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2590490[6 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3231:
			Global_2590417[5 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3235:
			Global_2590490[7 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 3233:
			Global_2590417[6 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2590490[8 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4021:
			Global_2590417[7 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2590490[9 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4024:
			Global_2590417[8 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2590490[10 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4027:
			Global_2590417[9 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2590490[11 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 4030:
			Global_2590417[10 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2590490[12 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6111:
			Global_2590417[11 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2590490[13 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6169:
			Global_2590417[12 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2590490[14 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6547:
			Global_2590417[13 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2590490[15 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6560:
			Global_2590417[14 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2590490[16 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6563:
			Global_2590417[15 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2590490[17 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 6566:
			Global_2590417[16 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 7284:
			Global_2590417[17 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 7286:
			Global_2590417[18 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 7288:
			Global_2590417[19 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 8011:
			Global_2590417[20 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2590622[func_414(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2590625[func_414(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2590628[func_414(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2590631[func_414(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2590634[func_414(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2590637[func_414(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2590640[func_414(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2590643[func_414(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2590646[func_414(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2590649[func_414(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2590652[func_414(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2590655[func_414(iParam2)] = iParam1;
			break;
		case 8295:
			Global_2590658[func_414(iParam2)] = iParam1;
			break;
		case 8901:
			Global_2590661[func_414(iParam2)] = iParam1;
			break;
		case 8535:
			Global_2590417[21 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2590490[23 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 8976:
			Global_2590417[22 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 8981:
			Global_2590490[24 /*3*/][func_414(iParam2)] = iParam1;
			break;
		case 8979:
			Global_2590417[23 /*3*/][func_414(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

void func_568(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_414(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_569(int iParam0)
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

int func_570(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_414(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_571()
{
	return func_364(PLAYER::PLAYER_ID());
}

bool func_572(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_123, 14);
}

void func_573(var uParam0, bool bParam1, bool bParam2)
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

void func_574(int iParam0, bool bParam1)
{
	if (bParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (bParam1 > Global_262145.f_6585)
				{
					bParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = bParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		case 157:
			return 22;
		case 159:
			return 21;
		case 151:
			return 33;
		case 148:
			return 23;
		case 164:
			return 24;
		case 152:
			return 26;
		case 153:
			return 30;
		case 154:
			return 32;
		case 155:
			return 28;
		case 160:
			return 29;
		case 162:
			return 31;
		case 163:
			return 27;
		case 166:
			return 38;
		case 170:
			return 34;
		case 171:
			return 35;
		case 172:
			return 36;
		case 173:
			return 37;
		case 179:
			return 23;
		default:
			break;
	}
	return 0;
}

int func_576(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		case 169:
			iVar0 = 0;
			break;
		case 168:
			iVar0 = 0;
			break;
		case 166:
			iVar0 = 0;
			break;
		case 190:
			iVar0 = 0;
			break;
		case 191:
			iVar0 = 0;
			break;
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_577(int iParam0, bool bParam1)
{
	if (func_572(PLAYER::PLAYER_ID()) && func_571())
	{
		if (func_424(iParam0) && bParam1 > 0)
		{
			func_568(10269, (func_570(10269, -1, 0) + bParam1), -1, 1, 0);
		}
	}
}

void func_578(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;

	iVar5 = func_548();
	if (iVar5 != func_32())
	{
		func_600(iVar5, &iVar0, &uVar1);
	}
	bVar6 = !func_549(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_599())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam3);
			}
			break;
		case 190:
			if (func_571())
			{
				if (!func_599())
				{
					Var7 = { func_598() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(bParam1, MISC::GET_HASH_KEY(func_597(Var7)), func_596(Var7), iParam4);
				}
			}
			else if (func_599())
			{
				func_584(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam4);
			}
			break;
		case 226:
			if (func_1024())
			{
				if (!func_599())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(bParam1, MISC::GET_HASH_KEY(func_597(func_583(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_599())
			{
				func_584(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam4);
			}
			break;
		case 230:
			if (func_1024())
			{
				if (!func_599())
				{
					iVar2 = func_579(uParam5->f_16, iParam4);
					bVar3 = bParam1;
					if (iVar2 > 0)
					{
						bVar3 = (bVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						bVar3 = (bVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(bVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_599())
			{
				func_584(463142405, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, uVar1, bParam1, bVar6);
			}
			break;
		case 233:
			if (func_599())
			{
				func_584(1407278493, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(bParam1);
			}
			break;
		case 237:
			if (func_1024())
			{
				if (!func_599())
				{
					MONEY::_0x0B39CF0D53F1C883(bParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_599())
			{
				func_584(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam4);
			}
			break;
		case 250:
			if (func_599())
			{
				func_584(-961034881, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(bParam1);
			}
			break;
		case 249:
			if (func_599())
			{
				func_584(1135468152, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(bParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_599())
			{
				func_584(-634726636, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(bParam1);
			}
			break;
		case 243:
			if (func_599())
			{
				func_584(1698417709, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x8092F21D0B94C61E(bParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (func_599())
				{
					func_584(1668610896, bParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					UNK_0xFD7A82D67D455BFC(bParam1, 0, false, 1, bParam1, 0, 0);
				}
			}
			else if (func_599())
			{
				func_584(-2032529561, bParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				UNK_0xFD7A82D67D455BFC(bParam1, 1, bParam1, 0, false, 0, 0);
			}
			break;
		default:
			if (func_599())
			{
				func_584(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(iVar0, uVar1, bParam1, bVar6);
			}
			break;
	}
}

int func_579(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_582(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_580(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_580(int iParam0, int iParam1)
{
	return (func_581(iParam0) * iParam1);
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22319;
		case 0:
			return Global_262145.f_22320;
		case 1:
			return Global_262145.f_22321;
		case 2:
			return Global_262145.f_22322;
		case 3:
			return Global_262145.f_22323;
		case 4:
			return Global_262145.f_22324;
		case 5:
			return Global_262145.f_22325;
		case 6:
			return Global_262145.f_22326;
		case 7:
			return Global_262145.f_22327;
		default:
			break;
	}
	return 0;
}

float func_582(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22329);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		case 7:
			fVar0 = Global_262145.f_22331;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22328);
			break;
		case 3:
			fVar0 = Global_262145.f_22331;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22328);
			break;
		case 0:
			fVar0 = Global_262145.f_22332;
			break;
		case 1:
			fVar0 = Global_262145.f_22332;
			break;
		case 4:
			fVar0 = Global_262145.f_22332;
			break;
		case 6:
			fVar0 = Global_262145.f_22333;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22330);
			break;
		case 2:
			fVar0 = Global_262145.f_22333;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22330);
			break;
		case 5:
			fVar0 = Global_262145.f_22333;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22330);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_583(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return 0;
	}
	return Global_1590682[bParam0 /*883*/].f_274.f_183[5 /*12*/];
}

void func_584(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_599())
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
			if (bParam1 > 0 || Global_262145.f_27657)
			{
				func_585(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_585(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
			if (bParam1 > 0 || Global_262145.f_27657)
			{
				func_585(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_585(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_585(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_599())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_149()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	*iParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*iParam0 = func_592(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4264051[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*iParam0 /*85*/].f_66.f_12 = 1;
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
			Global_4265556 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_591(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_586(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_586(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_587(iParam0);
	}
}

void func_587(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_599())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_590(iParam0))
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
		func_588(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_588(var uParam0)
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
	func_589(&(uParam0->f_14));
	func_589(&(uParam0->f_14.f_13));
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

void func_589(var uParam0)
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

int func_590(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_591(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_592(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_599())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = bParam5;
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
				func_593(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_593(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_595(vVar0.y);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_594();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_594()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_595(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_596(int iParam0)
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

char* func_597(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_598()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_193;
}

int func_599()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_600(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = Global_1630317[bParam0 /*595*/].f_11.f_8[0];
	*uParam2 = Global_1630317[bParam0 /*595*/].f_11.f_8[1];
}

var func_601(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_602(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

var func_602(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	var uVar0;
	int iVar1;

	uVar0 = func_612(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_608(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), uVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_603(iParam1, uVar0, iParam8, iParam10);
	}
	return uVar0;
}

void func_603(int iParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_606(iParam0, 1) };
	if (iParam0 == func_605(PLAYER::PLAYER_PED_ID()))
	{
		func_604(1);
	}
	func_608(vVar0, uParam1, 0, iParam2, iParam3);
}

void func_604(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_605(int iParam0)
{
	return iParam0;
}

Vector3 func_606(int iParam0, bool bParam1)
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
	if (iParam0 == func_607(PLAYER::PLAYER_PED_ID()) && UNK_0xF7B3A1430308F92B(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_607(int iParam0)
{
	return iParam0;
}

void func_608(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_611(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam3;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam4;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_610();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_609();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_609()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_610()
{
	var uVar0;

	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_611(vector3 vParam0, var uParam3, var uParam4)
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

var func_612(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	uVar0 = func_613(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_613(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_643(PLAYER::PLAYER_ID()) || func_642(PLAYER::PLAYER_ID()))
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
	else if (func_352() || func_641(PLAYER::PLAYER_ID()))
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
	if (func_640(sParam2))
	{
	}
	if (func_639())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_637(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_636(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_634(0, &iVar1);
					break;
				case 3:
					func_634(1, &iVar1);
					break;
				case 1:
					func_632(&iVar1);
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
			func_631(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_623((func_630(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_631(1165, iVar1, -1);
				}
				func_618(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_614((func_616(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_614((func_616(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_614(int iParam0)
{
	if (func_639())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_615(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_615(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_616(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_1152(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_617(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[bParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_617(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_617(int iParam0)
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

void func_618(int iParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_89(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_621(func_622(&Var0));
			if (iVar13 == 0)
			{
				func_620(&Global_1388052, iParam0);
				func_619(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_620(&Global_1388053, iParam0);
				func_619(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_620(&Global_1388054, iParam0);
				func_619(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_620(&Global_1388055, iParam0);
				func_619(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_620(&Global_1388056, iParam0);
				func_619(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_619(int iParam0, int iParam1)
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

void func_620(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_621(int iParam0)
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

int func_622(int* iParam0)
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

void func_623(int iParam0, int iParam1, int iParam2)
{
	if (func_639())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_414(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_414(-1)])
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
		if (func_629(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_627(iParam0, 1);
		}
		func_567(639, iParam0, -1, 1);
		func_568(640, func_627(iParam0, 1), -1, 1, 0);
		Global_1388197[func_414(-1)] = iParam0;
		func_624(-1109644434, 7, 0);
	}
}

void func_624(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_626(iParam1, bParam2))
	{
		iVar0 = func_625();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_625()
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

int func_626(int iParam0, bool bParam1)
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

int func_627(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_628(iParam0, 0);
}

int func_628(int iParam0, int iParam1)
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

int func_629(int iParam0)
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

int func_630(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_414(-1)];
			}
			else if (func_629(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_414(-1)];
	}
	return 0;
}

void func_631(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_570(iParam0, func_414(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_569(iParam0))
	{
		func_568(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_567(iParam0, iVar0, iParam2, 1);
	}
}

void func_632(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_91(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_90(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_633(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_633(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_633(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_634(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
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
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1152(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_90(PLAYER::PLAYER_ID(), bVar4))
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
			bVar4 = iVar0;
			if (func_1152(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_635(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_90(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_633(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_633(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_635(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_84(bParam0), func_84(bParam1));
	return 0f;
}

int func_636(int iParam0)
{
	int iVar0;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_633(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_637(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_630(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_630(PLAYER::PLAYER_ID());
		}
	}
	if (func_638(8000, 0, 0) > 0)
	{
		if (func_638(8000, 0, 0) < (iParam0 + func_630(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_638(8000, 0, 0) - func_630(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_638(int iParam0, bool bParam1, int iParam2)
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

int func_639()
{
	return 1;
}

int func_640(char* sParam0)
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

bool func_641(bool bParam0)
{
	return func_485(func_232(bParam0));
}

bool func_642(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_643(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_644()
{
	Global_2463792 = 1;
}

void func_645(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam1 = 0;
	*iParam2 = 0;
	if (!func_207(7))
	{
		return;
	}
	iVar0 = func_648(iParam0);
	iVar1 = func_647(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2540384.f_5188.f_266, NETWORK::GET_NETWORK_TIME()));
	if (func_646(iParam0) != -1)
	{
		if (iVar2 > func_646(iParam0))
		{
			iVar2 = func_646(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12403)
	{
		iVar2 = Global_262145.f_12403;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*iParam1 = (iVar3 * iVar1);
	*iParam2 = (iVar3 * iVar0);
}

int func_646(int iParam0)
{
	if (func_329(iParam0, 0) || func_425(iParam0))
	{
		return Global_262145.f_18495;
	}
	if (func_424(iParam0))
	{
		return Global_262145.f_18494;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18491;
		case 191:
			return Global_262145.f_18493;
		case 190:
			return Global_262145.f_18492;
		case 227:
			return Global_262145.f_21053;
		case 226:
			return Global_262145.f_21041;
		case 225:
			return Global_262145.f_21061;
		case 230:
			return Global_262145.f_22316;
		case 229:
			return Global_262145.f_22220;
		case 233:
			return Global_262145.f_22792;
		case 237:
			return Global_262145.f_23955;
		case 238:
			return Global_262145.f_24066;
		case 249:
			return Global_262145.f_24082;
		case 243:
			return Global_262145.f_26374;
		default:
			break;
	}
	return -1;
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12494;
		case 152:
			return Global_262145.f_12529;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12517;
		case 157:
			return Global_262145.f_12484;
		case 159:
			return Global_262145.f_12467;
		case 164:
			return Global_262145.f_12507;
		case 160:
			return Global_262145.f_12557;
		case 162:
			return Global_262145.f_12577;
		case 163:
			return Global_262145.f_12542;
		case 154:
			return Global_262145.f_12612;
		case 155:
			return Global_262145.f_12602;
		case 153:
			return Global_262145.f_12566;
		case 170:
			return Global_262145.f_15003;
		case 171:
			return Global_262145.f_15062;
		case 172:
			return Global_262145.f_15080;
		case 173:
			return Global_262145.f_15021;
		case 166:
			return Global_262145.f_15036;
		case 167:
			return Global_262145.f_15127;
		case 169:
			return Global_262145.f_15099;
		case 168:
			return Global_262145.f_15092;
		case 179:
			return Global_262145.f_18374;
		case 180:
			return Global_262145.f_18152;
		case 182:
			return Global_262145.f_18152;
		case 183:
			return Global_262145.f_18152;
		case 185:
			return Global_262145.f_18152;
		case 186:
			return Global_262145.f_18152;
		case 189:
			return Global_262145.f_18374;
		case 190:
			return Global_262145.f_18028;
		case 191:
			return Global_262145.f_18119;
		case 192:
			return Global_262145.f_17913;
		case 193:
			return Global_262145.f_18374;
		case 194:
			return Global_262145.f_18374;
		case 195:
			return Global_262145.f_18152;
		case 197:
			return Global_262145.f_18152;
		case 198:
			return Global_262145.f_18152;
		case 199:
			return Global_262145.f_18374;
		case 200:
			return Global_262145.f_18374;
		case 201:
			return Global_262145.f_18374;
		case 205:
			return Global_262145.f_18374;
		case 207:
			return Global_262145.f_18152;
		case 208:
			return Global_262145.f_18152;
		case 209:
			return Global_262145.f_18152;
		case 210:
			return Global_262145.f_18374;
		case 211:
			return Global_262145.f_18374;
		case 214:
			return Global_262145.f_19224;
		case 215:
			return Global_262145.f_19226;
		case 216:
			return Global_262145.f_19228;
		case 217:
			return Global_262145.f_19230;
		case 218:
			return Global_262145.f_19232;
		case 219:
			return Global_262145.f_19234;
		case 220:
			return Global_262145.f_19236;
		case 221:
			return Global_262145.f_19238;
		case 225:
			if (!func_1024())
			{
				return Global_262145.f_21063;
			}
			break;
		case 226:
			if (!func_1024())
			{
				return Global_262145.f_21043;
			}
			break;
		case 227:
			if (!func_1024())
			{
				return Global_262145.f_21055;
			}
			break;
		case 229:
			if (!func_1024())
			{
				return Global_262145.f_22222;
			}
			break;
		case 230:
			if (!func_1024())
			{
				return Global_262145.f_22318;
			}
			break;
		case 233:
			if (!func_1024())
			{
				return Global_262145.f_22791;
			}
			break;
		case 241:
			return 100;
		case 242:
			return 100;
		case 244:
			return 100;
		case 248:
			return 100;
		case 239:
			return 100;
		case 240:
			return 100;
		case 250:
			return 100;
		case 237:
			if (!func_1024())
			{
				return Global_262145.f_23957;
			}
			break;
		case 238:
			if (!func_1024())
			{
				return Global_262145.f_24068;
			}
			break;
		case 249:
			if (!func_1024())
			{
				return Global_262145.f_24084;
			}
			break;
		case 243:
			if (!func_1024())
			{
				return Global_262145.f_26377;
			}
			break;
		case 158:
			if (!func_1024())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12493;
		case 152:
			return Global_262145.f_12528;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12516;
		case 157:
			return Global_262145.f_12483;
		case 159:
			return Global_262145.f_12466;
		case 164:
			return Global_262145.f_12506;
		case 160:
			return Global_262145.f_12556;
		case 162:
			return Global_262145.f_12576;
		case 163:
			return Global_262145.f_12541;
		case 154:
			return Global_262145.f_12611;
		case 155:
			return Global_262145.f_12601;
		case 153:
			return Global_262145.f_12565;
		case 170:
			return Global_262145.f_15002;
		case 171:
			return Global_262145.f_15061;
		case 172:
			return Global_262145.f_15079;
		case 173:
			return Global_262145.f_15020;
		case 166:
			return Global_262145.f_15035;
		case 179:
			return Global_262145.f_18373;
		case 180:
			return Global_262145.f_18151;
		case 182:
			return Global_262145.f_18151;
		case 183:
			return Global_262145.f_18151;
		case 185:
			return Global_262145.f_18151;
		case 186:
			return Global_262145.f_18151;
		case 189:
			return Global_262145.f_18373;
		case 193:
			return Global_262145.f_18373;
		case 194:
			return Global_262145.f_18373;
		case 195:
			return Global_262145.f_18151;
		case 197:
			return Global_262145.f_18151;
		case 198:
			return Global_262145.f_18151;
		case 199:
			return Global_262145.f_18373;
		case 200:
			return Global_262145.f_18373;
		case 201:
			return Global_262145.f_18373;
		case 205:
			return Global_262145.f_18373;
		case 207:
			return Global_262145.f_18151;
		case 208:
			return Global_262145.f_18151;
		case 209:
			return Global_262145.f_18151;
		case 210:
			return Global_262145.f_18373;
		case 211:
			return Global_262145.f_18373;
		case 190:
			if (func_362(0))
			{
				return Global_262145.f_18027;
			}
			else
			{
				return 0;
			}
			break;
		case 191:
			if (func_362(0))
			{
				return Global_262145.f_18118;
			}
			else
			{
				return 0;
			}
			break;
		case 192:
			if (func_362(0))
			{
				return Global_262145.f_17912;
			}
			else
			{
				return 0;
			}
			break;
		case 214:
			return Global_262145.f_19223;
		case 215:
			return Global_262145.f_19225;
		case 216:
			return Global_262145.f_19227;
		case 217:
			return Global_262145.f_19229;
		case 218:
			return Global_262145.f_19231;
		case 219:
			return Global_262145.f_19233;
		case 220:
			return Global_262145.f_19235;
		case 221:
			return Global_262145.f_19237;
		case 225:
			if (func_362(0))
			{
				return Global_262145.f_21062;
			}
			break;
		case 226:
			if (func_362(0))
			{
				return Global_262145.f_21042;
			}
			break;
		case 227:
			if (func_362(0))
			{
				return Global_262145.f_21054;
			}
			break;
		case 229:
			if (func_362(0))
			{
				return Global_262145.f_22221;
			}
			break;
		case 230:
			if (func_362(0))
			{
				return Global_262145.f_22317;
			}
			break;
		case 233:
			if (func_362(0))
			{
				return Global_262145.f_22793;
			}
			break;
		case 241:
			return 500;
		case 242:
			return 500;
		case 244:
			return 500;
		case 248:
			return 500;
		case 239:
			return 500;
		case 240:
			return 500;
		case 250:
			return 500;
		case 237:
			if (func_362(0))
			{
				return Global_262145.f_23956;
			}
			break;
		case 238:
			if (func_362(0))
			{
				return Global_262145.f_24067;
			}
			break;
		case 249:
			if (func_362(0))
			{
				return Global_262145.f_24083;
			}
			break;
		case 243:
			return Global_262145.f_26373;
		case 158:
			if (func_362(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_649(bool bParam0, int iParam1)
{
	int iVar0;

	if (*bParam0 > 0)
	{
		if (!func_1024())
		{
			if (func_549(0))
			{
				if (!func_362(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_548()))
					{
						if (func_663() == 100)
						{
							iVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							iVar0 = ((*bParam0 / 100) * func_663());
							*bParam0 = (*bParam0 - iVar0);
						}
						func_661(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_654("GB_BCUT_TICK1", func_548(), iVar0, 0, 0, 1);
						}
						func_653(20);
						func_650(func_548(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_650(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	if (func_1152(bParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_652(bParam0);
		func_651(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_595(bParam0));
	}
}

void func_651(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_652(bool bParam0)
{
	return Global_1630317[bParam0 /*595*/].f_506;
}

void func_653(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_654(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_524(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_659(&cVar1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_655(27, sParam0, 1, &cVar1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_655(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_658() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_147(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_656(iParam2);
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

int func_656(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_657(iVar0);
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

void func_657(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_658()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_659(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_660(&cVar0);
}

var func_660(char[4] cParam0)
{
	return cParam0;
}

void func_661(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_662(1);
	}
	else
	{
		iVar1 = func_662(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_662(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_663()
{
	return Global_262145.f_12397;
}

void func_664(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	bVar18 = func_362(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_1024())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_548();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590682[iVar11 /*883*/].f_861.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*iParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590682[iVar11 /*883*/].f_861.f_2;
			}
			else
			{
				iVar2 = func_680(Global_1590682[iVar11 /*883*/].f_861, *iParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*bParam2 = (*bParam2 + iVar2);
			iVar10 = func_679(*bParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_678("TICK_TCUT", iVar10);
				}
				*bParam2 = (*bParam2 - iVar10);
			}
			Global_1676443.f_49 = *iParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_677(iVar2);
				}
				if (*iParam3 > 0)
				{
					func_675(*iParam3);
				}
				iVar6 = func_674(&uVar5);
				iVar7 = Global_262145.f_23986;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23985));
				iVar8 = ((*bParam2 / 100) * iVar9);
				*bParam2 = (*bParam2 + iVar8);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_653(140);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_673(iVar23))
								{
									func_665(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *bParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23958;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar16));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_23959;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1688746 = *bParam2;
					func_653(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_665(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	uVar0 = func_667(bParam0);
	func_666(bParam0, uVar0, iParam1, iParam2);
}

void func_666(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	struct<8> Var0;

	Var0 = -2029779863;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_3 = iParam3;
	Var0.f_5 = func_652(bParam0);
	func_651(&(Var0.f_6), &(Var0.f_7));
	if (bParam0 != func_32())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_595(bParam0));
		}
	}
}

int func_667(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_672();
	iVar0 = func_670(bParam0, iVar0);
	iVar1 = Global_1630317[func_548() /*595*/].f_11.f_422;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14963));
	if (iVar0 < func_669())
	{
		iVar0 = func_669();
	}
	if (iVar0 > func_668())
	{
		iVar0 = func_668();
	}
	return iVar0;
}

int func_668()
{
	return Global_262145.f_14964;
}

int func_669()
{
	return Global_262145.f_16139;
}

int func_670(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = (func_730(bParam0) * func_671());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_671()
{
	return Global_262145.f_16138;
}

int func_672()
{
	return Global_262145.f_12389;
}

int func_673(bool bParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		if (bParam0 != PLAYER::PLAYER_ID())
		{
			if (func_331(bParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_202(bParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_674(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_147(bVar2, 0) && !func_331(bVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_147(bVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_675(int iParam0)
{
	func_676(iParam0, 7237);
}

void func_676(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_570(iParam1, -1, 0);
	func_568(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_677(int iParam0)
{
	func_676(iParam0, 7232);
}

int func_678(char* sParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_655(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_679(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23987);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_680(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_681(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;

	*iParam4 = 0;
	bVar16 = func_362(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_1024())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_548();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_580(uParam1->f_16, *iParam3);
			*bParam2 = (*bParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_579(uParam1->f_16, *iParam3);
				if (iVar9 > 0)
				{
					*bParam2 = (*bParam2 + iVar9);
				}
			}
			if (func_683(*bParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_678("SMTICK_RONCUT", func_683(*bParam2));
				}
				*bParam2 = (*bParam2 - func_683(*bParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_682(iVar2, iVar9);
				iVar6 = func_674(&uVar5);
				iVar7 = Global_262145.f_22335;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22334));
				*iParam4 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + *iParam4);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_653(44);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								bVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_673(bVar20))
								{
									func_665(bVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *bParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22268;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_22269;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1688746 = *bParam2;
					func_653(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_682(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_676(iParam0, 6117);
	}
	if (iParam1 > 0)
	{
		func_676(iParam1, 6118);
	}
}

int func_683(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22302);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22303))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_684(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;

	bVar17 = func_362(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_1024())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_548();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_583(iVar15);
			iVar0 = (func_708(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_704(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21045));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21044));
			}
			*bParam2 = (*bParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_698(iVar16, iVar2);
				if (func_694(iVar16) >= Global_262145.f_20591 || iVar2 >= Global_262145.f_20591)
				{
					func_685(5);
				}
				iVar6 = func_674(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21047);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21046));
				iVar9 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + iVar9);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_653(108);
					}
					else
					{
						func_653(110);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								bVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_673(bVar20))
								{
									func_665(bVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *bParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21048;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_21049;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1688746 = *bParam2;
					func_653(112);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20579)
			{
				if (func_687(Global_262145.f_20580))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		case 1:
			if (Global_262145.f_20581)
			{
				if (func_687(Global_262145.f_20582))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		case 2:
			if (Global_262145.f_20583)
			{
				if (func_687(Global_262145.f_20584))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		case 3:
			if (Global_262145.f_20585)
			{
				if (func_687(Global_262145.f_20586))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		case 4:
			if (Global_262145.f_20587)
			{
				if (func_687(Global_262145.f_20588))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		case 5:
			if (Global_262145.f_20589)
			{
				if (func_687(Global_262145.f_20590))
				{
					func_678("CLOTHAWDSTRAP3", Global_262145.f_20591);
				}
			}
			break;
		case 6:
			if (Global_262145.f_20592)
			{
				if (func_687(Global_262145.f_20593))
				{
					func_678("CLOTHAWDSTRAP5", Global_262145.f_20727);
				}
			}
			break;
		case 7:
			if (Global_262145.f_20595)
			{
				if (func_687(Global_262145.f_20596))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		case 8:
			if (Global_262145.f_20597)
			{
				if (func_687(Global_262145.f_20598))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		case 9:
			if (Global_262145.f_20599)
			{
				if (func_687(Global_262145.f_20600))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		case 10:
			if (Global_262145.f_20601)
			{
				if (func_687(Global_262145.f_20602))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		case 11:
			if (Global_262145.f_20603)
			{
				if (func_687(Global_262145.f_20604))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		case 12:
			if (Global_262145.f_20605)
			{
				if (func_687(Global_262145.f_20606))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		case 13:
			if (Global_262145.f_20607)
			{
				if (func_687(Global_262145.f_20608))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		case 14:
			if (Global_262145.f_20609)
			{
				if (func_687(Global_262145.f_20610))
				{
					func_686("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_686(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2515173 = { func_89(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515103, 35, &Global_2515173))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2515103.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar1, false, Global_2515103, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314053, Global_1314054, Global_1314055);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_655(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("CLO_GRM_U_19_0"):
		case joaat("CLO_GRF_U_25_0"):
			if (!func_691(15417, -1, -1))
			{
				func_690(15417, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("CLO_GRM_U_19_1"):
		case joaat("CLO_GRF_U_25_1"):
			if (!func_691(15418, -1, -1))
			{
				func_690(15418, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case joaat("CLO_GRF_U_26_0"):
			if (!func_691(15425, -1, -1))
			{
				func_690(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("CLO_GRM_DECL_19"):
		case joaat("CLO_GRF_DECL_19"):
			if (!func_691(15405, -1, -1))
			{
				func_690(15405, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case joaat("CLO_GRF_DECL_20"):
			if (!func_691(15393, -1, -1))
			{
				func_690(15393, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case joaat("CLO_GRF_DECL_21"):
			if (!func_691(15409, -1, -1))
			{
				func_690(15409, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("CLO_GRM_DECL_22"):
		case joaat("CLO_GRF_DECL_22"):
			if (!func_691(15396, -1, -1))
			{
				func_690(15396, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case joaat("CLO_GRF_DECL_23"):
			if (!func_691(15412, -1, -1))
			{
				func_690(15412, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("CLO_GRM_DECL_24"):
		case joaat("CLO_GRF_DECL_24"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case joaat("CLO_GRF_DECL_25"):
			if (!func_691(15403, -1, -1))
			{
				func_690(15403, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("CLO_GRM_DECL_26"):
		case joaat("CLO_GRF_DECL_26"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case joaat("CLO_GRF_DECL_27"):
			if (!func_691(15389, -1, -1))
			{
				func_690(15389, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("CLO_GRM_DECL_28"):
		case joaat("CLO_GRF_DECL_28"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case joaat("CLO_GRF_DECL_29"):
			if (!func_691(15398, -1, -1))
			{
				func_690(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("CLO_GRM_PH_6_0"):
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_691(15400, -1, -1))
			{
				func_690(15400, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("CLO_GRM_PH_6_1"):
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("CLO_GRM_PH_6_2"):
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_691(15408, -1, -1))
			{
				func_690(15408, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("CLO_GRM_PH_6_3"):
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("CLO_GRM_PH_6_4"):
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_691(15411, -1, -1))
			{
				func_690(15411, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("CLO_GRM_PH_6_5"):
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_691(15397, -1, -1))
			{
				func_690(15397, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("CLO_GRM_PH_6_6"):
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_691(15413, -1, -1))
			{
				func_690(15413, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("CLO_GRM_PH_6_7"):
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_691(15391, -1, -1))
			{
				func_690(15391, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case joaat("CLO_GRF_PH_6_8"):
			if (!func_691(15388, -1, -1))
			{
				func_690(15388, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("CLO_GRM_PH_6_9"):
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case joaat("CLO_GRF_PH_6_10"):
			if (!func_691(15401, -1, -1))
			{
				func_690(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_000_M"):
		case joaat("MP_GUNRUNNING_AWARD_000_F"):
		case joaat("CLO_GRM_DECL_0"):
		case joaat("CLO_GRF_DECL_0"):
			if (!func_691(15394, -1, -1))
			{
				func_690(15394, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_001_M"):
		case joaat("MP_GUNRUNNING_AWARD_001_F"):
		case joaat("CLO_GRM_DECL_1"):
		case joaat("CLO_GRF_DECL_1"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_002_M"):
		case joaat("MP_GUNRUNNING_AWARD_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case joaat("CLO_GRF_DECL_2"):
			if (!func_691(15406, -1, -1))
			{
				func_690(15406, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_003_M"):
		case joaat("MP_GUNRUNNING_AWARD_003_F"):
		case joaat("CLO_GRM_DECL_3"):
		case joaat("CLO_GRF_DECL_3"):
			if (!func_691(15395, -1, -1))
			{
				func_690(15395, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_004_M"):
		case joaat("MP_GUNRUNNING_AWARD_004_F"):
		case joaat("CLO_GRM_DECL_4"):
		case joaat("CLO_GRF_DECL_4"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_005_M"):
		case joaat("MP_GUNRUNNING_AWARD_005_F"):
		case joaat("CLO_GRM_DECL_5"):
		case joaat("CLO_GRF_DECL_5"):
			if (!func_691(15410, -1, -1))
			{
				func_690(15410, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_006_M"):
		case joaat("MP_GUNRUNNING_AWARD_006_F"):
		case joaat("CLO_GRM_DECL_6"):
		case joaat("CLO_GRF_DECL_6"):
			if (!func_691(15407, -1, -1))
			{
				func_690(15407, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_007_M"):
		case joaat("MP_GUNRUNNING_AWARD_007_F"):
		case joaat("CLO_GRM_DECL_7"):
		case joaat("CLO_GRF_DECL_7"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_008_M"):
		case joaat("MP_GUNRUNNING_AWARD_008_F"):
		case joaat("CLO_GRM_DECL_8"):
		case joaat("CLO_GRF_DECL_8"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_009_M"):
		case joaat("MP_GUNRUNNING_AWARD_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case joaat("CLO_GRF_DECL_9"):
			if (!func_691(15414, -1, -1))
			{
				func_690(15414, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_010_M"):
		case joaat("MP_GUNRUNNING_AWARD_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case joaat("CLO_GRF_DECL_10"):
			if (!func_691(15415, -1, -1))
			{
				func_690(15415, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_011_M"):
		case joaat("MP_GUNRUNNING_AWARD_011_F"):
		case joaat("CLO_GRM_DECL_11"):
		case joaat("CLO_GRF_DECL_11"):
			if (!func_691(15399, -1, -1))
			{
				func_690(15399, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_012_M"):
		case joaat("MP_GUNRUNNING_AWARD_012_F"):
		case joaat("CLO_GRM_DECL_12"):
		case joaat("CLO_GRF_DECL_12"):
			if (!func_691(15404, -1, -1))
			{
				func_690(15404, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_013_M"):
		case joaat("MP_GUNRUNNING_AWARD_013_F"):
		case joaat("CLO_GRM_DECL_13"):
		case joaat("CLO_GRF_DECL_13"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_014_M"):
		case joaat("MP_GUNRUNNING_AWARD_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case joaat("CLO_GRF_DECL_14"):
			if (!func_691(15392, -1, -1))
			{
				func_690(15392, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_015_M"):
		case joaat("MP_GUNRUNNING_AWARD_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case joaat("CLO_GRF_DECL_15"):
			if (!func_691(15390, -1, -1))
			{
				func_690(15390, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_016_M"):
		case joaat("MP_GUNRUNNING_AWARD_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case joaat("CLO_GRF_DECL_16"):
			if (!func_691(15402, -1, -1))
			{
				func_690(15402, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_017_M"):
		case joaat("MP_GUNRUNNING_AWARD_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case joaat("CLO_GRF_DECL_17"):
			if (!func_691(15416, -1, -1))
			{
				func_690(15416, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_018_M"):
		case joaat("MP_GUNRUNNING_AWARD_018_F"):
		case joaat("CLO_GRM_DECL_18"):
		case joaat("CLO_GRF_DECL_18"):
			if (!func_413(209, -1))
			{
				func_688(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_019_M"):
		case joaat("MP_GUNRUNNING_AWARD_025_F"):
		case joaat("CLO_GRM_DECL_30"):
		case joaat("CLO_GRF_DECL_30"):
			if (!func_691(15426, -1, -1))
			{
				func_690(15426, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M"):
		case joaat("MP_GUNRUNNING_AWARD_020_F"):
		case joaat("CLO_GRM_DECL_31"):
		case joaat("CLO_GRF_DECL_31"):
			if (!func_691(15422, -1, -1))
			{
				func_690(15422, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M_ALT"):
		case joaat("MP_GUNRUNNING_AWARD_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_691(15423, -1, -1))
			{
				func_690(15423, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_021_M"):
		case joaat("MP_GUNRUNNING_AWARD_021_F"):
		case joaat("CLO_GRM_DECL_33"):
		case joaat("CLO_GRF_DECL_33"):
			if (!func_691(15421, -1, -1))
			{
				func_690(15421, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_022_M"):
		case joaat("MP_GUNRUNNING_AWARD_026_F"):
		case joaat("CLO_GRM_DECL_34"):
		case joaat("CLO_GRF_DECL_34"):
			if (!func_691(15427, -1, -1))
			{
				func_690(15427, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_023_M"):
		case joaat("MP_GUNRUNNING_AWARD_023_F"):
		case joaat("CLO_GRM_DECL_35"):
		case joaat("CLO_GRF_DECL_35"):
			if (!func_691(15419, -1, -1))
			{
				func_690(15419, 1, -1, 1);
				return 1;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_024_M"):
		case joaat("MP_GUNRUNNING_AWARD_024_F"):
		case joaat("CLO_GRM_DECL_36"):
		case joaat("CLO_GRF_DECL_36"):
			if (!func_691(15420, -1, -1))
			{
				func_690(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_688(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_689())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_414(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_689()
{
	return 1;
	return 0;
}

bool func_690(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		iParam2 = func_149();
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

int func_691(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_149();
	}
	iVar1 = func_693(iParam0, iParam1);
	uVar2 = func_692(iParam0);
	if (0 != iVar1)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_692(int iParam0)
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

int func_693(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_149();
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

int func_694(int iParam0)
{
	int iVar0;

	iVar0 = func_696(iParam0);
	return func_570(func_695(iVar0), -1, 0);
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3952;
		case 1:
			return 3953;
		case 2:
			return 3954;
		case 3:
			return 3955;
		case 4:
			return 3956;
		case 5:
			return 5457;
		default:
			break;
	}
	return 3952;
}

int func_696(int iParam0)
{
	int iVar0;

	if (func_697(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_697(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_698(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = func_696(iParam0);
	iVar1 = func_695(iVar0);
	iVar2 = (func_570(iVar1, -1, 0) + iParam1);
	func_568(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_701(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_695(iVar0);
				iVar3 = (iVar3 + func_570(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_700(iVar4))
			{
				bVar5 = iVar4;
			}
			iVar4++;
		}
		func_699(9357, bVar5, -1, 1);
	}
}

bool func_699(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam2 == -1)
	{
		iParam2 = func_149();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
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
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, bParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
		case 2:
			return 300000;
		case 3:
			return 500000;
	}
	return 0;
}

int func_701(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = func_149();
	}
	iVar0 = 0;
	iVar1 = func_703(iParam0, iParam1);
	iVar2 = func_702(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_702(int iParam0)
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

int func_703(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_149();
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

int func_704(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_596(iParam1);
	if (func_697(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16968;
				if (func_705(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16973);
				}
				if (func_705(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16978);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 3:
				iVar0 = Global_262145.f_16967;
				if (func_705(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16972);
				}
				if (func_705(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16977);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 4:
				iVar0 = Global_262145.f_16966;
				if (func_705(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16971);
				}
				if (func_705(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16976);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 0:
				iVar0 = Global_262145.f_16964;
				if (func_705(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				if (func_705(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16974);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 2:
				iVar0 = Global_262145.f_16965;
				if (func_705(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				if (func_705(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16975);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 5:
				iVar0 = Global_262145.f_21070;
				if (func_705(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21072);
				}
				if (func_705(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21071);
				}
				iVar0 = (iVar0 * iParam2);
				break;
		}
	}
	return iVar0;
}

int func_705(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_707(bParam0, iParam1))
	{
		iVar0 = func_706(bParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_706(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_697(iParam1) && bParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_707(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_697(iParam1) && bParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_708(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (func_697(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_709(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;

	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_571())
			{
				Var0 = { func_598() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*iParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_704(PLAYER::PLAYER_ID(), Var0, *iParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18603);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18602);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*bParam2 = (*bParam2 + iVar7);
				iVar11 = func_674(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18593);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18592));
				iVar14 = ((*bParam2 / 100) * iVar13);
				*bParam2 = (*bParam2 + iVar14);
				if (uParam1->f_6)
				{
					*bParam2 = (*bParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_653(86);
				}
				Global_2540384.f_5188.f_382 = *bParam2;
			}
			else if (func_362(0))
			{
				Var15 = { func_710(func_548()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*iParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_704(func_548(), Var15, *iParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18603));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18602));
				}
				*bParam2 = (*bParam2 + iVar22);
				fVar23 = Global_262145.f_18642;
				iVar24 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar23));
				*bParam2 = iVar24;
				iVar25 = Global_262145.f_18643;
				if (*bParam2 > iVar25)
				{
					*bParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_710(bool bParam0)
{
	return Global_1630317[bParam0 /*595*/].f_11.f_193;
}

void func_711(int iParam0, bool bParam1, var uParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	if (iParam0 == 167)
	{
		if (func_251(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_726();
			}
			func_725();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_251(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*bParam3 = (*bParam3 + func_717(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_182));
				}
				else
				{
					*iParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*iParam4 = (*iParam4 + uParam2->f_8);
					}
					iVar0 = func_716(*iParam4);
					iVar1 = (iVar0 * *iParam4);
					*bParam3 = (*bParam3 + iVar1);
					iVar3 = func_674(&uVar2);
					iVar4 = Global_262145.f_16149;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15358));
					iVar6 = ((*bParam3 / 100) * iVar5);
					*bParam3 = (*bParam3 + iVar6);
					if (uParam2->f_6)
					{
						*bParam3 = (*bParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_653(44);
					}
				}
				func_714(*bParam3);
				func_713();
				Global_2540384.f_5188.f_382 = *bParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						bVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_673(bVar9))
						{
							func_665(bVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_251(PLAYER::PLAYER_ID()))
		{
			func_712();
		}
	}
}

void func_712()
{
	int iVar0;

	iVar0 = Global_2590607[func_149()];
	iVar0++;
	func_567(3668, iVar0, -1, 1);
}

void func_713()
{
	int iVar0;

	iVar0 = Global_2590613[func_149()];
	iVar0++;
	func_567(3667, iVar0, -1, 1);
}

void func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = Global_2590616[func_149()];
	iVar0 = (iVar0 + iParam0);
	func_567(3669, iVar0, -1, 1);
	if (func_701(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_715(iVar1))
			{
				bVar2 = iVar1;
			}
			iVar1++;
		}
		func_699(7666, bVar2, -1, 1);
	}
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16282;
		case 2:
			return Global_262145.f_16283;
		case 3:
			return Global_262145.f_16284;
		case 4:
			return Global_262145.f_16285;
		case 5:
			return Global_262145.f_16286;
		case 6:
			return Global_262145.f_16287;
		case 7:
			return Global_262145.f_16288;
		case 8:
			return Global_262145.f_16289;
		case 9:
			return Global_262145.f_16290;
		case 10:
			return Global_262145.f_16291;
		case 11:
			return Global_262145.f_16292;
		case 12:
			return Global_262145.f_16293;
		case 13:
			return Global_262145.f_16294;
		case 14:
			return Global_262145.f_16295;
		case 15:
			return Global_262145.f_16296;
		case 16:
			return Global_262145.f_16297;
		case 17:
			return Global_262145.f_16298;
		case 18:
			return Global_262145.f_16299;
		case 19:
			return Global_262145.f_16300;
		case 20:
			return Global_262145.f_16301;
		case 21:
			return Global_262145.f_16302;
		case 22:
			return Global_262145.f_16303;
		case 23:
			return Global_262145.f_16304;
		case 24:
			return Global_262145.f_16305;
	}
	return 0;
}

int func_716(int iParam0)
{
	if (iParam0 >= Global_262145.f_15336)
	{
		return Global_262145.f_15357;
	}
	else if (iParam0 >= Global_262145.f_15335)
	{
		return Global_262145.f_15356;
	}
	else if (iParam0 >= Global_262145.f_15334)
	{
		return Global_262145.f_15355;
	}
	else if (iParam0 >= Global_262145.f_15333)
	{
		return Global_262145.f_15354;
	}
	else if (iParam0 >= Global_262145.f_15332)
	{
		return Global_262145.f_15353;
	}
	else if (iParam0 >= Global_262145.f_15331)
	{
		return Global_262145.f_15352;
	}
	else if (iParam0 >= Global_262145.f_15330)
	{
		return Global_262145.f_15351;
	}
	else if (iParam0 >= Global_262145.f_15329)
	{
		return Global_262145.f_15350;
	}
	else if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	return Global_262145.f_15337;
}

int func_717(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_724(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_723(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_722(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_718(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_718(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_722(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_718(int iParam0)
{
	int iVar0;

	if (func_721(iParam0))
	{
		iVar0 = func_719(func_720(iParam0));
		return func_570(iVar0, -1, 0);
	}
	return 0;
}

int func_719(int iParam0)
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

int func_720(int iParam0)
{
	int iVar0;

	if (func_721(iParam0))
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

int func_721(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_722(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15538;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15532;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15540;
	}
	return 0;
}

int func_723(int iParam0, int iParam1)
{
	int iVar0;

	if (func_721(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1677993[iVar0] == iParam1 && Global_1678000[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_724(int iParam0)
{
	int iVar0;

	if (func_721(iParam0))
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

void func_725()
{
	int iVar0;

	iVar0 = Global_2590604[func_149()];
	iVar0++;
	Global_2590604[func_149()] = iVar0;
	func_567(3666, iVar0, -1, 1);
}

void func_726()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2590601[func_149()];
	iVar1 = Global_2590610[func_149()];
	iVar0++;
	iVar1++;
	Global_2590601[func_149()] = iVar0;
	Global_2590610[func_149()] = iVar1;
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_128 = iVar1;
	func_567(3664, iVar0, -1, 1);
	func_567(3665, iVar1, -1, 1);
}

void func_727()
{
	if (func_1024())
	{
		Global_2452679.f_3074.f_134 = 0;
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
	}
}

void func_728()
{
	if (func_1024())
	{
		if (Global_2452679.f_3074.f_134 < 10)
		{
			Global_2452679.f_3074.f_134++;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

void func_729()
{
	if (func_1024())
	{
		if (Global_2452679.f_3074.f_134 > 0)
		{
			Global_2452679.f_3074.f_134 = (Global_2452679.f_3074.f_134 - 1);
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

int func_730(bool bParam0)
{
	return Global_1630317[bParam0 /*595*/].f_11.f_28;
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_549(1) && !func_362(1))
			{
				if (func_732(func_548()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_732(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_26, 26);
}

int func_733(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18289;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12514) * Global_262145.f_12519));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12464) * Global_262145.f_12469));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12491) * Global_262145.f_12495));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12504) * Global_262145.f_12508));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12526) * Global_262145.f_12531));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12688) * Global_262145.f_12689));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12694) * Global_262145.f_12695));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12692) * Global_262145.f_12693));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12690) * Global_262145.f_12691));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		case 170:
			return 0;
		case 171:
			return Global_262145.f_15059;
		case 172:
			return Global_262145.f_15075;
		case 173:
			return Global_262145.f_15018;
		case 166:
			return 0;
		case 179:
			return Global_262145.f_18297;
		case 180:
			return Global_262145.f_18172;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18180;
		case 185:
			return Global_262145.f_18189;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18385;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18402;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18249;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18433;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18311;
		case 205:
			return Global_262145.f_18420;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18278;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18415;
		case 211:
			return Global_262145.f_18379;
		case 214:
			return Global_262145.f_18973;
		case 215:
			return Global_262145.f_18983;
		case 216:
			return Global_262145.f_18993;
		case 217:
			return Global_262145.f_19002;
		case 218:
			return Global_262145.f_19011;
		case 219:
			return Global_262145.f_19027;
		case 241:
			return Global_262145.f_24103;
		case 242:
			return Global_262145.f_24099;
		case 248:
			return Global_262145.f_24102;
		case 244:
			return Global_262145.f_24100;
		case 239:
			return Global_262145.f_24104;
		case 240:
			return Global_262145.f_24105;
		case 243:
			return Global_262145.f_26372;
		default:
			break;
	}
	return 0;
}

int func_734(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18290;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12515) * Global_262145.f_12520));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12465) * Global_262145.f_12470));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12492) * Global_262145.f_12496));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12505) * Global_262145.f_12509));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12527) * Global_262145.f_12532));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12564) * Global_262145.f_12567));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12610) * Global_262145.f_12613));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12600) * Global_262145.f_12603));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12555) * Global_262145.f_12558));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12575) * Global_262145.f_12580));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12540) * Global_262145.f_12543));
		case 170:
			return Global_262145.f_15001;
		case 171:
			return Global_262145.f_15060;
		case 172:
			return Global_262145.f_15076;
		case 173:
			return Global_262145.f_15019;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17098;
		case 168:
			return Global_262145.f_17097;
		case 179:
			return Global_262145.f_18298;
		case 180:
			return Global_262145.f_18173;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18181;
		case 185:
			return Global_262145.f_18190;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18386;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18403;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18250;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18434;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18312;
		case 205:
			return Global_262145.f_18421;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18279;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18416;
		case 211:
			return Global_262145.f_18380;
		case 214:
			return Global_262145.f_18974;
		case 215:
			return Global_262145.f_18984;
		case 216:
			return Global_262145.f_18994;
		case 217:
			return Global_262145.f_19003;
		case 218:
			return Global_262145.f_19012;
		case 219:
			return Global_262145.f_19028;
		case 178:
			if (func_1024())
			{
				return Global_262145.f_18851;
			}
			else if (bParam1)
			{
				return Global_262145.f_18852;
			}
			break;
		case 188:
			if (func_1024())
			{
				return Global_262145.f_18935;
			}
			else if (bParam1)
			{
				return Global_262145.f_18936;
			}
			break;
		case 225:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21058;
				}
				else
				{
					return Global_262145.f_21059;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_21060;
			}
			break;
		case 226:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21038;
				}
				else
				{
					return Global_262145.f_21039;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_21040;
			}
			break;
		case 227:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21050;
				}
				else
				{
					return Global_262145.f_21051;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_21052;
			}
			break;
		case 229:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22217;
				}
				else
				{
					return Global_262145.f_22218;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_22219;
			}
			break;
		case 230:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22313;
				}
				else
				{
					return Global_262145.f_22314;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_22315;
			}
			break;
		case 233:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22789;
				}
				else
				{
					return Global_262145.f_22790;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_22788;
			}
			break;
		case 241:
			return Global_262145.f_24110;
		case 242:
			return Global_262145.f_24106;
		case 244:
			return Global_262145.f_24107;
		case 248:
			return Global_262145.f_24109;
		case 239:
			return Global_262145.f_24111;
		case 240:
			return Global_262145.f_24112;
		case 237:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23952;
				}
				else
				{
					return Global_262145.f_23953;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_23954;
			}
			break;
		case 238:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24063;
				}
				else
				{
					return Global_262145.f_24064;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_24065;
			}
			break;
		case 249:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24079;
				}
				else
				{
					return Global_262145.f_24080;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_24081;
			}
			break;
		case 243:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26375;
				}
				else
				{
					return Global_262145.f_26376;
				}
			}
			else if (func_571())
			{
				return Global_262145.f_26375;
			}
			break;
		case 158:
			if (func_1024() && !func_571())
			{
				if (func_732(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_571())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_735(int iParam0, float fParam1, float fParam2)
{
	bool bVar0;

	if (iParam0 == 157)
	{
		*fParam1 = 1f;
		*fParam2 = 1f;
		return;
	}
	if (func_736(iParam0))
	{
		if (!func_1024())
		{
			*fParam1 = 1f;
			*fParam2 = Global_262145.f_12408;
		}
		else
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
		return;
	}
	if (func_298(PLAYER::PLAYER_ID(), 1))
	{
		if (func_435(iParam0))
		{
			*fParam1 = (Global_262145.f_18149 / 100f);
			*fParam2 = (Global_262145.f_18149 / 100f);
		}
		else if (iParam0 == 242)
		{
			*fParam1 = Global_262145.f_24113;
			*fParam2 = Global_262145.f_24113;
		}
		else if (iParam0 == 244)
		{
			*fParam1 = Global_262145.f_24114;
			*fParam2 = Global_262145.f_24114;
		}
		else if (iParam0 == 248)
		{
			*fParam1 = Global_262145.f_24116;
			*fParam2 = Global_262145.f_24116;
		}
		else if (iParam0 == 241)
		{
			*fParam1 = Global_262145.f_24117;
			*fParam2 = Global_262145.f_24117;
		}
		else if (iParam0 == 239)
		{
			*fParam1 = Global_262145.f_24118;
			*fParam2 = Global_262145.f_24118;
		}
		else if (iParam0 == 240)
		{
			*fParam1 = Global_262145.f_24119;
			*fParam2 = Global_262145.f_24119;
		}
		else
		{
			*fParam1 = Global_262145.f_12405;
			*fParam2 = Global_262145.f_12404;
		}
	}
	else if (func_435(iParam0))
	{
		*fParam1 = (Global_262145.f_18150 / 100f);
		*fParam2 = (Global_262145.f_18150 / 100f);
	}
	else if (iParam0 == 242)
	{
		*fParam1 = Global_262145.f_24120;
		*fParam2 = Global_262145.f_24120;
	}
	else if (iParam0 == 244)
	{
		*fParam1 = Global_262145.f_24121;
		*fParam2 = Global_262145.f_24121;
	}
	else if (iParam0 == 248)
	{
		*fParam1 = Global_262145.f_24123;
		*fParam2 = Global_262145.f_24123;
	}
	else if (iParam0 == 241)
	{
		*fParam1 = Global_262145.f_24124;
		*fParam2 = Global_262145.f_24124;
	}
	else if (iParam0 == 239)
	{
		*fParam1 = Global_262145.f_24125;
		*fParam2 = Global_262145.f_24125;
	}
	else if (iParam0 == 240)
	{
		*fParam1 = Global_262145.f_24126;
		*fParam2 = Global_262145.f_24126;
	}
	else
	{
		*fParam1 = Global_262145.f_12407;
		*fParam2 = Global_262145.f_12406;
	}
	bVar0 = func_365();
	if (bVar0 != func_32())
	{
		if (func_331(PLAYER::PLAYER_ID(), bVar0, 1))
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
	}
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_737(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_290(PLAYER::PLAYER_ID());
		Global_1676407.f_4 = func_854();
		Global_1676407.f_5 = func_853();
		if (func_257(PLAYER::PLAYER_ID()) || func_258(PLAYER::PLAYER_ID()))
		{
			Global_1676407.f_6 = 1;
		}
		else
		{
			Global_1676407.f_6 = 0;
		}
		Global_1676407.f_1 = func_847(bParam9);
		Global_1676407.f_8 = UNK_0x5A002C4821A13338();
		Global_1676407.f_9 = func_846(bParam0);
		Global_1676407.f_10 = iParam1;
		Global_1676407.f_17 = Global_1676407.f_2;
		Global_1676407.f_18 = Global_1676407.f_2;
		Global_1676407.f_19 = func_845();
		Global_1676407.f_21 = (Global_1676407.f_8 - Global_1676407.f_7);
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676407.f_23 = func_846(func_362(1));
		}
		Global_1676407.f_24 = func_844(PLAYER::PLAYER_ID());
		Global_1676407.f_28 = func_843(PLAYER::PLAYER_ID());
		if (Global_1676407.f_24 > 2)
		{
			Global_1676407.f_24 = 2;
		}
		func_841(iVar0);
	}
	else
	{
		iVar0 = func_232(PLAYER::PLAYER_ID());
	}
	if (func_435(iVar0))
	{
		Global_1676146.f_2 = func_854();
		Global_1676146.f_3 = func_853();
		Global_1676146.f_50 = iParam4;
		Global_1676146.f_51 = iParam5;
		Global_1676146.f_10 = UNK_0x5A002C4821A13338();
		Global_1676146.f_20 = (Global_1676146.f_10 - Global_1676146.f_9);
		Global_1676146.f_12 = iParam1;
		Global_1676146.f_19 = func_837(iVar0, bParam0, func_840(bParam3));
		if (bParam0)
		{
			Global_1676146.f_11 = 1;
		}
		else
		{
			Global_1676146.f_11 = 0;
		}
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676146.f_8 = 1;
		}
		else
		{
			Global_1676146.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1676146.f_43 = 0;
			Global_1676146.f_45 = func_836(func_548(), iParam2);
			Global_1676146.f_47 = iParam7;
			Global_1676146.f_46 = iParam6;
			Global_1676146.f_52 = func_835(func_548(), iParam2);
		}
		func_833(iVar0);
	}
	else if (func_440(iVar0))
	{
		Global_1676200.f_2 = func_854();
		Global_1676200.f_3 = func_853();
		Global_1676200.f_10 = UNK_0x5A002C4821A13338();
		Global_1676200.f_19 = (Global_1676200.f_10 - Global_1676200.f_9);
		Global_1676200.f_12 = iParam1;
		if (bParam0)
		{
			Global_1676200.f_11 = 1;
		}
		else
		{
			Global_1676200.f_11 = 0;
		}
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676200.f_8 = 1;
		}
		else
		{
			Global_1676200.f_8 = 0;
		}
		func_831(iVar0);
	}
	else if (func_489(iVar0))
	{
		Global_1676263.f_2 = func_854();
		Global_1676263.f_3 = func_853();
		Global_1676263.f_9 = UNK_0x5A002C4821A13338();
		Global_1676263.f_18 = (Global_1676263.f_9 - Global_1676263.f_8);
		Global_1676263.f_11 = iParam1;
		Global_1676263.f_7 = func_845();
		Global_1676263.f_42 = func_829(func_149(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_583(iVar1);
		Global_1676263.f_28 = iVar2;
		Global_1676263.f_29 = func_846((func_828(iVar1) || func_827(iVar1)));
		Global_1676263.f_30 = func_846(func_826(iVar1));
		Global_1676263.f_32 = func_846(func_825(iVar1));
		Global_1676263.f_33 = func_846(func_824(iVar1));
		Global_1676263.f_34 = func_846(func_823(iVar1));
		Global_1676263.f_35 = func_846(func_822(0, iVar1) == 1);
		Global_1676263.f_36 = func_846(func_821(iVar1));
		Global_1676263.f_37 = func_846(func_820(iVar1));
		Global_1676263.f_38 = func_846(func_819(iVar1));
		Global_1676263.f_39 = func_846(func_705(iVar1, iVar2, 0));
		Global_1676263.f_40 = func_846(func_705(iVar1, iVar2, 2));
		Global_1676263.f_41 = func_846(func_705(iVar1, iVar2, 1));
		if (func_818(iVar1))
		{
			Global_1676263.f_31 = 2;
		}
		else if (func_817(iVar1))
		{
			Global_1676263.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1676263.f_10 = 1;
		}
		else
		{
			Global_1676263.f_10 = 0;
		}
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676263.f_6 = 1;
		}
		else
		{
			Global_1676263.f_6 = 0;
		}
		Global_1676263.f_21 = -2;
		Global_1676263.f_22 = -2;
		func_815(iVar0);
	}
	else if (func_487(iVar0))
	{
		Global_1676307.f_2 = func_854();
		Global_1676307.f_3 = func_853();
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676307.f_6 = 1;
		}
		else
		{
			Global_1676307.f_6 = 0;
		}
		Global_1676307.f_9 = UNK_0x5A002C4821A13338();
		Global_1676307.f_10 = func_846(bParam0);
		Global_1676307.f_11 = iParam1;
		Global_1676307.f_17 = func_814(func_365());
		Global_1676307.f_18 = (Global_1676307.f_9 - Global_1676307.f_8);
		Global_1676307.f_20 = iParam8;
		Global_1676307.f_21 = -2;
		Global_1676307.f_22 = -2;
		Global_1676307.f_27 = func_813();
		Global_1676307.f_29 = func_570(6108, -1, 0);
		Global_1676307.f_30 = func_570(6104, -1, 0);
		Global_1676307.f_31 = func_570(6105, -1, 0);
		Global_1676307.f_32 = func_570(6107, -1, 0);
		Global_1676307.f_33 = func_570(6106, -1, 0);
		Global_1676307.f_34 = func_570(6109, -1, 0);
		Global_1676307.f_36 = func_846(func_362(1));
		Global_1676307.f_37 = func_811();
		func_797();
		func_795(iVar0);
	}
	else if (func_485(iVar0))
	{
		Global_1676361.f_2 = func_854();
		Global_1676361.f_3 = func_853();
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676361.f_6 = 1;
		}
		else
		{
			Global_1676361.f_6 = 0;
		}
		Global_1676361.f_9 = UNK_0x5A002C4821A13338();
		Global_1676361.f_10 = func_846(bParam0);
		Global_1676361.f_11 = iParam1;
		Global_1676361.f_18 = (Global_1676361.f_9 - Global_1676361.f_8);
		Global_1676361.f_20 = iParam8;
		Global_1676361.f_23 = Global_786547;
		Global_1676361.f_36 = Global_786547.f_1;
		Global_1676361.f_24 = func_570(6158, -1, 0);
		Global_1676361.f_25 = func_570(6163, -1, 0);
		Global_1676361.f_26 = func_570(6164, -1, 0);
		Global_1676361.f_27 = func_846((((func_794() || func_793()) || func_792()) || func_791(PLAYER::PLAYER_ID())));
		Global_1676361.f_28 = func_570(6165, -1, 0);
		Global_1676361.f_29 = func_846(func_790());
		Global_1676361.f_35 = -1;
		Global_1676361.f_38 = -1;
		Global_1676361.f_39 = Global_1676361.f_4;
		Global_1676361.f_40 = Global_1676361.f_5;
		Global_1676361.f_41 = func_854();
		Global_1676361.f_42 = func_846(func_362(1));
		Global_1676361.f_44 = Global_1676361.f_18;
		func_788(iVar0);
	}
	else if (func_559(iVar0))
	{
		if (Global_1676497.f_2 == -1)
		{
			Global_1676497.f_2 = func_854();
		}
		if (Global_1676497.f_3 == -1)
		{
			Global_1676497.f_3 = func_853();
		}
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676497.f_6 = 1;
		}
		else
		{
			Global_1676497.f_6 = 0;
		}
		Global_1676497.f_1 = func_847(0);
		Global_1676497.f_7 = func_845();
		Global_1676497.f_9 = UNK_0x5A002C4821A13338();
		Global_1676497.f_10 = func_846(bParam0);
		Global_1676497.f_11 = iParam1;
		if (func_548() != -1)
		{
			Global_1676497.f_17 = func_787(func_548());
		}
		Global_1676497.f_18 = (Global_1676497.f_9 - Global_1676497.f_8);
		Global_1676497.f_19 = Global_2540384.f_6650;
		Global_1676497.f_28 = func_843(PLAYER::PLAYER_ID());
		Global_1676497.f_29 = func_846(func_786(PLAYER::PLAYER_ID()));
		Global_1676497.f_30 = func_846(func_785(PLAYER::PLAYER_ID()));
		Global_1676497.f_31 = func_784(PLAYER::PLAYER_ID());
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676497.f_33 = func_846(func_362(1));
		}
		if (Global_1676497.f_34 > 2)
		{
			Global_1676497.f_34 = 2;
		}
		func_782(iVar0);
	}
	else if (func_563(iVar0))
	{
		Global_1676443.f_2 = func_854();
		Global_1676443.f_3 = func_853();
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676443.f_6 = 1;
		}
		else
		{
			Global_1676443.f_6 = 0;
		}
		Global_1676443.f_1 = func_847(0);
		Global_1676443.f_9 = UNK_0x5A002C4821A13338();
		Global_1676443.f_10 = func_846(bParam0);
		Global_1676443.f_11 = iParam1;
		Global_1676443.f_18 = (Global_1676443.f_9 - Global_1676443.f_8);
		Global_1676443.f_28 = func_843(PLAYER::PLAYER_ID());
		if (Global_1676443.f_28)
		{
			Global_1676443.f_29 = func_781(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1676443.f_29 = 0;
		}
		Global_1676443.f_30 = func_765(PLAYER::PLAYER_ID(), 4, -1);
		Global_1676443.f_31 = func_784(PLAYER::PLAYER_ID());
		Global_1676443.f_32 = func_846(func_764(PLAYER::PLAYER_ID()));
		Global_1676443.f_33 = func_846(func_763(PLAYER::PLAYER_ID()));
		Global_1676443.f_34 = func_846(func_762(PLAYER::PLAYER_ID()));
		Global_1676443.f_35 = func_846(func_761(PLAYER::PLAYER_ID()));
		Global_1676443.f_36 = func_760(PLAYER::PLAYER_ID());
		Global_1676443.f_37 = func_759(PLAYER::PLAYER_ID());
		Global_1676443.f_39 = func_758(PLAYER::PLAYER_ID());
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676443.f_41 = func_846(func_362(1));
		}
		if (Global_1676443.f_42 > 2)
		{
			Global_1676443.f_42 = 2;
		}
		func_756(iVar0);
	}
	else if (func_558(iVar0))
	{
		Global_1676581.f_2 = func_854();
		Global_1676581.f_3 = func_853();
		Global_1676581.f_4 = func_755(func_548());
		Global_1676581.f_5 = func_754(func_548());
		if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
		{
			Global_1676581.f_6 = 1;
		}
		else
		{
			Global_1676581.f_6 = 0;
		}
		Global_1676581.f_7 = func_845();
		Global_1676581.f_9 = UNK_0x5A002C4821A13338();
		Global_1676581.f_10 = func_846(bParam0);
		Global_1676581.f_11 = iParam1;
		if (func_365() != -1)
		{
			Global_1676581.f_17 = func_787(func_365());
		}
		Global_1676581.f_18 = (Global_1676581.f_9 - Global_1676581.f_8);
		Global_1676581.f_21 = 1;
		Global_1676581.f_22 = 1;
		Global_1676581.f_25 = func_753(PLAYER::PLAYER_ID());
		Global_1676581.f_27 = func_846(func_752(PLAYER::PLAYER_ID()));
		Global_1676581.f_28 = func_748(21, -1);
		Global_1676581.f_29 = func_846(func_747(PLAYER::PLAYER_ID()));
		func_745(iVar0);
	}
	else if (func_479(iVar0))
	{
		if (func_548() != -1)
		{
			Global_1676656.f_6 = func_755(func_548());
			Global_1676656.f_7 = func_754(func_548());
		}
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676656.f_8 = func_846(func_362(1));
		}
		Global_1676656.f_10 = func_845();
		Global_1676656.f_11 = 1;
		Global_1676656.f_13 = (UNK_0x5A002C4821A13338() - Global_1703843);
		Global_1676656.f_14 = iParam1;
		Global_1676656.f_19 = 1;
		Global_1676656.f_20 = 1;
		func_743(iVar0);
	}
	else if (func_478(iVar0))
	{
		Global_1676743.f_2 = func_854();
		if (func_548() != -1)
		{
			Global_1676743.f_6 = func_755(func_548());
			Global_1676743.f_7 = func_754(func_548());
		}
		Global_1676743.f_8 = func_846(func_362(1));
		if (func_548() != -1)
		{
			Global_1676743.f_9 = func_787(func_548());
		}
		Global_1676743.f_10 = func_845();
		Global_1676743.f_11 = 1;
		Global_1676743.f_14 = iParam1;
		Global_1676743.f_19 = 1;
		Global_1676743.f_20 = 1;
		func_741(iVar0);
	}
	else if (func_740(iVar0))
	{
		Global_1676855.f_2 = func_854();
		Global_1676855.f_9 = 1;
		Global_1676855.f_10 = bParam0;
		Global_1676855.f_11 = iParam1;
		func_738(iVar0);
	}
	else
	{
		Global_1676128.f_6 = UNK_0x5A002C4821A13338();
		if (bParam0)
		{
			Global_1676128.f_7 = 1;
		}
		else
		{
			Global_1676128.f_7 = 0;
		}
		Global_1676128.f_8 = iParam1;
		if (Global_1676128.f_4 == 0)
		{
			if ((func_252(PLAYER::PLAYER_ID()) || func_408(PLAYER::PLAYER_ID())) || func_221(PLAYER::PLAYER_ID()))
			{
				Global_1676128.f_4 = 1;
			}
		}
	}
}

void func_738(int iParam0)
{
	UNK_0xD6CA58B3B53A0F22(&Global_1676855);
	func_739();
}

void func_739()
{
	struct<21> Var0;

	Global_1676855 = { Var0 };
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_741(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0xDFCDB14317A9B361(&Global_1676743);
	func_742();
}

void func_742()
{
	struct<35> Var0;

	Global_1676743 = { Var0 };
	Global_1676743.f_23 = 0;
	Global_1676743.f_22 = 0;
	Global_1676743.f_21 = 0;
}

void func_743(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x40673E504A482DE7(&Global_1676656);
	func_744();
}

void func_744()
{
	struct<36> Var0;

	Global_1676656 = { Var0 };
	Global_1676656.f_23 = 0;
	Global_1676656.f_22 = 0;
	Global_1676656.f_21 = 0;
}

void func_745(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1676581);
	func_746();
}

void func_746()
{
	struct<31> Var0;

	Global_1676581 = { Var0 };
}

int func_747(int iParam0)
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_748(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_149();
	}
	if (iParam0 == 7 && !Global_262145.f_16992)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_751(iParam0);
		if (iVar1 == 0 && func_570(5394, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_750(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_843(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_749(-1) && iVar1 == 3)
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

bool func_749(int iParam0)
{
	return func_570(9513, iParam0, 0) != 0;
}

bool func_750(int iParam0)
{
	if (!Global_262145.f_23676)
	{
		return false;
	}
	return func_570(7208, iParam0, 0) != 0;
}

int func_751(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_752(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1590682[bParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_753(bool bParam0)
{
	if (func_232(bParam0) == 243)
	{
		return func_562(bParam0);
	}
	return -1;
}

int func_754(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return -1;
	}
	return Global_1630317[bParam0 /*595*/].f_11.f_8[1];
}

int func_755(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return -1;
	}
	return Global_1630317[bParam0 /*595*/].f_11.f_8[0];
}

void func_756(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1676443);
	func_757();
}

void func_757()
{
	struct<54> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1676443 = { Var0 };
}

int func_758(int iParam0)
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_334, 12);
	}
	return 0;
}

int func_759(int iParam0)
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_334, 10);
	}
	return 0;
}

int func_760(int iParam0)
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_334, 11);
	}
	return 0;
}

bool func_761(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 4);
}

bool func_762(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 3);
}

bool func_763(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 2);
}

bool func_764(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 1);
}

int func_765(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == func_32() || !func_780(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_775(bParam0, iParam2);
		case 1:
			return func_773(bParam0, iParam2);
		case 3:
			return func_772(bParam0);
		case 2:
			return func_767(bParam0, iParam2);
		case 4:
			return func_766(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_766(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 6);
}

int func_767(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_771(bParam0);
		case 11:
			return func_770(bParam0);
		case 12:
			return func_769(bParam0);
		case 13:
			return func_768(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_768(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 15);
}

bool func_769(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 14);
}

bool func_770(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 13);
}

bool func_771(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 12);
}

bool func_772(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 5);
}

int func_773(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_774(bParam0);
		case 6:
			return func_764(bParam0);
		case 7:
			return func_763(bParam0);
		case 8:
			return func_762(bParam0);
		case 9:
			return func_761(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_774(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 0);
}

int func_775(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_779(bParam0);
		case 1:
			return func_778(bParam0);
		case 2:
			return func_777(bParam0);
		case 3:
			return func_776(bParam0);
		case 4:
			return func_784(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_776(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 10);
}

bool func_777(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 9);
}

bool func_778(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 8);
}

bool func_779(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_281.f_4, 7);
}

bool func_780(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_781(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_765(bParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_765(bParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_765(bParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_765(bParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_782(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1676497);
	func_783();
}

void func_783()
{
	struct<39> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1676497 = { Var0 };
}

int func_784(bool bParam0)
{
	if (bParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 31);
	}
	return 0;
}

bool func_785(int iParam0)
{
	if (iParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 0);
}

bool func_786(int iParam0)
{
	if (iParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 19);
}

var func_787(bool bParam0)
{
	return Global_1590682[bParam0 /*883*/].f_211.f_6;
}

void func_788(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1676361);
	func_789();
}

void func_789()
{
	struct<46> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1676361 = { Var0 };
	Global_1676361.f_16 = 0;
}

bool func_790()
{
	return func_570(6157, -1, 0) != 0;
}

int func_791(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1590682[bParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

bool func_792()
{
	return func_570(6165, -1, 0) == 3;
}

bool func_793()
{
	return func_570(6165, -1, 0) == 2;
}

bool func_794()
{
	return func_570(6165, -1, 0) == 1;
}

void func_795(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1676307);
	func_796();
}

void func_796()
{
	struct<54> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676307 = { Var0 };
	Global_1676307.f_23 = 0;
	Global_1676307.f_24 = 0;
	Global_1676307.f_16 = 0;
}

void func_797()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_808(12));
		func_807(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323678[iVar1 /*141*/].f_66 != 0 && func_799(Global_1323678[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2540384.f_955 != iVar1)
				{
					if (func_798(Global_1323678[iVar1 /*141*/].f_66))
					{
						if (Global_1323678[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323678[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1676307.f_38 = iVar3;
								break;
							case 1:
								Global_1676307.f_39 = iVar3;
								break;
							case 2:
								Global_1676307.f_40 = iVar3;
								break;
							case 3:
								Global_1676307.f_41 = iVar3;
								break;
							case 4:
								Global_1676307.f_42 = iVar3;
								break;
							case 5:
								Global_1676307.f_43 = iVar3;
								break;
							case 6:
								Global_1676307.f_44 = iVar3;
								break;
							case 7:
								Global_1676307.f_45 = iVar3;
								break;
							case 8:
								Global_1676307.f_46 = iVar3;
								break;
							case 9:
								Global_1676307.f_47 = iVar3;
								break;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_798(int iParam0)
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

int func_799(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_806())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_805() && !func_804()) && !func_803()) && !func_802()) && !func_806())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || UNK_0xDCA0815D900F27F8())
		{
		}
		else if (!func_803())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_801(iParam0))
		{
			return 0;
		}
	}
	if (!func_800(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_800(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_599())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return 1;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_801(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = UNK_0x5A002C4821A13338();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1455990255)
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 295054921)
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -365873403)
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -276744698)
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1861786828)
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -210308634)
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -857356038)
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1492917079)
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1149725334)
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1644055914)
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1086534307)
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045911276)
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2014313426)
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -102335483)
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1429622905)
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -980573366)
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 298565713)
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_802()
{
	return 0;
}

int func_803()
{
	return 1;
}

int func_804()
{
	return 1;
}

int func_805()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_806()
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

void func_807(int iParam0, int iParam1, bool bParam2)
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

int func_808(int iParam0)
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
		iVar0 = func_751(iParam0);
		return func_810(iVar0);
	}
	return (func_809(iParam0, -1, 1) * iParam0);
}

int func_809(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_495(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_501(iParam1))
			{
				return 0;
			}
			else if (func_493(iParam1, -1))
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

int func_810(int iParam0)
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

var func_811()
{
	var uVar0;

	uVar0 = func_812();
	if (!func_1024())
	{
		if (func_548() != func_32())
		{
			uVar0 = func_844(func_548()) + 1;
		}
	}
	return uVar0;
}

int func_812()
{
	return func_844(PLAYER::PLAYER_ID()) + 1;
}

int func_813()
{
	return func_570(6114, -1, 0);
}

int func_814(bool bParam0)
{
	if (func_298(bParam0, 1))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_424;
	}
	return -1;
}

void func_815(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1676263);
	func_816();
}

void func_816()
{
	struct<44> Var0;

	Global_1676263 = { Var0 };
	Global_1676263.f_23 = 0;
	Global_1676263.f_24 = 0;
	Global_1676263.f_16 = 0;
}

bool func_817(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 12);
}

bool func_818(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 13);
}

int func_819(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 12) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 13)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_820(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_821(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (((((MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 5)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 0)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_822(int iParam0, bool bParam1)
{
	if (bParam1 == func_32())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		case 1:
			if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[bParam1 /*883*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_823(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 6) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 7)) || MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_824(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 8);
}

bool func_825(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 7);
}

bool func_826(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 9);
}

bool func_827(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 11);
}

bool func_828(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_351, 10);
}

int func_829(int iParam0, int iParam1)
{
	return func_570(func_830(iParam1), iParam0, 0);
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3899;
		case 1:
			return 3928;
		case 2:
			return 3932;
		case 3:
			return 3936;
		case 4:
			return 3940;
		case 5:
			return 5451;
		default:
			break;
	}
	return 3899;
}

void func_831(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1676200);
	func_832();
}

void func_832()
{
	struct<63> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1676200 = { Var0 };
	Global_1676200.f_24 = 0;
	Global_1676200.f_25 = 0;
	Global_1676200.f_17 = 0;
}

void func_833(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1676146);
	func_834();
}

void func_834()
{
	struct<54> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676146 = { Var0 };
	Global_1676146.f_29 = 0;
	Global_1676146.f_30 = 0;
	Global_1676146.f_17 = 0;
}

int func_835(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_705(bParam0, iParam1, 2);
	bVar1 = func_705(bParam0, iParam1, 1);
	bVar2 = func_705(bParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_836(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	if (func_697(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_837(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (func_424(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 19;
	}
	else if (func_491(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_329(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17687;
			iVar1 = 20;
		}
	}
	else if (func_435(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_755(func_548()), func_754(func_548()), func_854(), func_853(), iVar1, iVar0);
	}
	func_839(iVar0);
	func_838(iVar0);
	return iVar0;
}

void func_838(int iParam0)
{
	int iVar0;

	iVar0 = func_570(3969, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_463 = iVar0;
	func_568(3969, iVar0, -1, 1, 0);
}

void func_839(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1630317[iVar0 /*595*/].f_11.f_462 = (Global_1630317[iVar0 /*595*/].f_11.f_462 + iParam0);
	if (Global_1630317[iVar0 /*595*/].f_11.f_462 < -9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
	else if (Global_1630317[iVar0 /*595*/].f_11.f_462 > 9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
}

int func_840(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_252(PLAYER::PLAYER_ID()) || func_221(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_841(int iParam0)
{
	UNK_0x07E47E394131538E(&Global_1676407);
	func_842();
}

void func_842()
{
	struct<36> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1676407 = { Var0 };
}

int func_843(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1590682[bParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_844(bool bParam0)
{
	if (func_88(bParam0) == func_32())
	{
		return 0;
	}
	return Global_1630317[bParam0 /*595*/].f_11.f_19;
}

int func_845()
{
	int iVar0;

	if (func_571())
	{
		return 4;
	}
	else if (func_1024())
	{
		if (func_732(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_362(1))
	{
		iVar0 = func_814(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_549(1))
	{
		if (func_732(func_548()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_846(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_847(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_290(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_232(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_852(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = func_850(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = func_849(PLAYER::PLAYER_ID());
			if (func_560(func_561(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		case 250:
			iVar2 = func_849(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = func_848(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = func_848(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		case 239:
			iVar1 = 600;
			break;
		case 240:
			iVar1 = 700;
			break;
		case 241:
			iVar1 = 800;
			break;
		case 242:
			iVar1 = 900;
			break;
		case 244:
			iVar1 = 1100;
			break;
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_848(int iParam0)
{
	if (func_232(PLAYER::PLAYER_ID()) == 238 || func_232(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_472;
	}
	return -1;
}

int func_849(int iParam0)
{
	if (func_232(PLAYER::PLAYER_ID()) == 237 || func_232(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_471;
	}
	return -1;
}

int func_850(int iParam0)
{
	return func_851(iParam0, 150);
}

int func_851(int iParam0, int iParam1)
{
	if (func_290(iParam0) == iParam1)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_469;
	}
	return -1;
}

int func_852(int iParam0)
{
	return func_851(iParam0, 236);
}

int func_853()
{
	if (Global_1676128.f_3 != 0)
	{
		return Global_1676128.f_3;
	}
	return -1;
}

int func_854()
{
	if (Global_1676128.f_2 != 0)
	{
		return Global_1676128.f_2;
	}
	return -1;
}

int func_855(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_32();
	bVar1 = func_32();
	bVar2 = func_32();
	return func_856(iParam0, sParam1, sParam2, sParam3, iParam4, bVar0, bVar1, bVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_856(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_547(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = bParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_341(&(Var0.f_69), 4);
	return func_512(&Var0);
}

int func_857(bool bParam0)
{
	int iVar0;

	iVar0 = func_302(bParam0);
	if (iVar0 != -1)
	{
		return func_300(iVar0);
	}
	return 1;
}

char* func_858()
{
	bool bVar0;
	char* sVar1;

	bVar0 = func_88(PLAYER::PLAYER_ID());
	if (bVar0 != func_32())
	{
		if (bVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_202(bVar0, 28) || func_202(PLAYER::PLAYER_ID(), 28)) || func_553(bVar0)) && !func_552(bVar0))
			{
				return func_554(bVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_554(bVar0, 0);
			}
		}
		sVar1 = func_556(&(Global_1630317[bVar0 /*595*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_554(bVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_859()
{
	func_1018();
	func_955();
	func_944();
	func_934();
	func_881();
	func_876();
	func_863();
	func_860();
}

void func_860()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iLocal_743 != Local_178.f_5)
	{
		if (Local_178.f_34 != -1)
		{
			if (func_462())
			{
				if (func_407(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_178.f_5 > 0)
					{
						if (Local_178.f_37 > -1)
						{
							bVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_178.f_37);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
							{
								if (bVar0 != PLAYER::PLAYER_ID())
								{
									if (func_298(bVar0, 1))
									{
										iVar1 = func_302(bVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_300(iVar1);
											func_861("GB_SGHT_TCKC", bVar0, iVar2, 0, 0, 0, 1, 0);
										}
									}
									else
									{
										func_861("GB_SGHT_TCKC", bVar0, 1, 0, 0, 0, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_743 = Local_178.f_5;
		}
	}
}

int func_861(char* sParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;

	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || bParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_659(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2515173 = { func_89(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515103, 35, &Global_2515173))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2515103.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_862(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar17, false, Global_2515103, &Var1, Global_1314053, Global_1314054, Global_1314055);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar17, false, Global_2515103, Global_1314053, Global_1314054, Global_1314055);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_655(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_862(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_863()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1040() && !func_416())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_444, 0))
	{
		return;
	}
	if (!func_462())
	{
		return;
	}
	iVar0 = func_407(PLAYER::PLAYER_ID());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_178.f_51)))
	{
		iVar1 = (func_11() - func_875(&(Local_178.f_51), 0, 0));
		iVar2 = (func_191() - Local_178.f_5);
		func_874(iVar1);
		if (iVar1 > 30000)
		{
			func_864(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_864(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_864(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_864(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;

	if (func_872(0) == 0)
	{
		return;
	}
	func_871();
	func_868(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_640(sParam4))
	{
		sVar0 = sParam4;
	}
	func_865(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_865(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_867(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_866(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_866(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_867(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378744.f_6304[iParam0], iParam1);
}

void func_868(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_867(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_866(6, iVar0);
		Global_1378744.f_3955[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = iParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_870())
		{
			Global_1378744.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			bVar2 = false;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				bVar2 = true;
			}
			if (iParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || bVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_869())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_869()
{
	int iVar0;
	var uVar1;

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_870()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_871()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2463796 = 1;
}

int func_872(bool bParam0)
{
	if (func_873())
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1152(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_873()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_874(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_432, 8))
	{
		func_203();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_432, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_432, 15);
				MISC::SET_BIT(&iLocal_432, 9);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_432, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_432, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
					MISC::SET_BIT(&iLocal_432, 11);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_432, 14))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					MISC::SET_BIT(&iLocal_432, 14);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_432, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_432, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						MISC::SET_BIT(&iLocal_432, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_432, 9);
						}
					}
				}
			}
		}
	}
}

int func_875(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_876()
{
	int iVar0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
		{
			if (!MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_178.f_3), PLAYER::PLAYER_PED_ID()))
				{
					MISC::SET_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
					iLocal_741 = AUDIO::GET_SOUND_ID();
					if (func_362(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_741, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_741, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_434 != Local_178.f_5)
	{
		if (MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
		{
			MISC::CLEAR_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
		}
		if (MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_178.f_3))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_178.f_3);
				ENTITY::DELETE_ENTITY(&iVar0);
				MISC::CLEAR_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_178.f_3);
			}
		}
		else
		{
			iLocal_434 = Local_178.f_5;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
	{
		if (func_1024())
		{
			if (func_1040())
			{
				func_878();
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_431, 13))
		{
			if (!func_1040() || !func_1024())
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_178.f_3), true, true);
				MISC::SET_BIT(&iLocal_431, 13);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_431, 3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_178.f_3), 1200);
			MISC::SET_BIT(&iLocal_431, 3);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_431, 13))
		{
			MISC::CLEAR_BIT(&iLocal_431, 13);
		}
		if (MISC::IS_BIT_SET(iLocal_431, 3))
		{
			MISC::CLEAR_BIT(&iLocal_431, 3);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_436))
		{
			HUD::REMOVE_BLIP(&iLocal_436);
		}
	}
	func_877();
}

void func_877()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_462())
	{
		return;
	}
	if (func_407(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_178.f_3) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_178.f_3), false))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_178.f_3)))
			{
				HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
				GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_178.f_3), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, true, true, 2, false, 0, 0, false);
			}
		}
	}
}

void func_878()
{
	int iVar0;

	iVar0 = func_407(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_436))
		{
			HUD::REMOVE_BLIP(&iLocal_436);
		}
		return;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_436))
	{
		return;
	}
	MISC::CLEAR_BIT(&iLocal_431, 11);
	iLocal_436 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_178.f_3));
	HUD::SET_BLIP_PRIORITY(iLocal_436, 12);
	HUD::SET_BLIP_SPRITE(iLocal_436, 459);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_436, "GB_SGHT_BLP");
	HUD::SET_BLIP_ROUTE(iLocal_436, true);
	HUD::SET_BLIP_SCALE(iLocal_436, Global_262145.f_12363);
	if (func_1040())
	{
		func_879(&iLocal_436, 18);
	}
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_436, true);
	iLocal_742 = AUDIO::GET_SOUND_ID();
	if (func_362(1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_742, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", false);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_742, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", false);
	}
}

void func_879(int iParam0, int iParam1)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_880(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_880(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_881()
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_178.f_33)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
	{
		if (iLocal_738 != -1)
		{
			iLocal_738 = -1;
		}
		if (MISC::IS_BIT_SET(Global_4271024, 20))
		{
			MISC::CLEAR_BIT(&Global_4271024, 20);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(Global_4271024, 20))
	{
		if (!MISC::IS_BIT_SET(Global_4271024, 21))
		{
			if (iLocal_738 < 0)
			{
				MISC::SET_BIT(&Global_4271024, 20);
			}
		}
	}
	if (iLocal_739 == -1)
	{
		iLocal_739 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (iLocal_738 < 0)
	{
		if (MISC::IS_BIT_SET(Global_4271024, 21))
		{
			MISC::CLEAR_BIT(&Global_4271024, 21);
			iLocal_738 = 0;
		}
	}
	func_882();
}

void func_882()
{
	bool bVar0;

	if (!MISC::IS_BIT_SET(iLocal_431, 4))
	{
		if (iLocal_738 >= 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				MISC::CLEAR_BIT(&Local_444, 0);
				iLocal_738 = -1;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					func_933(1);
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_932(&Local_444);
		func_931(&Local_444);
		MISC::CLEAR_BIT(&iLocal_431, 4);
	}
	switch (iLocal_738)
	{
		case 0:
			func_930(1);
			HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
			iLocal_738++;
			break;
		case 1:
			if (func_929(1) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				MISC::SET_BIT(&Local_444, 0);
				MISC::SET_BIT(&(Local_444.f_1), 0);
				func_455();
				iLocal_740 = 10;
				if (iLocal_739 == 2)
				{
					Local_444.f_22 = 1;
				}
				else if (iLocal_739 == 1)
				{
					Local_444.f_22 = 0;
					iLocal_740 = 77;
				}
				else if (iLocal_739 == 0)
				{
					iLocal_740 = 50;
					Local_444.f_22 = 0;
				}
				func_920(PLAYER::PLAYER_ID(), 0, 66048, 0);
				iLocal_738++;
			}
			else
			{
				if (!func_929(1))
				{
				}
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
				{
				}
			}
			break;
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (!func_207(0))
			{
				func_236(0);
			}
			if (iLocal_739 == 0)
			{
				func_898(&Local_444, 5, 5, iLocal_740, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_897(&Local_444, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_739 == 1)
			{
				func_898(&Local_444, 5, 5, iLocal_740, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_896(&Local_444, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_739 == 2)
			{
				func_898(&Local_444, 5, 5, iLocal_740, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_883(&Local_444, 1))
				{
					bVar0 = true;
				}
			}
			if (MISC::IS_BIT_SET(Local_444.f_1, 1))
			{
				MISC::CLEAR_BIT(&Local_444, 0);
				func_932(&Local_444);
				func_920(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (func_207(0))
				{
					func_206(0);
				}
				iLocal_738 = -1;
			}
			else if (bVar0)
			{
				MISC::CLEAR_BIT(&Local_444, 0);
				func_932(&Local_444);
				Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
				MISC::SET_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
				iLocal_739++;
				if (iLocal_739 >= 3)
				{
					iLocal_739 = 0;
				}
				if (func_207(0))
				{
					func_206(0);
				}
				func_920(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_738++;
			}
			break;
	}
}

int func_883(int* iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(*iParam0, 26))
	{
		if (bParam1)
		{
			func_884(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_884(int* iParam0, bool bParam1, bool bParam2)
{
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::SET_BIT(iParam0, 12);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	if (bParam2)
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		}
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	HUD::CLEAR_HELP(true);
	if (bParam1)
	{
		UNK_0xDDEDC06C88DA4E04(PLAYER::PLAYER_ID(), true, false);
	}
	CAM::DESTROY_CAM(iLocal_77, false);
	func_888(0);
	func_887();
	GRAPHICS::_0x9B079E5221D984D3(false);
	func_886(iParam0, 1, 1, 0);
	func_885(0, 1, 1, 0);
}

int func_885(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_886(int* iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_68[iVar0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[iVar0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_68[iVar0]);
					iLocal_68[iVar0] = -1;
				}
			}
			iVar0++;
		}
		if (iParam0->f_20 > -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
			{
				AUDIO::STOP_SOUND(iParam0->f_20);
				AUDIO::RELEASE_SOUND_ID(iParam0->f_20);
				iParam0->f_20 = -1;
			}
		}
	}
	MISC::CLEAR_BIT(iParam0, 25);
	MISC::CLEAR_BIT(iParam0, 5);
	if (iParam2 == 1)
	{
		MISC::CLEAR_BIT(iParam0, 12);
		MISC::CLEAR_BIT(iParam0, 9);
		MISC::CLEAR_BIT(iParam0, 18);
		MISC::CLEAR_BIT(iParam0, 27);
		MISC::CLEAR_BIT(iParam0, 28);
	}
	iParam0->f_1 = 0;
	iParam0->f_7 = iParam0->f_6;
	iLocal_80 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_79);
	}
	MISC::CLEAR_BIT(iParam0, 29);
	func_885(0, 1, 1, 0);
}

void func_887()
{
	int iVar0;

	Global_1377236.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1377236.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2540384.f_4595 = 1;
}

void func_888(bool bParam0)
{
	if (bParam0)
	{
		func_895();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_894(0))
		{
			func_889(0);
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

void func_889(int iParam0)
{
	if (func_893())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_892())
		{
			func_891(1, 1);
		}
		else
		{
			func_891(0, 0);
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
	if (!func_890())
	{
		Global_19681.f_1 = 3;
	}
}

int func_890()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_891(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_894(0))
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

bool func_892()
{
	return MISC::IS_BIT_SET(Global_1689730, 5);
}

bool func_893()
{
	return MISC::IS_BIT_SET(Global_1689730, 19);
}

int func_894(int iParam0)
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

void func_895()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

int func_896(int* iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(*iParam0, 9))
	{
		if (bParam1)
		{
			func_884(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_897(int* iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (bParam1)
		{
			func_884(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_898(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (MISC::IS_BIT_SET(*iParam0, 0))
	{
		func_899(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_899(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	int iVar17;

	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	if (bParam17)
	{
		func_919(1);
	}
	func_918(4, -1);
	func_917(0);
	if (func_929(bParam16))
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_79, 255, 255, 255, 0, 0);
			}
		}
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			iParam0->f_290 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
			iParam0->f_291 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
			if (iParam0->f_292 != iParam0->f_290 || iParam0->f_293 != iParam0->f_291)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_290);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_291);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iParam0->f_292 = iParam0->f_290;
			iParam0->f_293 = iParam0->f_291;
		}
		else
		{
			func_916(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((SYSTEM::TO_FLOAT(iVar2) * 8f) * SYSTEM::TIMESTEP());
			fVar7 = ((SYSTEM::TO_FLOAT(iVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_80 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "MOVE_CURSOR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
		if (iLocal_80 > 4)
		{
			if (PAD::_IS_USING_KEYBOARD_2(2))
			{
				iParam0->f_290 = PAD::GET_CONTROL_NORMAL(2, 239);
				iParam0->f_291 = PAD::GET_CONTROL_NORMAL(2, 240);
				if (UNK_0xDCA0815D900F27F8())
				{
					if (iParam0->f_292 != iParam0->f_290)
					{
						if (iParam0->f_290 < 0.49f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (iParam0->f_290 > 0.51f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
				iParam0->f_292 = iParam0->f_290;
				iParam0->f_293 = iParam0->f_291;
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 1);
				fVar9 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + SYSTEM::TIMESTEP());
				fLocal_74 = (fLocal_74 + fVar8);
				fLocal_75 = (fLocal_75 + fVar9);
				fLocal_76 = (fLocal_76 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					fLocal_74 = (fLocal_74 / fLocal_76);
					fLocal_75 = (fLocal_75 / fLocal_76);
					if (MISC::ABSF(fLocal_75) < 0.2f)
					{
						if (fLocal_74 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_74 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (MISC::ABSF(fLocal_74) < 0.2f)
					{
						if (fLocal_75 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_75 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (bVar10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					}
					fLocal_74 = 0f;
					fLocal_75 = 0f;
					fLocal_76 = 0f;
				}
			}
			func_915(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (MISC::ABSI(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
						{
							if (iLocal_80 != 8)
							{
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_20, "HACKING_MOVE_CURSOR", 0, true);
							}
						}
					}
				}
				iVar16++;
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 195) || PAD::IS_CONTROL_JUST_PRESSED(2, 196)) || PAD::IS_CONTROL_PRESSED(2, 195)) || PAD::IS_CONTROL_PRESSED(2, 196))
			{
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 32) || PAD::IS_CONTROL_JUST_PRESSED(2, 172))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_CONTROL_JUST_PRESSED(2, 173))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 34) || PAD::IS_CONTROL_JUST_PRESSED(2, 174))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 35) || PAD::IS_CONTROL_JUST_PRESSED(2, 175))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (bParam12)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
				iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				if (iVar0 == 6)
				{
					func_914(iParam0);
				}
			}
		}
		func_913();
	}
	if (iLocal_80 == 5 || iLocal_80 == 6)
	{
		if (bLocal_64)
		{
			func_912((iParam15 - (MISC::GET_GAME_TIMER() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1f, -1f);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1f, -1f);
			}
		}
	}
	if (iLocal_80 == 5)
	{
		if (func_911(&iLocal_81, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_80 == 6)
	{
		if (func_911(&iLocal_81, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1f, -1f, -1f);
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_1, 0))
	{
		if (iLocal_80 == 2)
		{
			iLocal_80 = 3;
		}
		else if (iLocal_80 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_80 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_80)
	{
		case 0:
			if (!MISC::IS_BIT_SET(*iParam0, 29))
			{
				func_910(iParam0, iParam14);
			}
			func_930(1);
			GRAPHICS::_0x9B079E5221D984D3(true);
			iParam0->f_20 = AUDIO::GET_SOUND_ID();
			iLocal_154 = 0;
			bLocal_155 = false;
			iParam0->f_23 = 0;
			iLocal_80++;
			break;
		case 1:
			iVar17 = 0;
			while (iVar17 < 5)
			{
				iLocal_68[iVar17] = -1;
				iVar17++;
			}
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), SYSTEM::TO_FLOAT(iParam2), -1f, -1f, -1f);
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1f, -1f, -1f, -1f);
			if (bParam12 == 1)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			iParam5 = iParam5;
			iParam6 = iParam6;
			iParam0->f_7 = iParam1;
			iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
			MISC::CLEAR_BIT(iParam0, 1);
			fLocal_74 = 0f;
			fLocal_75 = 0f;
			fLocal_76 = 0f;
			iLocal_68[0] = AUDIO::GET_SOUND_ID();
			iLocal_68[1] = AUDIO::GET_SOUND_ID();
			func_885(1, 0, 1, 0);
			if (iParam0->f_22)
			{
				iLocal_80 = 8;
			}
			else
			{
				iLocal_80++;
			}
			break;
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_430("H_EXIT_PROMPT"))
					{
						if (!func_430("HACKOBJ1"))
						{
							func_909("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (PAD::_IS_USING_KEYBOARD_2(2))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
					iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_430("H_EXIT_PROMPT"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					iLocal_65 = 0;
					iLocal_80++;
				}
			}
			if (iLocal_83 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_908(0, "");
					}
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				if (iVar0 == 80)
				{
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						func_908(1, "ACCESSD");
					}
				}
			}
			break;
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_80 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_430("HACKOBJ2"))
						{
							func_909("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_83 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_BACK");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							if (iParam7 == 1)
							{
								if (func_430("HACKOBJ2"))
								{
									HUD::CLEAR_HELP(true);
								}
								func_909("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_80 = (iLocal_80 - 1);
							}
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_908(0, "");
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					func_908(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_80++;
			}
			break;
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_80 == 4)
				{
					if (bParam9 == 1)
					{
						if (!MISC::IS_BIT_SET(*iParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_430("HACKOBJ5"))
								{
									func_909("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_430("HACKOBJ3"))
							{
								func_909("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_430("HACKOBJ5"))
							{
								func_909("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_430("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(true);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_83 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
					{
						if (PAD::_IS_USING_KEYBOARD_2(2))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
								iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							}
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_BACK");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						if (iParam7 == 1)
						{
							if (func_430("HACKOBJ5") || func_430("HACKOBJ3"))
							{
								HUD::CLEAR_HELP(true);
							}
							iLocal_65 = 0;
							iLocal_80 = (iLocal_80 - 1);
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_908(0, "");
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					func_908(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f);
						}
						else
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_80++;
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 18))
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f);
						iLocal_63 = MISC::GET_GAME_TIMER();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_80++;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_908(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && MISC::IS_BIT_SET(*iParam0, 9))
							{
								func_908(1, "TRYDL");
							}
							else
							{
								func_908(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_908(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && MISC::IS_BIT_SET(*iParam0, 9))
						{
							func_908(1, "TRYDL");
						}
						else
						{
							func_908(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1f, -1f, -1f);
						if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f);
						}
						else
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, -1f);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_907(iParam0, bParam18);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_79, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_80 = 6;
					}
					else if ((!bParam11 || MISC::IS_BIT_SET(*iParam0, 18)) && !MISC::IS_BIT_SET(*iParam0, 9))
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1f, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1f, -1f, -1f);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f);
						iLocal_63 = MISC::GET_GAME_TIMER();
						bLocal_64 = true;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_907(iParam0, bParam18);
						}
						if (func_430("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(true);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_79, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_80 = 6;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_908(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && MISC::IS_BIT_SET(*iParam0, 18))
							{
								func_908(1, "TRYDL");
							}
							else
							{
								func_908(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_908(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && MISC::IS_BIT_SET(*iParam0, 18))
						{
							func_908(1, "TRYDL");
						}
						else
						{
							func_908(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (MISC::IS_BIT_SET(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (MISC::IS_BIT_SET(*iParam0, 18) && MISC::IS_BIT_SET(*iParam0, 9))
						{
							if (!MISC::IS_BIT_SET(*iParam0, 28))
							{
								MISC::SET_BIT(iParam0, 28);
								iLocal_80 = 8;
							}
						}
						else
						{
							if (iLocal_83 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
									{
										func_908(0, "");
									}
								}
							}
							if (iLocal_83 == 0)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
								if (MISC::IS_BIT_SET(*iParam0, 18))
								{
									func_908(1, "TRYBRUTE");
								}
								else
								{
									func_908(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_906("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_906("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!MISC::IS_BIT_SET(iParam0->f_1, 1))
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
								{
									AUDIO::STOP_SOUND(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 85)
			{
				if (iParam0->f_7 > 1)
				{
					iParam0->f_7 = (iParam0->f_7 - 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), -1f, -1f, -1f, -1f);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
					}
					MISC::SET_BIT(iParam0, 25);
					bLocal_64 = false;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[0] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
				MISC::SET_BIT(iParam0, 25);
				bLocal_64 = true;
			}
			if (iVar0 == 91)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				MISC::SET_BIT(iParam0, 25);
				iLocal_80 = 4;
			}
			if (bLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					MISC::SET_BIT(iParam0, 25);
					iParam0->f_7 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					bLocal_64 = false;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					if (iLocal_68[0] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
						{
							AUDIO::STOP_SOUND(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_81 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 18);
				bLocal_64 = false;
				iLocal_65 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, true);
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_906("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_906("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (!MISC::IS_BIT_SET(iParam0->f_1, 1))
					{
						if (!PAD::_IS_USING_KEYBOARD(2))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
							{
								iParam0->f_7 = iParam1;
								GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
								}
								if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
								{
									iLocal_80 = 4;
								}
								else
								{
									MISC::SET_BIT(&(iParam0->f_1), 1);
								}
							}
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 214))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
							{
								AUDIO::STOP_SOUND(iLocal_68[0]);
							}
							if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 86)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, true);
			}
			if (iVar0 == 92)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
			}
			if (MISC::IS_BIT_SET(*iParam0, 23))
			{
				if (func_911(&(iParam0->f_10), 500))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "RESET_ROULETTE");
					MISC::CLEAR_BIT(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (iParam0->f_7 > 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "STOP_ROULETTE");
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(iParam0, 23);
					MISC::SET_BIT(iParam0, 31);
					if (func_63() == 0)
					{
						iParam0->f_7 = (iParam0->f_7 - 1);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), -1f, -1f, -1f, -1f);
					}
				}
				else
				{
					MISC::SET_BIT(iParam0, 25);
					MISC::SET_BIT(iParam0, 31);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					iParam0->f_7 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (func_63() == 0)
					{
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (bLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					iParam0->f_7 = iParam1;
					MISC::SET_BIT(iParam0, 25);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					bLocal_64 = false;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					HUD::CLEAR_HELP(true);
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[1] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
				bLocal_64 = true;
			}
			if (iVar0 == 89)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 4;
			}
			if (iVar0 == 86)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_81 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 9);
				if (bParam19)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_SUCCESS", 0, true);
				}
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		case 7:
			if (iParam7 == 1)
			{
				if (MISC::IS_BIT_SET(*iParam0, 9) && MISC::IS_BIT_SET(*iParam0, 18))
				{
					if (iLocal_154 == 0)
					{
						if (!func_430("HACKOBJ7"))
						{
							func_909("HACKOBJ7");
							iLocal_154 = 1;
						}
					}
				}
				if (((func_430("H_USE_PC6") || func_430("H_USE_PC7")) || func_430("H_USE_PC8")) || func_430("H_USE_PC9"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if ((MISC::IS_BIT_SET(*iParam0, 9) && MISC::IS_BIT_SET(*iParam0, 18)) && (!bParam13 || (bParam13 && MISC::IS_BIT_SET(*iParam0, 28))))
			{
				if (func_430("HACKOBJ7"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!bLocal_155)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "unlocked_bleep", PLAYER::PLAYER_PED_ID(), "HACKING_DOOR_UNLOCK_SOUNDS", false, 0);
					bLocal_155 = true;
				}
				if (func_911(&iLocal_81, 3000))
				{
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::SET_BIT(iParam0, 12);
					GRAPHICS::_0x9B079E5221D984D3(false);
				}
			}
			else
			{
				if (((bParam13 && !MISC::IS_BIT_SET(*iParam0, 27)) && MISC::IS_BIT_SET(*iParam0, 9)) && MISC::IS_BIT_SET(*iParam0, 18))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "OPEN_DOWNLOAD");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(iParam0, 27);
				}
				if (func_911(&iLocal_81, 2000))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
					iLocal_80 = 4;
				}
			}
			break;
		case 8:
			func_900(iParam0);
			break;
	}
}

void func_900(int* iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0->f_23 > 0)
	{
		if (MISC::IS_BIT_SET(*iParam0, 22))
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, false);
				}
			}
		}
	}
	if (((((((Local_105[0 /*4*/] == 1 && Local_105[1 /*4*/] == 1) && Local_105[2 /*4*/] == 1) && Local_105[3 /*4*/] == 1) && Local_105[4 /*4*/] == 1) && Local_105[5 /*4*/] == 1) && Local_105[6 /*4*/] == 1) && Local_105[7 /*4*/] == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
		if (func_430("H1_HNG"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (func_430("H1_HNG_KM"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		MISC::SET_BIT(iParam0, 26);
	}
	else if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (!func_430("H1_HNG_KM"))
		{
			func_909("H1_HNG_KM");
		}
	}
	else if (!func_430("H1_HNG"))
	{
		func_909("H1_HNG");
	}
	switch (iParam0->f_23)
	{
		case 0:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("hackingNG", false);
			MISC::CLEAR_BIT(iParam0, 22);
			func_905();
			iLocal_143 = MISC::GET_GAME_TIMER();
			Local_103 = 0;
			MISC::CLEAR_BIT(&iLocal_153, 0);
			MISC::CLEAR_BIT(&iLocal_153, 1);
			MISC::CLEAR_BIT(&iLocal_153, 2);
			MISC::CLEAR_BIT(&iLocal_153, 3);
			MISC::CLEAR_BIT(&iLocal_153, 4);
			MISC::CLEAR_BIT(&iLocal_153, 5);
			MISC::CLEAR_BIT(&iLocal_153, 6);
			MISC::CLEAR_BIT(&iLocal_153, 7);
			iParam0->f_23++;
			break;
		case 1:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				MISC::SET_BIT(iParam0, 22);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_CURSOR_VISIBILITY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iParam0->f_23++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_105[iVar0 /*4*/].f_2 < 1f)
					{
						Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 + ((Local_105[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
					}
					else
					{
						Local_105[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_105[iVar0 /*4*/].f_2 > 0f)
				{
					Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 - ((Local_105[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
				}
				else
				{
					Local_105[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_105[iVar0 /*4*/] == 0)
				{
					Local_86[iVar0 /*2*/].f_1 = func_903(0.744f, 0.4f, Local_105[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/] == 0)
				{
					if (Local_103 == iVar0)
					{
						if (!MISC::IS_BIT_SET(iLocal_153, iVar0))
						{
							iLocal_144[iVar0] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_144[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
							MISC::SET_BIT(&iLocal_153, iVar0);
						}
						else
						{
							if (Local_105[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_138 = (2f * (1f - Local_105[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_138 = (2f * Local_105[iVar0 /*4*/].f_2);
							}
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144[iVar0], "PinMovementY", fLocal_138);
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_153, iVar0))
				{
					AUDIO::STOP_SOUND(iLocal_144[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_144[iVar0]);
					MISC::CLEAR_BIT(&iLocal_153, iVar0);
					iLocal_144[iVar0] = -1;
				}
				iVar0++;
			}
			if (func_902(Local_103))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				if (func_911(&iLocal_143, 300))
				{
					if (func_901(Local_103))
					{
						Local_105[Local_103 /*4*/] = 1;
						Local_86[Local_103 /*2*/].f_1 = 0.572f;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						if (Local_103 != 7)
						{
							Local_103++;
						}
					}
					else
					{
						if (Local_103 != 0)
						{
							if (MISC::IS_BIT_SET(iLocal_153, Local_103))
							{
								AUDIO::STOP_SOUND(iLocal_144[Local_103]);
								AUDIO::RELEASE_SOUND_ID(iLocal_144[Local_103]);
								MISC::CLEAR_BIT(&iLocal_153, Local_103);
								iLocal_144[Local_103] = -1;
							}
							Local_105[(Local_103 - 1) /*4*/] = 0;
							Local_103 = (Local_103 - 1);
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							GRAPHICS::DRAW_RECT(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, false);
						}
						iLocal_143 = MISC::GET_GAME_TIMER();
						PAD::SET_PAD_SHAKE(0, 100, 100);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						Local_103.f_1 = 1;
					}
				}
				else
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, false);
					}
					iLocal_143 = MISC::GET_GAME_TIMER();
					PAD::SET_PAD_SHAKE(0, 100, 100);
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (Local_103 == 0)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 1)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 2)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 3)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 4)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 5)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 6)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (Local_103 == 7)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, false);
				}
				if (MISC::IS_BIT_SET(iParam0->f_1, 0))
				{
					if (!MISC::IS_BIT_SET(iParam0->f_1, 1))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							MISC::SET_BIT(&(iParam0->f_1), 1);
							HUD::CLEAR_HELP(true);
						}
					}
				}
			}
			break;
	}
}

int func_901(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 >= fLocal_140 && Local_86[iParam0 /*2*/].f_1 <= fLocal_139)
	{
		return 1;
	}
	return 0;
}

int func_902(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_903(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = ((1f - SYSTEM::COS(func_904((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_904(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_905()
{
	fLocal_139 = 0.6f;
	fLocal_140 = 0.53f;
	Local_105[0 /*4*/].f_1 = (0.02f * fLocal_141);
	Local_105[1 /*4*/].f_1 = (0.025f * fLocal_141);
	Local_105[2 /*4*/].f_1 = (0.03f * fLocal_141);
	Local_105[3 /*4*/].f_1 = (0.035f * fLocal_141);
	Local_105[4 /*4*/].f_1 = (0.04f * fLocal_141);
	Local_105[5 /*4*/].f_1 = (0.045f * fLocal_141);
	Local_105[6 /*4*/].f_1 = (0.048f * fLocal_141);
	Local_105[7 /*4*/].f_1 = (0.05f * fLocal_141);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
	Local_84 = 0.5f;
	Local_84.f_1 = 0.5f;
	Local_86[0 /*2*/] = 0.35f;
	Local_86[0 /*2*/].f_1 = 0.4f;
	Local_86[1 /*2*/] = 0.39f;
	Local_86[1 /*2*/].f_1 = 0.4f;
	Local_86[2 /*2*/] = 0.43f;
	Local_86[2 /*2*/].f_1 = 0.4f;
	Local_86[3 /*2*/] = 0.47f;
	Local_86[3 /*2*/].f_1 = 0.4f;
	Local_86[4 /*2*/] = 0.51f;
	Local_86[4 /*2*/].f_1 = 0.74f;
	Local_86[5 /*2*/] = 0.55f;
	Local_86[5 /*2*/].f_1 = 0.74f;
	Local_86[6 /*2*/] = 0.59f;
	Local_86[6 /*2*/].f_1 = 0.74f;
	Local_86[7 /*2*/] = 0.63f;
	Local_86[7 /*2*/].f_1 = 0.74f;
}

void func_906(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_907(int* iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_908(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_82 = MISC::GET_GAME_TIMER();
		iLocal_83 = 1;
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_83 = 0;
	}
}

void func_909(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_910(int* iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 29))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
		if (GRAPHICS::GET_IS_WIDESCREEN())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_LABELS");
		func_277("H_ICON_1");
		if (iParam1 == 0)
		{
			func_277("H_ICON_2a");
		}
		else
		{
			func_277("H_ICON_2");
		}
		func_277("H_ICON_3");
		func_277("H_ICON_4");
		func_277("H_ICON_5");
		func_277("H_ICON_6");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_911(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_912(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = ((iParam0 % 3600000) / 60000);
	*iParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*iParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_913()
{
	if (iLocal_80 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
		}
	}
}

void func_914(int* iParam0)
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	HUD::CLEAR_HELP(true);
	UNK_0xDDEDC06C88DA4E04(PLAYER::PLAYER_ID(), true, false);
	CAM::DESTROY_CAM(iLocal_77, false);
	func_888(0);
	func_887();
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x9B079E5221D984D3(false);
	func_886(iParam0, 1, 0, 0);
	func_885(0, 1, 1, 0);
}

void func_915(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_916(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*iParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*iParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*iParam2) == 0f && IntToFloat(*iParam3) == 0f)
		{
			*iParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*iParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_917(int iParam0)
{
	if (func_893())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_894(0))
		{
			func_889(iParam0);
		}
		MISC::SET_BIT(&Global_7552, 2);
	}
}

void func_918(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1377236.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377236.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_919(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_920(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
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
	bool bVar28;

	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_928())
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
		bVar0 = iParam2;
		UNK_0xDDEDC06C88DA4E04(bParam0, bParam1, bVar0);
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
		if (!func_392())
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && (PLAYER::IS_PLAYER_PLAYING(bParam0) || bParam3 == 1))
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_147(PLAYER::PLAYER_ID(), 0) && !func_93()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2425869[bParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_925(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_924(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_923();
					func_922();
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
				Global_2425869[bParam0 /*443*/].f_249 = 0;
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
				if (!func_924(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_921(Global_4456448.f_129348))
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
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, true);
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
			bVar28 = false;
			if (bVar2)
			{
				bVar28 = (bVar28 || 2);
			}
			if (bVar3)
			{
				bVar28 = (bVar28 || 4);
			}
			if (bVar4)
			{
				bVar28 = (bVar28 || 8);
			}
			if (bVar5)
			{
				bVar28 = (bVar28 || 16);
			}
			if (bVar6)
			{
				bVar28 = (bVar28 || 32);
			}
			if (bVar7)
			{
				bVar28 = (bVar28 || 64);
			}
			if (bVar8)
			{
				bVar28 = (bVar28 || 128);
			}
			if (bVar9)
			{
				bVar28 = (bVar28 || 256);
			}
			if (bVar10)
			{
				bVar28 = (bVar28 || 512);
			}
			if (bVar11)
			{
				bVar28 = (bVar28 || 1024);
			}
			if (bVar12)
			{
				bVar28 = (bVar28 || 2048);
			}
			if (bVar13)
			{
				bVar28 = (bVar28 || 4096);
			}
			UNK_0xDDEDC06C88DA4E04(bParam0, bParam1, bVar28);
		}
	}
}

bool func_921(int iParam0)
{
	return iParam0 == 17;
}

void func_922()
{
	vector3 vVar0;

	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { vVar0 };
}

void func_923()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_924(int iParam0)
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

void func_925(bool bParam0, int iParam1, int iParam2)
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
				func_927();
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
		if (func_147(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_926(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_926(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_927()
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

int func_928()
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_929(bool bParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_79) && (!bParam0 || (((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_930(bool bParam0)
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", false);
	}
	iLocal_79 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_INTERACTIVE("Hacking_PC");
}

void func_931(int* iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	HUD::CLEAR_HELP(true);
	UNK_0xDDEDC06C88DA4E04(PLAYER::PLAYER_ID(), true, false);
	CAM::DESTROY_CAM(iLocal_77, false);
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::CLEAR_BIT(iParam0, 12);
	func_888(0);
	func_887();
	GRAPHICS::_0x9B079E5221D984D3(false);
}

void func_932(int* iParam0)
{
	func_886(iParam0, 1, 1, 0);
	*iParam0 = 0;
	iParam0->f_23 = 0;
	Local_103 = 0;
	Local_103.f_1 = 0;
	MISC::CLEAR_BIT(iParam0, 26);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
}

void func_933(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
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
}

void func_934()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_BIT_SET(Local_444, 0))
	{
		return;
	}
	if (!func_462())
	{
		if (func_430("GB_SGHT_HLP1"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_430("GB_SGHT_HLP2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_416())
		{
			sVar0 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
			iVar1 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
			if (func_298(PLAYER::PLAYER_ID(), 1))
			{
				if (func_943("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_943("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (func_430("GB_SGHT_RVL"))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	iVar2 = func_407(PLAYER::PLAYER_ID());
	if (iVar2 < 2)
	{
		if (func_430("GB_SGHT_HLP1"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_430("GB_SGHT_HLP2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_416())
		{
			sVar0 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
			iVar1 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
			if (func_298(PLAYER::PLAYER_ID(), 1))
			{
				if (func_943("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_943("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (func_430("GB_SGHT_RVL"))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_431, 2))
	{
		if (!func_942(86))
		{
			if (iLocal_738 == -1)
			{
				if (func_936(0, 1, 1, 1))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
					{
						func_438("GB_SGHT_HLP1", -1);
						func_437(1);
						MISC::SET_BIT(&iLocal_431, 2);
					}
					else if (func_1041() == Local_178.f_33)
					{
						func_438("GB_SGHT_HLP2", -1);
						func_437(1);
						MISC::SET_BIT(&iLocal_431, 2);
					}
					else if (func_416())
					{
						sVar0 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
						iVar1 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
						if (func_298(PLAYER::PLAYER_ID(), 1))
						{
							func_935("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_437(1);
						}
						else
						{
							func_935("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_437(1);
						}
						MISC::SET_BIT(&iLocal_431, 2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_431, 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_431, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_431, 7))
		{
			if (iLocal_738 == -1)
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
				{
					if (func_936(0, 1, 1, 1))
					{
						func_438("GB_SGHT_APPH", -1);
						func_437(1);
						MISC::SET_BIT(&iLocal_431, 7);
					}
				}
				else
				{
					MISC::SET_BIT(&iLocal_431, 7);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_431, 7);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_431, 8))
	{
		if (func_1040())
		{
			if (func_1024())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
				{
					if (func_936(0, 1, 1, 1))
					{
						func_438("GB_SGHT_PKGH", -1);
						func_437(1);
						MISC::SET_BIT(&iLocal_431, 8);
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_431, 12))
	{
		if (func_1040())
		{
			if (Local_178.f_5 > 0 || MISC::IS_BIT_SET(Local_178.f_1, 6))
			{
				if (func_936(0, 1, 1, 1))
				{
					func_438("GB_SGHT_RVL", -1);
					func_437(1);
					MISC::SET_BIT(&iLocal_431, 12);
				}
			}
		}
	}
}

void func_935(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam5);
}

int func_936(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_941())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	if (func_509())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_47(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_940(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_939())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_938())
	{
		return 0;
	}
	if (func_937())
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550454)
	{
		return 0;
	}
	if (func_222(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_937()
{
	return Global_2451787.f_689;
}

bool func_938()
{
	return Global_2451787.f_842;
}

bool func_939()
{
	return Global_2440049.f_3158.f_578;
}

int func_940(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

int func_941()
{
	if (Global_21005 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_942(int iParam0)
{
	return Global_2440049.f_2834[0 /*80*/].f_1 == iParam0;
}

bool func_943(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_944()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_BIT_SET(Local_444, 0))
	{
		return;
	}
	if (!func_462())
	{
		if (MISC::IS_BIT_SET(iLocal_431, 5))
		{
			if (Local_178.f_34 != -1)
			{
				iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
				if (iVar0 > -1)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34)))
					{
						iVar1 = func_300(iVar0);
						iVar2 = func_880(iVar1);
						func_453(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 432, 0, 0);
						func_452(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), iVar2, 0, 0);
						func_451(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0, 0, 0);
						func_450(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0);
						func_447(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), Global_262145.f_12363, 0, 0);
						MISC::CLEAR_BIT(&iLocal_431, 5);
					}
					else
					{
						MISC::CLEAR_BIT(&iLocal_431, 5);
					}
				}
			}
			func_455();
		}
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_178.f_3))
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
		{
			if (!MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
			{
				if (!MISC::IS_BIT_SET(Local_444, 0))
				{
					if (Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 < 3)
					{
						if (func_407(PLAYER::PLAYER_ID()) == 3)
						{
							if (!func_954("GB_SGHT_HCK"))
							{
								func_951("GB_SGHT_HCK", 0);
							}
						}
						else if (func_954("GB_SGHT_HCK"))
						{
							func_455();
						}
					}
					else
					{
						func_455();
					}
				}
			}
		}
		else if (func_1041() == Local_178.f_33)
		{
			if (Local_178.f_34 != -1)
			{
				if (func_407(PLAYER::PLAYER_ID()) == 3)
				{
					if (!func_954("GB_SGHT_PROT"))
					{
						iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_300(iVar0);
							func_945("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_954("GB_SGHT_PROT"))
				{
					func_455();
				}
			}
		}
		else if (func_416())
		{
			if (Local_178.f_34 != -1)
			{
				if (func_407(PLAYER::PLAYER_ID()) == 3)
				{
					if (Local_178.f_34 != -1)
					{
						iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_300(iVar0);
							if (func_298(PLAYER::PLAYER_ID(), 1))
							{
								if (!func_954("GB_SGHT_STOP"))
								{
									func_945("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_954("GB_SGHT_STOP"))
							{
								func_945("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_954("GB_SGHT_STOP"))
					{
						func_455();
					}
					if (func_954("GB_SGHT_STOP2"))
					{
						func_455();
					}
				}
				if (func_407(PLAYER::PLAYER_ID()) >= 2)
				{
					if (!MISC::IS_BIT_SET(iLocal_431, 5))
					{
						if (Local_178.f_34 != -1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34)))
							{
								if (func_1152(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 1, 1))
								{
									iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_300(iVar0);
										iVar2 = func_880(iVar1);
										func_453(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 432, 1, 0);
										func_452(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), iVar2, 1, 0);
										func_451(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 1, 1, 0);
										func_450(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 1);
										func_447(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), Global_262145.f_12363, 1, 0);
										MISC::SET_BIT(&iLocal_431, 5);
									}
								}
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_431, 5))
				{
					if (Local_178.f_34 != -1)
					{
						iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_300(iVar0);
							iVar2 = func_880(iVar1);
							func_453(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 432, 0, 0);
							func_452(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), iVar2, 0, 0);
							func_451(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0, 0, 0);
							func_450(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0);
							func_447(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), Global_262145.f_12363, 0, 0);
							MISC::CLEAR_BIT(&iLocal_431, 5);
						}
					}
				}
			}
		}
	}
	else if (func_407(PLAYER::PLAYER_ID()) == 3)
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
		{
			if (!MISC::IS_BIT_SET(Local_444, 0))
			{
				if (!func_954("GB_SGHT_RETP"))
				{
					func_951("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_1041() == Local_178.f_33)
		{
			if (Local_178.f_34 != -1)
			{
				if (!func_954("GB_SGHT_PROT"))
				{
					iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_300(iVar0);
						func_945("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_416())
		{
			if (Local_178.f_34 != -1)
			{
				iVar0 = func_302(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_300(iVar0);
					if (func_298(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_954("GB_SGHT_STOP"))
						{
							func_945("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_954("GB_SGHT_STOP"))
					{
						func_945("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_954("GB_SGHT_PROT"))
		{
			func_455();
		}
		if (func_954("GB_SGHT_RETP"))
		{
			func_455();
		}
		if (func_954("GB_SGHT_STOP"))
		{
			func_455();
		}
		if (func_954("GB_SGHT_STOP2"))
		{
			func_455();
		}
	}
}

void func_945(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_946(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312603 = 15;
		Global_1312603.f_56 = iParam3;
		Global_1312603.f_57 = iParam4;
		Global_1312603.f_54 = iParam1;
	}
}

int func_946(char* sParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (func_950(sParam0, sParam1, sParam2) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_456();
	Global_1312603 = 10;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	StringCopy(&(Global_1312603.f_32), sParam2, 64);
	Global_1312603.f_58 = iParam4;
	Global_1312603.f_56 = iParam4;
	func_949();
	func_948(bParam3);
	func_947();
	return 1;
}

void func_947()
{
	MISC::SET_BIT(&(Global_1312603.f_59), 1);
}

void func_948(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312603.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312603.f_59), 0);
}

void func_949()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_950(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_461())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12)))
	{
		return false;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312603.f_16)))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1312603.f_32));
}

void func_951(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_952(sParam0))
	{
		return;
	}
	func_456();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_949();
	func_948(bParam1);
	func_947();
}

bool func_952(char* sParam0)
{
	if (!func_461())
	{
		return false;
	}
	if (Global_1312603 == 11)
	{
		return func_953(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
}

bool func_953(char* sParam0)
{
	if (!func_461())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

int func_954(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_461())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_952(sParam0);
}

void func_955()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	if (!func_1040() && !func_416())
	{
		return;
	}
	if (!func_462())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_431, 1))
	{
		iVar0 = func_407(PLAYER::PLAYER_ID());
		if (iVar0 >= 2)
		{
			if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33 || func_1041() == Local_178.f_33)
			{
				if (func_997(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_550(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2, 1, 0);
					OBJECT::_0x78857FC65CADB909(true);
					OBJECT::_0x616093EC6B139DD9(PLAYER::PLAYER_ID(), joaat("PICKUP_PORTABLE_PACKAGE"), true);
					func_996(1);
					func_956(-1, 0, 0, -1, 0, 0);
				}
			}
			else if (func_298(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
				iVar2 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
				func_855(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, iVar2, 0, -1, -1, -1, 2, -1);
				func_956(-1, 0, 0, -1, 0, 0);
			}
			else
			{
				sVar1 = func_551(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
				iVar2 = func_857(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34));
				func_855(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, iVar2, 0, -1, -1, -1, 2, -1);
				func_956(-1, 0, 0, -1, 0, 0);
			}
		}
		MISC::SET_BIT(&iLocal_431, 1);
	}
}

void func_956(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (bParam5)
	{
		iVar0 = func_290(PLAYER::PLAYER_ID());
		Global_1676407 = iVar0;
		Global_1676407.f_1 = iParam0;
		if (func_548() != func_32())
		{
			Global_1676407.f_2 = func_755(func_548());
			Global_1676407.f_3 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676407.f_2), &(Global_1676407.f_3));
		}
		Global_1676407.f_7 = UNK_0x5A002C4821A13338();
		Global_1676407.f_28 = func_843(PLAYER::PLAYER_ID());
		Global_1676407.f_13 = 0;
		Global_1676407.f_14 = 0;
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676407.f_23 = func_846(func_362(1));
		}
	}
	else
	{
		iVar0 = func_232(PLAYER::PLAYER_ID());
	}
	if (bParam2 || func_435(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1676146 = iVar0;
		if (func_424(iVar0))
		{
			Global_1676146.f_1 = 4;
		}
		else if (func_491(iVar0))
		{
			Global_1676146.f_1 = 5;
		}
		else if (func_329(iVar0, 0))
		{
			Global_1676146.f_1 = 2;
			if (func_565(iVar0))
			{
				Global_1676146.f_1 = 3;
			}
		}
		else
		{
			Global_1676146.f_1 = 1;
		}
		if (func_548() != func_32())
		{
			Global_1676146.f_4 = func_755(func_548());
			Global_1676146.f_5 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676146.f_6), &(Global_1676146.f_7));
		}
		Global_1676146.f_9 = UNK_0x5A002C4821A13338();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1676146.f_27 = 1;
			Global_1676146.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1676146.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1676146.f_40 = func_596(iParam1);
			Global_1676146.f_41 = func_995();
			Global_1676146.f_42 = func_708(PLAYER::PLAYER_ID(), iParam1);
			Global_1676146.f_44 = func_836(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_1024() || iVar0 != 192)
		{
			Global_1676146.f_53 = 0;
		}
	}
	else if (func_489(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1676263 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1676263 = iParam0 + 1;
		}
		else
		{
			Global_1676263 = func_994(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_562(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1676263.f_1 = 0;
				}
				else
				{
					Global_1676263.f_1 = 1;
				}
				break;
			case 226:
				Global_1676263.f_1 = 2;
				break;
			case 227:
				Global_1676263.f_1 = 3;
				break;
		}
		Global_1676263.f_21 = 1;
		Global_1676263.f_22 = 1;
		if (func_548() != func_32())
		{
			Global_1676263.f_4 = func_755(func_548());
			Global_1676263.f_5 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676263.f_4), &(Global_1676263.f_5));
		}
		Global_1676263.f_8 = UNK_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676263.f_20 = iParam0;
		}
	}
	else if (func_440(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1676200 = iVar0;
		Global_1676146.f_1 = 1;
		if (func_548() != func_32())
		{
			Global_1676200.f_4 = func_755(func_548());
			Global_1676200.f_5 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676200.f_6), &(Global_1676200.f_7));
		}
		Global_1676200.f_9 = UNK_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676200.f_21 = iParam0;
		}
	}
	else if (func_487(iVar0))
	{
		Global_1676307 = iVar0;
		Global_1676307.f_1 = iParam0;
		Global_1676307.f_21 = 1;
		Global_1676307.f_22 = 1;
		if (func_548() != func_32())
		{
			Global_1676307.f_4 = func_755(func_548());
			Global_1676307.f_5 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676307.f_4), &(Global_1676307.f_5));
		}
		Global_1676307.f_8 = UNK_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676307.f_20 = iParam0;
		}
		Global_1676307.f_27 = func_829(func_149(), 5);
		Global_1676307.f_28 = func_846(func_993(PLAYER::PLAYER_ID()));
		Global_1676307.f_29 = func_570(6108, -1, 0);
		Global_1676307.f_30 = func_570(6104, -1, 0);
		Global_1676307.f_31 = func_570(6105, -1, 0);
		Global_1676307.f_32 = func_570(6107, -1, 0);
		Global_1676307.f_33 = func_570(6106, -1, 0);
		Global_1676307.f_34 = func_570(6109, -1, 0);
		Global_1676307.f_7 = func_845();
		Global_1676307.f_51 = func_846(bParam4);
	}
	else if (func_485(iVar0))
	{
		Global_1676361 = iVar0;
		Global_1676361.f_1 = iParam0;
		Global_1676361.f_21 = 1;
		Global_1676361.f_22 = 1;
		if (func_548() != func_32())
		{
			Global_1676361.f_4 = func_755(func_548());
			Global_1676361.f_5 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676361.f_4), &(Global_1676361.f_5));
		}
		Global_1676361.f_8 = UNK_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676361.f_20 = iParam0;
		}
		Global_1676361.f_24 = func_570(6158, -1, 0);
		Global_1676361.f_25 = func_570(6163, -1, 0);
		Global_1676361.f_26 = func_570(6164, -1, 0);
		Global_1676361.f_27 = func_846((((func_794() || func_793()) || func_792()) || func_791(PLAYER::PLAYER_ID())));
		Global_1676361.f_28 = func_570(6165, -1, 0);
		Global_1676361.f_29 = func_846(func_790());
		Global_1676361.f_31 = 0;
		Global_1676361.f_30 = 0;
		Global_1676361.f_32 = 0;
		Global_1676361.f_33 = 0;
		Global_1676361.f_34 = 0;
		Global_1676361.f_16 = 0;
		Global_1676361.f_7 = func_845();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_560(func_561(PLAYER::PLAYER_ID()))))
	{
		Global_1676497 = iVar0;
		Global_1676497.f_1 = iParam0;
		Global_1676497.f_21 = 1;
		Global_1676497.f_22 = 1;
		Global_1676497.f_7 = func_845();
		if (func_548() != func_32())
		{
			Global_1676497.f_4 = func_755(func_548());
			Global_1676497.f_5 = func_754(func_548());
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676497.f_4), &(Global_1676497.f_5));
		}
		if (func_548() != -1)
		{
			Global_1676497.f_17 = func_787(func_548());
		}
		Global_1676497.f_8 = UNK_0x5A002C4821A13338();
		Global_1676497.f_28 = func_843(PLAYER::PLAYER_ID());
		Global_1676497.f_16 = 0;
		Global_1676497.f_24 = 0;
		Global_1676497.f_23 = 0;
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676497.f_33 = func_846(func_362(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1676443 = iVar0;
		Global_1676443.f_1 = iParam0;
		Global_1676443.f_21 = 1;
		Global_1676443.f_22 = 1;
		Global_1676443.f_7 = func_845();
		Global_1676443.f_24 = 0;
		Global_1676443.f_23 = 0;
		Global_1676443.f_16 = 0;
		if (func_548() != func_32())
		{
			Global_1676443.f_4 = func_755(func_548());
			Global_1676443.f_5 = func_754(func_548());
		}
		Global_1676443.f_28 = func_843(PLAYER::PLAYER_ID());
		if (Global_1676443.f_28)
		{
			Global_1676443.f_29 = func_781(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1676443.f_29 = 0;
		}
		Global_1676443.f_30 = func_765(PLAYER::PLAYER_ID(), 4, -1);
		Global_1676443.f_31 = func_784(PLAYER::PLAYER_ID());
		Global_1676443.f_32 = func_846(func_764(PLAYER::PLAYER_ID()));
		Global_1676443.f_33 = func_846(func_763(PLAYER::PLAYER_ID()));
		Global_1676443.f_34 = func_846(func_762(PLAYER::PLAYER_ID()));
		Global_1676443.f_35 = func_846(func_761(PLAYER::PLAYER_ID()));
		Global_1676443.f_36 = func_760(PLAYER::PLAYER_ID());
		Global_1676443.f_37 = func_759(PLAYER::PLAYER_ID());
		Global_1676443.f_39 = func_758(PLAYER::PLAYER_ID());
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676443.f_41 = func_846(func_362(1));
		}
		if (func_365() != func_32())
		{
			func_600(func_365(), &(Global_1676443.f_4), &(Global_1676443.f_5));
		}
		Global_1676443.f_8 = UNK_0x5A002C4821A13338();
		Global_1676443.f_28 = func_843(PLAYER::PLAYER_ID());
	}
	else if (func_558(iVar0))
	{
		Global_1676581 = iVar0;
		Global_1676581.f_1 = func_562(PLAYER::PLAYER_ID());
		Global_1676581.f_2 = func_854();
		Global_1676581.f_3 = func_853();
		Global_1676581.f_4 = func_755(func_548());
		Global_1676581.f_5 = func_754(func_548());
		Global_1676581.f_7 = func_845();
		Global_1676581.f_8 = UNK_0x5A002C4821A13338();
		if (func_548() != -1)
		{
			Global_1676581.f_17 = func_787(func_548());
		}
		Global_1676581.f_21 = 1;
		Global_1676581.f_22 = 1;
		Global_1676581.f_25 = iParam0;
		Global_1676581.f_27 = func_846(func_752(PLAYER::PLAYER_ID()));
		Global_1676581.f_28 = func_748(21, -1);
	}
	else if (func_479(iVar0))
	{
		Global_1676656 = Global_786547.f_1;
		Global_1676656.f_2 = Global_786547;
		Global_1676656.f_6 = func_755(func_548());
		Global_1676656.f_7 = func_754(func_548());
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676656.f_8 = func_846(func_362(1));
		}
		if (func_548() != -1)
		{
			Global_1676656.f_9 = func_787(func_548());
		}
		Global_1676656.f_10 = func_845();
		Global_1676656.f_19 = 1;
		Global_1676656.f_20 = 1;
		Global_1676656.f_21 = 0;
		Global_1676656.f_22 = 0;
		Global_1676656.f_23 = 0;
		Global_1703843 = UNK_0x5A002C4821A13338();
	}
	else if (func_478(iVar0))
	{
		Global_1676743 = Global_786547.f_1;
		Global_1676743.f_3 = Global_786547;
		Global_1676743.f_6 = func_755(func_548());
		Global_1676743.f_7 = func_754(func_548());
		if (func_298(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676743.f_8 = func_846(func_362(1));
		}
		if (func_548() != -1)
		{
			Global_1676743.f_9 = func_787(func_548());
		}
		Global_1676743.f_10 = func_845();
		Global_1676743.f_19 = 1;
		Global_1676743.f_20 = 1;
		Global_1676743.f_21 = 0;
		Global_1676743.f_22 = 0;
		Global_1676743.f_23 = 0;
		Global_1676743.f_26 = func_976(1);
		Global_1676743.f_34 = func_976(0);
		Global_1676743.f_15 = !func_331(PLAYER::PLAYER_ID(), func_365(), 1);
	}
	else if (func_740(iVar0))
	{
		Global_1676855 = iParam0;
		Global_1676855.f_1 = iVar0;
		Global_1676855.f_3 = func_755(func_548());
		Global_1676855.f_4 = func_754(func_548());
		Global_1676855.f_5 = func_846(func_362(1));
		Global_1676855.f_6 = func_845();
		Global_1676855.f_7 = func_787(func_548());
		Global_1676855.f_8 = 0;
	}
	else
	{
		if (func_548() != func_32())
		{
			Global_1676128 = func_755(func_548());
			Global_1676128.f_1 = func_754(func_548());
		}
		Global_1676128.f_5 = UNK_0x5A002C4821A13338();
		Global_1676128.f_13 = func_975();
		Global_1676128.f_15 = 0;
		if (func_549(1))
		{
			if (func_365() == func_548())
			{
				Global_1676128.f_15 = 1;
			}
		}
		if (func_974())
		{
			Global_1676263.f_28 = 1;
		}
		if (((((func_973() || func_972()) || func_971()) || func_970()) || func_969()) || func_968(PLAYER::PLAYER_ID()))
		{
			Global_1676263.f_30 = 1;
		}
		if (func_966(func_967(joaat("TRAILERSMALL2"))))
		{
			Global_1676263.f_32 = 1;
		}
		if (func_960(func_965(joaat("CADDY"))))
		{
			Global_1676263.f_31 = 1;
		}
		if (func_828(PLAYER::PLAYER_ID()) || func_827(PLAYER::PLAYER_ID()))
		{
			Global_1676263.f_29 = 1;
		}
		if (func_824(PLAYER::PLAYER_ID()))
		{
			Global_1676263.f_33 = 1;
			Global_1676263.f_34 = 1;
		}
		if (func_825(PLAYER::PLAYER_ID()))
		{
			Global_1676263.f_36 = 1;
		}
		if (func_822(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1676263.f_35 = 1;
		}
		if (func_959(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1676263.f_37 = 1;
		}
		if (func_959(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1676263.f_38 = 1;
		}
		if (func_958(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_957(PLAYER::PLAYER_ID(), iVar2);
				if (func_705(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1676263.f_39 = 1;
				}
				if (func_705(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1676263.f_40 = 1;
				}
				if (func_705(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1676263.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_957(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_697(Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

int func_958(int iParam0)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_959(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (iParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_822(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_960(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_748(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_808(11));
		func_807(iVar1, &iVar0, 1);
		iVar2 = func_748(func_962(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_570(func_961(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_961(int iParam0, int iParam1)
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
			break;
		case 5:
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
			break;
		case 6:
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
			Jump @25974; //curOff = 22235
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

int func_962(int iParam0)
{
	int iVar0;

	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_808(iVar0) && iParam0 < func_963(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_963(int iParam0)
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
		iVar0 = func_751(iParam0);
		return func_964(iVar0);
	}
	return (func_809(iParam0, -1, 1) * iParam0 + 1);
}

int func_964(int iParam0)
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

int func_965(int iParam0)
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

int func_966(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_807(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_570(func_961(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_967(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
	}
	return -1;
}

int func_968(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (Global_1590682[bParam0 /*883*/].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_969()
{
	return func_570(6543, -1, 0) != 0;
}

bool func_970()
{
	return func_570(6164, -1, 0) != 0;
}

bool func_971()
{
	return func_570(5381, -1, 0) != 0;
}

bool func_972()
{
	return func_570(3829, -1, 0) != 0;
}

bool func_973()
{
	return func_570(3224, -1, 0) != 0;
}

bool func_974()
{
	return func_570(5380, -1, 0) != 0;
}

int func_975()
{
	int iVar0;

	iVar0 = func_548();
	if (iVar0 != func_32())
	{
		return Global_1630317[iVar0 /*595*/].f_11.f_98;
	}
	return 0;
}

var func_976(bool bParam0)
{
	var uVar0;
	bool bVar1;

	bVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_990(bVar1, 4, 0))
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if (func_990(bVar1, 5, 0))
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if (func_990(bVar1, 6, 1))
		{
			MISC::SET_BIT(&uVar0, 2);
		}
		if (func_990(bVar1, 1, 0))
		{
			MISC::SET_BIT(&uVar0, 3);
		}
		if (func_990(bVar1, 2, 0))
		{
			MISC::SET_BIT(&uVar0, 4);
		}
		if (func_990(bVar1, 3, 0))
		{
			MISC::SET_BIT(&uVar0, 5);
		}
		if ((((func_989(bVar1, 61) || func_989(bVar1, 62)) || func_989(bVar1, 63)) || func_989(bVar1, 64)) || func_989(bVar1, 65))
		{
			MISC::SET_BIT(&uVar0, 6);
		}
		if (func_732(bVar1))
		{
			MISC::SET_BIT(&uVar0, 7);
		}
		if (func_987(bVar1, 0))
		{
			MISC::SET_BIT(&uVar0, 8);
		}
		if (func_987(bVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 9);
		}
		if (func_987(bVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 10);
		}
		if (func_572(bVar1))
		{
			MISC::SET_BIT(&uVar0, 11);
		}
		if (func_983(bVar1, 3))
		{
			MISC::SET_BIT(&uVar0, 12);
		}
		if (func_983(bVar1, 4))
		{
			MISC::SET_BIT(&uVar0, 13);
		}
		if (func_983(bVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 14);
		}
		if (func_983(bVar1, 6))
		{
			MISC::SET_BIT(&uVar0, 15);
		}
		if (func_983(bVar1, 5))
		{
			MISC::SET_BIT(&uVar0, 16);
		}
		if (func_981(bVar1))
		{
			MISC::SET_BIT(&uVar0, 17);
		}
		if (func_983(bVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 18);
		}
		if (func_993(bVar1))
		{
			MISC::SET_BIT(&uVar0, 19);
		}
		if (func_791(bVar1))
		{
			MISC::SET_BIT(&uVar0, 20);
		}
		if (func_968(bVar1))
		{
			MISC::SET_BIT(&uVar0, 21);
		}
		if (func_843(bVar1))
		{
			MISC::SET_BIT(&uVar0, 22);
		}
		if (func_752(bVar1))
		{
			MISC::SET_BIT(&uVar0, 23);
		}
		if (func_980(bVar1))
		{
			MISC::SET_BIT(&uVar0, 24);
		}
		if (func_979(bVar1))
		{
			MISC::SET_BIT(&uVar0, 25);
		}
		if (func_825(bVar1))
		{
			MISC::SET_BIT(&uVar0, 26);
		}
		if (func_978(bVar1))
		{
			MISC::SET_BIT(&uVar0, 27);
		}
		if (func_784(bVar1))
		{
			MISC::SET_BIT(&uVar0, 28);
		}
		if (func_977(bVar1))
		{
			MISC::SET_BIT(&uVar0, 29);
		}
	}
	return uVar0;
}

bool func_977(bool bParam0)
{
	if (bParam0 == func_32())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_443, 0);
}

int func_978(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590682[bParam0 /*883*/].f_274.f_270, 1);
	}
	return 0;
}

bool func_979(bool bParam0)
{
	return Global_2425869[bParam0 /*443*/].f_265;
}

int func_980(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1590682[bParam0 /*883*/].f_274.f_393 != 0;
	}
	return 0;
}

bool func_981(bool bParam0)
{
	return func_982(bParam0) != 0;
}

int func_982(int iParam0)
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_134;
}

int func_983(bool bParam0, int iParam1)
{
	if (bParam0 == func_32())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_986(bParam0);
		case 2:
			return func_985(bParam0, 4);
		case 3:
			return func_985(bParam0, 3);
		case 4:
			return func_985(bParam0, 1);
		case 5:
			return func_985(bParam0, 0);
		case 6:
			return func_985(bParam0, 2);
		case 0:
			if (func_993(bParam0) || func_984(bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_984(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[bParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_985(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/];
			if (func_596(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_986(int iParam0)
{
	return func_583(iParam0) != 0;
}

int func_987(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590682[bParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			if (func_988(Global_1590682[bParam0 /*883*/].f_274.f_106[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_988(int iParam0)
{
	if (func_721(iParam0))
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

int func_989(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 != func_32() && func_1152(bParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (Global_1590682[bParam0 /*883*/].f_274[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_990(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 < 1 || iParam1 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		if (func_992(iVar0) == iParam1 && (!func_991(iVar0) || !bParam2))
		{
			if (func_989(bParam0, iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_991(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_992(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
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
			return 10;
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
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
			return 7;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
			return 6;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
	}
	return 0;
}

int func_993(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return Global_1590682[bParam0 /*883*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_994(bool bParam0)
{
	if (func_232(bParam0) == 225 || func_232(bParam0) == 226)
	{
		return func_562(bParam0);
	}
	return -1;
}

var func_995()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_707(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_996(bool bParam0)
{
	if (bParam0)
	{
		if (!func_202(PLAYER::PLAYER_ID(), 9))
		{
			if (func_407(PLAYER::PLAYER_ID()) != 0)
			{
				func_235(9);
			}
		}
	}
	else if (func_202(PLAYER::PLAYER_ID(), 9))
	{
		func_234(9);
	}
}

int func_997(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_999(bParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_998(bParam0) };
			Global_8238 = bParam0;
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_998(bool bParam0)
{
	return Global_1848[bParam0 /*29*/].f_3;
}

int func_999(bool bParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_1011();
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
	if (func_1010() == 0)
	{
		func_1008();
		return 0;
	}
	func_1007(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = bParam0;
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
		func_1006(0);
		func_1006(2);
		func_1006(1);
	}
	else
	{
		func_1011();
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
					func_1006(0);
					Global_8257 = 0;
					break;
				case 1:
					func_1006(1);
					Global_8257 = 1;
					break;
				case 2:
					func_1006(2);
					Global_8257 = 2;
					break;
				case 3:
					func_1006(3);
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
		func_1011();
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
			if (!func_508())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_1005(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_1002(1);
			func_1005(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_1000(bParam0, sParam1);
	return 1;
}

void func_1000(bool bParam0, char* sParam1)
{
	if (!func_1001())
	{
		return;
	}
	UNK_0x1A2DCF21E22955B0(bParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_1001()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_32())
	{
		return 0;
	}
	if (func_221(PLAYER::PLAYER_ID()))
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

void func_1002(int iParam0)
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
		if (func_1004(14))
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
								func_277(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_277(&(Global_7558[iVar1 /*15*/]));
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
								func_277(&(Global_7558[iVar1 /*15*/]));
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
								func_277(&(Global_7558[iVar1 /*15*/]));
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
								func_277(&(Global_7558[iVar1 /*15*/]));
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
								func_277(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_1003(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_1003(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(bParam7))
	{
		func_277(bParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(bParam8))
	{
		func_277(bParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(bParam9))
	{
		func_277(bParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(bParam10))
	{
		func_277(bParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(bParam11))
	{
		func_277(bParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_1004(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_1005(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_1006(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_1007(int iParam0)
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

void func_1008()
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
		if (!func_1009(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_1009(struct<6> Param0, struct<6> Param6)
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

int func_1010()
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
			if (!func_1009(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
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

void func_1011()
{
	if (func_1004(14))
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
		Global_19681 = func_1012();
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

var func_1012()
{
	func_1013();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_1013()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_1016(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_1015(PLAYER::PLAYER_PED_ID());
			if (func_1014(iVar0) && (!func_1004(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_1014(Global_111858.f_2359.f_539.f_4321))
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

bool func_1014(int iParam0)
{
	return iParam0 < 3;
}

int func_1015(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1016(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1016(int iParam0)
{
	if (func_1014(iParam0))
	{
		return func_1017(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_1017(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_1018()
{
	if (!MISC::IS_BIT_SET(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		if (!func_1040())
		{
			if (Local_178.f_5 > 0 || MISC::IS_BIT_SET(Local_178.f_1, 6))
			{
				func_237(1);
				MISC::SET_BIT(&(Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 1);
			}
		}
	}
}

int func_1019(bool bParam0)
{
	if (func_1023(1))
	{
		return 1;
	}
	if (Global_2540384.f_5188.f_41)
	{
		Global_2540384.f_5188.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_365() == func_32() || !func_1152(func_365(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_481(PLAYER::PLAYER_ID()))
	{
		if (func_1020())
		{
			return 1;
		}
	}
	return 0;
}

int func_1020()
{
	if (func_1022(PLAYER::PLAYER_ID()) && func_1021())
	{
		return 1;
	}
	if (func_464())
	{
		return 1;
	}
	return 0;
}

int func_1021()
{
	switch (func_31(func_469(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1022(bool bParam0)
{
	if (bParam0 != func_32() && func_1152(bParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425869[bParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_1023(bool bParam0)
{
	bool bVar0;

	if (!func_549(1))
	{
		bVar0 = false;
		if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 != func_32())
		{
			if (func_1152(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_24 == 4 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_24 == 8) || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_426(func_232(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_653(31);
				if (func_435(func_232(PLAYER::PLAYER_ID())))
				{
					func_653(81);
				}
				if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 != func_32() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57))
				{
					Global_1627096 = func_524(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_364(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57))
					{
						func_653(88);
					}
				}
				else
				{
					Global_1627096 = 1;
				}
				Global_1627080 = { Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_1024()
{
	return func_251(PLAYER::PLAYER_ID());
}

void func_1025(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 != iParam0)
	{
		func_1039(-1);
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 = iParam0;
		if (func_1038() != -1)
		{
			func_1037(-1);
		}
		if (func_1036() != -1)
		{
			func_1035(-1);
		}
		func_1034(iParam2);
		func_1032(iParam0);
		if (!func_244(iParam0))
		{
			fVar0 = func_243(iParam0);
			if (fVar0 != 1f)
			{
				func_240(fVar0);
				MISC::SET_BIT(&(Global_1676119.f_3), 1);
			}
		}
		if (!func_247(iParam0) || bParam3)
		{
			if (func_245(iParam0, iParam2) && bParam3 == 1)
			{
				UNK_0x53797676AD34A9AA(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1676119.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				UNK_0x53797676AD34A9AA(5);
			}
		}
		if (func_415())
		{
			func_235(27);
		}
		if (bParam1)
		{
			if (!func_409())
			{
				func_237(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2540384.f_4619, 1) || MISC::IS_BIT_SET(Global_2540384.f_4619, 4)) || MISC::IS_BIT_SET(Global_2540384.f_4619, 0))
			{
				func_653(6);
			}
			func_1031();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_138(PLAYER::PLAYER_ID()) && func_252(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 8);
		}
		func_1027();
		if (func_1026(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1676119.f_3), 6);
		}
		Global_2540384.f_6650 = 0;
	}
}

int func_1026(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1027()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_1030();
	bVar2 = func_88(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (func_331(bVar1, bVar2, 1) || func_1028(bVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), bVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(bVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_1028(bool bParam0, bool bParam1)
{
	if (func_298(bParam0, 1) && func_298(bParam1, 1))
	{
		return (func_1029(bParam0) == func_88(bParam1) || func_1029(bParam1) == func_88(bParam0));
	}
	return 0;
}

int func_1029(bool bParam0)
{
	if (func_298(bParam0, 1))
	{
		return Global_1630317[func_88(bParam0) /*595*/].f_11.f_457;
	}
	return func_32();
}

int func_1030()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_548();
	if (bVar0 != func_32())
	{
		if (func_1152(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1630317[bVar1 /*595*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1031()
{
	if (MISC::IS_BIT_SET(Global_2540384.f_4619, 1))
	{
		MISC::CLEAR_BIT(&(Global_2540384.f_4619), 1);
	}
	if (MISC::IS_BIT_SET(Global_2540384.f_4619, 4))
	{
		MISC::CLEAR_BIT(&(Global_2540384.f_4619), 4);
	}
	if (MISC::IS_BIT_SET(Global_2540384.f_4619, 6))
	{
		MISC::CLEAR_BIT(&(Global_2540384.f_4619), 6);
	}
	MISC::CLEAR_BIT(&(Global_2540384.f_4619), 0);
	MISC::CLEAR_BIT(&(Global_2540384.f_4619), 2);
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_758 = 0;
	if (Global_2540384.f_4621 > 0)
	{
		UNK_0x53797676AD34A9AA(Global_2540384.f_4621);
	}
	Global_2540384.f_4620 = 0;
}

void func_1032(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_570(3792, -1, 0);
	iVar1 = func_1033(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_568(3792, iVar0, -1, 1, 0);
	}
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		case 166:
			return 1;
		case 171:
			return 2;
		case 172:
			return 3;
		case 173:
			return 4;
		case 214:
			return 5;
		case 215:
			return 6;
		case 216:
			return 7;
		case 217:
			return 8;
		case 218:
			return 9;
		case 219:
			return 10;
		case 220:
			return 11;
		case 221:
			return 12;
		default:
			break;
	}
	return -1;
}

void func_1034(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1630317[iVar0 /*595*/].f_11.f_181 != iParam0)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_181 = iParam0;
	}
}

void func_1035(int iParam0)
{
	if (Global_2540384.f_5188.f_341 != iParam0)
	{
		Global_2540384.f_5188.f_341 = iParam0;
	}
}

int func_1036()
{
	return Global_2540384.f_5188.f_341;
}

void func_1037(int iParam0)
{
	if (Global_2540384.f_5188.f_340 != iParam0)
	{
		Global_2540384.f_5188.f_340 = iParam0;
	}
}

int func_1038()
{
	return Global_2540384.f_5188.f_340;
}

void func_1039(int iParam0)
{
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_32 = iParam0;
}

int func_1040()
{
	int iVar0;

	iVar0 = func_1041();
	if (iVar0 > -1)
	{
		if (Local_178.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1041()
{
	int iVar0;

	if (Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 != -1)
	{
		return Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
		{
			func_996(1);
		}
	}
	else if (func_298(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_548();
		if (iVar0 != func_32())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
}

int func_1042()
{
	return Local_178;
}

int func_1043(int iParam0)
{
	return Local_238[iParam0 /*6*/];
}

int func_1044()
{
	var uVar0;

	func_1049(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1048())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_1047())
	{
		return 1;
	}
	if (func_1046(159))
	{
		if (!func_1045())
		{
			return 1;
		}
	}
	if (func_1046(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_241() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_241()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1045()
{
	return Global_2451787.f_696;
}

int func_1046(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1047()
{
	return Global_2462250;
}

bool func_1048()
{
	return Global_2451787.f_691;
}

void func_1049(var uParam0)
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
					func_1050(iVar0);
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

void func_1050(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1152(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1051(iVar4, &bVar5))
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

int func_1051(int iParam0, bool bParam1)
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

void func_1052()
{
	SYSTEM::WAIT(0);
}

void func_1053()
{
	if (!MISC::IS_BIT_SET(iLocal_431, 6))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1040() || func_416())
			{
				func_737(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
				MISC::SET_BIT(&iLocal_431, 6);
			}
		}
	}
	func_1098(3, 3, -1, -1082130432 /* Float: -1f */);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_178.f_33)
		{
			if (iLocal_738 >= 0)
			{
				func_932(&Local_444);
				func_931(&Local_444);
			}
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_437)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_439);
	}
	if (iLocal_738 > 0)
	{
		if (MISC::IS_BIT_SET(Local_178.f_1, 3))
		{
			func_920(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	func_1097();
	if (Local_178.f_34 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_431, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34)))
			{
				func_453(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 432, 0, 0);
				func_452(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 1, 0, 0);
				func_451(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0, 0, 0);
				func_450(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), 0);
				func_447(PLAYER::INT_TO_PLAYERINDEX(Local_178.f_34), Global_262145.f_12363, 0, 0);
			}
		}
	}
	if (func_207(0))
	{
		func_206(0);
	}
	if (MISC::IS_BIT_SET(iLocal_432, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_432, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP");
		}
	}
	MISC::SET_BIT(&iLocal_432, 8);
	func_203();
	OBJECT::_0x78857FC65CADB909(true);
	func_996(0);
	func_1055(1, 0);
	UNK_0x53797676AD34A9AA(5);
	MISC::CLEAR_BIT(&Global_4271024, 21);
	MISC::CLEAR_BIT(&Global_4271024, 20);
	func_1054();
}

void func_1054()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1055(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_1366969.f_1.f_108 != 0)
	{
		Global_1366969.f_1.f_108 = 0;
	}
	Global_1366969.f_1.f_109 = -1;
	Global_1366969.f_1.f_110 = -1;
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 167 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 168)
	{
		func_1095();
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 4);
	}
	if ((func_571() && iParam1 != 0) && Global_262145.f_16989)
	{
		if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 190 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 192)
		{
			func_1077(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 164 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 208) || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 250) || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 != -1)
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574656.f_1, 14) && !func_138(PLAYER::PLAYER_ID()))
		{
			func_237(0);
		}
	}
	else if (func_1075(PLAYER::PLAYER_ID()) != -1)
	{
		func_1039(-1);
	}
	func_1074(func_32());
	if (func_207(16))
	{
		func_206(16);
	}
	func_1071(0);
	func_1034(-1);
	func_1070();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1068(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(Global_1676119.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		UNK_0x53797676AD34A9AA(5);
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1676119.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 5);
	}
	iVar1 = func_442();
	if ((func_328(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_1067(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_424(iVar1))
	{
		func_1064(-1, 1);
	}
	else if (((((func_441(iVar1) || func_1063(iVar1)) || func_1062(iVar1)) || func_489(iVar1)) || func_487(iVar1)) || func_485(iVar1))
	{
	}
	else
	{
		func_1064(-1, 1);
	}
	func_234(19);
	func_234(20);
	func_234(21);
	func_234(22);
	func_234(27);
	func_206(3);
	func_206(4);
	func_206(7);
	func_1061();
	if (func_252(PLAYER::PLAYER_ID()))
	{
		func_996(0);
	}
	func_234(29);
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 = func_32();
	if (Global_2540384.f_5188.f_41 != 0)
	{
		Global_2540384.f_5188.f_41 = 0;
	}
	if (bParam0)
	{
		func_208();
	}
	if (!func_138(PLAYER::PLAYER_ID()))
	{
		func_233();
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1676119.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1676119.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1676119.f_3, 8))
	{
		func_1060("IMPEXP_SELFDES", 0);
		func_1058("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 8);
	}
	func_1056(iVar1, 0);
}

void func_1056(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1676119.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1057(iParam0));
			MISC::SET_BIT(&(Global_1676119.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1676119.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1057(iParam0));
		MISC::CLEAR_BIT(&(Global_1676119.f_3), 9);
	}
}

char* func_1057(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		default:
			break;
	}
	return "";
}

void func_1058(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_1011();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_1059(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1059(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1060(char* sParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1061()
{
	if (func_255(PLAYER::PLAYER_ID()))
	{
		func_234(25);
	}
}

int func_1062(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1063(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1064(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_442();
	}
	if (iParam0 > 0)
	{
		if (func_548() != func_32())
		{
			if (func_482(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2516617.f_93[func_1066(iParam0)] = 1;
			}
		}
		iVar0 = func_1066(159);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(157);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(148);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(164);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(142);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(152);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(166);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(170);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(173);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(179);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(200);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(201);
		if (func_1065(iVar0, Global_262145.f_12614, bParam1))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(182);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(183);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(185);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(186);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(180);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(195);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(197);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(198);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(207);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(208);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(209);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(214);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(215);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(216);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(217);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(218);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(219);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(220);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(221);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1065(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_202(PLAYER::PLAYER_ID(), 19) && !func_202(PLAYER::PLAYER_ID(), 20)) && !func_202(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2516617.f_93[iParam0] == 1 && func_9(&(Global_2516617[iParam0 /*2*/])))
	{
		if (func_875(&(Global_2516617[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2516617.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1066(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		case 157:
			return 12;
		case 148:
			return 13;
		case 164:
			return 14;
		case 142:
			return 15;
		case 152:
			return 16;
		case 163:
			return 17;
		case 155:
			return 18;
		case 160:
			return 19;
		case 153:
			return 20;
		case 162:
			return 21;
		case 154:
			return 22;
		case 166:
			return 8;
		case 170:
			return 9;
		case 173:
			return 10;
		case 171:
			return 23;
		case 172:
			return 24;
		case 179:
			return 25;
		case 189:
			return 26;
		case 193:
			return 27;
		case 194:
			return 28;
		case 199:
			return 29;
		case 201:
			return 30;
		case 200:
			return 31;
		case 205:
			return 32;
		case 210:
			return 33;
		case 182:
			return 34;
		case 183:
			return 35;
		case 185:
			return 36;
		case 186:
			return 37;
		case 180:
			return 38;
		case 195:
			return 39;
		case 197:
			return 40;
		case 198:
			return 41;
		case 207:
			return 42;
		case 208:
			return 43;
		case 209:
			return 44;
		case 211:
			return 45;
		case 214:
			return 0;
		case 215:
			return 1;
		case 216:
			return 2;
		case 217:
			return 3;
		case 218:
			return 4;
		case 219:
			return 5;
		case 220:
			return 6;
		case 221:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_1067(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_442();
	}
	if (iParam0 > 0)
	{
		if (func_548() != func_32())
		{
			Global_2516617.f_93[func_1066(iParam0)] = 1;
		}
		iVar0 = func_1066(155);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(163);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(160);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(153);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(162);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(154);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(171);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(172);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(199);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(194);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(193);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(210);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(205);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(189);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1066(211);
		if (func_1065(iVar0, Global_262145.f_12615, 0))
		{
			func_270(&(Global_2516617[iVar0 /*2*/]));
			func_8(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1068(int iParam0)
{
	if (!func_195(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_150[iParam0 /*3*/], func_1069(), 0))
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_150[iParam0 /*3*/] = { func_1069() };
	}
	if (!func_195(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_125[iParam0 /*3*/], func_1069(), 0))
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_125[iParam0 /*3*/] = { func_1069() };
	}
}

Vector3 func_1069()
{
	vector3 vVar0;

	return vVar0;
}

void func_1070()
{
	struct<20> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573907 = { Var0 };
	Global_1573907.f_13 = func_32();
	if (MISC::IS_BIT_SET(Global_1573344, 3))
	{
		MISC::CLEAR_BIT(&Global_1573344, 3);
	}
}

void func_1071(bool bParam0)
{
	if (bParam0)
	{
		if (!func_510(PLAYER::PLAYER_ID(), 14))
		{
			func_1073(14);
		}
	}
	else if (func_510(PLAYER::PLAYER_ID(), 14))
	{
		func_1072(14);
	}
}

void func_1072(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_5), iParam0);
}

void func_1073(int iParam0)
{
	MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_5), iParam0);
}

void func_1074(bool bParam0)
{
	if (func_251(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != bParam0)
		{
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_457 != bParam0)
			{
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_457 = bParam0;
				if (bParam0 != func_32())
				{
				}
			}
		}
	}
}

int func_1075(int iParam0)
{
	if (func_1076(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_1076(int iParam0, bool bParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (bParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1077(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_707(bParam0, iParam1) && func_1094(bParam0, iParam1))
	{
		iVar0 = func_706(bParam0, iParam1);
		func_1081(iVar0, bParam2, bParam3);
		func_1078(iVar0, 1);
	}
}

void func_1078(int iParam0, bool bParam1)
{
	if (!func_1080(iParam0))
	{
		return;
	}
	func_690(func_1079(iParam0), bParam1, -1, 1);
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_1079(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		case 1:
			return 7629;
		case 2:
			return 7630;
		case 3:
			return 7631;
		case 4:
			return 7632;
		case 5:
			return 15373;
		default:
			break;
	}
	return 7628;
}

bool func_1080(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1081(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	bVar1 = false;
	iVar2 = func_957(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1093(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2515430[iParam0];
		iVar0 = func_1092(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1678139 = -1;
		}
		func_1091(iParam0, 0, bParam2);
	}
	else if (func_1089(iParam0, bParam2))
	{
		iVar0 = func_1088(iVar2, 0);
		iVar3 = func_836(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1087(iVar2, bParam2);
		iVar5 = func_1088(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1086(iVar2) && func_1085(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1093(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1084(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1083(iParam0, (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_1087(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1088(iVar2, bParam2) / func_1084(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1086(iVar2) && func_1085(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1082(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1082(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return;
	}
	if (func_697(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590682[iParam0 /*883*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1083(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1084(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_697(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1085(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_697(iParam1) && func_1086(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1086(int iParam0)
{
	return func_596(iParam0) == 5;
}

int func_1087(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = func_596(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16958;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16963;
			}
			break;
		case 3:
			uVar0 = Global_262145.f_16957;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16962;
			}
			break;
		case 4:
			uVar0 = Global_262145.f_16956;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16961;
			}
			break;
		case 0:
			uVar0 = Global_262145.f_16954;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16959;
			}
			break;
		case 2:
			uVar0 = Global_262145.f_16955;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16960;
			}
			break;
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21084;
				if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21085;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21068;
				if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21069;
				}
			}
			break;
	}
	return uVar0;
}

int func_1088(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_596(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16939;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16948);
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16953);
			}
			break;
		case 3:
			iVar0 = Global_262145.f_16940;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16947);
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16952);
			}
			break;
		case 4:
			iVar0 = Global_262145.f_16941;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16946);
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16951);
			}
			break;
		case 0:
			iVar0 = Global_262145.f_16942;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16949);
			}
			break;
		case 2:
			iVar0 = Global_262145.f_16943;
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16950);
			}
			break;
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21081;
			}
			else
			{
				iVar0 = Global_262145.f_21065;
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21082);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21066);
				}
			}
			if (func_705(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21083);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21067);
				}
			}
			if (func_1085(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1089(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_691(15384, -1, -1);
	}
	return func_691(func_1090(iParam0), -1, -1);
}

int func_1090(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		case 1:
			return 9417;
		case 2:
			return 9418;
		case 3:
			return 9419;
		case 4:
			return 9420;
		case 5:
			return 15372;
		default:
			break;
	}
	return 9416;
}

void func_1091(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_690(15384, bParam1, -1, 1);
		return;
	}
	func_690(func_1090(iParam0), bParam1, -1, 1);
}

int func_1092(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2515430[iParam0];
	iVar1 = func_957(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2515437;
	}
	if (func_1086(iVar1))
	{
		if (func_1085(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1093(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2515437 = iParam1;
		return;
	}
	Global_2515430[iParam0] = iParam1;
}

int func_1094(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_707(bParam0, iParam1))
	{
		iVar0 = func_706(bParam0, iParam1);
		if (Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590682[bParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1095()
{
	MISC::CLEAR_BIT(&(Global_2540384.f_1797), 28);
	MISC::CLEAR_BIT(&(Global_2540384.f_1797), 29);
	func_1096(24);
}

void func_1096(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

void func_1097()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_438);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_437);
}

void func_1098(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;

	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1676128;
	Var1.f_1 = Global_1676128.f_1;
	Var1.f_2 = Global_1676128.f_2;
	Var1.f_3 = Global_1676128.f_3;
	Var1.f_4 = Global_1676128.f_4;
	Var1.f_5 = Global_1676128.f_5;
	Var1.f_6 = Global_1676128.f_6;
	Var1.f_7 = Global_1676128.f_7;
	Var1.f_8 = Global_1676128.f_8;
	Var1.f_9 = Global_1676128.f_9;
	Var1.f_10 = Global_1676128.f_10;
	Var1.f_11 = Global_1676128.f_11;
	Var1.f_12 = Global_1676128.f_12;
	Var1.f_13 = Global_1676128.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1676128.f_15;
			Var15.f_15 = Global_1676128.f_16;
			Var15.f_16 = Global_1676128.f_17;
			STATS::_0x8D8ADB562F09A245(&Var15);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1676128.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			STATS::_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1676128.f_15;
			Var49.f_15 = iParam0;
			STATS::_0x88087EE1F28024AE(&Var49);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1676128.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			STATS::_0xFCC228E07217FCAC(&Var65);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1676128.f_15;
			Var82.f_15 = iParam0;
			STATS::_0x678F86D8FC040BDB(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1676128.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1676128.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var116);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1676128.f_15;
			STATS::_0x282B6739644F4347(&Var134);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1676128.f_15;
			STATS::_0xF06A6F41CB445443(&Var153);
		}
	}
	func_1099();
}

void func_1099()
{
	struct<18> Var0;

	Global_1676128 = { Var0 };
}

void func_1100(struct<21> Param0)
{
	func_1150(func_1151(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(3);
	func_1148(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_178, 60);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_238, 193);
	if (!func_1147())
	{
		func_1053();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1146();
		func_1101(0, 0, 0);
		Local_238[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 0;
	}
	else
	{
		func_1053();
	}
}

void func_1101(int iParam0, int iParam1, bool bParam2)
{
	func_1145();
	if (func_481(PLAYER::PLAYER_ID()))
	{
		func_1104(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1103(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1676114, 0);
				break;
		}
	}
	if (!func_1024() && !func_298(PLAYER::PLAYER_ID(), 1))
	{
		if (func_412())
		{
			func_236(3);
		}
	}
	func_236(4);
	if (func_549(0))
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 = func_548();
	}
	if (func_435(iParam0))
	{
		func_834();
		Global_1676146.f_18 = func_814(func_365());
	}
	else if (func_440(func_1075(PLAYER::PLAYER_ID())))
	{
		func_832();
		Global_1676200.f_18 = func_814(func_365());
	}
	if (bParam2)
	{
		if (!func_409())
		{
			func_237(1);
		}
	}
	func_1102();
}

void func_1102()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366969.f_534[iVar0 /*42*/].f_1 = func_32();
		Global_1366969.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

bool func_1103(bool bParam0, bool bParam1)
{
	return func_331(PLAYER::PLAYER_ID(), bParam0, bParam1);
}

void func_1104(bool bParam0)
{
	int iVar0;

	func_1096(33);
	func_1096(34);
	func_1096(35);
	func_1096(36);
	func_1096(37);
	func_1096(38);
	func_1096(39);
	func_1096(40);
	func_1096(43);
	func_1096(41);
	func_1096(54);
	func_1096(42);
	func_1096(47);
	func_1144(23);
	func_1144(24);
	func_1096(92);
	MISC::CLEAR_BIT(&(Global_2540384.f_1797), 2);
	func_1143();
	func_1138();
	func_1133();
	func_1128();
	func_1117();
	func_1113();
	func_1109();
	func_1106();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1105(3))
	{
		func_1144(3);
	}
	else if (func_1105(4))
	{
		func_1144(4);
	}
	else if (func_1105(5))
	{
		func_1144(5);
	}
	else if (func_1105(6))
	{
		func_1144(6);
	}
	else if (func_1105(7))
	{
		func_1144(7);
	}
	else if (((((((((((((((((func_1105(0) || func_1105(1)) || func_1105(2)) || func_1105(8)) || func_1105(9)) || func_1105(10)) || func_1105(11)) || func_1105(12)) || func_1105(13)) || func_1105(14)) || func_1105(15)) || func_1105(16)) || func_1105(17)) || func_1105(18)) || func_1105(19)) || func_1105(20)) || func_1105(21)) || func_1105(22))
	{
		func_1144(8);
		func_1144(0);
		func_1144(1);
		func_1144(2);
		func_1144(9);
		func_1144(10);
		func_1144(11);
		func_1144(12);
		func_1144(13);
		func_1144(14);
		func_1144(15);
		func_1144(16);
		func_1144(17);
		func_1144(18);
		func_1144(19);
		func_1144(20);
		func_1144(21);
		func_1144(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1105(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_14[iVar0], iVar1);
}

void func_1106()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1108(iVar0))
		{
			func_1107(iVar0);
		}
		iVar0++;
	}
}

void func_1107(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_35[iVar0]), iVar1);
}

bool func_1108(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_35[iVar0], iVar1);
}

void func_1109()
{
	if (func_1111())
	{
		func_1110(0);
		func_1110(1);
		func_1110(2);
		func_1110(3);
	}
}

void func_1110(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_33[iVar0]), iVar1);
}

int func_1111()
{
	if (((func_1112(0) || func_1112(1)) || func_1112(2)) || func_1112(3))
	{
		return 1;
	}
	return 0;
}

bool func_1112(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_33[iVar0], iVar1);
}

void func_1113()
{
	if (func_1115())
	{
		func_1114(4);
		func_1114(5);
		func_1114(6);
		func_1114(7);
	}
}

void func_1114(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_31[iVar0]), iVar1);
}

int func_1115()
{
	if (((func_1116(4) || func_1116(5)) || func_1116(6)) || func_1116(7))
	{
		return 1;
	}
	return 0;
}

bool func_1116(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_31[iVar0], iVar1);
}

void func_1117()
{
	int iVar0;

	if (func_1127())
	{
		func_1126(8);
		func_1126(9);
		func_1126(10);
		func_1126(12);
		func_1126(13);
		func_1126(14);
		func_1126(19);
		func_1126(20);
		func_1126(21);
		func_1126(22);
		func_1126(23);
		func_1126(24);
		func_1126(25);
		func_1126(26);
		func_1126(15);
		func_1126(16);
		func_1126(17);
		func_1126(18);
		func_1126(35);
		func_1126(45);
		func_1126(46);
		if (func_1125(11))
		{
			func_1126(11);
			iVar0 = func_570(7227, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_568(7227, iVar0, -1, 1, 0);
		}
	}
	if (func_1125(48))
	{
		if (func_1123(151, 3))
		{
			func_1121(151, 3);
		}
		func_1126(48);
	}
	if (func_1125(49))
	{
		if (func_1123(152, 3))
		{
			func_1121(152, 3);
		}
		func_1126(49);
	}
	if (func_1125(50))
	{
		if (func_1123(153, 3))
		{
			func_1121(153, 3);
		}
		func_1126(50);
	}
	if (func_1125(51))
	{
		if (func_1123(func_1118(), 3))
		{
			func_1121(func_1118(), 3);
		}
		func_1126(51);
	}
}

int func_1118()
{
	if (func_1120())
	{
		func_1119(154, Global_19681, 1);
	}
	return 154;
}

void func_1119(int iParam0, int iParam1, int iParam2)
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

int func_1120()
{
	bool bVar0;

	bVar0 = func_88(PLAYER::PLAYER_ID());
	if (((bVar0 != PLAYER::PLAYER_ID() && bVar0 != func_32()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0)) && bVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1121(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1122(iParam0, iVar0, 0);
			func_1119(iParam0, iVar0, 0);
		}
	}
}

void func_1122(int iParam0, int iParam1, int iParam2)
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

int func_1123(int iParam0, int iParam1)
{
	if (func_1124(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1124(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

bool func_1125(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_26[iVar0], iVar1);
}

void func_1126(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_26[iVar0]), iVar1);
}

int func_1127()
{
	if (((((((((((((((((((((func_1125(8) || func_1125(9)) || func_1125(10)) || func_1125(12)) || func_1125(11)) || func_1125(13)) || func_1125(14)) || func_1125(19)) || func_1125(20)) || func_1125(21)) || func_1125(22)) || func_1125(23)) || func_1125(24)) || func_1125(25)) || func_1125(26)) || func_1125(15)) || func_1125(16)) || func_1125(17)) || func_1125(18)) || func_1125(35)) || func_1125(45)) || func_1125(46))
	{
		return 1;
	}
	return 0;
}

void func_1128()
{
	if (func_1132())
	{
		func_1131(0);
		func_1131(1);
		func_1131(2);
		func_1131(3);
		func_1131(4);
		func_1131(5);
		if (func_1130(32))
		{
			if (func_1123(func_1129(), 3))
			{
				func_1121(func_1129(), 3);
			}
			func_1131(32);
		}
	}
}

int func_1129()
{
	if (func_1120())
	{
		func_1119(12, Global_19681, 1);
	}
	return 12;
}

bool func_1130(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_23[iVar0], iVar1);
}

void func_1131(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_23[iVar0]), iVar1);
}

int func_1132()
{
	if ((((func_1130(1) || func_1130(0)) || func_1130(2)) || func_1130(4)) || func_1130(5))
	{
		return 1;
	}
	return 0;
}

void func_1133()
{
	if (func_1137())
	{
		func_1136(0);
		func_1136(1);
		func_1136(2);
		func_1136(3);
		func_1136(4);
		func_1136(5);
		func_1136(6);
		func_1136(7);
		if (func_1135(8))
		{
			func_1136(8);
		}
		if (func_1135(15))
		{
			if (func_1123(func_1134(), 3))
			{
				func_1121(func_1134(), 3);
			}
			func_1136(15);
		}
	}
}

int func_1134()
{
	if (func_1120())
	{
		func_1119(20, Global_19681, 1);
	}
	return 20;
}

bool func_1135(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_21[iVar0], iVar1);
}

void func_1136(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_21[iVar0]), iVar1);
}

int func_1137()
{
	if ((((((((func_1135(0) || func_1135(1)) || func_1135(2)) || func_1135(3)) || func_1135(4)) || func_1135(5)) || func_1135(6)) || func_1135(7)) || func_1135(8))
	{
		return 1;
	}
	return 0;
}

void func_1138()
{
	if (func_1142())
	{
		func_1141(0);
		func_1141(1);
		func_1141(2);
		func_1141(3);
		func_1141(4);
		func_1141(5);
		func_1141(6);
		func_1141(7);
		func_1141(8);
		func_1141(9);
		func_1141(10);
		func_1141(11);
		func_1141(12);
		if (func_1140(13))
		{
			if (func_1123(func_1139(), 3))
			{
				func_1121(func_1139(), 3);
			}
			func_1141(13);
		}
	}
}

int func_1139()
{
	if (func_1120())
	{
		func_1119(76, Global_19681, 1);
	}
	return 76;
}

bool func_1140(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540384.f_5188.f_19[iVar0], iVar1);
}

void func_1141(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_19[iVar0]), iVar1);
}

int func_1142()
{
	if ((((((((((((func_1140(0) || func_1140(1)) || func_1140(2)) || func_1140(3)) || func_1140(4)) || func_1140(5)) || func_1140(6)) || func_1140(7)) || func_1140(8)) || func_1140(9)) || func_1140(10)) || func_1140(11)) || func_1140(12))
	{
		return 1;
	}
	return 0;
}

void func_1143()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2540384.f_5188.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1144(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2540384.f_5188.f_14[iVar0]), iVar1);
}

void func_1145()
{
	struct<14> Var0;

	Global_1676128 = { Var0 };
	Global_1676128.f_14 = 0;
	Global_1676128.f_15 = 0;
}

void func_1146()
{
}

int func_1147()
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
		if (func_1048())
		{
			return 0;
		}
		if (func_1046(157))
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

int func_1148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1054();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1149())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1054();
					}
					else
					{
						return 0;
					}
				}
				if (func_1048())
				{
					if (!bParam2)
					{
						func_1054();
					}
					else
					{
						return 0;
					}
				}
				if (func_1046(157))
				{
					if (!bParam2)
					{
						func_1054();
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
					func_1054();
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
				func_1054();
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
			func_1054();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1149()
{
	return Global_1312872;
}

void func_1150(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1054();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_1151(int iParam0)
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

int func_1152(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[bVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

