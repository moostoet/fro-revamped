# 1 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_MapScripts::
# 3 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 4 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 5 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
# 6 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
# 7 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_OnFrame
# 8 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.byte 0
# 9 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 10 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnResume::
# 11 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 12 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 13 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 14 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 15 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad::
# 16 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
# 17 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_LoreleisRoom_EventScript_CloseEntry
# 18 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_BOX_LINK_DISABLED
# 19 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_SYRINGE_DISABLED
# 20 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_MED_KIT_DISABLED
# 21 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 22 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 23 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 24 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 25 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 27 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 28 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 29 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 30 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 31 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnTransition::
# 32 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
# 33 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 35 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnWarp::
# 36 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
# 37 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 39 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 40 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 41 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 42 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 43 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnFrame::
# 44 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
# 45 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.2byte 0
# 46 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 47 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 48 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lockall
# 49 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 50 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 51 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	releaseall
# 52 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 53 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 54 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 55 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 56 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	faceplayer
# 57 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 58 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_PostBattle
# 59 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 60 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 61 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_Intro
# 62 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_RematchIntro
# 63 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 64 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 65 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_Battle
# 66 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_Rematch
# 67 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 68 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
# 69 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 70 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 71 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Intro::
# 72 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
# 73 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 74 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 75 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 76 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
# 77 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 78 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 79 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Battle::
# 80 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
# 81 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 82 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 83 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 84 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
# 85 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 86 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 87 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 88 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 89 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
# 90 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 91 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 92 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 93 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 94 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 95 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 96 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
# 97 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
