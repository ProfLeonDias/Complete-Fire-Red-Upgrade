#include "../config.h"
#include "../../include/global.h"
#include "../../include/new/frontier.h"
#include "../../include/new/text.h"
#include "../../include/constants/event_objects.h"
#include "../../include/constants/trainer_classes.h"
#include "../../include/constants/trainers.h"
#include "../../include/constants/songs.h"

#include "frontier_trainer_names.h"
#include "frontier_special_trainer_spreads.h"
#include "frontier_multi_spreads.h"
/*
battle_frontier_trainers.c
	set up the battle frontier trainer structure

	struct BattleTowerTrainer
	{
		u16 owNum;
		u8 trainerClass;
		u8 trainerSprite;
		u8 gender;
		u8* preBattleText;
		u8* playerWinText;
		u8* playerLoseText;
	};

tables to edit:
	gTowerTrainers
	gSpecialTowerTrainers
	gFrontierBrains
	gFrontierMultiBattleTrainers
*/

extern const u8 sFrontierText_Youngster_PreBattle_1[];
extern const u8 sFrontierText_Youngster_PlayerWin_1[];
extern const u8 sFrontierText_Youngster_PlayerLose_1[];
extern const u8 sFrontierText_Youngster_PreBattle_2[];
extern const u8 sFrontierText_Youngster_PlayerWin_2[];
extern const u8 sFrontierText_Youngster_PlayerLose_2[];
extern const u8 sFrontierText_Youngster_PreBattle_3[];
extern const u8 sFrontierText_Youngster_PlayerWin_3[];
extern const u8 sFrontierText_Youngster_PlayerLose_3[];

