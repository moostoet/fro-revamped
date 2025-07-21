# 1 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"

# 2 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
UndergroundPath_SouthEntrance_MapScripts::
# 3 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"

# 5 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
UndergroundPath_SouthEntrance_EventScript_Woman::
# 6 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_SouthEntrance_Text_PeopleLoseThingsInTheDarkness, MSGBOX_NPC
# 7 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	end

UndergroundPath_SouthEntrance_GiveChikorita::
# 11 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	lock
# 12 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	faceplayer
# 13 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, UndergroundPath_SouthEntrance_GiveChikorita_2
# 19 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_WantChikorita, MSGBOX_YESNO
# 20 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq UndergroundPath_SouthEntrance_GiveChikorita_5
# 25 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_HereIsChikorita
# 26 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 27 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	givemon SPECIES_CHIKORITA, 15
# 28 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UndergroundPath_SouthEntrance_GiveChikorita_8
# 30 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq UndergroundPath_SouthEntrance_GiveChikorita_9
# 33 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_NoRoomForChikorita
UndergroundPath_SouthEntrance_GiveChikorita_4:
# 36 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

UndergroundPath_SouthEntrance_GiveChikorita_2:
# 14 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_AfterChikorita
# 15 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

UndergroundPath_SouthEntrance_GiveChikorita_5:
# 21 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_DeclinedChikorita
# 22 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

UndergroundPath_SouthEntrance_GiveChikorita_8:
# 29 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveChikorita_Party
	goto UndergroundPath_SouthEntrance_GiveChikorita_4

UndergroundPath_SouthEntrance_GiveChikorita_9:
# 31 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveChikorita_PC
	goto UndergroundPath_SouthEntrance_GiveChikorita_4


GiveChikorita_Party::
# 41 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 42 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	message UndergroundPath_South_Text_ReceivedChikorita
# 43 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitmessage
# 44 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitfanfare
# 46 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 47 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 48 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveChikorita_Party_1
# 53 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 54 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_ChangePokemonNickname
# 55 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 56 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

GiveChikorita_Party_1:
# 49 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 50 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end


GiveChikorita_PC::
# 62 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 63 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	message UndergroundPath_South_Text_ReceivedChikorita
# 64 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitmessage
# 65 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitfanfare
# 67 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 68 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 69 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveChikorita_PC_1
# 75 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 76 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_TransferredToPC
# 77 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 78 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

GiveChikorita_PC_1:
# 70 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_TransferredToPC
# 71 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 72 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end


UndergroundPath_SouthEntrance_GiveRandomJohtoStarter::
# 84 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	lock
# 85 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	faceplayer
# 86 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_2
# 92 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_WantRandomStarter, MSGBOX_YESNO
# 93 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_5
# 132 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_DeclinedRandomStarter, MSGBOX_DEFAULT
UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4:
# 134 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_2:
# 87 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_AfterRandomStarter
# 88 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_5:
# 94 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_ChoosingStarter, MSGBOX_DEFAULT
# 95 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	random 3
# 97 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_8
# 108 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_9
# 120 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_ChoseTotodile, MSGBOX_DEFAULT
# 121 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 122 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	givemon SPECIES_TOTODILE, 15
# 123 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_23
# 125 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_24
# 128 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_8:
# 98 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_ChoseChikorita, MSGBOX_DEFAULT
# 99 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 100 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	givemon SPECIES_CHIKORITA, 15
# 101 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_13
# 103 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_14
# 106 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_9:
# 109 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_ChoseCyndaquil, MSGBOX_DEFAULT
# 110 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 111 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 15
# 112 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_18
# 114 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_19
# 117 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox UndergroundPath_South_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_13:
# 102 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveRandomJohtoStarter_Party
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_14:
# 104 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveRandomJohtoStarter_PC
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_18:
# 113 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveRandomJohtoStarter_Party
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_19:
# 115 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveRandomJohtoStarter_PC
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_23:
# 124 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveRandomJohtoStarter_Party
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4

UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_24:
# 126 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	goto GiveRandomJohtoStarter_PC
	goto UndergroundPath_SouthEntrance_GiveRandomJohtoStarter_4


GiveRandomJohtoStarter_Party::
# 139 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 140 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	message UndergroundPath_South_Text_ReceivedRandomStarter
# 141 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitmessage
# 142 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitfanfare
# 144 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_1
# 145 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 146 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 147 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveRandomJohtoStarter_Party_1
# 152 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 153 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_ChangePokemonNickname
# 154 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 155 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

GiveRandomJohtoStarter_Party_1:
# 148 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 149 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end


GiveRandomJohtoStarter_PC::
# 161 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 162 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	message UndergroundPath_South_Text_ReceivedRandomStarter
# 163 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitmessage
# 164 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	waitfanfare
# 166 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_1
# 167 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 168 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 169 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveRandomJohtoStarter_PC_1
# 175 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 176 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_TransferredToPC
# 177 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 178 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end

