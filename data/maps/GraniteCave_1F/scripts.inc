GraniteCave_1F_MapScripts:: @ 822DA5D
	.byte 0

GraniteCave_1F_EventScript_22DA5E:: @ 822DA5E
	lock
	faceplayer
	checkflag FLAG_0x06D
	goto_eq GraniteCave_1F_EventScript_22DA8A
	msgbox GraniteCave_1F_Text_22DA94, 4
	giveitem_std ITEM_HM05
	setflag FLAG_0x06D
	msgbox GraniteCave_1F_Text_22DBB7, 4
	release
	end

GraniteCave_1F_EventScript_22DA8A:: @ 822DA8A
	msgbox GraniteCave_1F_Text_22DBB7, 4
	release
	end

GraniteCave_1F_Text_22DA94: @ 822DA94
	.string "Gay$"

GraniteCave_1F_Text_22DBB7: @ 822DBB7
	.string "Hella gay$"

