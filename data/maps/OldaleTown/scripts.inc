OldaleTown_MapScripts:: @ 81E8EA2
	map_script 3, OldaleTown_MapScript1_1E8EA8
	.byte 0

OldaleTown_MapScript1_1E8EA8: @ 81E8EA8
	call OldaleTown_EventScript_271ED7
	setflag FLAG_VISITED_OLDALE_TOWN
	checkflag FLAG_0x074
	call_if 0, OldaleTown_EventScript_1E8ED2
	checkflag FLAG_0x084
	call_if 0, OldaleTown_EventScript_1E8EDE
	checkflag FLAG_0x074
	call_if 1, OldaleTown_EventScript_1E8ECC
	end

OldaleTown_EventScript_1E8ECC:: @ 81E8ECC
	setvar VAR_0x4051, 1
	return

OldaleTown_EventScript_1E8ED2:: @ 81E8ED2
	setobjectxyperm 3, 1, 11
	setobjectmovementtype 3, 9
	return

OldaleTown_EventScript_1E8EDE:: @ 81E8EDE
	setobjectxyperm 2, 13, 14
	setobjectmovementtype 2, 8
	return

OldaleTown_EventScript_1E8EEA:: @ 81E8EEA
	msgbox OldaleTown_Text_1E94DA, 3
	end

OldaleTown_EventScript_1E8EF3:: @ 81E8EF3
	msgbox OldaleTown_Text_1E918E, 2
	end

OldaleTown_EventScript_1E8EFC:: @ 81E8EFC
	lock
	faceplayer
	checkflag FLAG_0x084
	goto_eq OldaleTown_EventScript_1E8FB9
	checkflag FLAG_0x001
	goto_eq OldaleTown_EventScript_1E8FB9
	setflag FLAG_0x001
	playbgm MUS_TSURETEK, 0
	msgbox OldaleTown_Text_1E91C0, 4
	closemessage
	switch VAR_FACING
	case 1, OldaleTown_EventScript_1E8F47
	case 2, OldaleTown_EventScript_1E8F5E
	case 4, OldaleTown_EventScript_1E8F75
	end

OldaleTown_EventScript_1E8F47:: @ 81E8F47
	applymovement 2, OldaleTown_Movement_1E8FD7
	applymovement 255, OldaleTown_Movement_1E9001
	waitmovement 0
	goto OldaleTown_EventScript_1E8F8C
	end

OldaleTown_EventScript_1E8F5E:: @ 81E8F5E
	applymovement 2, OldaleTown_Movement_1E8FE2
	applymovement 255, OldaleTown_Movement_1E900B
	waitmovement 0
	goto OldaleTown_EventScript_1E8F8C
	end

OldaleTown_EventScript_1E8F75:: @ 81E8F75
	applymovement 255, OldaleTown_Movement_1E8FF9
	applymovement 2, OldaleTown_Movement_1E8FCE
	waitmovement 0
	goto OldaleTown_EventScript_1E8F8C
	end

OldaleTown_EventScript_1E8F8C:: @ 81E8F8C
	msgbox OldaleTown_Text_1E91FD, 4
	giveitem_std ITEM_POTION
	compare VAR_RESULT, 0
	goto_eq OldaleTown_EventScript_1E8FC3
	msgbox OldaleTown_Text_1E92AF, 4
	setflag FLAG_0x084
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_1E8FB9:: @ 81E8FB9
	msgbox OldaleTown_Text_1E92AF, 4
	release
	end

OldaleTown_EventScript_1E8FC3:: @ 81E8FC3
	msgbox gUnknown_08272AD0, 4
	fadedefaultbgm
	release
	end

OldaleTown_Movement_1E8FCE: @ 81E8FCE
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

OldaleTown_Movement_1E8FD7: @ 81E8FD7
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

OldaleTown_Movement_1E8FE2: @ 81E8FE2
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

OldaleTown_Movement_1E8FEB: @ 81E8FEB
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_fastest_down
	step_end

OldaleTown_Movement_1E8FF9: @ 81E8FF9
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_1E9001: @ 81E9001
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_1E900B: @ 81E900B
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_1E9013: @ 81E9013
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_1E901F:: @ 81E901F
	lock
	faceplayer
	checkflag FLAG_0x074
	goto_eq OldaleTown_EventScript_1E9066
	msgbox OldaleTown_Text_1E939A, 4
	closemessage
	applymovement 3, OldaleTown_Movement_2725A2
	waitmovement 0
	release
	end

OldaleTown_EventScript_1E903F:: @ 81E903F
	lockall
	applymovement 255, OldaleTown_Movement_1E9182
	applymovement 3, OldaleTown_Movement_1E9185
	waitmovement 0
	msgbox OldaleTown_Text_1E9313, 4
	closemessage
	applymovement 3, OldaleTown_Movement_1E918B
	waitmovement 0
	releaseall
	end

OldaleTown_EventScript_1E9066:: @ 81E9066
	msgbox OldaleTown_Text_1E93F8, 4
	release
	end

OldaleTown_EventScript_1E9070:: @ 81E9070
	lockall
	applymovement 4, OldaleTown_Movement_27259E
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_1E90E6
	end

OldaleTown_EventScript_1E9086:: @ 81E9086
	lockall
	applymovement 4, OldaleTown_Movement_1E9170
	waitmovement 0
	applymovement 255, OldaleTown_Movement_2725A8
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_1E90E6
	end

