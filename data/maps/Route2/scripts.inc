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


Route2_Worker_GiveRandomHoennStarter::
# 155 "data/maps/Route2/scripts.pory"
	lock
# 156 "data/maps/Route2/scripts.pory"
	faceplayer
# 157 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TREECKO, Route2_Worker_GiveRandomHoennStarter_2
# 163 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_WantRandomStarter, MSGBOX_YESNO
# 164 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_5
# 203 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DeclinedRandomStarter, MSGBOX_DEFAULT
Route2_Worker_GiveRandomHoennStarter_4:
# 205 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Worker_GiveRandomHoennStarter_2:
# 158 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_AfterRandomStarter
# 159 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Worker_GiveRandomHoennStarter_5:
# 165 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_ChoosingStarter, MSGBOX_DEFAULT
# 166 "data/maps/Route2/scripts.pory"
	random 3
# 168 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_8
# 179 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_9
# 191 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_ChoseMudkip, MSGBOX_DEFAULT
# 192 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MUDKIP
# 193 "data/maps/Route2/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 194 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_23
# 196 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_24
# 199 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_8:
# 169 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_ChoseTreecko, MSGBOX_DEFAULT
# 170 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TREECKO
# 171 "data/maps/Route2/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 172 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_13
# 174 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_14
# 177 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_9:
# 180 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_ChoseTorchic, MSGBOX_DEFAULT
# 181 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TORCHIC
# 182 "data/maps/Route2/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 183 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_18
# 185 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_Worker_GiveRandomHoennStarter_19
# 188 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_13:
# 173 "data/maps/Route2/scripts.pory"
	goto GiveRandomStarter_Party
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_14:
# 175 "data/maps/Route2/scripts.pory"
	goto GiveRandomStarter_PC
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_18:
# 184 "data/maps/Route2/scripts.pory"
	goto GiveRandomStarter_Party
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_19:
# 186 "data/maps/Route2/scripts.pory"
	goto GiveRandomStarter_PC
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_23:
# 195 "data/maps/Route2/scripts.pory"
	goto GiveRandomStarter_Party
	goto Route2_Worker_GiveRandomHoennStarter_4

Route2_Worker_GiveRandomHoennStarter_24:
# 197 "data/maps/Route2/scripts.pory"
	goto GiveRandomStarter_PC
	goto Route2_Worker_GiveRandomHoennStarter_4


GiveRandomStarter_Party::
# 210 "data/maps/Route2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 211 "data/maps/Route2/scripts.pory"
	message Route2_Text_ReceivedRandomStarter
# 212 "data/maps/Route2/scripts.pory"
	waitmessage
# 213 "data/maps/Route2/scripts.pory"
	waitfanfare
# 215 "data/maps/Route2/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_1
# 216 "data/maps/Route2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 217 "data/maps/Route2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 218 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveRandomStarter_Party_1
# 223 "data/maps/Route2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 224 "data/maps/Route2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 225 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 226 "data/maps/Route2/scripts.pory"
	release
	end

GiveRandomStarter_Party_1:
# 219 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 220 "data/maps/Route2/scripts.pory"
	release
	end


GiveRandomStarter_PC::
# 232 "data/maps/Route2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 233 "data/maps/Route2/scripts.pory"
	message Route2_Text_ReceivedRandomStarter
# 234 "data/maps/Route2/scripts.pory"
	waitmessage
# 235 "data/maps/Route2/scripts.pory"
	waitfanfare
# 237 "data/maps/Route2/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_1
# 238 "data/maps/Route2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 239 "data/maps/Route2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 240 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveRandomStarter_PC_1
# 245 "data/maps/Route2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 246 "data/maps/Route2/scripts.pory"
	call EventScript_TransferredToPC
# 247 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 248 "data/maps/Route2/scripts.pory"
	release
	end

GiveRandomStarter_PC_1:
# 241 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 242 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Text_WantRandomStarter::
# 253 "data/maps/Route2/scripts.pory"
	.string "Greetings, young TRAINER!\p"
	.string "I'm a POKéMON PROFESSOR visiting\n"
	.string "from the HOENN region.\p"
	.string "I have three rare starter POKéMON\n"
	.string "with me, but I can only give you one.\p"
	.string "Would you like me to randomly choose\n"
	.string "one of these special POKéMON for you?$"

Route2_Text_ChoosingStarter::
# 263 "data/maps/Route2/scripts.pory"
	.string "Wonderful! Let me see...\p"
	.string "I'll close my eyes and pick one\n"
	.string "at random for you!$"

Route2_Text_ChoseTreecko::
# 269 "data/maps/Route2/scripts.pory"
	.string "Ah! The POKéBALL chose TREECKO!\p"
	.string "TREECKO is the WOOD GECKO POKéMON.\n"
	.string "It's a GRASS-type starter!$"

