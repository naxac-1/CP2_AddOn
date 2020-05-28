List of the classes exported to LUA

C++ class entity_memory_object : memory_object {
    property last_level_time;
    property level_time;
    property object_info;
    property self_info;

    function object(const entity_memory_object&);
};

C++ class game_memory_object : memory_object {
    property last_level_time;
    property level_time;
    property object_info;
    property self_info;

    function object(const game_memory_object&);
};

C++ class fcolor {
    property a;
    property b;
    property g;
    property r;

    fcolor ();

    function set(number, number, number, number);
    function set(const fcolor&);
    function set(number);
};

C++ class flags16 {
    flags16 ();

    function zero();
    function assign(const flags16&);
    function assign(number);
    function is(flags16*, number);
    function and(number);
    function and(const flags16&, number);
    function equal(flags16*, const flags16&);
    function equal(flags16*, const flags16&, number);
    function test(flags16*, number);
    function is_any(flags16*, number);
    function or(number);
    function or(const flags16&, number);
    function one(flags16*);
    function set(flags16*, number, boolean);
    function invert();
    function invert(const flags16&);
    function invert(number);
    function get();
};

C++ class flags32 {
    flags32 ();

    function zero();
    function assign(const flags32&);
    function assign(number);
    function is(flags32*, number);
    function and(number);
    function and(const flags32&, number);
    function equal(flags32*, const flags32&);
    function equal(flags32*, const flags32&, number);
    function test(flags32*, number);
    function is_any(flags32*, number);
    function or(number);
    function or(const flags32&, number);
    function one();
    function set(flags32*, number, boolean);
    function invert();
    function invert(const flags32&);
    function invert(number);
    function get();
};

C++ class matrix {
    property _14_;
    property _24_;
    property _34_;
    property _44_;
    property i;
    property j;
    property k;
    property c;

    matrix ();

    function mk_xform(const struct _quaternion<number>&, const vector&);
    function set(const matrix&);
    function set(const vector&, const vector&, const vector&, const vector&);
    function div(const matrix&, number);
    function div(number);
    function identity();
    function setHPB(number, number, number);
    function setXYZ(number, number, number);
    function getHPB(matrix*, number*, number*, number*);
    function mul(const matrix&, const matrix&);
    function mul(const matrix&, number);
    function mul(number);
    function setXYZi(number, number, number);
};

C++ class Frect {
    property lt;
    property rb;
    property x1;
    property x2;
    property y1;
    property y2;

    Frect ();

    function set(number, number, number, number);
};

C++ class vector {
    property x;
    property y;
    property z;

    vector ();

    function set_length(number);
    function sub(number);
    function sub(const vector&);
    function sub(const vector&, const vector&);
    function sub(const vector&, number);
    function reflect(const vector&, const vector&);
    function slide(const vector&, const vector&);
    function average(const vector&);
    function average(const vector&, const vector&);
    function normalize_safe();
    function normalize_safe(const vector&);
    function normalize();
    function normalize(const vector&);
    function align();
    function magnitude() const;
    function getP() const;
    function max(const vector&);
    function max(const vector&, const vector&);
    function distance_to_xz(const vector&) const;
    function invert();
    function invert(const vector&);
    function mad(const vector&, number);
    function mad(const vector&, const vector&, number);
    function mad(const vector&, const vector&);
    function mad(const vector&, const vector&, const vector&);
    function clamp(const vector&);
    function clamp(const vector&, vector);
    function inertion(const vector&, number);
    function crossproduct(const vector&, const vector&);
    function set(number, number, number);
    function set(const vector&);
    function abs(const vector&);
    function div(number);
    function div(const vector&);
    function div(const vector&, const vector&);
    function div(const vector&, number);
    function dotproduct(const vector&) const;
    function getH() const;
    function min(const vector&);
    function min(const vector&, const vector&);
    function similar(const vector&, number) const;
    function distance_to(const vector&) const;
    function lerp(const vector&, const vector&, number);
    function distance_to_sqr(const vector&) const;
    function mul(number);
    function mul(const vector&);
    function mul(const vector&, const vector&);
    function mul(const vector&, number);
    function setHP(number, number);
    function add(number);
    function add(const vector&);
    function add(const vector&, const vector&);
    function add(const vector&, number);
};

C++ class spawn_story_ids {
    const INVALID_SPAWN_STORY_ID = -1;

};

C++ class story_ids {
    const Escape_Trader = 3;
    const Escape_Tutorial_Artefact = 2;
    const Escape_anomaly_field = 8;
    const Escape_blockpost_case = 0;
    const Escape_bridge_stalkers = 9;
    const Escape_dinamite = 7;
    const Escape_novice_lager_volk = 6;
    const Escape_raid_commander1 = 10;
    const Escape_raid_commander2 = 11;
    const Escape_stalker_from_raid = 5;
    const Escape_trader_self = 1;
    const Escape_tutorial_wounded = 4;
    const Freedom_patrol_commander_base = 700;
    const Freedom_patrol_commander_level = 701;
    const Garbage_Seriy = 100;
    const INVALID_STORY_ID = -1;
    const Invalid = 65535;
    const Mil_Bandit_Secret = 705;
    const Mil_Bomb = 723;
    const Mil_Controller = 729;
    const Mil_Cook = 728;
    const Mil_Courier = 710;
    const Mil_Crazy = 703;
    const Mil_Dolg_Khutor = 774;
    const Mil_Dolg_Zoneguard = 708;
    const Mil_Exit_to_Bar = 771;
    const Mil_Exit_to_DeadCity = 772;
    const Mil_Exit_to_Radar = 773;
    const Mil_Freedom_Kamikadze = 709;
    const Mil_Freedom_base = 733;
    const Mil_Hunter1 = 725;
    const Mil_Hunter2 = 726;
    const Mil_Hunter3 = 727;
    const Mil_Informator = 719;
    const Mil_Kap = 724;
    const Mil_Killer1 = 712;
    const Mil_Killer2 = 713;
    const Mil_Killer3 = 714;
    const Mil_Locator_barier = 770;
    const Mil_Lukash = 707;
    const Mil_Master_Max = 702;
    const Mil_Miser = 734;
    const Mil_RG6 = 706;
    const Mil_Silence = 711;
    const Mil_Sniper = 704;
    const Mil_Sniper1 = 730;
    const Mil_Sniper2 = 731;
    const Mil_Sniper3 = 732;
    const Mil_WaterTower = 735;
    const Mil_patrol_kamikadze1 = 720;
    const Mil_patrol_kamikadze2 = 721;
    const Mil_patrol_kamikadze3 = 722;
    const aes_btr1 = 1112;
    const aes_btr2 = 1113;
    const aes_btr3 = 1114;
    const aes_gate = 1115;
    const aes_grenade = 1101;
    const aes_grif = 1108;
    const aes_korshun = 1104;
    const aes_kvartet = 1111;
    const aes_lun = 1109;
    const aes_monolit1 = 1116;
    const aes_monolit2 = 1117;
    const aes_pustelga = 1107;
    const aes_sapsan = 1106;
    const aes_sarcofag = 1102;
    const aes_sidorovich = 1118;
    const aes_sokol = 1103;
    const aes_sova = 1110;
    const aes_yastreb = 1105;
    const aes_zombie1 = 1119;
    const aes_zombie2 = 1120;
    const aes_zombie3 = 1121;
    const aes_zombie4 = 1122;
    const aes_zombie5 = 1123;
    const aes_zombie6 = 1124;
    const agr_attacking_heli = 393;
    const agr_bloodsucker_e3_growl = 396;
    const agr_captains_chamber = 306;
    const agr_collector_entrance1 = 311;
    const agr_collector_entrance2 = 312;
    const agr_collector_entrance3 = 313;
    const agr_collector_entrance4 = 314;
    const agr_collector_entrance5 = 315;
    const agr_collector_entrance6 = 316;
    const agr_controller_e3_growl = 397;
    const agr_exit_to_garbage_01 = 391;
    const agr_exit_to_garbage_02 = 392;
    const agr_factory_location = 320;
    const agr_factory_skirmish1 = 303;
    const agr_gunslinger_collector_entrance = 301;
    const agr_gunslinger_e3_documents = 395;
    const agr_hanging_lamp = 399;
    const agr_krot = 302;
    const agr_military_documents = 300;
    const agr_nii_location = 321;
    const agr_ratcatcher = 304;
    const agr_rtask_stalker_bandit = 3003;
    const agr_secret_0000 = 5065;
    const agr_secret_0001 = 5066;
    const agr_secret_0002 = 5067;
    const agr_secret_0003 = 5068;
    const agr_secret_0004 = 5069;
    const agr_secret_0005 = 5070;
    const agr_secret_0006 = 5071;
    const agr_secret_0007 = 5072;
    const agr_secret_0008 = 5073;
    const agr_secret_0009 = 5074;
    const agr_secret_0010 = 5075;
    const agr_secret_0011 = 5076;
    const agr_secret_0012 = 5077;
    const agr_secret_0013 = 5078;
    const agr_secret_0014 = 5079;
    const agr_secret_0015 = 5080;
    const agr_secret_0016 = 5081;
    const agr_secret_0017 = 5082;
    const agr_secret_0018 = 5083;
    const agr_secret_0019 = 5084;
    const agr_secret_0020 = 5085;
    const agr_secret_0021 = 5086;
    const agr_secret_0022 = 5087;
    const agr_secret_0023 = 5088;
    const agr_secret_0024 = 5089;
    const agr_secret_0025 = 5090;
    const agr_secret_0026 = 5091;
    const agr_secret_0027 = 5092;
    const agr_simulation_box_1 = 2010;
    const agr_simulation_box_2 = 2011;
    const agr_simulation_box_3 = 2012;
    const agr_simulation_box_4 = 2013;
    const agr_simulation_box_5 = 2014;
    const agr_stalker_look_point = 394;
    const agr_stalker_on_enter = 398;
    const agr_u_secret_0000 = 5100;
    const agr_u_secret_0001 = 5101;
    const agr_u_secret_0002 = 5102;
    const agr_u_secret_0003 = 5103;
    const agr_u_secret_0004 = 5104;
    const agr_zaz = 307;
    const bar_Barman = 500;
    const bar_arena_inventory_box = 573;
    const bar_arena_inventory_box_2 = 574;
    const bar_arena_locator = 571;
    const bar_bar_locator = 570;
    const bar_bar_osvedomitel = 515;
    const bar_crazy_veterans_leader = 511;
    const bar_darklab_documents = 512;
    const bar_decoding_documents = 513;
    const bar_dolg_arhive_documents = 501;
    const bar_dolg_captain_ivancov = 505;
    const bar_dolg_general_voronin = 507;
    const bar_dolg_guard_commander = 516;
    const bar_dolg_locator = 572;
    const bar_dolg_polkovnik_petrenko = 506;
    const bar_drunk_dolg = 510;
    const bar_ecolog_professor = 503;
    const bar_exit_to_garbage = 593;
    const bar_exit_to_military = 592;
    const bar_exit_to_rostok = 594;
    const bar_freedom_volkodav = 509;
    const bar_hunter = 504;
    const bar_hunter_toz = 502;
    const bar_lisiy = 607;
    const bar_psih = 517;
    const bar_secret_0000 = 5435;
    const bar_secret_0001 = 5436;
    const bar_secret_0002 = 5437;
    const bar_secret_0003 = 5438;
    const bar_secret_0004 = 5439;
    const bar_secret_0005 = 5440;
    const bar_secret_0006 = 5441;
    const bar_secret_0007 = 5442;
    const bar_secret_0008 = 5443;
    const bar_secret_0009 = 5444;
    const bar_secret_0010 = 5445;
    const bar_secret_0011 = 5446;
    const bar_secret_0012 = 5447;
    const bar_secret_0013 = 5448;
    const bar_secret_0014 = 5449;
    const bar_secret_0015 = 5450;
    const bar_secret_0016 = 5451;
    const bar_secret_0017 = 5452;
    const bar_secret_0018 = 5453;
    const bar_secret_0019 = 5454;
    const bar_simulation_box_1 = 2020;
    const bar_simulation_box_2 = 2021;
    const bar_simulation_box_3 = 2022;
    const bar_simulation_box_4 = 2023;
    const bar_simulation_box_5 = 2024;
    const bar_svoboda_ambush_tiran = 514;
    const bar_water_tower = 508;
    const bar_zastava_commander = 518;
    const brain_snork_growl = 923;
    const bun_bloodsucker_prim = 1550;
    const cit_actor_escape_car_zone = 1205;
    const cit_actor_escape_zone = 1203;
    const cit_actor_weapon_zone = 1202;
    const cit_bandits_base_zone = 1207;
    const cit_bochka_button = 1210;
    const cit_doctor = 1200;
    const cit_gorsovet_zone = 1208;
    const cit_heli = 1201;
    const cit_killers_base_zone = 1206;
    const cit_level_exit_zone = 1204;
    const cit_vp = 1209;
    const dar_codedoor_1 = 432;
    const dar_codedoor_2 = 433;
    const dar_corpse_1 = 450;
    const dar_corpse_2 = 451;
    const dar_poltergeist = 452;
    const darscape_helicopter = 1500;
    const ds_barrel_faller1 = 1520;
    const ds_barrel_faller2 = 1521;
    const ds_barrel_faller3 = 1522;
    const ds_barrel_faller4 = 1523;
    const ds_barrel_faller5 = 1524;
    const ds_barrel_faller6 = 1525;
    const ds_barrel_faller7 = 1526;
    const ds_barrel_faller8 = 1527;
    const ds_barrel_faller9 = 1528;
    const ds_falling_barrel_1 = 1501;
    const ds_falling_barrel_10 = 1510;
    const ds_falling_barrel_2 = 1502;
    const ds_falling_barrel_3 = 1503;
    const ds_falling_barrel_4 = 1504;
    const ds_falling_barrel_5 = 1505;
    const ds_falling_barrel_6 = 1506;
    const ds_falling_barrel_7 = 1507;
    const ds_falling_barrel_8 = 1508;
    const ds_falling_barrel_9 = 1509;
    const ds_table = 1515;
    const esc_bandits_factory = 17;
    const esc_dead_tunel_novice = 33;
    const esc_exit_to_garbage_01 = 91;
    const esc_helicopter = 14;
    const esc_kuznetsov = 32;
    const esc_lager_leader = 22;
    const esc_leader_killers = 21;
    const esc_level_patrol = 15;
    const esc_matugalnik = 18;
    const esc_mill = 28;
    const esc_pm_broken = 26;
    const esc_secret_0000 = 5000;
    const esc_secret_0001 = 5001;
    const esc_secret_0002 = 5002;
    const esc_secret_0003 = 5003;
    const esc_secret_0004 = 5004;
    const esc_secret_0005 = 5005;
    const esc_secret_0006 = 5006;
    const esc_secret_0007 = 5007;
    const esc_secret_0008 = 5008;
    const esc_secret_0009 = 5009;
    const esc_secret_0010 = 5010;
    const esc_secret_0011 = 5011;
    const esc_secret_0012 = 5012;
    const esc_secret_0013 = 5013;
    const esc_secret_0014 = 5014;
    const esc_secret_0015 = 5015;
    const esc_secret_0016 = 5016;
    const esc_secret_0017 = 5017;
    const esc_secret_0018 = 5018;
    const esc_secret_0019 = 5019;
    const esc_secret_shustryi = 23;
    const esc_simulation_box_1 = 2000;
    const esc_simulation_box_2 = 2001;
    const esc_simulation_box_3 = 2002;
    const esc_simulation_box_4 = 2003;
    const esc_simulation_box_5 = 2004;
    const esc_toz_broken = 27;
    const esc_tutorial_flesh = 29;
    const esc_tutorial_secret_place = 25;
    const esc_vagon_newbie1 = 12;
    const esc_vagon_newbie2 = 13;
    const esc_vp_finder = 30;
    const esc_wounded_flash = 16;
    const esc_wounded_follower_2 = 24;
    const gar_bandit_post = 111;
    const gar_bandits_leader = 106;
    const gar_boars_nest = 105;
    const gar_dm_bandit1 = 101;
    const gar_dm_bandit2 = 102;
    const gar_dm_bandit3 = 103;
    const gar_dm_novice = 104;
    const gar_dolg_blockpost = 108;
    const gar_exir_to_escape = 193;
    const gar_exit_to_agroprom_01 = 191;
    const gar_exit_to_agroprom_02 = 192;
    const gar_exit_to_bar = 194;
    const gar_exit_to_darkvalley_high = 196;
    const gar_exit_to_darkvalley_low = 195;
    const gar_hellcar = 107;
    const gar_newbie_in_tunnel = 110;
    const gar_rtask_boars = 3050;
    const gar_rtask_stalker_bandit = 3002;
    const gar_secret_0000 = 5030;
    const gar_secret_0001 = 5031;
    const gar_secret_0002 = 5032;
    const gar_secret_0003 = 5033;
    const gar_secret_0004 = 5034;
    const gar_secret_0005 = 5035;
    const gar_secret_0006 = 5036;
    const gar_secret_0007 = 5037;
    const gar_secret_0008 = 5038;
    const gar_secret_0009 = 5039;
    const gar_secret_0010 = 5040;
    const gar_secret_0011 = 5041;
    const gar_secret_0012 = 5042;
    const gar_secret_0013 = 5043;
    const gar_secret_0014 = 5044;
    const gar_secret_0015 = 5045;
    const gar_secret_0016 = 5046;
    const gar_secret_0017 = 5047;
    const gar_secret_0018 = 5048;
    const gar_secret_0019 = 5049;
    const gar_secret_0020 = 5050;
    const gar_secret_0021 = 5051;
    const gar_secret_0022 = 5052;
    const gar_secret_0023 = 5053;
    const gar_secret_0024 = 5054;
    const gar_seryi_drug_wounded = 123;
    const gar_simulation_box_1 = 2005;
    const gar_simulation_box_2 = 2006;
    const gar_simulation_box_3 = 2007;
    const gar_simulation_box_4 = 2008;
    const gar_simulation_box_5 = 2009;
    const gar_spot_angar = 116;
    const gar_spot_bandit_agr = 117;
    const gar_spot_car_graveyard = 114;
    const gar_spot_dogs_forest = 119;
    const gar_spot_dolg_blokpost = 115;
    const gar_spot_secret1 = 113;
    const gar_spot_swamp = 112;
    const gar_spot_trash1 = 120;
    const gar_spot_trash2 = 121;
    const gar_spot_trash3 = 122;
    const gar_spot_tunnel = 118;
    const gar_stalker_corpse = 124;
    const gar_wounded = 109;
    const mil_barrier_monster = 3070;
    const mil_secret_0000 = 5200;
    const mil_secret_0001 = 5201;
    const mil_secret_0002 = 5202;
    const mil_secret_0003 = 5203;
    const mil_secret_0004 = 5204;
    const mil_secret_0005 = 5205;
    const mil_secret_0006 = 5206;
    const mil_secret_0007 = 5207;
    const mil_secret_0008 = 5208;
    const mil_secret_0009 = 5209;
    const mil_secret_0010 = 5210;
    const mil_secret_0011 = 5211;
    const mil_secret_0012 = 5212;
    const mil_secret_0013 = 5213;
    const mil_secret_0014 = 5214;
    const mil_secret_0015 = 5215;
    const mil_secret_0016 = 5216;
    const mil_secret_0017 = 5217;
    const mil_secret_0018 = 5218;
    const mil_secret_0019 = 5219;
    const mil_secret_0020 = 5220;
    const mil_secret_0021 = 5221;
    const mil_secret_0022 = 5222;
    const mil_secret_0023 = 5223;
    const mil_secret_0024 = 5224;
    const mil_secret_0025 = 5225;
    const mil_secret_0026 = 5226;
    const mil_secret_0027 = 5227;
    const mil_secret_0028 = 5228;
    const mil_simulation_box_1 = 2015;
    const mil_simulation_box_2 = 2016;
    const mil_simulation_box_3 = 2017;
    const mil_simulation_box_4 = 2018;
    const mil_simulation_box_5 = 2019;
    const mil_stalker_killer = 3071;
    const oso = 1307;
    const pl_weapon_spawn = 606;
    const pri_bomber = 806;
    const pri_btr = 807;
    const pri_bus_station_zone = 824;
    const pri_controller1 = 810;
    const pri_controller2 = 811;
    const pri_controller3 = 812;
    const pri_corner_monolith1 = 809;
    const pri_decoder_room_door = 822;
    const pri_exit_to_aes = 832;
    const pri_exit_to_radar = 833;
    const pri_followers_gulag = 823;
    const pri_followers_marker = 831;
    const pri_gigant1 = 815;
    const pri_gigant2 = 816;
    const pri_gigant3 = 817;
    const pri_gigant4 = 818;
    const pri_gigant5 = 819;
    const pri_heli1 = 800;
    const pri_heli2 = 801;
    const pri_heli3 = 802;
    const pri_heli4 = 803;
    const pri_hotel_zone = 825;
    const pri_monolith_base_zone = 826;
    const pri_monolith_leader = 828;
    const pri_secret_0000 = 5251;
    const pri_secret_0001 = 5252;
    const pri_secret_0002 = 5253;
    const pri_secret_0003 = 5254;
    const pri_secret_0004 = 5255;
    const pri_snork_growl = 829;
    const pri_stadium_entrance = 830;
    const pri_stadium_zone = 827;
    const pri_wave1_monolith_victim1 = 808;
    const pri_wave2_monolith_victim1 = 804;
    const pri_wave2_monolith_victim2 = 805;
    const pri_wave4_monolith6 = 820;
    const pri_wave4_monolith8 = 821;
    const pri_zombied_victim1 = 813;
    const pri_zombied_victim2 = 814;
    const rad_antenna = 1000;
    const rad_barrel_faller1 = 1071;
    const rad_barrel_faller2 = 1072;
    const rad_barrel_faller3 = 1073;
    const rad_barrel_faller4 = 1074;
    const rad_barrel_faller5 = 1075;
    const rad_bunker = 1005;
    const rad_code_door = 1001;
    const rad_entrance_guard1 = 1002;
    const rad_entrance_guard2 = 1003;
    const rad_exit_to_military = 1008;
    const rad_exit_to_pripyat = 1007;
    const rad_falling_barrel_1 = 1090;
    const rad_falling_barrel_10 = 1099;
    const rad_falling_barrel_11 = 1080;
    const rad_falling_barrel_12 = 1081;
    const rad_falling_barrel_13 = 1082;
    const rad_falling_barrel_14 = 1083;
    const rad_falling_barrel_15 = 1084;
    const rad_falling_barrel_16 = 1085;
    const rad_falling_barrel_2 = 1091;
    const rad_falling_barrel_3 = 1092;
    const rad_falling_barrel_4 = 1093;
    const rad_falling_barrel_5 = 1094;
    const rad_falling_barrel_6 = 1095;
    const rad_falling_barrel_7 = 1096;
    const rad_falling_barrel_8 = 1097;
    const rad_falling_barrel_9 = 1098;
    const rad_secret_0000 = 5245;
    const rad_secret_0001 = 5246;
    const rad_secret_0002 = 5247;
    const rad_secret_0003 = 5248;
    const rad_secret_0004 = 5249;
    const rad_secret_0005 = 5250;
    const rad_suicide = 1004;
    const rad_swith = 1006;
    const ros_secret_0000 = 5455;
    const ros_secret_0001 = 5456;
    const ros_secret_0002 = 5457;
    const ros_secret_0003 = 5458;
    const ros_secret_0004 = 5459;
    const ros_secret_0005 = 5460;
    const ros_secret_0006 = 5461;
    const ros_secret_0007 = 5462;
    const ros_secret_0008 = 5463;
    const ros_secret_0009 = 5464;
    const ros_secret_0010 = 5465;
    const ros_secret_0011 = 5466;
    const ros_secret_0012 = 5467;
    const ros_secret_0013 = 5468;
    const ros_secret_0014 = 5469;
    const ros_secret_0015 = 5470;
    const ros_secret_0016 = 5471;
    const ros_secret_0017 = 5472;
    const ros_secret_0018 = 5473;
    const ros_secret_0019 = 5474;
    const ros_secret_0020 = 5475;
    const ros_secret_0021 = 5476;
    const ros_secret_0022 = 5477;
    const ros_secret_0023 = 5478;
    const ros_secret_0024 = 5479;
    const ros_secret_0025 = 5480;
    const ros_simulation_box_1 = 2030;
    const ros_simulation_box_2 = 2031;
    const ros_simulation_box_3 = 2032;
    const ros_simulation_box_4 = 2033;
    const ros_simulation_box_5 = 2034;
    const rostok_banda_volkodava = 597;
    const rostok_exit_to_bar = 591;
    const rostok_exit_to_yantar = 608;
    const rostok_kruglov_finish = 605;
    const rostok_naemnik = 595;
    const rostok_offline_walker_1 = 601;
    const rostok_offline_walker_2 = 602;
    const rostok_offline_walker_3 = 603;
    const rostok_offline_walker_4 = 604;
    const rostok_tainyi_hod = 596;
    const sar2_destroyable_monolith = 1305;
    const sar_command_center = 1304;
    const sar_generator_1 = 1301;
    const sar_generator_2 = 1302;
    const sar_monolith = 1300;
    const sar_monolith_find = 1306;
    const sar_secret_door = 1303;
    const soldiers_bridge = 31;
    const test_searchlight1 = 20002;
    const test_searchlight2 = 20003;
    const test_stalker1 = 20000;
    const test_stalker2 = 20001;
    const tm_stohe_selo_test_lager = 10001;
    const val_bandit_rpg_dead = 437;
    const val_borov = 425;
    const val_door_to_x18 = 426;
    const val_escort_captive = 400;
    const val_escort_guard1 = 407;
    const val_escort_guard2 = 408;
    const val_escort_nap1 = 406;
    const val_escort_wounded = 424;
    const val_exit_gate = 421;
    const val_gate_btr = 423;
    const val_lvl_changer1 = 415;
    const val_lvl_changer2 = 416;
    const val_lvl_changer3 = 417;
    const val_opendoor_monolith = 410;
    const val_opendoor_soldier = 412;
    const val_opendoor_victim = 411;
    const val_prisoner = 402;
    const val_rtask_dolg_bandit = 3001;
    const val_sacrifice_bloodsucker = 403;
    const val_sacrifice_guard1 = 404;
    const val_sacrifice_guard2 = 405;
    const val_sacrifice_victim = 401;
    const val_secret_0000 = 5400;
    const val_secret_0001 = 5401;
    const val_secret_0002 = 5402;
    const val_secret_0003 = 5403;
    const val_secret_0004 = 5404;
    const val_secret_0005 = 5405;
    const val_secret_0006 = 5406;
    const val_secret_0007 = 5407;
    const val_secret_0008 = 5408;
    const val_secret_0009 = 5409;
    const val_secret_0010 = 5410;
    const val_secret_0011 = 5411;
    const val_secret_0012 = 5412;
    const val_secret_0013 = 5413;
    const val_secret_0014 = 5414;
    const val_secret_0015 = 5415;
    const val_secret_0016 = 5416;
    const val_secret_0017 = 5417;
    const val_secret_0018 = 5418;
    const val_secret_0019 = 5419;
    const val_secret_0020 = 5420;
    const val_secret_0021 = 5421;
    const val_secret_0022 = 5422;
    const val_secret_0023 = 5423;
    const val_secret_0024 = 5424;
    const val_secret_0025 = 5425;
    const val_secret_0026 = 5426;
    const val_secret_0027 = 5427;
    const val_secret_0028 = 5428;
    const val_secret_0029 = 5429;
    const val_secret_0030 = 5430;
    const val_secret_0031 = 5431;
    const val_secret_0032 = 5432;
    const val_simulation_box_1 = 2025;
    const val_simulation_box_2 = 2026;
    const val_simulation_box_3 = 2027;
    const val_simulation_box_4 = 2028;
    const val_simulation_box_5 = 2029;
    const val_sos_bs = 436;
    const val_sos_stalker = 422;
    const val_stairs_victim1 = 413;
    const val_stairs_victim2 = 414;
    const val_stopper_soldier1 = 418;
    const val_stopper_soldier2 = 419;
    const val_stopper_soldier3 = 420;
    const val_tunnel_bandit = 409;
    const val_zone_bandits = 427;
    const val_zone_exit_tunnel = 434;
    const val_zone_farm = 435;
    const val_zone_monolith = 428;
    const val_zone_pipe = 431;
    const val_zone_robbers = 429;
    const val_zone_south_gate = 430;
    const warlab = 1400;
    const x16_secret_0000 = 5243;
    const x16_secret_0001 = 5244;
    const x18_secret_0000 = 5433;
    const x18_secret_0001 = 5434;
    const x18_sound_1 = 471;
    const x18_sound_10 = 480;
    const x18_sound_2 = 472;
    const x18_sound_3 = 473;
    const x18_sound_4 = 474;
    const x18_sound_5 = 475;
    const x18_sound_6 = 476;
    const x18_sound_7 = 477;
    const x18_sound_8 = 478;
    const x18_sound_9 = 479;
    const yan_ecolog_help = 900;
    const yan_exit_to_rostok = 925;
    const yan_general_ecolog = 902;
    const yan_ghost = 918;
    const yan_giant_growl = 924;
    const yan_helmet = 920;
    const yan_labx16_documents = 917;
    const yan_labx16switcher_lamp1 = 908;
    const yan_labx16switcher_lamp2 = 909;
    const yan_labx16switcher_lamp3 = 910;
    const yan_labx16switcher_primary_1_green = 911;
    const yan_labx16switcher_primary_1_red = 912;
    const yan_labx16switcher_primary_2_green = 913;
    const yan_labx16switcher_primary_2_red = 914;
    const yan_labx16switcher_primary_3_green = 915;
    const yan_labx16switcher_primary_3_red = 916;
    const yan_mapspot_from_vasilyev = 907;
    const yan_scan_psi_radiation = 901;
    const yan_secret_0000 = 5229;
    const yan_secret_0001 = 5230;
    const yan_secret_0002 = 5231;
    const yan_secret_0003 = 5232;
    const yan_secret_0004 = 5233;
    const yan_secret_0005 = 5234;
    const yan_secret_0006 = 5235;
    const yan_secret_0007 = 5236;
    const yan_secret_0008 = 5237;
    const yan_secret_0009 = 5238;
    const yan_secret_0010 = 5239;
    const yan_secret_0011 = 5240;
    const yan_secret_0012 = 5241;
    const yan_secret_0013 = 5242;
    const yan_secret_exit = 921;
    const yan_semenov_help = 905;
    const yan_simulation_box_1 = 2035;
    const yan_simulation_box_2 = 2036;
    const yan_simulation_box_3 = 2037;
    const yan_simulation_box_4 = 2038;
    const yan_simulation_box_5 = 2039;
    const yan_specnaz_corpse = 922;
    const yan_vasilyev = 903;
    const yan_zombie_zone_mapspot = 906;

};

