#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/maps.h"
#include "../../include/wild_encounter.h"
#include "../../include/constants/region_map_sections.h"
#include "../../include/constants/species.h"

/*
wild_encounter_tables.c
	day/night and/or regular map wild encounter species

tables to edit:
	gWildMonMorningHeaders
	gWildMonEveningHeaders
	gWildMonNightHeaders
	gSwarmTable

*/

#ifndef UNBOUND //Modify this section

const struct WildPokemon gRoute1_LandMonsNight[] =
{
	{2, 4, SPECIES_HOOTHOOT},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_HOOTHOOT},
	{2, 4, SPECIES_HOOTHOOT},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_POOCHYENA},
	{2, 4, SPECIES_POOCHYENA},
	{2, 4, SPECIES_POOCHYENA},
	{2, 4, SPECIES_POOCHYENA},
	{2, 4, SPECIES_POOCHYENA},
};

const struct WildPokemonInfo gRoute1_LandMonsInfoNight = {21, gRoute1_LandMonsNight};

const struct WildPokemon gRoute2_LandMonsNight[] =
{
	{3, 5, SPECIES_HOOTHOOT},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_HOOTHOOT},
	{3, 5, SPECIES_KRICKETOT},
	{3, 5, SPECIES_KRICKETOT},
	{3, 5, SPECIES_SPINARAK},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_HOOTHOOT},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_HOOTHOOT},
};

const struct WildPokemonInfo gRoute2_LandMonsInfoNight = {21, gRoute2_LandMonsNight};

const struct WildPokemon gViridianForest_LandMonsNight[] =
{
	{3, 6, SPECIES_HOOTHOOT},
	{3, 6, SPECIES_WEEDLE},
	{3, 6, SPECIES_SPINARAK},
	{3, 6, SPECIES_SPINARAK},
	{3, 6, SPECIES_SEEDOT},
	{3, 6, SPECIES_KRICKETOT},
	{5, 5, SPECIES_PICHU},
	{3, 6, SPECIES_KRICKETOT},
	{7, 7, SPECIES_KAKUNA},
	{7, 7, SPECIES_KAKUNA},
	{5, 5, SPECIES_PICHU},
	{7, 7, SPECIES_KAKUNA},
};

const struct WildPokemonInfo gViridianForest_LandMonsInfoNight = {14, gViridianForest_LandMonsNight};

const struct WildPokemon gRoute3_LandMonsNight[] =
{
	{6, 8, SPECIES_HOOTHOOT},
	{6, 8, SPECIES_RATTATA},
	{6, 8, SPECIES_MANKEY},
	{5, 5, SPECIES_IGGLYBUFF},
	{6, 8, SPECIES_SANDSHREW},
	{6, 8, SPECIES_EKANS},
	{6, 8, SPECIES_RATTATA},
	{6, 8, SPECIES_BALTOY},
	{6, 8, SPECIES_SANDSHREW},
	{6, 8, SPECIES_EKANS},
	{6, 8, SPECIES_BALTOY},
	{6, 8, SPECIES_BALTOY},
};

const struct WildPokemonInfo gRoute3_LandMonsInfoNight = {21, gRoute3_LandMonsNight};

const struct WildPokemon gRoute4_LandMonsNight[] =
{
	{8, 12, SPECIES_HOOTHOOT},
	{8, 12, SPECIES_RATTATA},
	{8, 12, SPECIES_MANKEY},
	{8, 12, SPECIES_PSYDUCK},
	{8, 12, SPECIES_SANDSHREW},
	{8, 12, SPECIES_EKANS},
	{8, 12, SPECIES_JIGGLYPUFF},
	{8, 12, SPECIES_HOOTHOOT},
	{8, 12, SPECIES_BUIZEL},
	{8, 12, SPECIES_BUIZEL},
	{8, 12, SPECIES_JIGGLYPUFF},
	{8, 12, SPECIES_JIGGLYPUFF},
};

const struct WildPokemonInfo gRoute4_LandMonsInfoNight = {21, gRoute4_LandMonsNight};

const struct WildPokemon gRoute5_LandMonsNight[] =
{
	{12, 16, SPECIES_HOOTHOOT},
	{12, 16, SPECIES_RATTATA},
	{12, 16, SPECIES_VULPIX},
	{12, 16, SPECIES_ODDISH},
	{12, 16, SPECIES_ODDISH},
	{12, 15, SPECIES_ABRA},
	{12, 16, SPECIES_MEOWTH},
	{12, 16, SPECIES_HOOTHOOT},
	{12, 16, SPECIES_MEOWTH},
	{12, 16, SPECIES_MEOWTH},
	{12, 16, SPECIES_MEOWTH},
	{12, 16, SPECIES_MEOWTH},
};

const struct WildPokemonInfo gRoute5_LandMonsInfoNight = {21, gRoute5_LandMonsNight};

const struct WildPokemon gRoute6_LandMonsNight[] =
{
	{13, 16, SPECIES_HOOTHOOT},
	{13, 16, SPECIES_RATTATA},
	{13, 16, SPECIES_VULPIX},
	{13, 16, SPECIES_MAGNEMITE},
	{13, 16, SPECIES_PSYDUCK},
	{13, 15, SPECIES_ABRA},
	{13, 14, SPECIES_SHINX},
	{13, 14, SPECIES_SHINX},
	{13, 16, SPECIES_MEOWTH},
	{13, 16, SPECIES_MEOWTH},
	{13, 16, SPECIES_MEOWTH},
	{13, 16, SPECIES_MEOWTH},
};

const struct WildPokemonInfo gRoute6_LandMonsInfoNight = {21, gRoute6_LandMonsNight};

const struct WildPokemon gRoute7_LandMonsNight[] =
{
	{17, 19, SPECIES_HOOTHOOT},
	{17, 19, SPECIES_RATTATA},
	{17, 22, SPECIES_MURKROW},
	{17, 22, SPECIES_KADABRA},
	{17, 22, SPECIES_HOUNDOUR},
	{17, 22, SPECIES_HOUNDOUR},
	{17, 22, SPECIES_MEOWTH},
	{20, 22, SPECIES_NOCTOWL},
	{17, 22, SPECIES_MEOWTH},
	{17, 22, SPECIES_MEOWTH},
	{17, 22, SPECIES_MEOWTH},
	{17, 22, SPECIES_MEOWTH},
};

const struct WildPokemonInfo gRoute7_LandMonsInfoNight = {21, gRoute7_LandMonsNight};

