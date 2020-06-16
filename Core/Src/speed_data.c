/*
 * speed_data.c
 *
 *  Created on: Jun 15, 2020
 *      Author: caiom
 */


float off[784] = {0.99562,0.17725,0.21846,0.40085,0.10043,0.26046,0.30234,
		0.17733,0.13623,0.30274,0.35897,0.18934,0.11853,0.20548,0.17822,0.09776,
		0.12254,0.23254,0.33142,0.43599,0.59138,0.16588,0.29938,0.09848,0.20716,
		0.17706,0.41637,0.14833,0.21900,0.13053,0.32955,0.16074,0.29287,0.14873,
		0.33528,0.09718,0.11289,0.26659,0.19345,0.66529,0.15830,0.19210,0.16923,
		0.21592,0.25816,0.44370,0.34830,0.24428,0.16645,0.17638,0.19334,0.44179,
		0.12591,0.16674,0.35300,0.37916,0.18248,0.28701,0.24808,0.30204,0.03200,
		0.10997,0.21991,0.15861,0.18160,0.12813,0.10935,0.44206,0.18588,0.16894,
		0.19011,0.16327,0.16974,0.35608,0.12250,0.26978,0.19214,0.15504,0.30664,
		0.19361,0.28772,0.12760,0.13053,0.26588,0.24983,0.30075,0.27432,0.29486,
		0.26494,0.14413,0.20745,0.18691,0.17659,0.13050,0.19823,0.07532,0.12454,
		0.12746,0.16495,0.30316,0.27104,0.24417,0.27478,0.22005,0.20248,0.31037,
		0.43360,0.16136,0.04673,0.04046,0.27080,0.22205,0.23319,0.24930,0.17142,
		0.06497,0.11813,0.28237,0.22070,0.23466,0.21552,0.19815,0.37204,0.18702,
		0.36665,0.26532,0.17757,0.16574,0.13500,0.16993,0.38404,0.19256,0.24179,
		0.17079,0.95733,0.48100,0.28392,0.13634,0.26374,0.24097,0.15775,0.23918,
		0.26049,0.22046,0.10112,0.20566,0.37117,0.08117,0.23783,0.13850,0.25026,
		0.25758,0.27917,0.17027,0.17139,0.16245,0.20260,0.17383,0.29765,0.18636,
		0.25389,0.30203,0.21827,0.24965,0.21057,0.16120,0.27852,0.31523,0.18774,
		0.20034,0.28693,0.12930,0.18264,0.28964,0.20276,0.22322,0.43411,0.56148,
		0.11018,0.56494,0.35742,0.37081,0.18037,0.18092,0.32964,0.18693,0.14728,
		0.32624,0.37801,0.26382,0.21989,0.50559,0.15127,0.20122,0.19629,0.31770,
		0.15538,0.27706,0.24429,0.14166,0.21795,0.13242,0.56032,0.18113,0.24597,
		0.23043,0.39482,0.19558,0.15375,0.26149,0.16286,0.24271,0.38604,0.26082,
		0.39409,0.16357,0.30689,0.18614,0.26716,0.32995,0.22474,0.46503,0.21565,
		0.05561,0.37992,0.27739,0.14894,0.07547,0.48828,0.53403,0.38151,0.23653,
		0.46089,0.27141,0.31418,0.38504,0.30687,0.13504,0.17656,0.13303,0.52292,
		0.34116,0.30021,0.19462,0.21545,0.10600,0.21521,0.16226,0.18846,0.23176,
		0.33236,0.61048,0.07815,0.14431,0.62089,0.25271,0.19888,0.24905,0.15412,
		0.29857,0.28921,0.29294,0.06966,0.23942,0.19795,0.27144,0.22765,0.07796,
		0.18325,0.34019,0.36033,0.43752,0.36444,0.34563,0.40414,0.11784,0.10248,
		0.24816,0.34098,0.26003,0.28748,0.30218,0.34069,0.56347,0.37410,0.45650,
		0.26817,0.18800,0.25230,0.22770,0.17231,0.19783,0.16736,0.19481,0.24746,
		0.23456,0.31069,0.32832,0.09762,0.44921,0.24486,0.31755,0.25644,0.29353,
		0.90596,0.25135,0.13970,0.33212,0.22891,0.25006,0.38158,0.16583,0.25205,
		0.31165,0.24167,0.31106,0.42694,0.24811,0.41230,0.19455,0.24047,0.47024,
		0.23153,0.31485,0.35776,0.23446,0.33961,0.30533,0.49712,0.27701,0.17765,
		0.34655,0.23662,0.21148,0.15766,0.15640,0.15244,0.17515,0.15751,0.25958,
		0.18531,0.37421,0.23491,0.31341,0.43937,0.14502,0.19545,0.67073,0.43588,
		0.28615,0.26922,0.19986,0.59938,0.25976,0.49718,0.27317,0.18834,0.22661,
		0.27712,0.12961,0.33218,0.52003,0.12263,0.18371,0.31078,0.46906,0.12845,
		0.35449,0.25059,0.36412,0.27699,0.30742,0.36713,0.28362,0.37501,0.27652,
		0.34619,0.43649,0.43795,0.21720,0.49349,0.27671,0.29043,0.20188,0.21380,
		0.41412,0.42552,0.29722,0.31035,0.20737,0.20833,0.28663,0.22208,0.26834,
		0.16085,0.25038,0.27456,0.19009,0.13344,0.32397,0.36440,0.22691,0.26881,
		0.39144,0.29814,0.59623,0.16829,0.35226,0.29232,0.45237,0.30569,0.28569,
		0.15477,0.20411,0.24367,0.20161,0.20459,0.11380,0.25768,0.35931,0.25066,
		0.25961,0.37773,0.33116,0.32965,0.28528,0.20194,0.20856,0.18533,0.35817,
		0.61717,0.31809,0.18850,0.27033,0.50444,0.20444,0.17863,0.33629,0.19215,
		0.20194,0.28928,0.29617,0.30445,0.31307,0.22890,0.38126,0.21686,0.28295,
		0.29610,0.41598,0.25156,0.27796,0.17281,0.25746,0.23544,0.28775,0.23625,
		0.19836,0.38834,0.28399,0.57272,0.27738,0.20579,0.31506,0.26534,0.15871,
		0.41584,0.48380,0.31943,0.22576,0.45099,0.43213,0.36839,0.27065,0.40965,
		0.33760,0.33849,0.37295,0.18528,0.37556,0.18238,0.40932,0.23896,0.32098,
		0.39571,0.27941,0.60263,0.28213,0.31822,0.26456,0.24875,0.73851,0.24252,
		0.18723,0.30190,0.32774,0.26564,0.23159,0.51794,0.23746,0.35323,0.24137,
		0.37123,0.37887,0.14894,0.23123,0.32806,0.16914,0.24334,0.33686,0.31190,
		0.28557,0.29462,0.25904,0.21656,0.41230,0.37955,0.29040,0.39154,0.35687,
		0.59074,0.32352,0.24545,0.35364,0.32958,0.31862,0.19049,0.22888,0.27936,
		0.44244,0.35271,0.21958,0.32019,0.21245,0.32451,0.43534,0.41639,0.32510,
		0.30486,0.49233,0.31558,0.27196,0.35832,0.27903,0.31892,0.23410,0.22444,
		0.32497,0.37624,0.26782,0.50630,0.22476,0.24506,0.56986,0.28966,0.18488,
		0.26764,0.19060,0.42593,0.44566,0.34765,0.44081,0.21775,0.24864,0.21824,
		0.33056,0.23688,0.27656,0.17505,0.44839,0.29846,0.28590,0.24175,0.34005,
		0.48890,0.23444,0.46043,0.65509,0.22327,0.31810,0.47322,0.39089,0.26007,
		0.38878,0.21336,0.24852,0.28568,0.25850,0.25107,0.56530,0.25591,0.54322,
		0.29779,0.31034,0.34485,0.43643,0.33525,0.31395,0.31085,0.23769,0.24756,
		0.37881,0.41427,0.38056,0.35033,0.28048,0.39804,0.28200,0.46435,0.40005,
		0.20538,0.43554,0.41958,0.32113,0.39539,0.46472,0.36914,0.27686,0.38868,
		0.35264,0.24437,0.24871,0.42996,0.25876,0.24017,0.34603,0.24706,0.30244,
		0.30212,0.31551,0.32993,0.30201,0.30783,0.30544,0.37297,0.59164,0.31986,
		0.44454,0.42407,0.48615,0.31917,0.52050,0.42927,0.34292,0.43758,0.31941,
		0.33280,0.32169,0.48296,0.26939,0.24260,0.39820,0.33938,0.53782,0.48735,
		0.48538,0.25286,0.41768,0.37624,0.44256,0.40221,0.40172,0.32501,0.28720,
		0.33884,0.85943,0.33684,0.30240,0.32705,0.31647,0.57511,0.64522,0.47819,
		0.37133,0.30016,0.30109,0.50500,0.34663,0.34191,0.42077,0.33443,0.29675,
		0.58394,0.34897,0.46071,0.37418,0.37681,0.72622,0.36674,0.33722,0.31851,
		0.40466,0.24108,0.61911,0.48064,0.30978,0.30507,0.40310,0.58971,0.41900,
		0.42324,0.50659,0.42314,0.34709,0.44524,0.52629,0.64036,0.45050,0.38420,
		0.42220,0.36367,0.37729,0.58515,0.40197,0.35423,0.48309,0.43169,0.40322,
		0.37469,0.55937,0.41045,0.39464,0.39467,0.71569,0.54138,0.59605,0.40254,
		0.44488,0.53803,0.38765,0.59525,0.40323,0.56077,0.61586,0.56291,0.73836,
		0.53721,0.42845,0.56899,0.55313,0.46963,0.60472,0.77446,0.44671,0.80736,
		0.52078,0.52670,0.38847,0.65083,0.56832,0.57889,0.47676,0.51712,0.69061,
		0.55706,0.78818,0.51053,0.66194,0.52825,0.68405,0.55617,0.50981,0.66184,
		0.65235,0.89033,0.65295,0.71050,0.61804,1.00000,0.59811,0.63409,0.66798,
		0.67076,0.76923,0.69971,0.68001,0.74471,0.68958,0.77272,0.72969,0.73698,
		0.95077,0.81267,0.73969
};
float speed1[784] = {0.99656,0.37568,0.18256,0.26355,0.51223,0.28338,0.13368,
		0.09789,0.05907,0.25643,0.07253,0.12846,0.26610,0.05696,0.21242,0.18185,
		0.01068,0.26410,0.23452,0.16829,0.16306,0.23964,0.32382,0.27778,0.23720,
		0.31695,0.47838,0.72900,0.61736,0.48410,0.30729,0.34413,0.21358,0.34207,
		0.21208,0.39029,0.31492,0.24266,0.05228,0.21402,0.25139,0.19966,0.08630,
		0.24067,0.29295,0.15741,0.07164,0.23304,0.07094,0.19546,0.34431,0.42285,
		0.36475,0.55643,0.74210,0.84732,0.66618,0.61760,0.63294,0.75173,0.81322,
		0.53030,0.46269,0.38865,0.24911,0.14984,0.23118,0.14520,0.32957,0.32418,
		0.30823,0.12796,0.30781,0.38856,0.17264,0.30398,0.31001,0.26399,0.23445,
		0.33286,0.43309,0.02227,0.56161,0.38437,0.12104,0.28418,0.48549,1.00000,
		0.46204,0.29243,0.32771,0.57569,0.27832,0.19422,0.39644,0.51478,0.31557,
		0.18459,0.14787,0.30827,0.18677,0.24632,0.01361,0.27886,0.13671,0.20165,
		0.24690,0.37863,0.14741,0.43633,0.38834,0.49180,0.47061,0.58430,0.87258,
		0.69130,0.48906,0.48738,0.57493,0.18733,0.33745,0.21319,0.16971,0.09556,
		0.10879,0.21777,0.09662,0.17071,0.24057,0.35788,0.00668,0.17339,0.15813,
		0.27394,0.17099,0.37095,0.32737,0.21368,0.33335,0.18451,0.05091,0.24527,
		0.32162,0.23949,0.05554,0.17974,0.07608,0.35454,0.01591,0.21893,0.03224,
		0.03017,0.01681,0.24912,0.06693,0.20113,0.28784,0.28355,0.16059,0.10896,
		0.25427,0.17490,0.12338,0.13172,0.24319,0.25339,0.24056,0.28128,0.15991,
		0.44013,0.24758,0.29804,0.14367,0.27681,0.37524,0.26829,0.14141,0.31235,
		0.03783,0.21942,0.08672,0.02706,0.24965,0.14286,0.16625,0.19010,0.09064,
		0.34211,0.34431,0.21629,0.13248,0.33679,0.24427,0.01891,0.29859,0.33903,
		0.66534,0.35108,0.21618,0.22196,0.20535,0.66632,0.42910,0.27542,0.12640,
		0.36361,0.30593,0.27401,0.03047,0.30041,0.14257,0.06785,0.25306,0.05608,
		0.33514,0.26534,0.14074,0.32085,0.35892,0.31691,0.31011,0.09083,0.14005,
		0.20779,0.31784,0.33906,0.32246,0.42796,0.62739,0.59026,0.39614,0.30871,
		0.19024,0.13940,0.29075,0.29478,0.29712,0.22599,0.22347,0.20762,0.08138,
		0.18251,0.16492,0.31627,0.03370,0.37802,0.39506,0.20547,0.07517,0.20682,
		0.23938,0.31805,0.25661,0.27221,0.03476,0.15326,0.39868,0.25079,0.31907,
		0.28041,0.25470,0.12282,0.13837,0.21271,0.16915,0.19026,0.00624,0.16970,
		0.33567,0.21122,0.22698,0.19263,0.08499,0.47851,0.09811,0.17766,0.19967,
		0.10504,0.23627,0.26560,0.17520,0.01359,0.06015,0.12119,0.10923,0.15689,
		0.25880,0.24281,0.36500,0.26563,0.12970,0.23056,0.15399,0.23864,0.19818,
		0.20000,0.02498,0.04816,0.25592,0.20844,0.15505,0.28010,0.27182,0.24451,
		0.31137,0.20294,0.27445,0.22178,0.04856,0.17193,0.21868,0.04175,0.29489,
		0.18665,0.17034,0.35702,0.32368,0.14604,0.14084,0.11114,0.00345,0.04884,
		0.29480,0.26398,0.20918,0.25461,0.10780,0.22189,0.29911,0.17089,0.23405,
		0.23109,0.06118,0.05721,0.28881,0.34474,0.14676,0.31279,0.09936,0.05751,
		0.10739,0.04912,0.16208,0.33377,0.22912,0.36244,0.08765,0.19866,0.13746,
		0.17435,0.22411,0.16212,0.11182,0.10754,0.19280,0.28394,0.15139,0.26068,
		0.10174,0.10427,0.11925,0.18984,0.10405,0.17736,0.24096,0.16166,0.03457,
		0.15648,0.17168,0.28275,0.23037,0.17349,0.45974,0.19056,0.08033,0.35058,
		0.02469,0.16592,0.16074,0.29758,0.19630,0.04956,0.20859,0.20775,0.28454,
		0.02685,0.21684,0.12667,0.04097,0.10965,0.29057,0.15129,0.03897,0.23152,
		0.37965,0.20286,0.13180,0.10408,0.15913,0.26998,0.21903,0.11745,0.27411,
		0.24031,0.15761,0.21179,0.33446,0.29803,0.30756,0.24266,0.23987,0.33414,
		0.28168,0.31461,0.16850,0.05768,0.17925,0.24071,0.10831,0.18011,0.08578,
		0.10006,0.16089,0.18741,0.27895,0.34660,0.15369,0.25689,0.19582,0.19726,
		0.23825,0.28964,0.33321,0.33710,0.22561,0.12491,0.27332,0.21029,0.19817,
		0.27117,0.18565,0.20188,0.13581,0.24460,0.17962,0.24787,0.30929,0.26930,
		0.21812,0.00986,0.29793,0.20044,0.03707,0.02974,0.06875,0.19859,0.18923,
		0.07297,0.19991,0.26007,0.09562,0.12262,0.26991,0.17848,0.17490,0.01760,
		0.18527,0.28210,0.18833,0.10727,0.12254,0.09006,0.13111,0.25203,0.11530,
		0.05702,0.14977,0.34711,0.04453,0.19186,0.01646,0.01736,0.17895,0.17897,
		0.06825,0.01622,0.01548,0.17203,0.13954,0.36483,0.21837,0.23576,0.17092,
		0.28917,0.23494,0.24742,0.36291,0.00726,0.09078,0.24892,0.23303,0.00426,
		0.08588,0.14180,0.24755,0.31540,0.31113,0.24998,0.17443,0.16751,0.12398,
		0.00109,0.05175,0.11188,0.23927,0.14695,0.31432,0.08271,0.12799,0.35347,
		0.17970,0.02492,0.17545,0.20992,0.15181,0.09302,0.21965,0.08115,0.13529,
		0.11029,0.03458,0.27898,0.09541,0.11242,0.12458,0.03295,0.09958,0.02834,
		0.27029,0.23814,0.26960,0.20499,0.13279,0.08581,0.18311,0.25050,0.21209,
		0.01339,0.15456,0.24765,0.24207,0.14004,0.09626,0.22105,0.18415,0.29299,
		0.14638,0.27174,0.25114,0.09056,0.25357,0.17234,0.15252,0.16868,0.11585,
		0.18261,0.29743,0.24186,0.23673,0.18571,0.28500,0.28056,0.03322,0.13223,
		0.06732,0.16658,0.21547,0.12858,0.18231,0.21994,0.15357,0.11622,0.28677,
		0.07164,0.26756,0.29935,0.07721,0.00170,0.13804,0.29509,0.14079,0.15499,
		0.06739,0.10432,0.01748,0.04179,0.13887,0.08133,0.16292,0.21830,0.21266,
		0.23594,0.23577,0.09116,0.19846,0.05152,0.06906,0.04964,0.17897,0.14314,
		0.27419,0.18246,0.16834,0.25220,0.16794,0.14774,0.23579,0.12108,0.24358,
		0.03601,0.23578,0.07985,0.06909,0.14305,0.10673,0.18727,0.16062,0.18891,
		0.13214,0.22873,0.11833,0.25593,0.01377,0.22318,0.32467,0.31162,0.00725,
		0.35285,0.20089,0.22048,0.32173,0.17154,0.10142,0.32259,0.32465,0.32369,
		0.29161,0.33352,0.00987,0.19303,0.17689,0.19658,0.12565,0.28560,0.04767,
		0.12803,0.02182,0.06090,0.26601,0.16038,0.15956,0.20620,0.21758,0.15721,
		0.14451,0.32732,0.36015,0.12378,0.20342,0.32118,0.14815,0.19306,0.18229,
		0.15480,0.17948,0.24773,0.28060,0.13095,0.03902,0.14112,0.13443,0.02586,
		0.22344,0.07607,0.06422,0.30003,0.10197,0.33503,0.18810,0.19969,0.17558,
		0.23680,0.13425,0.19007,0.20674,0.24431,0.18898,0.19073,0.15840,0.28364,
		0.20366,0.23518,0.14801,0.25355,0.04554,0.08692,0.05877,0.15333,0.13268,
		0.24891,0.17942,0.14265,0.15167,0.06019,0.23311,0.10264,0.09440,0.17489,
		0.10870,0.16948,0.24256,0.29474,0.17434,0.02709,0.25308,0.11181,0.17596,
		0.23866,0.04095,0.18309,0.21998,0.08922,0.29062,0.15596,0.31697,0.11223,
		0.20711,0.01390,0.24079,0.00209,0.21888,0.09873,0.32028,0.14012,0.26356,
		0.08806,0.34706,0.27152,0.16911,0.01467,0.19471,0.08992,0.13899,0.15157,
		0.24638,0.02329,0.31804,0.01380,0.17925,0.31160,0.15891,0.24699,0.29510,
		0.22532,0.02749,0.08384,0.20394,0.17675,0.03388,0.15967,0.17930,0.17687,
		0.15523,0.29856,0.17616,0.06147,0.21691,0.06998,0.13736,0.23573,0.26286,
		0.15754,0.29506,0.08156};

