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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
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
	var uLocal_77 = -1;
	var uLocal_78 = 0;
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
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
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
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = false;
	bool bLocal_127 = false;
	bool bLocal_128 = false;
	bool bLocal_129 = false;
	int iLocal_130 = 0;
	int iLocal_131[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140[5] = { false, false, false, false, false };
	bool bLocal_146 = false;
	var uLocal_147 = 0;
	struct<10> Local_148 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<30> Local_158 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = false;
	vector3 vLocal_191[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 12;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
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
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
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
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
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
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 1065353216;
	bool bLocal_997 = false;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	var uLocal_1003 = 16;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
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
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	bool bLocal_1174 = false;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	int iLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	bool bLocal_1194 = false;
	bool bLocal_1195 = false;
	bool bLocal_1196 = false;
	int iLocal_1197 = 0;
	bool bLocal_1198 = false;
	bool bLocal_1199 = false;
	int iLocal_1200 = 0;
	vector3 vLocal_1201 = { 0f, 0f, 0f };
	vector3 vLocal_1204[1] = {{ 0f, 0f, 0f } };
	var uLocal_1208[1] = { 0 };
	var uLocal_1210[1] = { 0 };
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	bool bLocal_1215 = false;
	int iLocal_1216 = 0;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_290 = 6;
	iLocal_1185 = 10000;
	func_510();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_506(ScriptParam_0))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_158.f_24 = 8;
			}
			func_500(1);
		}
	}
	while (true)
	{
		func_499();
		if (func_489())
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Local_158.f_24 = 8;
				}
			}
			func_500(1);
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_997 && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_158.f_24 = 8;
			}
			func_500(1);
		}
		if (NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()) != Local_158.f_5)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_158.f_24 = 8;
			}
			func_500(1);
		}
		NETWORK::_0x2302C0264EA58D31();
		bLocal_1215 = false;
		iLocal_1216 = 0;
		switch (func_488(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_487() == 1)
				{
					func_486();
					func_485();
					vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_487() == 5)
				{
					vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 1:
				func_465();
				if (func_487() == 1)
				{
					func_345();
				}
				else if (func_487() == 5)
				{
					vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 3:
				func_344(&(Local_158.f_25));
				if (func_343(&(Local_158.f_25)))
				{
					vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			case 2:
				vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
			case 5:
				func_500(1);
				break;
		}
		func_342();
		if (func_341())
		{
			func_329();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_487())
			{
				case 0:
					if (func_301())
					{
						func_486();
						Local_158 = 1;
					}
					break;
				case 1:
					func_281();
					func_275();
					func_158();
					if (func_150())
					{
						Local_158 = 5;
					}
					break;
				case 4:
					func_1();
					break;
				case 5:
					break;
			}
		}
	}
}

void func_1()
{
	func_144();
	if (func_143(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (MISC::IS_BIT_SET(iLocal_288, 6) && !MISC::IS_BIT_SET(iLocal_288, 7))
		{
			if (!func_142(0))
			{
				if (!func_341())
				{
					func_140(13);
					func_120(func_136(13), 6, 2, 1);
				}
				else
				{
					func_140(44);
					func_120(func_136(44), 6, 2, 1);
				}
				MISC::SET_BIT(&iLocal_288, 7);
				Local_158 = 5;
			}
		}
		if (MISC::IS_BIT_SET(iLocal_288, 5) && !MISC::IS_BIT_SET(iLocal_288, 6))
		{
			if (func_142(0))
			{
				MISC::SET_BIT(&iLocal_288, 6);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_288, 5))
		{
			if (func_118(&uLocal_1170, 5000, 0))
			{
				if (!func_341())
				{
					func_117(&uLocal_1003, 3, 0, "FM_MERRYWEATHER", 0, 1);
					if (func_13(&uLocal_1003, 85, "CT_AUD", "MPCT_9", 0, 0))
					{
						MISC::SET_BIT(&iLocal_288, 5);
					}
				}
				else
				{
					func_12(1);
					if (func_7(1))
					{
						func_117(&uLocal_1003, 3, 0, "EXECPA_MALE", 0, 1);
						if (func_13(&uLocal_1003, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0))
						{
							MISC::SET_BIT(&iLocal_288, 5);
						}
					}
					else
					{
						func_117(&uLocal_1003, 2, 0, "EXECPA_FEMALE", 0, 1);
						if (func_13(&uLocal_1003, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0))
						{
							MISC::SET_BIT(&iLocal_288, 5);
						}
					}
				}
			}
		}
	}
}

int func_2(bool bParam0)
{
	if (func_7(bParam0))
	{
		if (bParam0 && func_4())
		{
			func_3(22, Global_19681, 1);
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_4())
	{
		func_3(22, Global_19681, 1);
		return 22;
	}
	return 74;
}

void func_3(int iParam0, int iParam1, int iParam2)
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

int func_4()
{
	int iVar0;

	iVar0 = func_6(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_5()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	return -1;
}

int func_6(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_5();
}

bool func_7(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_6(PLAYER::PLAYER_ID());
		if (func_4())
		{
			if (func_11(iVar0))
			{
				return true;
			}
			return false;
		}
	}
	return func_8(3223, -1, 0) != 0;
}

int func_8(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_9(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1312763;
}

bool func_11(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 29);
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		Global_1573348 = 1;
	}
	else
	{
		Global_1573348 = 0;
	}
}

int func_13(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_115())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_14(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, iVar0, bVar1, iVar2, iVar0, iVar0, -1);
}