const struct WildPokemon gRoute8_LandMonsNight[] =
{
	{16, 19, SPECIES_HOOTHOOT},
	{16, 19, SPECIES_RATTATA},
	{16, 21, SPECIES_GASTLY},
	{16, 21, SPECIES_KADABRA},
	{16, 21, SPECIES_HOUNDOUR},
	{16, 21, SPECIES_HOUNDOUR},
	{16, 21, SPECIES_MEOWTH},
	{20, 21, SPECIES_NOCTOWL},
	{16, 21, SPECIES_MEOWTH},
	{16, 21, SPECIES_MEOWTH},
	{16, 21, SPECIES_MEOWTH},
	{16, 21, SPECIES_MEOWTH},
};

const struct WildPokemonInfo gRoute8_LandMonsInfoNight = {21, gRoute8_LandMonsNight};

const struct WildPokemon gRoute9_LandMonsNight[] =
{
	{14, 17, SPECIES_HOOTHOOT},
	{14, 17, SPECIES_RATTATA},
	{14, 15, SPECIES_NIDORAN_F},
	{14, 15, SPECIES_NIDORAN_M},
	{14, 17, SPECIES_MANKEY},
	{14, 17, SPECIES_BUIZEL},
	{14, 17, SPECIES_VENONAT},
	{14, 17, SPECIES_MANKEY},
	{14, 17, SPECIES_TEDDIURSA},
	{14, 17, SPECIES_TEDDIURSA},
	{14, 17, SPECIES_TEDDIURSA},
	{14, 17, SPECIES_TEDDIURSA},
};

const struct WildPokemonInfo gRoute9_LandMonsInfoNight = {21, gRoute9_LandMonsNight};

const struct WildPokemon gRoute10_LandMonsNight[] =
{
	{15, 18, SPECIES_HOOTHOOT},
	{15, 18, SPECIES_VOLTORB},
	{15, 15, SPECIES_NIDORAN_F},
	{15, 15, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_ELEKID},
	{15, 18, SPECIES_WOOPER},
	{15, 18, SPECIES_KRABBY},
	{15, 18, SPECIES_KRABBY},
	{15, 18, SPECIES_TEDDIURSA},
	{15, 18, SPECIES_ELEKID},
	{15, 18, SPECIES_TEDDIURSA},
	{15, 18, SPECIES_ELEKID},
};

const struct WildPokemonInfo gRoute10_LandMonsInfoNight = {21, gRoute10_LandMonsNight};

const struct WildPokemon gRoute11_LandMonsNight[] =
{
	{13, 17, SPECIES_HOOTHOOT},
	{13, 17, SPECIES_RATTATA},
	{13, 17, SPECIES_DROWZEE},
	{13, 17, SPECIES_MAGNEMITE},
	{13, 17, SPECIES_EKANS},
	{13, 17, SPECIES_HOPPIP},
	{13, 17, SPECIES_DROWZEE},
	{13, 17, SPECIES_DROWZEE},
	{13, 17, SPECIES_DROWZEE},
	{15, 17, SPECIES_LUXIO},
	{13, 17, SPECIES_DROWZEE},
	{15, 17, SPECIES_LUXIO},
};

const struct WildPokemonInfo gRoute11_LandMonsInfoNight = {21, gRoute11_LandMonsNight};

const struct WildPokemon gRoute12_LandMonsNight[] =
{
	{22, 26, SPECIES_NOCTOWL},
	{22, 26, SPECIES_SKIPLOOM},
	{22, 26, SPECIES_GLOOM},
	{22, 26, SPECIES_GLOOM},
	{22, 26, SPECIES_VENONAT},
	{22, 26, SPECIES_KRABBY},
	{22, 26, SPECIES_VENONAT},
	{22, 26, SPECIES_KRABBY},
	{22, 26, SPECIES_FARFETCHD},
	{22, 26, SPECIES_FARFETCHD},
	{22, 26, SPECIES_FARFETCHD},
	{22, 26, SPECIES_FARFETCHD},
};

const struct WildPokemonInfo gRoute12_LandMonsInfoNight = {21, gRoute12_LandMonsNight};

const struct WildPokemon gRoute13_LandMonsNight[] =
{
	{24, 28, SPECIES_NOCTOWL},
	{24, 28, SPECIES_SKIPLOOM},
	{24, 28, SPECIES_GLOOM},
	{24, 28, SPECIES_GLOOM},
	{24, 28, SPECIES_VENONAT},
	{24, 27, SPECIES_KRABBY},
	{24, 28, SPECIES_VENONAT},
	{24, 27, SPECIES_KRABBY},
	{24, 28, SPECIES_FARFETCHD},
	{24, 28, SPECIES_FARFETCHD},
	{24, 28, SPECIES_FARFETCHD},
	{24, 28, SPECIES_FARFETCHD},
};

const struct WildPokemonInfo gRoute13_LandMonsInfoNight = {21, gRoute13_LandMonsNight};

const struct WildPokemon gRoute14_LandMonsNight[] =
{
	{26, 30, SPECIES_NOCTOWL},
	{26, 30, SPECIES_GLOOM},
	{26, 29, SPECIES_SKIPLOOM},
	{26, 29, SPECIES_SKIPLOOM},
	{26, 30, SPECIES_NIDORINO},
	{26, 30, SPECIES_NIDORINA},
	{26, 30, SPECIES_VENONAT},
	{26, 30, SPECIES_VENONAT},
	{26, 30, SPECIES_FARFETCHD},
	{26, 30, SPECIES_FARFETCHD},
	{32, 32, SPECIES_VENOMOTH},
	{32, 32, SPECIES_VENOMOTH},
};

const struct WildPokemonInfo gRoute14_LandMonsInfoNight = {21, gRoute14_LandMonsNight};

const struct WildPokemon gRoute15_LandMonsNight[] =
{
	{26, 30, SPECIES_NOCTOWL},
	{26, 30, SPECIES_GLOOM},
	{26, 29, SPECIES_SKIPLOOM},
	{26, 30, SPECIES_VENONAT},
	{26, 30, SPECIES_NIDORINO},
	{26, 30, SPECIES_NIDORINA},
	{26, 30, SPECIES_NIDORINO},
	{26, 30, SPECIES_NIDORINA},
	{26, 30, SPECIES_VENONAT},
	{26, 30, SPECIES_VENONAT},
	{32, 32, SPECIES_VENOMOTH},
	{32, 32, SPECIES_VENOMOTH},
};

const struct WildPokemonInfo gRoute15_LandMonsInfoNight = {21, gRoute15_LandMonsNight};

