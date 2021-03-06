LilycoveCity_ContestLobby_MapScripts:: @ 821A211
	map_script 3, LilycoveCity_ContestLobby_MapScript1_21A21C
	map_script 2, LilycoveCity_ContestLobby_MapScript2_21A243
	.byte 0

LilycoveCity_ContestLobby_MapScript1_21A21C: @ 821A21C
	call LilycoveCity_ContestLobby_EventScript_28CB2B
	call LilycoveCity_ContestLobby_EventScript_21A227
	end

LilycoveCity_ContestLobby_EventScript_21A227:: @ 821A227
	getpricereduction 4
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21A23C
	clearflag FLAG_0x369
	setflag FLAG_0x340
	return

LilycoveCity_ContestLobby_EventScript_21A23C:: @ 821A23C
	setflag FLAG_0x369
	clearflag FLAG_0x340
	return

LilycoveCity_ContestLobby_MapScript2_21A243: @ 821A243
	map_script_2 VAR_0x4099, 1, LilycoveCity_ContestLobby_EventScript_21A255
	map_script_2 VAR_0x4099, 2, LilycoveCity_ContestLobby_EventScript_21A427
	.2byte 0

LilycoveCity_ContestLobby_EventScript_21A255:: @ 821A255
	checkflag FLAG_0x307
	goto_eq LilycoveCity_ContestLobby_EventScript_21A264
	setvar VAR_0x4099, 0
	end

LilycoveCity_ContestLobby_EventScript_21A264:: @ 821A264
	lockall
	addobject 4
	applymovement 4, LilycoveCity_ContestLobby_Movement_21A407
	waitmovement 4
	applymovement 255, LilycoveCity_ContestLobby_Movement_21A418
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_21ADB9, 4
	lockall
	fadescreen 1
	drawcontestwinner 0
	lockall
	msgbox LilycoveCity_ContestLobby_Text_21AE78, 5
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21A2AA
	compare VAR_RESULT, 0
	goto_eq LilycoveCity_ContestLobby_EventScript_21A2E4
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A2AA:: @ 821A2AA
	msgbox LilycoveCity_ContestLobby_Text_21AF63, 4
	closemessage
	special sub_80F88DC
	setvar VAR_0x4099, 0
	specialvar VAR_RESULT, sub_80F8C7C
	compare VAR_RESULT, 1
	call_if 1, LilycoveCity_ContestLobby_EventScript_21A314
	applymovement 4, LilycoveCity_ContestLobby_Movement_21A40F
	waitmovement 0
	removeobject 4
	call LilycoveCity_ContestLobby_EventScript_21A360
	call LilycoveCity_ContestLobby_EventScript_21A3B6
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A2E4:: @ 821A2E4
	msgbox LilycoveCity_ContestLobby_Text_21B0BC, 5
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21A2AA
	msgbox LilycoveCity_ContestLobby_Text_21B132, 4
	closemessage
	applymovement 4, LilycoveCity_ContestLobby_Movement_21A40F
	waitmovement 0
	setvar VAR_0x4099, 0
	removeobject 4
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A314:: @ 821A314
	incrementgamestat 42
	special sub_80F8390
	applymovement 4, LilycoveCity_ContestLobby_Movement_21A41A
	waitmovement 0
	playse SE_PIN
	applymovement 4, LilycoveCity_ContestLobby_Movement_272598
	waitmovement 0
	applymovement 4, LilycoveCity_ContestLobby_Movement_21A41E
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_21B030, 4
	playfanfare MUS_FANFA4
	msgbox LilycoveCity_ContestLobby_Text_21B07E, 4
	waitfanfare
	msgbox LilycoveCity_ContestLobby_Text_21B094, 4
	msgbox LilycoveCity_ContestLobby_Text_21B0AD, 4
	closemessage
	return

LilycoveCity_ContestLobby_EventScript_21A360:: @ 821A360
	specialvar VAR_0x8004, sub_80F8940
	switch VAR_0x8004
	case 1, LilycoveCity_ContestLobby_EventScript_21A3A2
	case 2, LilycoveCity_ContestLobby_EventScript_21A3A6
	case 3, LilycoveCity_ContestLobby_EventScript_21A3AA
	case 4, LilycoveCity_ContestLobby_EventScript_21A3AE
	case 5, LilycoveCity_ContestLobby_EventScript_21A3B2
	return

LilycoveCity_ContestLobby_EventScript_21A3A2:: @ 821A3A2
	clearflag FLAG_0x308
	return

LilycoveCity_ContestLobby_EventScript_21A3A6:: @ 821A3A6
	clearflag FLAG_0x309
	return

LilycoveCity_ContestLobby_EventScript_21A3AA:: @ 821A3AA
	clearflag FLAG_0x30A
	return