GiveRandomJohtoStarter_PC_1:
# 170 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	call EventScript_TransferredToPC
# 171 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
# 172 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	release
	end


UndergroundPath_South_Text_WantRandomStarter::
# 183 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Hey there, young TRAINER!\n"
	.string "I just got back from an amazing\l"
	.string "trek through the JOHTO region.\p"
	.string "While I was there, PROF. ELM gave\n"
	.string "me three POKéBALLS with starters!\p"
	.string "But honestly? I'm more of a\n"
	.string "ROCK-type TRAINER myself.\p"
	.string "How about I reach into my pack\n"
	.string "and give you whichever POKéBALL\l"
	.string "I grab first?$"

UndergroundPath_South_Text_ChoosingStarter::
# 196 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Alright! Let me dig through\n"
	.string "my hiking pack here...\p"
	.string "Got so much gear in here...\n"
	.string "Ah! Here's a POKéBALL!$"

UndergroundPath_South_Text_ChoseChikorita::
# 203 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Look at that! It's CHIKORITA!\p"
	.string "The LEAF POKéMON! This GRASS-type\n"
	.string "has the sweetest nature.\p"
	.string "That leaf on its head? It can\n"
	.string "sense humidity and temperature!$"

UndergroundPath_South_Text_ChoseCyndaquil::
# 211 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Whoa! It's CYNDAQUIL!\p"
	.string "The FIRE MOUSE POKéMON! This little\n"
	.string "FIRE-type is perfect for camping.\p"
	.string "Its back flares up when it's angry\n"
	.string "or surprised. Pretty cool, huh?$"

UndergroundPath_South_Text_ChoseTotodile::
# 219 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Ha! It's TOTODILE!\p"
	.string "The BIG JAW POKéMON! This WATER-type\n"
	.string "loves to playfully bite everything.\p"
	.string "Don't worry though - it's just\n"
	.string "being affectionate!$"

UndergroundPath_South_Text_ReceivedRandomStarter::
# 227 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "{PLAYER} received the POKéMON\n"
	.string "from the HIKER!$"

UndergroundPath_South_Text_NoRoomForStarter::
# 232 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Whoa there! Your team's packed\n"
	.string "tighter than my hiking bag!\p"
	.string "Make some room in your party and\n"
	.string "come back for this POKéMON.$"

UndergroundPath_South_Text_DeclinedRandomStarter::
# 239 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "No? Well, that's okay.\p"
	.string "Sometimes the best discoveries\n"
	.string "come when you least expect them.\p"
	.string "I'll be resting here if you\n"
	.string "change your mind!$"

UndergroundPath_South_Text_AfterRandomStarter::
# 247 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "How's that POKéMON treating you?\p"
	.string "You know, sometimes the best\n"
	.string "hiking partners are the ones\l"
	.string "you don't plan for!\p"
	.string "Just like the best trails are\n"
	.string "the ones you discover by accident!$"

UndergroundPath_South_Text_WantChikorita::
# 256 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Hey there, young TRAINER!\n"
	.string "I just got back from hiking in\l"
	.string "the JOHTO region.\p"
	.string "While I was there, I received this\n"
	.string "CHIKORITA from their PROF. ELM.\p"
	.string "But you know what? I'm more of a\n"
	.string "ROCK-type TRAINER myself.\p"
	.string "Would you like to take this\n"
	.string "CHIKORITA with you instead?$"

UndergroundPath_South_Text_HereIsChikorita::
# 268 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "That's the spirit! CHIKORITA is a\n"
	.string "GRASS-type POKéMON from JOHTO.\p"
	.string "It's got a sweet nature and the\n"
	.string "most adorable leaf on its head!\p"
	.string "You two will make great hiking\n"
	.string "buddies!$"

UndergroundPath_South_Text_ReceivedChikorita::
# 277 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "{PLAYER} received CHIKORITA\n"
	.string "from the HIKER!$"

UndergroundPath_South_Text_NoRoomForChikorita::
# 282 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Whoa there! Looks like your team\n"
	.string "is packed full!\p"
	.string "Make some room in your party and\n"
	.string "come back for CHIKORITA.$"

UndergroundPath_South_Text_DeclinedChikorita::
# 289 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "No? That's a shame...\p"
	.string "Well, if you change your mind,\n"
	.string "I'll be taking a break here\l"
	.string "from all my hiking!$"

UndergroundPath_South_Text_AfterChikorita::
# 296 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "You know, CHIKORITA might not be\n"
	.string "tough like my ROCK POKéMON...\p"
	.string "But it's got a determination that\n"
	.string "could move mountains!\p"
	.string "Perfect for any TRAINER's journey!$"