#ifndef UNBOUND
extern const u8 sFrontierText_Bugcatcher_PreBattle_1[];
extern const u8 sFrontierText_Bugcatcher_PlayerWin_1[];
extern const u8 sFrontierText_Bugcatcher_PlayerLose_1[];
extern const u8 sFrontierText_Bugcatcher_PreBattle_2[];
extern const u8 sFrontierText_Bugcatcher_PlayerWin_2[];
extern const u8 sFrontierText_Bugcatcher_PlayerLose_2[];
extern const u8 sFrontierText_Bugcatcher_PreBattle_3[];
extern const u8 sFrontierText_Bugcatcher_PlayerWin_3[];
extern const u8 sFrontierText_Bugcatcher_PlayerLose_3[];
extern const u8 sFrontierText_Lass_PreBattle_1[];
extern const u8 sFrontierText_Lass_PlayerWin_1[];
extern const u8 sFrontierText_Lass_PlayerLose_1[];
extern const u8 sFrontierText_Lass_PreBattle_2[];
extern const u8 sFrontierText_Lass_PlayerWin_2[];
extern const u8 sFrontierText_Lass_PlayerLose_2[];
extern const u8 sFrontierText_Lass_PreBattle_3[];
extern const u8 sFrontierText_Lass_PlayerWin_3[];
extern const u8 sFrontierText_Lass_PlayerLose_3[];
extern const u8 sFrontierText_Sailor_PreBattle_1[];
extern const u8 sFrontierText_Sailor_PlayerWin_1[];
extern const u8 sFrontierText_Sailor_PlayerLose_1[];
extern const u8 sFrontierText_Sailor_PreBattle_2[];
extern const u8 sFrontierText_Sailor_PlayerWin_2[];
extern const u8 sFrontierText_Sailor_PlayerLose_2[];
extern const u8 sFrontierText_Sailor_PreBattle_3[];
extern const u8 sFrontierText_Sailor_PlayerWin_3[];
extern const u8 sFrontierText_Sailor_PlayerLose_3[];
extern const u8 sFrontierText_Camper_PreBattle_1[];
extern const u8 sFrontierText_Camper_PlayerWin_1[];
extern const u8 sFrontierText_Camper_PlayerLose_1[];
extern const u8 sFrontierText_Camper_PreBattle_2[];
extern const u8 sFrontierText_Camper_PlayerWin_2[];
extern const u8 sFrontierText_Camper_PlayerLose_2[];
extern const u8 sFrontierText_Camper_PreBattle_3[];
extern const u8 sFrontierText_Camper_PlayerWin_3[];
extern const u8 sFrontierText_Camper_PlayerLose_3[];
extern const u8 sFrontierText_Picnicker_PreBattle_1[];
extern const u8 sFrontierText_Picnicker_PlayerWin_1[];
extern const u8 sFrontierText_Picnicker_PlayerLose_1[];
extern const u8 sFrontierText_Picnicker_PreBattle_2[];
extern const u8 sFrontierText_Picnicker_PlayerWin_2[];
extern const u8 sFrontierText_Picnicker_PlayerLose_2[];
extern const u8 sFrontierText_Picnicker_PreBattle_3[];
extern const u8 sFrontierText_Picnicker_PlayerWin_3[];
extern const u8 sFrontierText_Picnicker_PlayerLose_3[];
extern const u8 sFrontierText_Pokemaniac_PreBattle_1[];
extern const u8 sFrontierText_Pokemaniac_PlayerWin_1[];
extern const u8 sFrontierText_Pokemaniac_PlayerLose_1[];
extern const u8 sFrontierText_Pokemaniac_PreBattle_2[];
extern const u8 sFrontierText_Pokemaniac_PlayerWin_2[];
extern const u8 sFrontierText_Pokemaniac_PlayerLose_2[];
extern const u8 sFrontierText_Pokemaniac_PreBattle_3[];
extern const u8 sFrontierText_Pokemaniac_PlayerWin_3[];
extern const u8 sFrontierText_Pokemaniac_PlayerLose_3[];
extern const u8 sFrontierText_Supernerd_PreBattle_1[];
extern const u8 sFrontierText_Supernerd_PlayerWin_1[];
extern const u8 sFrontierText_Supernerd_PlayerLose_1[];
extern const u8 sFrontierText_Supernerd_PreBattle_2[];
extern const u8 sFrontierText_Supernerd_PlayerWin_2[];
extern const u8 sFrontierText_Supernerd_PlayerLose_2[];
extern const u8 sFrontierText_Supernerd_PreBattle_3[];
extern const u8 sFrontierText_Supernerd_PlayerWin_3[];
extern const u8 sFrontierText_Supernerd_PlayerLose_3[];
extern const u8 sFrontierText_Hiker_PreBattle_1[];
extern const u8 sFrontierText_Hiker_PlayerWin_1[];
extern const u8 sFrontierText_Hiker_PlayerLose_1[];
extern const u8 sFrontierText_Hiker_PreBattle_2[];
extern const u8 sFrontierText_Hiker_PlayerWin_2[];
extern const u8 sFrontierText_Hiker_PlayerLose_2[];
extern const u8 sFrontierText_Hiker_PreBattle_3[];
extern const u8 sFrontierText_Hiker_PlayerWin_3[];
extern const u8 sFrontierText_Hiker_PlayerLose_3[];
extern const u8 sFrontierText_Biker_PreBattle_1[];
extern const u8 sFrontierText_Biker_PlayerWin_1[];
extern const u8 sFrontierText_Biker_PlayerLose_1[];
extern const u8 sFrontierText_Biker_PreBattle_2[];
extern const u8 sFrontierText_Biker_PlayerWin_2[];
extern const u8 sFrontierText_Biker_PlayerLose_2[];
extern const u8 sFrontierText_Biker_PreBattle_3[];
extern const u8 sFrontierText_Biker_PlayerWin_3[];
extern const u8 sFrontierText_Biker_PlayerLose_3[];
extern const u8 sFrontierText_Burglar_PreBattle_1[];
extern const u8 sFrontierText_Burglar_PlayerWin_1[];
extern const u8 sFrontierText_Burglar_PlayerLose_1[];
extern const u8 sFrontierText_Burglar_PreBattle_2[];
extern const u8 sFrontierText_Burglar_PlayerWin_2[];
extern const u8 sFrontierText_Burglar_PlayerLose_2[];
extern const u8 sFrontierText_Burglar_PreBattle_3[];
extern const u8 sFrontierText_Burglar_PlayerWin_3[];
extern const u8 sFrontierText_Burglar_PlayerLose_3[];
extern const u8 sFrontierText_Engineer_PreBattle_1[];
extern const u8 sFrontierText_Engineer_PlayerWin_1[];
extern const u8 sFrontierText_Engineer_PlayerLose_1[];
extern const u8 sFrontierText_Engineer_PreBattle_2[];
extern const u8 sFrontierText_Engineer_PlayerWin_2[];
extern const u8 sFrontierText_Engineer_PlayerLose_2[];
extern const u8 sFrontierText_Engineer_PreBattle_3[];
extern const u8 sFrontierText_Engineer_PlayerWin_3[];
extern const u8 sFrontierText_Engineer_PlayerLose_3[];
extern const u8 sFrontierText_Fisherman_PreBattle_1[];
extern const u8 sFrontierText_Fisherman_PlayerWin_1[];
extern const u8 sFrontierText_Fisherman_PlayerLose_1[];
extern const u8 sFrontierText_Fisherman_PreBattle_2[];
extern const u8 sFrontierText_Fisherman_PlayerWin_2[];
extern const u8 sFrontierText_Fisherman_PlayerLose_2[];
extern const u8 sFrontierText_Fisherman_PreBattle_3[];
extern const u8 sFrontierText_Fisherman_PlayerWin_3[];
extern const u8 sFrontierText_Fisherman_PlayerLose_3[];
extern const u8 sFrontierText_SwimmerM_PreBattle_1[];
extern const u8 sFrontierText_SwimmerM_PlayerWin_1[];
extern const u8 sFrontierText_SwimmerM_PlayerLose_1[];
extern const u8 sFrontierText_SwimmerM_PreBattle_2[];
extern const u8 sFrontierText_SwimmerM_PlayerWin_2[];
extern const u8 sFrontierText_SwimmerM_PlayerLose_2[];
extern const u8 sFrontierText_SwimmerM_PreBattle_3[];
extern const u8 sFrontierText_SwimmerM_PlayerWin_3[];
extern const u8 sFrontierText_SwimmerM_PlayerLose_3[];
extern const u8 sFrontierText_CueBall_PreBattle_1[];
extern const u8 sFrontierText_CueBall_PlayerWin_1[];
extern const u8 sFrontierText_CueBall_PlayerLose_1[];
extern const u8 sFrontierText_CueBall_PreBattle_2[];
extern const u8 sFrontierText_CueBall_PlayerWin_2[];
extern const u8 sFrontierText_CueBall_PlayerLose_2[];
extern const u8 sFrontierText_CueBall_PreBattle_3[];
extern const u8 sFrontierText_CueBall_PlayerWin_3[];
extern const u8 sFrontierText_CueBall_PlayerLose_3[];
extern const u8 sFrontierText_Gambler_PreBattle_1[];
extern const u8 sFrontierText_Gambler_PlayerWin_1[];
extern const u8 sFrontierText_Gambler_PlayerLose_1[];
extern const u8 sFrontierText_Gambler_PreBattle_2[];
extern const u8 sFrontierText_Gambler_PlayerWin_2[];
extern const u8 sFrontierText_Gambler_PlayerLose_2[];
extern const u8 sFrontierText_Gambler_PreBattle_3[];
extern const u8 sFrontierText_Gambler_PlayerWin_3[];
extern const u8 sFrontierText_Gambler_PlayerLose_3[];
extern const u8 sFrontierText_Beauty_PreBattle_1[];
extern const u8 sFrontierText_Beauty_PlayerWin_1[];
extern const u8 sFrontierText_Beauty_PlayerLose_1[];
extern const u8 sFrontierText_Beauty_PreBattle_2[];
extern const u8 sFrontierText_Beauty_PlayerWin_2[];
extern const u8 sFrontierText_Beauty_PlayerLose_2[];
extern const u8 sFrontierText_Beauty_PreBattle_3[];
extern const u8 sFrontierText_Beauty_PlayerWin_3[];
extern const u8 sFrontierText_Beauty_PlayerLose_3[];
extern const u8 sFrontierText_SwimmerF_PreBattle_1[];
extern const u8 sFrontierText_SwimmerF_PlayerWin_1[];
extern const u8 sFrontierText_SwimmerF_PlayerLose_1[];
extern const u8 sFrontierText_SwimmerF_PreBattle_2[];
extern const u8 sFrontierText_SwimmerF_PlayerWin_2[];
extern const u8 sFrontierText_SwimmerF_PlayerLose_2[];
extern const u8 sFrontierText_SwimmerF_PreBattle_3[];
extern const u8 sFrontierText_SwimmerF_PlayerWin_3[];
extern const u8 sFrontierText_SwimmerF_PlayerLose_3[];
extern const u8 sFrontierText_PsychicM_PreBattle_1[];
extern const u8 sFrontierText_PsychicM_PlayerWin_1[];
extern const u8 sFrontierText_PsychicM_PlayerLose_1[];
extern const u8 sFrontierText_PsychicM_PreBattle_2[];
extern const u8 sFrontierText_PsychicM_PlayerWin_2[];
extern const u8 sFrontierText_PsychicM_PlayerLose_2[];
extern const u8 sFrontierText_PsychicM_PreBattle_3[];
extern const u8 sFrontierText_PsychicM_PlayerWin_3[];
extern const u8 sFrontierText_PsychicM_PlayerLose_3[];
extern const u8 sFrontierText_PsychicF_PreBattle_1[];
extern const u8 sFrontierText_PsychicF_PlayerWin_1[];
extern const u8 sFrontierText_PsychicF_PlayerLose_1[];
extern const u8 sFrontierText_PsychicF_PreBattle_2[];
extern const u8 sFrontierText_PsychicF_PlayerWin_2[];
extern const u8 sFrontierText_PsychicF_PlayerLose_2[];
extern const u8 sFrontierText_PsychicF_PreBattle_3[];
extern const u8 sFrontierText_PsychicF_PlayerWin_3[];
extern const u8 sFrontierText_PsychicF_PlayerLose_3[];
extern const u8 sFrontierText_Rocker_PreBattle_1[];
extern const u8 sFrontierText_Rocker_PlayerWin_1[];
extern const u8 sFrontierText_Rocker_PlayerLose_1[];
extern const u8 sFrontierText_Rocker_PreBattle_2[];
extern const u8 sFrontierText_Rocker_PlayerWin_2[];
extern const u8 sFrontierText_Rocker_PlayerLose_2[];
extern const u8 sFrontierText_Rocker_PreBattle_3[];
extern const u8 sFrontierText_Rocker_PlayerWin_3[];
extern const u8 sFrontierText_Rocker_PlayerLose_3[];
extern const u8 sFrontierText_Juggler_PreBattle_1[];
extern const u8 sFrontierText_Juggler_PlayerWin_1[];
extern const u8 sFrontierText_Juggler_PlayerLose_1[];
extern const u8 sFrontierText_Juggler_PreBattle_2[];
extern const u8 sFrontierText_Juggler_PlayerWin_2[];
extern const u8 sFrontierText_Juggler_PlayerLose_2[];
extern const u8 sFrontierText_Juggler_PreBattle_3[];
extern const u8 sFrontierText_Juggler_PlayerWin_3[];
extern const u8 sFrontierText_Juggler_PlayerLose_3[];
extern const u8 sFrontierText_Tamer_PreBattle_1[];
extern const u8 sFrontierText_Tamer_PlayerWin_1[];
extern const u8 sFrontierText_Tamer_PlayerLose_1[];
extern const u8 sFrontierText_Tamer_PreBattle_2[];
extern const u8 sFrontierText_Tamer_PlayerWin_2[];
extern const u8 sFrontierText_Tamer_PlayerLose_2[];
extern const u8 sFrontierText_Tamer_PreBattle_3[];
extern const u8 sFrontierText_Tamer_PlayerWin_3[];
extern const u8 sFrontierText_Tamer_PlayerLose_3[];
extern const u8 sFrontierText_Birdkeeper_PreBattle_1[];
extern const u8 sFrontierText_Birdkeeper_PlayerWin_1[];
extern const u8 sFrontierText_Birdkeeper_PlayerLose_1[];
extern const u8 sFrontierText_Birdkeeper_PreBattle_2[];
extern const u8 sFrontierText_Birdkeeper_PlayerWin_2[];
extern const u8 sFrontierText_Birdkeeper_PlayerLose_2[];
extern const u8 sFrontierText_Birdkeeper_PreBattle_3[];
extern const u8 sFrontierText_Birdkeeper_PlayerWin_3[];
extern const u8 sFrontierText_Birdkeeper_PlayerLose_3[];
extern const u8 sFrontierText_Blackbelt_PreBattle_1[];
extern const u8 sFrontierText_Blackbelt_PlayerWin_1[];
extern const u8 sFrontierText_Blackbelt_PlayerLose_1[];
extern const u8 sFrontierText_Blackbelt_PreBattle_2[];
extern const u8 sFrontierText_Blackbelt_PlayerWin_2[];
extern const u8 sFrontierText_Blackbelt_PlayerLose_2[];
extern const u8 sFrontierText_Blackbelt_PreBattle_3[];
extern const u8 sFrontierText_Blackbelt_PlayerWin_3[];
extern const u8 sFrontierText_Blackbelt_PlayerLose_3[];
extern const u8 sFrontierText_Scientist_PreBattle_1[];
extern const u8 sFrontierText_Scientist_PlayerWin_1[];
extern const u8 sFrontierText_Scientist_PlayerLose_1[];
extern const u8 sFrontierText_Scientist_PreBattle_2[];
extern const u8 sFrontierText_Scientist_PlayerWin_2[];
extern const u8 sFrontierText_Scientist_PlayerLose_2[];
extern const u8 sFrontierText_Scientist_PreBattle_3[];
extern const u8 sFrontierText_Scientist_PlayerWin_3[];
extern const u8 sFrontierText_Scientist_PlayerLose_3[];
extern const u8 sFrontierText_AcetrainerM_PreBattle_1[];
extern const u8 sFrontierText_AcetrainerM_PlayerWin_1[];
extern const u8 sFrontierText_AcetrainerM_PlayerLose_1[];
extern const u8 sFrontierText_AcetrainerM_PreBattle_2[];
extern const u8 sFrontierText_AcetrainerM_PlayerWin_2[];
extern const u8 sFrontierText_AcetrainerM_PlayerLose_2[];
extern const u8 sFrontierText_AcetrainerM_PreBattle_3[];
extern const u8 sFrontierText_AcetrainerM_PlayerWin_3[];
extern const u8 sFrontierText_AcetrainerM_PlayerLose_3[];
extern const u8 sFrontierText_AcetrainerF_PreBattle_1[];
extern const u8 sFrontierText_AcetrainerF_PlayerWin_1[];
extern const u8 sFrontierText_AcetrainerF_PlayerLose_1[];
extern const u8 sFrontierText_AcetrainerF_PreBattle_2[];
extern const u8 sFrontierText_AcetrainerF_PlayerWin_2[];
extern const u8 sFrontierText_AcetrainerF_PlayerLose_2[];
extern const u8 sFrontierText_AcetrainerF_PreBattle_3[];
extern const u8 sFrontierText_AcetrainerF_PlayerWin_3[];
extern const u8 sFrontierText_AcetrainerF_PlayerLose_3[];
extern const u8 sFrontierText_Gentleman_PreBattle_1[];
extern const u8 sFrontierText_Gentleman_PlayerWin_1[];
extern const u8 sFrontierText_Gentleman_PlayerLose_1[];
extern const u8 sFrontierText_Gentleman_PreBattle_2[];
extern const u8 sFrontierText_Gentleman_PlayerWin_2[];
extern const u8 sFrontierText_Gentleman_PlayerLose_2[];
extern const u8 sFrontierText_Gentleman_PreBattle_3[];
extern const u8 sFrontierText_Gentleman_PlayerWin_3[];
extern const u8 sFrontierText_Gentleman_PlayerLose_3[];
extern const u8 sFrontierText_Channeler_PreBattle_1[];
extern const u8 sFrontierText_Channeler_PlayerWin_1[];
extern const u8 sFrontierText_Channeler_PlayerLose_1[];
extern const u8 sFrontierText_Channeler_PreBattle_2[];
extern const u8 sFrontierText_Channeler_PlayerWin_2[];
extern const u8 sFrontierText_Channeler_PlayerLose_2[];
extern const u8 sFrontierText_Channeler_PreBattle_3[];
extern const u8 sFrontierText_Channeler_PlayerWin_3[];
extern const u8 sFrontierText_Channeler_PlayerLose_3[];
extern const u8 sFrontierText_CrushGirl_PreBattle_1[];
extern const u8 sFrontierText_CrushGirl_PlayerWin_1[];
extern const u8 sFrontierText_CrushGirl_PlayerLose_1[];
extern const u8 sFrontierText_CrushGirl_PreBattle_2[];
extern const u8 sFrontierText_CrushGirl_PlayerWin_2[];
extern const u8 sFrontierText_CrushGirl_PlayerLose_2[];
extern const u8 sFrontierText_CrushGirl_PreBattle_3[];
extern const u8 sFrontierText_CrushGirl_PlayerWin_3[];
extern const u8 sFrontierText_CrushGirl_PlayerLose_3[];
extern const u8 sFrontierText_Tuber_PreBattle_1[];
extern const u8 sFrontierText_Tuber_PlayerWin_1[];
extern const u8 sFrontierText_Tuber_PlayerLose_1[];
extern const u8 sFrontierText_Tuber_PreBattle_2[];
extern const u8 sFrontierText_Tuber_PlayerWin_2[];
extern const u8 sFrontierText_Tuber_PlayerLose_2[];
extern const u8 sFrontierText_Tuber_PreBattle_3[];
extern const u8 sFrontierText_Tuber_PlayerWin_3[];
extern const u8 sFrontierText_Tuber_PlayerLose_3[];
extern const u8 sFrontierText_PkmnbreederM_PreBattle_1[];
extern const u8 sFrontierText_PkmnbreederM_PlayerWin_1[];
extern const u8 sFrontierText_PkmnbreederM_PlayerLose_1[];
extern const u8 sFrontierText_PkmnbreederM_PreBattle_2[];
extern const u8 sFrontierText_PkmnbreederM_PlayerWin_2[];
extern const u8 sFrontierText_PkmnbreederM_PlayerLose_2[];
extern const u8 sFrontierText_PkmnbreederM_PreBattle_3[];
extern const u8 sFrontierText_PkmnbreederM_PlayerWin_3[];
extern const u8 sFrontierText_PkmnbreederM_PlayerLose_3[];
extern const u8 sFrontierText_PkmnbreederF_PreBattle_1[];
extern const u8 sFrontierText_PkmnbreederF_PlayerWin_1[];
extern const u8 sFrontierText_PkmnbreederF_PlayerLose_1[];
extern const u8 sFrontierText_PkmnbreederF_PreBattle_2[];
extern const u8 sFrontierText_PkmnbreederF_PlayerWin_2[];
extern const u8 sFrontierText_PkmnbreederF_PlayerLose_2[];
extern const u8 sFrontierText_PkmnbreederF_PreBattle_3[];
extern const u8 sFrontierText_PkmnbreederF_PlayerWin_3[];
extern const u8 sFrontierText_PkmnbreederF_PlayerLose_3[];
extern const u8 sFrontierText_PkmnrangerM_PreBattle_1[];
extern const u8 sFrontierText_PkmnrangerM_PlayerWin_1[];
extern const u8 sFrontierText_PkmnrangerM_PlayerLose_1[];
extern const u8 sFrontierText_PkmnrangerM_PreBattle_2[];
extern const u8 sFrontierText_PkmnrangerM_PlayerWin_2[];
extern const u8 sFrontierText_PkmnrangerM_PlayerLose_2[];
extern const u8 sFrontierText_PkmnrangerM_PreBattle_3[];
extern const u8 sFrontierText_PkmnrangerM_PlayerWin_3[];
extern const u8 sFrontierText_PkmnrangerM_PlayerLose_3[];
extern const u8 sFrontierText_PkmnrangerF_PreBattle_1[];
extern const u8 sFrontierText_PkmnrangerF_PlayerWin_1[];
extern const u8 sFrontierText_PkmnrangerF_PlayerLose_1[];
extern const u8 sFrontierText_PkmnrangerF_PreBattle_2[];
extern const u8 sFrontierText_PkmnrangerF_PlayerWin_2[];
extern const u8 sFrontierText_PkmnrangerF_PlayerLose_2[];
extern const u8 sFrontierText_PkmnrangerF_PreBattle_3[];
extern const u8 sFrontierText_PkmnrangerF_PlayerWin_3[];
extern const u8 sFrontierText_PkmnrangerF_PlayerLose_3[];
extern const u8 sFrontierText_Aromalady_PreBattle_1[];
extern const u8 sFrontierText_Aromalady_PlayerWin_1[];
extern const u8 sFrontierText_Aromalady_PlayerLose_1[];
extern const u8 sFrontierText_Aromalady_PreBattle_2[];
extern const u8 sFrontierText_Aromalady_PlayerWin_2[];
extern const u8 sFrontierText_Aromalady_PlayerLose_2[];
extern const u8 sFrontierText_Aromalady_PreBattle_3[];
extern const u8 sFrontierText_Aromalady_PlayerWin_3[];
extern const u8 sFrontierText_Aromalady_PlayerLose_3[];
extern const u8 sFrontierText_Ruinmaniac_PreBattle_1[];
extern const u8 sFrontierText_Ruinmaniac_PlayerWin_1[];
extern const u8 sFrontierText_Ruinmaniac_PlayerLose_1[];
extern const u8 sFrontierText_Ruinmaniac_PreBattle_2[];
extern const u8 sFrontierText_Ruinmaniac_PlayerWin_2[];
extern const u8 sFrontierText_Ruinmaniac_PlayerLose_2[];
extern const u8 sFrontierText_Ruinmaniac_PreBattle_3[];
extern const u8 sFrontierText_Ruinmaniac_PlayerWin_3[];
extern const u8 sFrontierText_Ruinmaniac_PlayerLose_3[];
extern const u8 sFrontierText_Lady_PreBattle_1[];
extern const u8 sFrontierText_Lady_PlayerWin_1[];
extern const u8 sFrontierText_Lady_PlayerLose_1[];
extern const u8 sFrontierText_Lady_PreBattle_2[];
extern const u8 sFrontierText_Lady_PlayerWin_2[];
extern const u8 sFrontierText_Lady_PlayerLose_2[];
extern const u8 sFrontierText_Lady_PreBattle_3[];
extern const u8 sFrontierText_Lady_PlayerWin_3[];
extern const u8 sFrontierText_Lady_PlayerLose_3[];
extern const u8 sFrontierText_Painter_PreBattle_1[];
extern const u8 sFrontierText_Painter_PlayerWin_1[];
extern const u8 sFrontierText_Painter_PlayerLose_1[];
extern const u8 sFrontierText_Painter_PreBattle_2[];
extern const u8 sFrontierText_Painter_PlayerWin_2[];
extern const u8 sFrontierText_Painter_PlayerLose_2[];
extern const u8 sFrontierText_Painter_PreBattle_3[];
extern const u8 sFrontierText_Painter_PlayerWin_3[];
extern const u8 sFrontierText_Painter_PlayerLose_3[];
extern const u8 sFrontierText_HexManiac_PreBattle_1[];
extern const u8 sFrontierText_HexManiac_PlayerWin_1[];
extern const u8 sFrontierText_HexManiac_PlayerLose_1[];
extern const u8 sFrontierText_HexManiac_PreBattle_2[];
extern const u8 sFrontierText_HexManiac_PlayerWin_2[];
extern const u8 sFrontierText_HexManiac_PlayerLose_2[];
extern const u8 sFrontierText_HexManiac_PreBattle_3[];
extern const u8 sFrontierText_HexManiac_PlayerWin_3[];
extern const u8 sFrontierText_HexManiac_PlayerLose_3[];
extern const u8 sFrontierText_Richboy_PreBattle_1[];
extern const u8 sFrontierText_Richboy_PlayerWin_1[];
extern const u8 sFrontierText_Richboy_PlayerLose_1[];
extern const u8 sFrontierText_Richboy_PreBattle_2[];
extern const u8 sFrontierText_Richboy_PlayerWin_2[];
extern const u8 sFrontierText_Richboy_PlayerLose_2[];
extern const u8 sFrontierText_Richboy_PreBattle_3[];
extern const u8 sFrontierText_Richboy_PlayerWin_3[];
extern const u8 sFrontierText_Richboy_PlayerLose_3[];
extern const u8 sFrontierText_Kindler_PreBattle_1[];
extern const u8 sFrontierText_Kindler_PlayerWin_1[];
extern const u8 sFrontierText_Kindler_PlayerLose_1[];
extern const u8 sFrontierText_Kindler_PreBattle_2[];
extern const u8 sFrontierText_Kindler_PlayerWin_2[];
extern const u8 sFrontierText_Kindler_PlayerLose_2[];
extern const u8 sFrontierText_Kindler_PreBattle_3[];
extern const u8 sFrontierText_Kindler_PlayerWin_3[];
extern const u8 sFrontierText_Kindler_PlayerLose_3[];
extern const u8 sFrontierText_BugManiac_PreBattle_1[];
extern const u8 sFrontierText_BugManiac_PlayerWin_1[];
extern const u8 sFrontierText_BugManiac_PlayerLose_1[];
extern const u8 sFrontierText_BugManiac_PreBattle_2[];
extern const u8 sFrontierText_BugManiac_PlayerWin_2[];
extern const u8 sFrontierText_BugManiac_PlayerLose_2[];
extern const u8 sFrontierText_BugManiac_PreBattle_3[];
extern const u8 sFrontierText_BugManiac_PlayerWin_3[];
extern const u8 sFrontierText_BugManiac_PlayerLose_3[];
extern const u8 sFrontierText_PokefanM_PreBattle_1[];
extern const u8 sFrontierText_PokefanM_PlayerWin_1[];
extern const u8 sFrontierText_PokefanM_PlayerLose_1[];
extern const u8 sFrontierText_PokefanM_PreBattle_2[];
extern const u8 sFrontierText_PokefanM_PlayerWin_2[];
extern const u8 sFrontierText_PokefanM_PlayerLose_2[];
extern const u8 sFrontierText_PokefanM_PreBattle_3[];
extern const u8 sFrontierText_PokefanM_PlayerWin_3[];
extern const u8 sFrontierText_PokefanM_PlayerLose_3[];
extern const u8 sFrontierText_PokefanF_PreBattle_1[];
extern const u8 sFrontierText_PokefanF_PlayerWin_1[];
extern const u8 sFrontierText_PokefanF_PlayerLose_1[];
extern const u8 sFrontierText_PokefanF_PreBattle_2[];
extern const u8 sFrontierText_PokefanF_PlayerWin_2[];
extern const u8 sFrontierText_PokefanF_PlayerLose_2[];
extern const u8 sFrontierText_PokefanF_PreBattle_3[];
extern const u8 sFrontierText_PokefanF_PlayerWin_3[];
extern const u8 sFrontierText_PokefanF_PlayerLose_3[];
extern const u8 sFrontierText_ExpertM_PreBattle_1[];
extern const u8 sFrontierText_ExpertM_PlayerWin_1[];
extern const u8 sFrontierText_ExpertM_PlayerLose_1[];
extern const u8 sFrontierText_ExpertM_PreBattle_2[];
extern const u8 sFrontierText_ExpertM_PlayerWin_2[];
extern const u8 sFrontierText_ExpertM_PlayerLose_2[];
extern const u8 sFrontierText_ExpertM_PreBattle_3[];
extern const u8 sFrontierText_ExpertM_PlayerWin_3[];
extern const u8 sFrontierText_ExpertM_PlayerLose_3[];
extern const u8 sFrontierText_ExpertF_PreBattle_1[];
extern const u8 sFrontierText_ExpertF_PlayerWin_1[];
extern const u8 sFrontierText_ExpertF_PlayerLose_1[];
extern const u8 sFrontierText_ExpertF_PreBattle_2[];
extern const u8 sFrontierText_ExpertF_PlayerWin_2[];
extern const u8 sFrontierText_ExpertF_PlayerLose_2[];
extern const u8 sFrontierText_ExpertF_PreBattle_3[];
extern const u8 sFrontierText_ExpertF_PlayerWin_3[];
extern const u8 sFrontierText_ExpertF_PlayerLose_3[];
extern const u8 sFrontierText_DragonTamer_PreBattle_1[];
extern const u8 sFrontierText_DragonTamer_PlayerWin_1[];
extern const u8 sFrontierText_DragonTamer_PlayerLose_1[];
extern const u8 sFrontierText_DragonTamer_PreBattle_2[];
extern const u8 sFrontierText_DragonTamer_PlayerWin_2[];
extern const u8 sFrontierText_DragonTamer_PlayerLose_2[];
extern const u8 sFrontierText_DragonTamer_PreBattle_3[];
extern const u8 sFrontierText_DragonTamer_PlayerWin_3[];
extern const u8 sFrontierText_DragonTamer_PlayerLose_3[];
extern const u8 sFrontierText_Collector_PreBattle_1[];
extern const u8 sFrontierText_Collector_PlayerWin_1[];
extern const u8 sFrontierText_Collector_PlayerLose_1[];
extern const u8 sFrontierText_Collector_PreBattle_2[];
extern const u8 sFrontierText_Collector_PlayerWin_2[];
extern const u8 sFrontierText_Collector_PlayerLose_2[];
extern const u8 sFrontierText_Collector_PreBattle_3[];
extern const u8 sFrontierText_Collector_PlayerWin_3[];
extern const u8 sFrontierText_Collector_PlayerLose_3[];