LilycoveCity_ContestLobby_EventScript_21A3AE:: @ 821A3AE
	clearflag FLAG_0x30B
	return

LilycoveCity_ContestLobby_EventScript_21A3B2:: @ 821A3B2
	clearflag FLAG_0x30C
	return

LilycoveCity_ContestLobby_EventScript_21A3B6:: @ 821A3B6
	switch VAR_CONTEST_CATEGORY
	case 0, LilycoveCity_ContestLobby_EventScript_21A3F3
	case 1, LilycoveCity_ContestLobby_EventScript_21A3F7
	case 2, LilycoveCity_ContestLobby_EventScript_21A3FB
	case 3, LilycoveCity_ContestLobby_EventScript_21A3FF
	case 4, LilycoveCity_ContestLobby_EventScript_21A403
	return

LilycoveCity_ContestLobby_EventScript_21A3F3:: @ 821A3F3
	setflag FLAG_0x0A0
	return

LilycoveCity_ContestLobby_EventScript_21A3F7:: @ 821A3F7
	setflag FLAG_0x0A1
	return

LilycoveCity_ContestLobby_EventScript_21A3FB:: @ 821A3FB
	setflag FLAG_0x0A2
	return

LilycoveCity_ContestLobby_EventScript_21A3FF:: @ 821A3FF
	setflag FLAG_0x0A3
	return

LilycoveCity_ContestLobby_EventScript_21A403:: @ 821A403
	setflag FLAG_0x0A4
	return

LilycoveCity_ContestLobby_Movement_21A407: @ 821A407
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LilycoveCity_ContestLobby_Movement_21A40F: @ 821A40F
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LilycoveCity_ContestLobby_Movement_21A418: @ 821A418
	walk_in_place_fastest_left
	step_end

LilycoveCity_ContestLobby_Movement_21A41A: @ 821A41A
	walk_down
	walk_down
	walk_down
	step_end

LilycoveCity_ContestLobby_Movement_21A41E: @ 821A41E
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_right
	step_end

LilycoveCity_ContestLobby_EventScript_21A427:: @ 821A427
	checkflag FLAG_0x307
	goto_eq LilycoveCity_ContestLobby_EventScript_21A436
	setvar VAR_0x4099, 0
	end

LilycoveCity_ContestLobby_EventScript_21A436:: @ 821A436
	lockall
	addobject 11
	applymovement 11, LilycoveCity_ContestLobby_Movement_21A533
	waitmovement 11
	applymovement 255, LilycoveCity_ContestLobby_Movement_21A545
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_21ADB9, 4
	lockall
	fadescreen 1
	drawcontestwinner 0
	msgbox LilycoveCity_ContestLobby_Text_21AE78, 5
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21A47A
	compare VAR_RESULT, 0
	goto_eq LilycoveCity_ContestLobby_EventScript_21A4B4
	end

LilycoveCity_ContestLobby_EventScript_21A47A:: @ 821A47A
	msgbox LilycoveCity_ContestLobby_Text_21AF63, 4
	closemessage
	special sub_80F88DC
	setvar VAR_0x4099, 0
	specialvar VAR_RESULT, sub_80F8C7C
	compare VAR_RESULT, 1
	call_if 1, LilycoveCity_ContestLobby_EventScript_21A4E4
	applymovement 11, LilycoveCity_ContestLobby_Movement_21A53C
	waitmovement 0
	removeobject 11
	call LilycoveCity_ContestLobby_EventScript_21A360
	call LilycoveCity_ContestLobby_EventScript_21A3B6
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A4B4:: @ 821A4B4
	msgbox LilycoveCity_ContestLobby_Text_21B0BC, 5
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21A47A
	msgbox LilycoveCity_ContestLobby_Text_21B132, 4
	closemessage
	applymovement 11, LilycoveCity_ContestLobby_Movement_21A53C
	waitmovement 0
	setvar VAR_0x4099, 0
	removeobject 11
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A4E4:: @ 821A4E4
	incrementgamestat 42
	setflag FLAG_SYS_RIBBON_GET
	special sub_80F8390
	applymovement 11, LilycoveCity_ContestLobby_Movement_21A547
	waitmovement 0
	playse SE_PIN
	applymovement 11, LilycoveCity_ContestLobby_Movement_272598
	waitmovement 0
	applymovement 11, LilycoveCity_ContestLobby_Movement_21A54B
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_21B030, 4
	playfanfare MUS_FANFA4
	msgbox LilycoveCity_ContestLobby_Text_21B07E, 4
	waitfanfare
	msgbox LilycoveCity_ContestLobby_Text_21B094, 4
	msgbox LilycoveCity_ContestLobby_Text_21B0AD, 4
	closemessage
	return

LilycoveCity_ContestLobby_Movement_21A533: @ 821A533
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

