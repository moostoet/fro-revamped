# 1 "data/maps/RockTunnel_1F/scripts.pory"

# 2 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_MapScripts::
# 3 "data/maps/RockTunnel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
# 4 "data/maps/RockTunnel_1F/scripts.pory"
	.byte 0
# 5 "data/maps/RockTunnel_1F/scripts.pory"

# 6 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_OnTransition::
# 7 "data/maps/RockTunnel_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
# 8 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 9 "data/maps/RockTunnel_1F/scripts.pory"

# 10 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_RouteSign::
# 11 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
# 12 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 13 "data/maps/RockTunnel_1F/scripts.pory"

# 14 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Lenny::
# 15 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
# 16 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 18 "data/maps/RockTunnel_1F/scripts.pory"

# 19 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Oliver::
# 20 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
# 21 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 23 "data/maps/RockTunnel_1F/scripts.pory"

# 24 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Lucas::
# 25 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
# 26 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 28 "data/maps/RockTunnel_1F/scripts.pory"

# 29 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Ashton::
# 30 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
# 31 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 33 "data/maps/RockTunnel_1F/scripts.pory"

# 34 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Leah::
# 35 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
# 36 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 38 "data/maps/RockTunnel_1F/scripts.pory"

# 39 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Ariana::
# 40 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
# 41 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/RockTunnel_1F/scripts.pory"
	end
# 43 "data/maps/RockTunnel_1F/scripts.pory"

# 44 "data/maps/RockTunnel_1F/scripts.pory"
RockTunnel_1F_EventScript_Dana::
# 45 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
# 46 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/RockTunnel_1F/scripts.pory"
	end

RockTunnel_GiveCharmander::
# 51 "data/maps/RockTunnel_1F/scripts.pory"
	lock
# 52 "data/maps/RockTunnel_1F/scripts.pory"
	faceplayer
# 54 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARMANDER, RockTunnel_GiveCharmander_2
# 60 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_WantCharmander, MSGBOX_YESNO
# 61 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RockTunnel_GiveCharmander_5
# 66 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_HereIsCharmander
# 67 "data/maps/RockTunnel_1F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHARMANDER
# 68 "data/maps/RockTunnel_1F/scripts.pory"
	givemon SPECIES_CHARMANDER, 15
# 69 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RockTunnel_GiveCharmander_8
# 71 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RockTunnel_GiveCharmander_9
# 74 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_NoRoomForCharmander
RockTunnel_GiveCharmander_4:
# 77 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

RockTunnel_GiveCharmander_2:
# 55 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_AfterCharmander
# 56 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

RockTunnel_GiveCharmander_5:
# 62 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_DeclinedCharmander
# 63 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

RockTunnel_GiveCharmander_8:
# 70 "data/maps/RockTunnel_1F/scripts.pory"
	goto GiveCharmander_Party
	goto RockTunnel_GiveCharmander_4

RockTunnel_GiveCharmander_9:
# 72 "data/maps/RockTunnel_1F/scripts.pory"
	goto GiveCharmander_PC
	goto RockTunnel_GiveCharmander_4


GiveCharmander_Party::
# 82 "data/maps/RockTunnel_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 83 "data/maps/RockTunnel_1F/scripts.pory"
	message RockTunnel_Text_ReceivedCharmander
# 84 "data/maps/RockTunnel_1F/scripts.pory"
	waitmessage
# 85 "data/maps/RockTunnel_1F/scripts.pory"
	waitfanfare
# 87 "data/maps/RockTunnel_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 88 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 89 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveCharmander_Party_1
# 94 "data/maps/RockTunnel_1F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 95 "data/maps/RockTunnel_1F/scripts.pory"
	call EventScript_ChangePokemonNickname
# 96 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_RECEIVED_CHARMANDER
# 97 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

GiveCharmander_Party_1:
# 90 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_RECEIVED_CHARMANDER
# 91 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end


GiveCharmander_PC::
# 103 "data/maps/RockTunnel_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 104 "data/maps/RockTunnel_1F/scripts.pory"
	message RockTunnel_Text_ReceivedCharmander
# 105 "data/maps/RockTunnel_1F/scripts.pory"
	waitmessage
# 106 "data/maps/RockTunnel_1F/scripts.pory"
	waitfanfare
# 108 "data/maps/RockTunnel_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 109 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 110 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveCharmander_PC_1
# 115 "data/maps/RockTunnel_1F/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 116 "data/maps/RockTunnel_1F/scripts.pory"
	call EventScript_TransferredToPC
# 117 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_RECEIVED_CHARMANDER
# 118 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

GiveCharmander_PC_1:
# 111 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_RECEIVED_CHARMANDER
# 112 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end


RockTunnel_Hiker_LearnRockSlide::
# 172 "data/maps/RockTunnel_1F/scripts.pory"
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, RockTunnel_Hiker_LearnRockSlide_2
# 178 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_WantLearnRockSlide, MSGBOX_YESNO
# 179 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RockTunnel_Hiker_LearnRockSlide_5
# 184 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_WhichMonRockSlide
# 185 "data/maps/RockTunnel_1F/scripts.pory"
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
# 186 "data/maps/RockTunnel_1F/scripts.pory"
	call EventScript_ChooseMoveTutorMon