OldaleTown_EventScript_1E90A6:: @ 81E90A6
	lockall
	applymovement 4, OldaleTown_Movement_1E9173
	waitmovement 0
	applymovement 255, OldaleTown_Movement_2725A8
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_1E90E6
	end

OldaleTown_EventScript_1E90C6:: @ 81E90C6
	lockall
	applymovement 4, OldaleTown_Movement_1E9175
	waitmovement 0
	applymovement 255, OldaleTown_Movement_2725A8
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_1E90E6
	end

OldaleTown_EventScript_1E90E6:: @ 81E90E6
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq OldaleTown_EventScript_1E90FE
	compare VAR_RESULT, 1
	goto_eq OldaleTown_EventScript_1E910C
	end

OldaleTown_EventScript_1E90FE:: @ 81E90FE
	msgbox OldaleTown_Text_1E9462, 4
	goto OldaleTown_EventScript_1E911A
	end

OldaleTown_EventScript_1E910C:: @ 81E910C
	msgbox OldaleTown_Text_1E948A, 4
	goto OldaleTown_EventScript_1E911A
	end

OldaleTown_EventScript_1E911A:: @ 81E911A
	closemessage
	compare VAR_0x8009, 0
	call_if 1, OldaleTown_EventScript_1E9148
	compare VAR_0x8009, 1
	call_if 1, OldaleTown_EventScript_1E915E
	applymovement 4, OldaleTown_Movement_1E9177
	waitmovement 0
	removeobject 4
	setvar VAR_0x40C7, 2
	setflag FLAG_0x3D3
	releaseall
	end

OldaleTown_EventScript_1E9148:: @ 81E9148
	compare VAR_FACING, 1
	goto_if 5, OldaleTown_EventScript_1E915E
	applymovement 4, OldaleTown_Movement_1E9177
	waitmovement 0
	return

OldaleTown_EventScript_1E915E:: @ 81E915E
	applymovement 255, OldaleTown_Movement_1E917E
	applymovement 4, OldaleTown_Movement_1E9177
	waitmovement 0
	return

OldaleTown_Movement_1E9170: @ 81E9170
	walk_left
	walk_left
	step_end

OldaleTown_Movement_1E9173: @ 81E9173
	walk_left
	step_end

OldaleTown_Movement_1E9175: @ 81E9175
	face_left
	step_end

OldaleTown_Movement_1E9177: @ 81E9177
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_Movement_1E917E: @ 81E917E
	delay_8
	delay_4
	walk_in_place_fastest_down
	step_end

OldaleTown_Movement_1E9182: @ 81E9182
	delay_8
	walk_right
	step_end

OldaleTown_Movement_1E9185: @ 81E9185
	walk_fast_up
	walk_in_place_fastest_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_1E918B: @ 81E918B
	walk_down
	walk_left
	step_end

OldaleTown_Text_1E918E: @ 81E918E
	.string "There this cool bar in Mauville City \n"
	.string "called Gastley, too bad I am not \p"
	.string "allowed to buy some booze because I am\n"
	.string " still a teen. :( \l"
	.string "I even tried to buy booze with a fake\n"
	.string "identity card and a disgiuse, but Rick,\p" 
	.string " Astley directly recognized me, it’s \n"
	.string " like he has some kind of psychic\p"
	.string " powers to recognize me this quickly.\l"
	.string "He told me nicely that I can’t drink \n"
	.string " because it’s unhealthy for me in my \p"
	.string "young age.\l"
	.string "Miss me with that gay shit!\n"
	.string "I want some booze and get drunk.\l"
	.string "I can’t wait to finally turn 18 soon.$"

OldaleTown_Text_1E91C0: @ 81E91C0
	.string "Hi sweatheart!\n"
	.string "I like giving useless tutorials\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_1E91FD: @ 81E91FD
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We basically have a monopoly as \n"
	.string "we are the only shops in the world\p"
	.string "save for a few specialized shops.\n"
	.string "here take this potion as a pardon\p"
	.string " from me for wasting your time.$"
	
OldaleTown_Text_1E92AF: @ 81E92AF
	.string "A POTION can be used anytime, so it’s\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

OldaleTown_Text_1E9313: @ 81E9313
	.string "Aaaaah! Wait!\n"
	.string "Please don’t come in here.\p"
	.string "the person Im stalking is napping over there\n"
	.string "Im making a stalker sketch of them!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_1E939A: @ 81E939A
	.string "the person Im stalking is napping over there\n"
	.string "Im making a stalker sketch of them!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_1E93F8: @ 81E93F8
	.string "I finished sketching the person\n"
	.string "but it turns out it was a dead body\p"
	.string "the police confiscitated my drawing\n"
	.string "... also Im a suspect now :/$"

OldaleTown_Text_1E9462: @ 81E9462
	.string "MAY: {PLAYER}{KUN}!\n"
	.string "...\l"
	.string "stop being so slow!$"

OldaleTown_Text_1E948A: @ 81E948A
	.string "BRENDAN: girrrl you got a mighty\n"
	.string "slow pace, you need some better shoes\l"
	.string "{PLAYER}, we should go to the mall later.$"

OldaleTown_Text_1E94DA: @ 81E94DA
	.string "OLDALE TOWN\n"
	.string "“The most boring town in POKéMON.”$"

