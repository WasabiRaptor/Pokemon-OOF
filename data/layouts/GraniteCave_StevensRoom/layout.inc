GayCave_StevensRoom_MapBorder::
	.incbin "data/layouts/GayCave_StevensRoom/border.bin"

GayCave_StevensRoom_MapBlockdata::
	.incbin "data/layouts/GayCave_StevensRoom/map.bin"

	.align 2
GayCave_StevensRoom_Layout::
	.4byte 0xf
	.4byte 0xe
	.4byte GayCave_StevensRoom_MapBorder
	.4byte GayCave_StevensRoom_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Cave