LilycoveCity_ContestLobby_Movement_21A53C: @ 821A53C
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LilycoveCity_ContestLobby_Movement_21A545: @ 821A545
	walk_in_place_fastest_right
	step_end

LilycoveCity_ContestLobby_Movement_21A547: @ 821A547
	walk_down
	walk_down
	walk_down
	step_end

LilycoveCity_ContestLobby_Movement_21A54B: @ 821A54B
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_left
	step_end

LilycoveCity_ContestLobby_EventScript_21A554:: @ 821A554
	special sub_80F9154
	specialvar VAR_RESULT, sub_80F8D24
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21A5CF
	call LilycoveCity_ContestLobby_EventScript_279CC5
	call LilycoveCity_ContestLobby_EventScript_21A670
	special sub_80F87D8
	call LilycoveCity_ContestLobby_EventScript_23BEB6
	call LilycoveCity_ContestLobby_EventScript_21A585
	call LilycoveCity_ContestLobby_EventScript_21A5EF
	waitstate
	end

LilycoveCity_ContestLobby_EventScript_21A585:: @ 821A585
	switch VAR_CONTEST_RANK
	case 0, LilycoveCity_ContestLobby_EventScript_21A5B7
	case 1, LilycoveCity_ContestLobby_EventScript_21A5BD
	case 2, LilycoveCity_ContestLobby_EventScript_21A5C3
	case 3, LilycoveCity_ContestLobby_EventScript_21A5C9
	return

LilycoveCity_ContestLobby_EventScript_21A5B7:: @ 821A5B7
	setvar VAR_0x4088, 1
	return

LilycoveCity_ContestLobby_EventScript_21A5BD:: @ 821A5BD
	setvar VAR_0x4088, 2
	return

LilycoveCity_ContestLobby_EventScript_21A5C3:: @ 821A5C3
	setvar VAR_0x4088, 3
	return

LilycoveCity_ContestLobby_EventScript_21A5C9:: @ 821A5C9
	setvar VAR_0x4088, 4
	return

LilycoveCity_ContestLobby_EventScript_21A5CF:: @ 821A5CF
	setflag FLAG_0x307
	copyvar VAR_0x4094, 0x1
	giveitem ITEM_CONTEST_PASS, 1
	setvar VAR_0x800B, 8
	setvar VAR_CONTEST_RANK, 3
	setvar VAR_0x4099, 1
	setflag FLAG_SYS_RIBBON_GET
	end

LilycoveCity_ContestLobby_EventScript_21A5EF:: @ 821A5EF
	setflag FLAG_0x155
	switch VAR_CONTEST_CATEGORY
	case 0, LilycoveCity_ContestLobby_EventScript_21A62F
	case 1, LilycoveCity_ContestLobby_EventScript_21A63C
	case 2, LilycoveCity_ContestLobby_EventScript_21A649
	case 3, LilycoveCity_ContestLobby_EventScript_21A656
	case 4, LilycoveCity_ContestLobby_EventScript_21A663
	return

LilycoveCity_ContestLobby_EventScript_21A62F:: @ 821A62F
	setwarp MAP_LINK_CONTEST_ROOM4, 255, 7, 5
	special sub_80AFC60
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21A63C:: @ 821A63C
	setwarp MAP_LINK_CONTEST_ROOM2, 255, 7, 5
	special sub_80AFC60
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21A649:: @ 821A649
	setwarp MAP_LINK_CONTEST_ROOM6, 255, 7, 5
	special sub_80AFC60
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21A656:: @ 821A656
	setwarp MAP_LINK_CONTEST_ROOM5, 255, 7, 5
	special sub_80AFC60
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21A663:: @ 821A663
	setwarp MAP_LINK_CONTEST_ROOM3, 255, 7, 5
	special sub_80AFC60
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21A670:: @ 821A670
	lockall
	applymovement 1, LilycoveCity_ContestLobby_Movement_21A6F5
	waitmovement 0
	playse SE_HASHI
	setmetatile 12, 2, 545, 1
	setmetatile 12, 3, 609, 1
	special DrawWholeMapView
	applymovement 1, LilycoveCity_ContestLobby_Movement_21A6F9
	waitmovement 0
	playse SE_HASHI
	setmetatile 12, 2, 721, 1
	setmetatile 12, 3, 729, 1
	special DrawWholeMapView
	delay 20
	applymovement 1, LilycoveCity_ContestLobby_Movement_21A706
	waitmovement 0
	applymovement 255, LilycoveCity_ContestLobby_Movement_21A6F2
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_27B653, 4
	closemessage
	applymovement 1, LilycoveCity_ContestLobby_Movement_21A6FD
	applymovement 255, LilycoveCity_ContestLobby_Movement_21A6E8
	waitmovement 0
	releaseall
	return