const struct WildPokemon gRoute16_LandMonsNight[] =
{
	{22, 26, SPECIES_NOCTOWL},
	{22, 26, SPECIES_RATICATE},
	{22, 26, SPECIES_MURKROW},
	{22, 26, SPECIES_DODUO},
	{22, 26, SPECIES_GRIMER},
	{22, 26, SPECIES_DODUO},
	{22, 26, SPECIES_MURKROW},
	{22, 26, SPECIES_DODUO},
	{22, 26, SPECIES_SLUGMA},
	{22, 26, SPECIES_SLUGMA},
	{22, 26, SPECIES_SLUGMA},
	{22, 26, SPECIES_SLUGMA},
};

const struct WildPokemonInfo gRoute16_LandMonsInfoNight = {21, gRoute16_LandMonsNight};

const struct WildPokemon gRoute17_LandMonsNight[] =
{
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_RATICATE},
	{24, 28, SPECIES_NOCTOWL},
	{24, 28, SPECIES_DODUO},
	{24, 28, SPECIES_GRIMER},
	{24, 28, SPECIES_DODUO},
	{24, 28, SPECIES_NOCTOWL},
	{24, 28, SPECIES_DODUO},
	{24, 28, SPECIES_SLUGMA},
	{24, 28, SPECIES_SLUGMA},
	{24, 28, SPECIES_SLUGMA},
	{24, 28, SPECIES_SLUGMA},
};

const struct WildPokemonInfo gRoute17_LandMonsInfoNight = {21, gRoute17_LandMonsNight};

const struct WildPokemon gRoute18_LandMonsNight[] =
{
	{26, 30, SPECIES_NOCTOWL},
	{26, 30, SPECIES_RATICATE},
	{26, 30, SPECIES_NOCTOWL},
	{26, 30, SPECIES_DODUO},
	{26, 30, SPECIES_GRIMER},
	{26, 30, SPECIES_DODUO},
	{26, 30, SPECIES_NOCTOWL},
	{26, 30, SPECIES_DODUO},
	{26, 30, SPECIES_SLUGMA},
	{26, 30, SPECIES_SLUGMA},
	{26, 30, SPECIES_SLUGMA},
	{26, 30, SPECIES_SLUGMA},
};

const struct WildPokemonInfo gRoute18_LandMonsInfoNight = {21, gRoute18_LandMonsNight};

const struct WildPokemon gRoute21_LandMonsNight[] =
{
	{28, 33, SPECIES_NOCTOWL},
	{28, 33, SPECIES_RATICATE},
	{28, 33, SPECIES_TANGELA},
	{28, 33, SPECIES_TANGELA},
	{28, 33, SPECIES_FURRET},
	{28, 33, SPECIES_MIGHTYENA},
	{28, 33, SPECIES_MIGHTYENA},
	{28, 33, SPECIES_FURRET},
	{28, 33, SPECIES_MR_MIME},
	{28, 33, SPECIES_MR_MIME},
	{28, 33, SPECIES_MR_MIME},
	{28, 33, SPECIES_MR_MIME},
};

const struct WildPokemonInfo gRoute21_LandMonsInfoNight = {14, gRoute21_LandMonsNight};

const struct WildPokemon gRoute21B_LandMonsNight[] =
{
	{28, 33, SPECIES_NOCTOWL},
	{28, 33, SPECIES_RATICATE},
	{28, 33, SPECIES_TANGELA},
	{28, 33, SPECIES_TANGELA},
	{28, 33, SPECIES_FURRET},
	{28, 33, SPECIES_MIGHTYENA},
	{28, 33, SPECIES_MIGHTYENA},
	{28, 33, SPECIES_FURRET},
	{28, 33, SPECIES_MR_MIME},
	{28, 33, SPECIES_MR_MIME},
	{28, 33, SPECIES_MR_MIME},
	{28, 33, SPECIES_MR_MIME},
};

const struct WildPokemonInfo gRoute21B_LandMonsInfoNight = {14, gRoute21B_LandMonsNight};

const struct WildPokemon gRoute22_LandMonsNight[] =
{
	{3, 5, SPECIES_HOOTHOOT},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_HOOTHOOT},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_NIDORAN_F},
	{3, 5, SPECIES_NIDORAN_M},
	{3, 5, SPECIES_NIDORAN_M},
	{3, 5, SPECIES_NIDORAN_F},
	{3, 5, SPECIES_POOCHYENA},
	{3, 5, SPECIES_POOCHYENA},
	{3, 5, SPECIES_POOCHYENA},
	{3, 5, SPECIES_POOCHYENA},
};

const struct WildPokemonInfo gRoute22_LandMonsInfoNight = {21, gRoute22_LandMonsNight};

const struct WildPokemon gRoute23_LandMonsNight[] =
{
	{35, 41, SPECIES_NOCTOWL},
	{35, 41, SPECIES_EXEGGCUTE},
	{35, 41, SPECIES_ARBOK},
	{35, 41, SPECIES_SANDSLASH},
	{35, 41, SPECIES_NIDORINO},
	{35, 41, SPECIES_NIDORINA},
	{35, 41, SPECIES_ARBOK},
	{35, 41, SPECIES_SANDSLASH},
	{35, 41, SPECIES_PRIMEAPE},
	{35, 41, SPECIES_PRIMEAPE},
	{35, 41, SPECIES_PRIMEAPE},
	{35, 41, SPECIES_PRIMEAPE},
};

const struct WildPokemonInfo gRoute23_LandMonsInfoNight = {21, gRoute23_LandMonsNight};

const struct WildPokemon gRoute24_LandMonsNight[] =
{
	{9, 14, SPECIES_HOOTHOOT},
	{9, 14, SPECIES_VENONAT},
	{9, 14, SPECIES_PSYDUCK},
	{9, 14, SPECIES_WOOPER},
	{9, 14, SPECIES_ODDISH},
	{9, 14, SPECIES_HOPPIP},
	{9, 14, SPECIES_ODDISH},
	{9, 14, SPECIES_HOOTHOOT},
	{9, 14, SPECIES_WOOPER},
	{9, 14, SPECIES_WOOPER},
	{9, 14, SPECIES_WOOPER},
	{9, 14, SPECIES_WOOPER},
};

const struct WildPokemonInfo gRoute24_LandMonsInfoNight = {21, gRoute24_LandMonsNight};

const struct WildPokemon gRoute25_LandMonsNight[] =
{
	{10, 15, SPECIES_HOOTHOOT},
	{10, 15, SPECIES_VENONAT},
	{10, 15, SPECIES_PSYDUCK},
	{10, 15, SPECIES_HOOTHOOT},
	{10, 15, SPECIES_ODDISH},
	{10, 15, SPECIES_HOPPIP},
	{10, 15, SPECIES_BUNEARY},
	{10, 15, SPECIES_SLAKOTH},
	{10, 15, SPECIES_BUNEARY},
	{10, 15, SPECIES_ODDISH},
	{10, 15, SPECIES_SLAKOTH},
	{10, 15, SPECIES_SLAKOTH},
};

