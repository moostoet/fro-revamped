# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0
# 4 "data/maps/Route2/scripts.pory"

# 5 "data/maps/Route2/scripts.pory"
Route2_EventScript_RouteSign::
# 6 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route2/scripts.pory"
	end
# 8 "data/maps/Route2/scripts.pory"

# 9 "data/maps/Route2/scripts.pory"
Route2_EventScript_DiglettsCaveSign::
# 10 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
# 11 "data/maps/Route2/scripts.pory"
	end

Route2_Worker_GiveTreecko::
# 15 "data/maps/Route2/scripts.pory"
	lock
# 16 "data/maps/Route2/scripts.pory"
	faceplayer
# 17 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TREECKO, Route2_Worker_GiveTreecko_2
# 23 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_WantTreecko, MSGBOX_YESNO
# 24 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_Worker_GiveTreecko_5
# 36 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DeclinedTreecko, MSGBOX_DEFAULT
Route2_Worker_GiveTreecko_4:
# 38 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Worker_GiveTreecko_2:
# 18 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_AfterTreecko
# 19 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Worker_GiveTreecko_5:
# 25 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_HereIsTreecko, MSGBOX_DEFAULT
# 26 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TREECKO
# 27 "data/maps/Route2/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 28 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Worker_GiveTreecko_8
# 30 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_Worker_GiveTreecko_9
# 33 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_NoRoomForTreecko, MSGBOX_DEFAULT
	goto Route2_Worker_GiveTreecko_4

Route2_Worker_GiveTreecko_8:
# 29 "data/maps/Route2/scripts.pory"
	goto GiveTreecko_Party
	goto Route2_Worker_GiveTreecko_4

Route2_Worker_GiveTreecko_9:
# 31 "data/maps/Route2/scripts.pory"
	goto GiveTreecko_PC
	goto Route2_Worker_GiveTreecko_4


Route2_Worker_GiveTorchic::
# 43 "data/maps/Route2/scripts.pory"
	lock
# 44 "data/maps/Route2/scripts.pory"
	faceplayer
# 45 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TORCHIC, Route2_Worker_GiveTorchic_2
# 51 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_WantTorchic, MSGBOX_YESNO
# 52 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_Worker_GiveTorchic_5
# 64 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DeclinedTorchic, MSGBOX_DEFAULT
Route2_Worker_GiveTorchic_4:
# 66 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Worker_GiveTorchic_2:
# 46 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_AfterTorchic
# 47 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Worker_GiveTorchic_5:
# 53 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_HereIsTorchic, MSGBOX_DEFAULT
# 54 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TORCHIC
# 55 "data/maps/Route2/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 56 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Worker_GiveTorchic_8
# 58 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_Worker_GiveTorchic_9
# 61 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_NoRoomForTorchic, MSGBOX_DEFAULT
	goto Route2_Worker_GiveTorchic_4

Route2_Worker_GiveTorchic_8:
# 57 "data/maps/Route2/scripts.pory"
	goto GiveTorchic_Party
	goto Route2_Worker_GiveTorchic_4

Route2_Worker_GiveTorchic_9:
# 59 "data/maps/Route2/scripts.pory"
	goto GiveTorchic_PC
	goto Route2_Worker_GiveTorchic_4


GiveTorchic_Party::
# 71 "data/maps/Route2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 72 "data/maps/Route2/scripts.pory"
	message Route2_Text_ReceivedTorchic
# 73 "data/maps/Route2/scripts.pory"
	waitmessage
# 74 "data/maps/Route2/scripts.pory"
	waitfanfare
# 76 "data/maps/Route2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 77 "data/maps/Route2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 78 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveTorchic_Party_1
# 83 "data/maps/Route2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 84 "data/maps/Route2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 85 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TORCHIC
# 86 "data/maps/Route2/scripts.pory"
	release
	end

GiveTorchic_Party_1:
# 79 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TORCHIC
# 80 "data/maps/Route2/scripts.pory"
	release
	end


GiveTorchic_PC::
# 92 "data/maps/Route2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 93 "data/maps/Route2/scripts.pory"
	message Route2_Text_ReceivedTorchic
# 94 "data/maps/Route2/scripts.pory"
	waitmessage
# 95 "data/maps/Route2/scripts.pory"
	waitfanfare
# 97 "data/maps/Route2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 98 "data/maps/Route2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 99 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveTorchic_PC_1
# 104 "data/maps/Route2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 105 "data/maps/Route2/scripts.pory"
	call EventScript_TransferredToPC
# 106 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 107 "data/maps/Route2/scripts.pory"
	release
	end