float speed2[784] = {0.97843,0.16086,0.35754,0.33219,0.59021,0.54323,0.36366,0.22492,0.10711,
		0.73469,0.39053,0.16710,0.36997,0.50995,0.39579,0.39819,0.24798,0.15099,
		0.42205,0.37081,0.41586,0.26889,0.52775,0.28182,0.07725,0.33608,0.40547,
		0.68718,0.53408,0.38779,0.32979,0.31878,0.07659,0.34043,0.13452,0.22744,
		0.20662,0.32261,0.19096,0.35071,0.27034,0.33341,0.24339,0.37315,0.00106,
		0.04613,0.25840,0.33656,0.34494,0.49520,0.37969,0.41875,0.52865,0.60284,
		0.76688,0.82814,0.60092,0.46670,0.60228,0.40641,0.42263,0.38502,0.45309,
		0.33693,0.34231,0.27900,0.37627,0.41955,0.08748,0.38633,0.40820,0.44093,
		0.01799,0.23200,0.23318,0.00082,0.34349,0.20091,0.26521,0.08847,0.22337,
		0.37964,0.53180,0.05819,0.01149,0.43663,0.32849,0.25307,0.24380,0.31433,
		0.04239,0.30871,0.09740,0.40235,0.57346,0.36047,0.44838,0.54334,1.00000,
		0.59535,0.47275,0.41214,0.35617,0.30895,0.36082,0.31366,0.37818,0.06973,
		0.37514,0.08050,0.25342,0.38219,0.29267,0.42066,0.30158,0.30536,0.44721,
		0.40195,0.40533,0.23128,0.37634,0.60582,0.30524,0.45301,0.55283,0.80397,
		0.72429,0.54790,0.43752,0.41212,0.23227,0.37505,0.31024,0.42911,0.23392,
		0.27861,0.17122,0.16573,0.33833,0.10372,0.32878,0.23278,0.20079,0.21611,
		0.31273,0.24958,0.29663,0.11965,0.18011,0.20272,0.25346,0.29205,0.30485,
		0.40810,0.14603,0.28779,0.12923,0.31598,0.17632,0.20397,0.20334,0.19007,
		0.17312,0.24260,0.29282,0.21927,0.35650,0.11001,0.09378,0.08983,0.01223,
		0.31510,0.05731,0.32571,0.19676,0.02852,0.01593,0.25469,0.17749,0.20481,
		0.52303,0.22718,0.23877,0.29136,0.06723,0.10261,0.15130,0.08669,0.17502,
		0.23471,0.35329,0.37039,0.30246,0.24583,0.35826,0.46413,0.75601,0.50359,
		0.35014,0.33251,0.19267,0.06441,0.20667,0.13653,0.00957,0.32151,0.36964,
		0.54305,0.26705,0.32023,0.17300,0.10839,0.33982,0.14966,0.27993,0.22779,
		0.23161,0.19954,0.45382,0.40730,0.32049,0.26484,0.36178,0.58352,0.61118,
		0.49221,0.25625,0.24706,0.33533,0.37287,0.15593,0.10903,0.31915,0.18136,
		0.21542,0.02973,0.14835,0.25491,0.20040,0.28110,0.06100,0.24437,0.32886,
		0.24509,0.08727,0.12685,0.46519,0.24642,0.23377,0.06408,0.35461,0.59963,
		0.38510,0.36841,0.09583,0.16546,0.23932,0.19036,0.22843,0.20844,0.16025,
		0.15210,0.30657,0.19232,0.13953,0.11386,0.10240,0.15158,0.02479,0.12811,
		0.13402,0.21846,0.14387,0.12415,0.15172,0.25157,0.22390,0.02556,0.40850,
		0.14576,0.25164,0.13420,0.11756,0.33656,0.29147,0.08377,0.00276,0.02265,
		0.02671,0.18031,0.29780,0.10062,0.12538,0.20148,0.15763,0.24113,0.05783,
		0.29824,0.09768,0.15314,0.09841,0.30500,0.24224,0.23311,0.27934,0.07860,
		0.04981,0.08412,0.24329,0.11616,0.07328,0.17961,0.17778,0.33094,0.17687,
		0.19164,0.25800,0.10644,0.14627,0.00063,0.05542,0.34793,0.21908,0.29054,
		0.13341,0.24913,0.33410,0.24806,0.15841,0.02568,0.16267,0.04036,0.03138,
		0.28430,0.14064,0.23364,0.20143,0.30593,0.05464,0.13569,0.18331,0.12666,
		0.23584,0.30346,0.25453,0.08275,0.15599,0.21570,0.33652,0.02270,0.23248,
		0.27657,0.29058,0.13937,0.20543,0.16364,0.17193,0.19477,0.25322,0.21186,
		0.27530,0.03069,0.18061,0.11684,0.11201,0.19159,0.22429,0.16988,0.11470,
		0.16167,0.22530,0.22962,0.16973,0.20012,0.07092,0.29872,0.02192,0.10609,
		0.08938,0.18656,0.21469,0.21736,0.20536,0.21858,0.03555,0.23905,0.26021,
		0.18556,0.16507,0.10134,0.03397,0.16975,0.17075,0.09109,0.10177,0.22912,
		0.13474,0.25669,0.26310,0.22479,0.10684,0.06630,0.25631,0.22168,0.29045,
		0.23511,0.17450,0.28556,0.24601,0.16975,0.25685,0.15221,0.12323,0.05670,
		0.10638,0.20914,0.38983,0.15763,0.27162,0.03235,0.35431,0.20200,0.29779,
		0.12924,0.20243,0.13371,0.25068,0.06474,0.18945,0.23883,0.24699,0.10465,
		0.11617,0.15326,0.09739,0.26759,0.10994,0.16615,0.21188,0.01655,0.10435,
		0.29568,0.24660,0.15989,0.21260,0.06114,0.26448,0.08479,0.22082,0.25117,
		0.13427,0.23960,0.24489,0.08056,0.20516,0.05115,0.04785,0.29479,0.10429,
		0.05478,0.03147,0.03973,0.11318,0.08782,0.29298,0.17125,0.09957,0.08392,
		0.19803,0.01663,0.16537,0.13544,0.22770,0.10055,0.14655,0.27992,0.12629,
		0.16759,0.14512,0.07864,0.13964,0.25306,0.23484,0.10320,0.21171,0.09121,
		0.21644,0.14160,0.22935,0.14631,0.18944,0.25019,0.14537,0.24977,0.22025,
		0.15383,0.12914,0.29596,0.15422,0.19722,0.29183,0.26487,0.24332,0.06159,
		0.27973,0.26905,0.25671,0.24871,0.08655,0.19403,0.15831,0.23421,0.22124,
		0.16528,0.16777,0.22161,0.16155,0.21679,0.13134,0.11554,0.32909,0.19173,
		0.18406,0.28194,0.19967,0.10758,0.25760,0.26436,0.14752,0.14212,0.15189,
		0.29225,0.05993,0.12360,0.05628,0.16670,0.17470,0.01021,0.24501,0.21130,
		0.07118,0.08859,0.23084,0.27654,0.26662,0.19261,0.09949,0.16602,0.34414,
		0.25348,0.06325,0.01994,0.22593,0.19177,0.14695,0.21459,0.03317,0.29828,
		0.23109,0.11340,0.11423,0.08027,0.24353,0.31349,0.05401,0.13874,0.00462,
		0.10836,0.04505,0.16143,0.25038,0.14317,0.31543,0.31558,0.33333,0.11885,
		0.15174,0.25499,0.22667,0.19732,0.11883,0.09900,0.17489,0.09891,0.24371,
		0.18177,0.22593,0.23814,0.19403,0.18477,0.21213,0.32913,0.16541,0.23214,
		0.36505,0.05728,0.07868,0.25273,0.22001,0.14701,0.07606,0.02098,0.04866,
		0.29567,0.19839,0.25571,0.20545,0.29269,0.25277,0.18466,0.20057,0.25740,
		0.16740,0.20119,0.23150,0.08185,0.26011,0.28065,0.18210,0.05506,0.27625,
		0.15835,0.29544,0.26063,0.21213,0.09757,0.11186,0.36292,0.16485,0.24531,
		0.19262,0.22500,0.15676,0.27095,0.21548,0.15645,0.23833,0.05350,0.32237,
		0.08185,0.00048,0.18515,0.05993,0.03527,0.22261,0.33806,0.28876,0.15933,
		0.18613,0.11133,0.24439,0.14207,0.20011,0.20602,0.00215,0.05574,0.12552,
		0.24482,0.06519,0.13979,0.26814,0.14102,0.02377,0.21552,0.30823,0.21165,
		0.17441,0.17947,0.27767,0.06293,0.12888,0.08823,0.25553,0.13411,0.21945,
		0.06259,0.01090,0.13748,0.31205,0.23343,0.30646,0.14049,0.18100,0.26289,
		0.11238,0.28123,0.26164,0.21986,0.30809,0.27198,0.26672,0.20401,0.13351,
		0.23757,0.31853,0.15795,0.24052,0.22655,0.17652,0.22569,0.21943,0.19838,
		0.03117,0.17396,0.22689,0.09118,0.27954,0.18059,0.17575,0.26593,0.26128,
		0.23207,0.13833,0.26633,0.33757,0.21946,0.05834,0.18744,0.09994,0.25909,
		0.03201,0.22612,0.06852,0.02319,0.16597,0.24788,0.21039,0.29317,0.21727,
		0.04049,0.31759,0.25780,0.31019,0.14602,0.22459,0.20349,0.23214,0.30085,
		0.10426,0.13635,0.05225,0.23910,0.03033,0.02204,0.39553,0.04333,0.31574,
		0.29606,0.22602,0.03120,0.21760,0.31093,0.36727,0.14714,0.32464,0.21800,
		0.25977,0.34051,0.08198,0.22887,0.22939,0.19475,0.02606,0.02322,0.07882,
		0.22633,0.01227,0.00544,0.00136,0.18782,0.14778,0.06081,0.03668,0.28063,
		0.22324,0.19000,0.14776,0.24256,0.04297,0.12312,0.08327,0.23966,0.19452,0.33634};