LilycoveCity_ContestLobby_Movement_21A6E8: @ 821A6E8
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

LilycoveCity_ContestLobby_Movement_21A6F2: @ 821A6F2
	walk_in_place_fastest_left
	walk_left
	step_end

LilycoveCity_ContestLobby_Movement_21A6F5: @ 821A6F5
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end

LilycoveCity_ContestLobby_Movement_21A6F9: @ 821A6F9
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end

LilycoveCity_ContestLobby_Movement_21A6FD: @ 821A6FD
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

LilycoveCity_ContestLobby_Movement_21A706: @ 821A706
	walk_in_place_fastest_right
	step_end

LilycoveCity_ContestLobby_EventScript_21A708:: @ 821A708
	msgbox LilycoveCity_ContestLobby_Text_21B1B1, 2
	end

LilycoveCity_ContestLobby_EventScript_21A711:: @ 821A711
	msgbox LilycoveCity_ContestLobby_Text_21B24D, 2
	end

LilycoveCity_ContestLobby_EventScript_21A71A:: @ 821A71A
	msgbox LilycoveCity_ContestLobby_Text_21B2BA, 2
	end

LilycoveCity_ContestLobby_EventScript_21A723:: @ 821A723
	msgbox LilycoveCity_ContestLobby_Text_21B334, 2
	end

LilycoveCity_ContestLobby_EventScript_21A72C:: @ 821A72C
	msgbox LilycoveCity_ContestLobby_Text_21B392, 2
	end

LilycoveCity_ContestLobby_EventScript_21A735:: @ 821A735
	msgbox LilycoveCity_ContestLobby_Text_21B3FC, 2
	end

LilycoveCity_ContestLobby_EventScript_21A73E:: @ 821A73E
	lockall
	fadescreen 1
	drawcontestwinner 1
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A745:: @ 821A745
	lockall
	fadescreen 1
	drawcontestwinner 2
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A74C:: @ 821A74C
	lockall
	fadescreen 1
	drawcontestwinner 3
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A753:: @ 821A753
	lockall
	fadescreen 1
	drawcontestwinner 4
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A75A:: @ 821A75A
	lockall
	fadescreen 1
	drawcontestwinner 5
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A761:: @ 821A761
	lockall
	fadescreen 1
	drawcontestwinner 6
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A768:: @ 821A768
	msgbox LilycoveCity_ContestLobby_Text_2931AA, 2
	end

LilycoveCity_ContestLobby_EventScript_21A771:: @ 821A771
	msgbox LilycoveCity_ContestLobby_Text_2931C6, 2
	end

LilycoveCity_ContestLobby_EventScript_21A77A:: @ 821A77A
	lockall
	special ShowBerryBlenderRecordWindow
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A784:: @ 821A784
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 7
	special sub_81A1780
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_21A798:: @ 821A798
	lock
	faceplayer
	msgbox LilycoveCity_ContestLobby_Text_2C427C, 4
	goto LilycoveCity_ContestLobby_EventScript_21A7F9
	end

LilycoveCity_ContestLobby_EventScript_21A7A8:: @ 821A7A8
	lock
	msgbox LilycoveCity_ContestLobby_Text_2C464B, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21A7B3:: @ 821A7B3
	lock
	msgbox LilycoveCity_ContestLobby_Text_2C465A, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21A7BE:: @ 821A7BE
	lock
	msgbox LilycoveCity_ContestLobby_Text_2C4669, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21A7C9:: @ 821A7C9
	lock
	faceplayer
	msgbox LilycoveCity_ContestLobby_Text_2C4679, 4
	goto LilycoveCity_ContestLobby_EventScript_21A7F9
	end

LilycoveCity_ContestLobby_EventScript_21A7D9:: @ 821A7D9
	lock
	faceplayer
	msgbox LilycoveCity_ContestLobby_Text_2C46B1, 4
	goto LilycoveCity_ContestLobby_EventScript_21A7F9
	end

LilycoveCity_ContestLobby_EventScript_21A7E9:: @ 821A7E9
	lock
	faceplayer
	msgbox LilycoveCity_ContestLobby_Text_2C4763, 4
	goto LilycoveCity_ContestLobby_EventScript_21A7F9
	end

LilycoveCity_ContestLobby_EventScript_21A7F9:: @ 821A7F9
	closemessage
	applymovement VAR_LAST_TALKED, LilycoveCity_ContestLobby_Movement_2725A2
	waitmovement 0
	release
	end

LilycoveCity_ContestLobby_EventScript_21A806:: @ 821A806
	special sub_80F9154
	lock
	faceplayer
	msgbox LilycoveCity_ContestLobby_Text_27C063, 4
	goto LilycoveCity_ContestLobby_EventScript_21A819
	end