C++ class callback {
    const action_animation = 20;
    const action_movement = 18;
    const action_object = 23;
    const action_particle = 22;
    const action_sound = 21;
    const action_watch = 19;
    const actor_sleep = 24;
    const article_info = 12;
    const death = 8;
    const helicopter_on_hit = 26;
    const helicopter_on_point = 25;
    const hit = 16;
    const inventory_info = 11;
    const inventory_pda = 10;
    const level_border_enter = 7;
    const level_border_exit = 6;
    const map_location_added = 14;
    const on_item_drop = 28;
    const on_item_take = 27;
    const patrol_path_in_point = 9;
    const script_animation = 29;
    const sound = 17;
    const take_item_from_box = 33;
    const task_state = 13;
    const trade_perform_operation = 3;
    const trade_sell_buy_item = 2;
    const trade_start = 0;
    const trade_stop = 1;
    const trader_global_anim_request = 30;
    const trader_head_anim_request = 31;
    const trader_sound_end = 32;
    const use_object = 15;
    const zone_enter = 4;
    const zone_exit = 5;

};

C++ class key_bindings {
    const kACCEL = 7;
    const kBACK = 10;
    const kBUY = 50;
    const kCAM_1 = 16;
    const kCAM_2 = 17;
    const kCAM_3 = 18;
    const kCAM_4 = 19;
    const kCAM_ZOOM_IN = 20;
    const kCAM_ZOOM_OUT = 21;
    const kCHAT = 44;
    const kCONSOLE = 48;
    const kCROUCH = 5;
    const kCROUCH_TOGGLE = 6;
    const kDOWN = 3;
    const kDROP = 41;
    const kFWD = 9;
    const kINVENTORY = 49;
    const kJUMP = 4;
    const kLEFT = 0;
    const kL_LOOKOUT = 13;
    const kL_STRAFE = 11;
    const kNIGHT_VISION = 23;
    const kQUIT = 47;
    const kRIGHT = 1;
    const kR_LOOKOUT = 14;
    const kR_STRAFE = 12;
    const kSCORES = 43;
    const kSCREENSHOT = 46;
    const kSKIN = 51;
    const kTEAM = 52;
    const kTORCH = 22;
    const kUP = 2;
    const kUSE = 42;
    const kWPN_1 = 24;
    const kWPN_2 = 25;
    const kWPN_3 = 26;
    const kWPN_4 = 27;
    const kWPN_5 = 28;
    const kWPN_6 = 29;
    const kWPN_FIRE = 32;
    const kWPN_FUNC = 37;
    const kWPN_NEXT = 31;
    const kWPN_RELOAD = 36;
    const kWPN_ZOOM = 33;

};

C++ class game_messages {
    const GAME_EVENT_ARTEFACT_DESTROYED = 15;
    const GAME_EVENT_ARTEFACT_DROPPED = 17;
    const GAME_EVENT_ARTEFACT_ONBASE = 18;
    const GAME_EVENT_ARTEFACT_SPAWNED = 14;
    const GAME_EVENT_ARTEFACT_TAKEN = 16;
    const GAME_EVENT_BUY_MENU_CLOSED = 21;
    const GAME_EVENT_PLAYER_BUY_FINISHED = 2;
    const GAME_EVENT_PLAYER_CHANGE_SKIN = 4;
    const GAME_EVENT_PLAYER_CHANGE_TEAM = 4;
    const GAME_EVENT_PLAYER_CONNECTED = 6;
    const GAME_EVENT_PLAYER_DISCONNECTED = 7;
    const GAME_EVENT_PLAYER_ENTER_TEAM_BASE = 19;
    const GAME_EVENT_PLAYER_JOIN_TEAM = 11;
    const GAME_EVENT_PLAYER_KILL = 1;
    const GAME_EVENT_PLAYER_KILLED = 9;
    const GAME_EVENT_PLAYER_LEAVE_TEAM_BASE = 20;
    const GAME_EVENT_PLAYER_READY = 0;
    const GAME_EVENT_ROUND_END = 13;
    const GAME_EVENT_ROUND_STARTED = 12;
    const GAME_EVENT_SCRIPT_BEGINS_FROM = 36;
    const GAME_EVENT_SKIN_MENU_CLOSED = 23;
    const GAME_EVENT_TEAM_MENU_CLOSED = 22;

};

C++ class game_phases {
    const GAME_PHASE_INPROGRESS = 1;
    const GAME_PHASE_NONE = 0;
    const GAME_PHASE_PENDING = 2;
    const GAME_PHASE_SCRIPT_BEGINS_FROM = 9;
    const GAME_PHASE_TEAM1_SCORES = 3;
    const GAME_PHASE_TEAM2_SCORES = 4;
    const GAME_PHASE_TEAMS_IN_A_DRAW = 7;

};

C++ class game_player_flags {
    const GAME_PLAYER_FLAG_LOCAL = 1;
    const GAME_PLAYER_FLAG_READY = 2;
    const GAME_PLAYER_FLAG_SCRIPT_BEGINS_FROM = 16;
    const GAME_PLAYER_FLAG_SPECTATOR = 8;
    const GAME_PLAYER_FLAG_VERY_VERY_DEAD = 4;

};

C++ class GAME_TYPE {
    const GAME_ARTEFACTHUNT = 7;
    const GAME_DEATHMATCH = 2;
    const GAME_TEAMDEATHMATCH = 6;
    const GAME_UNKNOWN = 0;

};

C++ class game_difficulty {
    const master = 3;
    const novice = 0;
    const stalker = 1;
    const veteran = 2;

};

C++ class snd_type {
    const ambient = 128;
    const anomaly = 268435456;
    const anomaly_idle = 268437504;
    const attack = 8192;
    const bullet_hit = 524288;
    const die = 131072;
    const drop = 33554432;
    const eat = 4096;
    const empty = 1048576;
    const hide = 16777216;
    const idle = 2048;
    const injure = 65536;
    const item = 1073741824;
    const item_drop = 1107296256;
    const item_hide = 1090519040;
    const item_pick_up = 1140850688;
    const item_take = 1082130432;
    const item_use = 1077936128;
    const monster = 536870912;
    const monster_attack = 536879104;
    const monster_die = 537001984;
    const monster_eat = 536875008;
    const monster_injure = 536936448;
    const monster_step = 536903680;
    const monster_talk = 536887296;
    const no_sound = 0;
    const object_break = 1024;
    const object_collide = 512;
    const object_explode = 256;
    const pick_up = 67108864;
    const reload = 262144;
    const shoot = 2097152;
    const step = 32768;
    const take = 8388608;
    const talk = 16384;
    const use = 4194304;
    const weapon = -2147483648;
    const weapon_bullet_hit = -2146959360;
    const weapon_empty = -2146435072;
    const weapon_reload = -2147221504;
    const weapon_shoot = -2145386496;
    const world = 134217728;
    const world_ambient = 134217856;
    const world_object_break = 134218752;
    const world_object_collide = 134218240;
    const world_object_explode = 134217984;

};

C++ class task {
    const completed = 2;
    const fail = 0;
    const in_progress = 1;
    const task_dummy = -1;

};

C++ class ui_events {
    const BUTTON_CLICKED = 16;
    const BUTTON_DOWN = 17;
    const CHECK_BUTTON_RESET = 20;
    const CHECK_BUTTON_SET = 19;
    const DRAG_DROP_ITEM_DB_CLICK = 24;
    const DRAG_DROP_ITEM_DRAG = 22;
    const DRAG_DROP_ITEM_DROP  = 23;
    const DRAG_DROP_ITEM_RBUTTON_CLICK = 25;
    const EDIT_TEXT_CHANGED = 74;
    const EDIT_TEXT_COMMIT = 75;
    const INTERACTIVE_ITEM_CLICK = 37;
    const INVENTORY_ATTACH_ADDON  = 60;
    const INVENTORY_DETACH_GRENADE_LAUNCHER_ADDON = 66;
    const INVENTORY_DETACH_SCOPE_ADDON = 62;
    const INVENTORY_DETACH_SILENCER_ADDON = 64;
    const INVENTORY_DROP_ACTION = 55;
    const INVENTORY_EAT_ACTION = 56;
    const INVENTORY_TO_BAG_ACTION = 59;
    const INVENTORY_TO_BELT_ACTION  = 57;
    const INVENTORY_TO_SLOT_ACTION = 58;
    const LIST_ITEM_CLICKED = 33;
    const LIST_ITEM_SELECT = 34;
    const MESSAGE_BOX_CANCEL_CLICKED = 44;
    const MESSAGE_BOX_NO_CLICKED = 43;
    const MESSAGE_BOX_OK_CLICKED = 39;
    const MESSAGE_BOX_QUIT_GAME_CLICKED = 42;
    const MESSAGE_BOX_QUIT_WIN_CLICKED = 41;
    const MESSAGE_BOX_YES_CLICKED = 40;
    const OUTFIT_RETURNED_BACK = 54;
    const PDA_CONTACTS_WND_CONTACT_SELECTED = 51;
    const PDA_DIALOG_WND_BACK_BUTTON_CLICKED = 49;
    const PDA_DIALOG_WND_MESSAGE_BUTTON_CLICKED = 50;
    const PROPERTY_CLICKED = 38;
    const RADIOBUTTON_SET = 21;
    const SCROLLBAR_HSCROLL = 30;
    const SCROLLBAR_VSCROLL = 29;
    const SCROLLBOX_MOVE = 27;
    const SCROLLBOX_STOP = 28;
    const STATIC_FOCUS_LOST = 15;
    const STATIC_FOCUS_RECEIVED = 14;
    const TAB_CHANGED = 18;
    const TALK_DIALOG_QUESTION_CLICKED = 46;
    const TALK_DIALOG_TRADE_BUTTON_CLICKED = 45;
    const TRADE_WND_CLOSED = 52;
    const UNDRESS_OUTFIT = 53;
    const WINDOW_KEYBOARD_CAPTURE_LOST = 13;
    const WINDOW_KEY_PRESSED = 10;
    const WINDOW_KEY_RELEASED = 11;
    const WINDOW_LBUTTON_DB_CLICK = 9;
    const WINDOW_LBUTTON_DOWN = 0;
    const WINDOW_LBUTTON_UP = 3;
    const WINDOW_MOUSE_CAPTURE_LOST  = 12;
    const WINDOW_MOUSE_MOVE = 6;
    const WINDOW_RBUTTON_DOWN = 1;
    const WINDOW_RBUTTON_UP = 4;

};

