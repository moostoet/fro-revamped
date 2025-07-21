# 1 "data/maps/VermilionCity/scripts.pory"

# 2 "data/maps/VermilionCity/scripts.pory"
.equ LOCALID_FERRY_SAILOR, 6
# 3 "data/maps/VermilionCity/scripts.pory"

# 4 "data/maps/VermilionCity/scripts.pory"
VermilionCity_MapScripts::
# 5 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 6 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_OnFrame
# 7 "data/maps/VermilionCity/scripts.pory"
	.byte 0
# 8 "data/maps/VermilionCity/scripts.pory"

# 9 "data/maps/VermilionCity/scripts.pory"
VermilionCity_OnFrame::
# 10 "data/maps/VermilionCity/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_EventScript_ExitSSAnne
# 11 "data/maps/VermilionCity/scripts.pory"
	.2byte 0
# 12 "data/maps/VermilionCity/scripts.pory"

# 13 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ExitSSAnne::
# 14 "data/maps/VermilionCity/scripts.pory"
	lockall
# 15 "data/maps/VermilionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Movement_ExitSSAnne
# 16 "data/maps/VermilionCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 18 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 19 "data/maps/VermilionCity/scripts.pory"
	end
# 20 "data/maps/VermilionCity/scripts.pory"

# 21 "data/maps/VermilionCity/scripts.pory"
VermilionCity_Movement_ExitSSAnne::
# 22 "data/maps/VermilionCity/scripts.pory"
	walk_up
# 23 "data/maps/VermilionCity/scripts.pory"
	walk_up
# 24 "data/maps/VermilionCity/scripts.pory"
	step_end
# 25 "data/maps/VermilionCity/scripts.pory"

# 26 "data/maps/VermilionCity/scripts.pory"
VermilionCity_OnTransition::
# 27 "data/maps/VermilionCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 28 "data/maps/VermilionCity/scripts.pory"
	call_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_EventScript_HideOaksAide
# 29 "data/maps/VermilionCity/scripts.pory"
	end
# 30 "data/maps/VermilionCity/scripts.pory"

# 31 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HideOaksAide::
# 32 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 33 "data/maps/VermilionCity/scripts.pory"
	return
# 34 "data/maps/VermilionCity/scripts.pory"

# 35 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Woman::
# 36 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
# 37 "data/maps/VermilionCity/scripts.pory"
	end
# 38 "data/maps/VermilionCity/scripts.pory"

# 39 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan1::
# 40 "data/maps/VermilionCity/scripts.pory"
	lock
# 41 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 42 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_OldMan1SSAnneLeft
# 43 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
# 44 "data/maps/VermilionCity/scripts.pory"
	release
# 45 "data/maps/VermilionCity/scripts.pory"
	end
# 46 "data/maps/VermilionCity/scripts.pory"

# 47 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan1SSAnneLeft::
# 48 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
# 49 "data/maps/VermilionCity/scripts.pory"
	release
# 50 "data/maps/VermilionCity/scripts.pory"
	end
# 51 "data/maps/VermilionCity/scripts.pory"

# 52 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_FerrySailor::
# 53 "data/maps/VermilionCity/scripts.pory"
	lock
# 54 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 55 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresent
# 56 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
# 57 "data/maps/VermilionCity/scripts.pory"
	release
# 58 "data/maps/VermilionCity/scripts.pory"
	end
# 59 "data/maps/VermilionCity/scripts.pory"

# 60 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket::
# 61 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, EventScript_SetResultFalse
# 62 "data/maps/VermilionCity/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 63 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 64 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
# 65 "data/maps/VermilionCity/scripts.pory"
	end
# 66 "data/maps/VermilionCity/scripts.pory"

# 67 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket::
# 68 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, EventScript_SetResultFalse
# 69 "data/maps/VermilionCity/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 70 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 71 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
# 72 "data/maps/VermilionCity/scripts.pory"
	end
# 73 "data/maps/VermilionCity/scripts.pory"

# 74 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent::
# 75 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 76 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 77 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 78 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 79 "data/maps/VermilionCity/scripts.pory"
	release
# 80 "data/maps/VermilionCity/scripts.pory"
	end