LilycoveCity_ContestLobby_EventScript_21A819:: @ 821A819
	message LilycoveCity_ContestLobby_Text_27C0F6
	waitmessage
	multichoice 0, 0, 2, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_21A856
	case 1, LilycoveCity_ContestLobby_EventScript_21A90D
	case 2, LilycoveCity_ContestLobby_EventScript_21A97F
	case 127, LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21A856:: @ 821A856
	msgbox LilycoveCity_ContestLobby_Text_27BD17, 5
	compare VAR_RESULT, 0
	goto_eq LilycoveCity_ContestLobby_EventScript_21A97F
	call LilycoveCity_ContestLobby_EventScript_27134F
	compare VAR_RESULT, 0
	goto_eq LilycoveCity_ContestLobby_EventScript_21A97F
	message LilycoveCity_ContestLobby_Text_27C8FD
	waitmessage
	specialvar VAR_TEMP_D, IsWirelessAdapterConnected
	multichoice 0, 0, 85, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_21A8BB
	case 1, LilycoveCity_ContestLobby_EventScript_21A8C6
	case 2, LilycoveCity_ContestLobby_EventScript_21A97F
	case 127, LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21A8BB:: @ 821A8BB
	setvar VAR_TEMP_C, 0
	goto LilycoveCity_ContestLobby_EventScript_21A8DC
	end

LilycoveCity_ContestLobby_EventScript_21A8C6:: @ 821A8C6
	setvar VAR_TEMP_C, 1
	compare VAR_TEMP_D, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21AAFC
	goto LilycoveCity_ContestLobby_EventScript_21A8DC
	end

LilycoveCity_ContestLobby_EventScript_21A8DC:: @ 821A8DC
	message LilycoveCity_ContestLobby_Text_27C119
	waitmessage
	multichoice 0, 0, 4, 0
	switch VAR_RESULT
	case 5, LilycoveCity_ContestLobby_EventScript_21A97F
	case 127, LilycoveCity_ContestLobby_EventScript_21A97F
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
	goto LilycoveCity_ContestLobby_EventScript_21A98C
	end

LilycoveCity_ContestLobby_EventScript_21A90D:: @ 821A90D
	message LilycoveCity_ContestLobby_Text_27C0DA
	waitmessage
	multichoice 0, 0, 84, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_21A955
	case 1, LilycoveCity_ContestLobby_EventScript_21A963
	case 2, LilycoveCity_ContestLobby_EventScript_21A971
	case 3, LilycoveCity_ContestLobby_EventScript_21A819
	case 127, LilycoveCity_ContestLobby_EventScript_21A819
	end

LilycoveCity_ContestLobby_EventScript_21A955:: @ 821A955
	msgbox LilycoveCity_ContestLobby_Text_27C340, 4
	goto LilycoveCity_ContestLobby_EventScript_21A90D
	end

LilycoveCity_ContestLobby_EventScript_21A963:: @ 821A963
	msgbox LilycoveCity_ContestLobby_Text_27C5B1, 4
	goto LilycoveCity_ContestLobby_EventScript_21A90D
	end

LilycoveCity_ContestLobby_EventScript_21A971:: @ 821A971
	msgbox LilycoveCity_ContestLobby_Text_27C742, 4
	goto LilycoveCity_ContestLobby_EventScript_21A90D
	end

LilycoveCity_ContestLobby_EventScript_21A97F:: @ 821A97F
	special CloseLink
	msgbox LilycoveCity_ContestLobby_Text_27BD4F, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21A98C:: @ 821A98C
	msgbox LilycoveCity_ContestLobby_Text_27C1C3, 4
	setvar VAR_CONTEST_RANK, 0
	choosecontestmon
	compare VAR_0x8004, 255
	goto_eq LilycoveCity_ContestLobby_EventScript_21A97F
	special sub_80F7F30
	compare VAR_RESULT, 0
	goto_eq LilycoveCity_ContestLobby_EventScript_21A9E0
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21AA0A
	compare VAR_RESULT, 2
	goto_eq LilycoveCity_ContestLobby_EventScript_21AA0A
	compare VAR_RESULT, 3
	goto_eq LilycoveCity_ContestLobby_EventScript_21A9EE
	compare VAR_RESULT, 4
	goto_eq LilycoveCity_ContestLobby_EventScript_21A9FC
	end

LilycoveCity_ContestLobby_EventScript_21A9E0:: @ 821A9E0
	msgbox LilycoveCity_ContestLobby_Text_27B471, 4
	goto LilycoveCity_ContestLobby_EventScript_21A98C
	end

LilycoveCity_ContestLobby_EventScript_21A9EE:: @ 821A9EE
	msgbox LilycoveCity_ContestLobby_Text_27C186, 4
	goto LilycoveCity_ContestLobby_EventScript_21A98C
	end