C++ class hit_memory_object : entity_memory_object {
    property amount;
    property bone_index;
    property direction;
    property last_level_time;
    property level_time;
    property object_info;
    property self_info;

    function object(const entity_memory_object&);
};

C++ class clsid {
    const actor = 78;
    const ameba_zone = 173;
    const art_bast_artefact = 0;
    const art_black_drops = 1;
    const art_dummy = 3;
    const art_electric_ball = 4;
    const art_faded_ball = 5;
    const art_galantine = 6;
    const art_gravi = 7;
    const art_gravi_black = 2;
    const art_mercury_ball = 8;
    const art_needles = 9;
    const art_rusty_hair = 10;
    const art_thorn = 11;
    const art_zuda = 12;
    const artefact = 39;
    const artefact_s = 90;
    const bloodsucker = 13;
    const bloodsucker_s = 95;
    const boar = 14;
    const boar_s = 96;
    const burer = 15;
    const burer_s = 97;
    const car = 49;
    const car_s = 91;
    const cat = 16;
    const cat_s = 98;
    const chimera = 28;
    const chimera_s = 99;
    const controller = 17;
    const controller_s = 100;
    const crow = 18;
    const device_detector_simple = 51;
    const device_pda = 50;
    const device_torch = 52;
    const device_torch_s = 119;
    const dog_black = 19;
    const dog_red = 22;
    const dog_s = 103;
    const equ_exo = 53;
    const equ_military = 54;
    const equ_scientific = 55;
    const equ_stalker = 56;
    const equ_stalker_s = 57;
    const flesh = 23;
    const flesh_group = 24;
    const flesh_s = 104;
    const fracture = 25;
    const fracture_s = 106;
    const game = 61;
    const game_cl_LastStanding = 45;
    const game_cl_artefact_hunt = 43;
    const game_cl_deathmatch = 44;
    const game_cl_single = 46;
    const game_cl_team_deathmatch = 47;
    const game_sv_LastStanding = 116;
    const game_sv_artefact_hunt = 114;
    const game_sv_deathmatch = 115;
    const game_sv_single = 117;
    const game_sv_team_deathmatch = 118;
    const game_ui_artefact_hunt = 120;
    const game_ui_deathmatch = 121;
    const game_ui_single = 122;
    const game_ui_team_deathmatch = 123;
    const gigant_s = 105;
    const graph_point = 27;
    const hanging_lamp = 81;
    const helicopter = 48;
    const hud_manager = 64;
    const inventory_box = 82;
    const level = 60;
    const level_changer = 74;
    const main_menu = 75;
    const mp_players_bag = 76;
    const nogravity_zone = 179;
    const obj_antirad = 65;
    const obj_attachable = 66;
    const obj_bandage = 67;
    const obj_bolt = 68;
    const obj_bottle = 69;
    const obj_breakable = 79;
    const obj_climable = 80;
    const obj_document = 70;
    const obj_explosive = 71;
    const obj_food = 72;
    const obj_medkit = 73;
    const obj_phskeleton = 87;
    const obj_phys_destroyable = 86;
    const obj_physic = 83;
    const online_offline_group = 77;
    const phantom = 29;
    const poltergeist = 30;
    const poltergeist_s = 107;
    const projector = 84;
    const pseudo_gigant = 26;
    const pseudodog_s = 108;
    const psy_dog = 21;
    const psy_dog_phantom = 20;
    const psy_dog_phantom_s = 101;
    const psy_dog_s = 102;
    const respawn = 88;
    const script_object = 92;
    const script_stalker = 33;
    const script_trader = 35;
    const script_zone = 89;
    const smart_terrain = 93;
    const smart_zone = 94;
    const snork = 31;
    const snork_s = 109;
    const space_restrictor = 112;
    const spectator = 113;
    const stalker = 32;
    const switcher = 85;
    const team_base_zone = 182;
    const torrid_zone = 183;
    const trader = 34;
    const tushkano = 36;
    const tushkano_s = 110;
    const wpn_ak74 = 142;
    const wpn_ak74_s = 124;
    const wpn_ammo = 38;
    const wpn_ammo_m209 = 40;
    const wpn_ammo_og7b = 41;
    const wpn_ammo_vog25 = 42;
    const wpn_binocular = 143;
    const wpn_binocular_s = 125;
    const wpn_bm16 = 144;
    const wpn_bm16_s = 126;
    const wpn_fn2000 = 145;
    const wpn_fort = 146;
    const wpn_grenade_f1 = 58;
    const wpn_grenade_fake = 59;
    const wpn_grenade_launcher = 147;
    const wpn_grenade_rgd5 = 62;
    const wpn_grenade_rpg7 = 63;
    const wpn_groza = 148;
    const wpn_groza_s = 127;
    const wpn_hpsa = 149;
    const wpn_hpsa_s = 128;
    const wpn_knife = 150;
    const wpn_knife_s = 129;
    const wpn_lr300 = 151;
    const wpn_lr300_s = 130;
    const wpn_mounted = 152;
    const wpn_pm = 153;
    const wpn_pm_s = 131;
    const wpn_rg6 = 154;
    const wpn_rg6_s = 132;
    const wpn_rpg7 = 155;
    const wpn_rpg7_s = 133;
    const wpn_scope = 156;
    const wpn_scope_s = 134;
    const wpn_shotgun = 157;
    const wpn_shotgun_s = 135;
    const wpn_silencer = 158;
    const wpn_stat_mgun = 159;
    const wpn_svd = 160;
    const wpn_svd_s = 136;
    const wpn_svu = 161;
    const wpn_svu_s = 137;
    const wpn_usp45 = 162;
    const wpn_usp45_s = 138;
    const wpn_val = 163;
    const wpn_val_s = 139;
    const wpn_vintorez = 164;
    const wpn_vintorez_s = 140;
    const wpn_walther = 165;
    const wpn_walther_s = 141;
    const wpn_wmagaz = 166;
    const wpn_wmaggl = 167;
    const zombie = 37;
    const zombie_s = 111;
    const zone = 184;
    const zone_acid_fog = 172;
    const zone_bfuzz = 174;
    const zone_bfuzz_s = 168;
    const zone_dead = 175;
    const zone_galant_s = 169;
    const zone_galantine = 176;
    const zone_mbald_s = 170;
    const zone_mincer = 178;
    const zone_mincer_s = 171;
    const zone_mosquito_bald = 177;
    const zone_radioactive = 180;
    const zone_rusty_hair = 181;

};

C++ class memory_info : visible_memory_object {
    property hit_info;
    property last_level_time;
    property level_time;
    property object_info;
    property self_info;
    property sound_info;
    property visual_info;

    function object(const game_memory_object&);
};

C++ class MonsterSpace {
    const head_anim_angry = 1;
    const head_anim_glad = 2;
    const head_anim_kind = 3;
    const head_anim_normal = 0;
    const sound_script = 128;

};

C++ class not_yet_visible_object {
    property value;

    function object(const not_yet_visible_object&);
};

C++ class CSightParams {
    const eSightTypeCover = 5;
    const eSightTypeCoverLookOver = 8;
    const eSightTypeCurrentDirection = 0;
    const eSightTypeDirection = 2;
    const eSightTypeDummy = -1;
    const eSightTypeFireObject = 9;
    const eSightTypeFirePosition = 10;
    const eSightTypeLookOver = 7;
    const eSightTypeObject = 4;
    const eSightTypePathDirection = 1;
    const eSightTypePosition = 3;
    const eSightTypeSearch = 6;

    property m_object;
    property m_sight_type;
    property m_vector;

    CSightParams ();

};

C++ class sound_memory_object : game_memory_object {
    property last_level_time;
    property level_time;
    property object_info;
    property power;
    property self_info;

    function object(const game_memory_object&);
    function type() const;
};

C++ class visible_memory_object : game_memory_object {
    property last_level_time;
    property level_time;
    property object_info;
    property self_info;

    function object(const game_memory_object&);
};

C++ class FS_item {
    function Modif();
	function ModifDigitOnly()
    function NameShort();
    function NameFull();
    function Size();
};

C++ class RPoint {
    property A;
    property P;

    RPoint ();

};

C++ class color {
    property b;
    property g;
    property r;

    color ();
    color (number, number, number);

    function set(number, number, number);
};

C++ class SDrawStaticStruct {
    property m_endTime;

    function wnd();
};

C++ class duality {
    property h;
    property v;

    duality ();
    duality (number, number);

    function set(number, number);
};

C++ class memory_object {
    property last_level_time;
    property level_time;

};

C++ class noise {
    property fps;
    property grain;
    property intensity;

    noise ();
    noise (number, number, number);

    function set(number, number, number);
};

C++ class object_params {
    property level_vertex;
    property position;

};

C++ class effector_params {
    property blur;
    property color_add;
    property color_base;
    property color_gray;
    property dual;
    property gray;
    property noise;

    effector_params ();

    function assign(effector_params*, effector_params*);
};

C++ class SZoneMapEntityData {
    property color;
    property pos;

    SZoneMapEntityData ();

};

C++ class TEX_INFO {
    function get_rect();
    function get_file_name();
};

C++ class fs_file {
    property modif;
    property name;
    property ptr;
    property size_compressed;
    property size_real;
    property vfs;

};

C++ class game_PlayerState {
    property GameID;
    property LastBuyAcount;
    property RespawnTime;
    property Skip;
    property deaths;
    property flags;
    property kills;
    property lasthitter;
    property lasthitweapon;
    property money_delta;
    property money_for_round;
    property money_total;
    property pItemList;
    property ping;
    property skin;
    property team;

    game_PlayerState ();

    function clear();
    function setName(string);
    function testFlag(number);
    function net_Import(net_packet&);
    function resetFlag(number);
    function net_Export(net_packet&);
    function getName();
    function setFlag(number);
};

C++ class DIK_keys {
    const DIK_0 = 11;
    const DIK_1 = 2;
    const DIK_2 = 3;
    const DIK_3 = 4;
    const DIK_4 = 5;
    const DIK_5 = 6;
    const DIK_6 = 7;
    const DIK_7 = 8;
    const DIK_8 = 9;
    const DIK_9 = 10;
    const DIK_A = 30;
    const DIK_ADD = 78;
    const DIK_APOSTROPHE = 40;
    const DIK_APPS = 221;
    const DIK_AT = 145;
    const DIK_AX = 150;
    const DIK_B = 48;
    const DIK_BACK = 14;
    const DIK_BACKSLASH = 43;
    const DIK_C = 46;
    const DIK_CAPITAL = 58;
    const DIK_CIRCUMFLEX = 144;
    const DIK_COLON = 146;
    const DIK_COMMA = 51;
    const DIK_CONVERT = 121;
    const DIK_D = 32;
    const DIK_DECIMAL = 83;
    const DIK_DELETE = 211;
    const DIK_DIVIDE = 181;
    const DIK_DOWN = 208;
    const DIK_E = 18;
    const DIK_END = 207;
    const DIK_EQUALS = 13;
    const DIK_ESCAPE = 1;
    const DIK_F = 33;
    const DIK_F1 = 59;
    const DIK_F10 = 68;
    const DIK_F11 = 87;
    const DIK_F12 = 88;
    const DIK_F13 = 100;
    const DIK_F14 = 101;
    const DIK_F15 = 102;
    const DIK_F2 = 60;
    const DIK_F3 = 61;
    const DIK_F4 = 62;
    const DIK_F5 = 63;
    const DIK_F6 = 64;
    const DIK_F7 = 65;
    const DIK_F8 = 66;
    const DIK_F9 = 67;
    const DIK_G = 34;
    const DIK_GRAVE = 41;
    const DIK_H = 35;
    const DIK_HOME = 199;
    const DIK_I = 23;
    const DIK_INSERT = 210;
    const DIK_J = 36;
    const DIK_K = 37;
    const DIK_KANA = 112;
    const DIK_KANJI = 148;
    const DIK_L = 38;
    const DIK_LBRACKET = 26;
    const DIK_LCONTROL = 29;
    const DIK_LEFT = 203;
    const DIK_LMENU = 56;
    const DIK_LSHIFT = 42;
    const DIK_LWIN = 219;
    const DIK_M = 50;
    const DIK_MINUS = 12;
    const DIK_MULTIPLY = 55;
    const DIK_N = 49;
    const DIK_NEXT = 209;
    const DIK_NOCONVERT = 123;
    const DIK_NUMLOCK = 69;
    const DIK_NUMPAD0 = 82;
    const DIK_NUMPAD1 = 79;
    const DIK_NUMPAD2 = 80;
    const DIK_NUMPAD3 = 81;
    const DIK_NUMPAD4 = 75;
    const DIK_NUMPAD5 = 76;
    const DIK_NUMPAD6 = 77;
    const DIK_NUMPAD7 = 71;
    const DIK_NUMPAD8 = 72;
    const DIK_NUMPAD9 = 73;
    const DIK_NUMPADCOMMA = 179;
    const DIK_NUMPADENTER = 156;
    const DIK_NUMPADEQUALS = 141;
    const DIK_O = 24;
    const DIK_P = 25;
    const DIK_PAUSE = 197;
    const DIK_PERIOD = 52;
    const DIK_PRIOR = 201;
    const DIK_Q = 16;
    const DIK_R = 19;
    const DIK_RBRACKET = 27;
    const DIK_RCONTROL = 157;
    const DIK_RETURN = 28;
    const DIK_RIGHT = 205;
    const DIK_RMENU = 184;
    const DIK_RSHIFT = 54;
    const DIK_RWIN = 220;
    const DIK_S = 31;
    const DIK_SCROLL = 70;
    const DIK_SEMICOLON = 39;
    const DIK_SLASH = 53;
    const DIK_SPACE = 57;
    const DIK_STOP = 149;
    const DIK_SUBTRACT = 74;
    const DIK_SYSRQ = 183;
    const DIK_T = 20;
    const DIK_TAB = 15;
    const DIK_U = 22;
    const DIK_UNDERLINE = 147;
    const DIK_UNLABELED = 151;
    const DIK_UP = 200;
    const DIK_V = 47;
    const DIK_W = 17;
    const DIK_X = 45;
    const DIK_Y = 21;
    const DIK_YEN = 125;
    const DIK_Z = 44;
    const MOUSE_1 = 256;
    const MOUSE_2 = 512;
    const MOUSE_3 = 1024;

};

C++ class color_animator {
    color_animator (string);

    function calculate(number);
    function load(string);
    function length();
};

C++ class profile_timer {
    profile_timer ();
    profile_timer (profile_timer&);

    operator +(const profile_timer&, profile_timer);
    function stop();
    function start();
    function time() const;
    function __tostring(profile_timer&);
    operator <(const profile_timer&, profile_timer);
};

C++ class token {
    property id;
    property name;

    token ();

};

C++ class action_base {
    property object;
    property storage;

    action_base ();
    action_base (game_object*);
    action_base (game_object*, string);

    function finalize();
    function add_precondition(const world_property&);
    function execute();
    function remove_precondition(const number&);
    function setup(game_object*, property_storage*);
    function set_weight(const number&);
    function add_effect(const world_property&);
    function show(string);
    function weight(const world_state&, const world_state&) const;
    function initialize();
    function remove_effect(const number&);
};

C++ class action_planner {
    property object;
    property storage;

    action_planner ();

    function initialized() const;
    function remove_action(const number&);
    function action(const number&);
    function add_action(const number&, action_base*);
    function show(string);
    function update();
    function clear();
    function evaluator(const number&);
    function setup(game_object*);
    function set_goal_world_state(action_planner*, world_state*);
    function current_action();
    function add_evaluator(const number&, property_evaluator*);
    function remove_evaluator(const number&);
    function current_action_id() const;
    function actual(const action_planner*);
};

C++ class planner_action : action_planner,action_base {
    property object;
    property storage;

    planner_action ();
    planner_action (game_object*);
    planner_action (game_object*, string);

    function finalize();
    function action(const number&);
    function add_precondition(const world_property&);
    function add_action(const number&, action_base*);
    function update();
    function weight(const world_state&, const world_state&) const;
    function current_action();
    function current_action_id() const;
    function initialized() const;
    function remove_effect(const number&);
    function initialize();
    function actual(const action_planner*);
    function remove_action(const number&);
    function remove_precondition(const number&);
    function execute();
    function clear();
    function evaluator(const number&);
    function set_goal_world_state(action_planner*, world_state*);
    function set_weight(const number&);
    function add_effect(const world_property&);
    function show(string);
    function setup(game_object*);
    function setup(game_object*, property_storage*);
    function remove_evaluator(const number&);
    function add_evaluator(const number&, property_evaluator*);
};

C++ class world_state {
    world_state ();
    world_state (world_state);

    function clear();
    function includes(const world_state&) const;
    operator ==(const world_state&, world_state);
    function remove_property(const number&);
    function add_property(const world_property&);
    operator <(const world_state&, world_state);
    function property(const number&) const;
};

C++ class world_property {
    world_property (number, boolean);

    function value() const;
    operator <(const world_property&, world_property);
    function condition() const;
    operator ==(const world_property&, world_property);
};

C++ class property_evaluator {
    property object;
    property storage;

    property_evaluator ();
    property_evaluator (game_object*);
    property_evaluator (game_object*, string);

    function evaluate();
    function setup(game_object*, property_storage*);
};

C++ class property_evaluator_const : property_evaluator {
    property object;
    property storage;

    property_evaluator_const (boolean);

    function evaluate();
    function setup(game_object*, property_storage*);
};

C++ class ipure_alife_load_object {
};

C++ class ipure_alife_save_object {
};

C++ class ipure_alife_load_save_object : ipure_alife_load_object,ipure_alife_save_object {
};

C++ class Fbox {
    property max;
    property min;

    Fbox ();

};

C++ class ZoneMapEntities {
    function push_back(SZoneMapEntityData&);
};

