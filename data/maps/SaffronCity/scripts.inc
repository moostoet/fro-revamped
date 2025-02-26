# 1 "data/maps/SaffronCity/scripts.pory"

# 2 "data/maps/SaffronCity/scripts.pory"
.set LOCALID_DOOR_GUARD_GRUNT, 6
# 3 "data/maps/SaffronCity/scripts.pory"

# 4 "data/maps/SaffronCity/scripts.pory"
SaffronCity_MapScripts::
# 5 "data/maps/SaffronCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
# 6 "data/maps/SaffronCity/scripts.pory"
	.byte 0
# 7 "data/maps/SaffronCity/scripts.pory"

# 8 "data/maps/SaffronCity/scripts.pory"
SaffronCity_OnTransition::
# 9 "data/maps/SaffronCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 10 "data/maps/SaffronCity/scripts.pory"
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
# 11 "data/maps/SaffronCity/scripts.pory"
	end
# 12 "data/maps/SaffronCity/scripts.pory"

# 13 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MoveDoorGuardGrunt::
# 14 "data/maps/SaffronCity/scripts.pory"
	setobjectxyperm LOCALID_DOOR_GUARD_GRUNT, 33, 31
# 15 "data/maps/SaffronCity/scripts.pory"
	return
# 16 "data/maps/SaffronCity/scripts.pory"

# 17 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt1::
# 18 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
# 19 "data/maps/SaffronCity/scripts.pory"
	end
# 20 "data/maps/SaffronCity/scripts.pory"

# 21 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt2::
# 22 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
# 23 "data/maps/SaffronCity/scripts.pory"
	end
# 24 "data/maps/SaffronCity/scripts.pory"

# 25 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt3::
# 26 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
# 27 "data/maps/SaffronCity/scripts.pory"
	end
# 28 "data/maps/SaffronCity/scripts.pory"

# 29 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt4::
# 30 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
# 31 "data/maps/SaffronCity/scripts.pory"
	end
# 32 "data/maps/SaffronCity/scripts.pory"

# 33 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt5::
# 34 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
# 35 "data/maps/SaffronCity/scripts.pory"
	end
# 36 "data/maps/SaffronCity/scripts.pory"

# 37 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt6::
# 38 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
# 39 "data/maps/SaffronCity/scripts.pory"
	end
# 40 "data/maps/SaffronCity/scripts.pory"

# 41 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt7::
# 42 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
# 43 "data/maps/SaffronCity/scripts.pory"
	end
# 44 "data/maps/SaffronCity/scripts.pory"

# 45 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt::
# 46 "data/maps/SaffronCity/scripts.pory"
	lock
# 47 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
# 48 "data/maps/SaffronCity/scripts.pory"
	applymovement LOCALID_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 49 "data/maps/SaffronCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 51 "data/maps/SaffronCity/scripts.pory"
	release
# 52 "data/maps/SaffronCity/scripts.pory"
	end
# 53 "data/maps/SaffronCity/scripts.pory"

# 54 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardAsleep::
# 55 "data/maps/SaffronCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 56 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 57 "data/maps/SaffronCity/scripts.pory"
	release
# 58 "data/maps/SaffronCity/scripts.pory"
	end
# 59 "data/maps/SaffronCity/scripts.pory"

# 60 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_WorkerM::
# 61 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
# 62 "data/maps/SaffronCity/scripts.pory"
	end
# 63 "data/maps/SaffronCity/scripts.pory"

# 64 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Youngster::
# 65 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
# 66 "data/maps/SaffronCity/scripts.pory"
	end
# 67 "data/maps/SaffronCity/scripts.pory"

# 68 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Lass::
# 69 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
# 70 "data/maps/SaffronCity/scripts.pory"
	end
# 71 "data/maps/SaffronCity/scripts.pory"

# 72 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Boy::
# 73 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
# 74 "data/maps/SaffronCity/scripts.pory"
	end
# 75 "data/maps/SaffronCity/scripts.pory"

# 76 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Pidgeot::
# 77 "data/maps/SaffronCity/scripts.pory"
	lock
# 78 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 79 "data/maps/SaffronCity/scripts.pory"
	waitse