float speed3[784] = {0.93621,0.30235,0.18741,0.09405,0.26380,0.66915,0.34195,
		0.34286,0.39210,0.56419,0.80295,0.43171,0.33762,0.32490,0.42638,0.46839,
		0.17028,0.11829,0.01371,0.39665,0.57571,0.25839,0.19300,0.19801,0.46720,
		0.48752,0.32713,0.65294,0.54330,0.41524,0.34263,0.32539,0.34758,0.34310,
		0.47018,0.29997,0.11102,0.09571,0.15140,0.36501,0.34569,0.31273,0.18806,
		0.23028,0.22438,0.16325,0.27793,0.38474,0.36678,0.34915,0.50710,0.48810,
		0.44454,0.62977,0.71896,0.83169,0.62420,0.53536,0.31057,0.57350,0.36814,
		0.24794,0.39624,0.26334,0.29382,0.22142,0.34048,0.28209,0.27522,0.32368,
		0.21308,0.18274,0.14118,0.09129,0.24993,0.02072,0.15063,0.41077,0.33549,
		0.39583,0.28492,0.14377,0.44679,0.08037,0.31406,0.11719,0.21468,0.35552,
		0.31709,0.25848,0.31401,0.22361,0.25983,0.46277,0.21047,0.10276,0.32749,
		0.26513,0.42483,0.41340,0.27588,0.44972,0.36939,0.57895,0.45753,0.46907,
		0.57154,0.65322,1.00000,0.68211,0.46517,0.47394,0.40613,0.39354,0.14479,
		0.26630,0.47699,0.34818,0.37055,0.29891,0.43078,0.33767,0.30509,0.48546,
		0.10441,0.40918,0.28361,0.22356,0.45109,0.27461,0.41518,0.26612,0.26121,
		0.32278,0.27178,0.62419,0.44871,0.28460,0.34505,0.22285,0.13835,0.28004,
		0.12009,0.34802,0.26751,0.20361,0.21623,0.17142,0.18904,0.25759,0.09934,
		0.35093,0.27844,0.19335,0.09695,0.20463,0.04272,0.10198,0.02502,0.34066,
		0.36252,0.33091,0.54331,0.51269,0.25651,0.29890,0.29104,0.35686,0.08565,
		0.05645,0.19834,0.27771,0.28535,0.05803,0.22667,0.34932,0.03380,0.00462,
		0.09625,0.24886,0.17624,0.00583,0.23166,0.10840,0.22912,0.36183,0.05798,
		0.36155,0.42932,0.41564,0.55246,0.40905,0.31922,0.16576,0.19552,0.25363,
		0.01430,0.21838,0.22617,0.28234,0.13778,0.07065,0.09388,0.23715,0.26152,
		0.00361,0.08616,0.29794,0.20104,0.10891,0.34334,0.23809,0.15515,0.17712,
		0.41703,0.50311,0.70078,0.56158,0.22295,0.45471,0.28526,0.21727,0.33013,
		0.16141,0.15039,0.16839,0.37149,0.21106,0.03563,0.26878,0.01081,0.26517,
		0.25695,0.04413,0.31978,0.22000,0.09671,0.05429,0.36082,0.16238,0.16604,
		0.27400,0.23819,0.63094,0.09694,0.22288,0.26940,0.22356,0.16681,0.34408,
		0.23543,0.20332,0.11651,0.31234,0.17413,0.23161,0.09452,0.24727,0.19721,
		0.08904,0.16188,0.15084,0.18108,0.16560,0.07428,0.20116,0.27599,0.26647,
		0.15351,0.23382,0.56162,0.46811,0.14390,0.30111,0.27358,0.28495,0.29361,
		0.27670,0.09873,0.32420,0.18862,0.22896,0.34918,0.23296,0.20448,0.14952,
		0.13422,0.25377,0.26418,0.07528,0.12547,0.32571,0.22530,0.24029,0.15622,
		0.27852,0.30382,0.31301,0.43673,0.24982,0.21105,0.17327,0.18996,0.27700,
		0.05792,0.13638,0.16738,0.21422,0.10713,0.24489,0.07954,0.00367,0.11353,
		0.23504,0.11268,0.07711,0.09497,0.18664,0.18988,0.23473,0.02079,0.18298,
		0.16364,0.12261,0.06267,0.29118,0.23404,0.24243,0.22257,0.11578,0.25932,
		0.19755,0.23390,0.24951,0.30184,0.00861,0.03313,0.24288,0.30755,0.08705,
		0.15870,0.25123,0.15745,0.23148,0.22538,0.18744,0.25335,0.14035,0.23059,
		0.06177,0.03898,0.15063,0.24692,0.07660,0.13148,0.04002,0.20772,0.11843,
		0.24744,0.07601,0.10172,0.30928,0.22356,0.02573,0.19025,0.12836,0.16216,
		0.18087,0.19491,0.07583,0.13445,0.15775,0.24324,0.16081,0.20534,0.09319,
		0.14063,0.15381,0.00112,0.12431,0.10786,0.21943,0.28038,0.13590,0.23671,
		0.19365,0.14475,0.08467,0.22173,0.17989,0.19227,0.06249,0.11219,0.27004,
		0.00959,0.15391,0.22173,0.22838,0.17947,0.07372,0.11071,0.23671,0.15857,
		0.24001,0.16938,0.21299,0.09151,0.03123,0.26130,0.20840,0.19751,0.17860,
		0.04000,0.27078,0.19208,0.12347,0.30645,0.19611,0.16549,0.13295,0.28735,
		0.17510,0.14798,0.16161,0.21812,0.09021,0.27240,0.21045,0.19515,0.31417,
		0.28809,0.20287,0.07178,0.37295,0.14450,0.25503,0.25265,0.01880,0.20098,
		0.25567,0.17488,0.24078,0.17042,0.07344,0.14347,0.05314,0.29871,0.03567,
		0.30125,0.11611,0.08435,0.21026,0.08160,0.19884,0.09739,0.31753,0.14793,
		0.25941,0.15481,0.05783,0.02080,0.18317,0.20789,0.34636,0.19162,0.24271,
		0.09801,0.30782,0.10691,0.01745,0.21268,0.23855,0.24109,0.19438,0.15540,
		0.23720,0.19167,0.06496,0.21379,0.24357,0.01483,0.19008,0.30835,0.21277,
		0.28813,0.25058,0.33485,0.08693,0.13116,0.17064,0.26093,0.24241,0.26192,
		0.12378,0.31927,0.10260,0.33076,0.08206,0.01148,0.29291,0.10162,0.23992,
		0.28740,0.11749,0.22495,0.28423,0.01998,0.11531,0.16277,0.28407,0.25693,
		0.16540,0.23142,0.09500,0.32423,0.08985,0.20312,0.16916,0.18951,0.23689,
		0.21396,0.13969,0.17792,0.00153,0.04224,0.19127,0.15338,0.16919,0.20990,
		0.16202,0.19098,0.03760,0.22216,0.25192,0.00235,0.22929,0.12800,0.24306,
		0.27837,0.30718,0.12841,0.10894,0.19440,0.12958,0.13039,0.09364,0.04417,
		0.24334,0.28315,0.04486,0.27161,0.28360,0.25110,0.28942,0.21195,0.16301,
		0.09288,0.14167,0.15843,0.15544,0.32209,0.32510,0.16357,0.27036,0.13028,
		0.05782,0.25236,0.04947,0.18822,0.29083,0.17883,0.05468,0.06178,0.24705,
		0.11887,0.05587,0.20623,0.18778,0.24737,0.02651,0.09425,0.26217,0.26376,
		0.18222,0.23468,0.07752,0.04399,0.17616,0.03962,0.15342,0.19936,0.24947,
		0.00613,0.02186,0.28226,0.01055,0.00888,0.20977,0.16279,0.11232,0.27652,
		0.18667,0.15333,0.14303,0.12875,0.21556,0.29499,0.05732,0.28441,0.31434,
		0.19973,0.16721,0.24246,0.14445,0.05054,0.09827,0.07290,0.19303,0.17734,
		0.03122,0.27802,0.29519,0.02236,0.15972,0.19635,0.25720,0.14517,0.18884,
		0.20066,0.06561,0.02081,0.22783,0.12374,0.21184,0.23235,0.20304,0.18234,
		0.07869,0.31639,0.01438,0.28378,0.21452,0.27906,0.10820,0.20790,0.21210,
		0.05738,0.27916,0.10641,0.18609,0.20080,0.01101,0.00909,0.06513,0.12253,
		0.22142,0.18629,0.19098,0.19028,0.05587,0.22939,0.24520,0.20302,0.15140,
		0.23371,0.12919,0.20411,0.06839,0.22399,0.21504,0.08028,0.16952,0.05511,
		0.15686,0.32294,0.21754,0.06025,0.28053,0.28075,0.09763,0.16180,0.18288,
		0.28477,0.12282,0.20928,0.24435,0.09268,0.13661,0.25479,0.22795,0.06892,
		0.07332,0.10807,0.26834,0.03290,0.16252,0.24236,0.26018,0.27077,0.18012,
		0.20224,0.15760,0.22292,0.28434,0.09514,0.20308,0.22857,0.14444,0.05640,
		0.11807,0.16568,0.24342,0.24168,0.19436,0.12572,0.28664,0.12539,0.02595,
		0.18639,0.22735,0.17622,0.28393,0.31472,0.29277,0.19414,0.30077,0.03667,
		0.06191,0.05429,0.23768,0.12985,0.18138,0.13066,0.05946,0.26938,0.27187,
		0.19156,0.17008,0.26153,0.23154,0.11475,0.01542,0.16993,0.34548,0.22085,
		0.24715,0.17670,0.24728,0.01861,0.04201,0.14762,0.21206,0.29776,0.23926,
		0.21385,0.12521,0.19571,0.09309,0.28531,0.21988,0.13357,0.07802,0.22290,
		0.11841,0.28569,0.04601,0.23325,0.16649,0.13576,0.16491,0.18786,0.16660,
		0.10344,0.03355,0.30596,0.08292,0.05157,0.27795,0.24451,0.18435,0.02361,
		0.12537,0.31176,0.30016};
