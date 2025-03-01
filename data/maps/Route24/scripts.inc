# 1 "data/maps/Route24/scripts.pory"

# 2 "data/maps/Route24/scripts.pory"
.equ LOCALID_ROCKET, 1
# 3 "data/maps/Route24/scripts.pory"

# 4 "data/maps/Route24/scripts.pory"
Route24_MapScripts::
# 5 "data/maps/Route24/scripts.pory"
	.byte 0
# 6 "data/maps/Route24/scripts.pory"

# 7 "data/maps/Route24/scripts.pory"
Route24_EventScript_Rocket::
# 8 "data/maps/Route24/scripts.pory"
	lock
# 9 "data/maps/Route24/scripts.pory"
	faceplayer
# 10 "data/maps/Route24/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
# 11 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 12 "data/maps/Route24/scripts.pory"
	checkitemspace ITEM_NUGGET
# 13 "data/maps/Route24/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
# 14 "data/maps/Route24/scripts.pory"
	call Route24_EventScript_BattleRocket
# 15 "data/maps/Route24/scripts.pory"
	release
# 16 "data/maps/Route24/scripts.pory"
	end
# 17 "data/maps/Route24/scripts.pory"

# 18 "data/maps/Route24/scripts.pory"
Route24_EventScript_NoRoomForNugget::
# 19 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 20 "data/maps/Route24/scripts.pory"
	release
# 21 "data/maps/Route24/scripts.pory"
	end
# 22 "data/maps/Route24/scripts.pory"

# 23 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketPostBattle::
# 24 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 25 "data/maps/Route24/scripts.pory"
	release
# 26 "data/maps/Route24/scripts.pory"
	end
# 27 "data/maps/Route24/scripts.pory"

# 28 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketTriggerLeft::
# 29 "data/maps/Route24/scripts.pory"
	lockall
# 30 "data/maps/Route24/scripts.pory"
	setvar VAR_TEMP_1, 0
# 31 "data/maps/Route24/scripts.pory"
	goto Route24_EventScript_RocketTrigger
# 32 "data/maps/Route24/scripts.pory"
	end
# 33 "data/maps/Route24/scripts.pory"

# 34 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketTriggerRight::
# 35 "data/maps/Route24/scripts.pory"
	lockall
# 36 "data/maps/Route24/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/Route24/scripts.pory"
	goto Route24_EventScript_RocketTrigger
# 38 "data/maps/Route24/scripts.pory"
	end
# 39 "data/maps/Route24/scripts.pory"

# 40 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketTrigger::
# 41 "data/maps/Route24/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 42 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
# 43 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
# 44 "data/maps/Route24/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 45 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 47 "data/maps/Route24/scripts.pory"
	checkitemspace ITEM_NUGGET
# 48 "data/maps/Route24/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
# 49 "data/maps/Route24/scripts.pory"
	call Route24_EventScript_BattleRocket
# 50 "data/maps/Route24/scripts.pory"
	releaseall
# 51 "data/maps/Route24/scripts.pory"
	end
# 52 "data/maps/Route24/scripts.pory"

# 53 "data/maps/Route24/scripts.pory"
Route24_EventScript_BattleRocket::
# 54 "data/maps/Route24/scripts.pory"
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
# 55 "data/maps/Route24/scripts.pory"
	message Route24_Text_JoinTeamRocket
# 56 "data/maps/Route24/scripts.pory"
	waitmessage
# 57 "data/maps/Route24/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 58 "data/maps/Route24/scripts.pory"
	waitbuttonpress
# 59 "data/maps/Route24/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROCKET
# 60 "data/maps/Route24/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
# 61 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 62 "data/maps/Route24/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE24, 1
# 63 "data/maps/Route24/scripts.pory"
	return
# 64 "data/maps/Route24/scripts.pory"

# 65 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketApproachPlayer::
# 66 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROCKET, Route24_Movement_RocketApproachPlayer
# 67 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route24/scripts.pory"
	return
# 69 "data/maps/Route24/scripts.pory"

# 70 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketMotionToPlayer::
# 71 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROCKET, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route24/scripts.pory"
	return
# 74 "data/maps/Route24/scripts.pory"

# 75 "data/maps/Route24/scripts.pory"
Route24_EventScript_NoRoomForNuggetTrigger::
# 76 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 77 "data/maps/Route24/scripts.pory"
	closemessage
# 78 "data/maps/Route24/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route24_Movement_WalkDown
# 79 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
# 81 "data/maps/Route24/scripts.pory"
	release
# 82 "data/maps/Route24/scripts.pory"
	end
# 83 "data/maps/Route24/scripts.pory"

# 84 "data/maps/Route24/scripts.pory"
Route24_EventScript_RocketWalkBackToPos::
# 85 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROCKET, Route24_Movement_RocketWalkBackToPos
# 86 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route24/scripts.pory"
	return
# 88 "data/maps/Route24/scripts.pory"

# 89 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketApproachPlayer::
# 90 "data/maps/Route24/scripts.pory"
	walk_left
# 91 "data/maps/Route24/scripts.pory"
	step_end
# 92 "data/maps/Route24/scripts.pory"

# 93 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketWalkBackToPos::
# 94 "data/maps/Route24/scripts.pory"
	walk_right
# 95 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_left
# 96 "data/maps/Route24/scripts.pory"
	step_end
# 97 "data/maps/Route24/scripts.pory"

