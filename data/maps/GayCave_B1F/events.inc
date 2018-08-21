GayCave_B1F_EventObjects: @ 8534420
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, GayCave_B1F_EventScript_29115D, 1051

GayCave_B1F_MapWarps: @ 8534438
	warp_def 25, 13, 3, 1, MAP_GAY_CAVE_1F
	warp_def 4, 21, 3, 2, MAP_GAY_CAVE_1F
	warp_def 29, 13, 3, 0, MAP_GAY_CAVE_B2F
	warp_def 28, 21, 3, 1, MAP_GAY_CAVE_B2F
	warp_def 8, 5, 3, 2, MAP_GAY_CAVE_B2F
	warp_def 12, 3, 3, 3, MAP_GAY_CAVE_B2F
	warp_def 29, 2, 3, 4, MAP_GAY_CAVE_B2F

GayCave_B1F_MapEvents:: @ 8534470
	map_events GayCave_B1F_EventObjects, GayCave_B1F_MapWarps, 0x0, 0x0