int func_14(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_113(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_112(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_107(iParam6))
	{
		return 0;
	}
	if (func_104(iVar0, iVar1, iVar2))
	{
		if (func_103())
		{
			return 0;
		}
		func_102();
		return func_21(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_20(iParam4))
	{
		return 0;
	}
	func_15(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_15(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370593.f_40.f_1 = iParam0;
	Global_1370593.f_40.f_2 = iParam1;
	Global_1370593.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370593.f_40.f_4), sParam3, 16);
	Global_1370593.f_40.f_8 = iParam4;
	Global_1370593.f_40.f_9 = iParam5;
	Global_1370593.f_40.f_14 = iParam6;
	func_16(iParam4);
	func_102();
	Global_1370593.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_16(int iParam0)
{
	if (func_19(iParam0))
	{
		func_18();
		return;
	}
	func_17();
}

void func_17()
{
	Global_1370593.f_40.f_10 = 0;
}

void func_18()
{
	Global_1370593.f_40.f_10 = 1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_20(int iParam0)
{
	return iParam0 > Global_1370593.f_40.f_8;
}

int func_21(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	char cVar0[16];

	func_101();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_98(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_95(uParam0, iParam1, sParam3, sParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_98(uParam0, sParam3, sParam4);
		}
		return func_77(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_76(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_64(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_63(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_22(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_22(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	func_62();
	bVar0 = true;
	if (func_24(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_23(120000);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	Global_1370593.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370593.f_40.f_12 = 1;
}

int func_24(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	iVar0 = func_5();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_56(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_55(sParam5, bParam6, &iVar3);
	uVar5 = func_53(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_52(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_28(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_27();
	}
	func_62();
	func_26();
	func_25();
	return 1;
}

void func_25()
{
	Global_1370593.f_57 = 0;
	Global_1370593.f_57.f_1 = 0;
}

void func_26()
{
	Global_1370593.f_40 = 3;
}

void func_27()
{
	MISC::SET_BIT(&Global_7551, 8);
}

int func_28(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_29(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			MISC::SET_BIT(&Global_4271024, 0);
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_45();
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
		if (Global_4271009 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPEMAIL")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPMPEMAIL")) > 0)
		{
			return 0;
		}
	}
	if (func_44() == 0)
	{
		func_42();
		return 0;
	}
	func_41(Global_4271008);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/]), sParam1, 64);
	Global_4269759[Global_4271008 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4269759[Global_4271008 /*104*/].f_24 = iParam2;
	}
	Global_4269759[Global_4271008 /*104*/].f_25 = iParam7;
	Global_4269759[Global_4271008 /*104*/].f_26 = iParam8;
	Global_4269759[Global_4271008 /*104*/].f_29 = iParam9;
	Global_4269759[Global_4271008 /*104*/].f_30 = iParam12;
	Global_4269759[Global_4271008 /*104*/].f_31 = iParam11;
	Global_4269759[Global_4271008 /*104*/].f_28 = 0;
	Global_4269759[Global_4271008 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_33), sParam4, 64);
	Global_4269759[Global_4271008 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_50), sParam5, 64);
	Global_4269759[Global_4271008 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_83), sParam15, 64);
	func_45();
	switch (iParam16)
	{
		case 3:
			Global_4269759[Global_4271008 /*104*/].f_99[Global_19681] = 1;
			break;
		case 0:
			Global_4269759[Global_4271008 /*104*/].f_99[0] = 1;
			break;
		case 2:
			Global_4269759[Global_4271008 /*104*/].f_99[2] = 1;
			break;
		case 1:
			Global_4269759[Global_4271008 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19681)
		{
			case 0:
				func_40(0);
				break;
			case 1:
				func_40(1);
				break;
			case 2:
				func_40(2);
				break;
			case 3:
				func_40(3);
				break;
			default:
				break;
		}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4271009 = 1;
				break;
			case 0:
				Global_4271009 = 1;
				break;
			case 2:
				Global_4271009 = 1;
				break;
			case 1:
				Global_4271009 = 1;
				break;
		}
	}
	Global_22074[Global_4271008] = 0;
	if (bParam10)
	{
		func_45();
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
			if (!func_39())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_38(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_34(1);
			func_38(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_30(iParam0, sParam1);
	return 1;
}

void func_30(int iParam0, char* sParam1)
{
	if (!func_31())
	{
		return;
	}
	UNK_0x1A2DCF21E22955B0(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_31()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_5())
	{
		return 0;
	}
	if (func_32(PLAYER::PLAYER_ID()))
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

bool func_32(int iParam0)
{
	return func_33(iParam0, 20);
}

bool func_33(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

void func_34(int iParam0)
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
		if (func_37(14))
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
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
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
								func_36(&(Global_7558[iVar1 /*15*/]));
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
								func_36(&(Global_7558[iVar1 /*15*/]));
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
								func_36(&(Global_7558[iVar1 /*15*/]));
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
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_35(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_35(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_36(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_36(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_36(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_36(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_36(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_37(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_38(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_39()
{
	return Global_1312896;
}

void func_40(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_41(int iParam0)
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
	Global_4269759[iParam0 /*104*/].f_18 = iVar0;
	Global_4269759[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4269759[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4269759[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4269759[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4269759[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_42()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_43(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
		{
			Global_4271008 = iVar2;
		}
		iVar2++;
	}
	Global_4269759[Global_4271008 /*104*/].f_24 = 1;
}

int func_43(struct<6> Param0, struct<6> Param6)
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

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0)
		{
			Global_4271008 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0 || Global_4269759[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_43(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
			{
				Global_4271008 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4271008 == 11)
	{
		return 0;
	}
	Global_4269759[Global_4271008 /*104*/].f_99[0] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[1] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[2] = 0;
	return 1;
}

void func_45()
{
	if (func_37(14))
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
		Global_19681 = func_46();
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

var func_46()
{
	func_47();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_47()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_50(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_49(PLAYER::PLAYER_PED_ID());
			if (func_48(iVar0) && (!func_37(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_48(Global_111858.f_2359.f_539.f_4321))
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

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_50(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		return func_51(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_51(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_52(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	iVar0 = 3;
	if (func_29(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			MISC::SET_BIT(&Global_4271024, 0);
		}
		return 1;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_54(2, iParam1);
	return iParam0;
}

void func_54(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		case 2:
			bVar1 = true;
			break;
		default:
			return;
	}
	if (bVar0)
	{
		switch (*iParam1)
		{
			case 1:
			case 3:
				break;
			case 0:
				*iParam1 = 1;
				break;
			case 2:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*iParam1)
		{
			case 2:
			case 3:
				break;
			case 0:
				*iParam1 = 2;
				break;
			case 1:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
}

char* func_55(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_54(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_56(int iParam0)
{
	int iVar0;

	iVar0 = func_59(iParam0);
	if (iVar0 == -1)
	{
		func_57(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_57(int iParam0, bool bParam1)
{
	if (!func_143(iParam0, 0, 1))
	{
		return;
	}
	if (func_59(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_58(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_58(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;

	if (!func_143(iParam0, 0, 1))
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
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_60(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_60(int iParam0)
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
	func_61(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_61(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_62()
{
	Global_1370593.f_40.f_9 = 4;
}

int func_63(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	func_62();
	bVar0 = false;
	return func_24(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_64(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_65(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_65(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	iVar0 = func_5();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_56(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22066 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_55(sParam5, bParam6, &iVar3);
	uVar5 = func_53(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_75(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_67(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_27();
	}
	func_66();
	func_26();
	func_25();
	return 1;
}

void func_66()
{
	Global_1370593.f_40.f_9 = 3;
}

int func_67(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_69(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_68(iParam0) };
			Global_8238 = iParam0;
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_68(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_69(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_45();
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
	if (func_74() == 0)
	{
		func_72();
		return 0;
	}
	func_71(Global_22072);
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
		func_40(0);
		func_40(2);
		func_40(1);
	}
	else
	{
		func_45();
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
					func_40(0);
					Global_8257 = 0;
					break;
				case 1:
					func_40(1);
					Global_8257 = 1;
					break;
				case 2:
					func_40(2);
					Global_8257 = 2;
					break;
				case 3:
					func_40(3);
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
		func_45();
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
			if (!func_39())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_38(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_34(1);
			func_38(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_70(iParam0, sParam1);
	return 1;
}

void func_70(int iParam0, char* sParam1)
{
	if (!func_31())
	{
		return;
	}
	UNK_0x1A2DCF21E22955B0(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_71(int iParam0)
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

void func_72()
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
		if (!func_73(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_73(struct<6> Param0, struct<6> Param6)
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

int func_74()
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
			if (!func_73(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
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

int func_75(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_7551, 10);
	iVar0 = 3;
	if (func_69(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			Global_8161[3 /*6*/] = { func_68(iParam0) };
			Global_8238 = iParam0;
			StringCopy(&Global_8239, sParam5, 64);
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

int func_76(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_66();
	bVar0 = true;
	if (func_65(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_23(120000);
		return 1;
	}
	return 0;
}

int func_77(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_94(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_83(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_82(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_81(1);
		}
		func_80();
		func_26();
		func_79();
		func_78();
		return 1;
	}
	return 0;
}

void func_78()
{
	Global_2549970 = 0;
}

void func_79()
{
	Global_1370593.f_57 = 1;
	Global_1370593.f_57.f_1 = 0;
}

void func_80()
{
	Global_1370593.f_40.f_9 = 1;
}

void func_81(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7553, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7553, 0);
	}
}

void func_82(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 20);
	}
}

int func_83(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_93(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_84(sParam3, iParam4, bParam7);
}

int func_84(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_92();
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
		if (func_91(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_90();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			MISC::CLEAR_BIT(&Global_7551, 20);
			MISC::CLEAR_BIT(&Global_7552, 17);
			MISC::CLEAR_BIT(&Global_7553, 0);
			if (bParam2)
			{
				func_45();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_89())
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
				if (!Global_76833)
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
			if (func_88())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
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
				if (MISC::IS_BIT_SET(Global_7551, 9))
				{
					return 0;
				}
			}
			func_87();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_86();
		func_85();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_92();
	}
	return 0;
}

void func_85()
{
	if (!func_31())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

void func_86()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21005 = 1;
}

void func_87()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	MISC::CLEAR_BIT(&Global_7552, 16);
}

int func_88()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	int iVar0;
	int iVar1;

	if (Global_76833)
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

void func_90()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_91(int iParam0, int iParam1)
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

void func_92()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22016 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21005 = 6;
		return;
	}
}

void func_93(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

int func_94(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_93(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 1;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_84(sParam3, iParam4, bParam7);
}

int func_95(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_97(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_96();
		func_80();
		func_26();
		func_79();
		func_78();
		return 1;
	}
	return 0;
}

void func_96()
{
	Global_22023 = 0;
}

bool func_97(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_93(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 1;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 1;
	Global_21059 = 0;
	StringCopy(&Global_21153, sParam5, 24);
	Global_2621441 = 0;
	return func_84(sParam3, iParam4, bParam8);
}

int func_98(var uParam0, char* sParam1, char* sParam2)
{
	if (func_100(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_99();
		func_26();
		func_79();
		return 1;
	}
	return 0;
}

void func_99()
{
	Global_1370593.f_40.f_9 = 2;
}

bool func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_84(sParam2, iParam3, 0);
}

void func_101()
{
	Global_1370593.f_55 = Global_1370593.f_40.f_1;
	Global_1370593.f_55.f_1 = Global_1370593.f_40.f_10;
}

void func_102()
{
	Global_1370593.f_40 = 1;
}

bool func_103()
{
	return Global_1370593.f_40 == 1;
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam0))
	{
		return 0;
	}
	if (Global_1370593.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370593.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_105(int iParam0)
{
	if (!func_106())
	{
		return 0;
	}
	if (!Global_1370593.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_106()
{
	if (Global_1370593.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_107(int iParam0)
{
	if (func_111())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_142(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1663771 || func_109())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_108())
		{
			return 0;
		}
	}
	return 1;
}

bool func_108()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1387851);
}

int func_109()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return Global_1370593.f_40 == 3;
}

bool func_111()
{
	return func_88();
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	if (!func_110())
	{
		return 0;
	}
	return func_104(iParam0, iParam1, iParam2);
}

int func_113(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_114()
{
	return Global_2547059.f_1;
}

int func_115()
{
	if (Global_1370781.f_2)
	{
		return 1;
	}
	return func_116();
}

bool func_116()
{
	return func_111();
}

void func_117(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
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

int func_118(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_119(uParam0, bParam2, 0);
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

void func_119(var uParam0, bool bParam1, bool bParam2)
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

void func_120(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;

	StringCopy(&Var0, func_135(iParam1), 16);
	StringCopy(&Var4, func_134(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = 1287308202;
			break;
		case 1:
			iVar12 = 691372038;
			break;
		case 2:
			iVar12 = 1480707108;
			break;
		case 3:
			iVar12 = 1512499951;
			break;
		case 4:
			iVar12 = 562283735;
			break;
		case 5:
			iVar12 = -154732333;
			break;
		case 6:
			iVar12 = -1362660491;
			break;
		case 7:
			iVar12 = 645708827;
			break;
		case 8:
			iVar12 = 767907967;
			break;
		case 9:
			iVar12 = -1970151306;
			break;
		case 10:
			iVar12 = 718859568;
			break;
		case 11:
			iVar12 = -1955564771;
			break;
		case 12:
			iVar12 = 892388724;
			break;
		case 13:
			iVar12 = -1426920838;
			break;
		case 14:
			iVar12 = -664597565;
			break;
		case 15:
			iVar12 = 1864522104;
			break;
		case 16:
			iVar12 = 215608230;
			break;
		case 17:
			iVar12 = -1100963799;
			break;
	}
	if (func_133())
	{
		func_121(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
		Global_4264051[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4264051[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_121(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_133())
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
				func_122(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_122(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_122(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_122(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_133())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_10()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*iParam0 = func_129(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_128(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_123(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_124(iParam0);
	}
}

void func_124(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_133())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_127(iParam0))
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
		func_125(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_125(var uParam0)
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
	func_126(&(uParam0->f_14));
	func_126(&(uParam0->f_14.f_13));
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

void func_126(var uParam0)
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

int func_127(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_133())
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
				func_130(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_132(vVar0.y);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_131();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_131()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_132(int iParam0)
{
	var uVar0;

	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_133()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

char* func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
		case 1:
			return "TARGET_ESCAPE";
		case 2:
			return "DELIVERY_FAIL";
		case 3:
			return "NOT_USED";
		case 4:
			return "TEAM_QUIT";
		case 5:
			return "SERVER_ERROR";
		case 6:
			return "RECEIVE_LJ_L";
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
	}
	return "DEFAULT";
}

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		case 1:
			return "BACKUP_LOST";
		case 2:
			return "BACKUP_FAMILIES";
		case 3:
			return "HIRE_MUGGER";
		case 4:
			return "HIRE_MERCENARY";
		case 5:
			return "BUY_CARDROPOFF";
		case 6:
			return "HELI_PICKUP";
		case 7:
			return "BOAT_PICKUP";
		case 8:
			return "CLEAR_WANTED";
		case 9:
			return "HEAD_2_HEAD";
		case 10:
			return "CHALLENGE";
		case 11:
			return "SHARE_LAST_JOB";
		case 13:
			return "REFUNDAPPEA";
		case 14:
			return "AMMO_DROP_REF";
		case 15:
			return "ORBITAL_MANUAL";
		case 16:
			return "ORBITAL_AUTO";
		case 17:
			return "ARENA_SPEC_BOX";
		default:
			break;
	}
	return "DEFAULT";
}

int func_136(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_139(iParam0) >= 0)
	{
		iVar0 = func_139(iParam0);
	}
	else
	{
		iVar0 = func_137(iParam0);
	}
	return iVar0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
		case 10:
			return 5000;
		case 11:
			return 8000;
		case 8:
			return 1000;
		case 0:
			return 500;
		case 9:
			return 250;
		case 13:
			return 1000;
		case 12:
			return 7500;
		case 2:
			return 1000;
		case 14:
			return 500;
		case 20:
			if (func_138())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		case 6:
			return 500;
		case 22:
			return 200;
		case 23:
			return 400;
		case 24:
			return 700;
		case 25:
			return 100;
		case 26:
			return 1000;
		case 57:
			return 700;
		case 35:
			return 5000;
		case 15:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 21:
			return 0;
		case 36:
			return 0;
		case 39:
			return 200;
		case 40:
			return 1000;
		case 41:
			return 750;
		case 42:
			return 0;
	}
	return 0;
}

bool func_138()
{
	return MISC::IS_BIT_SET(func_8(6425, -1, 0), 19);
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6646;
		case 10:
			return Global_262145.f_4118;
		case 11:
			return Global_262145.f_4119;
		case 8:
			return Global_262145.f_4116;
		case 0:
			return Global_262145.f_4102;
		case 9:
			return Global_262145.f_4117;
		case 13:
			return Global_262145.f_4121;
		case 12:
			return Global_262145.f_4120;
		case 2:
			return Global_262145.f_4112;
		case 14:
			return Global_262145.f_4122;
		case 20:
			if (func_138())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_262145.f_6653;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_262145.f_6654;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_262145.f_6655;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_262145.f_6656;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_262145.f_6657;
			}
			break;
		case 6:
			return Global_262145.f_4115;
		case 22:
			return Global_262145.f_4128;
		case 23:
			return Global_262145.f_4129;
		case 24:
			return Global_262145.f_4130;
		case 25:
			return Global_262145.f_4131;
		case 26:
			return Global_262145.f_4132;
		case 35:
			return Global_262145.f_7222;
		case 15:
			return Global_262145.f_6647;
		case 17:
			return Global_262145.f_6647;
		case 18:
			return Global_262145.f_6647;
		case 19:
			return Global_262145.f_6647;
		case 21:
			return Global_262145.f_6647;
		case 36:
			return Global_262145.f_7689;
		case 39:
			return -1;
		case 40:
			return Global_262145.f_12892;
		case 41:
			return Global_262145.f_12893;
		case 42:
			return Global_262145.f_12894;
		case 43:
			return Global_262145.f_15437;
		case 44:
			return Global_262145.f_15439;
		case 57:
			return Global_262145.f_4130;
		case 58:
			return Global_262145.f_25071;
		case 62:
			return Global_262145.f_25072;
		case 63:
			return Global_262145.f_28531;
		case 64:
			return Global_262145.f_6647;
	}
	return 0;
}

void func_140(int iParam0)
{
	func_141(&(Global_2452679.f_4312.f_209[iParam0 /*2*/]));
}

void func_141(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_142(int iParam0)
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

int func_143(int iParam0, bool bParam1, bool bParam2)
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

void func_144()
{
	int iVar0;
	int iVar1;

	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1212) && !func_149(iLocal_1212)) && !func_148(Local_158.f_4)) && PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, false))
	{
		if (!func_146(iLocal_1212, 1, 1, 0, 0, 0, 1, 0, 1))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_143(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iLocal_1212, false))
					{
						func_145(func_132(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
		}
		else if (!bLocal_1198)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1212))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1212);
			}
			else
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 2);
				bLocal_1198 = true;
			}
		}
	}
}

void func_145(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;

	Var0 = -1333236192;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (bParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_147(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (bParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_5()) && func_143(iVar3, 1, 1)) || bParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (bParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_147(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_148(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_149(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (func_151())
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	var uVar0;
	var uVar1;

	if ((Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 2 || Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 1) || Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 3)
	{
		return 1;
	}
	if (!func_143(PLAYER::PLAYER_ID(), 1, 1) && !func_341())
	{
		return 1;
	}
	if (func_157())
	{
		if (Local_158.f_23 >= 0 || Local_158.f_23 <= 3)
		{
			if (!func_341())
			{
				func_120(func_136(13), 6, 3, 1);
			}
			else
			{
				func_120(func_136(44), 6, 3, 1);
			}
		}
		return 1;
	}
	if ((Local_158.f_23 >= 0 || Local_158.f_23 <= 3) && Local_158.f_23 != 4)
	{
		if (func_149(iLocal_1212))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
			{
				if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_158.f_3, &uVar0) == PLAYER::PLAYER_ID())
				{
					if (func_156())
					{
						func_155(1, 600000);
					}
					else
					{
						Global_2540384.f_5996 = NETWORK::GET_NETWORK_TIME();
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_148(Local_158.f_4))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4))
				{
					if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_158.f_4, &uVar1) == PLAYER::PLAYER_ID())
					{
						if (func_156())
						{
							func_155(1, 600000);
						}
						else
						{
							Global_2540384.f_5996 = NETWORK::GET_NETWORK_TIME();
						}
					}
				}
				return 1;
			}
			else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, false))
			{
				return 1;
			}
			else if (vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 1)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1212, true), func_154(), func_154(), func_154(), false, true, 0))
				{
					return 1;
				}
			}
			if (func_153(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
			if (func_153(PLAYER::PLAYER_ID(), 7))
			{
				return 1;
			}
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 13)
			{
				return 1;
			}
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 14)
			{
				return 1;
			}
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 15)
			{
				return 1;
			}
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 12)
			{
				return 1;
			}
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 11)
			{
				return 1;
			}
			if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_997)
			{
				return 1;
			}
		}
	}
	if (Local_158.f_23 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1212))
		{
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0 || !func_152(PLAYER::GET_PLAYER_PED(Local_158.f_5), iLocal_1212, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 1);
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1212))
		{
			if (func_149(iLocal_1212))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 1);
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1212))
		{
			if (func_148(Local_158.f_4) && !Global_2462286.f_26)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_152(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_153(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

float func_154()
{
	float fVar0;

	fVar0 = 200f;
	if (func_341())
	{
		fVar0 = (200f + 600f);
	}
	return fVar0;
}

void func_155(int iParam0, int iParam1)
{
	if (Global_2440049.f_4002[iParam0] < iParam1)
	{
		Global_2440049.f_4002[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2440049.f_4001), iParam0);
}

int func_156()
{
	if (func_341())
	{
		return 0;
	}
	return 1;
}

bool func_157()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

void func_158()
{
	int iVar0;
	var uVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Local_158.f_24 != 8 && Local_158.f_24 != 5)
	{
		if (func_148(Local_158.f_4) || func_149(iLocal_1212))
		{
			Local_158.f_24 = 8;
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, false))
		{
			Local_158.f_24 = 8;
		}
	}
	if (Local_158.f_24 != 4)
	{
		if (MISC::IS_BIT_SET(Local_158.f_1, 14))
		{
			MISC::CLEAR_BIT(&(Local_158.f_1), 14);
		}
		if (func_274(&uLocal_1177))
		{
			func_141(&uLocal_1177);
		}
		if (func_274(&uLocal_1179))
		{
			func_141(&uLocal_1179);
		}
	}
	if (Local_158.f_24 != 7)
	{
		if (func_274(&uLocal_1181))
		{
			func_141(&uLocal_1181);
		}
	}
	if (!func_148(Local_158.f_4) && !func_149(iLocal_1212))
	{
		if (Local_158.f_24 != 8)
		{
			if ((Local_158.f_23 == 0 || Local_158.f_23 == 1) || Local_158.f_23 == 2)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_1212) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NETWORK::NET_TO_PED(Local_158.f_4)))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(iLocal_1212) <= 500 || ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_158.f_4)) <= 150) || VEHICLE::IS_HELI_PART_BROKEN(iLocal_1212, true, true, true))
					{
						Local_158.f_24 = 8;
					}
				}
			}
		}
		switch (Local_158.f_24)
		{
			case 1:
				if (Local_158.f_23 == 3)
				{
					if (!MISC::IS_BIT_SET(Local_158.f_2, 2))
					{
						if (func_270())
						{
							if (func_156())
							{
								func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
								func_269(&uLocal_1003, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_12(1);
								func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_1003, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							MISC::SET_BIT(&(Local_158.f_2), 2);
						}
					}
					func_267();
					Local_158.f_24 = 2;
				}
				else if (Local_158.f_23 == 6)
				{
					Local_158.f_24 = 8;
				}
				else if (func_266() == 0 && !func_265())
				{
					func_267();
					Local_158.f_24 = 4;
				}
				else if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) > 0)
				{
					func_267();
					Local_158.f_24 = 4;
				}
				else if (MISC::IS_BIT_SET(Local_158.f_1, 9))
				{
					func_267();
					Local_158.f_24 = 2;
				}
				else if (MISC::IS_BIT_SET(iLocal_288, 4) && func_266())
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1212, (func_154() / 2f), (func_154() / 2f), func_154(), false, true, 0))
					{
						if (func_264(iLocal_1212))
						{
							if (VEHICLE::IS_HELI_LANDING_AREA_BLOCKED(iLocal_1212))
							{
								if (func_118(&uLocal_1172, func_263(), 0))
								{
									iLocal_999 = 0;
									iLocal_1000 = 0;
									iLocal_1001 = 0;
									MISC::CLEAR_BIT(&iLocal_288, 4);
									if (!MISC::IS_BIT_SET(iLocal_288, 18))
									{
										iLocal_1176 = NETWORK::GET_NETWORK_TIME();
									}
									MISC::SET_BIT(&iLocal_288, 18);
								}
							}
							else if (func_274(&uLocal_1172))
							{
								func_141(&uLocal_1172);
							}
						}
					}
				}
				else if (!MISC::IS_BIT_SET(iLocal_288, 4))
				{
					if (func_173(&uVar1))
					{
						func_170(Local_158.f_6);
						func_169();
					}
				}
				if (MISC::IS_BIT_SET(iLocal_288, 18) && Local_158.f_24 == 1)
				{
					iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_1176));
					if (iVar0 > 60000)
					{
						Local_158 = 4;
					}
				}
				if (!MISC::IS_BIT_SET(Local_158.f_2, 0))
				{
					if (func_270())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1212, Local_158.f_6, 20f, 20f, 20f, false, true, 0))
						{
							if (func_156())
							{
								func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
								func_269(&uLocal_1003, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
							}
							else
							{
								func_12(1);
								func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_1003, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
							}
							MISC::SET_BIT(&(Local_158.f_2), 0);
						}
					}
				}
				break;
			case 2:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0)
				{
					Local_158.f_24 = 4;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_158.f_4), Local_158.f_10, 7.5f, 7.5f, 9999.9f, false, true, 0))
				{
					HUD::_DELETE_WAYPOINT();
					Local_158.f_24 = 3;
					bLocal_190 = true;
					func_141(&uLocal_1188);
					func_141(&uLocal_1186);
					MISC::CLEAR_BIT(&(Local_158.f_1), 14);
				}
				else if (!HUD::IS_WAYPOINT_ACTIVE() || func_168(0))
				{
					if (!MISC::IS_BIT_SET(Local_158.f_2, 4) && func_270())
					{
						if (func_156())
						{
							func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
							func_269(&uLocal_1003, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
						}
						else
						{
							func_12(1);
							func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
							func_100(&uLocal_1003, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
						}
						MISC::SET_BIT(&(Local_158.f_2), 4);
					}
					MISC::CLEAR_BIT(&(Local_158.f_1), 9);
					MISC::SET_BIT(&(Local_158.f_1), 12);
					Local_158.f_24 = 4;
				}
				if (!MISC::IS_BIT_SET(Local_158.f_2, 6) && func_270())
				{
					if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_158.f_4), Local_158.f_10, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), false, true, 0))
					{
						if (func_156())
						{
							func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
							func_269(&uLocal_1003, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
						}
						MISC::SET_BIT(&(Local_158.f_2), 6);
					}
				}
				func_164();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
				{
					if (func_118(&uLocal_1183, iLocal_1185, 0))
					{
						if (func_270())
						{
							if (func_156())
							{
								func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
								func_269(&uLocal_1003, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
							}
							else
							{
								func_12(1);
								func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_1003, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
							}
							iLocal_1185 = MISC::GET_RANDOM_INT_IN_RANGE(15000, 30000);
							func_141(&uLocal_1183);
						}
					}
				}
				break;
			case 5:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0 || !func_152(PLAYER::GET_PLAYER_PED(Local_158.f_5), iLocal_1212, 0))
				{
					Local_158.f_24 = 8;
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_158.f_1, 15))
					{
						MISC::SET_BIT(&(Local_158.f_1), 15);
					}
					Jump @3346; //curOff = 1695
					if (iLocal_998 != 3)
					{
						iLocal_998 = 3;
					}
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0 && !VEHICLE::_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(iLocal_1212))
					{
						if (!MISC::IS_BIT_SET(Local_158.f_2, 9))
						{
							if (func_270())
							{
								if (VEHICLE::_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(iLocal_1212))
								{
									if (func_156())
									{
										func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
										func_269(&uLocal_1003, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
									}
									else
									{
										func_12(1);
										func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
										func_100(&uLocal_1003, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
									}
									MISC::SET_BIT(&(Local_158.f_2), 9);
								}
							}
						}
						Local_158.f_24 = 8;
					}
					else if (!HUD::IS_WAYPOINT_ACTIVE() || func_168(0))
					{
						MISC::CLEAR_BIT(&(Local_158.f_1), 9);
						MISC::SET_BIT(&(Local_158.f_1), 12);
						Local_158.f_24 = 4;
					}
					if (!MISC::IS_BIT_SET(Local_158.f_2, 8))
					{
						if (VEHICLE::_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(iLocal_1212))
						{
							if (func_270())
							{
								if (func_156())
								{
									func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_158.f_2), 8);
							}
						}
					}
					Jump @3346; //curOff = 2069
					if (bLocal_190)
					{
						if (func_270())
						{
							if (!MISC::IS_BIT_SET(Local_158.f_2, 5))
							{
								if (func_156())
								{
									func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_158.f_2), 5);
							}
							else if (!func_156())
							{
								if (!MISC::IS_BIT_SET(Local_158.f_2, 21))
								{
									if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) > 10f)
									{
										func_12(1);
										func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
										func_100(&uLocal_1003, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
									}
									MISC::SET_BIT(&(Local_158.f_2), 21);
								}
							}
						}
					}
					if (MISC::IS_BIT_SET(Local_158.f_1, 12))
					{
						if (!VEHICLE::_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(iLocal_1212))
						{
							if (HUD::IS_WAYPOINT_ACTIVE())
							{
								if (!MISC::IS_BIT_SET(Local_158.f_2, 2))
								{
									if (func_270())
									{
										if (func_156())
										{
											func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
											func_269(&uLocal_1003, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
										}
										else
										{
											func_12(1);
											func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
											func_100(&uLocal_1003, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
										}
										MISC::SET_BIT(&(Local_158.f_2), 2);
									}
								}
								func_267();
								if (!func_163(Local_158.f_10, Local_158.f_13, 0))
								{
									Local_158.f_13 = { Local_158.f_10 };
									Local_158.f_24 = 2;
								}
							}
							else if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0)
							{
								Local_158.f_24 = 8;
							}
						}
					}
					else if (MISC::IS_BIT_SET(Local_158.f_1, 9))
					{
						if (!MISC::IS_BIT_SET(Local_158.f_2, 2))
						{
							if (func_270())
							{
								if (func_156())
								{
									func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_158.f_2), 2);
							}
						}
						func_267();
						if (!func_163(Local_158.f_10, Local_158.f_13, 0))
						{
							Local_158.f_13 = { Local_158.f_10 };
							MISC::SET_BIT(&(Local_158.f_1), 13);
							Local_158.f_24 = 2;
						}
					}
					else if (MISC::IS_BIT_SET(Local_158.f_1, 13))
					{
						if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0)
						{
							Local_158.f_24 = 8;
						}
					}
					func_164();
					if (func_270())
					{
						if (!MISC::IS_BIT_SET(Local_158.f_2, 1))
						{
							if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) > 0)
							{
								if (func_274(&uLocal_1179))
								{
									func_141(&uLocal_1179);
								}
								if (func_156())
								{
									func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_158.f_2), 1);
							}
						}
						else if (!MISC::IS_BIT_SET(Local_158.f_2, 2))
						{
							if (!MISC::IS_BIT_SET(Local_158.f_2, 3) && !MISC::IS_BIT_SET(Local_158.f_1, 12))
							{
								if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0)
								{
									if (func_156())
									{
										func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
										func_269(&uLocal_1003, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
									}
									MISC::SET_BIT(&(Local_158.f_2), 3);
								}
							}
						}
						else if (!MISC::IS_BIT_SET(Local_158.f_2, 16))
						{
							if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0)
							{
								if (func_156())
								{
									func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_158.f_2), 16);
							}
						}
					}
					if (Local_158.f_24 == 4)
					{
						if (!MISC::IS_BIT_SET(Local_158.f_1, 14))
						{
							if (!bLocal_190)
							{
								if (func_118(&uLocal_1177, 120000, 0))
								{
									MISC::SET_BIT(&(Local_158.f_1), 14);
								}
							}
							else if (func_118(&uLocal_1186, 20000, 0))
							{
								MISC::SET_BIT(&(Local_158.f_1), 14);
							}
						}
						else if (!bLocal_190)
						{
							if (func_118(&uLocal_1179, 60000, 0))
							{
								Local_158.f_24 = 7;
							}
						}
						else if (func_118(&uLocal_1188, 30000, 0))
						{
							Local_158.f_24 = 7;
						}
					}
					Jump @3346; //curOff = 3301
					if (func_118(&uLocal_1181, 4000, 0))
					{
						Local_158.f_24 = 8;
						if (func_162())
						{
							func_161();
						}
					}
					Jump @3346; //curOff = 3335
					func_160(0);
				}
				func_159();
				if (!MISC::IS_BIT_SET(Local_158.f_2, 10))
				{
					if (func_270())
					{
						if (func_143(PLAYER::PLAYER_ID(), 1, 1))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1212, PLAYER::PLAYER_PED_ID(), true))
							{
								if (func_156())
								{
									func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
								}
								else
								{
									func_12(1);
									func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
								}
								MISC::SET_BIT(&(Local_158.f_2), 10);
							}
						}
					}
				}
				if (!func_156())
				{
					if (!MISC::IS_BIT_SET(Local_158.f_2, 26))
					{
						if (func_270())
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_158.f_4)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_158.f_4)))
							{
								func_12(1);
								func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_1003, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
								MISC::SET_BIT(&(Local_158.f_2), 26);
							}
						}
					}
					else if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_158.f_4)) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_158.f_4)))
					{
						MISC::CLEAR_BIT(&(Local_158.f_2), 26);
					}
				}
		}
	}

void func_159()
{
	if (!bLocal_1199)
	{
		if (Local_158.f_24 == 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_158.f_3))
				{
					VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_1212, 1f);
					bLocal_1199 = true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_158.f_3);
				}
			}
		}
	}
}

void func_160(bool bParam0)
{
	bLocal_1194 = bParam0;
}

void func_161()
{
	Global_74033 = 1;
}

bool func_162()
{
	return Global_74030;
}

bool func_163(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_164()
{
	if (!func_156())
	{
		if (!MISC::IS_BIT_SET(Local_158.f_2, 18))
		{
			if (func_270())
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) > 0)
				{
					func_12(1);
					func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
					func_100(&uLocal_1003, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
					MISC::SET_BIT(&(Local_158.f_2), 18);
				}
			}
		}
		else
		{
			if (func_270())
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) > 0)
				{
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) < iLocal_1002 && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) > 10f)
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_1003, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
					}
					else if (!MISC::IS_BIT_SET(Local_158.f_2, 22) && bLocal_1196)
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_1003, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
						MISC::SET_BIT(&(Local_158.f_2), 22);
						MISC::CLEAR_BIT(&(Local_158.f_2), 23);
					}
					if (!VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) == iLocal_1002)
					{
						iLocal_1002 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_158.f_2, 23))
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) > 10f)
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_1003, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
						MISC::SET_BIT(&(Local_158.f_2), 23);
						MISC::CLEAR_BIT(&(Local_158.f_2), 22);
					}
					else
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_1003, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
						MISC::SET_BIT(&(Local_158.f_2), 23);
						MISC::CLEAR_BIT(&(Local_158.f_2), 22);
					}
				}
			}
			if (!bLocal_1196)
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) == 0)
				{
					bLocal_1196 = true;
				}
			}
		}
		if (func_270())
		{
			if (!MISC::IS_BIT_SET(Local_158.f_2, 20))
			{
				if (!func_149(iLocal_1212))
				{
					if (VEHICLE::_0x6EAAEFC76ACC311F(iLocal_1212) == 2)
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_1003, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
						MISC::SET_BIT(&(Local_158.f_2), 20);
					}
				}
			}
			else if (!func_149(iLocal_1212))
			{
				if (VEHICLE::_0x6EAAEFC76ACC311F(iLocal_1212) != 2)
				{
					MISC::CLEAR_BIT(&(Local_158.f_2), 20);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_158.f_2, 24))
		{
			if (func_270())
			{
				if (func_165(PLAYER::PLAYER_PED_ID()) >= 5)
				{
					func_12(1);
					func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
					func_100(&uLocal_1003, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
					MISC::SET_BIT(&(Local_158.f_2), 24);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_158.f_2, 25))
		{
			if (func_270())
			{
				if (!func_149(iLocal_1212))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1212, 2, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1212, 1, false))
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						func_100(&uLocal_1003, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
						MISC::SET_BIT(&(Local_158.f_2), 25);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_158.f_2, 19))
		{
			if (func_270())
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					func_12(1);
					func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
					func_100(&uLocal_1003, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
					MISC::SET_BIT(&(Local_158.f_2), 19);
				}
			}
		}
	}
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_166(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_3;
}

