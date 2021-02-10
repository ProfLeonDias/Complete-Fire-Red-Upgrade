#pragma once

enum MoveTutors
{
	TUTOR00_ROAR,
	TUTOR01_BRINE,
	TUTOR02_DREAM_EATER,
	TUTOR03_SEISMIC_TOSS,
	TUTOR04_SUBSTITUTE,
	TUTOR05_COUNTER,
	TUTOR06_SECRET_POWER,
	TUTOR07_POWER_UP_PUNCH,
	TUTOR08_THUNDER_WAVE,
	TUTOR09_MIMIC,
	TUTOR10_WEATHER_BALL,
	TUTOR11_OUTRAGE,
	TUTOR12_PLUCK,
	TUTOR13_EXPLOSION,
	TUTOR14_FROST_BREATH,
	TUTOR15_DEFOG,
	TUTOR16_STEALTH_ROCK,
	TUTOR17_CLOSE_COMBAT,
	TUTOR18_STONE_EDGE,
	TUTOR19_BRAVE_BIRD,
	TUTOR20_SEED_BOMB,
	TUTOR21_FOUL_PLAY,
	TUTOR22_OVERHEAT,
	TUTOR23_HYDRO_PUMP,
	TUTOR24_HURRICANE,
	TUTOR25_AURA_SPHERE,
	TUTOR26_VOLT_SWITCH,
	TUTOR27_WILL_O_WISP,
	TUTOR28_AURORA_VEIL,
	TUTOR29_TAUNT,
	TUTOR30_NASTY_PLOT,
	TUTOR31_TRICK_ROOM,
	TUTOR32_FRENZY_PLANT,
	TUTOR33_BLAST_BURN,
	TUTOR34_HYDRO_CANNON,
	TUTOR35_DRILL_RUN,
	TUTOR36_MAGIC_COAT,
	TUTOR37_MAGIC_ROOM,
	TUTOR38_WONDER_ROOM,
	TUTOR39_LIQUIDATION,
	TUTOR40_GASTRO_ACID,
	TUTOR41_FOUL_PLAY,
	TUTOR42_SUPER_FANG,
	TUTOR43_OUTRAGE,
	TUTOR44_SKY_ATTACK,
	TUTOR45_THROAT_CHOP,
	TUTOR46_STOMPING_TANTRUM,
	TUTOR47_EARTH_POWER,
	TUTOR48_GUNK_SHOT,
	TUTOR49_DUAL_CHOP,
	TUTOR50_HEAT_WAVE,
	TUTOR51_HYPER_VOICE,
	TUTOR52_SUPERPOWER,
	TUTOR53_KNOCK_OFF,
	TUTOR54_PSYCH_UP,
	TUTOR55_VACUUM_WAVE,
	TUTOR56_LAST_RESORT,
	TUTOR57_CONFIDE,
	TUTOR58_GRASS_PLEDGE,
	TUTOR59_FIRE_PLEDGE,
	TUTOR60_WATER_PLEDGE,
	TUTOR61_FRENZY_PLANT,
	TUTOR62_BLAST_BURN,
	TUTOR63_HYDRO_CANNON,
	TUTOR64_FOCUS_ENERGY,
	TUTOR65_COSMIC_POWER,
	TUTOR66_BATON_PASS,
	TUTOR67_ENCORE,
	TUTOR68_SCREECH,
	TUTOR69_FAKE_TEARS,
	TUTOR70_SCARY_FACE,
	TUTOR71_VENOM_DRENCH,
	TUTOR72_SPIKES,
	TUTOR73_TOXIC_SPIKES,
	TUTOR74_DRAGON_DANCE,
	TUTOR75_AGILITY,
	TUTOR76_NASTY_PLOT,
	TUTOR77_GRASSY_TERRAIN,
	TUTOR78_MISTY_TERRAIN,
	TUTOR79_ELECTRIC_TERRAIN,
	TUTOR80_PSYCHIC_TERRAIN,
	TUTOR81_WHIRLPOOL,
	TUTOR82_FIRE_SPIN,
	TUTOR83_SAND_TOMB,
	TUTOR84_PIN_MISSILE,
	TUTOR85_ICICLE_SPEAR,
	TUTOR86_TAIL_SLAP,
	TUTOR87_ROCK_BLAST,
	TUTOR88_THUNDER_FANG,
	TUTOR89_ICE_FANG,
	TUTOR90_FIRE_FANG,
	TUTOR91_BODY_SLAM,
	TUTOR92_BODY_PRESS,
	TUTOR93_HEAT_CRASH,
	TUTOR94_HEAVY_SLAM,
	TUTOR95_REVERSAL,
	TUTOR96_ELECTRO_BALL,
	TUTOR97_STORED_POWER,
	TUTOR98_BREAKING_SWIPE,
	TUTOR99_RAZOR_SHELL,
	TUTOR100_HEX,
	TUTOR101_WEATHER_BALL,
	TUTOR102_AIR_SLASH,
	TUTOR103_AURA_SPHERE,
	TUTOR104_BLAZE_KICK,
	TUTOR105_BUG_BUZZ,
	TUTOR106_CROSS_POISON,
	TUTOR107_CRUNCH,
	TUTOR108_DARKEST_LARIAT,
	TUTOR109_HIGH_HORSEPOWER,
	TUTOR110_LEAF_BLADE,
	TUTOR111_MUDDY_WATER,
	TUTOR112_MYSTICAL_FIRE,
	TUTOR113_PHANTOM_FORCE,
	TUTOR114_PLAY_ROUGH,
	TUTOR115_POLLEN_PUFF,
	TUTOR116_POWER_GEM,
	TUTOR117_PSYCHIC_FANGS,
	TUTOR118_PSYCHO_CUT,
	TUTOR119_BRAVE_BIRD,
	TUTOR120_CLOSE_COMBAT,
	TUTOR121_FLARE_BLITZ,
	TUTOR122_HURRICANE,
	TUTOR123_HYDRO_PUMP,
	TUTOR124_LEAF_STORM,
	TUTOR125_MEGAHORN,
	TUTOR126_POWER_WHIP,
	TUTOR127_SOLAR_BLADE,
};

//Special Move Tutors - Not in Table
//Numbers in comments are ideal numbers (if NUM_MOVE_TUTORS is 128)
enum SpecialMoveTutors
{
	TUTOR_SPECIAL_DRACO_METEOR = NUM_MOVE_TUTORS,	//128 - Dragon Pokemon
	TUTOR_SPECIAL_SECRET_SWORD,						//129 - Keldeo only
	TUTOR_SPECIAL_RELIC_SONG,						//130 - Meloetta only
	TUTOR_SPECIAL_VOLT_TACKLE,						//131 - Pikachu only
	TUTOR_SPECIAL_DRAGON_ASCENT,					//132 - Rayquaza only
	TUTOR_SPECIAL_THOUSAND_ARROWS,					//133 - Zygarde only
	TUTOR_SPECIAL_THOUSAND_WAVES,					//134 - Zygarde only
	TUTOR_SPECIAL_CORE_ENFORCER,					//135 - Zygarde only
	TUTOR_SPECIAL_STEEL_BEAM,						//136 - Steel Pokemon
};
