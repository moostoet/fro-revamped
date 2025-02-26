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


UndergroundPath_South_Text_WantChikorita::
# 83 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
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
# 95 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "That's the spirit! CHIKORITA is a\n"
	.string "GRASS-type POKéMON from JOHTO.\p"
	.string "It's got a sweet nature and the\n"
	.string "most adorable leaf on its head!\p"
	.string "You two will make great hiking\n"
	.string "buddies!$"

UndergroundPath_South_Text_ReceivedChikorita::
# 104 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "{PLAYER} received CHIKORITA\n"
	.string "from the HIKER!$"

UndergroundPath_South_Text_NoRoomForChikorita::
# 109 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "Whoa there! Looks like your team\n"
	.string "is packed full!\p"
	.string "Make some room in your party and\n"
	.string "come back for CHIKORITA.$"

UndergroundPath_South_Text_DeclinedChikorita::
# 116 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "No? That's a shame...\p"
	.string "Well, if you change your mind,\n"
	.string "I'll be taking a break here\l"
	.string "from all my hiking!$"

UndergroundPath_South_Text_AfterChikorita::
# 123 "data/maps/UndergroundPath_SouthEntrance/scripts.pory"
	.string "You know, CHIKORITA might not be\n"
	.string "tough like my ROCK POKéMON...\p"
	.string "But it's got a determination that\n"
	.string "could move mountains!\p"
	.string "Perfect for any TRAINER's journey!$"