int func_166(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_167(int iParam0)
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
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_168(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2540384.f_282, iParam0);
}

void func_169()
{
	if (!func_148(Local_158.f_4))
	{
		TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_158.f_4));
	}
}

void func_170(vector3 vParam0)
{
	Local_158.f_17 = { func_171(vParam0) };
}

Vector3 func_171(vector3 vParam0)
{
	vector3 vVar0;

	switch (func_172(vParam0))
	{
		case 0:
			vVar0 = { -vParam0.x, -5000f, vParam0.z };
			break;
		case 1:
			vVar0 = { -5000f, -vParam0.y, vParam0.z };
			break;
		case 2:
			vVar0 = { -vParam0.x, 8000f, vParam0.z };
			break;
		case 3:
			vVar0 = { 5000f, -vParam0.y, vParam0.z };
			break;
	}
	return vVar0;
}

int func_172(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 >= 0f && Param0 >= 0f)
	{
		return 0;
	}
	else if (Param0.f_1 < 0f && Param0 >= 0f)
	{
		return 1;
	}
	else if (Param0.f_1 < 0f && Param0 < 0f)
	{
		return 2;
	}
	else if (Param0.f_1 >= 0f && Param0 < 0f)
	{
		return 3;
	}
	return -1;
}

bool func_173(bool bParam0)
{
	var uVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	vector3 vVar9;

	*bParam0 = 0;
	if (!MISC::IS_BIT_SET(iLocal_288, 4) && func_143(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 978.076f, 92.7732f, 128.175f, 912.625f, -9.85f, 108.025f, 92.775f, false, true, 0))
		{
			Local_158.f_6 = { 965.8965f, 42.327f, 122.1267f };
			MISC::SET_BIT(&iLocal_288, 4);
			*bParam0 = 1;
		}
		else if (func_262(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(iLocal_288, 18))
		{
			Local_158.f_6 = { func_256(func_258(func_259(PLAYER::PLAYER_ID()))) };
			MISC::SET_BIT(&iLocal_288, 4);
			*bParam0 = 1;
		}
		else if (func_180(150f, &iVar4, &iVar5) && !MISC::IS_BIT_SET(iLocal_288, 18))
		{
			func_179(iVar4, iVar5, &(Local_158.f_6), &(Local_158.f_9));
			*bParam0 = 1;
			MISC::SET_BIT(&iLocal_288, 4);
		}
		else if ((func_341() && func_175(600f)) && !MISC::IS_BIT_SET(iLocal_288, 18))
		{
			Local_158.f_6 = { vLocal_1204[0 /*3*/] };
			Local_158.f_9 = uLocal_1208[0];
			*bParam0 = 1;
			MISC::SET_BIT(&iLocal_288, 4);
		}
		else if (iLocal_999 == 0)
		{
			if (iLocal_1001 == 0)
			{
				Local_158.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (15f / 2f), 1.3f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Local_158.f_6, &(Local_158.f_6.f_2), false, false);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1001 == 1)
			{
				Local_158.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (15f / 2f), 0f, 1.3f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Local_158.f_6, &(Local_158.f_6.f_2), false, false);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1001 == 2)
			{
				Local_158.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (-15f / 2f), 0f, 1.3f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Local_158.f_6, &(Local_158.f_6.f_2), false, false);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1001 == 3)
			{
				Local_158.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (-15f / 2f), 1.3f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Local_158.f_6, &(Local_158.f_6.f_2), false, false);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1001 == 4)
			{
				PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &(Local_158.f_6), 1, 3f, 0f);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_158.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_158 = 4;
				}
			}
			else if (iLocal_1001 == 5)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, &(Local_158.f_6), 1, 3f, 0f);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_158.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_158 = 4;
				}
			}
			else if (iLocal_1001 == 6)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 6, &(Local_158.f_6), 1, 3f, 0f);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_158.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_158 = 4;
				}
			}
			else if (iLocal_1001 == 7)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10, &(Local_158.f_6), 1, 3f, 0f);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_158.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_158 = 4;
				}
			}
			else if (iLocal_1001 == 8)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15, &(Local_158.f_6), 1, 3f, 0f);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_158.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_158 = 4;
				}
			}
			else if (iLocal_1001 == 9)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20, &(Local_158.f_6), 1, 3f, 0f);
				Local_158.f_6.f_2 = (Local_158.f_6.f_2 + 1.3f);
			}
			else if (func_175(100f) && !MISC::IS_BIT_SET(iLocal_288, 18))
			{
				Local_158.f_6 = { vLocal_1204[0 /*3*/] };
				Local_158.f_9 = uLocal_1208[0];
				*bParam0 = 1;
				MISC::SET_BIT(&iLocal_288, 4);
				return true;
			}
			else
			{
				Local_158 = 4;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_158.f_6, 75f, 75f, 5f, false, true, 0) || WATER::TEST_PROBE_AGAINST_WATER(Local_158.f_6 + Vector(2f, 0f, 0f), Local_158.f_6 - Vector(5f, 0f, 0f), &uVar6))
			{
				iLocal_999 = 0;
				iLocal_1000 = 0;
				iLocal_1001++;
				return false;
			}
			vVar9 = { Local_158.f_6 + Vector((50f / 2f), 0f, 0f) };
			iLocal_999 = SHAPETEST::START_SHAPE_TEST_BOX(vVar9, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, PLAYER::PLAYER_PED_ID(), 4);
			if (iLocal_999 == 0)
			{
				return false;
			}
		}
		else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_999, &iLocal_1000, &uVar0, &uVar0, &uVar3) == 2)
		{
			iLocal_999 = 0;
			if (iLocal_1000 == 0 && !func_174(Local_158.f_6, 3, 0, 0))
			{
				MISC::SET_BIT(&iLocal_288, 4);
			}
			else
			{
				iLocal_1000 = 0;
				iLocal_1001++;
			}
		}
		else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_999, &iLocal_1000, &uVar0, &uVar0, &uVar3) == 0)
		{
			iLocal_999 = 0;
		}
	}
	return MISC::IS_BIT_SET(iLocal_288, 4);
}

int func_174(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;

	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_175(float fParam0)
{
	int iVar0;

	func_176(func_178(PLAYER::PLAYER_ID()), &vLocal_1204, &uLocal_1208, &uLocal_1210);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uLocal_1210[iVar0] < fParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_176(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[1];
	var uVar6[1];
	float fVar8[1];
	int iVar10;

	if (SYSTEM::VDIST(vLocal_1201, vParam0) < 20f)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		fVar8[iVar0] = 1E+07f;
		iVar0++;
	}
	iVar10 = 0;
	while (iVar10 < 299)
	{
		fVar1 = SYSTEM::VDIST(vParam0, Global_2412649[iVar10 /*3*/]);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (fVar1 < fVar8[iVar0])
			{
				func_177(Global_2412649[iVar10 /*3*/], Global_2413547[iVar10], fVar1, iVar0, &vVar2, &uVar6, &fVar8);
				iVar0 = 2;
			}
			iVar0++;
		}
		iVar10++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SYSTEM::VMAG(vVar2[iVar0 /*3*/]) > 0f)
		{
			*(uParam3[iVar0 /*3*/]) = { vVar2[iVar0 /*3*/] };
			(*uParam4)[iVar0] = uVar6[iVar0];
			(*uParam5)[iVar0] = fVar8[iVar0];
		}
		iVar0++;
	}
	vLocal_1201 = { vParam0 };
}

void func_177(vector3 vParam0, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	var uVar3;
	float fVar4;

	if (iParam5 < *fParam6)
	{
		vVar0 = { *(fParam6[iParam5 /*3*/]) };
		uVar3 = (*iParam7)[iParam5];
		fVar4 = (*fParam8)[iParam5];
		*(fParam6[iParam5 /*3*/]) = { vParam0 };
		(*iParam7)[iParam5] = iParam3;
		(*fParam8)[iParam5] = fParam4;
		func_177(vVar0, uVar3, fVar4, iParam5 + 1, fParam6, iParam7, fParam8);
	}
}

Vector3 func_178(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_179(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 87:
					*uParam2 = { -1691.356f, -599.7728f, 32.3863f };
					*uParam3 = 142.5853f;
					break;
				case 88:
					*uParam2 = { -1370.252f, -520.0326f, 29.6825f };
					*uParam3 = 125.7171f;
					break;
				case 89:
					*uParam2 = { -23.9063f, -566.7811f, 36.7451f };
					*uParam3 = 261.5803f;
					break;
				case 90:
					*uParam2 = { -8.8891f, -801.2603f, 43.4313f };
					*uParam3 = 337.4736f;
					break;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 62.9658f, -2526.362f, 5.0021f };
					*uParam3 = 312.1262f;
					break;
				case 2:
					*uParam2 = { -1011.097f, -1324.951f, 4.7239f };
					*uParam3 = 82.0646f;
					break;
				case 3:
					*uParam2 = { 891.2814f, -1038.218f, 38.9808f };
					*uParam3 = 179.4713f;
					break;
				case 4:
					*uParam2 = { 238.2009f, -1979.512f, 19.9838f };
					*uParam3 = 229.0376f;
					break;
				case 5:
					*uParam2 = { -445.2993f, 159.6719f, 77.0803f };
					*uParam3 = 177.4463f;
					break;
				case 6:
					*uParam2 = { -1003.048f, -2074.005f, 11.4279f };
					*uParam3 = 312.3971f;
					break;
				case 7:
					*uParam2 = { -1302.906f, -790.8793f, 16.5494f };
					*uParam3 = 218.4739f;
					break;
				case 8:
					*uParam2 = { -839.7902f, -2694.595f, 12.8121f };
					*uParam3 = 262.2745f;
					break;
				case 9:
					*uParam2 = { 242.0532f, -2957.304f, 4.8795f };
					*uParam3 = 206.7359f;
					break;
				case 10:
					*uParam2 = { 1519.096f, -2198.799f, 76.0507f };
					*uParam3 = 276.3806f;
					break;
				case 11:
					*uParam2 = { -293.2805f, -2718.856f, 5.0003f };
					*uParam3 = 314.7322f;
					break;
				case 12:
					*uParam2 = { 517.1236f, -596.8082f, 23.7995f };
					*uParam3 = 196.9468f;
					break;
				case 13:
					*uParam2 = { -488.2077f, -1801.373f, 20.2465f };
					*uParam3 = 44.8509f;
					break;
				case 14:
					*uParam2 = { -345.6657f, -1351.348f, 30.2847f };
					*uParam3 = 146.9459f;
					break;
				case 15:
					*uParam2 = { 292.9702f, 371.4247f, 104.3915f };
					*uParam3 = 75.7126f;
					break;
				case 16:
					*uParam2 = { 905.4782f, -1560.715f, 29.7175f };
					*uParam3 = 290.4099f;
					break;
				case 17:
					*uParam2 = { 711.2572f, -911.7263f, 22.7077f };
					*uParam3 = 316.5199f;
					break;
				case 18:
					*uParam2 = { 1091.211f, -2194.509f, 30.1066f };
					*uParam3 = 20.739f;
					break;
				case 19:
					*uParam2 = { 989.2725f, -2531.751f, 27.302f };
					*uParam3 = 319.7745f;
					break;
				case 20:
					*uParam2 = { -245.9971f, 108.1838f, 68.557f };
					*uParam3 = 28.2604f;
					break;
				case 21:
					*uParam2 = { 562.0646f, -1949.79f, 23.9592f };
					*uParam3 = 6.5821f;
					break;
				case 22:
					*uParam2 = { 76.4564f, -2200.17f, 0.6006f };
					*uParam3 = 183.6653f;
					break;
				default:
					break;
			}
			break;
	}
}

