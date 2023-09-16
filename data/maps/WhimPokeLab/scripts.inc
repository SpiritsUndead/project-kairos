WhimPokeLab_MapScripts::
	.byte 0


Choose_Pokemon::
	applymovement OBJ_EVENT_ID_PLAYER, Lab_Trigger1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Welcome
	applymovement 1, Birch_Exclaim
	waitmovement 1
	msgbox Welcome2
	applymovement 1, Birch_Look_At_Pokemon
	waitmovement 1
	msgbox Give_A_Pokemon
	applymovement 1, Birch_Get_Out_Of_The_Way
	waitmovement 1
	msgbox Birch_Choose
	releaseall
	return


Choose_Pokemon_Trigger2::
	applymovement OBJ_EVENT_ID_PLAYER, Lab_Trigger2
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Welcome
	applymovement 1, Birch_Exclaim
	waitmovement 1
	msgbox Welcome2
	applymovement 1, Birch_Look_At_Pokemon
	waitmovement 1
	msgbox Give_A_Pokemon
	applymovement 1, Birch_Get_Out_Of_The_Way
	waitmovement 1
	msgbox Birch_Choose
	releaseall
	return


EventScript_Pokeball_One::
	lockall
	goto_if_unset FLAG_ROW_0x020, EventScript_Pokeball_One_2
	return

EventScript_Pokeball_One_1:
	call WhimLab_EventScript_Rowlet
	return

EventScript_Pokeball_One_2:
	goto_if_unset FLAG_FENN_0x021, EventScript_Pokeball_One_4
	return

EventScript_Pokeball_One_4:
	goto_if_unset FLAG_OSH_0x022, EventScript_Pokeball_One_1
	return


EventScript_Pokeball_Two::
	lockall
	goto_if_unset FLAG_ROW_0x020, EventScript_Pokeball_Two_2
	return

EventScript_Pokeball_Two_1:
	call WhimLab_EventScript_Fennekin
	return

EventScript_Pokeball_Two_2:
	goto_if_unset FLAG_FENN_0x021, EventScript_Pokeball_Two_4
	return

EventScript_Pokeball_Two_4:
	goto_if_unset FLAG_OSH_0x022, EventScript_Pokeball_Two_1
	return


EventScript_Pokeball_Three::
	lockall
	goto_if_unset FLAG_ROW_0x020, EventScript_Pokeball_Three_2
	return

EventScript_Pokeball_Three_1:
	call WhimLab_EventScript_Oshawott
	return

EventScript_Pokeball_Three_2:
	goto_if_unset FLAG_FENN_0x021, EventScript_Pokeball_Three_4
	return

EventScript_Pokeball_Three_4:
	goto_if_unset FLAG_OSH_0x022, EventScript_Pokeball_Three_1
	return


WhimLab_EventScript_Rowlet::
	showmonpic SPECIES_ROWLET, 10, 3
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
	msgbox WhimLab_EventScript_Rowlet_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WhimLab_EventScript_Rowlet_1
	hidemonpic
	releaseall
	return

WhimLab_EventScript_Rowlet_1:
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox WhimLab_EventScript_Rowlet_Text_1
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_STARTER_MON, 0
	removeobject 4
	setflag FLAG_ROW_0x020
	setvar VAR_WHIMLEAF_INTRO_STATE, 2
	call NicknamePartyMon
	releaseall
	return


WhimLab_EventScript_Fennekin::
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
	msgbox WhimLab_EventScript_Fennekin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WhimLab_EventScript_Fennekin_1
	hidemonpic
	releaseall
	return

WhimLab_EventScript_Fennekin_1:
	givemon SPECIES_FENNEKIN, 5, ITEM_ORAN_BERRY
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox WhimLab_EventScript_Fennekin_Text_1
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_STARTER_MON, 1
	removeobject 5
	setflag FLAG_FENN_0x021
	setvar VAR_WHIMLEAF_INTRO_STATE, 2
	call NicknamePartyMon
	releaseall
	return


WhimLab_EventScript_Oshawott::
	showmonpic SPECIES_OSHAWOTT, 10, 3
	playmoncry SPECIES_OSHAWOTT, CRY_MODE_NORMAL
	msgbox WhimLab_EventScript_Oshawott_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WhimLab_EventScript_Oshawott_1
	hidemonpic
	releaseall
	return

WhimLab_EventScript_Oshawott_1:
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox WhimLab_EventScript_Oshawott_Text_1
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_STARTER_MON, 2
	removeobject 6
	setflag FLAG_OSH_0x022
	setvar VAR_WHIMLEAF_INTRO_STATE, 2
	call NicknamePartyMon
	releaseall
	return


Lab_Trigger1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Lab_Trigger2:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Birch_Exclaim:
	emote_exclamation_mark
	delay_16
	step_end

Birch_Look_At_Pokemon:
	face_up
	delay_16
	walk_in_place_up
	delay_8
	delay_8
	delay_8
	face_down
	delay_8
	step_end

Birch_Get_Out_Of_The_Way:
	walk_right
	walk_right
	walk_up
	delay_16
	walk_in_place_faster_down
	walk_in_place_faster_down
	step_end

WhimLab_EventScript_Rowlet_Text_0:
	.string "Do you want to choose {COLOR GREEN}{SHADOW LIGHT_GREEN} Rowlet?$"

WhimLab_EventScript_Rowlet_Text_1:
	.string "Recieved Rowlet$"

WhimLab_EventScript_Fennekin_Text_0:
	.string "Do you want to choose {COLOR RED}{SHADOW LIGHT_RED} Fennekin?$"

WhimLab_EventScript_Fennekin_Text_1:
	.string "Recieved Fennekin$"

WhimLab_EventScript_Oshawott_Text_0:
	.string "Do you want to choose {COLOR BLUE}{SHADOW LIGHT_BLUE} Oshawott?$"

WhimLab_EventScript_Oshawott_Text_1:
	.string "Recieved Oshawott$"

Welcome::
	.string "Hey there!\n"
	.string "Excuse the mess, I'm still getting\l"
	.string "everything moved in around here.\p"
	.string "My family and I have just moved here\n"
	.string "all the way from HOENN\l"
	.string "so I could continue my research\l"
	.string "here in REGION!\p"
	.string "When I first read about REGION,\n"
	.string "I knew I had to come here to see\l"
	.string "things for myself!\p"
	.string "....Ah, but I'm rambling now.\n"
	.string "You're {PLAYER}, right?\p"
	.string "Your father mentioned you while\n"
	.string "he was helping us move some things in.$"

Welcome2::
	.string "Say, how would you like to\n"
	.string "help me with some of my reasearch?\p"
	.string "I'm still busy getting settled here...\n"
	.string "Could you head to DAWNGEM TOWN\l"
	.string "and find PERSON?\p"
	.string "They told me there was information\n"
	.string "regarding the native pokemon population\l"
	.string "that might be of interest to me.\p"
	.string "Could you help me please, {PLAYER}?$"

Give_A_Pokemon::
	.string "Of course, I wouldn't send you\n"
	.string "out there all alone...\p"
	.string "You can take any one of these pokemon\n"
	.string "here on the table as a companion!\p"
	.string "No, really, I insist!$"

Birch_Choose::
	.string "Don't be shy, {PLAYER}!\n"
	.string "Which one will it be?$"