# 81 "data/maps/VermilionCity/scripts.pory"

# 82 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass::
# 83 "data/maps/VermilionCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 84 "data/maps/VermilionCity/scripts.pory"
	special QuestLog_CutRecording
# 85 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 86 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticTicket
# 87 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 88 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasAuroraTicket
# 89 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 90 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 91 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 92 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 93 "data/maps/VermilionCity/scripts.pory"
	end
# 94 "data/maps/VermilionCity/scripts.pory"

# 95 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasMysticTicket::
# 96 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 97 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticAndAuroraTickets
# 98 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 99 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 100 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 101 "data/maps/VermilionCity/scripts.pory"
	multichoice 17, 6, MULTICHOICE_SEVII_NAVEL, FALSE
# 102 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 104 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 105 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_CancelSail
# 106 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 107 "data/maps/VermilionCity/scripts.pory"
	end
# 108 "data/maps/VermilionCity/scripts.pory"

# 109 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ShowMysticTicket::
# 110 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 111 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
# 112 "data/maps/VermilionCity/scripts.pory"
	return
# 113 "data/maps/VermilionCity/scripts.pory"

# 114 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket::
# 115 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 116 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 117 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 118 "data/maps/VermilionCity/scripts.pory"
	multichoice 13, 6, MULTICHOICE_SEVII_BIRTH, FALSE
# 119 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 121 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToBirthIsland
# 122 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_CancelSail
# 123 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 124 "data/maps/VermilionCity/scripts.pory"
	end
# 125 "data/maps/VermilionCity/scripts.pory"

# 126 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ShowAuroraTicket::
# 127 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 128 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
# 129 "data/maps/VermilionCity/scripts.pory"
	return
# 130 "data/maps/VermilionCity/scripts.pory"

# 131 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 132 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 133 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 134 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 135 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 136 "data/maps/VermilionCity/scripts.pory"
	multichoice 13, 5, MULTICHOICE_SEVII_NAVEL_BIRTH, FALSE
# 137 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 139 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 140 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_SailToBirthIsland
# 141 "data/maps/VermilionCity/scripts.pory"
	case 3, EventScript_CancelSail
# 142 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 143 "data/maps/VermilionCity/scripts.pory"
	end
# 144 "data/maps/VermilionCity/scripts.pory"

# 145 "data/maps/VermilionCity/scripts.pory"
EventScript_SailToNavelRock::
# 146 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 147 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 148 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 149 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
# 150 "data/maps/VermilionCity/scripts.pory"
	end
# 151 "data/maps/VermilionCity/scripts.pory"

# 152 "data/maps/VermilionCity/scripts.pory"
EventScript_SailToBirthIsland::
# 153 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 154 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 155 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 156 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
# 157 "data/maps/VermilionCity/scripts.pory"
	end
# 158 "data/maps/VermilionCity/scripts.pory"

# 159 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass::
# 160 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 161 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 162 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 163 "data/maps/VermilionCity/scripts.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_123, FALSE
# 164 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 165 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SailToOneIsland2
# 166 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToTwoIsland2
# 167 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_SailToThreeIsland2
# 168 "data/maps/VermilionCity/scripts.pory"
	case 3, EventScript_CancelSail
# 169 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 170 "data/maps/VermilionCity/scripts.pory"
	end
# 171 "data/maps/VermilionCity/scripts.pory"

# 172 "data/maps/VermilionCity/scripts.pory"
@ Unreachable
# 173 "data/maps/VermilionCity/scripts.pory"
Vermilion_EventScript_Unused::
# 174 "data/maps/VermilionCity/scripts.pory"
	release
# 175 "data/maps/VermilionCity/scripts.pory"
	end
# 176 "data/maps/VermilionCity/scripts.pory"

# 177 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicketLeft::
# 178 "data/maps/VermilionCity/scripts.pory"
	lockall
# 179 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 180 "data/maps/VermilionCity/scripts.pory"
	end
# 181 "data/maps/VermilionCity/scripts.pory"

# 182 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicketRight::
# 183 "data/maps/VermilionCity/scripts.pory"
	lockall
# 184 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 185 "data/maps/VermilionCity/scripts.pory"
	end