extern const u8 sTrainerName_Egypt[];
extern const u8 sTrainerName_May[];

extern const u8 sFrontierText_Egypt_PreBattle[];
extern const u8 sFrontierText_Egypt_PlayerWin[];
extern const u8 sFrontierText_Egypt_PlayerLose[];

extern const u8 sFrontierText_May_PreBattle[];
extern const u8 sFrontierText_May_PlayerWin[];
extern const u8 sFrontierText_May_PlayerLose[];

const struct BattleTowerTrainer gTowerTrainers[] =
{
	{
		.owNum = 			EVENT_OBJ_GFX_YOUNGSTER,
		.trainerClass = 	CLASS_YOUNGSTER,
		.trainerSprite = 	TRAINER_PIC_YOUNGSTER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Youngster_PreBattle_1,
		.playerWinText = 	sFrontierText_Youngster_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Youngster_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_YOUNGSTER,
		.trainerClass = 	CLASS_YOUNGSTER,
		.trainerSprite = 	TRAINER_PIC_YOUNGSTER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Youngster_PreBattle_2,
		.playerWinText = 	sFrontierText_Youngster_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Youngster_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_YOUNGSTER,
		.trainerClass = 	CLASS_YOUNGSTER,
		.trainerSprite = 	TRAINER_PIC_YOUNGSTER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Youngster_PreBattle_3,
		.playerWinText = 	sFrontierText_Youngster_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Youngster_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BUG_CATCHER,
		.trainerClass = 	CLASS_BUG_CATCHER,
		.trainerSprite = 	TRAINER_PIC_BUG_CATCHER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Bugcatcher_PreBattle_1,
		.playerWinText = 	sFrontierText_Bugcatcher_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Bugcatcher_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BUG_CATCHER,
		.trainerClass = 	CLASS_BUG_CATCHER,
		.trainerSprite = 	TRAINER_PIC_BUG_CATCHER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Bugcatcher_PreBattle_2,
		.playerWinText = 	sFrontierText_Bugcatcher_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Bugcatcher_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BUG_CATCHER,
		.trainerClass = 	CLASS_BUG_CATCHER,
		.trainerSprite = 	TRAINER_PIC_BUG_CATCHER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Bugcatcher_PreBattle_3,
		.playerWinText = 	sFrontierText_Bugcatcher_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Bugcatcher_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_LASS,
		.trainerClass = 	CLASS_LASS,
		.trainerSprite = 	TRAINER_PIC_LASS,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Lass_PreBattle_1,
		.playerWinText = 	sFrontierText_Lass_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Lass_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_LASS,
		.trainerClass = 	CLASS_LASS,
		.trainerSprite = 	TRAINER_PIC_LASS,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Lass_PreBattle_2,
		.playerWinText = 	sFrontierText_Lass_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Lass_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_LASS,
		.trainerClass = 	CLASS_LASS,
		.trainerSprite = 	TRAINER_PIC_LASS,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Lass_PreBattle_3,
		.playerWinText = 	sFrontierText_Lass_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Lass_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SAILOR,
		.trainerClass = 	CLASS_SAILOR,
		.trainerSprite = 	TRAINER_PIC_SAILOR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Sailor_PreBattle_1,
		.playerWinText = 	sFrontierText_Sailor_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Sailor_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SAILOR,
		.trainerClass = 	CLASS_SAILOR,
		.trainerSprite = 	TRAINER_PIC_SAILOR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Sailor_PreBattle_2,
		.playerWinText = 	sFrontierText_Sailor_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Sailor_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SAILOR,
		.trainerClass = 	CLASS_SAILOR,
		.trainerSprite = 	TRAINER_PIC_SAILOR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Sailor_PreBattle_3,
		.playerWinText = 	sFrontierText_Sailor_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Sailor_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CAMPER,
		.trainerClass = 	CLASS_CAMPER,
		.trainerSprite = 	TRAINER_PIC_CAMPER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Camper_PreBattle_1,
		.playerWinText = 	sFrontierText_Camper_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Camper_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CAMPER,
		.trainerClass = 	CLASS_CAMPER,
		.trainerSprite = 	TRAINER_PIC_CAMPER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Camper_PreBattle_2,
		.playerWinText = 	sFrontierText_Camper_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Camper_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CAMPER,
		.trainerClass = 	CLASS_CAMPER,
		.trainerSprite = 	TRAINER_PIC_CAMPER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Camper_PreBattle_3,
		.playerWinText = 	sFrontierText_Camper_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Camper_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PICNICKER,
		.trainerClass = 	CLASS_PICNICKER,
		.trainerSprite = 	TRAINER_PIC_PICNICKER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Picnicker_PreBattle_1,
		.playerWinText = 	sFrontierText_Picnicker_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Picnicker_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PICNICKER,
		.trainerClass = 	CLASS_PICNICKER,
		.trainerSprite = 	TRAINER_PIC_PICNICKER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Picnicker_PreBattle_2,
		.playerWinText = 	sFrontierText_Picnicker_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Picnicker_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PICNICKER,
		.trainerClass = 	CLASS_PICNICKER,
		.trainerSprite = 	TRAINER_PIC_PICNICKER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Picnicker_PreBattle_3,
		.playerWinText = 	sFrontierText_Picnicker_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Picnicker_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEMANIAC_2,
		.trainerClass = 	CLASS_POKEMANIAC,
		.trainerSprite = 	TRAINER_PIC_POKEMANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Pokemaniac_PreBattle_1,
		.playerWinText = 	sFrontierText_Pokemaniac_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Pokemaniac_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEMANIAC_2,
		.trainerClass = 	CLASS_POKEMANIAC,
		.trainerSprite = 	TRAINER_PIC_POKEMANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Pokemaniac_PreBattle_2,
		.playerWinText = 	sFrontierText_Pokemaniac_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Pokemaniac_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEMANIAC_2,
		.trainerClass = 	CLASS_POKEMANIAC,
		.trainerSprite = 	TRAINER_PIC_POKEMANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Pokemaniac_PreBattle_3,
		.playerWinText = 	sFrontierText_Pokemaniac_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Pokemaniac_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SUPER_NERD,
		.trainerClass = 	CLASS_SUPER_NERD,
		.trainerSprite = 	TRAINER_PIC_SUPER_NERD,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Supernerd_PreBattle_1,
		.playerWinText = 	sFrontierText_Supernerd_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Supernerd_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SUPER_NERD,
		.trainerClass = 	CLASS_SUPER_NERD,
		.trainerSprite = 	TRAINER_PIC_SUPER_NERD,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Supernerd_PreBattle_2,
		.playerWinText = 	sFrontierText_Supernerd_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Supernerd_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SUPER_NERD,
		.trainerClass = 	CLASS_SUPER_NERD,
		.trainerSprite = 	TRAINER_PIC_SUPER_NERD,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Supernerd_PreBattle_3,
		.playerWinText = 	sFrontierText_Supernerd_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Supernerd_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_HIKER,
		.trainerClass = 	CLASS_HIKER,
		.trainerSprite = 	TRAINER_PIC_HIKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Hiker_PreBattle_1,
		.playerWinText = 	sFrontierText_Hiker_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Hiker_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_HIKER,
		.trainerClass = 	CLASS_HIKER,
		.trainerSprite = 	TRAINER_PIC_HIKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Hiker_PreBattle_2,
		.playerWinText = 	sFrontierText_Hiker_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Hiker_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_HIKER,
		.trainerClass = 	CLASS_HIKER,
		.trainerSprite = 	TRAINER_PIC_HIKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Hiker_PreBattle_3,
		.playerWinText = 	sFrontierText_Hiker_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Hiker_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BIKER,
		.trainerClass = 	CLASS_BIKER,
		.trainerSprite = 	TRAINER_PIC_BIKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Biker_PreBattle_1,
		.playerWinText = 	sFrontierText_Biker_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Biker_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BIKER,
		.trainerClass = 	CLASS_BIKER,
		.trainerSprite = 	TRAINER_PIC_BIKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Biker_PreBattle_2,
		.playerWinText = 	sFrontierText_Biker_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Biker_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BIKER,
		.trainerClass = 	CLASS_BIKER,
		.trainerSprite = 	TRAINER_PIC_BIKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Biker_PreBattle_3,
		.playerWinText = 	sFrontierText_Biker_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Biker_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BURGLAR,
		.trainerClass = 	CLASS_BURGLAR,
		.trainerSprite = 	TRAINER_PIC_BURGLAR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Burglar_PreBattle_1,
		.playerWinText = 	sFrontierText_Burglar_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Burglar_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BURGLAR,
		.trainerClass = 	CLASS_BURGLAR,
		.trainerSprite = 	TRAINER_PIC_BURGLAR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Burglar_PreBattle_2,
		.playerWinText = 	sFrontierText_Burglar_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Burglar_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BURGLAR,
		.trainerClass = 	CLASS_BURGLAR,
		.trainerSprite = 	TRAINER_PIC_BURGLAR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Burglar_PreBattle_3,
		.playerWinText = 	sFrontierText_Burglar_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Burglar_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ENGINEER,
		.trainerClass = 	CLASS_ENGINEER,
		.trainerSprite = 	TRAINER_PIC_WORKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Engineer_PreBattle_1,
		.playerWinText = 	sFrontierText_Engineer_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Engineer_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ENGINEER,
		.trainerClass = 	CLASS_ENGINEER,
		.trainerSprite = 	TRAINER_PIC_WORKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Engineer_PreBattle_2,
		.playerWinText = 	sFrontierText_Engineer_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Engineer_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ENGINEER,
		.trainerClass = 	CLASS_ENGINEER,
		.trainerSprite = 	TRAINER_PIC_WORKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Engineer_PreBattle_3,
		.playerWinText = 	sFrontierText_Engineer_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Engineer_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_FISHERMAN,
		.trainerClass = 	CLASS_FISHERMAN,
		.trainerSprite = 	TRAINER_PIC_FISHERMAN,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Fisherman_PreBattle_1,
		.playerWinText = 	sFrontierText_Fisherman_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Fisherman_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_FISHERMAN,
		.trainerClass = 	CLASS_FISHERMAN,
		.trainerSprite = 	TRAINER_PIC_FISHERMAN,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Fisherman_PreBattle_2,
		.playerWinText = 	sFrontierText_Fisherman_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Fisherman_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_FISHERMAN,
		.trainerClass = 	CLASS_FISHERMAN,
		.trainerSprite = 	TRAINER_PIC_FISHERMAN,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Fisherman_PreBattle_3,
		.playerWinText = 	sFrontierText_Fisherman_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Fisherman_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SWIMMER_M,
		.trainerClass = 	CLASS_SWIMMER_M,
		.trainerSprite = 	TRAINER_PIC_SWIMMER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_SwimmerM_PreBattle_1,
		.playerWinText = 	sFrontierText_SwimmerM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_SwimmerM_PlayerLose_1,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_SWIMMER_M,
		.trainerClass = 	CLASS_SWIMMER_M,
		.trainerSprite = 	TRAINER_PIC_SWIMMER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_SwimmerM_PreBattle_2,
		.playerWinText = 	sFrontierText_SwimmerM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_SwimmerM_PlayerLose_2,
	},		
		{
		.owNum = 			EVENT_OBJ_GFX_SWIMMER_M,
		.trainerClass = 	CLASS_SWIMMER_M,
		.trainerSprite = 	TRAINER_PIC_SWIMMER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_SwimmerM_PreBattle_3,
		.playerWinText = 	sFrontierText_SwimmerM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_SwimmerM_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_CUE_BALL,
		.trainerClass = 	CLASS_CUE_BALL,
		.trainerSprite = 	TRAINER_PIC_CUE_BALL,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_CueBall_PreBattle_1,
		.playerWinText = 	sFrontierText_CueBall_PlayerWin_1,
		.playerLoseText = 	sFrontierText_CueBall_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CUE_BALL,
		.trainerClass = 	CLASS_CUE_BALL,
		.trainerSprite = 	TRAINER_PIC_CUE_BALL,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_CueBall_PreBattle_2,
		.playerWinText = 	sFrontierText_CueBall_PlayerWin_2,
		.playerLoseText = 	sFrontierText_CueBall_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CUE_BALL,
		.trainerClass = 	CLASS_CUE_BALL,
		.trainerSprite = 	TRAINER_PIC_CUE_BALL,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_CueBall_PreBattle_3,
		.playerWinText = 	sFrontierText_CueBall_PlayerWin_3,
		.playerLoseText = 	sFrontierText_CueBall_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_OLD_MAN,
		.trainerClass = 	CLASS_GAMBLER,
		.trainerSprite = 	TRAINER_PIC_GAMBLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Gambler_PreBattle_1,
		.playerWinText = 	sFrontierText_Gambler_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Gambler_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_OLD_MAN,
		.trainerClass = 	CLASS_GAMBLER,
		.trainerSprite = 	TRAINER_PIC_GAMBLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Gambler_PreBattle_2,
		.playerWinText = 	sFrontierText_Gambler_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Gambler_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_OLD_MAN,
		.trainerClass = 	CLASS_GAMBLER,
		.trainerSprite = 	TRAINER_PIC_GAMBLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Gambler_PreBattle_3,
		.playerWinText = 	sFrontierText_Gambler_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Gambler_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BEAUTY,
		.trainerClass = 	CLASS_BEAUTY,
		.trainerSprite = 	TRAINER_PIC_BEAUTY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Beauty_PreBattle_1,
		.playerWinText = 	sFrontierText_Beauty_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Beauty_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BEAUTY,
		.trainerClass = 	CLASS_BEAUTY,
		.trainerSprite = 	TRAINER_PIC_BEAUTY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Beauty_PreBattle_2,
		.playerWinText = 	sFrontierText_Beauty_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Beauty_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BEAUTY,
		.trainerClass = 	CLASS_BEAUTY,
		.trainerSprite = 	TRAINER_PIC_BEAUTY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Beauty_PreBattle_3,
		.playerWinText = 	sFrontierText_Beauty_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Beauty_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SWIMMER_F,
		.trainerClass = 	CLASS_SWIMMER_F,
		.trainerSprite = 	TRAINER_PIC_SWIMMER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_SwimmerF_PreBattle_1,
		.playerWinText = 	sFrontierText_SwimmerF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_SwimmerF_PlayerLose_1,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_SWIMMER_F,
		.trainerClass = 	CLASS_SWIMMER_F,
		.trainerSprite = 	TRAINER_PIC_SWIMMER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_SwimmerF_PreBattle_2,
		.playerWinText = 	sFrontierText_SwimmerF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_SwimmerF_PlayerLose_2,
	},		
		{
		.owNum = 			EVENT_OBJ_GFX_SWIMMER_F,
		.trainerClass = 	CLASS_SWIMMER_F,
		.trainerSprite = 	TRAINER_PIC_SWIMMER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_SwimmerF_PreBattle_3,
		.playerWinText = 	sFrontierText_SwimmerF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_SwimmerF_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PSYCHIC_M,
		.trainerClass = 	CLASS_PSYCHIC,
		.trainerSprite = 	TRAINER_PIC_PSYCHIC_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PsychicM_PreBattle_1,
		.playerWinText = 	sFrontierText_PsychicM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PsychicM_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PSYCHIC_M,
		.trainerClass = 	CLASS_PSYCHIC,
		.trainerSprite = 	TRAINER_PIC_PSYCHIC_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PsychicM_PreBattle_2,
		.playerWinText = 	sFrontierText_PsychicM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PsychicM_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PSYCHIC_M,
		.trainerClass = 	CLASS_PSYCHIC,
		.trainerSprite = 	TRAINER_PIC_PSYCHIC_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PsychicM_PreBattle_3,
		.playerWinText = 	sFrontierText_PsychicM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PsychicM_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PSYCHIC_F,
		.trainerClass = 	CLASS_PSYCHIC,
		.trainerSprite = 	TRAINER_PIC_PSYCHIC_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PsychicF_PreBattle_1,
		.playerWinText = 	sFrontierText_PsychicF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PsychicF_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PSYCHIC_F,
		.trainerClass = 	CLASS_PSYCHIC,
		.trainerSprite = 	TRAINER_PIC_PSYCHIC_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PsychicF_PreBattle_2,
		.playerWinText = 	sFrontierText_PsychicF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PsychicF_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PSYCHIC_F,
		.trainerClass = 	CLASS_PSYCHIC,
		.trainerSprite = 	TRAINER_PIC_PSYCHIC_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PsychicF_PreBattle_3,
		.playerWinText = 	sFrontierText_PsychicF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PsychicF_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ROCKER,
		.trainerClass = 	CLASS_ROCKER,
		.trainerSprite = 	TRAINER_PIC_ROCKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Rocker_PreBattle_1,
		.playerWinText = 	sFrontierText_Rocker_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Rocker_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ROCKER,
		.trainerClass = 	CLASS_ROCKER,
		.trainerSprite = 	TRAINER_PIC_ROCKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Rocker_PreBattle_2,
		.playerWinText = 	sFrontierText_Rocker_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Rocker_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ROCKER,
		.trainerClass = 	CLASS_ROCKER,
		.trainerSprite = 	TRAINER_PIC_ROCKER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Rocker_PreBattle_3,
		.playerWinText = 	sFrontierText_Rocker_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Rocker_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_JUGGLER_2,
		.trainerClass = 	CLASS_JUGGLER,
		.trainerSprite = 	TRAINER_PIC_JUGGLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Juggler_PreBattle_1,
		.playerWinText = 	sFrontierText_Juggler_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Juggler_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_JUGGLER_2,
		.trainerClass = 	CLASS_JUGGLER,
		.trainerSprite = 	TRAINER_PIC_JUGGLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Juggler_PreBattle_2,
		.playerWinText = 	sFrontierText_Juggler_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Juggler_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_JUGGLER_2,
		.trainerClass = 	CLASS_JUGGLER,
		.trainerSprite = 	TRAINER_PIC_JUGGLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Juggler_PreBattle_3,
		.playerWinText = 	sFrontierText_Juggler_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Juggler_PlayerLose_3,
	},
		{
		.owNum = 			EVENT_OBJ_GFX_TAMER,
		.trainerClass = 	CLASS_TAMER,
		.trainerSprite = 	TRAINER_PIC_TAMER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Tamer_PreBattle_1,
		.playerWinText = 	sFrontierText_Tamer_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Tamer_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_TAMER,
		.trainerClass = 	CLASS_TAMER,
		.trainerSprite = 	TRAINER_PIC_TAMER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Tamer_PreBattle_2,
		.playerWinText = 	sFrontierText_Tamer_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Tamer_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_TAMER,
		.trainerClass = 	CLASS_TAMER,
		.trainerSprite = 	TRAINER_PIC_TAMER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Tamer_PreBattle_3,
		.playerWinText = 	sFrontierText_Tamer_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Tamer_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BIRD_KEEPER,
		.trainerClass = 	CLASS_BIRD_KEEPER,
		.trainerSprite = 	TRAINER_PIC_BIRD_KEEPER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Birdkeeper_PreBattle_1,
		.playerWinText = 	sFrontierText_Birdkeeper_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Birdkeeper_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BIRD_KEEPER,
		.trainerClass = 	CLASS_BIRD_KEEPER,
		.trainerSprite = 	TRAINER_PIC_BIRD_KEEPER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Birdkeeper_PreBattle_2,
		.playerWinText = 	sFrontierText_Birdkeeper_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Birdkeeper_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BIRD_KEEPER,
		.trainerClass = 	CLASS_BIRD_KEEPER,
		.trainerSprite = 	TRAINER_PIC_BIRD_KEEPER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Birdkeeper_PreBattle_3,
		.playerWinText = 	sFrontierText_Birdkeeper_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Birdkeeper_PlayerLose_3,
	},	
		{
		.owNum = 			EVENT_OBJ_GFX_BLACK_BELT,
		.trainerClass = 	CLASS_BLACK_BELT,
		.trainerSprite = 	TRAINER_PIC_BLACK_BELT,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Blackbelt_PreBattle_1,
		.playerWinText = 	sFrontierText_Blackbelt_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Blackbelt_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BLACK_BELT,
		.trainerClass = 	CLASS_BLACK_BELT,
		.trainerSprite = 	TRAINER_PIC_BLACK_BELT,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Blackbelt_PreBattle_2,
		.playerWinText = 	sFrontierText_Blackbelt_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Blackbelt_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BLACK_BELT,
		.trainerClass = 	CLASS_BLACK_BELT,
		.trainerSprite = 	TRAINER_PIC_BLACK_BELT,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Blackbelt_PreBattle_3,
		.playerWinText = 	sFrontierText_Blackbelt_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Blackbelt_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SCIENTIST_MALE,
		.trainerClass = 	CLASS_SCIENTIST,
		.trainerSprite = 	TRAINER_PIC_SCIENTIST_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Scientist_PreBattle_1,
		.playerWinText = 	sFrontierText_Scientist_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Scientist_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SCIENTIST_MALE,
		.trainerClass = 	CLASS_SCIENTIST,
		.trainerSprite = 	TRAINER_PIC_SCIENTIST_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Scientist_PreBattle_2,
		.playerWinText = 	sFrontierText_Scientist_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Scientist_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_SCIENTIST_MALE,
		.trainerClass = 	CLASS_SCIENTIST,
		.trainerSprite = 	TRAINER_PIC_SCIENTIST_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Scientist_PreBattle_3,
		.playerWinText = 	sFrontierText_Scientist_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Scientist_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ACE_TRAINER_MALE,
		.trainerClass = 	CLASS_COOLTRAINER,
		.trainerSprite = 	TRAINER_PIC_COOLTRAINER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_AcetrainerM_PreBattle_1,
		.playerWinText = 	sFrontierText_AcetrainerM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_AcetrainerM_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ACE_TRAINER_MALE,
		.trainerClass = 	CLASS_COOLTRAINER,
		.trainerSprite = 	TRAINER_PIC_COOLTRAINER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_AcetrainerM_PreBattle_2,
		.playerWinText = 	sFrontierText_AcetrainerM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_AcetrainerM_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ACE_TRAINER_MALE,
		.trainerClass = 	CLASS_COOLTRAINER,
		.trainerSprite = 	TRAINER_PIC_COOLTRAINER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_AcetrainerM_PreBattle_3,
		.playerWinText = 	sFrontierText_AcetrainerM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_AcetrainerM_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ACE_TRAINER_FEMALE,
		.trainerClass = 	CLASS_COOLTRAINER,
		.trainerSprite = 	TRAINER_PIC_COOLTRAINER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_AcetrainerF_PreBattle_1,
		.playerWinText = 	sFrontierText_AcetrainerF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_AcetrainerF_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ACE_TRAINER_FEMALE,
		.trainerClass = 	CLASS_COOLTRAINER,
		.trainerSprite = 	TRAINER_PIC_COOLTRAINER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_AcetrainerF_PreBattle_2,
		.playerWinText = 	sFrontierText_AcetrainerF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_AcetrainerF_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_ACE_TRAINER_FEMALE,
		.trainerClass = 	CLASS_COOLTRAINER,
		.trainerSprite = 	TRAINER_PIC_COOLTRAINER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_AcetrainerF_PreBattle_3,
		.playerWinText = 	sFrontierText_AcetrainerF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_AcetrainerF_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_GENTLEMAN,
		.trainerClass = 	CLASS_GENTLEMAN,
		.trainerSprite = 	TRAINER_PIC_GENTLEMAN,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Gentleman_PreBattle_1,
		.playerWinText = 	sFrontierText_Gentleman_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Gentleman_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_GENTLEMAN,
		.trainerClass = 	CLASS_GENTLEMAN,
		.trainerSprite = 	TRAINER_PIC_GENTLEMAN,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Gentleman_PreBattle_2,
		.playerWinText = 	sFrontierText_Gentleman_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Gentleman_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_GENTLEMAN,
		.trainerClass = 	CLASS_GENTLEMAN,
		.trainerSprite = 	TRAINER_PIC_GENTLEMAN,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Gentleman_PreBattle_3,
		.playerWinText = 	sFrontierText_Gentleman_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Gentleman_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CHANELLER,
		.trainerClass = 	CLASS_CHANNELER,
		.trainerSprite = 	TRAINER_PIC_CHANNELER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Channeler_PreBattle_1,
		.playerWinText = 	sFrontierText_Channeler_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Channeler_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CHANELLER,
		.trainerClass = 	CLASS_CHANNELER,
		.trainerSprite = 	TRAINER_PIC_CHANNELER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Channeler_PreBattle_2,
		.playerWinText = 	sFrontierText_Channeler_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Channeler_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CHANELLER,
		.trainerClass = 	CLASS_CHANNELER,
		.trainerSprite = 	TRAINER_PIC_CHANNELER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Channeler_PreBattle_3,
		.playerWinText = 	sFrontierText_Channeler_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Channeler_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CRUSH_GIRL_2,
		.trainerClass = 	CLASS_CRUSH_GIRL,
		.trainerSprite = 	TRAINER_PIC_CRUSH_GIRL,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_CrushGirl_PreBattle_1,
		.playerWinText = 	sFrontierText_CrushGirl_PlayerWin_1,
		.playerLoseText = 	sFrontierText_CrushGirl_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CRUSH_GIRL_2,
		.trainerClass = 	CLASS_CRUSH_GIRL,
		.trainerSprite = 	TRAINER_PIC_CRUSH_GIRL,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_CrushGirl_PreBattle_2,
		.playerWinText = 	sFrontierText_CrushGirl_PlayerWin_2,
		.playerLoseText = 	sFrontierText_CrushGirl_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_CRUSH_GIRL_2,
		.trainerClass = 	CLASS_CRUSH_GIRL,
		.trainerSprite = 	TRAINER_PIC_CRUSH_GIRL,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_CrushGirl_PreBattle_3,
		.playerWinText = 	sFrontierText_CrushGirl_PlayerWin_3,
		.playerLoseText = 	sFrontierText_CrushGirl_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_TUBER_F,
		.trainerClass = 	CLASS_TUBER,
		.trainerSprite = 	TRAINER_PIC_TUBER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Tuber_PreBattle_1,
		.playerWinText = 	sFrontierText_Tuber_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Tuber_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_TUBER_F,
		.trainerClass = 	CLASS_TUBER,
		.trainerSprite = 	TRAINER_PIC_TUBER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Tuber_PreBattle_2,
		.playerWinText = 	sFrontierText_Tuber_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Tuber_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_TUBER_F,
		.trainerClass = 	CLASS_TUBER,
		.trainerSprite = 	TRAINER_PIC_TUBER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Tuber_PreBattle_3,
		.playerWinText = 	sFrontierText_Tuber_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Tuber_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_BREEDER_M,
		.trainerClass = 	CLASS_PKMN_BREEDER,
		.trainerSprite = 	TRAINER_PIC_RS_BREEDER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PkmnbreederM_PreBattle_1,
		.playerWinText = 	sFrontierText_PkmnbreederM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PkmnbreederM_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_BREEDER_M,
		.trainerClass = 	CLASS_PKMN_BREEDER,
		.trainerSprite = 	TRAINER_PIC_RS_BREEDER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PkmnbreederM_PreBattle_2,
		.playerWinText = 	sFrontierText_PkmnbreederM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PkmnbreederM_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_BREEDER_M,
		.trainerClass = 	CLASS_PKMN_BREEDER,
		.trainerSprite = 	TRAINER_PIC_RS_BREEDER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PkmnbreederM_PreBattle_3,
		.playerWinText = 	sFrontierText_PkmnbreederM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PkmnbreederM_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_BREEDER_F,
		.trainerClass = 	CLASS_PKMN_BREEDER,
		.trainerSprite = 	TRAINER_PIC_PKMN_BREEDER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PkmnbreederF_PreBattle_1,
		.playerWinText = 	sFrontierText_PkmnbreederF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PkmnbreederF_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_BREEDER_F,
		.trainerClass = 	CLASS_PKMN_BREEDER,
		.trainerSprite = 	TRAINER_PIC_PKMN_BREEDER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PkmnbreederF_PreBattle_2,
		.playerWinText = 	sFrontierText_PkmnbreederF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PkmnbreederF_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_BREEDER_F,
		.trainerClass = 	CLASS_PKMN_BREEDER,
		.trainerSprite = 	TRAINER_PIC_PKMN_BREEDER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PkmnbreederF_PreBattle_3,
		.playerWinText = 	sFrontierText_PkmnbreederF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PkmnbreederF_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_RANGER_M,
		.trainerClass = 	CLASS_PKMN_RANGER,
		.trainerSprite = 	TRAINER_PIC_PKMN_RANGER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PkmnrangerM_PreBattle_1,
		.playerWinText = 	sFrontierText_PkmnrangerM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PkmnrangerM_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_RANGER_M,
		.trainerClass = 	CLASS_PKMN_RANGER,
		.trainerSprite = 	TRAINER_PIC_PKMN_RANGER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PkmnrangerM_PreBattle_2,
		.playerWinText = 	sFrontierText_PkmnrangerM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PkmnrangerM_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_RANGER_M,
		.trainerClass = 	CLASS_PKMN_RANGER,
		.trainerSprite = 	TRAINER_PIC_PKMN_RANGER_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PkmnrangerM_PreBattle_3,
		.playerWinText = 	sFrontierText_PkmnrangerM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PkmnrangerM_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_RANGER_F,
		.trainerClass = 	CLASS_PKMN_RANGER,
		.trainerSprite = 	TRAINER_PIC_PKMN_RANGER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PkmnrangerF_PreBattle_1,
		.playerWinText = 	sFrontierText_PkmnrangerF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PkmnrangerF_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_RANGER_F,
		.trainerClass = 	CLASS_PKMN_RANGER,
		.trainerSprite = 	TRAINER_PIC_PKMN_RANGER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PkmnrangerF_PreBattle_2,
		.playerWinText = 	sFrontierText_PkmnrangerF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PkmnrangerF_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PKMN_RANGER_F,
		.trainerClass = 	CLASS_PKMN_RANGER,
		.trainerSprite = 	TRAINER_PIC_PKMN_RANGER_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PkmnrangerF_PreBattle_3,
		.playerWinText = 	sFrontierText_PkmnrangerF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PkmnrangerF_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_AROMA_LADY_2,
		.trainerClass = 	CLASS_AROMA_LADY,
		.trainerSprite = 	TRAINER_PIC_AROMA_LADY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Aromalady_PreBattle_1,
		.playerWinText = 	sFrontierText_Aromalady_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Aromalady_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_AROMA_LADY_2,
		.trainerClass = 	CLASS_AROMA_LADY,
		.trainerSprite = 	TRAINER_PIC_AROMA_LADY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Aromalady_PreBattle_2,
		.playerWinText = 	sFrontierText_Aromalady_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Aromalady_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_AROMA_LADY_2,
		.trainerClass = 	CLASS_AROMA_LADY,
		.trainerSprite = 	TRAINER_PIC_AROMA_LADY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Aromalady_PreBattle_3,
		.playerWinText = 	sFrontierText_Aromalady_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Aromalady_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_RUIN_MANIAC,
		.trainerClass = 	CLASS_RUIN_MANIAC,
		.trainerSprite = 	TRAINER_PIC_RUIN_MANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Ruinmaniac_PreBattle_1,
		.playerWinText = 	sFrontierText_Ruinmaniac_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Ruinmaniac_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RUIN_MANIAC,
		.trainerClass = 	CLASS_RUIN_MANIAC,
		.trainerSprite = 	TRAINER_PIC_RUIN_MANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Ruinmaniac_PreBattle_2,
		.playerWinText = 	sFrontierText_Ruinmaniac_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Ruinmaniac_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RUIN_MANIAC,
		.trainerClass = 	CLASS_RUIN_MANIAC,
		.trainerSprite = 	TRAINER_PIC_RUIN_MANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Ruinmaniac_PreBattle_3,
		.playerWinText = 	sFrontierText_Ruinmaniac_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Ruinmaniac_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_RICH_LADY,
		.trainerClass = 	CLASS_LADY,
		.trainerSprite = 	TRAINER_PIC_SELPHY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Lady_PreBattle_1,
		.playerWinText = 	sFrontierText_Lady_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Lady_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RICH_LADY,
		.trainerClass = 	CLASS_LADY,
		.trainerSprite = 	TRAINER_PIC_SELPHY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Lady_PreBattle_2,
		.playerWinText = 	sFrontierText_Lady_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Lady_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RICH_LADY,
		.trainerClass = 	CLASS_LADY,
		.trainerSprite = 	TRAINER_PIC_SELPHY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Lady_PreBattle_3,
		.playerWinText = 	sFrontierText_Lady_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Lady_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_PAINTER,
		.trainerClass = 	CLASS_PAINTER,
		.trainerSprite = 	TRAINER_PIC_PAINTER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Painter_PreBattle_1,
		.playerWinText = 	sFrontierText_Painter_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Painter_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PAINTER,
		.trainerClass = 	CLASS_PAINTER,
		.trainerSprite = 	TRAINER_PIC_PAINTER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Painter_PreBattle_2,
		.playerWinText = 	sFrontierText_Painter_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Painter_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_PAINTER,
		.trainerClass = 	CLASS_PAINTER,
		.trainerSprite = 	TRAINER_PIC_PAINTER,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_Painter_PreBattle_3,
		.playerWinText = 	sFrontierText_Painter_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Painter_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_HEX_MANIAC,
		.trainerClass = 	CLASS_HEX_MANIAC,
		.trainerSprite = 	TRAINER_PIC_HEX_MANIAC,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_HexManiac_PreBattle_1,
		.playerWinText = 	sFrontierText_HexManiac_PlayerWin_1,
		.playerLoseText = 	sFrontierText_HexManiac_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_HEX_MANIAC,
		.trainerClass = 	CLASS_HEX_MANIAC,
		.trainerSprite = 	TRAINER_PIC_HEX_MANIAC,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_HexManiac_PreBattle_2,
		.playerWinText = 	sFrontierText_HexManiac_PlayerWin_2,
		.playerLoseText = 	sFrontierText_HexManiac_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_HEX_MANIAC,
		.trainerClass = 	CLASS_HEX_MANIAC,
		.trainerSprite = 	TRAINER_PIC_HEX_MANIAC,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_HexManiac_PreBattle_3,
		.playerWinText = 	sFrontierText_HexManiac_PlayerWin_3,
		.playerLoseText = 	sFrontierText_HexManiac_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RICH_BOY,
		.trainerClass = 	CLASS_RICH_BOY,
		.trainerSprite = 	TRAINER_PIC_RICH_BOY,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Richboy_PreBattle_1,
		.playerWinText = 	sFrontierText_Richboy_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Richboy_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RICH_BOY,
		.trainerClass = 	CLASS_RICH_BOY,
		.trainerSprite = 	TRAINER_PIC_RICH_BOY,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Richboy_PreBattle_2,
		.playerWinText = 	sFrontierText_Richboy_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Richboy_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_RICH_BOY,
		.trainerClass = 	CLASS_RICH_BOY,
		.trainerSprite = 	TRAINER_PIC_RICH_BOY,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Richboy_PreBattle_3,
		.playerWinText = 	sFrontierText_Richboy_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Richboy_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_KINDLER,
		.trainerClass = 	CLASS_KINDLER,
		.trainerSprite = 	TRAINER_PIC_KINDLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Kindler_PreBattle_1,
		.playerWinText = 	sFrontierText_Kindler_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Kindler_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_KINDLER,
		.trainerClass = 	CLASS_KINDLER,
		.trainerSprite = 	TRAINER_PIC_KINDLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Kindler_PreBattle_2,
		.playerWinText = 	sFrontierText_Kindler_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Kindler_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_KINDLER,
		.trainerClass = 	CLASS_KINDLER,
		.trainerSprite = 	TRAINER_PIC_KINDLER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Kindler_PreBattle_3,
		.playerWinText = 	sFrontierText_Kindler_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Kindler_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_BUG_MANIAC,
		.trainerClass = 	CLASS_BUG_MANIAC,
		.trainerSprite = 	TRAINER_PIC_BUG_MANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_BugManiac_PreBattle_1,
		.playerWinText = 	sFrontierText_BugManiac_PlayerWin_1,
		.playerLoseText = 	sFrontierText_BugManiac_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BUG_MANIAC,
		.trainerClass = 	CLASS_BUG_MANIAC,
		.trainerSprite = 	TRAINER_PIC_BUG_MANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_BugManiac_PreBattle_2,
		.playerWinText = 	sFrontierText_BugManiac_PlayerWin_2,
		.playerLoseText = 	sFrontierText_BugManiac_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_BUG_MANIAC,
		.trainerClass = 	CLASS_BUG_MANIAC,
		.trainerSprite = 	TRAINER_PIC_BUG_MANIAC,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_BugManiac_PreBattle_3,
		.playerWinText = 	sFrontierText_BugManiac_PlayerWin_3,
		.playerLoseText = 	sFrontierText_BugManiac_PlayerLose_3,
	},	
	{
		.owNum = 			EVENT_OBJ_GFX_POKEFAN_M,
		.trainerClass = 	CLASS_POKEFAN,
		.trainerSprite = 	TRAINER_PIC_POKEFAN_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PokefanM_PreBattle_1,
		.playerWinText = 	sFrontierText_PokefanM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PokefanM_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEFAN_M,
		.trainerClass = 	CLASS_POKEFAN,
		.trainerSprite = 	TRAINER_PIC_POKEFAN_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PokefanM_PreBattle_2,
		.playerWinText = 	sFrontierText_PokefanM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PokefanM_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEFAN_M,
		.trainerClass = 	CLASS_POKEFAN,
		.trainerSprite = 	TRAINER_PIC_POKEFAN_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_PokefanM_PreBattle_3,
		.playerWinText = 	sFrontierText_PokefanM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PokefanM_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEFAN_F,
		.trainerClass = 	CLASS_POKEFAN,
		.trainerSprite = 	TRAINER_PIC_POKEFAN_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PokefanF_PreBattle_1,
		.playerWinText = 	sFrontierText_PokefanF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_PokefanF_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEFAN_F,
		.trainerClass = 	CLASS_POKEFAN,
		.trainerSprite = 	TRAINER_PIC_POKEFAN_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PokefanF_PreBattle_2,
		.playerWinText = 	sFrontierText_PokefanF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_PokefanF_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_POKEFAN_F,
		.trainerClass = 	CLASS_POKEFAN,
		.trainerSprite = 	TRAINER_PIC_POKEFAN_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_PokefanF_PreBattle_3,
		.playerWinText = 	sFrontierText_PokefanF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_PokefanF_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_EXPERT_M,
		.trainerClass = 	CLASS_EXPERT,
		.trainerSprite = 	TRAINER_PIC_EXPERT_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_ExpertM_PreBattle_1,
		.playerWinText = 	sFrontierText_ExpertM_PlayerWin_1,
		.playerLoseText = 	sFrontierText_ExpertM_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_EXPERT_M,
		.trainerClass = 	CLASS_EXPERT,
		.trainerSprite = 	TRAINER_PIC_EXPERT_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_ExpertM_PreBattle_2,
		.playerWinText = 	sFrontierText_ExpertM_PlayerWin_2,
		.playerLoseText = 	sFrontierText_ExpertM_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_EXPERT_M,
		.trainerClass = 	CLASS_EXPERT,
		.trainerSprite = 	TRAINER_PIC_EXPERT_M,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_ExpertM_PreBattle_3,
		.playerWinText = 	sFrontierText_ExpertM_PlayerWin_3,
		.playerLoseText = 	sFrontierText_ExpertM_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_EXPERT_F,
		.trainerClass = 	CLASS_EXPERT,
		.trainerSprite = 	TRAINER_PIC_EXPERT_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_ExpertF_PreBattle_1,
		.playerWinText = 	sFrontierText_ExpertF_PlayerWin_1,
		.playerLoseText = 	sFrontierText_ExpertF_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_EXPERT_F,
		.trainerClass = 	CLASS_EXPERT,
		.trainerSprite = 	TRAINER_PIC_EXPERT_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_ExpertF_PreBattle_2,
		.playerWinText = 	sFrontierText_ExpertF_PlayerWin_2,
		.playerLoseText = 	sFrontierText_ExpertF_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_EXPERT_F,
		.trainerClass = 	CLASS_EXPERT,
		.trainerSprite = 	TRAINER_PIC_EXPERT_F,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.preBattleText = 	sFrontierText_ExpertF_PreBattle_3,
		.playerWinText = 	sFrontierText_ExpertF_PlayerWin_3,
		.playerLoseText = 	sFrontierText_ExpertF_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_DRAGON_TAMER,
		.trainerClass = 	CLASS_DRAGON_TAMER,
		.trainerSprite = 	TRAINER_PIC_DRAGON_TAMER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_DragonTamer_PreBattle_1,
		.playerWinText = 	sFrontierText_DragonTamer_PlayerWin_1,
		.playerLoseText = 	sFrontierText_DragonTamer_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_DRAGON_TAMER,
		.trainerClass = 	CLASS_DRAGON_TAMER,
		.trainerSprite = 	TRAINER_PIC_DRAGON_TAMER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_DragonTamer_PreBattle_2,
		.playerWinText = 	sFrontierText_DragonTamer_PlayerWin_2,
		.playerLoseText = 	sFrontierText_DragonTamer_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_DRAGON_TAMER,
		.trainerClass = 	CLASS_DRAGON_TAMER,
		.trainerSprite = 	TRAINER_PIC_DRAGON_TAMER,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_DragonTamer_PreBattle_3,
		.playerWinText = 	sFrontierText_DragonTamer_PlayerWin_3,
		.playerLoseText = 	sFrontierText_DragonTamer_PlayerLose_3,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_COLLECTOR,
		.trainerClass = 	CLASS_COLLECTOR,
		.trainerSprite = 	TRAINER_PIC_COLLECTOR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Collector_PreBattle_1,
		.playerWinText = 	sFrontierText_Collector_PlayerWin_1,
		.playerLoseText = 	sFrontierText_Collector_PlayerLose_1,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_COLLECTOR,
		.trainerClass = 	CLASS_COLLECTOR,
		.trainerSprite = 	TRAINER_PIC_COLLECTOR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Collector_PreBattle_2,
		.playerWinText = 	sFrontierText_Collector_PlayerWin_2,
		.playerLoseText = 	sFrontierText_Collector_PlayerLose_2,
	},
	{
		.owNum = 			EVENT_OBJ_GFX_COLLECTOR,
		.trainerClass = 	CLASS_COLLECTOR,
		.trainerSprite = 	TRAINER_PIC_COLLECTOR,
		.gender = 			BATTLE_FACILITY_MALE,
		.preBattleText = 	sFrontierText_Collector_PreBattle_3,
		.playerWinText = 	sFrontierText_Collector_PlayerWin_3,
		.playerLoseText = 	sFrontierText_Collector_PlayerLose_3,
	},
};

