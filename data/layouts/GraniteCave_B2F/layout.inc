GayCave_B2F_MapBorder::
	.incbin "data/layouts/GayCave_B2F/border.bin"

GayCave_B2F_MapBlockdata::
	.incbin "data/layouts/GayCave_B2F/map.bin"

	.align 2
GayCave_B2F_Layout::
	.4byte 0x20
	.4byte 0x1a
	.4byte GayCave_B2F_MapBorder
	.4byte GayCave_B2F_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Cave