# 186 "data/maps/VermilionCity/scripts.pory"

# 187 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ExitedTicketCheck::
# 188 "data/maps/VermilionCity/scripts.pory"
	lockall
# 189 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 190 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 191 "data/maps/VermilionCity/scripts.pory"
	end
# 192 "data/maps/VermilionCity/scripts.pory"

# 193 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicket::
# 194 "data/maps/VermilionCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 195 "data/maps/VermilionCity/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterLeft
# 196 "data/maps/VermilionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 197 "data/maps/VermilionCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresentTrigger
# 199 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 200 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_DontHaveSSTicket
# 201 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 202 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 203 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 204 "data/maps/VermilionCity/scripts.pory"
	end
# 205 "data/maps/VermilionCity/scripts.pory"

# 206 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_DontHaveSSTicket::
# 207 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 208 "data/maps/VermilionCity/scripts.pory"
	closemessage
# 209 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 210 "data/maps/VermilionCity/scripts.pory"
	end
# 211 "data/maps/VermilionCity/scripts.pory"

# 212 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger::
# 213 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 214 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 215 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 216 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 217 "data/maps/VermilionCity/scripts.pory"
	closemessage
# 218 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 219 "data/maps/VermilionCity/scripts.pory"
	end
# 220 "data/maps/VermilionCity/scripts.pory"

# 221 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Sailor::
# 222 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
# 223 "data/maps/VermilionCity/scripts.pory"
	end
# 224 "data/maps/VermilionCity/scripts.pory"

# 225 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OaksAide::
# 226 "data/maps/VermilionCity/scripts.pory"
	lock
# 227 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 228 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 229 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
# 230 "data/maps/VermilionCity/scripts.pory"
	release
# 231 "data/maps/VermilionCity/scripts.pory"
	end
# 232 "data/maps/VermilionCity/scripts.pory"

# 233 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan2::
# 234 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
# 235 "data/maps/VermilionCity/scripts.pory"
	end
# 236 "data/maps/VermilionCity/scripts.pory"

# 237 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Machop::
# 238 "data/maps/VermilionCity/scripts.pory"
	lock
# 239 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 240 "data/maps/VermilionCity/scripts.pory"
	waitse
# 241 "data/maps/VermilionCity/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 242 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 243 "data/maps/VermilionCity/scripts.pory"
	waitmoncry
# 244 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
# 245 "data/maps/VermilionCity/scripts.pory"
	release
# 246 "data/maps/VermilionCity/scripts.pory"
	end
# 247 "data/maps/VermilionCity/scripts.pory"

# 248 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CitySign::
# 249 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
# 250 "data/maps/VermilionCity/scripts.pory"
	end
# 251 "data/maps/VermilionCity/scripts.pory"

# 252 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_SnorlaxNotice::
# 253 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
# 254 "data/maps/VermilionCity/scripts.pory"
	end
# 255 "data/maps/VermilionCity/scripts.pory"

# 256 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_PokemonFanClubSign::
# 257 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 258 "data/maps/VermilionCity/scripts.pory"
	end
# 259 "data/maps/VermilionCity/scripts.pory"

# 260 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_GymSign::
# 261 "data/maps/VermilionCity/scripts.pory"
	lockall
# 262 "data/maps/VermilionCity/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 263 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 264 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 265 "data/maps/VermilionCity/scripts.pory"
	end
# 266 "data/maps/VermilionCity/scripts.pory"

# 267 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HarborSign::
# 268 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
# 269 "data/maps/VermilionCity/scripts.pory"
	end

Vermilion_GiveSquirtle::
# 272 "data/maps/VermilionCity/scripts.pory"
	lock
# 273 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 275 "data/maps/VermilionCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SQUIRTLE, Vermilion_GiveSquirtle_2
# 281 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_WantSquirtle, MSGBOX_YESNO
# 282 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Vermilion_GiveSquirtle_4
# 287 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_HereIsSquirtle
# 288 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUIRTLE
# 289 "data/maps/VermilionCity/scripts.pory"
	givemon SPECIES_SQUIRTLE, 15