const struct SpecialBattleFrontierTrainer gSpecialTowerTrainers[] =
{
	{
		.owNum = 			EVENT_OBJ_GFX_MAY,
		.trainerClass = 	CLASS_PKMN_TRAINER_1,
		.trainerSprite = 	TRAINER_PIC_MAY,
		.gender = 			BATTLE_FACILITY_FEMALE,
		.name =				sTrainerName_May,
		.preBattleText = 	sFrontierText_May_PreBattle,
		.playerWinText = 	sFrontierText_May_PlayerWin,
		.playerLoseText = 	sFrontierText_May_PlayerLose,
		.regularSpreads =	gSpecialTowerSpread_May,
		.middleCupSpreads = gMiddleCupTowerSpread_May,
		.littleCupSpreads = gLittleCupTowerSpread_May,
		.legendarySpreads = gLegendaryTowerSpread_May,
		.regSpreadSize = 	NELEMS(gSpecialTowerSpread_May),
		.mcSpreadSize =		NELEMS(gMiddleCupTowerSpread_May),
		.lcSpreadSize =		NELEMS(gLittleCupTowerSpread_May),
		.legSpreadSize =	NELEMS(gLegendaryTowerSpread_May),
		.songId = 			BGM_BATTLE_FRONTIER_BRAIN,
		.isMonotype = 		FALSE,
	},
};