# 187 "data/maps/RockTunnel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RockTunnel_Hiker_LearnRockSlide_8
# 192 "data/maps/RockTunnel_1F/scripts.pory"
	setflag FLAG_TUTOR_ROCK_SLIDE
# 193 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_RockSlideLearned
# 197 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

RockTunnel_Hiker_LearnRockSlide_2:
# 173 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_AfterRockSlide
# 174 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

RockTunnel_Hiker_LearnRockSlide_5:
# 180 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_DeclinedRockSlide
# 181 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end

RockTunnel_Hiker_LearnRockSlide_8:
# 188 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_Text_DeclinedRockSlide
# 189 "data/maps/RockTunnel_1F/scripts.pory"
	release
	end


RockTunnel_Text_WantCharmander::
# 123 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Eek! This tunnel is so dark and\n"
	.string "scary, even with my CHARMANDER's\l"
	.string "flame lighting the way...\p"
	.string "I thought having a FIRE POKéMON\n"
	.string "would help me be braver, but I\l"
	.string "just can't handle cave exploring!\p"
	.string "Say... you look like a much more\n"
	.string "capable TRAINER than me.\p"
	.string "Would you like to take care of my\n"
	.string "CHARMANDER? Its flame would help\l"
	.string "guide you through here!$"

RockTunnel_Text_HereIsCharmander::
# 137 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Oh thank you! CHARMANDER will be\n"
	.string "much happier going on adventures\l"
	.string "with a brave TRAINER like you!\p"
	.string "Its tail flame burns so bright,\n"
	.string "it's perfect for dark caves!$"

RockTunnel_Text_ReceivedCharmander::
# 145 "data/maps/RockTunnel_1F/scripts.pory"
	.string "{PLAYER} received CHARMANDER\n"
	.string "from the scared picnicker!$"

RockTunnel_Text_NoRoomForCharmander::
# 150 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Oh no... you don't have room in\n"
	.string "your party right now.\p"
	.string "Please come back if you make room!\p"
	.string "...but hurry back soon, okay?\n"
	.string "It's scary in here...$"

RockTunnel_Text_DeclinedCharmander::
# 158 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Oh... I understand.\p"
	.string "I guess we'll try to find our way\n"
	.string "out of here together then...$"

RockTunnel_Text_AfterCharmander::
# 164 "data/maps/RockTunnel_1F/scripts.pory"
	.string "I think I'll stick to having\n"
	.string "picnics in CERULEAN CITY\l"
	.string "from now on!\p"
	.string "Take good care of CHARMANDER!$"

RockTunnel_Text_WantLearnRockSlide::
# 201 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Wa ha ha! Nothing beats training\n"
	.string "in a place full of rocks!\p"
	.string "I've been teaching my POKéMON how\n"
	.string "to use the rocks around here to\l"
	.string "their advantage!\p"
	.string "Hey, you look like a TRAINER with\n"
	.string "some potential! Want me to teach\l"
	.string "one of your POKéMON ROCK SLIDE?$"

RockTunnel_Text_WhichMonRockSlide::
# 212 "data/maps/RockTunnel_1F/scripts.pory"
	.string "All right! This move is perfect\n"
	.string "for tough battles!\p"
	.string "Which POKéMON should learn\n"
	.string "ROCK SLIDE?$"

RockTunnel_Text_TeachRockSlide::
# 219 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Wa ha ha! Watch carefully now!\p"
	.string "It's all about using the momentum\n"
	.string "of falling rocks to crush your\l"
	.string "opponents!$"

RockTunnel_Text_RockSlideLearned::
# 226 "data/maps/RockTunnel_1F/scripts.pory"
	.string "There you have it! Your POKéMON\n"
	.string "now knows ROCK SLIDE!\p"
	.string "It's a powerful move that might\n"
	.string "even make your opponent flinch!\p"
	.string "Perfect for taking down those\n"
	.string "pesky FLYING-types!$"

RockTunnel_Text_DeclinedRockSlide::
# 235 "data/maps/RockTunnel_1F/scripts.pory"
	.string "No? Well, if you change your mind,\n"
	.string "I'll be right here training!\p"
	.string "Nothing beats the sound of rocks\n"
	.string "crashing down! Wa ha ha!$"

RockTunnel_Text_AfterRockSlide::
# 242 "data/maps/RockTunnel_1F/scripts.pory"
	.string "ROCK SLIDE is a move that really\n"
	.string "shows the raw power of ROCK-type\l"
	.string "POKéMON!\p"
	.string "Use it well, and watch those rocks\n"
	.string "tumble down! Wa ha ha!$"

RockTunnel_Text_CantLearnRockSlide::
# 250 "data/maps/RockTunnel_1F/scripts.pory"
	.string "Hm... Looks like this POKéMON\n"
	.string "can't learn ROCK SLIDE.\p"
	.string "Choose a different one!$"
