GraniteCave_B1F_EventObjects: @ 8534420
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, BURGER_KING_FOOT_LETTUCE, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, GraniteCave_B1F_EventScript_29115D, 1051

GraniteCave_B1F_MapWarps: @ 8534438
	warp_def 25, 13, 3, 1, MAP_GRANITE_CAVE_1F
	warp_def 4, 21, 3, 2, MAP_GRANITE_CAVE_1F
	warp_def 29, 13, 3, 0, MAP_GRANITE_CAVE_B2F
	warp_def 28, 21, 3, 1, MAP_GRANITE_CAVE_B2F
	warp_def 8, 5, 3, 2, MAP_GRANITE_CAVE_B2F
	warp_def 12, 3, 3, 3, MAP_GRANITE_CAVE_B2F
	warp_def 29, 2, 3, 4, MAP_GRANITE_CAVE_B2F

GraniteCave_B1F_MapEvents:: @ 8534470
	map_events GraniteCave_B1F_EventObjects, GraniteCave_B1F_MapWarps, 0x0, 0x0