const struct WildPokemonInfo gRoute25_LandMonsInfoNight = {21, gRoute25_LandMonsNight};

const struct WildPokemon gTreasureBeach_LandMonsNight[] =
{
	{33, 38, SPECIES_PERSIAN},
	{33, 38, SPECIES_TANGELA},
	{33, 38, SPECIES_PELIPPER},
	{33, 38, SPECIES_TANGELA},
	{33, 38, SPECIES_STARYU},
	{30, 34, SPECIES_SWABLU},
	{33, 38, SPECIES_STARYU},
	{30, 34, SPECIES_SWABLU},
	{33, 38, SPECIES_SHUCKLE},
	{33, 38, SPECIES_SHUCKLE},
	{33, 38, SPECIES_SHUCKLE},
	{33, 38, SPECIES_SHUCKLE},
};

const struct WildPokemonInfo gTreasureBeach_LandMonsInfoNight = {21, gTreasureBeach_LandMonsNight};

const struct WildPokemon gKindleRoad_LandMonsNight[] =
{
	{33, 38, SPECIES_PERSIAN},
	{33, 38, SPECIES_PONYTA},
	{33, 38, SPECIES_PELIPPER},
	{33, 38, SPECIES_SHUCKLE},
	{33, 38, SPECIES_STARYU},
	{30, 34, SPECIES_SWABLU},
	{33, 38, SPECIES_PONYTA},
	{30, 34, SPECIES_SWABLU},
	{33, 38, SPECIES_GRAVELER},
	{33, 38, SPECIES_GRAVELER},
	{33, 38, SPECIES_GRAVELER},
	{33, 38, SPECIES_GRAVELER},
};

const struct WildPokemonInfo gKindleRoad_LandMonsInfoNight = {21, gKindleRoad_LandMonsNight};

const struct WildPokemon gMtEmber_LandMonsNight[] =
{
	{38, 45, SPECIES_GRAVELER},
	{38, 39, SPECIES_PONYTA},
	{40, 45, SPECIES_RAPIDASH},
	{38, 45, SPECIES_HOUNDOOM},
	{38, 45, SPECIES_SKARMORY},
	{38, 45, SPECIES_CAMERUPT},
	{38, 45, SPECIES_CAMERUPT},
	{30, 30, SPECIES_NUMEL},
	{38, 45, SPECIES_MAGMAR},
	{38, 45, SPECIES_MAGMAR},
	{38, 45, SPECIES_MAGMAR},
	{38, 45, SPECIES_MAGMAR},
};

const struct WildPokemonInfo gMtEmber_LandMonsInfoNight = {21, gMtEmber_LandMonsNight};

const struct WildPokemon gCapeBrink_LandMonsNight[] =
{
	{33, 38, SPECIES_PERSIAN},
	{33, 38, SPECIES_GLOOM},
	{33, 38, SPECIES_FLOATZEL},
	{33, 38, SPECIES_AZUMARILL},
	{33, 38, SPECIES_AZUMARILL},
	{30, 34, SPECIES_SWABLU},
	{30, 30, SPECIES_AZURILL},
	{30, 34, SPECIES_SWABLU},
	{37, 38, SPECIES_SLOWBRO},
	{33, 38, SPECIES_GOLDUCK},
	{37, 38, SPECIES_SLOWBRO},
	{33, 38, SPECIES_GOLDUCK},
};

const struct WildPokemonInfo gCapeBrink_LandMonsInfoNight = {21, gCapeBrink_LandMonsNight};

const struct WildPokemon gThreeIslePort_LandMonsNight[] =
{
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
	{38, 45, SPECIES_DUNSPARCE},
};

const struct WildPokemonInfo gThreeIslePort_LandMonsInfoNight = { 1, gThreeIslePort_LandMonsNight};

const struct WildPokemon gBondBridge_LandMonsNight[] =
{
	{33, 38, SPECIES_NOCTOWL},
	{33, 38, SPECIES_GLOOM},
	{33, 38, SPECIES_STANTLER},
	{33, 38, SPECIES_SPINDA},
	{33, 38, SPECIES_PERSIAN},
	{33, 38, SPECIES_HYPNO},
	{33, 38, SPECIES_HYPNO},
	{33, 38, SPECIES_PERSIAN},
	{33, 38, SPECIES_VENOMOTH},
	{33, 38, SPECIES_VENOMOTH},
	{33, 38, SPECIES_VENOMOTH},
	{33, 38, SPECIES_VENOMOTH},
};

const struct WildPokemonInfo gBondBridge_LandMonsInfoNight = {21, gBondBridge_LandMonsNight};

const struct WildPokemon gBerryForest_LandMonsNight[] =
{
	{34, 39, SPECIES_GLOOM},
	{34, 39, SPECIES_EXEGGCUTE},
	{34, 39, SPECIES_STANTLER},
	{34, 39, SPECIES_SPINDA},
	{34, 39, SPECIES_AIPOM},
	{34, 39, SPECIES_HERACROSS},
	{34, 39, SPECIES_HYPNO},
	{34, 39, SPECIES_ARIADOS},
	{34, 39, SPECIES_VENOMOTH},
	{34, 39, SPECIES_VENOMOTH},
	{34, 39, SPECIES_VENOMOTH},
	{34, 39, SPECIES_VENOMOTH},
};

const struct WildPokemonInfo gBerryForest_LandMonsInfoNight = {21, gBerryForest_LandMonsNight};

const struct WildPokemon gFiveIsleMeadow_LandMonsNight[] =
{
	{40, 45, SPECIES_NOCTOWL},
	{40, 45, SPECIES_PERSIAN},
	{40, 45, SPECIES_SUDOWOODO},
	{40, 45, SPECIES_STANTLER},
	{40, 45, SPECIES_CHATOT},
	{40, 45, SPECIES_MIGHTYENA},
	{40, 45, SPECIES_MIGHTYENA},
	{40, 45, SPECIES_SUDOWOODO},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_JUMPLUFF},
};

const struct WildPokemonInfo gFiveIsleMeadow_LandMonsInfoNight = {21, gFiveIsleMeadow_LandMonsNight};

const struct WildPokemon gMemorialPillar_LandMonsNight[] =
{
	{40, 45, SPECIES_CHATOT},
	{40, 45, SPECIES_PELIPPER},
	{40, 45, SPECIES_PELIPPER},
	{40, 45, SPECIES_ALTARIA},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_CHATOT},
	{40, 45, SPECIES_CHATOT},
	{40, 45, SPECIES_ALTARIA},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_JUMPLUFF},
	{40, 45, SPECIES_JUMPLUFF},
};