LilycoveCity_ContestLobby_EventScript_21A9FC:: @ 821A9FC
	msgbox LilycoveCity_ContestLobby_Text_27C140, 4
	goto LilycoveCity_ContestLobby_EventScript_21A98C
	end

LilycoveCity_ContestLobby_EventScript_21AA0A:: @ 821AA0A
	copyvar VAR_0x8008, VAR_0x8004
	goto LilycoveCity_ContestLobby_EventScript_21AA15
	end

LilycoveCity_ContestLobby_EventScript_21AA15:: @ 821AA15
	compare VAR_TEMP_D, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21AB4B
	compare VAR_TEMP_D, 2
	goto_if 4, LilycoveCity_ContestLobby_EventScript_21A97F
	message LilycoveCity_ContestLobby_Text_27BF85
	waitmessage
	copyvar VAR_0x8004, VAR_RESULT
	compare VAR_TEMP_C, 0
	call_if 1, LilycoveCity_ContestLobby_EventScript_21AABB
	compare VAR_TEMP_C, 1
	call_if 1, LilycoveCity_ContestLobby_EventScript_21AAC0
	compare VAR_TEMP_C, 2
	goto_if 4, LilycoveCity_ContestLobby_EventScript_21A97F
	compare VAR_RESULT, 4
	goto_eq LilycoveCity_ContestLobby_EventScript_21AAD3
	compare VAR_RESULT, 3
	goto_eq LilycoveCity_ContestLobby_EventScript_21AAD3
	compare VAR_RESULT, 5
	goto_eq LilycoveCity_ContestLobby_EventScript_21A97F
	compare VAR_RESULT, 6
	goto_eq LilycoveCity_ContestLobby_EventScript_21AAEF
	compare VAR_RESULT, 10
	goto_eq LilycoveCity_ContestLobby_EventScript_21AAE1
	message3 LilycoveCity_ContestLobby_Text_27BEEC
	contestlinktransfer
	switch VAR_0x8004
	case 0, LilycoveCity_ContestLobby_EventScript_21AB17
	case 1, LilycoveCity_ContestLobby_EventScript_21AAC5
	case 2, LilycoveCity_ContestLobby_EventScript_21AB09
	end

LilycoveCity_ContestLobby_EventScript_21AABB:: @ 821AABB
	special sub_80B3028
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21AAC0:: @ 821AAC0
	special sub_80B3000
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21AAC5:: @ 821AAC5
	msgbox LilycoveCity_ContestLobby_Text_27BF0E, 4
	goto LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21AAD3:: @ 821AAD3
	msgbox LilycoveCity_ContestLobby_Text_27BF4B, 4
	goto LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21AAE1:: @ 821AAE1
	msgbox LilycoveCity_ContestLobby_Text_27C254, 4
	goto LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21AAEF:: @ 821AAEF
	special CloseLink
	msgbox LilycoveCity_ContestLobby_Text_27821C, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21AAFC:: @ 821AAFC
	special CloseLink
	msgbox LilycoveCity_ContestLobby_Text_27C879, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21AB09:: @ 821AB09
	msgbox LilycoveCity_ContestLobby_Text_27BEFA, 4
	goto LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21AB17:: @ 821AB17
	special sub_80F84B0
	addvar VAR_0x8004, 1
	buffernumberstring 1, VAR_0x8004
	messageautoscroll LilycoveCity_ContestLobby_Text_27BFF8
	waitmessage
	subvar VAR_0x8004, 1
	call LilycoveCity_ContestLobby_EventScript_21AC49
	setvar VAR_0x4086, 1
	special sub_80F8AFC
	setvar VAR_0x4088, 5
	setvar VAR_CONTEST_RANK, 3
	call LilycoveCity_ContestLobby_EventScript_21A5EF
	end

LilycoveCity_ContestLobby_EventScript_21AB4B:: @ 821AB4B
	compare VAR_CONTEST_CATEGORY, 0
	call_if 1, LilycoveCity_ContestLobby_EventScript_21AB88
	compare VAR_CONTEST_CATEGORY, 1
	call_if 1, LilycoveCity_ContestLobby_EventScript_21AB8E
	compare VAR_CONTEST_CATEGORY, 2
	call_if 1, LilycoveCity_ContestLobby_EventScript_21AB94
	compare VAR_CONTEST_CATEGORY, 3
	call_if 1, LilycoveCity_ContestLobby_EventScript_21AB9A
	compare VAR_CONTEST_CATEGORY, 4
	call_if 1, LilycoveCity_ContestLobby_EventScript_21ABA0
	goto LilycoveCity_ContestLobby_EventScript_21ABA6
	end