# 290 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Vermilion_GiveSquirtle_7
# 292 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Vermilion_GiveSquirtle_8
# 295 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_NoRoomForSquirtle
	return

Vermilion_GiveSquirtle_2:
# 276 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_AfterSquirtle
# 277 "data/maps/VermilionCity/scripts.pory"
	release
	end

Vermilion_GiveSquirtle_4:
# 283 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DeclinedSquirtle
# 284 "data/maps/VermilionCity/scripts.pory"
	release
	end

Vermilion_GiveSquirtle_7:
# 291 "data/maps/VermilionCity/scripts.pory"
	goto GiveSquirtle_Party
	return

Vermilion_GiveSquirtle_8:
# 293 "data/maps/VermilionCity/scripts.pory"
	goto GiveSquirtle_PC
	return


GiveSquirtle_Party::
# 301 "data/maps/VermilionCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 302 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_ReceivedSquirtle
# 303 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 304 "data/maps/VermilionCity/scripts.pory"
	waitfanfare
# 306 "data/maps/VermilionCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 307 "data/maps/VermilionCity/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 308 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveSquirtle_Party_1
# 313 "data/maps/VermilionCity/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 314 "data/maps/VermilionCity/scripts.pory"
	call EventScript_ChangePokemonNickname
# 315 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 316 "data/maps/VermilionCity/scripts.pory"
	release
	end

GiveSquirtle_Party_1:
# 309 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 310 "data/maps/VermilionCity/scripts.pory"
	release
	end


GiveSquirtle_PC::
# 322 "data/maps/VermilionCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 323 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_ReceivedSquirtle
# 324 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 325 "data/maps/VermilionCity/scripts.pory"
	waitfanfare
# 327 "data/maps/VermilionCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 328 "data/maps/VermilionCity/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 329 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveSquirtle_PC_1
# 335 "data/maps/VermilionCity/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 336 "data/maps/VermilionCity/scripts.pory"
	call EventScript_TransferredToPC
# 337 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 338 "data/maps/VermilionCity/scripts.pory"
	release
	end

GiveSquirtle_PC_1:
# 330 "data/maps/VermilionCity/scripts.pory"
	call EventScript_TransferredToPC
# 331 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 332 "data/maps/VermilionCity/scripts.pory"
	release
	end


Verm_ThunderStone::
# 344 "data/maps/VermilionCity/scripts.pory"
	finditem ITEM_THUNDER_STONE
	end


Vermilion_GiveRandomKantoStarter::
# 349 "data/maps/VermilionCity/scripts.pory"
	lock
# 350 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 351 "data/maps/VermilionCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SQUIRTLE, Vermilion_GiveRandomKantoStarter_2
# 357 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_WantRandomStarter, MSGBOX_YESNO
# 358 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Vermilion_GiveRandomKantoStarter_5
# 397 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DeclinedRandomStarter, MSGBOX_DEFAULT
Vermilion_GiveRandomKantoStarter_4:
# 399 "data/maps/VermilionCity/scripts.pory"
	release
	end

Vermilion_GiveRandomKantoStarter_2:
# 352 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_AfterRandomStarter
# 353 "data/maps/VermilionCity/scripts.pory"
	release
	end

Vermilion_GiveRandomKantoStarter_5:
# 359 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_ChoosingStarter, MSGBOX_DEFAULT
# 360 "data/maps/VermilionCity/scripts.pory"
	random 3
# 362 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Vermilion_GiveRandomKantoStarter_8
# 373 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Vermilion_GiveRandomKantoStarter_9
# 385 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_ChoseCharmander, MSGBOX_DEFAULT
# 386 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHARMANDER
# 387 "data/maps/VermilionCity/scripts.pory"
	givemon SPECIES_CHARMANDER, 15
# 388 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Vermilion_GiveRandomKantoStarter_23
# 390 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Vermilion_GiveRandomKantoStarter_24
# 393 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_8:
# 363 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_ChoseSquirtle, MSGBOX_DEFAULT
# 364 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUIRTLE
# 365 "data/maps/VermilionCity/scripts.pory"
	givemon SPECIES_SQUIRTLE, 15