# 80 "data/maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 81 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 82 "data/maps/SaffronCity/scripts.pory"
	waitmoncry
# 83 "data/maps/SaffronCity/scripts.pory"
	release
# 84 "data/maps/SaffronCity/scripts.pory"
	end
# 85 "data/maps/SaffronCity/scripts.pory"

# 86 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Man::
# 87 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
# 88 "data/maps/SaffronCity/scripts.pory"
	end
# 89 "data/maps/SaffronCity/scripts.pory"

# 90 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_CitySign::
# 91 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
# 92 "data/maps/SaffronCity/scripts.pory"
	end
# 93 "data/maps/SaffronCity/scripts.pory"

# 94 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DojoSign::
# 95 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
# 96 "data/maps/SaffronCity/scripts.pory"
	end
# 97 "data/maps/SaffronCity/scripts.pory"

# 98 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_GymSign::
# 99 "data/maps/SaffronCity/scripts.pory"
	lockall
# 100 "data/maps/SaffronCity/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 101 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 102 "data/maps/SaffronCity/scripts.pory"
	releaseall
# 103 "data/maps/SaffronCity/scripts.pory"
	end
# 104 "data/maps/SaffronCity/scripts.pory"

# 105 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips1::
# 106 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
# 107 "data/maps/SaffronCity/scripts.pory"
	end
# 108 "data/maps/SaffronCity/scripts.pory"

# 109 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips2::
# 110 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
# 111 "data/maps/SaffronCity/scripts.pory"
	end
# 112 "data/maps/SaffronCity/scripts.pory"

# 113 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphCoSign::
# 114 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
# 115 "data/maps/SaffronCity/scripts.pory"
	end
# 116 "data/maps/SaffronCity/scripts.pory"

# 117 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MrPsychicsHouseSign::
# 118 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
# 119 "data/maps/SaffronCity/scripts.pory"
	end
# 120 "data/maps/SaffronCity/scripts.pory"

# 121 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphProductSign::
# 122 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
# 123 "data/maps/SaffronCity/scripts.pory"
	end
# 124 "data/maps/SaffronCity/scripts.pory"

# 125 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerFanClubSign::
# 126 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 127 "data/maps/SaffronCity/scripts.pory"
	end

Saffron_GiveTyrogue::
# 131 "data/maps/SaffronCity/scripts.pory"
	lock
# 132 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 133 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_TYROGUE, Saffron_GiveTyrogue_2
# 143 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_BlackBeltTyrogue, MSGBOX_YESNO
# 144 "data/maps/SaffronCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Saffron_GiveTyrogue_4
# 153 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_HereIsTyrogue
# 154 "data/maps/SaffronCity/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TYROGUE
# 155 "data/maps/SaffronCity/scripts.pory"
	givemon SPECIES_TYROGUE, 30
# 156 "data/maps/SaffronCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Saffron_GiveTyrogue_7
# 158 "data/maps/SaffronCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Saffron_GiveTyrogue_8
# 161 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_NoRoomForTyrogue
# 162 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 165 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 166 "data/maps/SaffronCity/scripts.pory"
	release
	end

Saffron_GiveTyrogue_2:
# 134 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_AfterTyrogue
# 135 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 138 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 139 "data/maps/SaffronCity/scripts.pory"
	release
	end

Saffron_GiveTyrogue_4:
# 145 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_DeclinedTyrogue
# 146 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 149 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 150 "data/maps/SaffronCity/scripts.pory"
	release
	end

Saffron_GiveTyrogue_7:
# 157 "data/maps/SaffronCity/scripts.pory"
	goto GiveTyrogue_Party
	return

Saffron_GiveTyrogue_8:
# 159 "data/maps/SaffronCity/scripts.pory"
	goto GiveTyrogue_PC
	return


GiveTyrogue_Party::
# 173 "data/maps/SaffronCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 174 "data/maps/SaffronCity/scripts.pory"
	message SaffronCity_Text_ReceivedTyrogue
# 175 "data/maps/SaffronCity/scripts.pory"
	waitmessage
# 176 "data/maps/SaffronCity/scripts.pory"
	waitfanfare