const struct WildPokemonInfo gMemorialPillar_LandMonsInfoNight = {21, gMemorialPillar_LandMonsNight};

const struct WildPokemon gWaterPath_LandMonsNight[] =
{
	{44, 49, SPECIES_NOCTOWL},
	{44, 49, SPECIES_PERSIAN},
	{44, 49, SPECIES_PERSIAN},
	{44, 49, SPECIES_XATU},
	{44, 49, SPECIES_GLOOM},
	{44, 49, SPECIES_PELIPPER},
	{44, 49, SPECIES_PELIPPER},
	{44, 49, SPECIES_GLOOM},
	{44, 49, SPECIES_ALTARIA},
	{44, 49, SPECIES_ALTARIA},
	{44, 49, SPECIES_ALTARIA},
	{44, 49, SPECIES_ALTARIA},
};

const struct WildPokemonInfo gWaterPath_LandMonsInfoNight = {21, gWaterPath_LandMonsNight};

const struct WildPokemon gRuinValley_LandMonsNight[] =
{
	{48, 52, SPECIES_XATU},
	{48, 52, SPECIES_QUAGSIRE},
	{48, 52, SPECIES_YANMA},
	{48, 52, SPECIES_WOBBUFFET},
	{48, 52, SPECIES_NOSEPASS},
	{48, 52, SPECIES_GLIGAR},
	{48, 52, SPECIES_GLIGAR},
	{48, 52, SPECIES_YANMA},
	{48, 52, SPECIES_SKARMORY},
	{48, 52, SPECIES_SKARMORY},
	{48, 52, SPECIES_SKARMORY},
	{48, 52, SPECIES_SKARMORY},
};

const struct WildPokemonInfo gRuinValley_LandMonsInfoNight = {21, gRuinValley_LandMonsNight};

const struct WildPokemon gPatternBush_LandMonsNight[] =
{
	{48, 52, SPECIES_ARIADOS},
	{48, 52, SPECIES_FORRETRESS},
	{48, 52, SPECIES_VOLBEAT},
	{48, 52, SPECIES_ILLUMISE},
	{48, 52, SPECIES_STANTLER},
	{48, 52, SPECIES_HERACROSS},
	{48, 52, SPECIES_VENOMOTH},
	{48, 52, SPECIES_VENOMOTH},
	{48, 52, SPECIES_BRELOOM},
	{48, 52, SPECIES_BRELOOM},
	{48, 52, SPECIES_BRELOOM},
	{48, 52, SPECIES_BRELOOM},
};

const struct WildPokemonInfo gPatternBush_LandMonsInfoNight = {21, gPatternBush_LandMonsNight};

const struct WildPokemon gCanyonEntrance_LandMonsNight[] =
{
	{48, 52, SPECIES_NOCTOWL},
	{48, 52, SPECIES_PERSIAN},
	{48, 52, SPECIES_GRAVELER},
	{48, 52, SPECIES_GRAVELER},
	{48, 52, SPECIES_NOCTOWL},
	{48, 52, SPECIES_SKARMORY},
	{48, 52, SPECIES_DONPHAN},
	{48, 52, SPECIES_GRAVELER},
	{48, 52, SPECIES_DONPHAN},
	{48, 52, SPECIES_DONPHAN},
	{48, 52, SPECIES_DONPHAN},
	{48, 52, SPECIES_DONPHAN},
};

const struct WildPokemonInfo gCanyonEntrance_LandMonsInfoNight = {21, gCanyonEntrance_LandMonsNight};

const struct WildPokemon gSevaultCanyon_LandMonsNight[] =
{
	{40, 44, SPECIES_VIBRAVA},
	{48, 54, SPECIES_CACTURNE},
	{48, 54, SPECIES_GRAVELER},
	{48, 54, SPECIES_MAROWAK},
	{48, 54, SPECIES_SKARMORY},
	{48, 54, SPECIES_PUPITAR},
	{30, 30, SPECIES_CACNEA},
	{48, 54, SPECIES_PUPITAR},
	{25, 25, SPECIES_LARVITAR},
	{25, 25, SPECIES_TRAPINCH},
	{25, 25, SPECIES_LARVITAR},
	{25, 25, SPECIES_TRAPINCH},
};

const struct WildPokemonInfo gSevaultCanyon_LandMonsInfoNight = {21, gSevaultCanyon_LandMonsNight};

const struct WildPokemon gMtSilver_LandMonsNight[] =
{
	{50, 55, SPECIES_TANGELA},
	{50, 55, SPECIES_RAPIDASH},
	{50, 55, SPECIES_DODRIO},
	{50, 55, SPECIES_DONPHAN},
	{50, 55, SPECIES_URSARING},
	{50, 55, SPECIES_SNEASEL},
	{50, 55, SPECIES_SNEASEL},
	{50, 55, SPECIES_DODRIO},
	{50, 55, SPECIES_FLOATZEL},
	{50, 55, SPECIES_FLOATZEL},
	{50, 55, SPECIES_FLOATZEL},
	{50, 55, SPECIES_FLOATZEL},
};

const struct WildPokemonInfo gMtSilver_LandMonsInfoNight = {21, gMtSilver_LandMonsNight};

const struct WildPokemon gMtSilverB_LandMonsNight[] =
{
	{50, 55, SPECIES_TANGELA},
	{50, 55, SPECIES_RAPIDASH},
	{50, 55, SPECIES_DODRIO},
	{50, 55, SPECIES_DONPHAN},
	{50, 55, SPECIES_URSARING},
	{50, 55, SPECIES_SNEASEL},
	{50, 55, SPECIES_SNEASEL},
	{50, 55, SPECIES_DODRIO},
	{50, 55, SPECIES_FLOATZEL},
	{50, 55, SPECIES_FLOATZEL},
	{50, 55, SPECIES_FLOATZEL},
	{50, 55, SPECIES_FLOATZEL},
};

const struct WildPokemonInfo gMtSilverB_LandMonsInfoNight = {21, gMtSilverB_LandMonsNight};
		
