# 1 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 3 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 4 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
# 5 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4
# 6 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 7 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
CeladonCity_Condominiums_2F_MapScripts::
# 8 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
	.byte 0
# 9 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 10 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
CeladonCity_Condominiums_2F_EventScript_MeetingRoomSign::
# 11 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
	msgbox CeladonCity_Condominiums_2F_Text_GameFreakMeetingRoom, MSGBOX_SIGN
# 12 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
	end
# 13 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 14 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
TwoIsland_House_EventScript_MoveManiac::
# 15 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    goto_if_questlog EventScript_ReleaseEnd 
# 16 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    special QuestLog_CutRecording
# 17 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    lock
# 18 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    faceplayer
# 19 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 20 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    goto_if_set FLAG_SYS_RECEIVED_MOVE_RELEARNER_ITEM, TwoIsland_House_EventScript_AlreadyGotRelearner
# 21 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 22 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    msgbox TwoIsland_House_Text_TiredOfMushroomsIntro, MSGBOX_YESNO
# 23 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    goto_if_eq VAR_RESULT,NO,TwoIsland_House_EventScript_PlayerDeclinesRelearner
# 24 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 25 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    giveitem ITEM_RELEARNER
# 26 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    
# 27 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    goto_if_eq VAR_RESULT,FALSE,TwoIsland_House_EventScript_BagFullRelearner
# 28 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 29 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    setflag FLAG_SYS_RECEIVED_MOVE_RELEARNER_ITEM
# 30 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    msgbox TwoIsland_House_Text_PlayerReceivesRelearnerExplanation
# 31 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    release
# 32 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    end
# 33 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 34 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
TwoIsland_House_EventScript_BagFullRelearner::
# 35 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    msgbox TwoIsland_House_Text_BagFullRelearner
# 36 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    release
# 37 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    end
# 38 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 39 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
TwoIsland_House_EventScript_PlayerDeclinesRelearner::
# 40 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    msgbox TwoIsland_House_Text_PlayerDeclinesRelearner
# 41 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    release
# 42 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    end
# 43 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"

# 44 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
TwoIsland_House_EventScript_AlreadyGotRelearner::
# 45 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    msgbox TwoIsland_House_Text_AfterReceivingRelearner
# 46 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    release
# 47 "data/maps/CeladonCity_Condominiums_2F/scripts.pory"
    end
