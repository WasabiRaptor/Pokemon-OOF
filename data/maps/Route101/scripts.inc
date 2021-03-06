Route101_MapScripts:: @ 81EBCBA
	map_script 3, Route101_MapScript1_1EBCC5
	map_script 2, Route101_MapScript2_1EBCCB
	.byte 0

Route101_MapScript1_1EBCC5: @ 81EBCC5
	call Route101_EventScript_2720AD
	end

Route101_MapScript2_1EBCCB: @ 81EBCCB
	map_script_2 VAR_0x4060, 0, Route101_EventScript_1EBCD5
	.2byte 0

Route101_EventScript_1EBCD5:: @ 81EBCD5
	setflag FLAG_SPECIAL_FLAG_0x4000
	setvar VAR_0x4060, 1
	end

Route101_EventScript_1EBCDE:: @ 81EBCDE
	lockall
	playbgm MUS_EVENT0, 1
	msgbox Route101_Text_1EBE8F, 4
	closemessage
	setobjectxy 2, 0, BURGER_KING_FOOT_LETTUCE
	setobjectxy 4, 0, 16
	applymovement 255, Route101_Movement_1EBDC2
	applymovement 2, Route101_Movement_1EBDE7
	applymovement 4, Route101_Movement_1EBDB5
	waitmovement 0
	applymovement 4, Route101_Movement_1EBD96
	applymovement 2, Route101_Movement_1EBDC8
	waitmovement 0
	applymovement 2, Route101_Movement_2725A8
	waitmovement 0
	applymovement 4, Route101_Movement_1EBDBD
	applymovement 2, Route101_Movement_1EBDEF
	waitmovement 0
	msgbox Route101_Text_1EBE9A, 4
	closemessage
	setvar VAR_0x4060, 2
	releaseall
	end

Route101_EventScript_1EBD4E:: @ 81EBD4E
	lockall
	msgbox Route101_Text_1EBEDF, 4
	closemessage
	applymovement 255, Route101_Movement_1EBD90
	waitmovement 0
	releaseall
	end

Route101_EventScript_1EBD64:: @ 81EBD64
	lockall
	msgbox Route101_Text_1EBEDF, 4
	closemessage
	applymovement 255, Route101_Movement_1EBD92
	waitmovement 0
	releaseall
	end

Route101_EventScript_1EBD7A:: @ 81EBD7A
	lockall
	msgbox Route101_Text_1EBEDF, 4
	closemessage
	applymovement 255, Route101_Movement_1EBD94
	waitmovement 0
	releaseall
	end

Route101_Movement_1EBD90: @ 81EBD90
	walk_up
	step_end

Route101_Movement_1EBD92: @ 81EBD92
	walk_right
	step_end

Route101_Movement_1EBD94: @ 81EBD94
	walk_down
	step_end

Route101_Movement_1EBD96: @ 81EBD96
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_1EBDB5: @ 81EBDB5
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

Route101_Movement_1EBDBC: @ 81EBDBC
	step_end

Route101_Movement_1EBDBD: @ 81EBDBD
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Route101_Movement_1EBDC2: @ 81EBDC2
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_left
	step_end

Route101_Movement_1EBDC8: @ 81EBDC8
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_1EBDE7: @ 81EBDE7
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

Route101_Movement_1EBDEE: @ 81EBDEE
	step_end

Route101_Movement_1EBDEF: @ 81EBDEF
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route101_Movement_1EBDF4: @ 81EBDF4
	walk_up
	walk_up
	step_end

Route101_Movement_1EBDF7: @ 81EBDF7
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_1EBDFB:: @ 81EBDFB
	msgbox Route101_Text_1EBFDD, 2
	end

Route101_EventScript_1EBE04:: @ 81EBE04
	msgbox Route101_Text_1EC04A, 2
	end

Route101_EventScript_1EBE0D:: @ 81EBE0D
	msgbox Route101_Text_1EC0C8, 3
	end

Route101_EventScript_1EBE16:: @ 81EBE16
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_0x052
	fadescreen 1
	removeobject 4
	setobjectxy 255, 6, 13
	applymovement 255, Route101_Movement_2725A4
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement 2, Route101_Movement_1EBE8D
	waitmovement 0
	msgbox Route101_Text_1EBF12, 4
	special HealPlayerParty
	setflag FLAG_0x2D0
	clearflag FLAG_0x2D1
	setflag FLAG_0x2BC
	setvar VAR_0x4084, 2
	setvar VAR_0x4060, 3
	clearflag FLAG_SPECIAL_FLAG_0x4000
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, Route101_EventScript_1EBE85
	compare VAR_RESULT, 1
	call_if 1, Route101_EventScript_1EBE89
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	waitstate
	release
	end

Route101_EventScript_1EBE85:: @ 81EBE85
	setflag FLAG_0x2D2
	return

Route101_EventScript_1EBE89:: @ 81EBE89
	setflag FLAG_0x2F8
	return

Route101_Movement_1EBE8D: @ 81EBE8D
	walk_right
	step_end

Route101_Text_1EBE8F: @ 81EBE8F
	.string "H-help me!$"

Route101_Text_1EBE9A: @ 81EBE9A
	.string "Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my BAG!\n"
	.string "There’s a POKé BALL!$"

Route101_Text_1EBEDF: @ 81EBEDF
	.string "Wh-Where are you going?!\n"
	.string "Don’t leave me like this!$"

Route101_Text_1EBF12: @ 81EBF12
	.string "PROF. BIRCH: Whew…\p"
	.string "I was in the tall grass studying wild\n"
	.string "POKéMON when I was jumped.\p"
	.string "You saved me.\n"
	.string "Thanks a lot!\p"
	.string "Oh?\p"
	.string "Hi, you’re {PLAYER}{KUN}!\p"
	.string "This is not the place to chat, so come\n"
	.string "by my POKéMON LAB later, okay?$"

Route101_Text_1EBFDD: @ 81EBFDD
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There’s a POKéMON CENTER in OLDALE\n"
	.string "TOWN right close by.$"

Route101_Text_1EC04A: @ 81EC04A
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_1EC0C8: @ 81EC0C8
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"