const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &gRoute1_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &gRoute2_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
		.mapNum = MAP_NUM(VIRIDIAN_FOREST),
		.landMonsInfo = &gViridianForest_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &gRoute3_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &gRoute4_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &gRoute5_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &gRoute6_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &gRoute7_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &gRoute8_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_9),
		.mapNum = MAP_NUM(ROUTE_9),
		.landMonsInfo = &gRoute9_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_10),
		.mapNum = MAP_NUM(ROUTE_10),
		.landMonsInfo = &gRoute10_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &gRoute11_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &gRoute12_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_13),
		.mapNum = MAP_NUM(ROUTE_13),
		.landMonsInfo = &gRoute13_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14),
		.mapNum = MAP_NUM(ROUTE_14),
		.landMonsInfo = &gRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_15),
		.mapNum = MAP_NUM(ROUTE_15),
		.landMonsInfo = &gRoute15_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_16),
		.mapNum = MAP_NUM(ROUTE_16),
		.landMonsInfo = &gRoute16_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &gRoute17_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18),
		.mapNum = MAP_NUM(ROUTE_18),
		.landMonsInfo = &gRoute18_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_A),
		.mapNum = MAP_NUM(ROUTE_21_A),
		.landMonsInfo = &gRoute21_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_B),
		.mapNum = MAP_NUM(ROUTE_21_B),
		.landMonsInfo = &gRoute21B_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_22),
		.mapNum = MAP_NUM(ROUTE_22),
		.landMonsInfo = &gRoute22_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_23),
		.mapNum = MAP_NUM(ROUTE_23),
		.landMonsInfo = &gRoute23_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_24),
		.mapNum = MAP_NUM(ROUTE_24),
		.landMonsInfo = &gRoute24_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_25),
		.mapNum = MAP_NUM(ROUTE_25),
		.landMonsInfo = &gRoute25_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
		.mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
		.landMonsInfo = &gTreasureBeach_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
		.landMonsInfo = &gKindleRoad_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
		.mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
		.landMonsInfo = &gMtEmber_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
		.landMonsInfo = &gCapeBrink_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_PORT),
		.mapNum = MAP_NUM(THREE_ISLAND_PORT),
		.landMonsInfo = &gThreeIslePort_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
		.mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
		.landMonsInfo = &gBondBridge_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
		.mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
		.landMonsInfo = &gBerryForest_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_MEADOW),
		.mapNum = MAP_NUM(FIVE_ISLAND_MEADOW),
		.landMonsInfo = &gFiveIsleMeadow_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_MEMORIAL_PILLAR),
		.mapNum = MAP_NUM(FIVE_ISLAND_MEMORIAL_PILLAR),
		.landMonsInfo = &gMemorialPillar_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_WATER_PATH),
		.mapNum = MAP_NUM(SIX_ISLAND_WATER_PATH),
		.landMonsInfo = &gWaterPath_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_RUIN_VALLEY),
		.mapNum = MAP_NUM(SIX_ISLAND_RUIN_VALLEY),
		.landMonsInfo = &gRuinValley_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_PATTERN_BUSH),
		.mapNum = MAP_NUM(SIX_ISLAND_PATTERN_BUSH),
		.landMonsInfo = &gPatternBush_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE),
		.mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE),
		.landMonsInfo = &gCanyonEntrance_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON),
		.mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON),
		.landMonsInfo = &gSevaultCanyon_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_SILVER_ROUTE_28),
		.mapNum = MAP_NUM(MT_SILVER_ROUTE_28),
		.landMonsInfo = &gMtSilver_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_SILVER_EXTERIOR),
		.mapNum = MAP_NUM(MT_SILVER_EXTERIOR),
		.landMonsInfo = &gMtSilverB_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
};

const struct SwarmData gSwarmTable[] =
{
	/*{
		.mapName = 0xFF,
		.species = 0xFFFF,
	},*/
};

#else //Below is for Pokemon Unbound. Feel free to remove.

static const struct WildPokemon sRoute2_LandMonsNight[] =
{
	{9, 11, SPECIES_HOOTHOOT},
	{9, 11, SPECIES_RATTATA},
	{9, 11, SPECIES_RATTATA},
	{9, 11, SPECIES_HOOTHOOT},
	{9, 11, SPECIES_ELECTRIKE},
	{9, 11, SPECIES_AZURILL},
	{9, 11, SPECIES_STUFFUL},
	{9, 11, SPECIES_STUFFUL},
	{10, 11, SPECIES_SCRAGGY},
	{10, 11, SPECIES_RIOLU},
	{11, 11, SPECIES_SCRAGGY},
	{11, 11, SPECIES_RIOLU},
};

static const struct WildPokemonInfo sRoute2_LandMonsInfoNight = {20, sRoute2_LandMonsNight};

static const struct WildPokemon sRoute3_LandMonsNight[] =
{
	{10, 12, SPECIES_WINGULL},
	{10, 12, SPECIES_SENTRET},
	{10, 12, SPECIES_BIDOOF},
	{10, 12, SPECIES_BIDOOF},
	{10, 12, SPECIES_BUIZEL},
	{10, 12, SPECIES_SHELLOS},
	{10, 12, SPECIES_SURSKIT},
	{10, 12, SPECIES_KRABBY},
	{11, 12, SPECIES_KRABBY},
	{11, 12, SPECIES_KRABBY},
	{12, 12, SPECIES_KRABBY},
	{12, 12, SPECIES_KRABBY},
};

static const struct WildPokemonInfo sRoute3_LandMonsInfoNight = {20, sRoute3_LandMonsNight};

static const struct WildPokemon sRoute4_LandMonsNight[] =
{
	{15, 17, SPECIES_HOOTHOOT},
	{15, 17, SPECIES_HOOTHOOT},
	{15, 17, SPECIES_LILLIPUP},
	{15, 17, SPECIES_LILLIPUP},
	{15, 17, SPECIES_EKANS},
	{15, 17, SPECIES_NUMEL},
	{15, 17, SPECIES_MANKEY},
	{15, 17, SPECIES_MANKEY},
	{15, 17, SPECIES_NUMEL},
	{15, 17, SPECIES_RALTS},
	{17, 17, SPECIES_NUMEL},
	{17, 17, SPECIES_RALTS},
};

static const struct WildPokemonInfo sRoute4_LandMonsInfoNight = {20, sRoute4_LandMonsNight};

static const struct WildPokemon sGrimWoods_LandMonsNight[] =
{
	{13, 16, SPECIES_WEEDLE},
	{14, 16, SPECIES_SEEDOT},
	{14, 16, SPECIES_PUMPKABOO},
	{14, 16, SPECIES_PUMPKABOO_M},
	{14, 16, SPECIES_PUMPKABOO_L},
	{14, 16, SPECIES_PUMPKABOO_XL},
	{15, 16, SPECIES_GASTLY},
	{15, 16, SPECIES_SHUPPET},
	{15, 16, SPECIES_DUSKULL},
	{15, 16, SPECIES_PHANTUMP},
	{16, 16, SPECIES_DUSKULL},
	{16, 16, SPECIES_PHANTUMP},
};