const struct SpecialBattleFrontierTrainer gFrontierBrains[] =
{
	[0] =
		{
			.owNum = 			EVENT_OBJ_GFX_EGYPT,
			.trainerClass = 	CLASS_COOLTRAINER,
			.trainerSprite = 	TRAINER_PIC_RS_COOLTRAINER_F,
			.gender = 			BATTLE_FACILITY_FEMALE,
			.name =				sTrainerName_Egypt,
			.regularSpreads =	gSpecialTowerSpread_Egypt1,
			.legendarySpreads = gLegendaryTowerSpread_Egypt1,
			.middleCupSpreads = gMiddleCupTowerSpread_Egypt1,
			.littleCupSpreads = gLittleCupTowerSpread_Egypt1,
			.regSpreadSize = 	NELEMS(gSpecialTowerSpread_Egypt1),
			.legSpreadSize =	NELEMS(gLegendaryTowerSpread_Egypt1),
			.mcSpreadSize =		NELEMS(gMiddleCupTowerSpread_Egypt1),
			.lcSpreadSize =		NELEMS(gLittleCupTowerSpread_Egypt1),
		},
	[1] =
		{
			.owNum = 			EVENT_OBJ_GFX_EGYPT,
			.trainerClass = 	CLASS_COOLTRAINER,
			.trainerSprite = 	TRAINER_PIC_RS_COOLTRAINER_F,
			.gender = 			BATTLE_FACILITY_FEMALE,
			.name =				sTrainerName_Egypt,
			.regularSpreads =	gSpecialTowerSpread_Egypt2,
			.legendarySpreads = gLegendaryTowerSpread_Egypt1,
			.middleCupSpreads = gMiddleCupTowerSpread_Egypt1,
			.littleCupSpreads = gLittleCupTowerSpread_Egypt2,
			.regSpreadSize = 	NELEMS(gSpecialTowerSpread_Egypt2),
			.legSpreadSize =	NELEMS(gLegendaryTowerSpread_Egypt1),
			.mcSpreadSize =		NELEMS(gMiddleCupTowerSpread_Egypt1),
			.lcSpreadSize =		NELEMS(gLittleCupTowerSpread_Egypt2),
		},
};

