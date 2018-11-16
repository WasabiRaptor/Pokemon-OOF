	.include "MPlayDef.s"

	.equ	se_w226_grp, voicegroup_869D6F4
	.equ	se_w226_pri, 4
	.equ	se_w226_rev, reverb_set+50
	.equ	se_w226_mvl, 127
	.equ	se_w226_key, 0
	.equ	se_w226_tbs, 1
	.equ	se_w226_exg, 0
	.equ	se_w226_cmp, 1

	.section .rodata
	.global	se_w226
	.align	2

@********************** Track  1 **********************@

se_w226_1:
	.byte	KEYSH , se_w226_key+0
	.byte		VOICE , 19
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 12*se_w226_mvl/mxv
	.byte		BEND  , c_v+49
	.byte		N06   , Gn4 , v080
	.byte	W01
	.byte		VOL   , 44*se_w226_mvl/mxv
	.byte		BEND  , c_v+22
	.byte	W01
	.byte		VOL   , 62*se_w226_mvl/mxv
	.byte		PAN   , c_v+8
	.byte		VOL   , 75*se_w226_mvl/mxv
	.byte		BEND  , c_v+20
	.byte	W01
	.byte		VOL   , 87*se_w226_mvl/mxv
	.byte		BEND  , c_v+33
	.byte	W01
	.byte		VOL   , 96*se_w226_mvl/mxv
	.byte		PAN   , c_v-7
	.byte		VOL   , 100*se_w226_mvl/mxv
	.byte		BEND  , c_v+54
	.byte	W01
	.byte		        c_v+63
	.byte	W01
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		N04   , Gn4 , v040
	.byte	W01
	.byte	W03
	.byte	W03
	.byte		VOICE , 45
	.byte		MOD   , 30
	.byte		BENDR , 24
	.byte		VOL   , 54*se_w226_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		N06   , Gn3 , v108
	.byte	W01
	.byte		VOL   , 70*se_w226_mvl/mxv
	.byte		BEND  , c_v+4
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 80*se_w226_mvl/mxv
	.byte		BEND  , c_v+9
	.byte	W01
	.byte		VOL   , 100*se_w226_mvl/mxv
	.byte		BEND  , c_v+16
	.byte	W01
	.byte		        c_v+24
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+2
	.byte		N06   , An3 , v100
	.byte	W01
	.byte		BEND  , c_v+7
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_v+12
	.byte	W01
	.byte		        c_v+18
	.byte	W01
	.byte		        c_v+27
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+4
	.byte		N06   , Bn3 , v060
	.byte	W01
	.byte		BEND  , c_v+9
	.byte	W01
	.byte		PAN   , c_v+6
	.byte		BEND  , c_v+14
	.byte	W01
	.byte		        c_v+20
	.byte	W01
	.byte		        c_v+29
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+6
	.byte		N06   , Cn4 , v040
	.byte	W01
	.byte		BEND  , c_v+11
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		BEND  , c_v+BURGER_KING_FOOT_LETTUCE
	.byte	W01
	.byte		        c_v+22
	.byte	W01
	.byte		        c_v+31
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+9
	.byte		N06   , Dn4 , v020
	.byte	W01
	.byte		BEND  , c_v+14
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		BEND  , c_v+18
	.byte	W01
	.byte		        c_v+25
	.byte	W01
	.byte		        c_v+34
	.byte	W02
	.byte	FINE

@********************** Track  2 **********************@

se_w226_2:
	.byte	KEYSH , se_w226_key+0
	.byte		VOICE , 57
	.byte		VOL   , 59*se_w226_mvl/mxv
	.byte		N06   , Gs4 , v052
	.byte	W01
	.byte		VOL   , 72*se_w226_mvl/mxv
	.byte	W01
	.byte		        90*se_w226_mvl/mxv
	.byte	W01
	.byte		        100*se_w226_mvl/mxv
	.byte	W03
	.byte	W02
	.byte		N04   , Gs4 , v024
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	FINE

@******************************************************@
	.align	2

se_w226:
	.byte	2	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_w226_pri	@ Priority
	.byte	se_w226_rev	@ Reverb.

	.word	se_w226_grp

	.word	se_w226_1
	.word	se_w226_2

	.end