static const struct WildPokemonInfo sGrimWoods_LandMonsInfoNight = {20, sGrimWoods_LandMonsNight};

static const struct WildPokemon sRoute5_LandMonsNight[] =
{
	{15, 18, SPECIES_MURKROW},
	{15, 18, SPECIES_ZUBAT},
	{15, 18, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_NIDORAN_F},
	{16, 19, SPECIES_HOUNDOUR},
	{15, 18, SPECIES_ZUBAT},
	{15, 18, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_NIDORAN_F},
	{17, 19, SPECIES_MURKROW},
	{17, 19, SPECIES_DEDENNE},
	{19, 19, SPECIES_NIDORINA},
	{19, 19, SPECIES_NIDORINO},
};

static const struct WildPokemonInfo sRoute5_LandMonsInfoNight = {20, sRoute5_LandMonsNight};

static const struct WildPokemon sRoute6_LandMonsMorning[] =
{
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_LEDYBA},
	{20, 22, SPECIES_SHINX},
	{20, 22, SPECIES_DEERLING},
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_DEERLING},
	{21, 22, SPECIES_KRICKETOT},
	{22, 22, SPECIES_LEDIAN},
	{22, 22, SPECIES_LUXIO},
};

static const struct WildPokemonInfo sRoute6_LandMonsInfoMorning = {20, sRoute6_LandMonsMorning};

static const struct WildPokemon sRoute6_LandMonsNight[] =
{
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_SPINARAK},
	{20, 22, SPECIES_SHINX},
	{20, 22, SPECIES_DEERLING},
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_DEERLING},
	{21, 22, SPECIES_KRICKETOT},
	{22, 22, SPECIES_ARIADOS},
	{22, 22, SPECIES_LUXIO},
};

static const struct WildPokemonInfo sRoute6_LandMonsInfoNight = {20, sRoute6_LandMonsNight};

static const struct WildPokemon sRoute7_LandMonsNight[] =
{
	{21, 23, SPECIES_RATTATA_A},
	{21, 23, SPECIES_HOOTHOOT},
	{21, 23, SPECIES_BUNEARY},
	{21, 23, SPECIES_DROWZEE},
	{21, 23, SPECIES_ABRA},
	{21, 23, SPECIES_MAREEP},
	{21, 23, SPECIES_SHINX},
	{21, 23, SPECIES_SHINX},
	{22, 23, SPECIES_RATTATA_A},
	{22, 23, SPECIES_BUNEARY},
	{23, 23, SPECIES_LUXIO},
	{23, 23, SPECIES_RATICATE_A},
};

static const struct WildPokemonInfo sRoute7_LandMonsInfoNight = {20, sRoute7_LandMonsNight};

static const struct WildPokemon sRoute8_LandMonsNight[] =
{
	{22, 25, SPECIES_SNOVER},
	{22, 25, SPECIES_SNORUNT},
	{22, 25, SPECIES_SNEASEL},
	{22, 25, SPECIES_SNORUNT},
	{22, 25, SPECIES_CUBCHOO},
	{22, 25, SPECIES_DEERLING_WINTER},
	{22, 25, SPECIES_FURRET},
	{22, 25, SPECIES_FLAAFFY},
	{23, 25, SPECIES_SNOVER},
	{23, 25, SPECIES_SNORUNT},
	{23, 25, SPECIES_MINIOR_SHIELD},
	{23, 25, SPECIES_MINIOR_SHIELD},
};

static const struct WildPokemonInfo sRoute8_LandMonsInfoNight = {20, sRoute8_LandMonsNight};

static const struct WildPokemon sFrozenForest_LandMonsNight[] =
{
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNEASEL},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNEASEL},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{26, 26, SPECIES_CUBCHOO},
	{26, 26, SPECIES_CUBCHOO},
};

static const struct WildPokemonInfo sFrozenForest_LandMonsInfoNight = {20, sFrozenForest_LandMonsNight};

static const struct WildPokemon sRoute11_LandMonsNight[] =
{
	{26, 29, SPECIES_EXEGGCUTE},
	{26, 29, SPECIES_MEOWTH},
	{26, 29, SPECIES_VENONAT},
	{26, 29, SPECIES_VENONAT},
	{26, 29, SPECIES_SPOINK},
	{26, 29, SPECIES_MEDITITE},
	{27, 29, SPECIES_SPOINK},
	{27, 29, SPECIES_MEDITITE},
	{29, 29, SPECIES_PERSIAN},
	{29, 29, SPECIES_ABSOL},
	{29, 29, SPECIES_PERSIAN},
	{29, 29, SPECIES_ABSOL},
};

static const struct WildPokemonInfo sRoute11_LandMonsInfoNight = {20, sRoute11_LandMonsNight};

static const struct WildPokemon sRoute12_LandMonsNight[] =
{
	{29, 32, SPECIES_HOOTHOOT},
	{33, 36, SPECIES_ROCKRUFF},
	{33, 36, SPECIES_INKAY},
	{33, 36, SPECIES_MIENFOO},
	{33, 36, SPECIES_PONYTA},
	{33, 36, SPECIES_SNUBBULL},
	{34, 36, SPECIES_INKAY},
	{34, 36, SPECIES_MIENFOO},
	{34, 36, SPECIES_NOCTOWL},
	{33, 36, SPECIES_TOGEDEMARU},
	{34, 36, SPECIES_NOCTOWL},
	{35, 36, SPECIES_TOGEDEMARU},
};

static const struct WildPokemonInfo sRoute12_LandMonsInfoNight = {20, sRoute12_LandMonsNight};

static const struct WildPokemon sRoute14_LandMonsNight[] =
{
	{37, 40, SPECIES_PELIPPER},
	{37, 40, SPECIES_BIBAREL},
	{37, 40, SPECIES_GOLDUCK},
	{37, 40, SPECIES_GASTRODON},
	{37, 40, SPECIES_FLOATZEL},
	{36, 40, SPECIES_SLOWPOKE},
	{37, 40, SPECIES_GLOOM},
	{37, 40, SPECIES_GLOOM},
	{38, 40, SPECIES_FLOATZEL},
	{37, 40, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_ODDISH},
	{25, 30, SPECIES_ODDISH},
};

static const struct WildPokemonInfo sRoute14_LandMonsInfoNight = {20, sRoute14_LandMonsNight};

