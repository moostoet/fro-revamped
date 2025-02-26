# 1 "data/maps/ViridianCity/scripts.pory"

# 2 "data/maps/ViridianCity/scripts.pory"
.set LOCALID_OLD_MAN,      3
# 3 "data/maps/ViridianCity/scripts.pory"
.set LOCALID_TUTORIAL_MAN, 4
# 4 "data/maps/ViridianCity/scripts.pory"
.set LOCALID_WOMAN,        5
# 5 "data/maps/ViridianCity/scripts.pory"

# 6 "data/maps/ViridianCity/scripts.pory"
ViridianCity_MapScripts::
# 7 "data/maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 8 "data/maps/ViridianCity/scripts.pory"
	.byte 0
# 9 "data/maps/ViridianCity/scripts.pory"

# 10 "data/maps/ViridianCity/scripts.pory"
ViridianCity_OnTransition::
# 11 "data/maps/ViridianCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 12 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
# 13 "data/maps/ViridianCity/scripts.pory"
	end
# 14 "data/maps/ViridianCity/scripts.pory"

# 15 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TryUnlockGym::
# 16 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, EventScript_Return
# 17 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_Return
# 18 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, EventScript_Return
# 19 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, EventScript_Return
# 20 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EventScript_Return
# 21 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, EventScript_Return
# 22 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 23 "data/maps/ViridianCity/scripts.pory"
	return
# 24 "data/maps/ViridianCity/scripts.pory"

# 25 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymDoorLocked::
# 26 "data/maps/ViridianCity/scripts.pory"
	lockall
# 27 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 28 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 30 "data/maps/ViridianCity/scripts.pory"
	delay 20
# 31 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 32 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 33 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 34 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/ViridianCity/scripts.pory"
	releaseall
# 36 "data/maps/ViridianCity/scripts.pory"
	end
# 37 "data/maps/ViridianCity/scripts.pory"

# 38 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Movement_JumpDownLedge::
# 39 "data/maps/ViridianCity/scripts.pory"
	jump_2_down
# 40 "data/maps/ViridianCity/scripts.pory"
	step_end
# 41 "data/maps/ViridianCity/scripts.pory"

# 42 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_CitySign::
# 43 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 44 "data/maps/ViridianCity/scripts.pory"
	end
# 45 "data/maps/ViridianCity/scripts.pory"

# 46 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips1::
# 47 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 48 "data/maps/ViridianCity/scripts.pory"
	end
# 49 "data/maps/ViridianCity/scripts.pory"

# 50 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips2::
# 51 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 52 "data/maps/ViridianCity/scripts.pory"
	end
# 53 "data/maps/ViridianCity/scripts.pory"

# 54 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymSign::
# 55 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 56 "data/maps/ViridianCity/scripts.pory"
	end
# 57 "data/maps/ViridianCity/scripts.pory"

# 58 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymDoor::
# 59 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
# 60 "data/maps/ViridianCity/scripts.pory"
	end
# 61 "data/maps/ViridianCity/scripts.pory"

# 62 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Boy::
# 63 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 64 "data/maps/ViridianCity/scripts.pory"
	end
# 65 "data/maps/ViridianCity/scripts.pory"

# 66 "data/maps/ViridianCity/scripts.pory"
@ Other old man, not the tutorial old man
# 67 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldMan::
# 68 "data/maps/ViridianCity/scripts.pory"
	lock
# 69 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 70 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 71 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 72 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 73 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_OLD_MAN, Common_Movement_FaceOriginalDirection
# 74 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/ViridianCity/scripts.pory"
	release
# 76 "data/maps/ViridianCity/scripts.pory"
	end
# 77 "data/maps/ViridianCity/scripts.pory"

# 78 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned::
# 79 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 80 "data/maps/ViridianCity/scripts.pory"
	release
# 81 "data/maps/ViridianCity/scripts.pory"
	end
# 82 "data/maps/ViridianCity/scripts.pory"

# 83 "data/maps/ViridianCity/scripts.pory"
@ Unused
# 84 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_WatchToLearnBasics::
# 85 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 86 "data/maps/ViridianCity/scripts.pory"
	release
# 87 "data/maps/ViridianCity/scripts.pory"
	end
# 88 "data/maps/ViridianCity/scripts.pory"

# 89 "data/maps/ViridianCity/scripts.pory"
@ Unused. Starts battle after the post battle text, which is odd.
# 90 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialUnused::
# 91 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 92 "data/maps/ViridianCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 93 "data/maps/ViridianCity/scripts.pory"
	special QuestLog_CutRecording
# 94 "data/maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 95 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 96 "data/maps/ViridianCity/scripts.pory"
	release
# 97 "data/maps/ViridianCity/scripts.pory"
	end
# 98 "data/maps/ViridianCity/scripts.pory"

# 99 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialNotReady::
# 100 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 101 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 102 "data/maps/ViridianCity/scripts.pory"
	release
# 103 "data/maps/ViridianCity/scripts.pory"
	end
# 104 "data/maps/ViridianCity/scripts.pory"

# 105 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Youngster::
# 106 "data/maps/ViridianCity/scripts.pory"
	lock
# 107 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 108 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 109 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 110 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
# 111 "data/maps/ViridianCity/scripts.pory"
	end
# 112 "data/maps/ViridianCity/scripts.pory"

# 113 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 114 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 115 "data/maps/ViridianCity/scripts.pory"
	release
# 116 "data/maps/ViridianCity/scripts.pory"
	end
# 117 "data/maps/ViridianCity/scripts.pory"

# 118 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation::
# 119 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 120 "data/maps/ViridianCity/scripts.pory"
	release
