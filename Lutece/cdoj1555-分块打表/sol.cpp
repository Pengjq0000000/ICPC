#include<bits/stdc++.h>
#define LL long long
#define MEM(x,y) memset(x,y,sizeof(x))
#define MOD(x) ((x)%mod)
#define pb push_back
#define STREAM_FAST ios::sync_with_stdio(false)

using namespace std;
const int maxn = 1e5 + 7;
const LL mod = 1e11 + 3;
LL table[maxn] =
{1,1,
38304875071,43828484149,22257848139,9x8149730769,42180703576,34948876499,26596726487,4927690802,32373749850,59719038553,98037493903,34644000948,40522798620,6212961513,387885851,11422300419,27332182370,86626759005,66364393867,42631517268,
12582404049,95635423851,18249092617,95013368111,63678083760,42968204615,45571341730,85109771152,94335674616,93462584973,80071452582,76255567035,82071119519,5559946366,91614306941,22408736554,12470640357,69204610205,34928278813,25757837300,
46998792332,79172788127,27761080476,14770578592,87280652948,63750378994,67050427813,1782170849,83740805837,7051716196,34732168018,44456145267,60228390625,29298250358,30787958334,22114799957,69666741158,86459635777,17497372230,61714537515,
82149775511,82039598899,6104439212,85186458680,28482963853,44443017474,90127934250,75559004290,29180656716,26798789690,10530005730,99865232116,57129357973,63617411736,38068457624,33643927581,81807680844,5544666906,46903424800,97622797577,
61778864930,36290610478,37035104697,10207485584,96174580424,86541641070,98405162216,92163200310,74882037842,73244305194,2408087041,97478206883,15399310884,71377586806,47721321320,50455736235,94193897244,21434143685,73456732100,45189402771,
13020629527,53845702392,64995828085,24676222427,4141998520,62018969802,18699608088,91457157905,58344391304,81617539484,85482144229,43069262872,89937148941,97897058454,81373417455,853868592,77378803617,67410336007,15220272548,5294270905,
21440795832,73328279658,25319302246,93904269687,47037849673,34088160116,13787947798,21091656223,26904282283,99054425706,77176290132,94133890652,62721482590,83487568811,60430850182,38317438433,93798298841,52111337990,69909558232,54104064892,
34316224888,32707590807,40813136380,95749191532,25463258953,4144475533,67585897777,12023281066,47357201393,59413805736,83793376904,16815910120,12629420617,75011316507,12947552588,77587792308,85599616075,22252817429,39734791173,17307617367,
264391107,66730368876,53574791623,26195444296,48337905584,73859229643,94598588961,89319458182,75009944765,9820700170,88111205544,58312984808,4640239362,26156700790,52254755844,99133187475,60362251989,95262300051,69086831819,92902212591,
55873235643,95183459816,31957299482,28798196240,1880886641,60764288728,41194782955,57358481058,96015634144,87919950712,85691273378,1320260545,40846054103,30801431981,84667654508,3150680079,5397692497,35120582783,22056333735,69080459813,
67839347222,26474646455,67192738705,788332614,20649523903,47566016387,79899789553,15925113814,15341812419,27260905650,27208091967,41221515730,61081971989,25331946907,5980523568,7761422681,98528056343,27621034651,78095664570,89062152047,
41322929852,97179326103,96009597925,97523150077,84498178740,16024475178,66934030251,41746959930,54452724861,4114127062,74645774677,62934492226,22041448903,75379944412,36157918774,20537265119,77359914595,57792523443,84542324897,42982699056,
47246390663,56417503591,73826121150,30404862851,34930725149,88186042891,62179470393,20109257409,1351569413,61641394768,19773477783,57417266571,36500669156,79097041786,1579817674,13900774041,13743175329,29997979387,67817400672,29784434916,
60350462061,68220941372,32177297249,59034915117,95788998481,78087500985,95484779558,34884442996,80372999303,17070927381,76230082274,97294230658,35843893436,60135763477,33318714210,84794124161,86104942238,12979238956,47920079748,76410896167,
51042674854,14555579144,63695686295,58217949098,48723463608,77351827090,42978553505,74208198653,19898499376,71607249720,13308261908,22436348790,93329593259,15116467249,31950204185,65344435018,62588977301,38828820633,76048772131,19416403171,
42036198562,96032471643,20936300396,25848901628,34515583182,22903392122,68901855922,49599614124,65048010424,99199257523,83577531220,74347378467,44347715071,55866015441,32096126836,6457008466,71916438765,68717309187,54217573263,99630190580,
3941330950,6443070862,53146761292,69776866030,50783293141,16281750793,52503275862,41553715497,44901398324,84204654724,24939654547,30613604369,94877263035,6783653765,2117258840,87045024325,7118681115,55076500252,41876898161,89499080851,
6379109599,54426875054,10958934334,97803334332,62524732093,10484394845,56219200854,98433433249,77715774279,81852737438,63633840204,3013878395,92941717444,18984919297,20723527229,8307679219,95213471397,12928173527,43036166353,24389128223,
91108192519,35999720775,97244966684,60118760540,98326194757,20959311728,86761170740,18537842884,65739863108,99123845368,95168378475,9383709597,90887380429,75780491581,9445635154,92825009029,14679722565,59445795764,77302852473,18506922436,
16514774539,45759379043,12622746508,57411608393,49964895656,70997377770,54377973959,20149456334,36650248514,16070320127,897960742,63383406771,69927429007,49317334907,99416308146,66869800906,97143466352,78994235828,54834623660,52134556120,
5613718119,38646157173,64831888388,29796479857,96359703866,96980646905,33599738972,28147818058,96959188749,91097603541,93085378088,59439987951,10617715604,71293652605,29814518606,85341133741,57522917084,21871199406,35628530058,58043456272,
78303197023,93404870292,93750491272,47377227401,6036874245,22964132598,86890632720,82345476964,40134333599,94137330224,83500429259,15821368881,84198247692,15430111772,54792188120,28433183883,18376121436,91073030123,67242089377,91222535087,
88274721569,1239106496,21906444641,48536329006,10603493340,76234464744,88832073732,53630742586,95990987224,60468413463,34938563655,20034593414,63931346132,67024301809,5733316240,26428166665,77578550492,50735230139,87756632787,37063764519,
75751446728,38620828177,46618994971,69999819023,60444310275,27047298221,21485631194,33256461903,41698097773,98841320507,72937473112,38750900657,48223189196,2209103171,50148490510,47639010805,83465941325,95813394510,53191810439,91690335358,
33258166655,63569506912,26520446014,88943782702,1578415871,20560864256,64298286585,83331418506,36126872969,10754802362,60304317285,85674591264,31621678480,84178581135,23507471112,73135193751,66499246454,76721013595,96331583879,53762532703,
23919030271,9576396097,59931431794,69411847390,5045498991,74725690720,47017996833,95998943660,16244657242,8634629005,83082016008,65251133100,90857867379,16704752286,37386325646,57958841232,85498341773,19552373316,59961858724,56064582199,
30137864817,63231722911,17908155219,61218562146,6788141191,92973652881,21031374727,83006614242,17661208969,68259980751,243908624,53204959825,65029563999,82938710143,35632672595,72953173929,11909859709,5032540719,88752596437,10254751569,
97566224465,59214410397,24045859606,50247359656,27684032023,68400229254,32828217736,14705252276,59163641301,21091635291,46202568201,76336050608,55355310243,21218135550,63097043765,34583653374,2382517359,80290698161,67776506257,1961756237,
65598579195,22018675442,12793792929,73052335603,31387050598,34304622355,70452693423,17856173963,32687000816,96790226375,5606318516,16621740733,10781346426,74925546142,770885730,61040848446,49474840257,41724825729,90326842433,44270552684,
91881765773,26559681234,60071552052,39299479604,17480164960,14942912183,6704246334,54239950439,25931906838,20425705201,83598073713,61277316013,54306709370,89508646677,50600421780,90401162442,26706352647,62393447266,88782742578,76156824650,
75139648311,1787755505,3380040818,91557621747,99903231501,53597750238,21153159411,27154796491,94182506597,604978796,23472660483,8565663144,49923835893,13355797566,45228527043,40266304324,91586639228,88705206442,75999122460,52779685440,
40205705802,10297173226,44546775252,86876273981,62188207835,55789065005,39363541590,28112262706,46534671927,73525455712,97754192808,65698960394,72366657180,44229913669,84163471325,38983759326,79572644530,74898418197,99140413750,19808930547,
11609917471,38678266772,24265206499,8431412797,34596635295,35550377122,40062927020,92701351859,78106924188,20334026599,34987250606,58842035013,29815988877,89954893779,8051761718,57844408777,86657267030,60530573058,9415751323,43449651728,
26958645133,793767228,22573547347,44944478980,34212499266,90221996719,78995826892,61323023772,13596160130,7929191423,37274922058,80650856765,637380824,32509526628,20001138735,1743789189,69391517648,59989639035,23816505122,25922721441,
77923051779,73229882353,7504486004,42686222107,22454706332,78816831841,74051122195,5718046403,85550673160,28063603387,75624412524,47701606525,41945250373,95018149260,13816749044,78651778983,53824735091,50288418318,80067035811,37862170001,
52183458848,99265232580,91933949721,47554624989,47166385,59504203198,90805021048,21918864411,71297540085,48367111868,74306042392,94076825566,47603865756,89476597631,5765247974,57578895694,5301719330,16678089033,60348319198,53238696708,
41448876217,32871059112,45924969599,43993067769,24616872948,33906699083,74370245064,21922558537,30849843169,98801238799,45817262364,4325030297,51520017369,83784415607,25923127676,61209454486,54864939492,11132723666,66905883285,18293495270,
35096363189,86991670657,43980900158,34374182989,19077455641,13229877937,38333093561,6166544880,52337343133,83772273685,55854556656,23528048035,40526763401,52470009131,61356151310,51605511981,58257343263,94612565145,71441600925,17454255450,
32752475566,30634414282,58790619137,92883702406,87841391425,85743291411,34472239256,22893850585,51256601192,40695959043,74935479132,18516174487,36662656566,60115461815,45567273500,24135711515,68127409551,67963362921,4859941314,4361206558,
68649581587,56428393986,77123860882,79758099463,79519400983,4936942979,84344984984,75349324708,872376261,46275463364,24196444248,27563588979,82153988988,3167590497,66860189743,78444938232,7188764684,54360443914,42099209704,94014861671,
85115288208,38031323717,45383991523,84359070847,96260507416,67132247422,68114070397,45656361967,92583883479,82434738843,22034187623,85173946292,23913916720,99586507753,40722635989,286376948,45116711293,91263601226,2269374458,44959214503,
74742984381,6889662086,97986950021,20935161987,68994337120,56532671343,8592828340,52470858698,59420507017,58495955195,93465395492,57432353320,52787670456,69950944193,83403875043,28386920916,96054773721,38231458955,51353401301,57972387084,
81119949032,96343986451,92860932639,9122973424,57717938833,46671401607,66536918811,41344031021,44163700175,41859929355,66935022837,2018414797,79123754951,10700949033,19350492555,38522162442,65587092250,46194688768,43733000893,33068017528,
20900589251,44966811776,55708293528,97694913623,82553851173,88088364548,65170109518,69004846205,57124014274,46209901942,25781913868,21637520584,93989511675,15084349728,14829597653,18113646442,82528157372,62829969806,66595698885,83800081028,
53891809912,98682381163,11372428556,84965574357,25517436245,99560739742,38843289456,52784699714,62856420101,33110287375,6788056818,24229693421,98831091302,22589635330,19172184428,66378422311,68444725866,34508984534,49730019584,66534545357,
63530792827,54477448842,45306376095,30524521301,87214539097,17856549965,15144250711,47213144162,74252613438,29238801908,47300680852,9985947730,53695226353,15096436369,45009926418,53758733013,47135562996,3793720379,62235708481,84385895898,
67264386022,80643046830,95085391621,87796269227,10294277078,21615518969,85917306620,96637156962,92475524312,35996677532,4274459746,72557574698,82073215698,58304296953,84729205940,50236067006,44495495671,28593511448,601780564,15394127510,
67133014932,35934985604,18965072123,37975932476,15807160142,21071369118,60499577457,8708102032,42229806735,28925023785,35449135653,5637568493,71772857727,97525222363,30384144131,18908855871,67537947124,5282341701,2401121517,24867868525,
68811132743,61252767299,83954214488,21187292082,53483855103,49852349445,9963217610,87104114770,70922452435,11197055297,43522584183,6407276608,21761122591,9523859862,85739870596,60570857619,75466528623,52444820077,74192799546,58688526133,
76388184106,82402927700,56216195997,28160561345,39359062303,74474523904,44053031308,19706125127,439239787,32851376258,52553854255,72526237594,50987389462,82954410536,41060538471,15822794078,79776390007,23081351615,90428095183,100000000002,
13647317557,10454615108,23718356555,67339844523,41263426125,26331513274,22260937634,79876537414,59774523466,36401317867,11346370360,43700396373,37680152445,52565487646,80229420279,26884626874,23513934070,30881326482,46995480283,90408443755,
94515429670,2238190718,7659017992,9369343211,37047271237,32761546729,85064127552,73778793056,93579649779,24721257015,89539231625,56113377426,89111778853,59163807488,36817610755,38367552294,42738470116,38119508426,69353855808,60586534963,
44255101606,59147725629,33645698108,48163212023,41749152919,81833294205,44962422874,94765010692,52296388527,78279433552,24691428601,84549426846,88587520595,79772978383,19108621346,13506570290,33671809307,12441175868,97710237643,68138324413,
43649308190,23872305581,83586314060,8151076446,65688010099,79229043646,25691077824,65534716876,38113384237,63456424403,14238929688,49940947513,55440129199,92725704145,52468365600,75041802047,14357746013,95228532470,53781082691,57560966014,
59200763559,40554492697,3567072109,14893057988,75879297795,85338386845,70264938047,90506944635,9455379315,85692758180,92546393641,29387796470,96588173932,2439167050,6571535412,38638801297,53967263090,11612077771,2714545864,80281662359,
8562745852,48155429080,39756980912,15861722338,66219669569,37676701146,58267832076,937957943,78102632422,7103189128,29782684433,83649342786,54433854799,84137222468,10792724538,28984658794,44735329979,79047035107,28711569507,11435540171,
9846160665,42107465446,5785077415,72713933970,18205094833,11349096646,29323227047,44612473115,54139913262,2173196754,50715922160,76887176289,68664313682,54736497409,46177037441,75629045496,28598562915,98302930051,98806117687,90714494549,
81918099361,57648875912,4644605331,39769387979,1327552295,86117221789,38411951916,32995340106,78063252396,84265694944,4860840463,74204276236,90591396357,25720147268,10160974674,63430991369,94056819033,98078218806,69120140271,98387515208,
40903818529,48053310770,40735950391,1339903747,22820680106,7326435882,44885535825,30635563818,52139220367,86943473647,35656761691,16082580565,93191596252,74008145059,23365459031,34320606192,80052627876,45645568445,75008631214,39490924721,
11780841459,29964594702,21811023116,51525429695,98065056707,24827893873,39957445387,97818466978,44977726054,19529865203,14296940071,52739552050,31445103678,60258183856,72197769865,22513762731,75660533053,11970800517,96178090309,10684195077,
42037842539,28850303909,76442468473,8899867982,54729485550,59098959314,90574203327,42974285694,60899739575,47856593062,9475797279,88242615090,8752796841,87103289372,21956400605,73988742005,5477814042,26570850397,98776910780,22172949714,
10373534873,29058695666,21138465508,15175188686,23483129473,77979812812,62551415052,80963815976,51388472633,1010615967,29786951289,47119879084,35385091693,27554191220,52073364979,34365520367,1864074458,86801526104,67161634043,37526013653,
31034940947,74907380887,5145006415,31227496021,44826823581,32732006731,75863490471,19320176142,87178831325,11121289167,67805030857,35789876114,84454710,94076280867,89332097221,82322357174,32256044916,45073936608,82823599603,97291341763,
41522033123,72470840266,81122897979,79785307346,52606365759,46450566759,17735324528,3065429671,93409187791,191745528,74262782359,23440685445,88482868005,43302970966,89891424343,37897164417,12178894462,39958227840,98419206216,61965455133,
34897056358,81265342070,23556337205,47360037283,73804842746,65168308925,69260401151,29321729784,26880741273,47800843947,97389164419,57214202936,44059017883,11015435191,79732903001,78488853233,51711828036,70448699386,2229096650,2025538560,
6732323954,68586987091,82115345288,49047942578,17577684630,95381827242,39387672987,83843446684,10196066508,92044043527,15628587128,65209463658,89437869612,66540516497,79341445620,13718910049,67504665109,825042011,26436945179,62863997569,
91432048859,32243398368,31077685989,94943241677,36527446612,69743749102,7226154799,12116270174,16567091541,97335575729,20637867944,39494180678,35478844765,22175407106,9416498830,62740408775,77747709311,3852454463,70708187958,57661928861,
91615875827,70422089144,62992478387,68653059208,8981583613,4980339997,11581172784,73069810850,65560679683,60500684788,28718983597,86644478353,60597211386,69304721852,1502410476,79914311082,39696435708,41519196680,35024463656,47028076393,
47152178225,60341635346,44671474530,37156401178,44934259470,21703884134,11667294832,66830532220,69978492390,37730740029,67763287042,38846969899,58010505842,67608104681,8365458556,7305277445,95907303603,75186327833,42566236568,51871778442,
35215470189,11744980383,67494530058,98519626512,19726016635,36697100094,47030824238,40616318744,59468163396,45569700431,20330935585,5774454795,32133902535,51852630378,92672166200,8419106056,77446166719,97187065468,25815968216,94133687906,
78572615465,13845977890,14599117879,65737932287,19101535389,55309860195,65510466546,46746875713,33082434046,82831569236,42832780253,6625117726,49471212898,5994592547,32920687341,66218864728,48178710330,97437674917,55447223985,99383107639,
90350020601,97660193775,46565897628,23534698752,41392231117,71431885228,88283168161,54861493978,69921326552,69668848406,9857075916,36653700125,5523576718,84199879640,98755616515,11090464178,58938477839,78522992916,57705308215,71840232923,
68769459663,72180667816,86060865761,18122583804,97052989254,34935911149,17483383554,17487552006,8009122612,64118127508,77744152694,75705313696,29041072147,59164248412,87936905894,44664892594,93853298079,69531065849,89746907509,8574458329,
93815746749,81888349866,4854967356,37224875295,63530500002,16849968031,4916117897,98090297655,19709271535,75855790044,29384780279,99711561703,96730720144,17226813222,7618226455,77403578711,58986921797,80062343455,52060718922,17237026212,
96748650621,48724777434,14576247168,56863333789,46897613752,20191304231,20169148960,14268733723,8991392222,22584003342,69046394456,18612740591,56690440755,86801343835,63282964991,60329884593,88228694526,43562768017,90398073867,64725279985,
90095103919,58160278004,332104261,44884177054,50209161288,33411860891,35573862344,34510312831,99679992480,7489771266,22212973199,16221162908,66519087663,78773981540,91627869221,25341203314,58232307350,23781462207,60982356466,72816279786,
64066941728,30007577407,24177272955,39111129983,80690571885,42689651774,75144113341,85889179897,97083564475,5347649908,35342715348,19181285008,26217717610,30998834378,77048987444,28319623648,91719381992,83146939309,20388388891,80214913441,
33259142810,95117800176,71700815978,36284303050,47466082441,30620957130,99856579042,78310054251,28795145037,13881884102,50433899030,40572624973,15497820500,40235743008,26859466798,32336326160,20180349078,10679645489,34911748136,22671964925,
99664340906,5770081830,77552459974,25271360231,35160873465,78391472441,56171967207,77075461770,14762864567,57317744795,55042409206,70538884301,11310081082,33760452785,86770814093,46813412543,27745074080,23366263024,62836772588,62632817308,
27501214929,13209411498,37500753792,80191098556,32002775337,43146060694,82065889898,18339687665,56338964950,23667084903,39791603160,56245449629,48367078039,82961829497,61819269295,90068575421,52441004807,45936311872,4220456282,67269907762,
13770762174,62813741183,39898471164,72233110609,65023822152,69578447813,20636110308,7816225723,81106512229,72621540331,40429769964,47764658866,73412291834,56858497880,50387243370,21909767884,92323592191,28875158120,25337607221,30394889440,
31275273326,43677938835,82212846087,68531367565,9121479318,48791429130,54547261002,58934549551,55770195978,936693327,66416493686,94161302449,15441486369,98028409178,50249355057,46903416106,75700167823,62215320290,57212907053,11429138699,
88978903316,11123351145,13718216751,64466187078,58181816812,89059382197,58528031849,36628541147,37405834049,15703244260,77264520961,83374381443,45556929303,23940325743,16191469536,48611559926,47217133395,90166899580,72801415371,30633282254,
43426795821,24631168479,10923049445,57339633048,58559688103,82313723940,75594354723,7855535131,39357489711,3884243150,8804302050,83911385100,45801142460,22014062515,82159500073,7023930311,39877645814,95963132016,3483604517,15748246091,
32480941589,76308912811,87598946940,78861771360,67368002551,24758019426,40263756809,13307530906,17134928903,50457623656,84018953758,54996748607,26193480730,50119546861,78090949516,59509417440,33024856438,54627857709,49773664069,11955165118,
80212652488,9535598802,58821613087,88805915951,18891903705,36417854744,71218778966,55533912358,89322544473,97267721533,50117940458,65767961056,32585474036,98344627667,85897054296,26371562474,87192341986,45667857496,21839419543,99682659499,
19667450895,95792817341,45819594131,7918034762,64714813176,77076920467,50506471731,63203010087,47056852644,60345635995,3960521421,38316896351,31462901299,11272749060,65450604059,59406945943,85438615590,96740650574,85136194226,73844318053,
90811471635,8807748972,14891996275,97828376012,49789711178,16494150748,8126439722,87214125771,24344304760,40382155510,32413124757,76535985822,91497501132,21957556562,67317471090,38727959077,98157192612,84504180715,11602311811,10085061023,
90963075993,34519394228,2886040186,18988601625,25882735159,48100951367,20153637729,18374690114,47584688612,66491936682,97431807040,77036635429,66397525094,50190674165,15713497890,69233284950,11724874884,83201807450,41439519857,15324608294,
87387054609,2563838864,82319462352,69105713741,90510352808,10388480387,75451657703,15549451663,84480926647,76990790046,55698619191,87403382117,61912773741,61957826485,81675010982,69075166414,72927031252,90192599925,31006732849,41572084379,
28278724688,7542674421,38411588882,26720959441,30489100925,54120066404,90150217297,92260710028,17030578478,97890883849,117207334,26196685352,10287640932,28408155683,98258246285,46136362787,64349768832,89456058080,55510908409,67620005849,
86053796044,92063922142,59695744136,87457530035,51494911939,53255677829,16438002558,30139846937,40355893036,54667142874,20173631091,91054869072,73534930155,20524967984,51816718741,1661417795,5136880480,26278362558,27465176808,41452133122,
92110269053,67098913156,99933647904,76728998127,32671167098,57383944015,89304357194,32571813087,87727020969,51678046423,78364386749,43424663272,50881343887,67607571037,80176522916,38292536941,55764553848,60264876453,44219964355,85568148794,
17037687988,10747132446,10839180758,59179124892,66760128515,26362973644,79672472845,47789397373,50579356768,26790304137,6857308668,49712949872,6982069958,21729444687,25537289372,94412928014,3623703379,74317910248,43820993208,35388457196,
88520554615,78257435532,64323670849,5545910629,66569919648,77222536110,87803624806,40472434240,44795559857,81091662637,2640888083,28711938497,41600368610,18023903546,36330301080,78386353421,29692501430,84829351204,85832880731,38702830290,
62828354890,34182428633,7802809575,66565785033,17749057526,55214723237,78434721244,32747597750,43519907262,28666278581,59922801814,20725819144,70201801096,76308933767,36894495516,33610587376,27984677808,88185669589,54371469081,69196499762,
50632300381,26362138210,53930756901,34837241030,25661257763,2960682407,61412337887,89226917985,90930058433,35323953368,52975542024,66275638377,16355022398,50135407180,7366662967,84365691882,87410644481,51745296185,53207851697,6955345152,
24292377091,78667706522,60289237289,61913540308,83119599566,24968310291,92992723620,7054519089,46013954439,79972556700,42691645123,59322647412,63545933091,59434895196,11855520260,81250329651,58423778943,41834684523,38638669337,74932795051,
8482774708,88537345436,75629718461,43288909323,76505826862,28273102213,40979751802,31926026473,97648975856,26421544435,31079103914,80919881178,81843844702,87033238843,73628860176,8559647238,54698555686,12834834621,70620559272,8504245510,
13799197316,64797946650,53107257214,2585061863,65912913902,69129348301,7571554625,37277028230,81179246630,48318231410,29746391221,91183494616,42577297059,63806071558,16354603988,23643167328,62027264829,81402790655,61845978155,1
};
LL num[maxn];
int main()
{
    int tot = 0;
    LL res = 1;
    for (LL i = 1; i <= mod; i += 50000000) num[++tot] = i;
    int T; scanf("%d", &T);
    while (T--)
    {
        LL n; scanf("%lld", &n);
        int pos = lower_bound(num + 1, num + 1 + tot, n) - num;
        LL res = table[pos - 1];
        for (LL i = num[pos - 1] + 1; i <= n; i++)
        {
            LL a = i / 1000000;
            LL b = i % 1000000; b = MOD(res * b);
            res = MOD(res * (LL)(1000000));
            res = MOD(res * a);
            res = MOD(res + b);            
        }
        printf("%lld\n", res);
        
    }
    
    return 0;
}
