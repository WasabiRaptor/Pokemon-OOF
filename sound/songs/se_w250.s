	.include "MPlayDef.s"

	.equ	se_w250_grp, voicegroup_869D6F4
	.equ	se_w250_pri, 4
	.equ	se_w250_rev, reverb_set+50
	.equ	se_w250_mvl, 127
	.equ	se_w250_key, 0
	.equ	se_w250_tbs, 1
	.equ	se_w250_exg, 0
	.equ	se_w250_cmp, 1

	.section .rodata
	.global	se_w250
	.align	2

@********************** Track  1 **********************@

se_w250_1:
	.byte	KEYSH , se_w250_key+0
	.byte	TEMPO , 150*se_w250_tbs/2
	.byte		VOICE , 36
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 115*se_w250_mvl/mxv
	.byte		BEND  , c_v-18
	.byte		TIE   , Dn2 , v127
	.byte	W03
	.byte		BEND  , c_v-12
	.byte	W03
	.byte		PAN   , c_v-5
	.byte	W02
	.byte		BEND  , c_v-8
	.byte	W04
	.byte		PAN   , c_v-10
	.byte	W01
	.byte		BEND  , c_v-3
	.byte	W03
	.byte		        c_v+2
	.byte	W02
	.byte		PAN   , c_v-13
	.byte	W04
	.byte		BEND  , c_v+5
	.byte	W02
	.byte		PAN   , c_v-16
	.byte	W04
	.byte		BEND  , c_v+14
	.byte	W02
	.byte		PAN   , c_v-14
	.byte	W06
	.byte		        c_v-9
	.byte		BEND  , c_v+18
	.byte	W06
	.byte		PAN   , c_v-6
	.byte	W01
	.byte		BEND  , c_v+24
	.byte	W05
	.byte		PAN   , c_v+0
	.byte	W06
	.byte		        c_v+3
	.byte	W06
	.byte		        c_v+7
	.byte	W06
	.byte		        c_v+11
	.byte		BEND  , c_v+17
	.byte	W06
	.byte		PAN   , c_v+16
	.byte		BEND  , c_v+10
	.byte	W06
	.byte		PAN   , c_v+11
	.byte	W01
	.byte		BEND  , c_v+5
	.byte	W05
	.byte		PAN   , c_v+6
	.byte	W02
	.byte		VOL   , 103*se_w250_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v+0
	.byte	W03
	.byte		PAN   , c_v+4
	.byte	W01
	.byte		VOL   , 85*se_w250_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-5
	.byte	W04
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 71*se_w250_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-8
	.byte	W03
	.byte		VOL   , 52*se_w250_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W03
	.byte		BEND  , c_v-12
	.byte	W01
	.byte		VOL   , 32*se_w250_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v-10
	.byte	W03
	.byte		VOL   , 11*se_w250_mvl/mxv
	.byte		BEND  , c_v-19
	.byte	W03
	.byte		PAN   , c_v-BURGER_KING_FOOT_LETTUCE
	.byte	W01
	.byte		VOL   , 6*se_w250_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-28
	.byte	W04
	.byte		EOT   
	.byte	FINE

@******************************************************@
	.align	2

se_w250:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_w250_pri	@ Priority
	.byte	se_w250_rev	@ Reverb.

	.word	se_w250_grp

	.word	se_w250_1

	.end