Route2_Text_ChoseTorchic::
# 275 "data/maps/Route2/scripts.pory"
	.string "Oh! The POKéBALL chose TORCHIC!\p"
	.string "TORCHIC is the CHICK POKéMON.\n"
	.string "It's a FIRE-type starter!$"

Route2_Text_ChoseMudkip::
# 281 "data/maps/Route2/scripts.pory"
	.string "My! The POKéBALL chose MUDKIP!\p"
	.string "MUDKIP is the MUD FISH POKéMON.\n"
	.string "It's a WATER-type starter!$"

Route2_Text_ReceivedRandomStarter::
# 287 "data/maps/Route2/scripts.pory"
	.string "{PLAYER} received the POKéMON\n"
	.string "from the PROFESSOR!$"

Route2_Text_NoRoomForStarter::
# 292 "data/maps/Route2/scripts.pory"
	.string "Oh dear! You don't have room in\n"
	.string "your party for this POKéMON.\p"
	.string "Please come back after making\n"
	.string "some space.$"

Route2_Text_DeclinedRandomStarter::
# 299 "data/maps/Route2/scripts.pory"
	.string "I understand. Choosing a partner\n"
	.string "is an important decision.\p"
	.string "Take your time. I'll be here if\n"
	.string "you change your mind.$"

Route2_Text_AfterRandomStarter::
# 306 "data/maps/Route2/scripts.pory"
	.string "How is your POKéMON doing?\p"
	.string "The bond between TRAINER and\n"
	.string "POKéMON is truly special.\p"
	.string "Sometimes the best partnerships\n"
	.string "are formed by chance!$"

Route2_Text_WantTreecko::
# 314 "data/maps/Route2/scripts.pory"
	.string "Hi there! I'm a POKéMON researcher\n"
	.string "from the HOENN region.\p"
	.string "I brought along this TREECKO, but\n"
	.string "I think it needs a good TRAINER.\p"
	.string "Would you like to take care of\n"
	.string "this TREECKO?$"

Route2_Text_HereIsTreecko::
# 323 "data/maps/Route2/scripts.pory"
	.string "Wonderful! TREECKO is a GRASS-type\n"
	.string "POKéMON from HOENN.\p"
	.string "Please take good care of it!$"

Route2_Text_ReceivedTreecko::
# 329 "data/maps/Route2/scripts.pory"
	.string "{PLAYER} received TREECKO\n"
	.string "from the POKéMON researcher!$"

Route2_Text_NoRoomForTreecko::
# 334 "data/maps/Route2/scripts.pory"
	.string "Oh! You don't have any room in\n"
	.string "your party for TREECKO.\p"
	.string "Please come back when you have\n"
	.string "made room in your party.$"

Route2_Text_DeclinedTreecko::
# 341 "data/maps/Route2/scripts.pory"
	.string "Oh, that's too bad.\p"
	.string "If you change your mind, I'll be\n"
	.string "here waiting.$"

Route2_Text_AfterTreecko::
# 347 "data/maps/Route2/scripts.pory"
	.string "TREECKO is a very loyal POKéMON.\n"
	.string "I'm sure you two will be great\l"
	.string "partners!$"

Route2_Text_WantTorchic::
# 353 "data/maps/Route2/scripts.pory"
	.string "Hello! I'm another researcher\n"
	.string "visiting from HOENN.\p"
	.string "This TORCHIC here needs a TRAINER\n"
	.string "who can help it grow strong.\p"
	.string "Would you like to take TORCHIC\n"
	.string "with you on your journey?$"

Route2_Text_HereIsTorchic::
# 362 "data/maps/Route2/scripts.pory"
	.string "Excellent choice! TORCHIC is a\n"
	.string "FIRE-type POKéMON from HOENN.\p"
	.string "It will surely become a powerful\n"
	.string "ally!$"

Route2_Text_ReceivedTorchic::
# 369 "data/maps/Route2/scripts.pory"
	.string "{PLAYER} received TORCHIC\n"
	.string "from the POKéMON researcher!$"

Route2_Text_NoRoomForTorchic::
# 374 "data/maps/Route2/scripts.pory"
	.string "Oh my! Your party seems to be full.\p"
	.string "Please make some room and come back\n"
	.string "for TORCHIC.$"

Route2_Text_DeclinedTorchic::
# 380 "data/maps/Route2/scripts.pory"
	.string "I see... Well, if you change your\n"
	.string "mind, you know where to find me.$"

Route2_Text_AfterTorchic::
# 385 "data/maps/Route2/scripts.pory"
	.string "TORCHIC may be small, but it has\n"
	.string "a burning fighting spirit!\p"
	.string "Raise it well!$"