C++ class CAI_Bloodsucker : CGameObject {
    CAI_Bloodsucker ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CAI_Boar : CGameObject {
    CAI_Boar ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CAI_Dog : CGameObject {
    CAI_Dog ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CAI_Flesh : CGameObject {
    CAI_Flesh ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CAI_PseudoDog : CGameObject {
    CAI_PseudoDog ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CAI_Stalker : CGameObject {
    CAI_Stalker ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CAI_Trader : CGameObject {
    CAI_Trader ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CALifeHumanBrain : CALifeMonsterBrain {
    function movement(const CALifeMonsterBrain*);
    function update();
};

C++ class CALifeMonsterBrain {
    function movement(const CALifeMonsterBrain*);
    function update();
	function can_choose_alife_tasks(bool)
};

C++ class CALifeMonsterDetailPathManager {
    function completed() const;
    function target(const number&, const number&, const vector&);
    function target(const number&);
    function target(const CALifeSmartTerrainTask*);
    function failed() const;
    function speed	(const number&);
    function speed	() const;
    function actual() const;
};

C++ class CALifeMonsterMovementManager {
    function completed() const;
    function patrol(const CALifeMonsterMovementManager*);
    function actual() const;
    function path_type(const enum MovementManager::EPathType&);
    function path_type() const;
    function detail(const CALifeMonsterMovementManager*);
};

C++ class CALifeMonsterPatrolPathManager {
    function path(string);
    function target_game_vertex_id() const;
    function target_position(CALifeMonsterPatrolPathManager*);
    function target_level_vertex_id() const;
    function completed() const;
    function route_type(const enum PatrolPathManager::EPatrolRouteType&);
    function route_type() const;
    function use_randomness(const boolean&);
    function use_randomness() const;
    function start_type(const enum PatrolPathManager::EPatrolStartType&);
    function start_type() const;
    function start_vertex_index(const number&);
    function actual() const;
};

C++ class alife_simulator {
    function level_name(const alife_simulator*, number);
    function dont_has_info(const alife_simulator*, const number&, string);
    function create_ammo(alife_simulator*, string, const vector&, number, number, number, number);
    function add_out_restriction(alife_simulator*, cse_alife_monster_abstract*, number);
    function set_interactive(number, boolean);
    function add_in_restriction(alife_simulator*, cse_alife_monster_abstract*, number);
    function remove_in_restriction(alife_simulator*, cse_alife_monster_abstract*, number);
    function level_id(alife_simulator*);
    function valid_object_id(const alife_simulator*, number);
    function remove_out_restriction(alife_simulator*, cse_alife_monster_abstract*, number);
    function switch_distance() const;
    function switch_distance(number);
    function kill_entity(cse_alife_monster_abstract*, const number&, cse_alife_schedulable*);
    function kill_entity(alife_simulator*, cse_alife_monster_abstract*, const number&);
    function kill_entity(alife_simulator*, cse_alife_monster_abstract*);
    function set_switch_online(number, boolean);
    function set_switch_offline(number, boolean);
    function has_info(const alife_simulator*, const number&, string);
    function remove_all_restrictions(number, const enum RestrictionSpace::ERestrictorTypes&);
    function object(const alife_simulator*, number);
    function object(const alife_simulator*, string);
    function object(const alife_simulator*, number, boolean);
    function actor(const alife_simulator*);
    function story_object(const alife_simulator*, number);
    function spawn_id(alife_simulator*, number);
    function release(alife_simulator*, cse_abstract*, boolean);
    function create(alife_simulator*, number);
    function create(alife_simulator*, string, const vector&, number, number, number);
    function create(alife_simulator*, string, const vector&, number, number);
};

C++ class CALifeSmartTerrainTask {
    CALifeSmartTerrainTask (string);
    CALifeSmartTerrainTask (string, number);

    function level_vertex_id() const;
    function position() const;
    function game_vertex_id() const;
};

C++ class CBastArtefact : CGameObject {
    CBastArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CBlackDrops : CGameObject {
    CBlackDrops ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CBlackGraviArtefact : CGameObject {
    CBlackGraviArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CBlend {
};

C++ class CBurer : CGameObject {
    CBurer ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CCar : CGameObject,holder {
    const eWpnActivate = 3;
    const eWpnAutoFire = 5;
    const eWpnDesiredDir = 1;
    const eWpnDesiredPos = 2;
    const eWpnFire = 4;
    const eWpnToDefaultDir = 6;

    CCar ();

    function _construct();
    function GetfHealth() const;
    function CurrentVel();
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function SetParam(number, vector);
    function net_Export(net_packet&);
    function Visual();
    function IsObjectVisible(game_object*);
    function SetExplodeTime(number);
    function net_Import(net_packet&);
    function HasWeapon();
    function SetfHealth(number);
    function engaged();
    function ExplodeTime();
    function FireDirDiff();
    function CarExplode();
    function CanHit();
    function getEnabled() const;
    function Action(number, number);
    function use(CGameObject*);
};

C++ class CCat : CGameObject {
    CCat ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CChimera : CGameObject {
    CChimera ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class client_spawn_manager {
    function remove(number, number);
    function add(number, number, const function<void>&, object);
    function add(number, number, const function<void>&);
};

C++ class CConsole {
    function execute_script(string);
    function get_string(string);
    function execute(string);
    function get_bool(CConsole*, string);
    function get_float(CConsole*, string);
    function get_integer(CConsole*, string);
    function get_token(string);
    function show();
    function hide();
};

C++ class CController : CGameObject {
    CController ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class cover_point {
    function level_vertex_id() const;
    function position() const;
};

C++ class danger_object {
    const attack_sound = 1;
    const attacked = 5;
    const bullet_ricochet = 0;
    const enemy_sound = 7;
    const entity_attacked = 2;
    const entity_corpse = 4;
    const entity_death = 3;
    const grenade = 6;
    const hit = 2;
    const sound = 1;
    const visual = 0;

    function type() const;
    function time() const;
    operator ==(const danger_object&, danger_object);
    function position(const danger_object*);
    function object(const danger_object*);
    function perceive_type() const;
    function dependent_object(const danger_object*);
};

C++ class CDialogHolder {
    function start_stop_menu(CUIDialogWnd*, boolean);
    function RemoveDialogToRender(CUIWindow*);
    function AddDialogToRender(CUIWindow*);
    function MainInputReceiver();
};

C++ class CDummyArtefact : CGameObject {
    CDummyArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class cef_storage {
    function evaluate(cef_storage*, string, game_object*);
    function evaluate(cef_storage*, string, game_object*, game_object*);
    function evaluate(cef_storage*, string, game_object*, game_object*, game_object*);
    function evaluate(cef_storage*, string, game_object*, game_object*, game_object*, game_object*);
    function evaluate(cef_storage*, string, cse_alife_object*);
    function evaluate(cef_storage*, string, cse_alife_object*, cse_alife_object*);
    function evaluate(cef_storage*, string, cse_alife_object*, cse_alife_object*, cse_alife_object*);
    function evaluate(cef_storage*, string, cse_alife_object*, cse_alife_object*, cse_alife_object*, cse_alife_object*);
};

C++ class CElectricBall : CGameObject {
    CElectricBall ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class explosive {
    function explode();
};

C++ class CF1 : CGameObject {
    CF1 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CFadedBall : CGameObject {
    CFadedBall ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CFracture : CGameObject {
    CFracture ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CGalantineArtefact : CGameObject {
    CGalantineArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CGameFont {
    const alCenter = 2;
    const alLeft = 0;
    const alRight = 1;

};

C++ class CGameGraph {
    function vertex_id(const GameGraph__CVertex*) const;
    function accessible(const CGameGraph*, const number&);
    function accessible(const CGameGraph*, const number&, boolean);
    function vertex(const number&) const;
    function valid_vertex_id(const number&) const;
};

C++ class CGameObject : DLL_Pure,ISheduled,ICollidable,IRenderable {
    CGameObject ();

    function Visual();
    function getEnabled() const;
    function _construct();
    function net_Import(net_packet&);
    function getVisible() const;
    function net_Export(net_packet&);
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CGameTask {
    CGameTask ();

    function get_objective(number);
    function get_title();
    function get_id();
    function add_objective(SGameTaskObjective*);
    function set_title(string);
    function load(string);
    function get_objectives_cnt();
};

C++ class CGraviArtefact : CGameObject {
    CGraviArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CHairsZone : CGameObject {
    CHairsZone ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class hanging_lamp : CGameObject {
    hanging_lamp ();

    function Visual();
    function getEnabled() const;
    function net_Import(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function turn_on();
    function turn_off();
    function net_Export(net_packet&);
    function _construct();
    function use(CGameObject*);
};

C++ class CHelicopter {
    const eAlive = 0;
    const eBodyByPath = 0;
    const eBodyToPoint = 1;
    const eDead = 1;
    const eEnemyEntity = 2;
    const eEnemyNone = 0;
    const eEnemyPoint = 1;
    const eMovLanding = 4;
    const eMovNone = 0;
    const eMovPatrolPath = 2;
    const eMovRoundPath = 3;
    const eMovTakeOff = 5;
    const eMovToPoint = 1;

    property m_dead;
    property m_exploded;
    property m_flame_started;
    property m_light_started;
    property m_max_mgun_dist;
    property m_max_rocket_dist;
    property m_min_mgun_dist;
    property m_min_rocket_dist;
    property m_syncronize_rocket;
    property m_time_between_rocket_attack;
    property m_use_mgun_on_attack;
    property m_use_rocket_on_attack;

    function TurnEngineSound(boolean);
    function TurnLighting(boolean);
    function GetMaxVelocity();
    function GetfHealth() const;
    function SetSpeedInDestPoint(number);
    function GetMovementState();
    function SetOnPointRangeDist(number);
    function SetFireTrailLength(number);
    function GetRealAltitude();
    function LookAtPoint(vector, boolean);
    function GetOnPointRangeDist();
    function GoPatrolByPatrolPath(string, number);
    function GetCurrVelocity();
    function Explode();
    function SetBarrelDirTolerance(number);
    function GetBodyState();
    function GetSpeedInDestPoint(number);
    function isVisible(game_object*);
    function Die();
    function UseFireTrail();
    function UseFireTrail(boolean);
    function SetDestPosition(vector*);
    function GoPatrolByRoundPath(vector, number, boolean);
    function SetMaxVelocity(number);
    function SetfHealth(number);
    function StartFlame();
    function GetState();
    function GetDistanceToDestPosition();
    function GetHuntState();
    function GetCurrVelocityVec();
    function GetSafeAltitude();
    function ClearEnemy();
    function SetEnemy(game_object*);
    function SetEnemy(vector*);
};

C++ class holder {
    function engaged();
    function Action(number, number);
    function SetParam(number, vector);
};

C++ class CKinematicsAnimated {
    function PlayCycle(CKinematicsAnimated*, string);
};

C++ class FS {
    const FS_ClampExt = 4;
    const FS_ListFiles = 1;
    const FS_ListFolders = 2;
    const FS_RootOnly = 8;
    const FS_sort_by_modif_down = 5;
    const FS_sort_by_modif_up = 4;
    const FS_sort_by_name_down = 1;
    const FS_sort_by_name_up = 0;
    const FS_sort_by_size_down = 3;
    const FS_sort_by_size_up = 2;

    function get_file_age(string);
    function file_length(string);
    function file_rename(string, string, boolean);
    function r_open(string, string);
    function r_open(string);
    function append_path(string, string, string, number);
    function file_copy(string, string);
    function get_file_age_str(FS*, string);
    function dir_delete(FS*, string, number);
    function dir_delete(FS*, string, string, number);
    function update_path(FS*, string, string);
    function r_close(reader*&);
    function exist(string);
    function exist(string, string);
    function w_close(class IWriter*&);
    function file_list_open(FS*, string, number);
    function file_list_open(FS*, string, string, number);
    function path_exist(string);
    function file_list_open_ex(FS*, string, number, string);
    function get_path(string);
    function file_delete(string, string);
    function file_delete(string);
    function w_open(string, string);
    function w_open(string);
};

C++ class CMercuryBall : CGameObject {
    CMercuryBall ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CMincer : CGameObject {
    CMincer ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CMosquitoBald : CGameObject {
    CMosquitoBald ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class object_factory {
    function register(string, string, string, string);
    function register(string, string, string);
};

C++ class particle_params {
    particle_params ();
    particle_params (const vector&);
    particle_params (const vector&, const vector&);
    particle_params (const vector&, const vector&, const vector&);

};

C++ class patrol {
    const continue = 1;
    const custom = 3;
    const dummy = -1;
    const nearest = 2;
    const next = 4;
    const start = 0;
    const stop = 0;

    patrol (string);
    patrol (string, enum PatrolPathManager::EPatrolStartType);
    patrol (string, enum PatrolPathManager::EPatrolStartType, enum PatrolPathManager::EPatrolRouteType);
    patrol (string, enum PatrolPathManager::EPatrolStartType, enum PatrolPathManager::EPatrolRouteType, boolean);
    patrol (string, enum PatrolPathManager::EPatrolStartType, enum PatrolPathManager::EPatrolRouteType, boolean, number);

    function level_vertex_id(number) const;
    function point(const patrol*, number);
    function flag(number, number) const;
    function game_vertex_id(number) const;
    function flags(number) const;
    function name(number) const;
    function index(string) const;
    function terminal(number) const;
    function count() const;
    function get_nearest(const vector&) const;
};

C++ class CPhrase {
    function GetPhraseScript();
};

C++ class CPhraseDialog {
    function AddPhrase(string, number, number, number);
};

C++ class CPhraseScript {
    function AddHasInfo(string);
    function AddGiveInfo(string);
    function AddDisableInfo(string);
    function AddDontHasInfo(string);
    function AddAction(string);
    function AddPrecondition(string);
};

C++ class physics_element {
    function get_density();
    function get_mass();
    function is_fixed();
    function is_breakable();
    function get_volume();
    function get_linear_vel(vector&);
    function fix();
    function get_angular_vel(vector&);
    function apply_force(number, number, number);
    function release_fixed();
    function global_transform(physics_element*);
};

C++ class physics_joint {
    function set_limits(number, number, number);
    function get_axis_angle(number);
    function get_anchor(vector&);
    function get_axis_dir(number, vector&);
    function get_bone_id();
    function is_breakable();
    function set_max_force_and_velocity(number, number, number);
    function set_axis_dir_global(number, number, number, number);
    function get_first_element();
    function set_axis_dir_vs_second_element(number, number, number, number);
    function get_axes_number();
    function set_joint_spring_dumping_factors(number, number);
    function set_axis_spring_dumping_factors(number, number, number);
    function set_anchor_vs_first_element(number, number, number);
    function get_stcond_element();
    function set_anchor_global(number, number, number);
    function get_limits(number&, number&, number);
    function set_anchor_vs_second_element(number, number, number);
    function set_axis_dir_vs_first_element(number, number, number, number);
    function get_max_force_and_velocity(number&, number&, number);
};

C++ class physics_shell {
    function get_joints_number();
    function is_breaking_blocked();
    function get_element_by_bone_id(number);
    function get_linear_vel(vector&);
    function is_breakable();
    function get_elements_number();
    function unblock_breaking();
    function get_joint_by_bone_name(string);
    function get_element_by_order(number);
    function get_element_by_bone_name(string);
    function apply_force(number, number, number);
    function get_angular_vel(vector&);
    function block_breaking();
    function get_joint_by_order(number);
    function get_joint_by_bone_id(number);
};

C++ class CPoltergeist : CGameObject {
    CPoltergeist ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class property_storage {
    property_storage ();

    function property(const number&) const;
    function set_property(const number&, const boolean&);
};

C++ class CPseudoGigant : CGameObject {
    CPseudoGigant ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CPsyDog : CGameObject {
    CPsyDog ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CPsyDogPhantom : CGameObject {
    CPsyDogPhantom ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class cpure_server_object : ipure_server_object {
};

C++ class CRGD5 : CGameObject {
    CRGD5 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class render_device {
    property aspect_ratio;
    property cam_dir;
    property cam_pos;
    property cam_right;
    property cam_top;
    property f_time_delta;
    property fov;
    property frame;
    property height;
    property precache_frame;
    property time_delta;
    property width;

    function time_global(const render_device*);
    function is_paused(render_device*);
    function pause(render_device*, boolean);
};

C++ class CRustyHairArtefact : CGameObject {
    CRustyHairArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class cse_anomalous_zone : cse_custom_zone {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_anomalous_zone (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function interactive() const;
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function spawn_artefacts();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_car : cse_alife_dynamic_object_visual,cse_ph_skeleton {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_car (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_creature_abstract : cse_alife_dynamic_object_visual {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_creature_abstract (string);

    function on_death(cse_abstract*);
    function on_before_register();
    function can_save() const;
    function health() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function g_team();
    function alive() const;
    function g_group();
    function g_squad();
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_creature_actor : cse_alife_creature_abstract,cse_alife_trader_abstract,cse_ph_skeleton {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_creature_actor (string);

    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function g_squad();
    function clsid() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function profile_name(cse_alife_trader_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function used_ai_locations() const;
    function community() const;
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function on_before_register();
    function g_team();
    function STATE_Write(net_packet&);
    function interactive() const;
    function reputation();
    function can_save() const;
    function on_unregister();
    function OnEvent(net_packet&, number, number, ClientID);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function STATE_Read(net_packet&, number);
    function health() const;
    function move_offline() const;
    function move_offline(boolean);
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function g_group();
    function rank();
};

C++ class cse_alife_creature_crow : cse_alife_creature_abstract {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_creature_crow (string);

    function on_death(cse_abstract*);
    function on_before_register();
    function can_save() const;
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function g_squad();
    function alive() const;
    function on_unregister();
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function used_ai_locations() const;
    function init();
    function STATE_Write(net_packet&);
    function section_name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function interactive() const;
    function STATE_Read(net_packet&, number);
    function health() const;
    function keep_saved_data_anyway() const;
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function g_group();
    function g_team();
};

C++ class cse_alife_creature_phantom : cse_alife_creature_abstract {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_creature_phantom (string);

    function on_death(cse_abstract*);
    function on_before_register();
    function can_save() const;
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function g_squad();
    function alive() const;
    function on_unregister();
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function used_ai_locations() const;
    function init();
    function STATE_Write(net_packet&);
    function section_name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function interactive() const;
    function STATE_Read(net_packet&, number);
    function health() const;
    function keep_saved_data_anyway() const;
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function g_group();
    function g_team();
};

C++ class cse_custom_zone : cse_alife_dynamic_object,cse_shape {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_custom_zone (string);

    function on_before_register();
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function move_offline() const;
    function move_offline(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function can_save() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function used_ai_locations() const;
    function keep_saved_data_anyway() const;
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_spawn();
};

C++ class cse_alife_dynamic_object : cse_alife_object {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_dynamic_object (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function keep_saved_data_anyway() const;
    function visible_for_map() const;
    function visible_for_map(boolean);
    function on_register();
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function on_before_register();
    function init();
    function on_spawn();
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function section_name(const cse_abstract*);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function move_offline() const;
    function move_offline(boolean);
};

C++ class cse_alife_dynamic_object_visual : cse_alife_dynamic_object,cse_visual {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_dynamic_object_visual (string);

    function on_before_register();
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function move_offline() const;
    function move_offline(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function can_save() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function used_ai_locations() const;
    function keep_saved_data_anyway() const;
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_spawn();
};

C++ class cse_alife_graph_point : cse_abstract {
    property id;
    property parent_id;
    property position;
    property script_version;

    cse_alife_graph_point (string);

    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function UPDATE_Read(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function UPDATE_Write(net_packet&);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function clsid() const;
};

C++ class cse_alife_group_abstract {
};

C++ class cse_alife_helicopter : cse_alife_dynamic_object_visual,cse_motion,cse_ph_skeleton {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_helicopter (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_human_abstract : cse_alife_trader_abstract,cse_alife_monster_abstract {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_human_abstract (string);

    function on_register();
    function brain(cse_alife_monster_abstract*);
    function brain(cse_alife_human_abstract*);
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function smart_terrain_id(cse_alife_monster_abstract*);
    function clsid() const;
    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function profile_name(cse_alife_trader_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function on_before_register();
    function community() const;
    function set_rank(number);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function g_group();
    function clear_smart_terrain(cse_alife_monster_abstract*);
    function smart_terrain_task_deactivate(cse_alife_monster_abstract*);
    function on_spawn();
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function health() const;
    function g_team();
    function move_offline() const;
    function move_offline(boolean);
    function used_ai_locations() const;
    function reputation();
    function can_save() const;
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function OnEvent(net_packet&, number, number, ClientID);
    function update();
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function g_squad();
    function smart_terrain_task_activate(cse_alife_monster_abstract*);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function rank();
};

C++ class cse_alife_human_stalker : cse_alife_human_abstract,cse_ph_skeleton {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_human_stalker (string);

    function can_save() const;
    function brain(cse_alife_monster_abstract*);
    function brain(cse_alife_human_abstract*);
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function g_team();
    function clsid() const;
    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function profile_name(cse_alife_trader_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function clear_smart_terrain(cse_alife_monster_abstract*);
    function community() const;
    function set_rank(number);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function move_offline() const;
    function move_offline(boolean);
    function on_unregister();
    function smart_terrain_task_deactivate(cse_alife_monster_abstract*);
    function used_ai_locations() const;
    function smart_terrain_task_activate(cse_alife_monster_abstract*);
    function g_squad();
    function interactive() const;
    function smart_terrain_id(cse_alife_monster_abstract*);
    function update();
    function reputation();
    function on_before_register();
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function OnEvent(net_packet&, number, number, ClientID);
    function on_register();
    function STATE_Read(net_packet&, number);
    function health() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function g_group();
    function rank();
};

C++ class cse_alife_inventory_item {
};

C++ class cse_alife_item : cse_alife_dynamic_object_visual,cse_alife_inventory_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_item_ammo : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_ammo (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_artefact : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_artefact (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_bolt : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_bolt (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_custom_outfit : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_custom_outfit (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_detector : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_detector (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_document : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_document (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_explosive : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_explosive (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_grenade : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_grenade (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_pda : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_pda (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_torch : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_torch (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_weapon : cse_alife_item {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_weapon (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function bfUseful();
    function clsid() const;
    function on_register();
    function keep_saved_data_anyway() const;
    function section_name(const cse_abstract*);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function move_offline() const;
    function move_offline(boolean);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function on_before_register();
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function UPDATE_Read(net_packet&);
};

C++ class cse_alife_item_weapon_magazined : cse_alife_item_weapon {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_weapon_magazined (string);

    function used_ai_locations() const;
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function can_save() const;
    function move_offline() const;
    function move_offline(boolean);
    function on_spawn();
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function on_before_register();
    function init();
    function interactive() const;
    function OnEvent(net_packet&, number, number, ClientID);
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function bfUseful();
    function keep_saved_data_anyway() const;
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function can_switch_offline() const;
    function can_switch_offline(boolean);
};

C++ class cse_alife_item_weapon_magazined_w_gl : cse_alife_item_weapon_magazined {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_weapon_magazined_w_gl (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function clsid() const;
    function UPDATE_Read(net_packet&);
    function on_register();
    function keep_saved_data_anyway() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function bfUseful();
    function init();
    function name(const cse_abstract*);
    function section_name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function move_offline() const;
    function move_offline(boolean);
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_before_register();
};

C++ class cse_alife_item_weapon_shotgun : cse_alife_item_weapon {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_item_weapon_shotgun (string);

    function used_ai_locations() const;
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function can_save() const;
    function move_offline() const;
    function move_offline(boolean);
    function on_spawn();
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function on_before_register();
    function init();
    function interactive() const;
    function OnEvent(net_packet&, number, number, ClientID);
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function bfUseful();
    function keep_saved_data_anyway() const;
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function can_switch_offline() const;
    function can_switch_offline(boolean);
};

C++ class cse_alife_level_changer : cse_alife_space_restrictor {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_level_changer (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_monster_abstract : cse_alife_creature_abstract,cse_alife_schedulable {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_monster_abstract (string);

    function can_save() const;
    function update();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function g_team();
    function clsid() const;
    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function used_ai_locations() const;
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function smart_terrain_task_activate(cse_alife_monster_abstract*);
    function smart_terrain_task_deactivate(cse_alife_monster_abstract*);
    function interactive() const;
    function brain(cse_alife_monster_abstract*);
    function on_before_register();
    function clear_smart_terrain(cse_alife_monster_abstract*);
    function smart_terrain_id(cse_alife_monster_abstract*);
    function on_register();
    function g_squad();
    function on_unregister();
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function OnEvent(net_packet&, number, number, ClientID);
    function move_offline() const;
    function move_offline(boolean);
    function STATE_Read(net_packet&, number);
    function health() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function g_group();
    function rank();
};

C++ class cse_alife_monster_base : cse_alife_monster_abstract,cse_ph_skeleton {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_monster_base (string);

    function on_register();
    function update();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function smart_terrain_id(cse_alife_monster_abstract*);
    function clsid() const;
    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function on_before_register();
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function clear_smart_terrain(cse_alife_monster_abstract*);
    function smart_terrain_task_deactivate(cse_alife_monster_abstract*);
    function g_group();
    function g_squad();
    function on_spawn();
    function used_ai_locations() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function health() const;
    function brain(cse_alife_monster_abstract*);
    function can_save() const;
    function g_team();
    function OnEvent(net_packet&, number, number, ClientID);
    function move_offline() const;
    function move_offline(boolean);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function smart_terrain_task_activate(cse_alife_monster_abstract*);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function rank();
};

C++ class cse_alife_monster_zombie : cse_alife_monster_abstract {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_monster_zombie (string);

    function on_register();
    function update();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function smart_terrain_id(cse_alife_monster_abstract*);
    function clsid() const;
    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function on_before_register();
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function clear_smart_terrain(cse_alife_monster_abstract*);
    function smart_terrain_task_deactivate(cse_alife_monster_abstract*);
    function g_group();
    function g_squad();
    function on_spawn();
    function used_ai_locations() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function health() const;
    function brain(cse_alife_monster_abstract*);
    function can_save() const;
    function g_team();
    function OnEvent(net_packet&, number, number, ClientID);
    function move_offline() const;
    function move_offline(boolean);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function smart_terrain_task_activate(cse_alife_monster_abstract*);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function rank();
};

C++ class cse_alife_mounted_weapon : cse_alife_dynamic_object_visual {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_mounted_weapon (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_object : cse_abstract {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_object (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function init();
    function visible_for_map() const;
    function visible_for_map(boolean);
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function STATE_Write(net_packet&);
    function interactive() const;
};

C++ class cse_alife_object_breakable : cse_alife_dynamic_object_visual {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_object_breakable (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_object_climable : cse_shape,cse_abstract {
    property id;
    property parent_id;
    property position;
    property script_version;

    cse_alife_object_climable (string);

    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function UPDATE_Read(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function UPDATE_Write(net_packet&);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function clsid() const;
};

C++ class cse_alife_object_hanging_lamp : cse_alife_dynamic_object_visual,cse_ph_skeleton {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_object_hanging_lamp (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_object_physic : cse_alife_dynamic_object_visual,cse_ph_skeleton {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_object_physic (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_object_projector : cse_alife_dynamic_object_visual {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_object_projector (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_online_offline_group : cse_alife_dynamic_object,cse_alife_schedulable {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_online_offline_group (string);

    function on_before_register();
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function move_offline() const;
    function move_offline(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function can_save() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function used_ai_locations() const;
    function keep_saved_data_anyway() const;
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_spawn();
};

C++ class cse_alife_ph_skeleton_object : cse_alife_dynamic_object_visual,cse_ph_skeleton {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_ph_skeleton_object (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_psydog_phantom : cse_alife_monster_base {
    property group;
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;
    property squad;
    property team;

    cse_alife_psydog_phantom (string);

    function can_save() const;
    function brain(cse_alife_monster_abstract*);
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function g_team();
    function clsid() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function keep_saved_data_anyway() const;
    function on_death(cse_abstract*);
    function clear_smart_terrain(cse_alife_monster_abstract*);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function alive() const;
    function used_ai_locations() const;
    function smart_terrain_task_deactivate(cse_alife_monster_abstract*);
    function on_unregister();
    function STATE_Write(net_packet&);
    function smart_terrain_task_activate(cse_alife_monster_abstract*);
    function on_before_register();
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function interactive() const;
    function g_squad();
    function on_register();
    function update();
    function OnEvent(net_packet&, number, number, ClientID);
    function smart_terrain_id(cse_alife_monster_abstract*);
    function STATE_Read(net_packet&, number);
    function health() const;
    function move_offline() const;
    function move_offline(boolean);
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function g_group();
    function rank();
};

C++ class cse_alife_schedulable : ipure_schedulable_object {
};

C++ class cse_alife_smart_zone : cse_alife_space_restrictor,cse_alife_schedulable {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_smart_zone (string);

    function on_before_register();
    function detect_probability();
    function smart_touch(cse_alife_monster_abstract*);
    function on_spawn();
    function can_save() const;
    function update();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function unregister_npc(cse_alife_monster_abstract*);
    function register_npc(cse_alife_monster_abstract*);
    function suitable(cse_alife_monster_abstract*) const;
    function OnEvent(net_packet&, number, number, ClientID);
    function clsid() const;
    function task(cse_alife_monster_abstract*);
    function UPDATE_Read(net_packet&);
    function enabled(cse_alife_monster_abstract*) const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_space_restrictor : cse_alife_dynamic_object,cse_shape {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_space_restrictor (string);

    function on_before_register();
    function on_register();
    function can_switch_online() const;
    function can_switch_online(boolean);
    function UPDATE_Read(net_packet&);
    function clsid() const;
    function move_offline() const;
    function move_offline(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function can_save() const;
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function init();
    function section_name(const cse_abstract*);
    function name(const cse_abstract*);
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function used_ai_locations() const;
    function keep_saved_data_anyway() const;
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_spawn();
};

C++ class cse_alife_team_base_zone : cse_alife_space_restrictor {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_team_base_zone (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_torrid_zone : cse_custom_zone,cse_motion {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_torrid_zone (string);

    function on_before_register();
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function used_ai_locations() const;
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function on_register();
};

C++ class cse_alife_trader : cse_alife_dynamic_object_visual,cse_alife_trader_abstract {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_alife_trader (string);

    function on_before_register();
    function community() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function on_register();
    function used_ai_locations() const;
    function STATE_Write(net_packet&);
    function clsid() const;
    function on_spawn();
    function UPDATE_Read(net_packet&);
    function OnEvent(net_packet&, number, number, ClientID);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function keep_saved_data_anyway() const;
    function init();
    function reputation();
    function interactive() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function profile_name(cse_alife_trader_abstract*);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function move_offline() const;
    function move_offline(boolean);
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function rank();
};

C++ class cse_alife_trader_abstract {
    function profile_name(cse_alife_trader_abstract*);
    function reputation();
    function rank();
    function community() const;
};

C++ class cse_zone_visual : cse_anomalous_zone,cse_visual {
    property id;
    property m_game_vertex_id;
    property m_level_vertex_id;
    property m_story_id;
    property online;
    property parent_id;
    property position;
    property script_version;

    cse_zone_visual (string);

    function used_ai_locations() const;
    function can_save() const;
    function can_switch_online() const;
    function can_switch_online(boolean);
    function visible_for_map() const;
    function visible_for_map(boolean);
    function on_register();
    function clsid() const;
    function UPDATE_Read(net_packet&);
    function on_before_register();
    function can_switch_offline() const;
    function can_switch_offline(boolean);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function move_offline() const;
    function move_offline(boolean);
    function init();
    function name(const cse_abstract*);
    function spawn_artefacts();
    function spawn_ini(cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function STATE_Write(net_packet&);
    function STATE_Read(net_packet&, number);
    function interactive() const;
    function section_name(const cse_abstract*);
    function on_spawn();
    function UPDATE_Write(net_packet&);
    function on_unregister();
    function keep_saved_data_anyway() const;
};

C++ class cse_abstract : cpure_server_object {
    property id;
    property parent_id;
    property position;
    property script_version;

    function UPDATE_Read(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function UPDATE_Write(net_packet&);
    function STATE_Write(net_packet&);
    function clsid() const;
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
};

C++ class CSE_AbstractVisual : cse_visual,cse_abstract {
    property id;
    property parent_id;
    property position;
    property script_version;

    CSE_AbstractVisual (string);

    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function UPDATE_Read(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function getStartupAnimation();
    function OnEvent(net_packet&, number, number, ClientID);
    function UPDATE_Write(net_packet&);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function clsid() const;
};

C++ class cse_motion {
};

C++ class cse_ph_skeleton {
};

C++ class cse_shape {
};

C++ class cse_spectator : cse_abstract {
    property id;
    property parent_id;
    property position;
    property script_version;

    cse_spectator (string);

    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function UPDATE_Read(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function UPDATE_Write(net_packet&);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function clsid() const;
};

C++ class cse_temporary : cse_abstract {
    property id;
    property parent_id;
    property position;
    property script_version;

    cse_temporary (string);

    function STATE_Write(net_packet&);
    function init();
    function spawn_ini(cse_abstract*);
    function section_name(const cse_abstract*);
    function UPDATE_Read(net_packet&);
    function STATE_Read(net_packet&, number);
    function name(const cse_abstract*);
    function OnEvent(net_packet&, number, number, ClientID);
    function UPDATE_Write(net_packet&);
    function FillProps(string, class xr_vector<class PropItem *,class xalloc<class PropItem *> >&);
    function clsid() const;
};

C++ class cse_visual {
};

C++ class CSavedGameWrapper {
    CSavedGameWrapper (string);

    function level_name(const CSavedGameWrapper*);
    function level_id() const;
    function game_time(const CSavedGameWrapper*);
    function actor_health() const;
};

C++ class CScope : CGameObject {
    CScope ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class cond {
    const act_end = 128;
    const anim_end = 4;
    const look_end = 2;
    const move_end = 1;
    const object_end = 32;
    const sound_end = 8;
    const time_end = 64;

    cond ();
    cond (number);
    cond (number, double);

};

C++ class anim {
    const attack = 6;
    const danger = 0;
    const eat = 3;
    const free = 1;
    const lie_idle = 2;
    const look_around = 7;
    const panic = 2;
    const rest = 5;
    const sit_idle = 1;
    const sleep = 4;
    const stand_idle = 0;
    const turn = 8;

    anim ();
    anim (string);
    anim (string, boolean);
    anim (enum MonsterSpace::EMentalState);
    anim (enum MonsterSpace::EScriptMonsterAnimAction, number);

    function completed();
    function type(enum MonsterSpace::EMentalState);
    function anim(string);
};

C++ class object_binder {
    property object;

    object_binder (game_object*);

    function save(net_packet*);
    function update(number);
    function reload(string);
    function net_export(net_packet*);
    function net_save_relevant();
    function load(reader*);
    function net_destroy();
    function reinit();
    function net_Relcase(game_object*);
    function net_spawn(cse_alife_object*);
    function net_import(net_packet*);
};

C++ class effector {
    effector (number, number);

    function start(effector*);
    function process(effector_params*);
    function finish(effector*);
};

C++ class entity_action {
    entity_action ();
    entity_action (const entity_action*);

    function set_action(move&);
    function set_action(look&);
    function set_action(anim&);
    function set_action(sound&);
    function set_action(particle&);
    function set_action(object&);
    function set_action(cond&);
    function set_action(act&);
    function move() const;
    function particle() const;
    function completed();
    function object() const;
    function all();
    function time();
    function look() const;
    function sound() const;
    function anim() const;
};

C++ class game_object {
    const action_type_count = 6;
    const animation = 2;
    const dialog_pda_msg = 0;
    const dummy = -1;
    const enemy = 2;
    const friend = 0;
    const game_path = 0;
    const info_pda_msg = 1;
    const level_path = 1;
    const movement = 0;
    const neutral = 1;
    const no_path = 3;
    const no_pda_msg = 2;
    const object = 5;
    const particle = 4;
    const patrol_path = 2;
    const relation_attack = 1;
    const relation_fight_help_human = 2;
    const relation_fight_help_monster = 4;
    const relation_kill = 0;
    const sound = 3;
    const watch = 1;

    property health;
    property morale;
    property power;
    property psy_health;
    property radiation;

    function hide_weapon();
    function memory_time(const game_object&);
    function marked_dropped(game_object*);
    function set_trader_global_anim(string);
    function set_home(string, number, number, boolean);
    function best_item();
    function disable_info_portion(string);
    function add_animation(string);
    function add_animation(string, boolean);
    function get_script() const;
    function detail_path_type() const;
    function buy_supplies(ini_file*, string);
    function sound_voice_prefix() const;
    function patrol_path_make_inactual();
    function fake_death_stand_up();
    function external_sound_start(string);
    function critically_wounded();
    function memory_visible_objects() const;
    function who_hit_name();
    function vertex_in_direction(number, vector, number) const;
    function get_enemy() const;
    function set_detail_path_type(enum DetailPathManager::EDetailPathType);
    function sight_params();
    function extrapolate_length() const;
    function extrapolate_length(number);
    function active_item();
    function mental_state() const;
    function play_cycle(string);
    function play_cycle(string, boolean);
    function clear_animations();
    function enable_trade();
    function unload_magazine();
    function mark_item_dropped(game_object*);
    function patrol();
    function target_mental_state() const;
    function set_start_dialog(string);
    function get_enemy_strength() const;
    function range() const;
    function location_on_path(number, vector*);
    function sound_prefix() const;
    function sound_prefix(string);
    function mass() const;
    function sell_condition(ini_file*, string);
    function sell_condition(number, number);
    function section() const;
    function show_condition(ini_file*, string);
    function get_current_point_index();
    function buy_condition(ini_file*, string);
    function buy_condition(number, number);
    function make_object_visible_somewhen(game_object*);
    function is_inv_box_empty();
    function set_alien_control(boolean);
    function jump(const vector&, number);
    function accuracy() const;
    function info_clear();
    function set_tip_text_default();
    function inside(const vector&, number) const;
    function inside(const vector&) const;
    function get_start_dialog();
    function debug_planner(const action_planner*);
    function set_patrol_extrapolate_callback();
    function set_patrol_extrapolate_callback(const function<boolean>&);
    function set_patrol_extrapolate_callback(const function<boolean>&, object);
    function set_const_force(const vector&, number, number);
    function active_slot();
    function who_hit_section_name();
    function active_zone_contact(number);
    function change_team(number, number, number);
    function set_trader_sound(string, string);
    function inventory_for_each(const function<void>&);
    function direction() const;
    function kill(game_object*);
    function cost() const;
    function set_nonscript_usable(boolean);
    function body_state() const;
    function skip_transfer_enemy(boolean);
    function see(const game_object*);
    function see(string);
    function set_previous_point(number);
    function set_item(enum MonsterSpace::EObjectAction);
    function set_item(enum MonsterSpace::EObjectAction, game_object*);
    function set_item(enum MonsterSpace::EObjectAction, game_object*, number);
    function set_item(enum MonsterSpace::EObjectAction, game_object*, number, number);
    function info_add(string);
    function set_tip_text(string);
    function team() const;
    function remove_home();
    function set_condition(number);
    function set_sight(enum SightManager::ESightType, const vector*, number);
    function set_sight(enum SightManager::ESightType, boolean, boolean);
    function set_sight(enum SightManager::ESightType, const vector&, boolean);
    function set_sight(enum SightManager::ESightType, const vector*);
    function set_sight(game_object*);
    function set_sight(game_object*, boolean);
    function set_sight(game_object*, boolean, boolean);
    function set_sight(game_object*, boolean, boolean, boolean);
    function get_holder_class();
    function get_physics_shell() const;
    function remove_restrictions(string, string);
    function action_count() const;
    function money();
    function give_talk_message(string, string, Frect, string);
    function berserk();
    function get_car();
    function weapon_unstrapped() const;
    function get_helicopter();
    function name() const;
    function get_current_outfit_protection(number);
    function add_sound(string, number, enum ESoundTypes, number, number, number);
    function add_sound(string, number, enum ESoundTypes, number, number, number, string);
    function max_health() const;
    function object_count() const;
    function set_queue_size(number);
    function animation_slot() const;
    function get_current_direction();
    function action() const;
    function restore_weapon();
    function is_body_turning() const;
    function get_anomaly_power();
    function command(const entity_action*, boolean);
    function enable_anomaly();
    function enable_vision(boolean);
    function hit(hit*);
    function alive() const;
    function set_mental_state(enum MonsterSpace::EMentalState);
    function squad() const;
    function reset_action_queue();
    function target_body_state() const;
    function target_movement_type() const;
    function head_orientation() const;
    function set_desired_position();
    function set_desired_position(const vector*);
    function script(boolean, string);
    function story_id() const;
    function change_character_reputation(number);
    function binded_object();
    function character_reputation();
    function set_actor_position(vector);
    function set_character_rank(number);
    function remove_all_restrictions();
    function character_rank();
    function add_restrictions(string, string);
    function character_name();
    function get_monster_hit_info();
    function transfer_item(game_object*, game_object*);
    function enable_talk();
    function item_in_slot(number) const;
    function memory_hit_objects() const;
    function can_script_capture() const;
    function set_sound_mask(number);
    function general_goodwill(game_object*);
    function vision_enabled() const;
    function change_goodwill(number, game_object*);
    function fake_death_fall_down();
    function path_completed() const;
    function ignore_monster_threshold(number);
    function ignore_monster_threshold() const;
    function set_goodwill(number, game_object*);
    function attachable_item_enabled() const;
    function goodwill(game_object*);
    function restore_default_start_dialog();
    function set_fastcall(const function<boolean>&, object);
    function wounded() const;
    function wounded(boolean);
    function level_vertex_id() const;
    function run_talk_dialog(game_object*);
    function switch_to_talk();
    function switch_to_trade();
    function set_start_point(number);
    function in_restrictions();
    function transfer_money(number, game_object*);
    function set_fov(number);
    function profile_name();
    function relation(game_object*);
    function set_path_type(enum MovementManager::EPathType);
    function weapon_strapped() const;
    function get_ammo_total() const;
    function best_danger();
    function set_custom_panic_threshold(number);
    function restore_max_ignore_monster_distance();
    function drop_item(game_object*);
    function is_trade_enabled();
    function enable_memory_object(game_object*, boolean);
    function disable_trade();
    function is_talk_enabled();
    function disable_talk();
    function get_current_outfit() const;
    function animation_count() const;
    function set_relation(enum ALife::ERelationType, game_object*);
    function out_restrictions();
    function stop_talk();
    function enable_attachable_item(boolean);
    function is_talking();
    function give_task(CGameTask*, number, boolean);
    function set_task_state(enum ETaskState, string, number);
    function get_task_state(string, number);
    function get_info_time(string);
    function memory_sound_objects() const;
    function dont_has_info(string);
    function give_info_portion(string);
    function activate_slot(number);
    function parent() const;
    function get_hanging_lamp();
    function give_game_news(string, string, Frect, number, number);
    function accessible_nearest(const vector&, vector&);
    function set_callback(enum GameObject::ECallbackType, const function<void>&);
    function set_callback(enum GameObject::ECallbackType, const function<void>&, object);
    function set_callback(enum GameObject::ECallbackType);
    function get_corpse() const;
    function active_sound_count();
    function active_sound_count(boolean);
    function base_out_restrictions();
    function game_vertex_id() const;
    function path_type() const;
    function rank();
    function give_money(number);
    function set_anomaly_power(number);
    function movement_type() const;
    function bone_position(string) const;
    function explode(number);
    function get_ammo_in_magazine();
    function condition() const;
    function best_enemy();
    function death_time() const;
    function set_dest_level_vertex_id(number);
    function center();
    function best_cover(const vector&, const vector&, number, number, number);
    function eat(game_object*);
    function set_manual_invisibility(boolean);
    function restore_sound_threshold();
    function set_ammo_elapsed(number);
    function get_script_name() const;
    function visibility_threshold() const;
    function not_yet_visible_objects() const;
    function set_character_reputation(number);
    function safe_cover(const vector&, number, number);
    function accessible(const vector&);
    function accessible(number);
    function spawn_ini() const;
    function drop_item_and_teleport(game_object*, vector);
    function bind_object(object_binder*);
    function remove_sound(number);
    function get_current_holder();
    function position() const;
    function iterate_inventory(function<void>, object);
    function set_patrol_path(string, enum PatrolPathManager::EPatrolStartType, enum PatrolPathManager::EPatrolRouteType, boolean);
    function movement_enabled(boolean);
    function movement_enabled();
    function set_actor_direction(number);
    function best_weapon();
    function set_body_state(enum MonsterSpace::EBodyState);
    function set_range(number);
    function character_community();
    function action_by_index(number);
    function get_sound_info();
    function set_invisible(boolean);
    function max_ignore_monster_distance(const number&);
    function max_ignore_monster_distance() const;
    function restore_ignore_monster_threshold();
    function base_in_restrictions();
    function level_vertex_light(const number&) const;
    function set_trader_head_anim(string);
    function has_info(string);
    function set_enemy_callback();
    function set_enemy_callback(const function<boolean>&);
    function set_enemy_callback(const function<boolean>&, object);
    function play_sound(number);
    function play_sound(number, number);
    function play_sound(number, number, number);
    function play_sound(number, number, number, number);
    function play_sound(number, number, number, number, number);
    function play_sound(number, number, number, number, number, number);
    function set_desired_direction();
    function set_desired_direction(const vector*);
    function set_character_community(string, number, number);
    function get_actor_relation_flags() const;
    function disable_anomaly();
    function motivation_action_manager(game_object*);
    function id() const;
    function clsid() const;
    function set_sound_threshold(number);
    function memory_position(const game_object&);
    function set_movement_type(enum MonsterSpace::EMovementType);
    function external_sound_stop();
    function object(string);
    function object(number);
    function fov() const;
    function set_default_panic_threshold();
    function set_actor_relation_flags(flags32);
    function get_bleeding() const;
    function group() const;
};

C++ class hit {
    const burn = 0;
    const chemical_burn = 6;
    const dummy = 10;
    const explosion = 7;
    const fire_wound = 8;
    const radiation = 4;
    const shock = 1;
    const strike = 2;
    const telepatic = 5;
    const wound = 3;

    property direction;
    property draftsman;
    property impulse;
    property power;
    property type;

    hit ();
    hit (const hit*);

    function bone(string);
};

C++ class ini_file {
    ini_file (string);

    function line_count(string);
    function r_bool(string, string);
    function section_exist(string);
    function r_float(string, string);
    function r_clsid(string, string);
    function r_s32(string, string);
    function r_line(ini_file*, string, number, string&, string&);
    function r_token(string, string, const token_list&);
    function r_vector(string, string);
    function r_u32(string, string);
    function r_string_wq(string, string);
    function r_string(string, string);
    function line_exist(string, string);
};

C++ class act {
    const attack = 2;
    const eat = 1;
    const panic = 3;
    const rest = 0;

    act ();
    act (enum MonsterSpace::EScriptMonsterGlobalAction);
    act (enum MonsterSpace::EScriptMonsterGlobalAction, game_object*);

};

C++ class MonsterHitInfo {
    property direction;
    property time;
    property who;

};

C++ class move {
    const back = 4;
    const criteria = 2;
    const crouch = 0;
    const curve = 0;
    const curve_criteria = 2;
    const default = 0;
    const dodge = 1;
    const down = 64;
    const drag = 3;
    const force = 1;
    const fwd = 2;
    const handbrake = 128;
    const jump = 4;
    const left = 8;
    const line = 0;
    const none = 1;
    const off = 512;
    const on = 256;
    const right = 16;
    const run = 1;
    const run_fwd = 2;
    const stand = 2;
    const standing = 1;
    const steal = 5;
    const up = 32;
    const walk = 0;
    const walk_bkwd = 1;
    const walk_fwd = 0;

    move ();
    move (enum CScriptMovementAction::EInputKeys);
    move (enum CScriptMovementAction::EInputKeys, number);
    move (enum MonsterSpace::EBodyState, enum MonsterSpace::EMovementType, enum DetailPathManager::EDetailPathType, game_object*);
    move (enum MonsterSpace::EBodyState, enum MonsterSpace::EMovementType, enum DetailPathManager::EDetailPathType, game_object*, number);
    move (enum MonsterSpace::EBodyState, enum MonsterSpace::EMovementType, enum DetailPathManager::EDetailPathType, const patrol&);
    move (enum MonsterSpace::EBodyState, enum MonsterSpace::EMovementType, enum DetailPathManager::EDetailPathType, const patrol&, number);
    move (enum MonsterSpace::EBodyState, enum MonsterSpace::EMovementType, enum DetailPathManager::EDetailPathType, const vector&);
    move (enum MonsterSpace::EBodyState, enum MonsterSpace::EMovementType, enum DetailPathManager::EDetailPathType, const vector&, number);
    move (const vector&, number);
    move (enum MonsterSpace::EScriptMonsterMoveAction, vector&);
    move (enum MonsterSpace::EScriptMonsterMoveAction, patrol&);
    move (enum MonsterSpace::EScriptMonsterMoveAction, game_object*);
    move (enum MonsterSpace::EScriptMonsterMoveAction, vector&, number);
    move (enum MonsterSpace::EScriptMonsterMoveAction, number, vector&);
    move (enum MonsterSpace::EScriptMonsterMoveAction, number, vector&, number);
    move (enum MonsterSpace::EScriptMonsterMoveAction, patrol&, number);
    move (enum MonsterSpace::EScriptMonsterMoveAction, game_object*, number);
    move (enum MonsterSpace::EScriptMonsterMoveAction, vector&, number, enum MonsterSpace::EScriptMonsterSpeedParam);
    move (enum MonsterSpace::EScriptMonsterMoveAction, patrol&, number, enum MonsterSpace::EScriptMonsterSpeedParam);
    move (enum MonsterSpace::EScriptMonsterMoveAction, game_object*, number, enum MonsterSpace::EScriptMonsterSpeedParam);

    function completed();
    function path(enum DetailPathManager::EDetailPathType);
    function move(enum MonsterSpace::EMovementType);
    function position(const vector&);
    function input(enum CScriptMovementAction::EInputKeys);
    function patrol(const class CPatrolPath*, class shared_str);
    function object(game_object*);
    function body(enum MonsterSpace::EBodyState);
};

C++ class object {
    const activate = 15;
    const aim1 = 4;
    const aim2 = 5;
    const deactivate = 16;
    const drop = 10;
    const dummy = -1;
    const fire1 = 6;
    const fire2 = 7;
    const hide = 21;
    const idle = 8;
    const reload = 2;
    const reload1 = 2;
    const reload2 = 3;
    const show = 20;
    const strap = 9;
    const switch1 = 0;
    const switch2 = 1;
    const take = 22;
    const turn_off = 19;
    const turn_on = 18;
    const use = 17;

    object ();
    object (game_object*, enum MonsterSpace::EObjectAction);
    object (game_object*, enum MonsterSpace::EObjectAction, number);
    object (enum MonsterSpace::EObjectAction);
    object (string, enum MonsterSpace::EObjectAction);

    function completed();
    function object(string);
    function object(game_object*);
    function action(enum MonsterSpace::EObjectAction);
};

C++ class particle {
    particle ();
    particle (string, string);
    particle (string, string, const particle_params&);
    particle (string, string, const particle_params&, boolean);
    particle (string, const particle_params&);
    particle (string, const particle_params&, boolean);

    function set_velocity(const vector&);
    function set_position(const vector&);
    function set_bone(string);
    function set_angles(const vector&);
    function completed();
    function set_particle(string, boolean);
};

C++ class particles_object {
    particles_object (string);

    function pause_path(boolean);
    function play_at_pos(const vector&);
    function move_to(const vector&, const vector&);
    function looped() const;
    function load_path(string);
    function start_path(boolean);
    function stop();
    function stop_path();
    function stop_deffered();
    function play();
    function playing() const;
};

C++ class rtoken_list {
    rtoken_list ();

    function clear();
    function remove(number);
    function count();
    function get(number);
    function add(string);
};

C++ class sound_object {
    const looped = 1;
    const s2d = 2;
    const s3d = 0;

    property frequency;
    property max_distance;
    property min_distance;
    property volume;

    sound_object (string);
    sound_object (string, enum ESoundTypes);

    function set_position(const vector&);
    function stop_deffered();
    function get_position() const;
    function play_no_feedback(game_object*, number, number, vector, number);
    function play_at_pos(game_object*, const vector&);
    function play_at_pos(game_object*, const vector&, number);
    function play_at_pos(game_object*, const vector&, number, number);
    function stop();
    function length();
    function play(game_object*);
    function play(game_object*, number);
    function play(game_object*, number, number);
    function playing() const;
};

C++ class sound {
    const attack = 3;
    const attack_hit = 4;
    const die = 7;
    const eat = 2;
    const idle = 1;
    const panic = 11;
    const steal = 10;
    const take_damage = 5;
    const threaten = 9;

    sound ();
    sound (string, string);
    sound (string, string, const vector&);
    sound (string, string, const vector&, const vector&);
    sound (string, string, const vector&, const vector&, boolean);
    sound (string, const vector&);
    sound (string, const vector&, const vector&);
    sound (string, const vector&, const vector&, boolean);
    sound (sound_object&, string, const vector&);
    sound (sound_object&, string, const vector&, const vector&);
    sound (sound_object&, string, const vector&, const vector&, boolean);
    sound (sound_object&, const vector&);
    sound (sound_object&, const vector&, const vector&);
    sound (sound_object&, const vector&, const vector&, boolean);
    sound (enum MonsterSound::EType);
    sound (enum MonsterSound::EType, number);
    sound (string, string, enum MonsterSpace::EMonsterHeadAnimType);

    function set_sound(string);
    function set_sound(const sound_object&);
    function set_position(const vector&);
    function set_bone(string);
    function set_angles(const vector&);
    function set_sound_type(enum ESoundTypes);
    function completed();
};

C++ class SoundInfo {
    property danger;
    property position;
    property power;
    property time;
    property who;

};

C++ class token_list {
    token_list ();

    function clear();
    function remove(string);
    function name(number);
    function id(string);
    function add(string, number);
};

C++ class look {
    const cur_dir = 0;
    const danger = 5;
    const direction = 2;
    const fire_point = 10;
    const path_dir = 1;
    const point = 3;
    const search = 6;

    look ();
    look (enum SightManager::ESightType);
    look (enum SightManager::ESightType, vector&);
    look (enum SightManager::ESightType, game_object*);
    look (enum SightManager::ESightType, game_object*, string);
    look (const vector&, number, number);
    look (game_object*, number, number);

    function completed();
    function type(enum SightManager::ESightType);
    function object(game_object*);
    function bone(string);
    function direct(const vector&);
};

C++ class CScriptXmlInit {
    CScriptXmlInit ();

    function InitSpinText(string, CUIWindow*);
    function InitTab(string, CUIWindow*);
    function InitStatic(string, CUIWindow*);
    function InitList(string, CUIWindow*);
    function InitTrackBar(string, CUIWindow*);
    function InitSpinFlt(string, CUIWindow*);
    function ParseShTexInfo(string);
    function InitLabel(string, CUIWindow*);
    function InitSpinNum(string, CUIWindow*);
    function InitMapList(string, CUIWindow*);
    function ParseFile(string);
    function InitCDkey(string, CUIWindow*);
    function InitKeyBinding(string, CUIWindow*);
    function InitMMShniaga(string, CUIWindow*);
    function InitWindow(string, number, CUIWindow*);
    function InitEditBox(string, CUIWindow*);
    function InitCheck(string, CUIWindow*);
    function InitAutoStaticGroup(string, CUIWindow*);
    function InitScrollView(string, CUIWindow*);
    function InitMapInfo(string, CUIWindow*);
    function InitServerList(string, CUIWindow*);
    function Init3tButton(string, CUIWindow*);
    function InitAnimStatic(string, CUIWindow*);
    function InitFrameLine(string, CUIWindow*);
    function InitComboBox(string, CUIWindow*);
    function InitButton(string, CUIWindow*);
    function InitFrame(string, CUIWindow*);
	function InitProgressBar(string, CUIWindow*);
};

C++ class ce_script_zone : DLL_Pure {
    ce_script_zone ();

    function _construct();
};

C++ class CServerList : CUIWindow {
    CServerList ();

    function SetPlayerName(string);
    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetFilters(SServerFilters&);
    function RefreshList(boolean);
    function SetSortFunc(string, boolean);
    function SetAutoDelete(boolean);
    function NetRadioChanged(boolean);
    function ShowServerInfo();
    function RefreshQuick();
    function AttachChild(CUIWindow*);
    function GetWidth() const;
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function ConnectToSelected();
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class ce_smart_zone : DLL_Pure {
    ce_smart_zone ();

    function _construct();
};

C++ class CSnork : CGameObject {
    CSnork ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class sound_params {
    property frequency;
    property max_distance;
    property min_distance;
    property position;
    property volume;

};

C++ class CSpaceRestrictor : CGameObject {
    CSpaceRestrictor ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CStalkerOutfit : CGameObject {
    CStalkerOutfit ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class stalker_ids {
    const action_accomplish_task = 7;
    const action_aim_enemy = 16;
    const action_alife_planner = 57;
    const action_anomaly_planner = 59;
    const action_combat_planner = 58;
    const action_communicate_with_customer = 9;
    const action_critically_wounded = 36;
    const action_danger_by_sound_planner = 42;
    const action_danger_grenade_look_around = 54;
    const action_danger_grenade_planner = 41;
    const action_danger_grenade_search = 55;
    const action_danger_grenade_take_cover = 51;
    const action_danger_grenade_take_cover_after_explosion = 53;
    const action_danger_grenade_wait_for_explosion = 52;
    const action_danger_in_direction_detour = 49;
    const action_danger_in_direction_hold_position = 48;
    const action_danger_in_direction_look_out = 47;
    const action_danger_in_direction_planner = 40;
    const action_danger_in_direction_search = 50;
    const action_danger_in_direction_take_cover = 46;
    const action_danger_planner = 60;
    const action_danger_unknown_look_around = 44;
    const action_danger_unknown_planner = 39;
    const action_danger_unknown_search = 45;
    const action_danger_unknown_take_cover = 43;
    const action_dead = 0;
    const action_death_planner = 56;
    const action_detour_enemy = 25;
    const action_dying = 1;
    const action_find_ammo = 15;
    const action_find_item_to_kill = 13;
    const action_gather_items = 2;
    const action_get_distance = 24;
    const action_get_item_to_kill = 12;
    const action_get_ready_to_kill = 17;
    const action_hold_position = 23;
    const action_kill_enemy = 19;
    const action_kill_enemy_if_not_visible = 29;
    const action_kill_if_enemy_critically_wounded = 37;
    const action_kill_if_player_on_the_path = 35;
    const action_kill_wounded_enemy = 33;
    const action_look_out = 22;
    const action_make_item_killing = 14;
    const action_no_alife = 3;
    const action_post_combat_wait = 34;
    const action_prepare_wounded_enemy = 32;
    const action_reach_customer_location = 8;
    const action_reach_task_location = 6;
    const action_reach_wounded_enemy = 30;
    const action_retreat_from_enemy = 20;
    const action_script = 61;
    const action_search_enemy = 26;
    const action_smart_terrain_task = 4;
    const action_solve_zone_puzzle = 5;
    const action_sudden_attack = 28;
    const action_take_cover = 21;
    const detect_anomaly = 11;
    const get_out_of_anomaly = 10;
    const property_alife = 3;
    const property_alive = 0;
    const property_already_dead = 2;
    const property_anomaly = 42;
    const property_cover_actual = 38;
    const property_cover_reached = 39;
    const property_critically_wounded = 29;
    const property_danger = 8;
    const property_danger_by_sound = 37;
    const property_danger_grenade = 36;
    const property_danger_in_direction = 35;
    const property_danger_unknown = 34;
    const property_dead = 1;
    const property_enemy = 7;
    const property_enemy_critically_wounded = 30;
    const property_enemy_detoured = 21;
    const property_found_ammo = 12;
    const property_found_item_to_kill = 10;
    const property_grenade_exploded = 41;
    const property_in_cover = 18;
    const property_inside_anomaly = 43;
    const property_item_can_kill = 11;
    const property_item_to_kill = 9;
    const property_items = 6;
    const property_looked_around = 40;
    const property_looked_out = 19;
    const property_panic = 17;
    const property_position_holded = 20;
    const property_pure_enemy = 23;
    const property_puzzle_solved = 4;
    const property_ready_to_detour = 14;
    const property_ready_to_kill = 13;
    const property_script = 44;
    const property_see_enemy = 15;
    const property_smart_terrain_task = 5;
    const property_use_crouch_to_look_out = 24;
    const property_use_suddenness = 22;
    const sound_alarm = 4;
    const sound_attack_allies_several_enemies = 7;
    const sound_attack_allies_single_enemy = 6;
    const sound_attack_no_allies = 5;
    const sound_backup = 8;
    const sound_detour = 9;
    const sound_die = 0;
    const sound_die_in_anomaly = 1;
    const sound_enemy_critically_wounded = 21;
    const sound_enemy_killed_or_wounded = -805302272;
    const sound_friendly_grenade_alarm = 17;
    const sound_grenade_alarm = 16;
    const sound_humming = 3;
    const sound_injuring = 2;
    const sound_injuring_by_friend = 12;
    const sound_kill_wounded = 20;
    const sound_need_backup = 18;
    const sound_panic_human = 13;
    const sound_panic_monster = 14;
    const sound_running_in_danger = 19;
    const sound_script = 23;
    const sound_search1_no_allies = 11;
    const sound_search1_with_allies = 10;
    const sound_tolls = 15;

};

C++ class CThornArtefact : CGameObject {
    CThornArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CTorch : CGameObject {
    CTorch ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CTushkano : CGameObject {
    CTushkano ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CUI3tButton : CUIButton {
    CUI3tButton ();

    function SetHighlightColor(number);
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function SetTextX(number);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function GetHeading();
    function EnableTextHighlighting(boolean);
    function SetStretchTexture(boolean);
    function SetColor(number);
    function ClipperOn();
    function GetFont();
    function SetAutoDelete(boolean);
    function GetClipperState();
    function SetTextColor(number, number, number, number);
    function SetHeading(number);
    function AttachChild(CUIWindow*);
    function GetTextY();
    function SetWndPos(number, number);
    function SetOriginalRect(number, number, number, number);
    function GetTextAlign();
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function SetTextureOffset(number, number);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetText(string);
    function SetTextST(string);
    function InitTexture(string);
    function GetStretchTexture();
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function IsAutoDelete();
};

C++ class CUIButton : CUIStatic {
    CUIButton ();

    function SetHighlightColor(number);
    function GetTextY();
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function GetClipperState();
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function GetHeading();
    function GetFont();
    function SetStretchTexture(boolean);
    function EnableTextHighlighting(boolean);
    function ClipperOn();
    function IsAutoDelete();
    function SetAutoDelete(boolean);
    function SetTextX(number);
    function SetTextColor(number, number, number, number);
    function SetWndPos(number, number);
    function AttachChild(CUIWindow*);
    function SetWindowName(string);
    function GetStretchTexture();
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function GetTextAlign();
    function SetTextST(string);
    function SetText(string);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetTextureOffset(number, number);
    function SetOriginalRect(number, number, number, number);
    function InitTexture(string);
    function SetHeading(number);
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function SetColor(number);
};

C++ class CUICaption {
    function addCustomMessage(const class shared_str&, number, number, number, CGameFont*, enum CGameFont::EAligment, number, string);
    function setCaption(const class shared_str&, string, number, boolean);
};

C++ class CUICheckButton : CUI3tButton {
    CUICheckButton ();

    function SetHighlightColor(number);
    function GetTextY();
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function GetClipperState();
    function GetCheck();
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function SetDependControl(CUIWindow*);
    function GetHeading();
    function EnableTextHighlighting(boolean);
    function SetStretchTexture(boolean);
    function GetStretchTexture();
    function IsAutoDelete();
    function ClipperOn();
    function GetFont();
    function SetAutoDelete(boolean);
    function SetTextX(number);
    function SetTextColor(number, number, number, number);
    function SetCheck(boolean);
    function AttachChild(CUIWindow*);
    function SetWindowName(string);
    function SetWndPos(number, number);
    function SetTextST(string);
    function GetTextAlign();
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function SetText(string);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetTextureOffset(number, number);
    function SetOriginalRect(number, number, number, number);
    function InitTexture(string);
    function SetHeading(number);
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function SetColor(number);
};

C++ class CUIComboBox : CUIWindow {
    CUIComboBox ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetAutoDelete(boolean);
    function SetListLength(number);
    function SetFont(CGameFont*);
    function CurrentID();
    function AttachChild(CUIWindow*);
    function GetWidth() const;
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(number, number, number);
    function SetVertScroll(boolean);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetCurrentID(number);
    function IsAutoDelete();
    function AddItem(string);
    function GetText();
};

C++ class CUICustomEdit : CUIWindow {
    function GetFont();
    function SetNumbersOnly(boolean);
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetTextPosX(number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function GetTextAlignment();
    function GetText();
    function SetAutoDelete(boolean);
    function SetTextAlignment(enum CGameFont::EAligment);
    function SetTextColor(number);
    function GetTextColor();
    function AttachChild(CUIWindow*);
    function SetText(string);
    function SetWndPos(number, number);
    function SetTextPosY(number);
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUICustomSpin : CUIWindow {
	void Init(float x, float y, float width, float height);
    const char* GetText();
};

C++ class CUIDialogWnd : CUIWindow {
    CDialogHolder* GetHolder();
    void           SetHolder(CDialogHolder*);
};

C++ class CUIScriptWnd : CUIDialogWnd,DLL_Pure {
    CUIScriptWnd ();

    function _construct();
    function Register(CUIWindow*);
    function Register(CUIWindow*, string);
    function Enable(boolean);
    function SetHeight(number);
    function GetFrameLineWnd(string);
    function SetHolder(CDialogHolder*);
    function GetWidth() const;
    function GetCheckButton(string);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetListWndEx(string);
    function IsEnabled();
    function ResetPPMode();
    function GetPropertiesBox(string);
    function GetFont();
    function Update();
    function AddCallback(string, number, const function<void>&);
    function AddCallback(string, number, const function<void>&, object);
    function GetButton(string);
    function SetAutoDelete(boolean);
    function OnKeyboard(number, enum EUIMessages);
    function Dispatch(number, number);
    function GetListWnd(string);
    function AttachChild(CUIWindow*);
    function GetStatic(string);
    function SetWndPos(number, number);
    function GetTabControl(string);
    function GetRadioButton(string);
    function Init(number, number, number, number);
    function Init(Frect*);
    function GetFrameWindow(string);
    function WindowName();
    function GetDialogWnd(string);
    function GetHolder();
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetEditBox(string);
    function SetWindowName(string);
    function GetProgressBar(string);
    function GetMessageBox(string);
    function SetWndSize(number, number);
    function Load(string);
    function IsAutoDelete();
};

C++ class CUIEditBox : CUICustomEdit {
    CUIEditBox ();

    function GetWidth() const;
    function GetTextAlignment();
    function AttachChild(CUIWindow*);
    function SetWindowName(string);
    function Enable(boolean);
    function SetText(string);
    function SetTextPosX(number);
    function SetFont(CGameFont*);
    function ResetPPMode();
    function GetText();
    function SetAutoDelete(boolean);
    function GetTextColor();
    function SetTextColor(number);
    function Show(boolean);
    function SetNumbersOnly(boolean);
    function DetachChild(CUIWindow*);
    function SetWndPos(number, number);
    function SetTextPosY(number);
    function WindowName();
    function Init(number, number, number, number);
    function Init(Frect*);
    function SetPPMode();
    function SetTextAlignment(enum CGameFont::EAligment);
    function IsShown();
    function GetFont();
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function InitTexture(string);
    function IsEnabled();
    function SetWndSize(number, number);
    function SetHeight(number);
    function IsAutoDelete();
};

C++ class CUIEditBoxEx : CUICustomEdit {
    CUIEditBoxEx ();

    function GetWidth() const;
    function GetTextAlignment();
    function AttachChild(CUIWindow*);
    function SetWindowName(string);
    function Enable(boolean);
    function SetText(string);
    function SetTextPosX(number);
    function SetFont(CGameFont*);
    function ResetPPMode();
    function GetText();
    function SetAutoDelete(boolean);
    function GetTextColor();
    function SetTextColor(number);
    function Show(boolean);
    function SetNumbersOnly(boolean);
    function DetachChild(CUIWindow*);
    function SetWndPos(number, number);
    function SetTextPosY(number);
    function WindowName();
    function Init(number, number, number, number);
    function Init(Frect*);
    function SetPPMode();
    function SetTextAlignment(enum CGameFont::EAligment);
    function IsShown();
    function GetFont();
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function InitTexture(string);
    function IsEnabled();
    function SetWndSize(number, number);
    function SetHeight(number);
    function IsAutoDelete();
};

C++ class CUIFrameLineWnd : CUIWindow {
    CUIFrameLineWnd ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetAutoDelete(boolean);
    function SetOrientation(boolean);
    function GetTitleStatic();
    function AttachChild(CUIWindow*);
    function SetColor(number);
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number, boolean);
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUIFrameWindow : CUIWindow {
    CUIFrameWindow ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetAutoDelete(boolean);
    function GetTitleStatic();
    function AttachChild(CUIWindow*);
    function SetColor(number);
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUIGameCustom {
    function AddCustomMessage(string, number, number, number, CGameFont*, number, number);
    function AddCustomMessage(string, number, number, number, CGameFont*, number, number, number);
    function GetCustomStatic(string);
    function RemoveCustomStatic(string);
    function RemoveCustomMessage(string);
    function AddCustomStatic(string, boolean);
    function CustomMessageOut(string, string, number);
    function RemoveDialogToRender(CUIWindow*);
    function AddDialogToRender(CUIWindow*);
};

C++ class CUILabel : CUIFrameLineWnd {
    CUILabel ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function SetAutoDelete(boolean);
    function SetOrientation(boolean);
    function SetText(string);
    function IsAutoDelete();
    function AttachChild(CUIWindow*);
    function SetFont(CGameFont*);
    function SetWndPos(number, number);
    function ResetPPMode();
    function DetachChild(CUIWindow*);
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number, boolean);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function Show(boolean);
    function GetTitleStatic();
    function GetHeight() const;
    function SetWidth(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function IsEnabled();
    function SetWndSize(number, number);
    function GetWidth() const;
    function SetColor(number);
};

C++ class CUIListItem : CUIButton {
    CUIListItem ();

    function SetHighlightColor(number);
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function SetTextX(number);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function GetHeading();
    function EnableTextHighlighting(boolean);
    function SetStretchTexture(boolean);
    function SetColor(number);
    function ClipperOn();
    function GetFont();
    function SetAutoDelete(boolean);
    function GetClipperState();
    function SetTextColor(number, number, number, number);
    function SetHeading(number);
    function AttachChild(CUIWindow*);
    function GetTextY();
    function SetWndPos(number, number);
    function SetOriginalRect(number, number, number, number);
    function GetTextAlign();
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function SetTextureOffset(number, number);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetText(string);
    function SetTextST(string);
    function InitTexture(string);
    function GetStretchTexture();
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function IsAutoDelete();
};

C++ class CUIListItemEx : CUIListItem {
    CUIListItemEx ();

    function SetHighlightColor(number);
    function SetSelectionColor(number);
    function GetTextY();
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function GetClipperState();
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function GetHeading();
    function EnableTextHighlighting(boolean);
    function SetStretchTexture(boolean);
    function IsAutoDelete();
    function ClipperOn();
    function GetFont();
    function SetAutoDelete(boolean);
    function SetTextX(number);
    function SetTextColor(number, number, number, number);
    function GetStretchTexture();
    function AttachChild(CUIWindow*);
    function SetWindowName(string);
    function SetWndPos(number, number);
    function SetTextST(string);
    function GetTextAlign();
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function SetText(string);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetTextureOffset(number, number);
    function SetOriginalRect(number, number, number, number);
    function InitTexture(string);
    function SetHeading(number);
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function SetColor(number);
};

C++ class CUIListItemPair : CUIListItemEx {
    CUIListItemPair ();

    function SetHighlightColor(number);
    function SetSelectionColor(number);
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function SetTextX(number);
    function SetTextFileName(string);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function SetBorder(number);
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function GetBorder();
    function SetFontDateTime(CGameFont*);
    function GetHeading();
    function EnableTextHighlighting(boolean);
    function SetFontFileName(CGameFont*);
    function SetOriginalRect(number, number, number, number);
    function SetStretchTexture(boolean);
    function SetTextDateTime(string);
    function GetTextFileName();
    function SetColor(number);
    function ClipperOn();
    function GetFont();
    function SetAutoDelete(boolean);
    function GetClipperState();
    function SetTextColor(number, number, number, number);
    function SetHeading(number);
    function AttachChild(CUIWindow*);
    function GetTextY();
    function GetStretchTexture();
    function GetTextDateTime();
    function GetTextAlign();
    function SetTextST(string);
    function SetTextureOffset(number, number);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetText(string);
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function InitTexture(string);
    function SetWndPos(number, number);
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function IsAutoDelete();
};

C++ class CUIListWnd : CUIWindow {
    CUIListWnd ();

    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function ActivateList(boolean);
    function ScrollToBegin();
    function GetVertFlip();
    function GetWidth() const;
    function GetSize();
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function IsEnabled();
    function ResetPPMode();
    function SetItemHeight(number);
    function GetFont();
    function EnableScrollBar(boolean);
    function GetItemPos(CUIListItem*);
    function ResetFocusCapture();
    function GetSelectedItem();
    function SetAutoDelete(boolean);
    function ShowSelectedItem(boolean);
    function SetTextColor(number);
    function GetFocusedItem();
    function AttachChild(CUIWindow*);
    function SetFocusedItem(number);
    function SetWndPos(number, number);
    function ScrollToEnd();
    function IsListActive();
    function Init(number, number, number, number);
    function Init(Frect*);
    function IsScrollBarEnabled();
    function WindowName();
    function SetVertFlip(boolean);
    function GetLongestSignWidth();
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function ScrollToPos(number);
    function RemoveAll();
    function RemoveItem(number);
    function AddItem(CUIListItem*);
    function SetWndSize(number, number);
    function GetItem(number);
    function IsAutoDelete();
};

C++ class CUIMMShniaga : CUIWindow {
    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetAutoDelete(boolean);
    function AttachChild(CUIWindow*);
    function SetVisibleMagnifier(boolean);
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUIMapInfo : CUIWindow {
    CUIMapInfo ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function InitMap(string);
    function SetAutoDelete(boolean);
    function AttachChild(CUIWindow*);
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUIMapList : CUIWindow {
    CUIMapList ();

    function SetWindowName(string);
    function SaveMapList();
    function SetHeight(number);
    function GetCommandLine(string);
    function GetWidth() const;
    function GetCurGameType();
    function SetServerParams(string);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function SetWeatherSelector(CUIComboBox*);
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function IsEnabled();
    function ResetPPMode();
    function GetFont();
    function StartDedicatedServer();
    function SetModeSelector(CUISpinText*);
    function OnModeChange();
    function SetAutoDelete(boolean);
    function AttachChild(CUIWindow*);
    function SetWndPos(number, number);
    function SetMapPic(CUIStatic*);
    function Init(number, number, number, number);
    function Init(Frect*);
    function WindowName();
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function IsEmpty();
    function SetMapInfo(CUIMapInfo*);
    function Enable(boolean);
    function SetWndSize(number, number);
    function LoadMapList();
    function IsAutoDelete();
};

C++ class CUIMessageBox : CUIStatic {
    CUIMessageBox ();

    void   Init(LPCSTR box_template);
    void   SetText(LPCSTR str);
    LPCSTR GetHost();
    LPCSTR GetPassword();
};

C++ class CUIMessageBoxEx : CUIDialogWnd {
    CUIMessageBoxEx ();

    void   Init(LPCSTR xml_template);
    void   SetText(LPCSTR text);
    LPCSTR GetHost();
    LPCSTR GetPassword();
};

C++ class COptionsManager {
    COptionsManager ();

    void  SendMessage2Group(const char* group, const char* message);
    void  SaveBackupValues(const char* group);
    bool  IsGroupChanged(const char* group);
    void  SaveValues(const char* group);
    void  SetCurrentValues(const char* group);
    void  UndoGroup(const char* group);
    void  OptionsPostAccept();
};

C++ class CUIProgressBar : CUIWindow {
    CUIProgressBar ();

    float		GetRange_max();
    float		GetRange_min();
//	void		SetRange(float _Min, float _Max);
	void		SetProgressPos(float pos);
	float		GetProgressPos();
};

C++ class CUIPropertiesBox : CUIFrameWindow {
    CUIPropertiesBox ();

    bool       AddItem(const char*);
    void       AutoUpdateSize();
    void       RemoveAll();
    void       RemoveItem(u32 tag);
    void       Hide();
    void       Show(int, int);
};

C++ class CUIScrollView : CUIWindow {
    CUIScrollView ();

    void   AddWindow(CUIWindow* pWnd, bool auto_delete);
    void   RemoveWindow(CUIWindow* pWnd);
    void   Clear();
    void   ScrollToBegin();
    void   ScrollToEnd();
    int    GetMinScrollPos();
    int    GetMaxScrollPos();
    int    GetCurrentScrollPos();
    void   SetScrollPos(float);
};

C++ class CUISpinFlt : CUICustomSpin {
    CUISpinFlt ();
};

C++ class CUISpinNum : CUICustomSpin {
    CUISpinNum ();
};

C++ class CUISpinText : CUICustomSpin {
    CUISpinText ();
};

C++ class CUIStatic : CUIWindow {
    CUIStatic ();

    void   SetText(LPCSTR);
    void   SetTextST(LPCSTR);
    LPCSTR GetText();
    void   SetTextX(float text_x);
    void   SetTextY(float text_y);
    float  GetTextX();
    float  GetTextY();
    void   SetColor(u32 color);
    u32    GetColor() const;
    void   SetTextColor(int a, int r, int g, int b);
    void   Init(float x, float y, float width, float height);
    void   Init(LPCSTR tex_name, float x, float y, float width, float height);
    void   InitTexture(LPCSTR texture);
    void   SetTextureOffset(float x, float y);
    void   SetOriginalRect(float x, float y, float width, float height);
    void   SetStretchTexture(bool stretch_texture);
    bool   GetStretchTexture();
    void   SetTextAlign(u32 align<CGameFont::EAligment>);
    u32    GetTextAlign();
    void   SetHeading(float f);
    float  GetHeading();
    void   ClipperOn();
    void   ClipperOff();
    bool   GetClipperState();
	void   SetVTextAlign(u32 align);	//XE
};

C++ class CUITabButton : CUIButton {
    CUITabButton ();

    function SetHighlightColor(number);
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function GetText();
    function GetColor() const;
    function GetWidth() const;
    function SetTextX(number);
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function SetFont(CGameFont*);
    function IsShown();
    function Show(boolean);
    function GetHeight() const;
    function SetWidth(number);
    function GetTextX();
    function IsEnabled();
    function ResetPPMode();
    function GetHeading();
    function EnableTextHighlighting(boolean);
    function SetStretchTexture(boolean);
    function SetColor(number);
    function ClipperOn();
    function GetFont();
    function SetAutoDelete(boolean);
    function GetClipperState();
    function SetTextColor(number, number, number, number);
    function SetHeading(number);
    function AttachChild(CUIWindow*);
    function GetTextY();
    function SetWndPos(number, number);
    function SetOriginalRect(number, number, number, number);
    function GetTextAlign();
    function Init(number, number, number, number);
    function Init(Frect*);
    function Init(string, number, number, number, number);
    function SetTextureOffset(number, number);
    function WindowName();
    function ClipperOff();
    function SetTextY(number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function SetText(string);
    function SetTextST(string);
    function InitTexture(string);
    function GetStretchTexture();
    function SetWndSize(number, number);
    function SetTextAlign(number);
    function IsAutoDelete();
};

C++ class CUITabControl : CUIWindow {
    CUITabControl ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function GetButtonByIndex(number);
    function SetNewActiveTab(number);
    function GetTabsCount() const;
    function SetAutoDelete(boolean);
    function RemoveAll();
    function GetActiveIndex();
    function RemoveItem(number);
    function AttachChild(CUIWindow*);
    function AddItem(CUITabButton*);
    function AddItem(string, string, number, number, number, number);
    function SetWndPos(number, number);
    function Init(number, number, number, number);
    function Init(Frect*);
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUITrackBar : CUIWindow {
    CUITrackBar ();

    function GetFont();
    function SetWindowName(string);
    function Enable(boolean);
    function SetHeight(number);
    function SetAutoDelete(boolean);
    function SetCheck(boolean);
    function AttachChild(CUIWindow*);
    function Init(number, number, number, number);
    function Init(Frect*);
    function SetWndPos(number, number);
    function GetCheck();
    function GetWidth() const;
    function DetachChild(CUIWindow*);
    function SetPPMode();
    function WindowName();
    function IsShown();
    function SetWndSize(number, number);
    function SetWndRect(Frect);
    function SetWndRect(number, number, number, number);
    function GetHeight() const;
    function SetWidth(number);
    function Show(boolean);
    function IsEnabled();
    function ResetPPMode();
    function SetFont(CGameFont*);
    function IsAutoDelete();
};

C++ class CUIWindow {
    CUIWindow ();

    void       AttachChild(CUIWindow* pChild);
    void       DetachChild(CUIWindow* pChild);
    void       SetAutoDelete(bool auto_delete);
    bool       IsAutoDelete();
    void       SetWndRect(Frect);
    void       SetWndRect(float x, float y, float width, float height);
    void       Init(float x, float y, float width, float height);
    void       Init(Frect*);
    void       SetWndPos(float x, float y);
    void       SetWndSize(float width, float height);	// нерабочий метод: неправильно экспортирован
    float      GetWidth() const;
    void       SetWidth(float width);
    float      GetHeight() const;
    void       SetHeight(float height);
    void       Enable(bool status);
    bool       IsEnabled();
    void       Show(bool status);
    bool       IsShown();
    void       SetFont(CGameFont* pFont);
    CGameFont* GetFont();
    shared_str WindowName() const;
    void       SetWindowName(LPCSTR wn);
    void       SetPPMode();
    void       ResetPPMode();
};

C++ class GameGraph__CVertex {
    function level_vertex_id() const;
    function game_point(const GameGraph__CVertex*);
    function level_id() const;
    function level_point(const GameGraph__CVertex*);
};

C++ class CWeaponAK74 : CGameObject {
    CWeaponAK74 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponBM16 : CGameObject {
    CWeaponBM16 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponBinoculars : CGameObject {
    CWeaponBinoculars ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponFN2000 : CGameObject {
    CWeaponFN2000 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponFORT : CGameObject {
    CWeaponFORT ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponGroza : CGameObject {
    CWeaponGroza ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponHPSA : CGameObject {
    CWeaponHPSA ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponKnife : CGameObject {
    CWeaponKnife ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponLR300 : CGameObject {
    CWeaponLR300 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponPM : CGameObject {
    CWeaponPM ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponRG6 : CGameObject {
    CWeaponRG6 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponRPG7 : CGameObject {
    CWeaponRPG7 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponSVD : CGameObject {
    CWeaponSVD ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponSVU : CGameObject {
    CWeaponSVU ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponShotgun : CGameObject {
    CWeaponShotgun ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponUSP45 : CGameObject {
    CWeaponUSP45 ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponVal : CGameObject {
    CWeaponVal ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponVintorez : CGameObject {
    CWeaponVintorez ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CWeaponWalther : CGameObject {
    CWeaponWalther ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CZombie : CGameObject {
    CZombie ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class CZudaArtefact : CGameObject {
    CZudaArtefact ();

    function Visual();
    function _construct();
    function getEnabled() const;
    function net_Import(net_packet&);
    function net_Export(net_packet&);
    function getVisible() const;
    function net_Spawn(cse_abstract*);
    function use(CGameObject*);
};

C++ class ClientID {
    ClientID ();

    function value() const;
    operator ==(ClientID&, ClientID);
    function set(number);
};

C++ class DLL_Pure {
    DLL_Pure ();

    function _construct();
};

C++ class FS_file_list {
    function Free();
    function GetAt(number);
    function Size();
};

C++ class FS_file_list_ex {
    function Sort(number);
    function GetAt(number);
    function Size();
};

C++ class ICollidable {
    ICollidable ();

};

C++ class ipure_schedulable_object {
};

C++ class ipure_server_object : ipure_alife_load_save_object {
};

C++ class reader {
    function r_advance(number);
    function r_u64(unsigned __int64&);
    function r_u64();
    function r_bool(reader*);
    function r_dir(vector&);
    function r_u8(number&);
    function r_u8();
    function r_eof(reader*);
    function r_float_q8(number, number);
    function r_vec3(vector&);
    function r_stringZ(reader*);
    function r_u16(number&);
    function r_u16();
    function r_float_q16(number, number);
    function r_angle16();
    function r_s64(__int64&);
    function r_s64();
    function r_float(number&);
    function r_float();
    function r_s32(number&);
    function r_s32();
    function r_elapsed() const;
    function r_sdir(vector&);
    function r_tell() const;
    function r_s8(signed char&);
    function r_s8();
    function r_s16(number&);
    function r_s16();
    function r_seek(number);
    function r_u32(number&);
    function r_u32();
    function r_angle8();
};

C++ class IRender_Visual {
    IRender_Visual ();

    function dcast_PKinematicsAnimated();
};

C++ class IRenderable {
};

C++ class ISheduled {
};

C++ class net_packet {
    net_packet ();

    function r_advance(number);
    function r_begin(number&);
    function w_chunk_open16(number&);
    function r_u32(number&);
    function r_u32();
    function w_begin(number);
    function w_u32(number);
    function r_u8(number&);
    function r_u8();
    function r_eof(net_packet*);
    function w_chunk_open8(number&);
    function r_vec3(vector&);
    function w_u8(number);
    function r_u16(number&);
    function r_u16();
    function w_u24(number);
    function r_angle16(number&);
    function r_s64(__int64&);
    function r_s64();
    function w_tell();
    function r_tell();
    function r_s16(number&);
    function r_s16();
    function r_elapsed();
    function r_clientID(net_packet*);
    function w_clientID(ClientID&);
    function r_matrix(matrix&);
    function r_u64(unsigned __int64&);
    function r_u64();
    function w_sdir(const vector&);
    function r_stringZ(net_packet*);
    function r_dir(vector&);
    function r_sdir(vector&);
    function w_u16(number);
    function w_s16(number);
    function r_float_q8(number&, number, number);
    function w_matrix(matrix&);
    function r_float_q16(number&, number, number);
    function r_bool(net_packet*);
    function w_s64(__int64);
    function w_bool(net_packet*, boolean);
    function r_u24(number&);
    function r_u24();
    function w_dir(const vector&);
    function w_s32(number);
    function w_stringZ(string);
    function w_float_q16(number, number, number);
    function r_s8(signed char&);
    function r_s8();
    function w_angle8(number);
    function r_float(number&);
    function r_float();
    function r_seek(number);
    function r_s32(number&);
    function r_s32();
    function w_float(number);
    function w_angle16(number);
    function w_float_q8(number, number, number);
    function w_chunk_close8(number);
    function w_vec3(const vector&);
    function w_chunk_close16(number);
    function w_u64(unsigned __int64);
    function r_angle8(number&);
};

C++ class SGameTaskObjective {
    SGameTaskObjective (CGameTask*, number);

    function set_article_key(string);
    function add_on_complete_func(string);
    function set_article_id(string);
    function add_on_fail_info(string);
    function add_complete_func(string);
    function add_fail_func(string);
    function get_state();
    function add_fail_info(string);
    function add_complete_info(string);
    function add_on_complete_info(string);
    function set_description(string);
    function get_description();
    function get_idx();
    function set_map_hint(string);
    function set_map_location(string);
    function add_on_fail_func(string);
    function set_object_id(number);
};

C++ class SServerFilters {
    property empty;
    property full;
    property listen_servers;
    property with_pass;
    property without_ff;
    property without_pass;
    property without_pb;

    SServerFilters ();

};

C++ class UIGame_custom_script : CUIGameCustom {
    UIGame_custom_script ();

    function AddCustomMessage(string, number, number, number, CGameFont*, number, number);
    function AddCustomMessage(string, number, number, number, CGameFont*, number, number, number);
    function SetClGame(game_cl_GameState*);
    function Init();
    function AddCustomStatic(string, boolean);
    function RemoveCustomMessage(string);
    function AddDialogToRender(CUIWindow*);
    function GetCustomStatic(string);
    function RemoveDialogToRender(CUIWindow*);
    function CustomMessageOut(string, string, number);
    function RemoveCustomStatic(string);
};

C++ class game_GameState : DLL_Pure {
    property round;
    property start_time;
    property type;

    game_GameState ();

    function Type() const;
    function _construct();
    function Phase() const;
    function Round() const;
    function StartTime() const;
};

C++ class game_cl_GameState : game_GameState {
    property local_player;
    property local_svdpnid;
    property round;
    property start_time;
    property type;

    function Type() const;
    function _construct();
    function Phase() const;
    function Round() const;
    function StartTime() const;
};

C++ class game_cl_mp : game_cl_GameState {
    property local_player;
    property local_svdpnid;
    property round;
    property start_time;
    property type;

    function Type() const;
    function _construct();
    function Phase() const;
    function Round() const;
    function StartTime() const;
};

C++ class game_cl_mp_script : game_cl_mp {
    property local_player;
    property local_svdpnid;
    property round;
    property start_time;
    property type;

    game_cl_mp_script ();

    function _construct();
    function EventSend(net_packet*);
    function shedule_Update(number);
    function GetPlayerByOrderID(number);
    function OnKeyboardRelease(number);
    function createGameUI();
    function GameEventGen(net_packet*, number);
    function GetLocalPlayer();
    function CommonMessageOut(string);
    function Round() const;
    function GetRoundTime();
    function OnKeyboardPress(number);
    function EventGen(net_packet*, number, number);
    function Type() const;
    function GetObjectByGameID(number);
    function Init();
    function Phase() const;
    function TranslateGameMessage(number, net_packet&);
    function FillMapEntities(ZoneMapEntities&);
    function GetClientIDByOrderID(number);
    function net_import_state(net_packet&);
    function StartMenu(CUIDialogWnd*, boolean);
    function StopMenu(CUIDialogWnd*, boolean);
    function CanBeReady();
    function GetPlayersCount() const;
    function StartStopMenu(CUIDialogWnd*, boolean);
    function createPlayerState();
    function StartTime() const;
};

C++ class game_sv_Deathmatch : game_sv_GameState {
    property round;
    property start_time;
    property type;

    game_sv_Deathmatch ();

    function get_id(ClientID);
    function _construct();
    function get_id_2_eid(ClientID);
    function GetTeamData(number);
    function getRPcount(number);
    function get_players_count();
    function get_it_2_id(number);
    function Round() const;
    function Type() const;
    function get_player_name_id(ClientID);
    function Phase() const;
    function type_name() const;
    function getRP(number, number);
    function StartTime() const;
    function get_name_it(number);
    function get_option_s(string, string, string);
    function get_name_id(ClientID);
    function get_eid(number);
    function u_EventSend(net_packet&);
    function get_it(number);
    function GenerateGameMessage(net_packet&);
    function get_option_i(string, string, number);
};

C++ class game_sv_GameState : game_GameState {
    property round;
    property start_time;
    property type;

    function get_id(ClientID);
    function _construct();
    function get_id_2_eid(ClientID);
    function getRPcount(number);
    function get_players_count();
    function get_it_2_id(number);
    function Round() const;
    function Type() const;
    function get_player_name_id(ClientID);
    function Phase() const;
    function get_option_i(string, string, number);
    function getRP(number, number);
    function get_name_it(number);
    function get_option_s(string, string, string);
    function get_name_id(ClientID);
    function get_eid(number);
    function GenerateGameMessage(net_packet&);
    function get_it(number);
    function u_EventSend(net_packet&);
    function StartTime() const;
};

C++ class game_sv_mp : game_sv_GameState {
    property round;
    property start_time;
    property type;

    game_sv_mp ();

    function get_id(ClientID);
    function _construct();
    function get_id_2_eid(ClientID);
    function KillPlayer(ClientID, number);
    function getRPcount(number);
    function get_players_count();
    function get_it_2_id(number);
    function Round() const;
    function SpawnWeaponForActor(number, string, boolean, boolean, boolean);
    function Type() const;
    function get_player_name_id(ClientID);
    function signal_Syncronize();
    function Phase() const;
    function SendPlayerKilledMessage(number, enum KILL_TYPE, number, number, enum SPECIAL_KILL_TYPE);
    function getRP(number, number);
    function StartTime() const;
    function get_name_it(number);
    function get_option_s(string, string, string);
    function get_name_id(ClientID);
    function get_eid(number);
    function u_EventSend(net_packet&);
    function get_it(number);
    function GenerateGameMessage(net_packet&);
    function get_option_i(string, string, number);
};

C++ class game_sv_mp_script : game_sv_mp {
    property round;
    property start_time;
    property type;

    game_sv_mp_script ();

    function get_id(ClientID);
    function _construct();
    function switch_Phase(number);
    function getRPcount(number);
    function get_players_count();
    function get_it_2_id(number);
    function SpawnPlayer(ClientID, string, string, RPoint);
    function Type() const;
    function get_player_name_id(ClientID);
    function Phase() const;
    function OnPlayerHitPlayer(number, number, net_packet&);
    function Create(string);
    function get_name_it(number);
    function SendPlayerKilledMessage(number, enum KILL_TYPE, number, number, enum SPECIAL_KILL_TYPE);
    function get_eid(number);
    function net_Export_State(net_packet&, ClientID);
    function get_it(number);
    function createPlayerState();
    function u_EventSend(net_packet&);
    function KillPlayer(ClientID, number);
    function Update();
    function GetTeamData(number);
    function GetHitParamsPower(net_packet*);
    function GenerateGameMessage(net_packet&);
    function signal_Syncronize();
    function StartTime() const;
    function SpawnWeaponForActor(number, string, boolean, boolean, boolean);
    function OnRoundEnd(string);
    function SetHitParams(net_packet*, number, number);
    function getRP(number, number);
    function OnEvent(net_packet&, number, number, ClientID);
    function OnRoundStart();
    function get_option_s(string, string, string);
    function get_name_id(ClientID);
    function GetHitParamsImpulse(net_packet*);
    function type_name() const;
    function get_id_2_eid(ClientID);
    function Round() const;
    function get_option_i(string, string, number);
};

C++ class CTime {
    const DateToDay = 0;
    const DateToMonth = 1;
    const DateToYear = 2;
    const TimeToHours = 0;
    const TimeToMilisecs = 3;
    const TimeToMinutes = 1;
    const TimeToSeconds = 2;

    CTime ();
    CTime (const CTime&);

    function sub(CTime*);
    function timeToString(number);
    function dateToString(number);
    operator ==(const CTime&, CTime);
    function get(number&, number&, number&, number&, number&, number&, number&);
    function set(number, number, number, number, number, number, number);
    function setHMSms(number, number, number, number);
    function diffSec(CTime*);
    operator <(const CTime&, CTime);
    operator +(CTime&, CTime);
    operator >=(const CTime&, CTime);
    function setHMS(number, number, number);
    operator >(const CTime&, CTime);
    operator -(CTime&, CTime);
    operator <=(const CTime&, CTime);
    function add(CTime*);
};

End of list of the classes exported to LUA


List of the namespaces exported to LUA


namespace  {
    ini_file*			game_ini();
    int					bit_and(int, int);
    int					bit_or(int, int);
    int					bit_xor(int, int);
    int					bit_not(int);
    alife_simulator*	alife();
    CGameFont*			GetFontGraffiti32Russian();
    render_device*		device();
    cse_alife_trader_abstract*		cast_alife_object_to_trader_abstract(cse_alife_object*);
    cse_alife_creature_abstract*	cast_alife_object_to_creature(cse_alife_object*);
    CGameGraph*			game_graph();
    int<key_bindings*>	dik_to_bind(int<DIK_keys*>);
    void				sell_condition(ini_file*, char<section>);
    void				sell_condition(float friend_factor, float enemy_factor);
    void				buy_condition(ini_file*, char<section>);
    void				buy_condition(float friend_factor, float enemy_factor);
    CUIGameCustom*		get_hud();
    void				error_log(LPCSTR<caMessage>);
    void				log(LPCSTR<caMessage>);
    CGameFont*			GetFontSmall();
    CGameFont*			GetFontMedium();
    CGameFont*			GetFontGraffiti19Russian();
    CGameFont*			GetFontGraffiti22Russian();
    CGameFont*			GetFontGraffiti50Russian();
    CGameFont*			GetFontLetterica18Russian();
    CGameFont*			GetFontLetterica25();
    CGameFont*			GetFontDI();
    char				command_line();
    FS*					getFS();
    CConsole*			get_console();
    bool				app_ready();
    TEX_INFO*			GetTextureInfo(LPCSTR name, LPCSTR def_name);
    LPCSTR				GetTextureName(LPCSTR icon_name);
    Frect*				GetTextureRect(LPCSTR icon_name);
    ini_file*			system_ini();
    ini_file*			create_ini_file( char );
    void				show_condition(ini_file *ini_file, LPCSTR section);
//	function			cast_planner_to_action(action_planner*);
//	function			cast_action_to_planner(action_base*);
    void				flush();
    bool				editor();
    int<ms>				time_global();
    void				verify_if_thread_is_running();
    void				prefetch(LPCSTR<file_name>);
    cef_storage*		ef_storage();
    bool				xrRender_test_r2_hw();
    LPCSTR				user_name();
    int					GetARGB(u16 a, u16 r, u16 g, u16 b);
    int					script_server_object_version();
	bool				IsGameTypeSingle();
	bool				valid_saved_game(LPCSTR<save_name>);

    namespace game {
        function translate_string(string);
        function time();
        function get_game_time();
        function has_active_tutorial();
        function start_tutorial(string);
    };

    namespace level {
        function add_complex_effector(string, number);
        function enable_input();
        function debug_object(string);
        function map_change_spot_hint(number, string, string);
        function game_id();
        function vertex_in_direction(number, vector, number);
        function set_game_difficulty(enum ESingleGameDifficulty);
        function map_add_object_spot(number, string, string);
        function rain_factor();
        function remove_pp_effector(number);
        function remove_complex_effector(number);
        function add_call(const function<boolean>&, const function<void>&);
        function add_call(object, const function<boolean>&, const function<void>&);
        function add_call(object, string, string);
        function set_weather_fx(string);
        function add_cam_effector2(string, number, boolean, string);
        function set_pp_effector_factor(number, number, number);
        function set_pp_effector_factor(number, number);
        function add_pp_effector(string, number, boolean);
        function prefetch_sound(string);
        function add_cam_effector(string, number, boolean, string);
        function name();
        function environment();
        function remove_cam_effector(number);
        function iterate_sounds(string, number, function<void>);
        function iterate_sounds(string, number, object, function<void>);
        function set_snd_volume(number);
        function object_by_id(number);
        function get_snd_volume();
        function get_weather();
        function present();
        function hide_indicators();
        function physics_world();
        function get_time_hours();
        function get_bounding_volume();
        function spawn_phantom(const vector&);
        function remove_dialog_to_render(CUIDialogWnd*);
        function remove_calls_for_object(object);
        function map_remove_object_spot(number, string);
        function main_input_receiver();
        function map_add_object_spot_ser(number, string, string);
        function patrol_path_exists(string);
        function remove_call(const function<boolean>&, const function<void>&);
        function remove_call(object, const function<boolean>&, const function<void>&);
        function remove_call(object, string, string);
        function vertex_position(number);
        function cover_in_direction(number, const vector&);
        function disable_input();
        function check_object(game_object*);
        function get_time_minutes();
        function get_time_factor();
        function start_stop_menu(CUIDialogWnd*, boolean);
        function set_weather(string, boolean);
        function set_time_factor(number);
        function is_wfx_playing();
        function get_time_days();
        function client_spawn_manager();
        function map_has_object_spot(number, string);
        function add_dialog_to_render(CUIDialogWnd*);
        function get_game_difficulty();
        function show_indicators();
        function debug_actor();
    };

    namespace relation_registry {
        function community_goodwill(string, number);
        function change_community_goodwill(string, number, number);
        function set_community_goodwill(string, number, number);
    };

    namespace actor_stats {
        function remove_from_ranking(number);
        function add_to_ranking(number);
        function get_points(string);
        function add_points(string, string, number, number);
    };
};
End of list of the namespaces exported to LUA