int func_180(float fParam0, int iParam1, int iParam2)
{
	float fVar0;

	if (func_341())
	{
		func_181(iParam1, &fVar0, iParam2);
		if (*iParam1 > -1)
		{
			if (fVar0 < fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_181(int iParam0, float fParam1, int iParam2)
{
	int iVar0[2];
	var uVar3[2];
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;

	func_250(&(iVar0[0]), &(uVar3[0]));
	func_182(&(iVar0[1]), &(uVar3[1]));
	iVar6 = -1;
	fVar7 = 999999.9f;
	iVar8 = -1;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		if (uVar3[iVar9] < fVar7)
		{
			fVar7 = uVar3[iVar9];
			iVar6 = iVar0[iVar9];
			iVar8 = iVar9;
		}
		iVar9++;
	}
	*iParam0 = iVar6;
	*fParam1 = fVar7;
	*iParam2 = iVar8;
}

void func_182(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;

	iVar0 = -1;
	fVar1 = 1E+07f;
	vVar2 = { func_186(PLAYER::PLAYER_ID()) };
	vVar2.f_2 = 0f;
	iVar9 = 0;
	while (iVar9 < 23)
	{
		if (iVar9 > 0)
		{
			if (func_185(iVar9))
			{
				vVar5 = { func_183(iVar9) };
				vVar5.f_2 = 0f;
				fVar8 = SYSTEM::VDIST(vVar2, vVar5);
				if (fVar8 < fVar1)
				{
					fVar1 = fVar8;
					iVar0 = iVar9;
				}
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

Vector3 func_183(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	if (!func_184(iParam0))
	{
		return vVar0;
	}
	switch (iParam0)
	{
		case 1:
			vVar0 = { 50.9205f, -2560.01f, 6f };
			break;
		case 2:
			vVar0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		case 3:
			vVar0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		case 4:
			vVar0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		case 5:
			vVar0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		case 6:
			vVar0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		case 7:
			vVar0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		case 8:
			vVar0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		case 9:
			vVar0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		case 10:
			vVar0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		case 11:
			vVar0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		case 12:
			vVar0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		case 13:
			vVar0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		case 14:
			vVar0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		case 15:
			vVar0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		case 16:
			vVar0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		case 17:
			vVar0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		case 18:
			vVar0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		case 19:
			vVar0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		case 20:
			vVar0 = { -263.138f, 194.3424f, 85.184f };
			break;
		case 21:
			vVar0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		case 22:
			vVar0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return vVar0;
}

int func_184(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_185(int iParam0)
{
	int iVar0;

	if (func_184(iParam0))
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

Vector3 func_186(int iParam0)
{
	vector3 vVar0;

	if (HUD::DOES_BLIP_EXIST(Global_2416085[iParam0]))
	{
		vVar0 = { func_249(Global_2416085[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2416085.f_33[iParam0]) && !iParam0 == Global_2440049)
	{
		vVar0 = { func_249(Global_2416085.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		return vVar0;
	}
	return func_187(iParam0);
}

Vector3 func_187(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		vVar1 = { func_248(func_258(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28)) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	else
	{
		func_246(func_178(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			vVar1 = { func_248(func_258(iVar0)) };
			if (SYSTEM::VMAG(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_245(iParam0))
	{
		vVar1 = { func_192(iParam0) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (func_191(iParam0))
	{
		iVar4 = func_190(iParam0);
		if (iVar4 > -1)
		{
			vVar1 = { Global_1678288.f_496[iVar4 /*3*/] };
			if (SYSTEM::VMAG(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_189(iParam0))
	{
		vVar1 = { func_188(iParam0) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (Global_2425869[iParam0 /*443*/].f_71.f_11)
	{
		if (SYSTEM::VMAG(Global_2425869[iParam0 /*443*/].f_71.f_12) > 0f)
		{
			return Global_2425869[iParam0 /*443*/].f_71.f_12;
		}
	}
	return func_178(iParam0);
}

Vector3 func_188(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_71.f_7;
}

int func_189(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_71.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_14;
	}
	return -1;
}

int func_191(int iParam0)
{
	bool bVar0;

	if (iParam0 != func_5() && (func_143(iParam0, 1, 1) || Global_2405074.f_2673))
	{
		bVar0 = MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314, 1);
		return bVar0;
	}
	return 0;
}

Vector3 func_192(int iParam0)
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

	if (iParam0 == func_5())
	{
	}
	if (func_244(iParam0))
	{
		iVar0 = func_243(iParam0);
		if (iVar0 != func_5())
		{
			if (!func_242(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2440049.f_673[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2440049.f_673[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2425869[func_243(iParam0) /*443*/].f_314.f_10;
				}
			}
			else
			{
				iVar1 = func_238(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1678288.f_496[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_237(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2540384.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2540384.f_307, false);
		}
	}
	else if (func_236(iParam0) && !func_235(iParam0))
	{
		iVar2 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar2 != func_5())
		{
			iVar3 = func_238(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1678288.f_496[iVar3 /*3*/];
			}
		}
	}
	else if (func_234(iParam0) && !func_233(iParam0))
	{
		if (func_245(iParam0) && func_232())
		{
			return Global_1678288.f_496[Global_2425869[iParam0 /*443*/].f_314.f_6 /*3*/];
		}
		iVar4 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar4 != func_5())
		{
			if (func_231(iVar4))
			{
				iVar5 = func_227(iVar4);
				if (iVar5 != -1)
				{
					return Global_1678288.f_496[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_226(iParam0))
	{
		iVar6 = func_225(iParam0);
		if (iVar6 != func_5())
		{
			if (!func_224(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2440049.f_770[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2440049.f_770[iVar6], false);
				}
				else
				{
					return Global_2425869[func_225(iParam0) /*443*/].f_314.f_17;
				}
			}
			else
			{
				iVar7 = func_227(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1678288.f_496[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_223(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2540384.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2540384.f_309, false);
		}
	}
	else if (func_222(iParam0) && !func_221(iParam0))
	{
		iVar8 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar8 != func_5())
		{
			if (func_220(iVar8))
			{
				iVar9 = func_216(iVar8);
				if (iVar9 != -1)
				{
					return func_215(iVar9);
				}
			}
		}
	}
	else if (func_214(iParam0) && !func_213(iParam0))
	{
		iVar10 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar10 != func_5())
		{
			if (func_212(iVar10))
			{
				iVar11 = func_208(iVar10);
				if (iVar11 != -1)
				{
					return Global_1678288.f_496[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_207(iParam0, 0))
	{
		iVar12 = func_206(iParam0);
		if (iVar12 != func_5())
		{
			if (!func_205(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2440049.f_803[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2440049.f_803[iVar12], false);
				}
				else
				{
					return Global_1630317[func_206(iParam0) /*595*/].f_580;
				}
			}
			else
			{
				iVar13 = func_208(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1678288.f_496[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_204(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_203(iParam0))
	{
		iVar14 = func_199(iParam0);
		if (iVar14 != func_5())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2440049.f_836[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2440049.f_836[iVar14], false);
			}
			else
			{
				return Global_1649358[iVar14 /*93*/].f_50;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_222(iParam0))
	{
		return func_215(Global_2425869[iParam0 /*443*/].f_314.f_6);
	}
	if (func_193(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1678288.f_496[Global_2425869[iParam0 /*443*/].f_314.f_6 /*3*/];
}

int func_193(int iParam0)
{
	if (((func_198(iParam0) || func_197(iParam0)) || func_196(iParam0)) || func_194(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
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

int func_196(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;

	if (iParam0 == func_5())
	{
		return iParam0;
	}
	if (func_202(iParam0) != -1)
	{
		iVar0 = func_195(func_202(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_200(iParam0, 0))
			{
				return func_6(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_5();
		}
		return Global_2425869[iParam0 /*443*/].f_314.f_9;
	}
	return func_5();
}

bool func_200(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_201(iParam0))
		{
			return false;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_5();
}

int func_201(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
		else if (((Global_1312896 || Global_2405074.f_2673) && iParam0 == PLAYER::PLAYER_ID()) && func_143(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
	}
	return -1;
}

int func_203(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
		else if (((Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_1312896) && iParam0 == PLAYER::PLAYER_ID()) && func_143(iParam0, 1, 0))
		{
			return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	if (iParam0 != func_5())
	{
		return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314.f_3, 4);
	}
	return 0;
}

int func_206(int iParam0)
{
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_207(int iParam0, bool bParam1)
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
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_5())
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;

	if (iParam0 != func_5())
	{
		iVar0 = func_211(iParam0);
		if (iVar0 != 0)
		{
			return func_209(iVar0);
		}
	}
	return -1;
}

int func_209(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_195(iVar0) == 11)
		{
			if (func_210(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		case 103:
			return 2;
		case 104:
			return 3;
		case 105:
			return 4;
		case 106:
			return 5;
		case 107:
			return 6;
		case 108:
			return 7;
		case 109:
			return 8;
		case 110:
			return 9;
		case 111:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_211(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_281;
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_214(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_215(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		case 103:
			return 331.9f, -974.9f, 30f;
		case 104:
			return -146f, -1270f, 28.3088f;
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		case 107:
			return -668f, -2431.5f, 12.9444f;
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		case 109:
			return 366.6f, 237.6f, 104.9f;
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		default:
			break;
	}
	return Global_1678288.f_496[iParam0 /*3*/];
}

int func_216(int iParam0)
{
	int iVar0;

	if (iParam0 != func_5())
	{
		iVar0 = func_219(iParam0);
		if (iVar0 != 0)
		{
			return func_217(iVar0);
		}
	}
	return -1;
}

int func_217(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_195(iVar0) == 11)
		{
			if (func_218(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		case 103:
			return 2;
		case 104:
			return 3;
		case 105:
			return 4;
		case 106:
			return 5;
		case 107:
			return 6;
		case 108:
			return 7;
		case 109:
			return 8;
		case 110:
			return 9;
		case 111:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_219(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322;
	}
	return 0;
}

int func_220(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_222(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	if (iParam0 != func_5())
	{
		return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314.f_2, 6);
	}
	return 0;
}

int func_225(int iParam0)
{
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_226(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_5())
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;

	if (iParam0 == func_5())
	{
		return -1;
	}
	iVar0 = func_230(iParam0);
	if (!iVar0 == 0)
	{
		return func_228(iVar0);
	}
	return -1;
}

int func_228(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_195(iVar0) == 9)
		{
			if (func_229(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 3;
		case 92:
			return 4;
		case 93:
			return 5;
		case 94:
			return 6;
		case 95:
			return 7;
		case 96:
			return 8;
		case 97:
			return 9;
	}
	return 0;
}

int func_230(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_271;
}

int func_231(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

int func_232()
{
	if (MISC::IS_BIT_SET(Global_1678288.f_2, 13) || Global_1678288.f_3057)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_234(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_236(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	int iVar0;

	if (iParam0 == func_5())
	{
		return -1;
	}
	iVar0 = func_241(iParam0);
	if (!iVar0 == 0)
	{
		return func_239(iVar0);
	}
	return -1;
}

int func_239(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_240(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
		case 23:
			return 2;
		case 24:
			return 3;
		case 25:
			return 4;
		case 26:
			return 5;
		case 27:
			return 6;
		case 28:
			return 7;
		case 29:
			return 8;
		case 30:
			return 9;
		case 31:
			return 10;
		case 32:
			return 11;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 14;
		case 36:
			return 15;
		case 37:
			return 16;
		case 38:
			return 17;
		case 39:
			return 18;
		case 40:
			return 19;
		case 41:
			return 20;
		case 70:
			return 21;
		case 71:
			return 22;
		case 72:
			return 23;
		case 73:
			return 24;
		case 74:
			return 25;
		case 75:
			return 26;
		case 76:
			return 27;
		case 77:
			return 28;
		case 78:
			return 29;
		case 79:
			return 30;
		case 80:
			return 31;
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

int func_242(int iParam0)
{
	if (iParam0 != func_5())
	{
		return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

int func_243(int iParam0)
{
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_244(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_5())
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_245(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == PLAYER::PLAYER_ID()) && func_143(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

void func_246(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_247(vParam0, iVar0, 0))
		{
			*iParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_247(vParam0, iVar0, 0))
		{
			*iParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_247(vParam0, iVar0, 0))
		{
			*iParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_247(vParam0, iVar0, 0))
	{
		if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28 > 0)
		{
			*iParam3 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28;
		}
		else if (Global_2404660.f_1 > 0)
		{
			*iParam3 = Global_2404660.f_1;
		}
		else
		{
			*iParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_247(vParam0, iVar0, 0))
	{
		if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28 > 0)
		{
			*iParam3 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28;
		}
		else if (Global_2404660.f_1 > 0)
		{
			*iParam3 = Global_2404660.f_1;
		}
		else
		{
			*iParam3 = iVar0;
		}
		return;
	}
}

int func_247(vector3 vParam0, int iParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar11[3];
	int iVar21;

	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049924[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049924[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				vVar1[iVar21 /*3*/] = { Global_1049924[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				vVar11[iVar21 /*3*/] = { Global_1049924[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				vVar1[iVar21 /*3*/] = { Global_1049924[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				vVar11[iVar21 /*3*/] = { Global_1049924[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			vVar1[iVar21 /*3*/].f_2 = (vVar1[iVar21 /*3*/].f_2 + fParam4);
			vVar11[iVar21 /*3*/].f_2 = (vVar11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1049924[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[0 /*3*/], vVar1[0 /*3*/], Global_1049924[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1049924[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[1 /*3*/], vVar1[1 /*3*/], Global_1049924[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1049924[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[2 /*3*/], vVar1[2 /*3*/], Global_1049924[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_247(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_247(vParam0, 8, fParam4))
		{
			return 1;
		}
		if (func_247(vParam0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_248(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		case 2:
			vVar0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		case 3:
			vVar0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		case 4:
			vVar0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		case 5:
			vVar0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		case 6:
			vVar0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		case 7:
			vVar0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		case 8:
			vVar0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		case 9:
			vVar0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		case 10:
			vVar0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		case 11:
			vVar0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		case 12:
			vVar0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		case 13:
			vVar0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		case 14:
			vVar0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		case 15:
			vVar0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		case 16:
			vVar0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		case 17:
			vVar0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		case 18:
			vVar0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		case 19:
			vVar0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		case 20:
			vVar0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		case 21:
			vVar0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		case 22:
			vVar0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		case 23:
			vVar0 = { -1608.851f, -429.184f, 39.439f };
			break;
		case 24:
			vVar0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		case 25:
			vVar0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		case 26:
			vVar0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		case 27:
			vVar0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		case 28:
			vVar0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		case 29:
			vVar0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		case 30:
			vVar0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		case 31:
			vVar0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		case 32:
			vVar0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		case 33:
			vVar0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		case 34:
			vVar0 = { -68.702f, 6426.148f, 30.439f };
			break;
		case 35:
			vVar0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		case 36:
			vVar0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		case 37:
			vVar0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		case 38:
			vVar0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		case 39:
			vVar0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		case 40:
			vVar0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		case 41:
			vVar0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		case 42:
			vVar0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		case 43:
			vVar0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		case 44:
			vVar0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		case 45:
			vVar0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		case 46:
			vVar0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		case 47:
			vVar0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		case 48:
			vVar0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		case 49:
			vVar0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		case 50:
			vVar0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		case 51:
			vVar0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		case 52:
			vVar0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		case 53:
			vVar0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		case 54:
			vVar0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		case 55:
			vVar0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		case 56:
			vVar0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		case 57:
			vVar0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		case 58:
			vVar0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		case 59:
			vVar0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		case 60:
			vVar0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		case 61:
			vVar0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		case 62:
			vVar0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		case 63:
			vVar0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		case 64:
			vVar0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		case 65:
			vVar0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		case 66:
			vVar0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		case 67:
			vVar0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		case 68:
			vVar0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		case 69:
			vVar0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		case 70:
			vVar0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		case 71:
			vVar0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		case 72:
			vVar0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		case 73:
			vVar0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		case 74:
			vVar0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		case 75:
			vVar0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		case 76:
			vVar0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		case 77:
			vVar0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		case 78:
			vVar0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		case 79:
			vVar0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		case 80:
			vVar0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		case 81:
			vVar0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		case 82:
			vVar0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		case 83:
			vVar0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return vVar0;
}

Vector3 func_249(int iParam0)
{
	int iVar0;

	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

void func_250(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;

	iVar0 = -1;
	fVar1 = 1E+07f;
	vVar2 = { func_186(PLAYER::PLAYER_ID()) };
	vVar2.f_2 = 0f;
	iVar9 = -1;
	iVar9 = 87;
	while (iVar9 <= 90)
	{
		if (func_251(iVar9))
		{
			vVar5 = { Global_1049924[iVar9 /*1951*/].f_3[0 /*3*/] };
			vVar5.f_2 = 0f;
			fVar8 = SYSTEM::VDIST(vVar2, vVar5);
			if (fVar8 < fVar1)
			{
				fVar1 = fVar8;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

int func_251(int iParam0)
{
	int iVar0;

	if (iParam0 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (func_252(iVar0, -1) == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
		if (iParam0 == func_252(99, -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_10();
	}
	if (iParam0 == 7 && !Global_262145.f_16992)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_255(iParam0);
		if (iVar1 == 0 && func_8(5394, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_254(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_220(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_253(-1) && iVar1 == 3)
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

bool func_253(int iParam0)
{
	return func_8(9513, iParam0, 0) != 0;
}

bool func_254(int iParam0)
{
	if (!Global_262145.f_23676)
	{
		return false;
	}
	return func_8(7208, iParam0, 0) != 0;
}

int func_255(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

Vector3 func_256(int iParam0)
{
	if (func_257(iParam0))
	{
		switch (iParam0)
		{
			case 68:
				return -1582.094f, -569.5358f, 115.3326f;
			case 69:
				return -1391.652f, -477.7002f, 90.25584f;
			case 70:
				return -144.5361f, -593.3737f, 210.7752f;
			case 71:
				return -75.06329f, -818.9553f, 325.1753f;
		}
	}
	return 0f, 0f, -1000f;
}

int func_257(int iParam0)
{
	if (((iParam0 == 68 || iParam0 == 69) || iParam0 == 70) || iParam0 == 71)
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
		case 5:
		case 6:
			return 2;
		case 7:
		case 34:
		case 62:
			return 3;
		case 35:
		case 36:
		case 37:
			return 4;
		case 38:
		case 39:
		case 65:
			return 5;
		case 40:
		case 41:
		case 63:
			return 6;
		case 42:
		case 43:
		case 64:
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
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
		case 27:
			return 27;
		case 28:
			return 28;
		case 29:
			return 29;
		case 30:
			return 30;
		case 31:
			return 31;
		case 32:
			return 32;
		case 33:
			return 33;
		case 44:
			return 34;
		case 45:
			return 35;
		case 46:
			return 36;
		case 47:
			return 37;
		case 48:
			return 38;
		case 49:
			return 39;
		case 50:
			return 40;
		case 51:
			return 41;
		case 52:
			return 42;
		case 53:
			return 43;
		case 54:
			return 44;
		case 55:
			return 45;
		case 56:
			return 46;
		case 57:
			return 47;
		case 58:
			return 48;
		case 59:
			return 49;
		case 60:
			return 50;
		case 66:
			return 51;
		case 67:
			return 52;
		case 68:
			return 53;
		case 69:
			return 54;
		case 70:
			return 55;
		case 71:
			return 56;
		case 72:
			return 57;
		case 73:
			return 58;
		case 74:
			return 59;
		case 75:
			return 60;
		case 76:
			return 61;
		case 77:
			return 62;
		case 78:
			return 63;
		case 79:
			return 64;
		case 80:
			return 65;
		case 81:
			return 66;
		case 82:
			return 67;
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
		case 91:
			return 72;
		case 92:
			return 73;
		case 93:
			return 74;
		case 94:
			return 75;
		case 95:
			return 76;
		case 96:
			return 77;
		case 97:
			return 78;
		case 98:
			return 79;
		case 99:
			return 80;
		case 100:
			return 81;
		case 101:
			return 82;
		case 102:
			return 83;
	}
	return 0;
}

int func_259(int iParam0)
{
	if (func_143(iParam0, 0, 1))
	{
		return func_260(func_178(iParam0));
	}
	return -1;
}

int func_260(vector3 vParam0)
{
	int iVar0;

	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (func_261(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_261(vector3 vParam0, int iParam3)
{
	switch (iParam3)
	{
		case 87:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, false, true))
			{
				return 1;
			}
			break;
		case 88:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, false, true))
			{
				return 1;
			}
			break;
		case 89:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, false, true))
			{
				return 1;
			}
			break;
		case 90:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, false, true))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;

	iVar0 = func_259(iParam0);
	if (iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_263()
{
	int iVar0;

	iVar0 = 5000;
	if (func_341())
	{
		iVar0 = 3000;
	}
	return iVar0;
}

int func_264(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
		}
	}
	return 0;
}

int func_265()
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1212, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1212, true) };
		fVar3 = (vVar0.z - Local_158.f_6.f_2);
		if (fVar3 > 2f)
		{
			return 1;
		}
	}
	return 0;
}

int func_266()
{
	int iVar0;

	if (bLocal_1174)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1212))
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_1212))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_1212))
				{
					iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_1175));
					if (iVar0 > 500)
					{
						return 0;
					}
					return 1;
				}
			}
		}
	}
	else
	{
		bLocal_1174 = true;
	}
	iLocal_1175 = NETWORK::GET_NETWORK_TIME();
	return 1;
}

void func_267()
{
	float fVar0;

	if (HUD::IS_WAYPOINT_ACTIVE())
	{
		Local_158.f_10 = { HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) };
		Local_158.f_10.f_2 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((Local_158.f_10 - 25f), (Local_158.f_10.f_1 - 25f), (Local_158.f_10 + 25f), (Local_158.f_10.f_1 + 25f));
		fVar0 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA((Local_158.f_10 - 25f), (Local_158.f_10.f_1 - 25f), (Local_158.f_10 + 25f), (Local_158.f_10.f_1 + 25f));
		if ((Local_158.f_10.f_2 - fVar0) < 20f)
		{
			Local_158.f_10.f_2 = (Local_158.f_10.f_2 + 10f);
		}
		else if ((Local_158.f_10.f_2 - fVar0) > 30f && (Local_158.f_10.f_2 - fVar0) < 70f)
		{
			Local_158.f_10.f_2 = (Local_158.f_10.f_2 + 40f);
		}
		func_268(0);
		func_170(Local_158.f_10);
	}
}

void func_268(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2540384.f_282), iParam0);
}

int func_269(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 1;
	return func_84(sParam2, iParam3, 0);
}

int func_270()
{
	vector3 vVar0;

	if (!func_273())
	{
		if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_158.f_4)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_158.f_4), false))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_158.f_4), false) };
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 50f, 50f, 150f, false, true, 0) && !func_271(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	if (func_272(Global_1590682[iParam0 /*883*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0)
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

int func_273()
{
	if (Global_21005 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_274(var uParam0)
{
	return uParam0->f_1;
}

void func_275()
{
	switch (Local_158.f_23)
	{
		case 0:
			if (MISC::IS_BIT_SET(Local_158.f_1, 8) || (!func_149(iLocal_1212) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false)))
			{
				func_278();
				Local_158.f_23 = 1;
			}
			break;
		case 1:
			if (!func_149(iLocal_1212))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) > 0)
				{
					Local_158.f_23 = 2;
				}
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(Local_158.f_1, 12))
			{
				if (HUD::IS_WAYPOINT_ACTIVE())
				{
					Local_158.f_23 = 3;
					func_119(&uLocal_1192, 0, 0);
				}
			}
			else if (MISC::IS_BIT_SET(Local_158.f_1, 9))
			{
				Local_158.f_23 = 3;
				func_119(&uLocal_1192, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Local_158.f_1, 10))
			{
				Local_158.f_23 = 5;
			}
			break;
		case 3:
			if (!func_149(iLocal_1212))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0)
				{
					Local_158.f_23 = 1;
				}
				else if (MISC::IS_BIT_SET(Local_158.f_1, 10))
				{
					Local_158.f_23 = 5;
				}
				else if (!HUD::IS_WAYPOINT_ACTIVE() || func_168(0))
				{
					Local_158.f_10 = { 0f, 0f, 0f };
					MISC::CLEAR_BIT(&(Local_158.f_1), 10);
					MISC::CLEAR_BIT(&(Local_158.f_1), 9);
					Local_158.f_23 = 2;
				}
			}
			break;
		case 4:
			if (Global_2462286.f_26)
			{
				if (func_276())
				{
					func_500(0);
				}
			}
			break;
		case 5:
			if (!func_149(iLocal_1212))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) <= 0 && !VEHICLE::_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(iLocal_1212))
				{
					if (func_143(Local_158.f_5, 1, 1) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::GET_PLAYER_PED(Local_158.f_5)))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(Local_158.f_5), -275944640) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(Local_158.f_5), -275944640) != 0)
						{
							Local_158.f_23 = 6;
						}
					}
				}
				else if (!HUD::IS_WAYPOINT_ACTIVE() || func_168(0))
				{
					Local_158.f_10 = { 0f, 0f, 0f };
					MISC::CLEAR_BIT(&(Local_158.f_1), 10);
					MISC::CLEAR_BIT(&(Local_158.f_1), 9);
					Local_158.f_23 = 2;
				}
			}
			break;
		case 6:
			break;
	}
}

int func_276()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_158.f_4))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_158.f_4);
		}
		else
		{
			func_277(&(Local_158.f_4));
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_277(var uParam0)
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

void func_278()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iVar0 = func_8(1190, -1, 0);
		if (!MISC::IS_BIT_SET(iVar0, 16))
		{
			if (!func_149(iLocal_1212) && !func_148(Local_158.f_4))
			{
				if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, false) && !PED::IS_PED_BEING_JACKED(NETWORK::NET_TO_PED(Local_158.f_4)))
				{
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("HTX_HELPN");
					if (func_280())
					{
						HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(13);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("GB_HELI_BLIP");
					}
					else
					{
						HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iLocal_290);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("HTX_HELPB");
					}
					HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
					MISC::SET_BIT(&iVar0, 16);
					func_279(1190, iVar0, -1, 1, 0);
				}
			}
		}
	}
}

void func_279(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_9(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_280()
{
	if (iLocal_1212 == Global_2540384.f_303 || iLocal_1212 == Global_2540384.f_5978)
	{
		return 1;
	}
	return 0;
}

void func_281()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	MISC::CLEAR_BIT(&(Local_158.f_1), 9);
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_143(iVar1, 1, 1))
			{
				if (!func_149(iLocal_1212))
				{
					if (!MISC::IS_BIT_SET(Local_158.f_1, 8))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1212, Local_158.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), false, true, 0) && !func_266())
						{
							MISC::SET_BIT(&(Local_158.f_1), 8);
						}
					}
					if (!MISC::IS_BIT_SET(Local_158.f_1, 10))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1212, Local_158.f_10, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), false, true, 0))
						{
							MISC::SET_BIT(&(Local_158.f_1), 10);
						}
					}
					if (!MISC::IS_BIT_SET(Local_158.f_1, 9))
					{
						if (MISC::IS_BIT_SET(vLocal_191[iVar0 /*3*/].f_1, 6))
						{
							MISC::SET_BIT(&(Local_158.f_1), 9);
							MISC::CLEAR_BIT(&(vLocal_191[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_158.f_24 != 4)
					{
						if (MISC::IS_BIT_SET(vLocal_191[iVar0 /*3*/].f_1, 5))
						{
							Local_158.f_24 = 4;
							Local_158.f_13 = { 100000f, 100000f, 100000f };
							MISC::CLEAR_BIT(&(vLocal_191[iVar0 /*3*/].f_1), 5);
						}
					}
					if (Local_158.f_24 != 5)
					{
						if (MISC::IS_BIT_SET(vLocal_191[iVar0 /*3*/].f_1, 8))
						{
							if (func_300(iVar1) && func_286(iVar1))
							{
								if (iLocal_130 == -1)
								{
									iVar2 = func_258(Global_1590682[iVar1 /*883*/].f_274[5]);
									Local_158.f_29 = { func_256(iVar2) + Vector(15f, 0f, 0f) };
								}
								else
								{
									iVar3 = iLocal_130;
									func_283(func_284(iVar3), &(Local_158.f_29));
									Local_158.f_29 = { Local_158.f_29 + Vector(40f, 0f, 0f) };
								}
								Local_158.f_24 = 5;
								Local_158.f_23 = 4;
								Local_158.f_28 = iVar1;
								func_170(Local_158.f_29);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1212, false) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1212))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1212);
							}
							else
							{
								func_282();
								Local_158.f_23 = 2;
								Local_158.f_24 = 1;
								func_169();
								MISC::CLEAR_BIT(&(Local_158.f_1), 9);
								MISC::CLEAR_BIT(&(Local_158.f_1), 10);
								MISC::CLEAR_BIT(&(Local_158.f_1), 12);
								if (HUD::IS_WAYPOINT_ACTIVE())
								{
									HUD::_DELETE_WAYPOINT();
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_282()
{
	int iVar0;

	iVar0 = iLocal_1212;
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
}

void func_283(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

int func_284(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_285(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 9:
			return 10;
		case 10:
			return 11;
		case 11:
			return 12;
		case 12:
			return 13;
		case 13:
			return 14;
		case 14:
			return 15;
		case 15:
			return 16;
		case 16:
			return 17;
		case 17:
			return 18;
		case 18:
			return 19;
		case 19:
			return 20;
		case 20:
			return 21;
		case 21:
			return 22;
	}
	return 0;
}

int func_286(int iParam0)
{
	if ((!func_294(iParam0, 1) && !func_291(iParam0)) && func_287(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 1, 1))
		{
			if (!MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_509, 6))
			{
				return 0;
			}
			if (func_291(iParam0) && !func_288(iParam0))
			{
				return 0;
			}
			if (func_153(iParam0, 21))
			{
				return 0;
			}
			if (func_153(iParam0, 25))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 4))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_288(int iParam0)
{
	if (((func_289(iParam0) == 167 || func_289(iParam0) == 168) || func_289(iParam0) == 190) || func_289(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (func_290(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_290(int iParam0, bool bParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (bParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0)
{
	if (func_293(iParam0))
	{
		return 1;
	}
	if (func_292(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

bool func_294(int iParam0, bool bParam1)
{
	if (func_299() != 0)
	{
		return func_298(iParam0) != 0;
	}
	return func_295(iParam0, bParam1, 0);
}

int func_295(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_296(iParam0))
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

bool func_296(int iParam0)
{
	return func_297(iParam0);
}

bool func_297(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_298(int iParam0)
{
	if (func_143(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_299()
{
	return Global_30968;
}

bool func_300(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

int func_301()
{
	bool bVar0;

	if (func_118(&uLocal_1168, 5000, 0))
	{
		if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
		{
			if (func_327(func_328()) && func_327(func_326()))
			{
				if (func_173(&bVar0))
				{
					if (func_304(bVar0) && func_302())
					{
						func_268(0);
						func_170(Local_158.f_6);
						Local_158.f_13 = { 100000f, 100000f, 100000f };
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_302()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4) && func_327(func_326())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
	{
		if (!func_149(iLocal_1212))
		{
			if (func_303(&(Local_158.f_4), Local_158.f_3, 22, func_326(), -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_158.f_4), true);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_158.f_4), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_158.f_4), true);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_158.f_4), 17, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_158.f_4), 5, false);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_158.f_4), 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_158.f_4), 1024, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_158.f_4), 2048, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_158.f_4), 32768, false);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_158.f_4), 251, true);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_158.f_4), false);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_158.f_4), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
				if (func_156())
				{
					func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
				}
				else
				{
					func_12(1);
					func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_326());
	return 1;
}

int func_303(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_304(bool bParam0)
{
	vector3 vVar0;
	var uVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
	{
		if (func_327(func_328()))
		{
			func_323(&vVar0, &uVar3, bParam0);
			if (func_310(vVar0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0) || bParam0)
			{
				if (Local_158.f_9 > -1f)
				{
					uVar3 = Local_158.f_9;
				}
				if (func_307(&(Local_158.f_3), func_328(), vVar0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					iLocal_1212 = NETWORK::NET_TO_VEH(Local_158.f_3);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1212, true, true, false);
					if (!bParam0)
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1212, 30f);
					}
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_1212);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_1212, false);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_1212, true);
					VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_1212, 0f);
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("HeliTaxi", 2))
					{
						DECORATOR::DECOR_SET_BOOL(iLocal_1212, "HeliTaxi", true);
					}
					func_160(1);
					func_305();
					if (func_341())
					{
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_328());
	return 1;
}

void func_305()
{
	func_306(Global_2540384.f_880, iLocal_1212);
}

void func_306(int iParam0, int iParam1)
{
	if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 0)
	{
		VEHICLE::SET_VEHICLE_LIVERY(iParam1, 0);
		if (iParam0 == 0)
		{
		}
	}
}

int func_307(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;

	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_308(vParam2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_308(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (func_309(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam5 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { vParam0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam3;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam4;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam5;
	}
}

int func_309(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_310(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		if (func_318(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_311(vParam0, fParam6, iParam7, fParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_311(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_143(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_315(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + fParam3))
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
		if (func_143(iVar1, 1, 1))
		{
			if (!func_313(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_312(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_315(iVar1), vParam0, true) <= (bVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_315(iVar1), vParam0, true) <= (bVar2 + fParam3))
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

int func_312(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_313(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_314(-1, 0) == 8;
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

int func_314(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
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

Vector3 func_315(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((func_317() && Global_1590682[iVar0 /*883*/].f_854) && !func_316(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_178(iParam0);
}

int func_316(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_317()
{
	return Global_2451787.f_18;
}

int func_318(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || bParam8 == 0)
		{
			if (func_143(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_312(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_319(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_178(iVar1), vParam0, true) < fParam3)
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

int func_319(int iParam0)
{
	if (func_322(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_321(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2515173))
	{
		return 1;
	}
	if (func_320(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_6(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_6(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_321(int iParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_322(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515173 = { func_321(iParam0) };
		Global_2515186 = { func_321(iParam1) };
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

void func_323(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	if (bParam2)
	{
		*uParam0 = { Local_158.f_6 };
		*uParam1 = Local_158.f_9;
		fVar0 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
		if (fVar0 < (Local_158.f_6.f_2 + 100f))
		{
			fVar0 = (Local_158.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar0;
	}
	else
	{
		*uParam0 = { func_324(Local_158.f_6, 140f, 180f, (200f / 2f)) };
		*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_158.f_6 - *uParam0), (Local_158.f_6.f_1 - uParam0->f_1));
		fVar1 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
		if (fVar1 < (Local_158.f_6.f_2 + 100f))
		{
			fVar1 = (Local_158.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar1;
	}
}

Vector3 func_324(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	vVar0 = { func_325(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_325(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_326()
{
	if (func_341())
	{
		return joaat("MP_F_HELISTAFF_01");
	}
	return joaat("S_M_Y_PILOT_01");
}

bool func_327(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_328()
{
	if (func_341())
	{
		return joaat("SUPERVOLITO");
	}
	return joaat("MAVERICK");
}

void func_329()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_289))
	{
		if (func_332(iLocal_1212, iLocal_289, 1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_289, "HTX_BLIP");
			iLocal_290 = 1;
			func_330(&iLocal_289, iLocal_290);
		}
	}
}

void func_330(int iParam0, int iParam1)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_331(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_331(int iParam0)
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

int func_332(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = HUD::GET_BLIP_SPRITE(iParam1);
	if (func_340(iParam0, bParam2))
	{
		if (!iVar0 == func_339(iVar0))
		{
			HUD::SET_BLIP_SPRITE(iParam1, func_339(iVar0));
			return 1;
		}
		else if (func_334() && iVar0 == func_339(iVar0))
		{
			return 1;
		}
	}
	else if (!iVar0 == func_333(iVar0))
	{
		HUD::SET_BLIP_SPRITE(iParam1, func_333(iVar0));
		return 1;
	}
	else if (func_334() && iVar0 == func_333(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 422;
		case 528:
			return 528;
		case 529:
			return 529;
		case 530:
			return 530;
		case 531:
			return 531;
		case 532:
			return 532;
		case 533:
			return 533;
		case 534:
			return 534;
		case 512:
			return 512;
		case 558:
			return 558;
		case 559:
			return 559;
		case 560:
			return 560;
		case 561:
			return 561;
		case 562:
			return 562;
		case 563:
			return 563;
		case 595:
			return 595;
		case 596:
			return 596;
		case 597:
			return 597;
		case 598:
			return 598;
		case 599:
			return 599;
		case 600:
			return 600;
		case 601:
			return 601;
		case 602:
			return 602;
		case 603:
			return 603;
		case 589:
			return 589;
		case 631:
			return 631;
		case 632:
			return 632;
		case 633:
			return 633;
		case 634:
			return 634;
		case 635:
			return 635;
		case 636:
			return 636;
		case 637:
			return 637;
		case 640:
			return 640;
		case 658:
			return 658;
		case 659:
			return 659;
		case 660:
			return 660;
		case 661:
			return 661;
		case 662:
			return 662;
		case 663:
			return 663;
		case 664:
			return 664;
		case 665:
			return 665;
		case 666:
			return 666;
		case 667:
			return 667;
		case 668:
			return 668;
		case 669:
			return 669;
		case 646:
			return 646;
		case 742:
			return 742;
		case 746:
			return 746;
		case 753:
			return 753;
		case 758:
			return 758;
		case 348:
			return 348;
		case 749:
			return 749;
		case 757:
			return 757;
		case 754:
			return 754;
		case 745:
			return 745;
		case 755:
			return 755;
		case 759:
			return 759;
		case 747:
			return 747;
		case 748:
			return 748;
		case 750:
			return 750;
	}
	return iParam0;
}

int func_334()
{
	if ((((func_338() || func_337()) || func_317()) || func_336()) || func_335())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_335()
{
	return Global_2451787.f_23;
}

var func_336()
{
	return Global_2451787.f_20;
}

var func_337()
{
	return Global_2451787.f_17;
}

var func_338()
{
	return Global_2451787.f_16;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 422:
			return 64;
		case 528:
			return 528;
		case 529:
			return 529;
		case 530:
			return 530;
		case 531:
			return 531;
		case 532:
			return 532;
		case 533:
			return 533;
		case 534:
			return 534;
		case 512:
			return 512;
		case 558:
			return 558;
		case 559:
			return 559;
		case 560:
			return 560;
		case 561:
			return 561;
		case 562:
			return 562;
		case 563:
			return 563;
		case 595:
			return 595;
		case 596:
			return 596;
		case 597:
			return 597;
		case 598:
			return 598;
		case 599:
			return 599;
		case 600:
			return 600;
		case 601:
			return 601;
		case 602:
			return 602;
		case 603:
			return 603;
		case 589:
			return 589;
		case 631:
			return 631;
		case 632:
			return 632;
		case 633:
			return 633;
		case 634:
			return 634;
		case 635:
			return 635;
		case 636:
			return 636;
		case 637:
			return 637;
		case 640:
			return 640;
		case 658:
			return 658;
		case 659:
			return 659;
		case 660:
			return 660;
		case 661:
			return 661;
		case 662:
			return 662;
		case 663:
			return 663;
		case 664:
			return 664;
		case 665:
			return 665;
		case 666:
			return 666;
		case 667:
			return 667;
		case 668:
			return 668;
		case 669:
			return 669;
		case 646:
			return 646;
		case 742:
			return 742;
		case 746:
			return 746;
		case 753:
			return 753;
		case 758:
			return 758;
		case 348:
			return 348;
		case 749:
			return 749;
		case 757:
			return 757;
		case 754:
			return 754;
		case 745:
			return 745;
		case 755:
			return 755;
		case 759:
			return 759;
		case 747:
			return 747;
		case 748:
			return 748;
		case 750:
			return 750;
	}
	return iParam0;
}

int func_340(int iParam0, bool bParam1)
{
	if (((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && (!ENTITY::IS_ENTITY_IN_AIR(iParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))) && SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iParam0)) < 0.5f) && func_146(iParam0, bParam1, bParam1, 0, 0, 0, 1, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_341()
{
	if (Global_2540384.f_880 > -1)
	{
		return 1;
	}
	return 0;
}

void func_342()
{
	if (bLocal_1194)
	{
		if (!bLocal_1195)
		{
			if (func_264(iLocal_1212))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_1212, false, false, false, true, false, false, false, false);
				bLocal_1195 = true;
			}
		}
	}
	else if (bLocal_1195)
	{
		if (func_264(iLocal_1212))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_1212, false, false, false, false, false, false, false, false);
			bLocal_1195 = false;
		}
	}
}

int func_343(var uParam0)
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

void func_344(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_119(uParam0, 0, 0);
		}
	}
}

void func_345()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (Local_158.f_23 == 6)
	{
		vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
	}
	bVar0 = false;
	bVar1 = false;
	bLocal_127 = false;
	switch (vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Local_158.f_23 > 0)
			{
				vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			if (!func_149(iLocal_1212))
			{
				func_485();
				func_463();
				func_462();
				if (func_143(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false))
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
						func_461();
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false);
						NETWORK::_0x4C2A9FDC22377075();
						vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
						MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
					}
				}
			}
			break;
		case 2:
			if (!func_149(iLocal_1212))
			{
				if (func_143(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false))
					{
						func_460();
						func_459();
						NETWORK::_0x4C2A9FDC22377075();
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && func_458(1, 1))
						{
							if (HUD::IS_WAYPOINT_ACTIVE())
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0, 21))
									{
										bVar0 = true;
									}
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
								{
									bVar0 = true;
								}
								if (bVar0 || MISC::IS_BIT_SET(Local_158.f_1, 12))
								{
									MISC::CLEAR_BIT(&(Local_158.f_1), 12);
									MISC::CLEAR_BIT(&(Local_158.f_2), 4);
									vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
									MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
									MISC::SET_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 6);
								}
							}
							if (MISC::IS_BIT_SET(iLocal_1213, 7) && iLocal_122 == 0)
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0, 101))
									{
										bLocal_127 = true;
									}
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 209))
								{
									bLocal_127 = true;
								}
							}
						}
						if (Local_158.f_23 >= 5)
						{
							vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
						}
						if (Local_158.f_23 == 4)
						{
							vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		case 3:
			if (!func_149(iLocal_1212))
			{
				if (func_143(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false))
					{
						func_460();
						NETWORK::_0x4C2A9FDC22377075();
						if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && func_458(1, 1)) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1)
						{
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(0, 36))
								{
									bVar1 = true;
								}
							}
							else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
								MISC::SET_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
							}
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(0, 101))
								{
									bLocal_127 = true;
								}
							}
							else if (PAD::IS_CONTROL_JUST_PRESSED(2, 209))
							{
								bLocal_127 = true;
							}
						}
						if (Local_158.f_23 >= 5)
						{
							vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
						}
						else if (Local_158.f_23 == 2)
						{
							MISC::CLEAR_BIT(&(Local_158.f_1), 9);
							vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
						}
						else if (Local_158.f_23 == 4)
						{
							vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		case 4:
			if ((((((func_457("POD_CHAM_CIGAR") || func_457("POD_CHAM_WEB")) || func_457("POD_UNKNOWN")) || func_457("POD_CIGAR")) || func_457("POD_WEB")) || func_457("LUX_VEH_ACT_1ST")) || func_457("LUX_ACT_1ST_SW"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (MISC::IS_BIT_SET(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 8))
			{
				MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 8);
			}
			if (!func_156())
			{
				if (!MISC::IS_BIT_SET(Local_158.f_2, 17))
				{
					if (func_270())
					{
						func_12(1);
						func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
						if (iLocal_130 == -1)
						{
							func_100(&uLocal_1003, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
						}
						else
						{
							func_100(&uLocal_1003, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
						}
						MISC::SET_BIT(&(Local_158.f_2), 17);
					}
				}
			}
			if ((Local_158.f_28 == PLAYER::PLAYER_ID() && func_456()) && Local_158.f_27)
			{
				if (!MISC::IS_BIT_SET(iLocal_288, 16))
				{
					if (!func_149(iLocal_1212))
					{
						if (func_143(PLAYER::PLAYER_ID(), 1, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false))
							{
								if (!func_455())
								{
									if (MISC::IS_BIT_SET(Local_158.f_1, 15))
									{
										iVar2 = func_454(1);
										if (iVar2 > 0)
										{
											if (iLocal_130 == -1)
											{
												func_453(iVar2, PLAYER::PLAYER_ID(), 0, Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274[5]);
											}
											else
											{
												func_453(iVar2, PLAYER::PLAYER_ID(), 1, iLocal_130);
											}
											MISC::SET_BIT(&iLocal_288, 16);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_500(0);
			}
			if (Local_158.f_23 == 2)
			{
				vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
				if (MISC::IS_BIT_SET(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 8))
				{
					MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 8);
				}
			}
			break;
		case 5:
			if (!func_149(iLocal_1212))
			{
				if (func_143(PLAYER::PLAYER_ID(), 1, 1))
				{
					func_451();
					func_459();
					NETWORK::_0x4C2A9FDC22377075();
					if (Local_158.f_23 == 2)
					{
						MISC::CLEAR_BIT(&(Local_158.f_1), 9);
						vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
					}
				}
			}
			break;
		case 6:
			func_500(1);
			break;
	}
	if (((vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 != 4 && bLocal_128) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) && func_448())
	{
		if (iLocal_130 > -2)
		{
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1212))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1212);
		}
		MISC::SET_BIT(&iLocal_288, 15);
		func_447();
		vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
		MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
		MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 6);
		MISC::SET_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 8);
		bLocal_128 = false;
	}
	else if (MISC::IS_BIT_SET(iLocal_1213, 7))
	{
		MISC::CLEAR_BIT(&iLocal_1213, 7);
	}
	func_371();
	func_346();
}

void func_346()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;

	iVar1 = 1;
	if (func_143(PLAYER::PLAYER_ID(), 1, 1) && !func_149(iLocal_1212))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212) && !func_370(PLAYER::PLAYER_PED_ID(), iLocal_1212, -1))
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_296))
		{
			if (func_369() || func_142(0))
			{
				if (!MISC::IS_BIT_SET(iLocal_288, 11))
				{
					MISC::SET_BIT(&iLocal_288, 11);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_288, 11))
			{
				iLocal_1214 = 0;
				MISC::CLEAR_BIT(&iLocal_288, 11);
			}
			if (func_458(1, 1))
			{
				if ((((vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 1 && MISC::IS_BIT_SET(iLocal_288, 2)) || vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 2) || vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 3) || vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 5)
				{
					iLocal_1213 = 0;
					Var2 = { func_368() };
					if (vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 1)
					{
						if (((!func_266() && !MISC::IS_BIT_SET(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !func_366(PLAYER::PLAYER_ID()))
						{
							MISC::SET_BIT(&iLocal_1213, 0);
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 2)
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							if (HUD::IS_WAYPOINT_ACTIVE())
							{
								MISC::SET_BIT(&iLocal_1213, 1);
							}
							else
							{
								MISC::SET_BIT(&iLocal_1213, 2);
							}
							if (func_448())
							{
								MISC::SET_BIT(&iLocal_1213, 7);
							}
						}
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) < 10f)
						{
							MISC::SET_BIT(&iLocal_1213, 3);
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 0)
						{
							MISC::SET_BIT(&iLocal_1213, 4);
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1212, 0, false) != PLAYER::PLAYER_PED_ID() && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) < 40f)
							{
								if (func_365())
								{
									MISC::SET_BIT(&iLocal_1213, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 3)
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							MISC::SET_BIT(&iLocal_1213, 6);
							if (func_448())
							{
								MISC::SET_BIT(&iLocal_1213, 7);
							}
						}
						MISC::SET_BIT(&iLocal_1213, 4);
					}
					else if (vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 5)
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) < 10f)
						{
							MISC::SET_BIT(&iLocal_1213, 3);
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 0)
						{
							MISC::SET_BIT(&iLocal_1213, 4);
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1212, 0, false) != PLAYER::PLAYER_PED_ID() && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) < 40f)
							{
								if (func_365())
								{
									MISC::SET_BIT(&iLocal_1213, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else
					{
						iVar1 = 0;
					}
					if (func_364())
					{
						iVar1 = 0;
					}
					if (iVar1 == 1)
					{
						func_363();
						func_362(1);
						func_360(1);
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1)
						{
							if ((iLocal_1213 != iLocal_1214 || PAD::_0x6CD79468A1E595C6(2)) || Global_61706)
							{
								Global_61706 = 0;
								func_358(&uLocal_297);
								if (MISC::IS_BIT_SET(iLocal_1213, 0))
								{
									func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 23, true), "HTX_ENTER", &uLocal_297, 0);
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 1))
								{
									if (PAD::_IS_USING_KEYBOARD(0))
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 21, true), "HTX_START", &uLocal_297, 0);
									}
									else
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, true), "HTX_START", &uLocal_297, 0);
									}
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 2))
								{
									func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 199, true), "HTX_WAYP", &uLocal_297, 0);
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 3))
								{
									func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 75, true), "HTX_EXIT1", &uLocal_297, 0);
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 4))
								{
									func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 75, true), "HTX_EXIT2", &uLocal_297, 0);
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 5))
								{
									if (PAD::_IS_USING_KEYBOARD(0))
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 22, true), "HTX_EXIT3", &uLocal_297, 0);
									}
									else
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 99, true), "HTX_EXIT3", &uLocal_297, 0);
									}
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 6))
								{
									if (PAD::_IS_USING_KEYBOARD(0))
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 36, true), "HTX_STOP", &uLocal_297, 0);
									}
									else
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true), "HTX_STOP", &uLocal_297, 0);
									}
								}
								if (MISC::IS_BIT_SET(iLocal_1213, 7))
								{
									if (func_356() || func_354(PLAYER::PLAYER_ID()))
									{
										if (PAD::_IS_USING_KEYBOARD(0))
										{
											func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 101, true), "HTX_QT_WARP", &uLocal_297, 0);
										}
										else
										{
											func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 209, true), "HTX_QT_WARP", &uLocal_297, 0);
										}
									}
									else if (PAD::_IS_USING_KEYBOARD(0))
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 101, true), "HTX_OFF_WARP", &uLocal_297, 0);
									}
									else
									{
										func_357(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 209, true), "HTX_OFF_WARP", &uLocal_297, 0);
									}
								}
							}
							func_347(&iLocal_296, &Var2, &uLocal_297, func_353(&uLocal_297));
							iLocal_1214 = iLocal_1213;
						}
					}
				}
			}
		}
		else
		{
			iLocal_296 = UNK_0x5DEA4192B46CB99B("instructional_buttons");
		}
		if (iVar0 == 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 99, true);
			PAD::DISABLE_CONTROL_ACTION(0, 100, true);
		}
	}
	Global_2540384.f_260 = iVar1;
}

void func_347(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_352(uParam2);
	}
	if (Global_1315735 < 2)
	{
		func_351(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = UNK_0x5DEA4192B46CB99B("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (MISC::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_350(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_350(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_350(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_36(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_350(&(uParam2->f_1[iVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_350(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_36(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_349(*iParam0, uParam1);
	}
	func_348();
}

void func_348()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_349(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_350(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_351(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_352(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_353(var uParam0)
{
	return uParam0->f_692;
}

bool func_354(int iParam0)
{
	return func_355(iParam0) != 0;
}

int func_355(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_134;
}

int func_356()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_357(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;

	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_358(var uParam0)
{
	func_359(uParam0);
	uParam0->f_692 = 1;
}

void func_359(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (func_361())
		{
			Global_2451787.f_40 = 1;
		}
	}
	else
	{
		Global_2451787.f_40 = 0;
	}
}

bool func_361()
{
	return MISC::IS_BIT_SET(Global_2451787.f_2, 11);
}

void func_362(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_363()
{
	Global_2551544.f_258 = 1;
}

int func_364()
{
	if (iLocal_122 > 0 || bLocal_128 == 1)
	{
		return 1;
	}
	return 0;
}

int func_365()
{
	if (VEHICLE::_DOES_VEHICLE_ALLOW_RAPPEL(iLocal_1212) && !func_341())
	{
		return 1;
	}
	return 0;
}

bool func_366(int iParam0)
{
	return func_367(iParam0) == joaat("WEAPON_MINIGUN");
}

int func_367(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_575;
}

struct<9> func_368()
{
	struct<9> Var0;

	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_369()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_371()
{
	if (iLocal_122 == 0)
	{
		if (bLocal_127)
		{
			if (func_356() || func_354(PLAYER::PLAYER_ID()))
			{
				bLocal_126 = true;
				iLocal_122 = 1;
			}
			else
			{
				bLocal_128 = true;
				iLocal_130 = -1;
				bLocal_129 = true;
			}
		}
	}
	if (iLocal_122 == 1)
	{
		if (func_448())
		{
			func_375();
		}
		else
		{
			bLocal_129 = true;
		}
	}
	if (bLocal_129)
	{
		func_372(1, -1);
		iLocal_122 = 0;
		iLocal_124 = 0;
		bLocal_129 = false;
		bLocal_127 = false;
	}
}

void func_372(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_374(&iVar0, 0, iParam1))
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
		func_373(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_373(int* iParam0)
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

int func_374(int iParam0, bool bParam1, int iParam2)
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

void func_375()
{
	int iVar0;

	func_437(&Local_148);
	if (func_435(0, -1, 0))
	{
		if (bLocal_126)
		{
			func_424();
			bLocal_126 = false;
		}
		else
		{
			func_423(iLocal_124, 1, 1);
		}
		func_421();
		func_419();
		func_385(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
		if (!bLocal_137)
		{
			if (func_384())
			{
				bLocal_126 = true;
			}
		}
		else if (!func_384())
		{
			bLocal_126 = true;
		}
		if (!bLocal_138)
		{
			if (func_380())
			{
				bLocal_126 = true;
			}
		}
		else if (!func_380())
		{
			bLocal_126 = true;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!bLocal_140[iVar0])
			{
				if (func_379(iLocal_131[iVar0]))
				{
					bLocal_126 = true;
				}
			}
			else if (!func_379(iLocal_131[iVar0]))
			{
				bLocal_126 = true;
			}
			iVar0++;
		}
		if (!bLocal_139)
		{
			if (func_376())
			{
				bLocal_126 = true;
			}
		}
		else if (!func_376())
		{
			bLocal_126 = true;
		}
	}
}

int func_376()
{
	if (func_354(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(func_178(PLAYER::PLAYER_ID()), Global_1678288.f_496[func_377(func_355(PLAYER::PLAYER_ID())) /*3*/]) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_195(iVar0) == 1)
		{
			if (func_378(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
		case 61:
			return 2;
		case 62:
			return 3;
		case 63:
			return 4;
		case 64:
			return 5;
		case 65:
			return 6;
		case 66:
			return 7;
		case 67:
			return 8;
		case 68:
			return 9;
		case 69:
			return 10;
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 > 0)
	{
		if (SYSTEM::VDIST(func_178(PLAYER::PLAYER_ID()), func_183(iParam0)) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_380()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = iLocal_1212;
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar5 = (iVar2 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar5, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar5, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4, false) && PED::IS_PED_A_PLAYER(iVar4))
			{
				if (!func_383())
				{
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
					if (iVar3 != PLAYER::PLAYER_ID())
					{
						return 0;
					}
				}
				else
				{
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
					if (iVar3 != func_5() && func_143(iVar3, 1, 1))
					{
						if (!func_381(iVar3, func_6(PLAYER::PLAYER_ID()), 1))
						{
							return 0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (bLocal_146)
	{
		if (!func_455())
		{
			bLocal_146 = false;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_381(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_382(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_382(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_383()
{
	return func_201(PLAYER::PLAYER_ID());
}

int func_384()
{
	if (SYSTEM::VDIST(func_178(PLAYER::PLAYER_ID()), func_256(func_258(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274[5]))) > 200f)
	{
		return 1;
	}
	return 0;
}

void func_385(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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

	if (!func_374(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_417(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22550)
	{
		if (func_415(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_414())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_414())
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
			func_410(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar65, func_409(29), 64);
					StringCopy(&cVar81, func_407(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_406(Global_22547, Global_22548, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
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
				func_406(Global_22547, (Global_22548 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22548 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) != 0)
				{
					func_405();
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
					func_405();
					func_403((((Global_22547 + fParam5) - 0.00390625f) - func_404("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_405();
						func_403((((Global_22547 + fParam5) - 0.00390625f) - func_404("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
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
				func_406(Global_22547, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_415(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_402(fVar42);
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
				func_406(Global_22547, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_402(fVar42);
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
					func_415(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_401(Global_22550.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4768), func_407(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
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
					func_415(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_402(fVar42);
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
				func_406(Global_22547, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_402(fVar42);
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
					func_415(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_401(Global_4269680.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_409(Global_4269680.f_67), func_407(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
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
			func_398(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_396(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
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
												if (func_415(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_415(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_415(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_409(26), func_407(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_415(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_415(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_409(27), func_407(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
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
										func_396(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_395(bVar32);
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
												if (func_415(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_415(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_401(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4433[(iVar22 + iVar28)]), func_407(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4433[(iVar22 + iVar28)]), func_407(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
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
											if (func_394() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (iVar8 == 0)
												{
													func_396(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_415(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_415(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_401(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4433[(iVar22 + iVar14)]), func_407(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4433[(iVar22 + iVar14)]), func_407(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4433[(iVar22 + iVar14)]), func_407(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
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
										func_396(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_395(bVar32);
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
										if (func_415(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_415(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_409(26), func_407(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_415(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_415(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_409(27), func_407(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_396(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										func_393((fVar34 + fVar42), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
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
										func_396(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_395(bVar32);
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
										if (func_415(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_415(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_409(26), func_407(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_415(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_415(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_409(27), func_407(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									func_396(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
									func_392((fVar34 + fVar42), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_415(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_415(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_415(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_401(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_409(26), func_407(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
											if (func_415(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_415(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_401(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_409(27), func_407(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_415(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_401(Global_22550.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_409(Global_22550.f_4433[iVar22]), func_407(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_391(Global_22550.f_4433[iVar22])), (fVar37 * func_391(Global_22550.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false);
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
								if (func_415(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_386(0);
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
		func_362(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_386(int iParam0)
{
	if (func_390())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_142(0))
		{
			func_387(iParam0);
		}
		MISC::SET_BIT(&Global_7552, 2);
	}
}

void func_387(int iParam0)
{
	if (func_390())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_389())
		{
			func_388(1, 1);
		}
		else
		{
			func_388(0, 0);
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
	if (!func_88())
	{
		Global_19681.f_1 = 3;
	}
}

void func_388(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_142(0))
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

bool func_389()
{
	return MISC::IS_BIT_SET(Global_1689730, 5);
}

bool func_390()
{
	return MISC::IS_BIT_SET(Global_1689730, 19);
}

float func_391(int iParam0)
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

void func_392(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_393(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_394()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_395(bool bParam0)
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

void func_396(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_397(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_397(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_398(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_374(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_417(bParam4, bParam8))
	{
		return;
	}
	if (func_399())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_313(PLAYER::PLAYER_ID(), 0))
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
					func_350(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_350(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_36(&(Global_22550.f_4964[iVar1 /*4*/]));
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
				func_350(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_36(&(Global_4269680.f_16));
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

int func_399()
{
	vector3 vVar0;

	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_400())
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

int func_400()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_401(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
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

void func_402(float fParam0)
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

void func_403(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_404(char* sParam0, int iParam1, int iParam2)
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
	func_405();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_405()
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

void func_406(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_407(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_321(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_408(&uVar3);
			}
		}
		else
		{
			return func_408(&(Global_22550.f_7029[iParam0 /*16*/]));
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

var func_408(var uParam0)
{
	return uParam0;
}

char* func_409(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_321(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_408(&uVar0);
		}
		else
		{
			return func_408(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_410(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_413(Global_22550.f_5218, 1);
	}
	else
	{
		func_413(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_412(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_415(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_411(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
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

float func_411(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_412(char* sParam0)
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
	func_396(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_413(int iParam0, bool bParam1)
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

int func_414()
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

int func_415(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_409(iParam0), 64);
	StringCopy(&cVar16, func_407(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(false);
			if (func_414())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_414())
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
		vVar37.x = (vVar37.x * (func_416(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_416(iParam0) / fVar34));
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

float func_416(int iParam0)
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

int func_417(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_91(8, -1) && func_418() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77093) || Global_22550.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_418()
{
	return Global_1312830;
}

void func_419()
{
	if (iLocal_124 == 0)
	{
		if (!bLocal_137)
		{
			func_420("PAH_QUICK_D1", 0, 0);
		}
	}
	else if (iLocal_124 == iLocal_125)
	{
		if (!bLocal_138)
		{
			func_420("PAH_QUICK_D2", 0, 0);
		}
		else if (!bLocal_139)
		{
			func_420("PAH_QUICK_D3", 0, 0);
		}
	}
	else if (!bLocal_138)
	{
		func_420("PAH_QUICK_D2", 0, 0);
	}
	else if (!bLocal_140[(iLocal_124 - 1)])
	{
		func_420("PAH_QUICK_D3", 0, 0);
	}
}

void func_420(char* sParam0, int iParam1, int iParam2)
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

void func_421()
{
	bool bVar0;

	bVar0 = true;
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) || Global_99007.f_1425)
	{
		bVar0 = false;
	}
	if ((bVar0 && PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || (bVar0 && Local_148.f_6))
	{
		if (!func_455())
		{
			if (iLocal_124 == 0)
			{
				if (func_384())
				{
					iLocal_130 = -1;
					bLocal_129 = true;
					bLocal_128 = true;
				}
			}
			else if (iLocal_124 == iLocal_125)
			{
				if (func_380())
				{
					if (func_376())
					{
						iLocal_130 = 50;
						bLocal_129 = true;
						bLocal_128 = true;
					}
				}
			}
			else if (func_380())
			{
				if (func_379(iLocal_131[(iLocal_124 - 1)]))
				{
					bLocal_129 = true;
					bLocal_128 = true;
					iLocal_130 = iLocal_131[(iLocal_124 - 1)];
				}
			}
		}
		else
		{
			bLocal_146 = true;
		}
	}
	else if (!bVar0)
	{
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || Local_148.f_7)
	{
		bLocal_129 = true;
	}
	else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 188) && func_422(&uLocal_147, &(Local_148.f_4), 1)) || (Local_148.f_8 && func_422(&uLocal_147, &(Local_148.f_4), 1)))
	{
		if (Local_148.f_4 > 0)
		{
			iLocal_124 = (iLocal_124 - 1);
			if (iLocal_124 < 0)
			{
				iLocal_124 = (iLocal_123 - 1);
			}
			func_423(iLocal_124, 1, 1);
		}
	}
	else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 187) && func_422(&uLocal_147, &(Local_148.f_4), 1)) || (Local_148.f_9 && func_422(&uLocal_147, &(Local_148.f_4), 1)))
	{
		if (Local_148.f_4 < 0)
		{
			iLocal_124++;
			if (iLocal_124 > (iLocal_123 - 1))
			{
				iLocal_124 = 0;
			}
			func_423(iLocal_124, 1, 1);
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

int func_422(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 150;
	if (bParam2)
	{
		if (((PAD::IS_DISABLED_CONTROL_PRESSED(2, 188) || PAD::GET_CONTROL_NORMAL(2, 219) < -0.3f) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241)) || PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241))
			{
				iVar1 = 100;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((PAD::IS_DISABLED_CONTROL_PRESSED(2, 187) || PAD::GET_CONTROL_NORMAL(2, 219) > 0.3f) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242)) || PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242))
			{
				iVar1 = 100;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((PAD::IS_DISABLED_CONTROL_PRESSED(2, 190) || PAD::GET_CONTROL_NORMAL(2, 218) > 0.3f) || PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 189) || PAD::GET_CONTROL_NORMAL(2, 218) < -0.3f)
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_423(int iParam0, bool bParam1, int iParam2)
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

void func_424()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	bool bVar6;

	func_434(0, 0);
	func_433("PAH_QUICK_1");
	func_432(1, 2, 1, 1, 1);
	func_431(1, 1, 0, 0, 0);
	iLocal_123 = 0;
	Var0 = { func_430(func_252(5, -1)) };
	sVar4 = func_429(&Var0);
	bLocal_137 = func_384();
	bLocal_138 = func_380();
	func_410(iLocal_123, sVar4, 0, bLocal_137, 0, 0);
	iLocal_123++;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (func_428(iVar5) > 0)
		{
			if (func_185(func_428(iVar5)))
			{
				iLocal_131[iVar5] = func_428(iVar5);
				bLocal_140[iVar5] = func_379(iLocal_131[iVar5]);
				if (bLocal_138)
				{
					bVar6 = bLocal_140[iVar5];
				}
				else
				{
					bVar6 = false;
				}
				func_410(iLocal_123, func_427(iLocal_131[iVar5]), 0, bVar6, 0, 0);
				iLocal_123++;
			}
		}
		iVar5++;
	}
	bLocal_139 = (func_376() && bLocal_138);
	if (func_354(PLAYER::PLAYER_ID()))
	{
		func_410(iLocal_123, func_426(func_355(PLAYER::PLAYER_ID())), 0, bLocal_139, 0, 0);
		iLocal_125 = iLocal_123;
		iLocal_123++;
	}
	func_425(201, "ITEM_SELECT", -1, 0);
	func_425(202, "ITEM_BACK", -1, 0);
	func_423(iLocal_124, 1, 1);
}

void func_425(int iParam0, char* sParam1, int iParam2, bool bParam3)
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
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_22550.f_5052), Global_22550.f_4769);
	}
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

char* func_426(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WAREHOUSE_1";
		case 2:
			return "MP_WAREHOUSE_2";
		case 3:
			return "MP_WAREHOUSE_3";
		case 4:
			return "MP_WAREHOUSE_4";
		case 5:
			return "MP_WAREHOUSE_5";
		case 6:
			return "MP_WAREHOUSE_6";
		case 7:
			return "MP_WAREHOUSE_7";
		case 8:
			return "MP_WAREHOUSE_8";
		case 9:
			return "MP_WAREHOUSE_9";
		case 10:
			return "MP_WAREHOUSE_10";
		default:
			break;
	}
	return "";
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
		case 2:
			return "MP_WHOUSE_1";
		case 3:
			return "MP_WHOUSE_2";
		case 4:
			return "MP_WHOUSE_3";
		case 5:
			return "MP_WHOUSE_4";
		case 6:
			return "MP_WHOUSE_5";
		case 7:
			return "MP_WHOUSE_6";
		case 8:
			return "MP_WHOUSE_7";
		case 9:
			return "MP_WHOUSE_8";
		case 10:
			return "MP_WHOUSE_9";
		case 11:
			return "MP_WHOUSE_10";
		case 12:
			return "MP_WHOUSE_11";
		case 13:
			return "MP_WHOUSE_12";
		case 14:
			return "MP_WHOUSE_13";
		case 15:
			return "MP_WHOUSE_14";
		case 16:
			return "MP_WHOUSE_15";
		case 17:
			return "MP_WHOUSE_16";
		case 18:
			return "MP_WHOUSE_17";
		case 19:
			return "MP_WHOUSE_18";
		case 20:
			return "MP_WHOUSE_19";
		case 21:
			return "MP_WHOUSE_20";
		case 22:
			return "MP_WHOUSE_21";
	}
	return "";
}

int func_428(int iParam0)
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iParam0 /*3*/] != 0)
	{
		return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iParam0 /*3*/];
	}
	return 0;
}

var func_429(var uParam0)
{
	return uParam0;
}

struct<4> func_430(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		case 2:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		case 3:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		case 4:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		case 5:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		case 6:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		case 7:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		case 8:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		case 9:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		case 10:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		case 11:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		case 12:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		case 13:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		case 14:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		case 15:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		case 16:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		case 17:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		case 18:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		case 19:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		case 20:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		case 21:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		case 22:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		case 23:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		case 24:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		case 25:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		case 26:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		case 27:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		case 28:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		case 29:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		case 30:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		case 31:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		case 32:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		case 33:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		case 34:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		case 35:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		case 36:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		case 37:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		case 38:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		case 39:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		case 40:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		case 41:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		case 42:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		case 43:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		case 44:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		case 45:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		case 46:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		case 47:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		case 48:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		case 49:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		case 50:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		case 51:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		case 52:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		case 53:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		case 54:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		case 55:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		case 56:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		case 57:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		case 58:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		case 59:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		case 60:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		case 61:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		case 62:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		case 63:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		case 64:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		case 65:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		case 66:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		case 67:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		case 68:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		case 69:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		case 70:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		case 71:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		case 72:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		case 83:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		case 84:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		case 85:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		case 73:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		case 74:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		case 75:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		case 76:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		case 77:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		case 78:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		case 79:
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		case 80:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		case 81:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		case 82:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		case 115:
			StringCopy(&Var0, "IE_WARE_1", 16);
			break;
	}
	return Var0;
}

void func_431(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_433(char* sParam0)
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

void func_434(bool bParam0, bool bParam1)
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

bool func_435(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_374(&iVar0, 1, iParam1))
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
	bVar2 = func_436(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_436(var uParam0)
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

void func_437(var uParam0)
{
	func_446(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201));
	uParam0->f_7 = (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
	if (((((func_435(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !Global_99007.f_1425)
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
				func_443(0, 0, 0, 1);
				func_442(0, -1, 1);
			}
			if (func_441())
			{
				if (Global_4269756 == iLocal_124)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					iLocal_124 = Global_4269756;
					func_423(iLocal_124, 1, 1);
				}
			}
			if (func_440())
			{
				uParam0->f_7 = 1;
			}
			if (func_439(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_438(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

int func_438(bool bParam0, bool bParam1, int iParam2)
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

int func_439(bool bParam0, bool bParam1, int iParam2)
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

int func_440()
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

int func_441()
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

int func_442(bool bParam0, int iParam1, bool bParam2)
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

void func_443(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_445();
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
				func_444(0);
			}
			return;
		}
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= (fVar3 + fVar6)) && Global_4269751 < (fVar3 + 0.034722f))
		{
			Global_4269756 = -3;
			if (bParam3)
			{
				func_444(0);
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
				func_406(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22549, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_444(bool bParam0)
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
		func_406(fVar0, fVar1, Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4269756 == -3)
	{
		func_406(fVar0, (fVar1 + fVar2), Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_445()
{
	Global_4269752 = Global_4269750;
	Global_4269753 = Global_4269751;
	Global_4269750 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4269751 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4269754 = (Global_4269750 - Global_4269752);
	Global_4269755 = (Global_4269751 - Global_4269753);
}

void func_446(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_447()
{
	int iVar0;

	iVar0 = iLocal_1212;
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		VEHICLE::_0x065D03A9D6B2C6B5(iVar0, 0);
		VEHICLE::_0x2311DD7159F00582(iVar0, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 4);
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) != 0 && VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) != 1)
		{
			MISC::CLEAR_BIT(&iLocal_288, 15);
		}
	}
}

int func_448()
{
	if (((((Local_158.f_27 && func_456()) && (!func_450(1) || func_383())) && ((func_356() || func_354(PLAYER::PLAYER_ID())) || func_384())) && func_449()) && (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1))
	{
		return 1;
	}
	return 0;
}

int func_449()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	if (bLocal_1215)
	{
		return iLocal_1216;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1212) && !ENTITY::IS_ENTITY_DEAD(iLocal_1212, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_1212) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1212, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1212, (iVar0 - 1), false);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!func_286(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)))
						{
							iLocal_1216 = 0;
							bLocal_1215 = true;
							return 0;
						}
					}
					else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
					{
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
						{
							return 0;
						}
					}
				}
			}
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = iVar3;
			if (!iVar4 == PLAYER::PLAYER_ID())
			{
				if (func_143(iVar4, 1, 1))
				{
					iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
					if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5, false))
					{
						vVar6 = { func_178(iVar4) };
						fVar9 = SYSTEM::VDIST(vVar6, ENTITY::GET_ENTITY_COORDS(iLocal_1212, true));
						if (fVar9 < 20f)
						{
							if (PED::GET_VEHICLE_PED_IS_USING(iVar5) == iLocal_1212)
							{
								if (!func_286(iVar4))
								{
									iLocal_1216 = 0;
									bLocal_1215 = true;
									return 0;
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	iLocal_1216 = 1;
	bLocal_1215 = true;
	return 1;
}

bool func_450(bool bParam0)
{
	return func_200(PLAYER::PLAYER_ID(), bParam0);
}

void func_451()
{
	int iVar0;

	if (!MISC::IS_BIT_SET(iLocal_288, 13))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_8(1190, -1, 0);
			if (!MISC::IS_BIT_SET(iVar0, 22) || !MISC::IS_BIT_SET(iVar0, 23))
			{
				func_452("HTX_HELP2", -1);
				if (!MISC::IS_BIT_SET(iVar0, 22))
				{
					MISC::SET_BIT(&iVar0, 22);
				}
				else
				{
					MISC::SET_BIT(&iVar0, 23);
				}
				func_279(1190, iVar0, -1, 1, 0);
				MISC::SET_BIT(&iLocal_288, 13);
			}
			else
			{
				MISC::SET_BIT(&iLocal_288, 13);
			}
		}
	}
}

void func_452(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_453(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;

	Var0 = 87315576;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam0;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_454(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar1 = iLocal_1212;
	if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		return 0;
	}
	iVar2 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar1));
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar5 = (iVar3 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar5, false))
		{
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar5, false));
			if (iVar4 != func_5() && func_143(iVar4, 1, 1))
			{
				if (!Local_158.f_28 == iVar4 || bParam0)
				{
					MISC::SET_BIT(&uVar0, iVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

int func_455()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	iVar3 = iLocal_1212;
	if (ENTITY::IS_ENTITY_DEAD(iVar3, false))
	{
		return 0;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (func_143(iVar0, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				if (SYSTEM::VDIST(vVar7, vVar4) < 30f)
				{
					if (PED::IS_PED_IN_VEHICLE(iVar1, iVar3, true))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar1, iVar3))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_456()
{
	return func_252(5, -1) > 0;
}

bool func_457(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_458(int iParam0, int iParam1)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_369())
		{
			return 0;
		}
	}
	if (func_157())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_142(0))
		{
			return 0;
		}
	}
	if (func_91(8, -1))
	{
		return 0;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_39())
	{
		return 0;
	}
	if (Global_58898)
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (Global_1312809)
	{
		return 0;
	}
	if (Global_1574197)
	{
		return 0;
	}
	return 1;
}

void func_459()
{
	bool bVar0;

	if (!MISC::IS_BIT_SET(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 7))
	{
		bVar0 = false;
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 22))
			{
				bVar0 = true;
			}
		}
		else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 99) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 100))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!func_365())
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (((((((!func_149(iLocal_1212) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1212, 0, false) != PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(iLocal_1212) < 10f) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 0) && func_458(1, 1)) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1212) < 40f)
			{
				if (func_118(&uLocal_1190, 275, 0))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_RAPPEL_FROM_HELI(PLAYER::PLAYER_PED_ID(), 10f);
					MISC::SET_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 7);
				}
			}
			else if (func_274(&uLocal_1190))
			{
				func_141(&uLocal_1190);
			}
		}
		else if (func_274(&uLocal_1190))
		{
			func_141(&uLocal_1190);
		}
	}
}

void func_460()
{
	if (!MISC::IS_BIT_SET(iLocal_288, 12))
	{
		Global_1573985 = 1;
		MISC::SET_BIT(&iLocal_288, 12);
	}
}

void func_461()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_289))
	{
		HUD::REMOVE_BLIP(&iLocal_289);
	}
}

void func_462()
{
	if (MISC::IS_BIT_SET(iLocal_288, 12))
	{
		Global_1573985 = 0;
		MISC::CLEAR_BIT(&iLocal_288, 12);
	}
}

void func_463()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (((((func_143(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1212, 15f, 15f, 5f, false, true, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && ENTITY::GET_ENTITY_SPEED(iLocal_1212) < 5f) && !func_464(iLocal_1212, 0)) && func_458(1, 0))
	{
		MISC::SET_BIT(&iLocal_288, 2);
		if (MISC::IS_BIT_SET(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			func_446(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_294 == 0)
				{
					SYSTEM::SETTIMERA(0);
					iLocal_294 = 1;
				}
			}
			else
			{
				iLocal_294 = 0;
			}
			if (iLocal_294 == 1)
			{
				if (SYSTEM::TIMERA() > 275)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
						iLocal_294 = 0;
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_288, 2);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_288, 2);
		if (MISC::IS_BIT_SET(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_294 = 0;
			}
			MISC::CLEAR_BIT(&(vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
		}
	}
}

int func_464(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_465()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Local_158.f_24 != 4)
	{
		if (MISC::IS_BIT_SET(iLocal_288, 8))
		{
			MISC::CLEAR_BIT(&iLocal_288, 8);
		}
	}
	if (!func_148(Local_158.f_4) && !func_149(iLocal_1212))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_158.f_4) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_158.f_4) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			func_484();
			func_483();
			switch (Local_158.f_24)
			{
				case 0:
					break;
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 0)
					{
						if (MISC::IS_BIT_SET(iLocal_288, 4))
						{
							TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, 0, 0, Local_158.f_6, 19, 30f, 7.5f, Local_158.f_9, SYSTEM::ROUND(10f), SYSTEM::ROUND(10f), -1082130432, 8225);
							MISC::CLEAR_BIT(&iLocal_288, 17);
						}
					}
					else if (!MISC::IS_BIT_SET(iLocal_288, 4))
					{
						func_169();
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) == 1)
					{
						if (Local_158.f_9 > -1f)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_158.f_4), Local_158.f_6, (7.5f + 5f), (7.5f + 5f), 50f, false, true, 0))
							{
								fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_158.f_4));
								fVar1 = (fVar0 - Local_158.f_9);
								if (fVar1 < 0f)
								{
									fVar1 = (fVar1 + 360f);
								}
								if (fVar1 > 180f)
								{
									fVar1 = (360f - fVar1);
								}
							}
						}
					}
					break;
				case 2:
					if (iLocal_998 != 2)
					{
						func_169();
						iLocal_998 = 2;
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 0)
					{
						TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, 0, 0, Local_158.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
					}
					break;
				case 3:
					break;
				case 4:
					if (iLocal_998 != 4)
					{
						if (iLocal_998 != 3)
						{
							func_169();
						}
						if (iLocal_998 == 3)
						{
							Local_158.f_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_1212, true) };
						}
						else
						{
							Local_158.f_20 = { 0f, 0f, 0f };
						}
						iLocal_998 = 4;
					}
					else if (SYSTEM::VMAG(Local_158.f_20) > 0f)
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_1212, true), Local_158.f_20) > 10f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 0)
							{
								TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, 0, 0, Local_158.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
							}
						}
					}
					if (!MISC::IS_BIT_SET(iLocal_288, 8) && MISC::IS_BIT_SET(Local_158.f_1, 14))
					{
						if (func_270())
						{
							if (func_156())
							{
								func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
								if (!bLocal_190)
								{
									func_269(&uLocal_1003, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
								}
								else
								{
									func_482(&uLocal_1003, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
								}
							}
							else
							{
								func_12(1);
								func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
								if (!bLocal_190)
								{
									func_100(&uLocal_1003, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
								}
								else
								{
									func_481(&uLocal_1003, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
								}
							}
							MISC::SET_BIT(&iLocal_288, 8);
						}
					}
					break;
				case 5:
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1212))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1212);
					}
					if (MISC::IS_BIT_SET(iLocal_288, 15))
					{
						func_447();
					}
					if (!MISC::IS_BIT_SET(iLocal_288, 14))
					{
						if (iLocal_998 != 5)
						{
							func_169();
							iLocal_998 = 5;
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_158.f_4), -1273030092) != 0)
						{
							TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, 0, 0, Local_158.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
						}
						if (func_480() && MISC::IS_BIT_SET(Local_158.f_1, 15))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1212))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_1212, true);
								func_169();
								if (iLocal_130 == -1)
								{
									if (MISC::IS_BIT_SET(iLocal_288, 19))
									{
										iVar2 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_1197);
										if (iVar2 > 10000)
										{
											PLAYER::STOP_PLAYER_TELEPORT();
											iLocal_1197 = NETWORK::GET_NETWORK_TIME();
										}
									}
									else
									{
										iLocal_1197 = NETWORK::GET_NETWORK_TIME();
										MISC::SET_BIT(&iLocal_288, 19);
									}
									if (func_468(Local_158.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
									{
										MISC::SET_BIT(&iLocal_288, 14);
										MISC::CLEAR_BIT(&iLocal_288, 19);
										if (iLocal_130 == -1 && !func_287(Local_158.f_5))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_1212, false);
											ENTITY::SET_ENTITY_COLLISION(iLocal_1212, true, false);
											VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 1);
											Local_158.f_23 = 5;
											func_169();
										}
									}
								}
								else if (iLocal_130 > -1)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1212, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_1212, true, false);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 1);
									Local_158.f_23 = 5;
									func_169();
								}
							}
						}
					}
					break;
				case 7:
					func_144();
					if (!MISC::IS_BIT_SET(iLocal_288, 9))
					{
						if (func_270())
						{
							if (func_156())
							{
								func_117(&uLocal_1003, 3, NETWORK::NET_TO_PED(Local_158.f_4), "FM_Pilot", 0, 1);
								func_269(&uLocal_1003, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
							}
							else
							{
								func_117(&uLocal_1003, 2, NETWORK::NET_TO_PED(Local_158.f_4), "EXEC_PILOT", 0, 1);
								func_100(&uLocal_1003, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
							}
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 2);
							MISC::SET_BIT(&iLocal_288, 9);
						}
					}
					break;
				case 8:
					if (!VEHICLE::_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(iLocal_1212))
					{
						func_144();
						if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1212) > 0)
						{
							if (!func_148(Local_158.f_4))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_1212, false))
								{
									if (!func_266())
									{
										TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_291);
										if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
										{
											func_467(&(Local_158.f_3));
										}
										if (func_280())
										{
											func_466(0);
										}
										if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4))
										{
											func_467(&(Local_158.f_4));
										}
									}
								}
							}
						}
						else if (!func_148(Local_158.f_4))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1212, false))
							{
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_292);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_158.f_4), true);
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
								{
									func_467(&(Local_158.f_3));
								}
								if (func_280())
								{
									func_466(0);
								}
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4))
								{
									func_467(&(Local_158.f_4));
								}
							}
						}
					}
					return;
			}
		}
		if (func_143(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212, false))
			{
				switch (Local_158.f_24)
				{
					case 7:
						if (!MISC::IS_BIT_SET(iLocal_288, 10))
						{
							iVar3 = 0;
							while (iVar3 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_1212) + 1)
							{
								iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1212, (iVar3 - 1), false);
								if (iVar4 != 0)
								{
									if (!PED::IS_PED_INJURED(iVar4))
									{
										if (PED::IS_PED_A_PLAYER(iVar4))
										{
											func_145(func_132(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4)), 0, 0f, 0, 0, 0, -1);
										}
									}
								}
								iVar3++;
							}
							MISC::SET_BIT(&iLocal_288, 10);
						}
						break;
				}
			}
		}
	}
}

void func_466(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2540384.f_303))
	{
		Global_2540384.f_5979 = 1;
		Global_2540384.f_5980 = iParam0;
	}
}

void func_467(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_468(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	Global_22411.f_6 = 1;
	if (Global_2440049.f_1344 && Global_2440049.f_1352)
	{
		func_476(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2440049.f_1344)
		{
			func_476(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_475())
	{
		if (func_474(PLAYER::PLAYER_ID(), 1, 0) && !(func_473() || func_472()))
		{
			if (((bParam9 && func_143(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_226 == 1)
			{
			}
			else if (func_418() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2440049.f_1344 && !bParam11)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((vVar1.x - vParam0.x)) < 0.2f && MISC::ABSF((vVar1.y - vParam0.y)) < 0.2f) && MISC::ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2440049.f_1344 = 0;
				Global_2440049.f_1345 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2440049.f_1346 || !vParam0.y == Global_2440049.f_1346.f_1) || !vParam0.z == Global_2440049.f_1346.f_2) || !fParam3 == Global_2440049.f_1349)
	{
		if (Global_2440049.f_1344 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2440049.f_1350) < func_471(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2440049.f_1345 = 1;
		}
		else
		{
			Global_2440049.f_1345 = 0;
		}
		Global_2440049.f_1346 = { vParam0 };
		Global_2440049.f_1349 = fParam3;
		Global_2440049.f_1344 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == 1336872304)
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2440049.f_1344 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!MISC::IS_BIT_SET(Global_99007.f_1364[44], 16))
			{
				func_470(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2405074.f_499)))
			{
				Global_2405074.f_499 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2440049.f_1351 = 0;
				}
			}
		}
		if (Global_2440049.f_1351 > -1)
		{
			Global_2440049.f_1350 = NETWORK::GET_NETWORK_TIME();
			Global_2440049.f_1344 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_476(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam0, fParam3, bParam4, bParam10, false);
			}
			Global_2440049.f_1350 = NETWORK::GET_NETWORK_TIME();
			Global_2440049.f_1344 = 1;
		}
	}
	if (Global_2440049.f_1344)
	{
		Global_22411.f_6 = 1;
		Global_2440049.f_1350 = NETWORK::GET_NETWORK_TIME();
		if (Global_2440049.f_1351 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_469(&(Global_2440049.f_1351), vParam0, fParam3, iVar0))
			{
				func_476(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2440049.f_1346) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_476(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2440049.f_1352 = 1;
						return 0;
					}
				}
				func_476(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_469(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2440049.f_1353) && !ENTITY::IS_ENTITY_DEAD(Global_2440049.f_1353, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2440049.f_1353);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2440049.f_1353 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2440049.f_1353);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2440049.f_1353))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2440049.f_1353, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2440049.f_1353, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2440049.f_1353, vParam1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_470(int iParam0)
{
	int iVar0;

	iVar0 = Global_2405074.f_2684;
	if ((AUDIO::_0x2DD39BF3E2F9C47F() && Global_2405074.f_2682 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405074.f_2681)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405074.f_2681 = iVar0;
		}
	}
}

int func_471(bool bParam0)
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

bool func_472()
{
	return ((MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1696335, 12)) && Global_1696334 == 8);
}

bool func_473()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1696335, 0));
}

int func_474(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_2425869[iParam0 /*443*/].f_226 == 99)
	{
		if ((bParam2 && Global_2425869[iParam0 /*443*/].f_229 == 0) || bParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2425869[iParam0 /*443*/].f_226 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_475()
{
	return Global_1312872;
}

void func_476(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_479();
	if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 14) && !func_478())
	{
		func_477();
	}
}

void func_477()
{
	Global_2549605.f_88 = 1;
}

int func_478()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_475())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_4456448.f_134898[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

void func_479()
{
	vector3 vVar0;

	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { vVar0 };
}

int func_480()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!(Global_2462286.f_10 || MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_509, 4)))
	{
		return 0;
	}
	iVar1 = Global_2462286.f_21;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iVar1, iVar0))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_143(iVar2, 1, 1))
			{
				if (!MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_509, 4))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_481(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 1;
	Global_21998 = 0;
	Global_22002 = 0;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_84(sParam2, iParam4, 0);
}

int func_482(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 1;
	Global_21998 = 0;
	Global_22002 = 0;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 1;
	return func_84(sParam2, iParam4, 0);
}

void func_483()
{
	if (iLocal_295 == 0)
	{
		iLocal_295 = 1;
	}
}

void func_484()
{
	AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
	if (!func_341())
	{
		if (func_143(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1212) && !func_370(PLAYER::PLAYER_PED_ID(), iLocal_1212, -1))
			{
				AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
			}
		}
	}
}

void func_485()
{
	if (func_280())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_289))
		{
			if (!func_149(iLocal_1212))
			{
				iLocal_289 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_1212);
				if (HUD::DOES_BLIP_EXIST(iLocal_289))
				{
					HUD::SET_BLIP_SPRITE(iLocal_289, 422);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_289, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_289, "HTX_BLIP");
					iLocal_290 = 1;
					func_330(&iLocal_289, iLocal_290);
				}
			}
		}
	}
}

void func_486()
{
	int iVar0;

	iVar0 = SYSTEM::ROUND(10f);
	if (!func_149(iLocal_1212))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_293);
		TASK::TASK_HELI_MISSION(0, iLocal_1212, 0, 0, Local_158.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1082130432, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_293);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_292);
		TASK::TASK_HELI_MISSION(0, iLocal_1212, 0, 0, Local_158.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1082130432, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_292);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_291);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_291);
	}
}

int func_487()
{
	return Local_158;
}

int func_488(int iParam0)
{
	return vLocal_191[iParam0 /*3*/];
}

int func_489()
{
	var uVar0;

	func_496(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_495())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_494())
	{
		return 1;
	}
	if (func_493(159))
	{
		if (!func_492())
		{
			return 1;
		}
	}
	if (func_493(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_490() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_490()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_490()
{
	switch (func_299())
	{
		case 0:
			return func_491();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_491()
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

bool func_492()
{
	return Global_2451787.f_696;
}

int func_493(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_494()
{
	return Global_2462250;
}

bool func_495()
{
	return Global_2451787.f_691;
}

void func_496(var uParam0)
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
					func_497(iVar0);
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

void func_497(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_143(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_498(iVar4, &bVar5))
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

int func_498(int iParam0, bool bParam1)
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

void func_499()
{
	SYSTEM::WAIT(0);
}

void func_500(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_162())
	{
		func_161();
	}
	if (bParam0)
	{
		func_461();
	}
	func_462();
	func_268(0);
	if (func_280())
	{
		if (func_505("HTX_HELPN", "GB_HELI_BLIP"))
		{
			HUD::CLEAR_HELP(true);
			iVar0 = func_8(1190, -1, 0);
			MISC::CLEAR_BIT(&iVar0, 16);
			func_279(1190, iVar0, -1, 1, 0);
		}
		func_12(0);
	}
	else if (func_505("HTX_HELPN", "HTX_HELPB"))
	{
		HUD::CLEAR_HELP(true);
		iVar1 = func_8(1190, -1, 0);
		MISC::CLEAR_BIT(&iVar1, 16);
		func_279(1190, iVar1, -1, 1, 0);
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_158.f_4))
		{
			if (func_280())
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_158.f_4), false))
				{
					if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_1212, false))
					{
						func_277(&(Local_158.f_4));
					}
				}
			}
			if (!func_149(iLocal_1212))
			{
				if (!func_148(Local_158.f_4))
				{
					func_486();
					TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_158.f_4), iLocal_292);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_158.f_3))
				{
					if (!func_149(iLocal_1212))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1212, 1);
					}
					func_467(&(Local_158.f_3));
				}
			}
			if (func_280())
			{
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_158.f_4))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_158.f_4))
				{
					if (!func_148(Local_158.f_4))
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_158.f_4), 251, false);
					}
					func_467(&(Local_158.f_4));
				}
			}
		}
		if (!func_341())
		{
			func_503(func_504(1, 1), 13, func_5());
		}
		else
		{
			func_503(func_504(1, 1), 44, func_5());
		}
	}
	func_502();
	if (iLocal_295 == 1)
	{
		iLocal_295 = 0;
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_296);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	MISC::CLEAR_BIT(&(Global_2540384.f_874), 0);
	Global_2540384.f_260 = 0;
	func_501();
}

void func_501()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_502()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_291);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_292);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_293);
}

void func_503(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0 = -1580390976;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = iParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_504(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_143(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || bParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_313(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_505(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_506(struct<21> Param0)
{
	func_509(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_508(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_158, 32);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_191, 97);
	if (!func_507())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_158.f_5 = PLAYER::PLAYER_ID();
		Local_158.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 15f, 0f) };
		Local_158.f_10 = { -346.4007f, 1151.507f, 324.7254f };
		Local_158.f_27 = func_341();
		Local_158.f_28 = func_5();
		MISC::SET_BIT(&(Global_2540384.f_874), 0);
	}
	Global_2462286.f_26 = 0;
	Global_2462286.f_25 = 0;
	MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_509), 4);
	bLocal_997 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	vLocal_191[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_507()
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
		if (func_495())
		{
			return 0;
		}
		if (func_493(157))
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

int func_508(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_501();
			}
			else
			{
				return 0;
			}
		}
		if (!func_475())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_501();
					}
					else
					{
						return 0;
					}
				}
				if (func_495())
				{
					if (!bParam2)
					{
						func_501();
					}
					else
					{
						return 0;
					}
				}
				if (func_493(157))
				{
					if (!bParam2)
					{
						func_501();
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
					func_501();
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
				func_501();
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
			func_501();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_509(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_501();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

void func_510()
{
	iLocal_1200 = 0;
	func_511(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_511(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_511(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_511(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_511(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_511(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_511(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_511(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_511(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_511(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_511(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_511(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_511(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_511(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_511(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_511(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_511(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_511(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_511(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_511(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_511(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_511(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_511(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_511(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_511(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_511(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_511(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_511(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_511(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_511(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_511(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_511(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_511(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_511(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_511(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_511(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_511(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_511(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_511(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_511(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_511(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_511(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_511(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_511(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_511(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_511(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_511(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_511(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_511(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_511(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_511(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_511(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_511(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_511(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_511(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_511(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_511(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_511(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_511(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_511(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_511(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_511(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_511(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_511(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_511(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_511(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_511(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_511(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_511(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_511(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_511(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_511(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_511(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_511(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_511(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_511(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_511(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_511(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_511(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_511(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_511(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_511(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_511(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_511(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_511(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_511(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_511(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_511(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_511(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_511(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_511(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_511(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_511(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_511(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_511(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_511(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_511(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_511(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_511(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_511(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_511(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_511(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_511(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_511(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_511(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_511(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_511(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_511(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_511(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_511(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_511(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_511(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_511(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_511(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_511(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_511(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_511(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_511(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_511(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_511(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_511(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_511(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_511(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_511(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_511(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_511(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_511(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_511(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_511(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_511(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_511(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_511(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_511(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_511(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_511(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_511(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_511(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_511(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_511(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_511(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_511(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_511(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_511(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_511(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_511(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_511(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_511(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_511(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_511(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_511(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_511(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_511(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_511(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_511(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_511(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_511(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_511(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_511(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_511(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_511(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_511(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_511(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_511(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_511(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_511(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_511(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_511(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_511(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_511(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_511(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_511(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_511(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_511(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_511(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_511(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_511(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_511(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_511(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_511(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_511(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_511(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_511(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_511(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_511(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_511(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_511(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_511(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_511(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_511(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_511(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_511(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_511(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_511(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_511(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_511(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_511(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_511(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_511(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_511(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_511(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_511(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_511(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_511(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_511(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_511(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_511(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_511(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_511(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_511(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_511(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_511(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_511(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_511(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_511(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_511(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_511(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_511(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_511(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_511(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_511(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_511(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_511(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_511(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_511(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_511(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_511(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_511(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_511(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_511(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_511(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_511(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_511(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_511(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_511(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_511(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_511(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_511(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_511(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_511(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_511(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_511(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_511(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_511(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_511(573.138f, -903.282f, 10.653f, 359.9055f);
	func_511(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_511(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_511(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_511(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_511(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_511(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_511(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_511(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_511(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_511(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_511(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_511(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_511(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_511(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_511(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_511(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_511(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_511(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_511(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_511(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_511(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_511(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_511(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_511(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_511(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_511(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_511(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_511(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_511(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_511(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_511(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_511(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_511(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_511(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_511(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_511(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_511(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_511(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_511(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_511(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_511(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_511(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_511(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_511(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_511(644.2881f, -1840.464f, 9.0907f, 354.3967f);
	func_511(-679.2219f, -1828.494f, 27.7167f, 242.8403f);
	func_511(1054.276f, -1785.81f, 34.5576f, 331.6062f);
	func_511(-86.9453f, -1710.444f, 28.4542f, 178.6759f);
	func_511(81.025f, -1283.182f, 28.2867f, 109.4532f);
	func_511(1276.439f, -1275.396f, 41.116f, 130.9274f);
	func_511(716.5391f, -2255.983f, 28.2272f, 277.8256f);
	func_511(1719.191f, -1655.754f, 111.5146f, 219.6488f);
	func_511(121.7027f, -2965.721f, 6.0714f, 214.9908f);
	func_511(-500.846f, -2111.083f, 8.0609f, 188.9715f);
	func_511(-1196.347f, -2169.974f, 12.195f, 192.0654f);
}

void func_511(vector3 vParam0, float fParam3)
{
	Global_2412649[iLocal_1200 /*3*/] = { vParam0 };
	Global_2413547[iLocal_1200] = fParam3;
	iLocal_1200++;
}