LilycoveCity_ContestLobby_EventScript_21AB88:: @ 821AB88
	setvar VAR_0x8004, BURGER_KING_FOOT_LETTUCE
	return

LilycoveCity_ContestLobby_EventScript_21AB8E:: @ 821AB8E
	setvar VAR_0x8004, 16
	return

LilycoveCity_ContestLobby_EventScript_21AB94:: @ 821AB94
	setvar VAR_0x8004, 17
	return

LilycoveCity_ContestLobby_EventScript_21AB9A:: @ 821AB9A
	setvar VAR_0x8004, 18
	return

LilycoveCity_ContestLobby_EventScript_21ABA0:: @ 821ABA0
	setvar VAR_0x8004, 19
	return

LilycoveCity_ContestLobby_EventScript_21ABA6:: @ 821ABA6
	message Text_DecideLinkLeader
	waitmessage
	multichoice 16, 6, 81, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_21AC0B
	case 1, LilycoveCity_ContestLobby_EventScript_21ABE3
	case 2, LilycoveCity_ContestLobby_EventScript_21A97F
	case 127, LilycoveCity_ContestLobby_EventScript_21A97F
	end

LilycoveCity_ContestLobby_EventScript_21ABE3:: @ 821ABE3
	call LilycoveCity_ContestLobby_EventScript_21AC33
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21AC3D
	compare VAR_RESULT, 5
	goto_eq LilycoveCity_ContestLobby_EventScript_21ABA6
	compare VAR_RESULT, 8
	goto_eq LilycoveCity_ContestLobby_EventScript_21ABE3
	release
	end

LilycoveCity_ContestLobby_EventScript_21AC0B:: @ 821AC0B
	call LilycoveCity_ContestLobby_EventScript_21AC38
	compare VAR_RESULT, 1
	goto_eq LilycoveCity_ContestLobby_EventScript_21AC3D
	compare VAR_RESULT, 5
	goto_eq LilycoveCity_ContestLobby_EventScript_21ABA6
	compare VAR_RESULT, 8
	goto_eq LilycoveCity_ContestLobby_EventScript_21AC0B
	release
	end

LilycoveCity_ContestLobby_EventScript_21AC33:: @ 821AC33
	special BerryBlenderLinkBecomeLeader
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21AC38:: @ 821AC38
	special BerryBlenderLinkJoinGroup
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_21AC3D:: @ 821AC3D
	message3 LilycoveCity_ContestLobby_Text_27BEEC
	contestlinktransfer
	goto LilycoveCity_ContestLobby_EventScript_21AB17
	end

LilycoveCity_ContestLobby_EventScript_21AC49:: @ 821AC49
	messageautoscroll LilycoveCity_ContestLobby_Text_27C043
	waitmessage
	delay 20
	closemessage
	applymovement 2, LilycoveCity_ContestLobby_Movement_21ACDD
	waitmovement 0
	playse SE_HASHI
	setmetatile 17, 2, 545, 1
	setmetatile 17, 3, 609, 1
	special DrawWholeMapView
	applymovement 2, LilycoveCity_ContestLobby_Movement_21ACE1
	waitmovement 0
	playse SE_HASHI
	setmetatile 17, 2, 721, 1
	setmetatile 17, 3, 729, 1
	special DrawWholeMapView
	delay 20
	applymovement 2, LilycoveCity_ContestLobby_Movement_21ACEF
	waitmovement 0
	applymovement 255, LilycoveCity_ContestLobby_Movement_21ACDB
	waitmovement 0
	messageautoscroll LilycoveCity_ContestLobby_Text_27B653
	waitmessage
	delay 20
	closemessage
	call LilycoveCity_ContestLobby_EventScript_27AD92
	applymovement 2, LilycoveCity_ContestLobby_Movement_21ACE5
	applymovement 255, LilycoveCity_ContestLobby_Movement_21ACD0
	waitmovement 0
	release
	return

LilycoveCity_ContestLobby_Movement_21ACD0: @ 821ACD0
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

LilycoveCity_ContestLobby_Movement_21ACDB: @ 821ACDB
	walk_right
	step_end

LilycoveCity_ContestLobby_Movement_21ACDD: @ 821ACDD
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

LilycoveCity_ContestLobby_Movement_21ACE1: @ 821ACE1
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end

LilycoveCity_ContestLobby_Movement_21ACE5: @ 821ACE5
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

LilycoveCity_ContestLobby_Movement_21ACEF: @ 821ACEF
	walk_in_place_fastest_left
	step_end

LilycoveCity_ContestLobby_EventScript_21ACF1:: @ 821ACF1
	lock
	faceplayer
	checkflag FLAG_0x05F
	goto_eq LilycoveCity_ContestLobby_EventScript_21AD06
	msgbox LilycoveCity_ContestLobby_Text_21AD10, 4
	release
	end