# 121 "data/maps/ViridianCity/scripts.pory"
	end
# 122 "data/maps/ViridianCity/scripts.pory"

# 123 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Woman::
# 124 "data/maps/ViridianCity/scripts.pory"
	lock
# 125 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 126 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 127 "data/maps/ViridianCity/scripts.pory"
	release
# 128 "data/maps/ViridianCity/scripts.pory"
	end
# 129 "data/maps/ViridianCity/scripts.pory"

# 130 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_DreamEaterTutor::
# 131 "data/maps/ViridianCity/scripts.pory"
	goto EventScript_DreamEaterTutor
# 132 "data/maps/ViridianCity/scripts.pory"
	end
# 133 "data/maps/ViridianCity/scripts.pory"

# 134 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_RoadBlocked::
# 135 "data/maps/ViridianCity/scripts.pory"
	lockall
# 136 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 137 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 138 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 139 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Movement_WalkDown
# 140 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/ViridianCity/scripts.pory"
	releaseall
# 142 "data/maps/ViridianCity/scripts.pory"
	end
# 143 "data/maps/ViridianCity/scripts.pory"

# 144 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Movement_WalkDown::
# 145 "data/maps/ViridianCity/scripts.pory"
	walk_down
# 146 "data/maps/ViridianCity/scripts.pory"
	step_end
# 147 "data/maps/ViridianCity/scripts.pory"

# 148 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialTriggerLeft::
# 149 "data/maps/ViridianCity/scripts.pory"
	lockall
# 150 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 151 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 152 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 154 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 156 "data/maps/ViridianCity/scripts.pory"
	release
# 157 "data/maps/ViridianCity/scripts.pory"
	end
# 158 "data/maps/ViridianCity/scripts.pory"

# 159 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialTriggerRight::
# 160 "data/maps/ViridianCity/scripts.pory"
	lockall
# 161 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 162 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 163 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 165 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 167 "data/maps/ViridianCity/scripts.pory"
	release
# 168 "data/maps/ViridianCity/scripts.pory"
	end
# 169 "data/maps/ViridianCity/scripts.pory"

# 170 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_DoTutorialBattle::
# 171 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 172 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 173 "data/maps/ViridianCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 174 "data/maps/ViridianCity/scripts.pory"
	special QuestLog_CutRecording
# 175 "data/maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 176 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 177 "data/maps/ViridianCity/scripts.pory"
	lock
# 178 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 179 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 180 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 181 "data/maps/ViridianCity/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 182 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 183 "data/maps/ViridianCity/scripts.pory"
	return

Viridian_GiveOldRod::
# 186 "data/maps/ViridianCity/scripts.pory"
	lock
# 187 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 189 "data/maps/ViridianCity/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, Viridian_GiveOldRod_2
# 195 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OldFishermanIntro, MSGBOX_YESNO
# 196 "data/maps/ViridianCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Viridian_GiveOldRod_5
# 201 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GiveOldRod
# 202 "data/maps/ViridianCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 203 "data/maps/ViridianCity/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 204 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainOldRod
# 206 "data/maps/ViridianCity/scripts.pory"
	release
	end

Viridian_GiveOldRod_2:
# 190 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_AfterOldRod
# 191 "data/maps/ViridianCity/scripts.pory"
	release
	end

Viridian_GiveOldRod_5:
# 197 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_DeclinedOldRod
# 198 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_Text_OldFishermanIntro::
# 210 "data/maps/ViridianCity/scripts.pory"
	.string "Ah, to be young again...\p"
	.string "I've spent decades fishing in these\n"
	.string "waters with my trusty OLD ROD.\p"
	.string "Say... you look like someone who\n"
	.string "might enjoy fishing!\p"
	.string "Would you like to learn the art\n"
	.string "of POKéMON fishing?$"

ViridianCity_Text_GiveOldRod::
# 220 "data/maps/ViridianCity/scripts.pory"
	.string "Ho ho! That's the spirit!\p"
	.string "This OLD ROD has served me well,\n"
	.string "but these days I prefer to just\l"
	.string "watch the water flow by.\p"
	.string "It may not catch anything fancy,\n"
	.string "but it's perfect for beginners!$"

ViridianCity_Text_ReceivedOldRod::
# 229 "data/maps/ViridianCity/scripts.pory"
	.string "{PLAYER} received the OLD ROD\n"
	.string "from the fisherman!$"

ViridianCity_Text_ExplainOldRod::
# 234 "data/maps/ViridianCity/scripts.pory"
	.string "Face any body of water and press\n"
	.string "the A Button to start fishing.\p"
	.string "If something bites, press the\n"
	.string "A Button quickly to reel it in!\p"
	.string "Be patient - that's the key to\n"
	.string "fishing, young one!$"

ViridianCity_Text_DeclinedOldRod::
# 243 "data/maps/ViridianCity/scripts.pory"
	.string "Oh... Well, the peaceful life of\n"
	.string "fishing isn't for everyone.\p"
	.string "Come back if you change your mind.$"

ViridianCity_Text_AfterOldRod::
# 249 "data/maps/ViridianCity/scripts.pory"
	.string "Have you caught anything yet?\p"
	.string "The gentle ripples of the water...\n"
	.string "The quiet anticipation...\p"
	.string "Fishing is good for the soul,\n"
	.string "wouldn't you agree?$"

ViridianCity_Text_NoRoomForOldRod::
# 257 "data/maps/ViridianCity/scripts.pory"
	.string "Oh my! Your BAG seems to be full.\p"
	.string "Make some room and come back for\n"
	.string "this trusty OLD ROD.$"