# 98 "data/maps/Route24/scripts.pory"
Route24_Movement_WalkDown::
# 99 "data/maps/Route24/scripts.pory"
	walk_down
# 100 "data/maps/Route24/scripts.pory"
	step_end

Route24_Give_Cyndaquil::
# 104 "data/maps/Route24/scripts.pory"
	lock
# 105 "data/maps/Route24/scripts.pory"
	faceplayer
# 106 "data/maps/Route24/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Route24_Give_Cyndaquil_2
# 112 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_WantCyndaquil, MSGBOX_YESNO
# 113 "data/maps/Route24/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route24_Give_Cyndaquil_4
# 118 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_HereIsCyndaquil
# 119 "data/maps/Route24/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 120 "data/maps/Route24/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 15
# 121 "data/maps/Route24/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route24_Give_Cyndaquil_7
# 123 "data/maps/Route24/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route24_Give_Cyndaquil_8
# 126 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_NoRoomForCyndaquil
# 127 "data/maps/Route24/scripts.pory"
	release
	end

Route24_Give_Cyndaquil_2:
# 107 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_AfterCyndaquil
# 108 "data/maps/Route24/scripts.pory"
	release
	end

Route24_Give_Cyndaquil_4:
# 114 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_DeclinedCyndaquil
# 115 "data/maps/Route24/scripts.pory"
	release
	end

Route24_Give_Cyndaquil_7:
# 122 "data/maps/Route24/scripts.pory"
	goto GiveCyndaquil_Party
	return

Route24_Give_Cyndaquil_8:
# 124 "data/maps/Route24/scripts.pory"
	goto GiveCyndaquil_PC
	return


GiveCyndaquil_PC::
# 134 "data/maps/Route24/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 135 "data/maps/Route24/scripts.pory"
	message Route24_Text_ReceivedCyndaquil
# 136 "data/maps/Route24/scripts.pory"
	waitmessage
# 137 "data/maps/Route24/scripts.pory"
	waitfanfare
# 139 "data/maps/Route24/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 140 "data/maps/Route24/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 141 "data/maps/Route24/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveCyndaquil_PC_1
# 147 "data/maps/Route24/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 148 "data/maps/Route24/scripts.pory"
	call EventScript_TransferredToPC
# 149 "data/maps/Route24/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
# 150 "data/maps/Route24/scripts.pory"
	release
	end

GiveCyndaquil_PC_1:
# 142 "data/maps/Route24/scripts.pory"
	call EventScript_TransferredToPC
# 143 "data/maps/Route24/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
# 144 "data/maps/Route24/scripts.pory"
	release
	end


GiveCyndaquil_Party::
# 156 "data/maps/Route24/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 157 "data/maps/Route24/scripts.pory"
	message Route24_Text_ReceivedCyndaquil
# 158 "data/maps/Route24/scripts.pory"
	waitmessage
# 159 "data/maps/Route24/scripts.pory"
	waitfanfare
# 161 "data/maps/Route24/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 162 "data/maps/Route24/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 163 "data/maps/Route24/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveCyndaquil_Party_1
# 168 "data/maps/Route24/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 169 "data/maps/Route24/scripts.pory"
	call EventScript_ChangePokemonNickname
# 170 "data/maps/Route24/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
# 171 "data/maps/Route24/scripts.pory"
	release
	end

GiveCyndaquil_Party_1:
# 164 "data/maps/Route24/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
# 165 "data/maps/Route24/scripts.pory"
	release
	end


Route24_Text_WantCyndaquil::
# 176 "data/maps/Route24/scripts.pory"
	.string "Ah, a young TRAINER!\p"
	.string "I recently returned from visiting\n"
	.string "my dear friend, PROF. ELM in JOHTO.\p"
	.string "He gave me this charming CYNDAQUIL\n"
	.string "to deliver to a promising TRAINER.\p"
	.string "Something about you tells me you\n"
	.string "might be just who I'm looking for!\p"
	.string "Would you like to take this\n"
	.string "CYNDAQUIL with you?$"

Route24_Text_HereIsCyndaquil::
# 188 "data/maps/Route24/scripts.pory"
	.string "Wonderful choice, my young friend!\p"
	.string "CYNDAQUIL is a FIRE-type POKéMON\n"
	.string "native to the JOHTO region.\p"
	.string "When it's nervous, the flames on\n"
	.string "its back burn more intensely.\p"
	.string "Do take good care of it!$"

Route24_Text_ReceivedCyndaquil::
# 197 "data/maps/Route24/scripts.pory"
	.string "{PLAYER} received CYNDAQUIL\n"
	.string "from the gentleman!$"

Route24_Text_NoRoomForCyndaquil::
# 202 "data/maps/Route24/scripts.pory"
	.string "Oh dear, it appears your party\n"
	.string "is already full.\p"
	.string "Please make some room and return\n"
	.string "to receive this darling CYNDAQUIL.$"

Route24_Text_DeclinedCyndaquil::
# 209 "data/maps/Route24/scripts.pory"
	.string "Oh my... How disappointing.\p"
	.string "Should you change your mind,\n"
	.string "I shall remain here for a while.$"

Route24_Text_AfterCyndaquil::
# 215 "data/maps/Route24/scripts.pory"
	.string "Ah, seeing young TRAINERS and\n"
	.string "POKéMON together...\p"
	.string "It reminds me of my own youth\n"
	.string "in JOHTO!\p"
	.string "CYNDAQUIL will surely warm up\n"
	.string "to you in no time at all!$"