const struct MultiBattleTowerTrainer gFrontierMultiBattleTrainers[] =
{
	{
		.owNum = EVENT_OBJ_GFX_MAY,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = TRAINER_BACK_PIC_MAY,
		.gender = FEMALE,
		.name = sTrainerName_May,
		.otId = 0x3E16ECA,
		.regularSpreads = gMultiTowerSpread_May,
		.legendarySpreads = gMultiLegendaryTowerSpread_May,
		.littleCupSpreads = gMultiLittleCupTowerSpread_May,
		.regSpreadSize = NELEMS(gMultiTowerSpread_May),
		.legSpreadSize = NELEMS(gMultiLegendaryTowerSpread_May),
		.lcSpreadSize = NELEMS(gMultiLittleCupTowerSpread_May),
	},
	{
		.owNum = EVENT_OBJ_GFX_LEAF_NORMAL,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = TRAINER_BACK_PIC_LEAF,
		.gender = FEMALE,
		.name = sTrainerName_Green,
		.otId = 0x4156010,
		.regularSpreads = gMultiTowerSpread_Green,
		.legendarySpreads = gMultiLegendaryTowerSpread_Green,
		.littleCupSpreads = gMultiLittleCupTowerSpread_Green,
		.regSpreadSize = NELEMS(gMultiTowerSpread_Green),
		.legSpreadSize = NELEMS(gMultiLegendaryTowerSpread_Green),
		.lcSpreadSize = NELEMS(gMultiLittleCupTowerSpread_Green),
	},
	
	//Raid Partners - Used in Battle Sands & Random Multi Battles
	{
		.owNum = EVENT_OBJ_GFX_LEAF_NORMAL,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = TRAINER_BACK_PIC_LEAF,
		.gender = FEMALE,
		.otId = 0x4156010,
		.name = sTrainerName_Green,
	},
	{
		.owNum = EVENT_OBJ_GFX_MAY,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = TRAINER_BACK_PIC_MAY,
		.gender = FEMALE,
		.otId = 0x3E16ECA,
		.name = sTrainerName_May,
	},
};

const u8 gNumFrontierMultiTrainers = NELEMS(gFrontierMultiBattleTrainers);
#endif

const u16 gNumTowerTrainers = NELEMS(gTowerTrainers);
const u16 gNumSpecialTowerTrainers = NELEMS(gSpecialTowerTrainers);