LilycoveCity_ContestLobby_EventScript_21AD06:: @ 821AD06
	msgbox LilycoveCity_ContestLobby_Text_21AD55, 4
	release
	end

LilycoveCity_ContestLobby_Text_21AD10: @ 821AD10
	.string "Yippee!\p"
	.string "The lady at the reception counter\n"
	.string "gave me a case for {POKEBLOCK}S!$"

LilycoveCity_ContestLobby_Text_21AD55: @ 821AD55
	.string "Make {POKEBLOCK}S and put them in there.\p"
	.string "When you make a {POKEBLOCK}, everyone\n"
	.string "has to put in a different BERRY.$"

LilycoveCity_ContestLobby_Text_21ADB9: @ 821ADB9
	.string "Congratulations!\p"
	.string "I did a painting of your POKéMON to\n"
	.string "commemorate its victory…\p"
	.string "Well, your POKéMON’s appeals were\n"
	.string "so fantastic, it spurred me into\l"
	.string "painting better than I usually do.\l"
	.string "Look, see?$"

LilycoveCity_ContestLobby_Text_21AE78: @ 821AE78
	.string "What do you think? I’m confident in\n"
	.string "what I’ve done, but do you like it?\p"
	.string "A work of this caliber, it wouldn’t look\n"
	.string "out of place in an art museum.\p"
	.string "Huh? An art museum really is looking\n"
	.string "for paintings?\p"
	.string "Do you think I should take this there?$"

LilycoveCity_ContestLobby_Text_21AF63: @ 821AF63
	.string "What, really? Then, sure, I will take\n"
	.string "this painting there right now.\p"
	.string "I’ll give it a proper title, too.\p"
	.string "I hope they’ll like it and consider\n"
	.string "exhibiting this.\p"
	.string "Please check if they did accept this.\n"
	.string "Thank you!$"

LilycoveCity_ContestLobby_Text_21B030: @ 821B030
	.string "Oh, that’s right!\p"
	.string "As a memento of me painting your\n"
	.string "POKéMON, please take this.$"

LilycoveCity_ContestLobby_Text_21B07E: @ 821B07E
	.string "{PLAYER} received a RIBBON.$"

LilycoveCity_ContestLobby_Text_21B094: @ 821B094
	.string "{PLAYER} put the RIBBON on\n"
	.string "{STR_VAR_1}.$"

LilycoveCity_ContestLobby_Text_21B0AD: @ 821B0AD
	.string "Okay, see you!$"

LilycoveCity_ContestLobby_Text_21B0BC: @ 821B0BC
	.string "Oh… Then, I guess I’ll just take\n"
	.string "this home with me…\p"
	.string "But, you know, I would like to take\n"
	.string "this to the art museum… Okay?$"

LilycoveCity_ContestLobby_Text_21B132: @ 821B132
	.string "Oh, fine, that’s the way it is.\n"
	.string "I will hang this in my own house.\p"
	.string "I’ll just have to try harder next time.\n"
	.string "Well, be seeing you.$"

LilycoveCity_ContestLobby_Text_21B1B1: @ 821B1B1
	.string "Hoo, boy… Master Rank CONTESTS,\n"
	.string "here I come.\p"
	.string "The world will know that my dearest\n"
	.string "POKéMON is the cutest being in all\l"
	.string "existence. The time has come!\l"
	.string "Uheheheh.$"

LilycoveCity_ContestLobby_Text_21B24D: @ 821B24D
	.string "You can see a whole variety of\n"
	.string "POKéMON here.\p"
	.string "That’s why I make this place a regular\n"
	.string "part of my daily stroll.$"

LilycoveCity_ContestLobby_Text_21B2BA: @ 821B2BA
	.string "Wow, coming out to a CONTEST is\n"
	.string "a feast for these eyes!\p"
	.string "Would you look at all the POKéMON\n"
	.string "that just scream to be painted?$"

LilycoveCity_ContestLobby_Text_21B334: @ 821B334
	.string "The TOUGHNESS CONTEST is like\n"
	.string "extreme, man!\p"
	.string "Those muscular appeals…\n"
	.string "Cascading sweat… I swoon!$"

LilycoveCity_ContestLobby_Text_21B392: @ 821B392
	.string "Day in and day out, I lavished my care\n"
	.string "on this POKéMON.\p"
	.string "Its condition is peaking.\n"
	.string "Today, victory is mine!$"

LilycoveCity_ContestLobby_Text_21B3FC: @ 821B3FC
	.string "I made {POKEBLOCK}S with Mom, Dad, and\n"
	.string "Big Sister. They turned out great!\p"
	.string "I bet you can make smoother, better\n"
	.string "{POKEBLOCK}S if you have more people.$"