# 178 "data/maps/SaffronCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
# 179 "data/maps/SaffronCity/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 180 "data/maps/SaffronCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveTyrogue_Party_1
# 189 "data/maps/SaffronCity/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 190 "data/maps/SaffronCity/scripts.pory"
	call EventScript_ChangePokemonNickname
# 191 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_RECEIVED_TYROGUE
# 192 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 195 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 196 "data/maps/SaffronCity/scripts.pory"
	release
	end

GiveTyrogue_Party_1:
# 181 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_RECEIVED_TYROGUE
# 182 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 185 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 186 "data/maps/SaffronCity/scripts.pory"
	release
	end


GiveTyrogue_PC::
# 202 "data/maps/SaffronCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 203 "data/maps/SaffronCity/scripts.pory"
	message SaffronCity_Text_ReceivedTyrogue
# 204 "data/maps/SaffronCity/scripts.pory"
	waitmessage
# 205 "data/maps/SaffronCity/scripts.pory"
	waitfanfare
# 207 "data/maps/SaffronCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
# 208 "data/maps/SaffronCity/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 209 "data/maps/SaffronCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveTyrogue_PC_1
# 219 "data/maps/SaffronCity/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 220 "data/maps/SaffronCity/scripts.pory"
	call EventScript_TransferredToPC
# 221 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_RECEIVED_TYROGUE
# 222 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 225 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 226 "data/maps/SaffronCity/scripts.pory"
	release
	end

GiveTyrogue_PC_1:
# 210 "data/maps/SaffronCity/scripts.pory"
	call EventScript_TransferredToPC
# 211 "data/maps/SaffronCity/scripts.pory"
	setflag FLAG_RECEIVED_TYROGUE
# 212 "data/maps/SaffronCity/scripts.pory"
	applymovement 16, Saffron_GiveTyrogue_Movement_0
# 215 "data/maps/SaffronCity/scripts.pory"
	waitmovement 16
# 216 "data/maps/SaffronCity/scripts.pory"
	release
	end


# 135 "data/maps/SaffronCity/scripts.pory"
Saffron_GiveTyrogue_Movement_0:
# 136 "data/maps/SaffronCity/scripts.pory"
	face_up
	step_end

SaffronCity_Text_BlackBeltTyrogue::
# 231 "data/maps/SaffronCity/scripts.pory"
	.string "..."
	.string "\p"
	.string "HMPH! Seven straight days I have\n"
	.string "stood here, facing this wall...\p"
	.string "Training my mind, honing my spirit,\n"
	.string "waiting to be accepted into the\l"
	.string "FIGHTING DOJO as a student...\p"
	.string "But perhaps... this TYROGUE I\n"
	.string "caught needs a different path.\p"
	.string "Its fighting spirit is strong, but\n"
	.string "it requires a TRAINER who will\l"
	.string "journey with it, not stand still.\p"
	.string "You there! Would you take this\n"
	.string "TYROGUE with you on your quest?$"

SaffronCity_Text_HereIsTyrogue::
# 248 "data/maps/SaffronCity/scripts.pory"
	.string "EXCELLENT!\p"
	.string "TYROGUE can evolve into three\n"
	.string "different FIGHTING-type POKéMON\l"
	.string "depending on how you train it!\p"
	.string "Show it the way of the warrior!$"

SaffronCity_Text_ReceivedTyrogue::
# 256 "data/maps/SaffronCity/scripts.pory"
	.string "{PLAYER} received TYROGUE\n"
	.string "from the BLACK BELT!$"

SaffronCity_Text_NoRoomForTyrogue::
# 261 "data/maps/SaffronCity/scripts.pory"
	.string "WHAT? Your team is full!\p"
	.string "Return when you have made space.\n"
	.string "I shall continue my meditation...$"

SaffronCity_Text_DeclinedTyrogue::
# 267 "data/maps/SaffronCity/scripts.pory"
	.string "I see...\p"
	.string "Then we shall both continue our\n"
	.string "training in our own ways...$"

SaffronCity_Text_AfterTyrogue::
# 273 "data/maps/SaffronCity/scripts.pory"
	.string "I shall remain here, training...\p"
	.string "One day, the DOJO will recognize\n"
	.string "my dedication!\p"
	.string "But TYROGUE has found its path\n"
	.string "with you. That brings me peace.$"