# 366 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Vermilion_GiveRandomKantoStarter_13
# 368 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Vermilion_GiveRandomKantoStarter_14
# 371 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_9:
# 374 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_ChoseBulbasaur, MSGBOX_DEFAULT
# 375 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
# 376 "data/maps/VermilionCity/scripts.pory"
	givemon SPECIES_BULBASAUR, 15
# 377 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Vermilion_GiveRandomKantoStarter_18
# 379 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Vermilion_GiveRandomKantoStarter_19
# 382 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_NoRoomForStarter, MSGBOX_DEFAULT
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_13:
# 367 "data/maps/VermilionCity/scripts.pory"
	goto GiveRandomKantoStarter_Party
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_14:
# 369 "data/maps/VermilionCity/scripts.pory"
	goto GiveRandomKantoStarter_PC
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_18:
# 378 "data/maps/VermilionCity/scripts.pory"
	goto GiveRandomKantoStarter_Party
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_19:
# 380 "data/maps/VermilionCity/scripts.pory"
	goto GiveRandomKantoStarter_PC
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_23:
# 389 "data/maps/VermilionCity/scripts.pory"
	goto GiveRandomKantoStarter_Party
	goto Vermilion_GiveRandomKantoStarter_4

Vermilion_GiveRandomKantoStarter_24:
# 391 "data/maps/VermilionCity/scripts.pory"
	goto GiveRandomKantoStarter_PC
	goto Vermilion_GiveRandomKantoStarter_4


GiveRandomKantoStarter_Party::
# 404 "data/maps/VermilionCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 405 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_ReceivedRandomStarter
# 406 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 407 "data/maps/VermilionCity/scripts.pory"
	waitfanfare
# 409 "data/maps/VermilionCity/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_1
# 410 "data/maps/VermilionCity/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 411 "data/maps/VermilionCity/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 412 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveRandomKantoStarter_Party_1
# 417 "data/maps/VermilionCity/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 418 "data/maps/VermilionCity/scripts.pory"
	call EventScript_ChangePokemonNickname
# 419 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 420 "data/maps/VermilionCity/scripts.pory"
	release
	end

GiveRandomKantoStarter_Party_1:
# 413 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 414 "data/maps/VermilionCity/scripts.pory"
	release
	end


GiveRandomKantoStarter_PC::
# 426 "data/maps/VermilionCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 427 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_ReceivedRandomStarter
# 428 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 429 "data/maps/VermilionCity/scripts.pory"
	waitfanfare
# 431 "data/maps/VermilionCity/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_1
# 432 "data/maps/VermilionCity/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 433 "data/maps/VermilionCity/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 434 "data/maps/VermilionCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveRandomKantoStarter_PC_1
# 440 "data/maps/VermilionCity/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 441 "data/maps/VermilionCity/scripts.pory"
	call EventScript_TransferredToPC
# 442 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 443 "data/maps/VermilionCity/scripts.pory"
	release
	end

GiveRandomKantoStarter_PC_1:
# 435 "data/maps/VermilionCity/scripts.pory"
	call EventScript_TransferredToPC
# 436 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 437 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_Text_WantRandomStarter::
# 448 "data/maps/VermilionCity/scripts.pory"
	.string "Ah, bonjour! I'm a chef waiting to\n"
	.string "start my new job on the S.S. AQUA.\p"
	.string "The S.S. ANNE was magnificent, but\n"
	.string "it has already departed...\p"
	.string "While waiting, I've been trying to\n"
	.string "train three POKéMON as kitchen help.\p"
	.string "But they all seem more interested\n"
	.string "in battling than cooking!\p"
	.string "Would you like me to give you one?\n"
	.string "I'll let fate decide which one!$"

VermilionCity_Text_ChoosingStarter::
# 461 "data/maps/VermilionCity/scripts.pory"
	.string "Très bien! Let me close my eyes\n"
	.string "and reach for a POKéBALL...\p"
	.string "Like selecting the perfect ingredient\n"
	.string "by instinct alone!$"

VermilionCity_Text_ChoseSquirtle::
# 468 "data/maps/VermilionCity/scripts.pory"
	.string "Ah! C'est SQUIRTLE!\p"
	.string "The TINY TURTLE POKéMON! This\n"
	.string "WATER-type is my personal favorite.\p"
	.string "I tried to teach it to wash dishes,\n"
	.string "but it prefers using WATER GUN!$"