GiveTorchic_PC_1:
# 100 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TORCHIC
# 101 "data/maps/Route2/scripts.pory"
	release
	end


GiveTreecko_Party::
# 113 "data/maps/Route2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 114 "data/maps/Route2/scripts.pory"
	message Route2_Text_ReceivedTreecko
# 115 "data/maps/Route2/scripts.pory"
	waitmessage
# 116 "data/maps/Route2/scripts.pory"
	waitfanfare
# 118 "data/maps/Route2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 119 "data/maps/Route2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 120 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveTreecko_Party_1
# 125 "data/maps/Route2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 126 "data/maps/Route2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 127 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 128 "data/maps/Route2/scripts.pory"
	release
	end

GiveTreecko_Party_1:
# 121 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 122 "data/maps/Route2/scripts.pory"
	release
	end


GiveTreecko_PC::
# 134 "data/maps/Route2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 135 "data/maps/Route2/scripts.pory"
	message Route2_Text_ReceivedTreecko
# 136 "data/maps/Route2/scripts.pory"
	waitmessage
# 137 "data/maps/Route2/scripts.pory"
	waitfanfare
# 139 "data/maps/Route2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 140 "data/maps/Route2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 141 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveTreecko_PC_1
# 146 "data/maps/Route2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 147 "data/maps/Route2/scripts.pory"
	call EventScript_TransferredToPC
# 148 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 149 "data/maps/Route2/scripts.pory"
	release
	end

GiveTreecko_PC_1:
# 142 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 143 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Text_WantTreecko::
# 154 "data/maps/Route2/scripts.pory"
	.string "Hi there! I'm a POKéMON researcher\n"
	.string "from the HOENN region.\p"
	.string "I brought along this TREECKO, but\n"
	.string "I think it needs a good TRAINER.\p"
	.string "Would you like to take care of\n"
	.string "this TREECKO?$"

Route2_Text_HereIsTreecko::
# 163 "data/maps/Route2/scripts.pory"
	.string "Wonderful! TREECKO is a GRASS-type\n"
	.string "POKéMON from HOENN.\p"
	.string "Please take good care of it!$"

Route2_Text_ReceivedTreecko::
# 169 "data/maps/Route2/scripts.pory"
	.string "{PLAYER} received TREECKO\n"
	.string "from the POKéMON researcher!$"

Route2_Text_NoRoomForTreecko::
# 174 "data/maps/Route2/scripts.pory"
	.string "Oh! You don't have any room in\n"
	.string "your party for TREECKO.\p"
	.string "Please come back when you have\n"
	.string "made room in your party.$"

Route2_Text_DeclinedTreecko::
# 181 "data/maps/Route2/scripts.pory"
	.string "Oh, that's too bad.\p"
	.string "If you change your mind, I'll be\n"
	.string "here waiting.$"

Route2_Text_AfterTreecko::
# 187 "data/maps/Route2/scripts.pory"
	.string "TREECKO is a very loyal POKéMON.\n"
	.string "I'm sure you two will be great\l"
	.string "partners!$"

Route2_Text_WantTorchic::
# 193 "data/maps/Route2/scripts.pory"
	.string "Hello! I'm another researcher\n"
	.string "visiting from HOENN.\p"
	.string "This TORCHIC here needs a TRAINER\n"
	.string "who can help it grow strong.\p"
	.string "Would you like to take TORCHIC\n"
	.string "with you on your journey?$"

Route2_Text_HereIsTorchic::
# 202 "data/maps/Route2/scripts.pory"
	.string "Excellent choice! TORCHIC is a\n"
	.string "FIRE-type POKéMON from HOENN.\p"
	.string "It will surely become a powerful\n"
	.string "ally!$"

Route2_Text_ReceivedTorchic::
# 209 "data/maps/Route2/scripts.pory"
	.string "{PLAYER} received TORCHIC\n"
	.string "from the POKéMON researcher!$"

Route2_Text_NoRoomForTorchic::
# 214 "data/maps/Route2/scripts.pory"
	.string "Oh my! Your party seems to be full.\p"
	.string "Please make some room and come back\n"
	.string "for TORCHIC.$"

Route2_Text_DeclinedTorchic::
# 220 "data/maps/Route2/scripts.pory"
	.string "I see... Well, if you change your\n"
	.string "mind, you know where to find me.$"

Route2_Text_AfterTorchic::
# 225 "data/maps/Route2/scripts.pory"
	.string "TORCHIC may be small, but it has\n"
	.string "a burning fighting spirit!\p"
	.string "Raise it well!$"