static const struct WildPokemon sVivillWoods_LandMonsNight[] =
{
	{30, 35, SPECIES_WEEDLE},
	{30, 35, SPECIES_WURMPLE},
	{30, 35, SPECIES_SCATTERBUG},
	{38, 41, SPECIES_COTTONEE},
	{39, 41, SPECIES_SWADLOON},
	{38, 41, SPECIES_PETILIL},
	{39, 41, SPECIES_SPEWPA},
	{39, 41, SPECIES_KAKUNA},
	{39, 41, SPECIES_SILCOON},
	{39, 41, SPECIES_CASCOON},
	{39, 41, SPECIES_SILCOON},
	{39, 41, SPECIES_CASCOON},
};

static const struct WildPokemonInfo sVivillWoods_LandMonsInfoNight = {20, sVivillWoods_LandMonsNight};

static const struct WildPokemon sRoute17_LandMonsNight[] =
{
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_PELIPPER},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_PELIPPER},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{48, 50, SPECIES_ZANGOOSE},
	{48, 50, SPECIES_SEVIPER},
	{40, 45, SPECIES_BAGON},
	{40, 45, SPECIES_BAGON},
};

static const struct WildPokemonInfo sRoute17_LandMonsInfoNight = {20, sRoute17_LandMonsNight};

static const struct WildPokemon sCootesBog_LandMonsNight[] =
{
	{48, 52, SPECIES_CROAGUNK},
	{49, 52, SPECIES_QUAGSIRE},
	{48, 52, SPECIES_CROAGUNK},
	{50, 52, SPECIES_SLIGGOO},
	{50, 52, SPECIES_SLIGGOO},
	{51, 52, SPECIES_DRAPION},
	{49, 52, SPECIES_CARNIVINE},
	{49, 52, SPECIES_GLOOM},
	{49, 52, SPECIES_GLOOM},
	{52, 52, SPECIES_TOXICROAK},
	{49, 52, SPECIES_GLOOM},
	{52, 52, SPECIES_TOXICROAK},
};

static const struct WildPokemonInfo sCootesBog_LandMonsInfoNight = {20, sCootesBog_LandMonsNight};

static const struct WildPokemon sRoute18_LandMonsNight[] =
{
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_BOUFFALANT},
	{53, 57, SPECIES_BOUFFALANT},
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_SUDOWOODO},
	{53, 57, SPECIES_AUDINO},
	{53, 57, SPECIES_SUDOWOODO},
	{53, 57, SPECIES_AUDINO},
};

static const struct WildPokemonInfo sRoute18_LandMonsInfoNight = {20, sRoute18_LandMonsNight};

const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &sRoute2_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &sRoute3_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &sRoute4_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(GRIM_WOODS),
		.mapNum = MAP_NUM(GRIM_WOODS),
		.landMonsInfo = &sGrimWoods_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &sRoute5_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &sRoute7_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &sRoute8_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(FROZEN_FOREST),
		.mapNum = MAP_NUM(FROZEN_FOREST),
		.landMonsInfo = &sFrozenForest_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &sRoute11_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &sRoute12_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14_B),
		.mapNum = MAP_NUM(ROUTE_14_B),
		.landMonsInfo = &sRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14_C),
		.mapNum = MAP_NUM(ROUTE_14_C),
		.landMonsInfo = &sRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIVILL_WOODS),
		.mapNum = MAP_NUM(VIVILL_WOODS),
		.landMonsInfo = &sVivillWoods_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &sRoute17_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(COOTES_BOG),
		.mapNum = MAP_NUM(COOTES_BOG),
		.landMonsInfo = &sCootesBog_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18_B),
		.mapNum = MAP_NUM(ROUTE_18_B),
		.landMonsInfo = &sRoute18_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct SwarmData gSwarmTable[] =
{
	{
		.mapName = MAPSEC_ROUTE_1,
		.species = SPECIES_SNEASEL,
	},
	{
		.mapName = MAPSEC_ROUTE_2,
		.species = SPECIES_BURMY,
	},
	{
		.mapName = MAPSEC_FLOWER_PARADISE,
		.species = SPECIES_CHERUBI,
	},
	{
		.mapName = MAPSEC_GRIM_WOODS,
		.species = SPECIES_NINCADA,
	},
	{
		.mapName = MAPSEC_ROUTE_4,
		.species = SPECIES_LITLEO,
	},
	{
		.mapName = MAPSEC_CINDER_VOLCANO,
		.species = SPECIES_VULPIX,
	},
	{
		.mapName = MAPSEC_ROUTE_5,
		.species = SPECIES_PURRLOIN,
	},
	{
		.mapName = MAPSEC_ROUTE_5,
		.species = SPECIES_ELGYEM,
	},
	{
		.mapName = MAPSEC_VALLEY_CAVE,
		.species = SPECIES_DUNSPARCE,
	},
	{
		.mapName = MAPSEC_ROUTE_6,
		.species = SPECIES_SMEARGLE,
	},
	{
		.mapName = MAPSEC_ROUTE_7,
		.species = SPECIES_MR_MIME,
	},
	{
		.mapName = MAPSEC_ROUTE_8,
		.species = SPECIES_STANTLER,
	},
	{
		.mapName = MAPSEC_ROUTE_9,
		.species = SPECIES_KARRABLAST,
	},
	{
		.mapName = MAPSEC_ROUTE_10,
		.species = SPECIES_SHELMET,
	},
	{
		.mapName = MAPSEC_ROUTE_11,
		.species = SPECIES_GLAMEOW,
	},
	{
		.mapName = MAPSEC_THUNDERCAP_MOUNTAIN,
		.species = SPECIES_JOLTIK,
	},
	{
		.mapName = MAPSEC_THUNDERCAP_MOUNTAIN,
		.species = SPECIES_FERROSEED,
	},
	{
		.mapName = MAPSEC_ROUTE_12,
		.species = SPECIES_SWIRLIX,
	},
	{
		.mapName = MAPSEC_ROUTE_12,
		.species = SPECIES_SPRITZEE,
	},
	{
		.mapName = MAPSEC_VIVILL_WOODS,
		.species = SPECIES_PIKACHU,
	},
	{
		.mapName = MAPSEC_ROUTE_16,
		.species = SPECIES_GOTHORITA,
	},
	{
		.mapName = MAPSEC_ROUTE_16,
		.species = SPECIES_DUOSION,
	},
	{
		.mapName = MAPSEC_ROUTE_17,
		.species = SPECIES_VOLBEAT,
	},
	{
		.mapName = MAPSEC_ROUTE_17,
		.species = SPECIES_ILLUMISE,
	},
	{
		.mapName = MAPSEC_COOTES_BOG,
		.species = SPECIES_CROCONAW,
	},
	{
		.mapName = MAPSEC_ROUTE_18,
		.species = SPECIES_BAYLEEF,
	}
};

#endif

const u16 gSwarmTableLength = NELEMS(gSwarmTable);