VermilionCity_Text_ChoseBulbasaur::
# 476 "data/maps/VermilionCity/scripts.pory"
	.string "Oh! C'est BULBASAUR!\p"
	.string "The SEED POKéMON! This GRASS and\n"
	.string "POISON-type has excellent taste.\p"
	.string "I hoped it would help with herbs,\n"
	.string "but it's more of a battler!$"

VermilionCity_Text_ChoseCharmander::
# 484 "data/maps/VermilionCity/scripts.pory"
	.string "Voilà! C'est CHARMANDER!\p"
	.string "The LIZARD POKéMON! This FIRE-type\n"
	.string "would have been perfect for cooking!\p"
	.string "But its flame is meant for battle,\n"
	.string "not flambé!$"

VermilionCity_Text_ReceivedRandomStarter::
# 492 "data/maps/VermilionCity/scripts.pory"
	.string "{PLAYER} received the POKéMON\n"
	.string "from the chef!$"

VermilionCity_Text_NoRoomForStarter::
# 497 "data/maps/VermilionCity/scripts.pory"
	.string "Oh non! Your party is as full as\n"
	.string "a satisfied restaurant guest!\p"
	.string "Please make some room and return\n"
	.string "for this POKéMON.$"

VermilionCity_Text_DeclinedRandomStarter::
# 504 "data/maps/VermilionCity/scripts.pory"
	.string "Non? Perhaps another time then.\p"
	.string "I'll keep trying to train them\n"
	.string "in the culinary arts...\p"
	.string "Though I suspect they'll never\n"
	.string "master even a simple soufflé!$"

VermilionCity_Text_AfterRandomStarter::
# 512 "data/maps/VermilionCity/scripts.pory"
	.string "How is your POKéMON doing?\n"
	.string "Growing strong, I hope!\p"
	.string "Sometimes the best recipes come\n"
	.string "from unexpected combinations...\p"
	.string "Just like the best partnerships\n"
	.string "come from chance encounters!$"

VermilionCity_Text_WantSquirtle::
# 521 "data/maps/VermilionCity/scripts.pory"
	.string "Ah, bonjour! I'm a chef waiting to\n"
	.string "start my new job on the S.S. AQUA.\p"
	.string "The S.S. ANNE was magnificent, but\n"
	.string "it has already departed...\p"
	.string "While I wait, I've been training this\n"
	.string "SQUIRTLE to help in the kitchen.\p"
	.string "But the ship won't arrive for quite\n"
	.string "some time, and SQUIRTLE seems more\l"
	.string "interested in battling than cooking!\p"
	.string "Would you like to take this SQUIRTLE\n"
	.string "with you on your journey instead?$"

VermilionCity_Text_HereIsSquirtle::
# 535 "data/maps/VermilionCity/scripts.pory"
	.string "Magnifique! SQUIRTLE will make a\n"
	.string "wonderful partner for you!\p"
	.string "It may not have become a chef, but\n"
	.string "I'm sure it will become strong!$"

VermilionCity_Text_ReceivedSquirtle::
# 542 "data/maps/VermilionCity/scripts.pory"
	.string "{PLAYER} received SQUIRTLE\n"
	.string "from the chef!$"

VermilionCity_Text_NoRoomForSquirtle::
# 547 "data/maps/VermilionCity/scripts.pory"
	.string "Oh non! Your party appears to be\n"
	.string "full at the moment.\p"
	.string "Please make some room and return\n"
	.string "for SQUIRTLE.$"

VermilionCity_Text_DeclinedSquirtle::
# 554 "data/maps/VermilionCity/scripts.pory"
	.string "Non? That is too bad...\p"
	.string "I will keep trying to teach it\n"
	.string "the culinary arts then!$"

VermilionCity_Text_AfterSquirtle::
# 560 "data/maps/VermilionCity/scripts.pory"
	.string "The S.S. AQUA will be magnificent\n"
	.string "when it finally arrives!\p"
	.string "But I'm happy SQUIRTLE found its\n"
	.string "true calling as your POKéMON!$"
