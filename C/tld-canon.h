// ***** BEGIN LICENSE BLOCK *****
// Version: MPL 1.1/GPL 2.0/LGPL 2.1
//
// The contents of this file are subject to the Mozilla Public License Version
// 1.1 (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// for the specific language governing rights and limitations under the
// License.
//
// The Original Code is the Public Suffix List.
//
// The Initial Developer of the Original Code is
// Jo Hermans <jo.hermans@gmail.com>.
// Portions created by the Initial Developer are Copyright (C) 2007
// the Initial Developer. All Rights Reserved.
//
// Contributor(s):
//   Ruben Arakelyan <ruben@rubenarakelyan.com>
//   Gervase Markham <gerv@gerv.net>
//   Pamela Greene <pamg.bugs@gmail.com>
//   David Triendl <david@triendl.name>
//   Jothan Frakes <jothan@gmail.com>
//   The kind representatives of many TLD registries
//
// Alternatively, the contents of this file may be used under the terms of
// either the GNU General Public License Version 2 or later (the "GPL"), or
// the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
// in which case the provisions of the GPL or the LGPL are applicable instead
// of those above. If you wish to allow use of your version of this file only
// under the terms of either the GPL or the LGPL, and not to allow others to
// use your version of this file under the terms of the MPL, indicate your
// decision by deleting the provisions above and replace them with the notice
// and other provisions required by the GPL or the LGPL. If you do not delete
// the provisions above, a recipient may use your version of this file under
// the terms of any one of the MPL, the GPL or the LGPL.
//
// ***** END LICENSE BLOCK *****

char* tldString = "root(306:ac(6:com,edu,gov,net,mil,org),ad(1:nom),ae(7:co,net,org,sch,ac,gov,mil),aero(89:accident-investigation,accident-prevention,aerobatic,aeroclub,aerodrome,agents,aircraft,airline,airport,air-surveillance,airtraffic,air-traffic-control,ambulance,amusement,association,author,ballooning,broker,caa,cargo,catering,certification,championship,charter,civilaviation,club,conference,consultant,consulting,control,council,crew,design,dgca,educator,emergency,engine,engineer,entertainment,equipment,exchange,express,federation,flight,freight,fuel,gliding,government,groundhandling,group,hanggliding,homebuilt,insurance,journal,journalist,leasing,logistics,magazine,maintenance,marketplace,media,microlight,modelling,navigation,parachuting,paragliding,passenger-association,pilot,press,production,recreation,repbody,res,research,rotorcraft,safety,scientist,services,show,skydiving,software,student,taxi,trader,trading,trainer,union,workinggroup,works),af(5:gov,com,org,net,edu),ag(5:com,org,net,co,nom),ai(4:off,com,net,org),al(6:com,edu,gov,mil,net,org),am,an(4:com,net,org,edu),ao(6:ed,gv,og,co,pb,it),aq,ar(10:*,congresodelalengua3(1:!),educ(1:!),gobiernoelectronico(1:!),mecon(1:!),nacion(1:!),nic(1:!),promocion(1:!),retina(1:!),uba(1:!)),arpa(6:e164,in-addr,ip6,iris,uri,urn),as(1:gov),asia,at(7:ac,co,gv,or,biz,info,priv),au(11:*,edu(8:act,nsw,nt,qld,sa,tas,vic,wa),gov(7:act,nt,qld,sa,tas,vic,wa),act,nsw,nt,qld,sa,tas,vic,wa),aw(1:com),ax,az(12:com,net,int,gov,org,edu,info,pp,mil,name,pro,biz),ba(10:org,net,edu,gov,mil,unsa,unbi,co,com,rs),bb(8:biz,com,edu,gov,info,net,org,store),bd(1:*),be(1:ac),bf(1:gov),bg(36:a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,0,1,2,3,4,5,6,7,8,9),bh(5:com,edu,net,org,gov),bi(5:co,com,edu,or,org),biz,bj(3:asso,barreau,gouv),bm(5:com,edu,gov,net,org),bn(1:*),bo(9:com,edu,gov,gob,int,org,net,mil,tv),br(68:adm,adv,agr,am,arq,art,ato,b,bio,blog,bmd,can,cim,cng,cnt,com,coop,ecn,edu,emp,eng,esp,etc,eti,far,flog,fm,fnd,fot,fst,g12,ggf,gov,imb,ind,inf,jor,jus,lel,mat,med,mil,mus,net,nom,not,ntr,odo,org,ppg,pro,psc,psi,qsl,radio,rec,slg,srv,taxi,teo,tmp,trd,tur,tv,vet,vlog,wiki,zlg),bs(5:com,net,org,edu,gov),bt(5:com,edu,gov,net,org),bw(2:co,org),by(4:gov,mil,com,of),bz(5:com,net,org,edu,gov),ca(15:ab,bc,mb,nb,nf,nl,ns,nt,nu,on,pe,qc,sk,yk,gc),cat,cc,cd(1:gov),cf,cg,ch,ci(15:org,or,com,co,edu,ed,ac,net,go,asso,aéroport,int,presse,md,gouv),ck(1:*),cl(2:gov,gob),cm(1:gov),cn(44:ac,com,edu,gov,net,org,mil,公司,网络,網絡,ah,bj,cq,fj,gd,gs,gz,gx,ha,hb,he,hi,hl,hn,jl,js,jx,ln,nm,nx,qh,sc,sd,sh,sn,sx,tj,xj,xz,yn,zj,hk,mo,tw),co(13:arts,com,edu,firm,gov,info,int,mil,net,nom,org,rec,web),com,coop,cr(7:ac,co,ed,fi,go,or,sa),cu(6:com,edu,org,net,gov,inf),cv,cx(1:gov),cy(1:*),cz,de,dj,dk,dm(5:com,net,org,edu,gov),do(10:art,com,edu,gob,gov,mil,net,org,sld,web),dz(8:com,org,net,gov,edu,asso,pol,art),ec(12:com,info,net,fin,k12,med,pro,org,edu,gov,gob,mil),edu,ee(10:edu,gov,riik,lib,med,com,pri,aip,org,fie),eg(9:com,edu,eun,gov,mil,name,net,org,sci),er(1:*),es(5:com,nom,org,gob,edu),et(1:*),eu,fi(2:aland,iki),fj(1:*),fk(1:*),fm,fo,fr(23:com,asso,nom,prd,presse,tm,aeroport,assedic,avocat,avoues,cci,chambagri,chirurgiens-dentistes,experts-comptables,geometre-expert,gouv,greta,huissier-justice,medecin,notaires,pharmacien,port,veterinaire),ga,gd,ge(7:com,edu,gov,org,mil,net,pvt),gf,gg(5:co,org,net,sch,gov),gh(5:com,edu,gov,org,mil),gi(6:com,ltd,gov,mod,edu,org),gl,gm,gn(6:ac,com,edu,gov,org,net),gov,gp(6:com,net,mobi,edu,org,asso),gq,gr(5:com,edu,net,org,gov),gs,gt(1:*),gu(1:*),gw,gy(3:co,com,net),hk(21:com,edu,gov,idv,net,org,公司,教育,敎育,政府,個人,个人,箇人,網络,网络,组織,網絡,网絡,组织,組織,組织),hm,hn(6:com,edu,org,net,mil,gob),hr(4:iz,from,name,com),ht(17:com,shop,firm,info,adult,net,pro,org,med,art,coop,pol,asso,edu,rel,gouv,perso),hu(31:co,info,org,priv,sport,tm,2000,agrar,bolt,casino,city,erotica,erotika,film,forum,games,hotel,ingatlan,jogasz,konyvelo,lakas,media,news,reklam,sex,shop,suli,szex,tozsde,utazas,video),id(8:ac,co,go,mil,net,or,sch,web),ie(1:gov),il(1:*),im(6:co(2:ltd,plc),net,gov,org,nic,ac),in(12:co,firm,net,org,gen,ind,nic,ac,edu,res,gov,mil),info,int(1:eu),io(1:com),iq(6:gov,edu,mil,com,org,net),ir(9:ac,co,gov,id,net,org,sch,ایران,ايران),is(6:net,com,edu,gov,org,int),it(277:gov,edu,agrigento,ag,alessandria,al,ancona,an,aosta,aoste,ao,arezzo,ar,ascoli-piceno,ascolipiceno,ap,asti,at,avellino,av,bari,ba,andria-barletta-trani,andriabarlettatrani,trani-barletta-andria,tranibarlettaandria,barletta-trani-andria,barlettatraniandria,andria-trani-barletta,andriatranibarletta,trani-andria-barletta,traniandriabarletta,bt,belluno,bl,benevento,bn,bergamo,bg,biella,bi,bologna,bo,bolzano,bozen,balsan,alto-adige,altoadige,suedtirol,bz,brescia,bs,brindisi,br,cagliari,ca,caltanissetta,cl,campobasso,cb,carboniaiglesias,carbonia-iglesias,iglesias-carbonia,iglesiascarbonia,ci,caserta,ce,catania,ct,catanzaro,cz,chieti,ch,como,co,cosenza,cs,cremona,cr,crotone,kr,cuneo,cn,dell-ogliastra,dellogliastra,ogliastra,og,enna,en,ferrara,fe,fermo,fm,firenze,florence,fi,foggia,fg,forli-cesena,forlicesena,cesena-forli,cesenaforli,fc,frosinone,fr,genova,genoa,ge,gorizia,go,grosseto,gr,imperia,im,isernia,is,laquila,aquila,aq,la-spezia,laspezia,sp,latina,lt,lecce,le,lecco,lc,livorno,li,lodi,lo,lucca,lu,macerata,mc,mantova,mn,massa-carrara,massacarrara,carrara-massa,carraramassa,ms,matera,mt,medio-campidano,mediocampidano,campidano-medio,campidanomedio,vs,messina,me,milano,milan,mi,modena,mo,monza,monza-brianza,monzabrianza,monzaebrianza,monzaedellabrianza,monza-e-della-brianza,mb,napoli,naples,na,novara,no,nuoro,nu,oristano,or,padova,padua,pd,palermo,pa,parma,pr,pavia,pv,perugia,pg,pescara,pe,pesaro-urbino,pesarourbino,urbino-pesaro,urbinopesaro,pu,piacenza,pc,pisa,pi,pistoia,pt,pordenone,pn,potenza,pz,prato,po,ragusa,rg,ravenna,ra,reggio-calabria,reggiocalabria,rc,reggio-emilia,reggioemilia,re,rieti,ri,rimini,rn,roma,rome,rm,rovigo,ro,salerno,sa,sassari,ss,savona,sv,siena,si,siracusa,sr,sondrio,so,taranto,ta,tempio-olbia,tempioolbia,olbia-tempio,olbiatempio,ot,teramo,te,terni,tr,torino,turin,to,trapani,tp,trento,trentino,tn,treviso,tv,trieste,ts,udine,ud,varese,va,venezia,venice,ve,verbania,vb,vercelli,vc,verona,vr,vibo-valentia,vibovalentia,vv,vicenza,vi,viterbo,vt),je(5:co,org,net,sch,gov),jm(1:*),jo(8:com,org,net,edu,sch,gov,mil,name),jobs,jp(63:ac,ad,co,ed,go,gr,lg,ne,or,aichi(2:*,pref(1:!)),akita(2:*,pref(1:!)),aomori(2:*,pref(1:!)),chiba(3:*,pref(1:!),city(1:!)),ehime(2:*,pref(1:!)),fukui(2:*,pref(1:!)),fukuoka(3:*,pref(1:!),city(1:!)),fukushima(2:*,pref(1:!)),gifu(2:*,pref(1:!)),gunma(2:*,pref(1:!)),hiroshima(3:*,pref(1:!),city(1:!)),hokkaido(2:*,pref(1:!)),hyogo(2:*,pref(1:!)),ibaraki(2:*,pref(1:!)),ishikawa(2:*,pref(1:!)),iwate(2:*,pref(1:!)),kagawa(2:*,pref(1:!)),kagoshima(2:*,pref(1:!)),kanagawa(2:*,pref(1:!)),kawasaki(2:*,city(1:!)),kitakyushu(2:*,city(1:!)),kobe(2:*,city(1:!)),kochi(2:*,pref(1:!)),kumamoto(2:*,pref(1:!)),kyoto(3:*,pref(1:!),city(1:!)),mie(2:*,pref(1:!)),miyagi(2:*,pref(1:!)),miyazaki(2:*,pref(1:!)),nagano(2:*,pref(1:!)),nagasaki(2:*,pref(1:!)),nagoya(2:*,city(1:!)),nara(2:*,pref(1:!)),niigata(3:*,pref(1:!),city(1:!)),oita(2:*,pref(1:!)),okayama(3:*,pref(1:!),city(1:!)),okinawa(2:*,pref(1:!)),osaka(3:*,pref(1:!),city(1:!)),saga(2:*,pref(1:!)),saitama(3:*,pref(1:!),city(1:!)),sapporo(2:*,city(1:!)),sendai(2:*,city(1:!)),shiga(2:*,pref(1:!)),shimane(2:*,pref(1:!)),shizuoka(3:*,pref(1:!),city(1:!)),tochigi(2:*,pref(1:!)),tokushima(2:*,pref(1:!)),tokyo(2:*,metro(1:!)),tottori(2:*,pref(1:!)),toyama(2:*,pref(1:!)),wakayama(2:*,pref(1:!)),yamagata(2:*,pref(1:!)),yamaguchi(2:*,pref(1:!)),yamanashi(2:*,pref(1:!)),yokohama(2:*,city(1:!))),ke(1:*),kg(6:org,net,com,edu,gov,mil),kh(1:*),ki(7:edu,biz,net,org,gov,info,com),km(17:org,nom,gov,prd,tm,edu,mil,ass,com,coop,asso,presse,medecin,notaires,pharmaciens,veterinaire,gouv),kn(4:net,org,edu,gov),kp(6:com,edu,gov,org,rep,tra),kr(29:ac,co,es,go,hs,kg,mil,ms,ne,or,pe,re,sc,busan,chungbuk,chungnam,daegu,daejeon,gangwon,gwangju,gyeongbuk,gyeonggi,gyeongnam,incheon,jeju,jeonbuk,jeonnam,seoul,ulsan),kw(1:*),ky(5:edu,gov,com,org,net),kz(6:org,edu,net,gov,mil,com),la(9:int,net,info,edu,gov,per,com,org,c),lb(5:com,edu,gov,net,org),lc(6:com,net,co,org,edu,gov),li,lk(14:gov,sch,net,int,com,org,edu,ngo,soc,web,ltd,assn,grp,hotel),local,lr(5:com,edu,gov,org,net),ls(2:co,org),lt(1:gov),lu,lv(9:com,edu,gov,org,mil,id,net,asn,conf),ly(9:com,net,gov,plc,edu,sch,med,org,id),ma(6:co,net,gov,org,ac,press),mc(2:tm,asso),md,me(8:co,net,org,edu,ac,gov,its,priv),mg(8:org,nom,gov,prd,tm,edu,mil,com),mh,mil,mk(7:com,org,net,edu,gov,inf,name),ml(7:com,edu,gouv,gov,net,org,presse),mm(1:*),mn(3:gov,edu,org),mo(5:com,net,org,edu,gov),mobi,mp,mq,mr(1:gov),ms,mt(1:*),mu(7:com,net,org,gov,ac,co,or),museum(548:academy,agriculture,air,airguard,alabama,alaska,amber,ambulance,american,americana,americanantiques,americanart,amsterdam,and,annefrank,anthro,anthropology,antiques,aquarium,arboretum,archaeological,archaeology,architecture,art,artanddesign,artcenter,artdeco,arteducation,artgallery,arts,artsandcrafts,asmatart,assassination,assisi,association,astronomy,atlanta,austin,australia,automotive,aviation,axis,badajoz,baghdad,bahn,bale,baltimore,barcelona,baseball,basel,baths,bauern,beauxarts,beeldengeluid,bellevue,bergbau,berkeley,berlin,bern,bible,bilbao,bill,birdart,birthplace,bonn,boston,botanical,botanicalgarden,botanicgarden,botany,brandywinevalley,brasil,bristol,british,britishcolumbia,broadcast,brunel,brussel,brussels,bruxelles,building,burghof,bus,bushey,cadaques,california,cambridge,can,canada,capebreton,carrier,cartoonart,casadelamoneda,castle,castres,celtic,center,chattanooga,cheltenham,chesapeakebay,chicago,children,childrens,childrensgarden,chiropractic,chocolate,christiansburg,cincinnati,cinema,circus,civilisation,civilization,civilwar,clinton,clock,coal,coastaldefence,cody,coldwar,collection,colonialwilliamsburg,coloradoplateau,columbia,columbus,communication,communications,community,computer,computerhistory,comunicações,contemporary,contemporaryart,convent,copenhagen,corporation,correios-e-telecomunicações,corvette,costume,countryestate,county,crafts,cranbrook,creation,cultural,culturalcenter,culture,cyber,cymru,dali,dallas,database,ddr,decorativearts,delaware,delmenhorst,denmark,depot,design,detroit,dinosaur,discovery,dolls,donostia,durham,eastafrica,eastcoast,education,educational,egyptian,eisenbahn,elburg,elvendrell,embroidery,encyclopedic,england,entomology,environment,environmentalconservation,epilepsy,essex,estate,ethnology,exeter,exhibition,family,farm,farmequipment,farmers,farmstead,field,figueres,filatelia,film,fineart,finearts,finland,flanders,florida,force,fortmissoula,fortworth,foundation,francaise,frankfurt,franziskaner,freemasonry,freiburg,fribourg,frog,fundacio,furniture,gallery,garden,gateway,geelvinck,gemological,geology,georgia,giessen,glas,glass,gorge,grandrapids,graz,guernsey,halloffame,hamburg,handson,harvestcelebration,hawaii,health,heimatunduhren,hellas,helsinki,hembygdsforbund,heritage,histoire,historical,historicalsociety,historichouses,historisch,historisches,history,historyofscience,horology,house,humanities,illustration,imageandsound,indian,indiana,indianapolis,indianmarket,intelligence,interactive,iraq,iron,isleofman,jamison,jefferson,jerusalem,jewelry,jewish,jewishart,jfk,journalism,judaica,judygarland,juedisches,juif,karate,karikatur,kids,koebenhavn,koeln,kunst,kunstsammlung,kunstunddesign,labor,labour,lajolla,lancashire,landes,lans,läns,larsson,lewismiller,lincoln,linz,living,livinghistory,localhistory,london,losangeles,louvre,loyalist,lucerne,luxembourg,luzern,mad,madrid,mallorca,manchester,mansion,mansions,manx,marburg,maritime,maritimo,maryland,marylhurst,media,medical,medizinhistorisches,meeres,memorial,mesaverde,michigan,midatlantic,military,mill,miners,mining,minnesota,missile,missoula,modern,moma,money,monmouth,monticello,montreal,moscow,motorcycle,muenchen,muenster,mulhouse,muncie,museet,museumcenter,museumvereniging,music,national,nationalfirearms,nationalheritage,nativeamerican,naturalhistory,naturalhistorymuseum,naturalsciences,nature,naturhistorisches,natuurwetenschappen,naumburg,naval,nebraska,neues,newhampshire,newjersey,newmexico,newport,newspaper,newyork,niepce,norfolk,north,nrw,nuernberg,nuremberg,nyc,nyny,oceanographic,oceanographique,omaha,online,ontario,openair,oregon,oregontrail,otago,oxford,pacific,paderborn,palace,paleo,palmsprings,panama,paris,pasadena,pharmacy,philadelphia,philadelphiaarea,philately,phoenix,photography,pilots,pittsburgh,planetarium,plantation,plants,plaza,portal,portland,portlligat,posts-and-telecommunications,preservation,presidio,press,project,public,pubol,quebec,railroad,railway,research,resistance,riodejaneiro,rochester,rockart,roma,russia,saintlouis,salem,salvadordali,salzburg,sandiego,sanfrancisco,santabarbara,santacruz,santafe,saskatchewan,satx,savannahga,schlesisches,schoenbrunn,schokoladen,school,schweiz,science,scienceandhistory,scienceandindustry,sciencecenter,sciencecenters,science-fiction,sciencehistory,sciences,sciencesnaturelles,scotland,seaport,settlement,settlers,shell,sherbrooke,sibenik,silk,ski,skole,society,sologne,soundandvision,southcarolina,southwest,space,spy,square,stadt,stalbans,starnberg,state,stateofdelaware,station,steam,steiermark,stjohn,stockholm,stpetersburg,stuttgart,suisse,surgeonshall,surrey,svizzera,sweden,sydney,tank,tcm,technology,telekommunikation,television,texas,textile,theater,time,timekeeping,topology,torino,touch,town,transport,tree,trolley,trust,trustee,uhren,ulm,undersea,university,usa,usantiques,usarts,uscountryestate,usculture,usdecorativearts,usgarden,ushistory,ushuaia,uslivinghistory,utah,uvic,valley,vantaa,versailles,viking,village,virginia,virtual,virtuel,vlaanderen,volkenkunde,wales,wallonie,war,washingtondc,watchandclock,watch-and-clock,western,westfalen,whaling,wildlife,williamsburg,windmill,workshop,york,yorkshire,yosemite,youth,zoological,zoology,ירושלים,иком),mv(14:aero,biz,com,coop,edu,gov,info,int,mil,museum,name,net,org,pro),mw(11:ac,biz,co,com,coop,edu,gov,int,museum,net,org),mx(5:com,org,gob,edu,net),my(7:com,net,org,gov,edu,mil,name),mz(1:*),na(17:info,pro,name,school,or,dr,us,mx,ca,in,cc,tv,ws,mobi,co,com,org),name,nc(1:asso),ne,net(4:gb,se,uk,za),nf(10:com,net,per,rec,web,arts,firm,info,other,store),ng(6:ac,com,edu,gov,net,org),ni(1:*),nl(2:bv,co),no(725:fhs,vgs,fylkesbibl,folkebibl,museum,idrett,priv,mil,stat,dep,kommune,herad,aa(1:gs),ah(1:gs),bu(1:gs),fm(1:gs),hl(1:gs),hm(1:gs),jan-mayen(1:gs),mr(1:gs),nl(1:gs),nt(1:gs),of(1:gs),ol(1:gs),oslo(1:gs),rl(1:gs),sf(1:gs),st(1:gs),svalbard(1:gs),tm(1:gs),tr(1:gs),va(1:gs),vf(1:gs),akrehamn,åkrehamn,algard,ålgård,arna,brumunddal,bryne,bronnoysund,brønnøysund,drobak,drøbak,egersund,fetsund,floro,florø,fredrikstad,hokksund,honefoss,hønefoss,jessheim,jorpeland,jørpeland,kirkenes,kopervik,krokstadelva,langevag,langevåg,leirvik,mjondalen,mjøndalen,mo-i-rana,mosjoen,mosjøen,nesoddtangen,orkanger,osoyro,osøyro,raholt,råholt,sandnessjoen,sandnessjøen,skedsmokorset,slattum,spjelkavik,stathelle,stavern,stjordalshalsen,stjørdalshalsen,tananger,tranby,vossevangen,afjord,åfjord,agdenes,al,ål,alesund,ålesund,alstahaug,alta,áltá,alaheadju,álaheadju,alvdal,amli,åmli,amot,åmot,andebu,andoy,andøy,andasuolo,ardal,årdal,aremark,arendal,ås,aseral,åseral,asker,askim,askvoll,askoy,askøy,asnes,åsnes,audnedaln,aukra,aure,aurland,aurskog-holand,aurskog-høland,austevoll,austrheim,averoy,averøy,balestrand,ballangen,balat,bálát,balsfjord,bahccavuotna,báhccavuotna,bamble,bardu,beardu,beiarn,bajddar,bájddar,baidar,báidár,berg,bergen,berlevag,berlevåg,bearalvahki,bearalváhki,bindal,birkenes,bjarkoy,bjarkøy,bjerkreim,bjugn,bodo,bodø,badaddja,bådåddjå,budejju,bokn,bremanger,bronnoy,brønnøy,bygland,bykle,barum,bærum,telemark(2:bo,bø),nordland(4:bo,bø,heroy,herøy),bievat,bievát,bomlo,bømlo,batsfjord,båtsfjord,bahcavuotna,báhcavuotna,dovre,drammen,drangedal,dyroy,dyrøy,donna,dønna,eid,eidfjord,eidsberg,eidskog,eidsvoll,eigersund,elverum,enebakk,engerdal,etne,etnedal,evenes,evenassi,evenášši,evje-og-hornnes,farsund,fauske,fuossko,fuoisku,fedje,fet,finnoy,finnøy,fitjar,fjaler,fjell,flakstad,flatanger,flekkefjord,flesberg,flora,fla,flå,folldal,forsand,fosnes,frei,frogn,froland,frosta,frana,fræna,froya,frøya,fusa,fyresdal,forde,førde,gamvik,gangaviika,gáŋgaviika,gaular,gausdal,gildeskal,gildeskål,giske,gjemnes,gjerdrum,gjerstad,gjesdal,gjovik,gjøvik,gloppen,gol,gran,grane,granvin,gratangen,grimstad,grong,kraanghke,kråanghke,grue,gulen,hadsel,halden,halsa,hamar,hamaroy,habmer,hábmer,hapmir,hápmir,hammerfest,hammarfeasta,hámmárfeasta,haram,hareid,harstad,hasvik,aknoluokta,ákŋoluokta,hattfjelldal,aarborte,haugesund,hemne,hemnes,hemsedal,more-og-romsdal(2:heroy,sande),møre-og-romsdal(2:herøy,sande),hitra,hjartdal,hjelmeland,hobol,hobøl,hof,hol,hole,holmestrand,holtalen,holtålen,hornindal,horten,hurdal,hurum,hvaler,hyllestad,hagebostad,hægebostad,hoyanger,høyanger,hoylandet,høylandet,ha,hå,ibestad,inderoy,inderøy,iveland,jevnaker,jondal,jolster,jølster,karasjok,karasjohka,kárášjohka,karlsoy,galsa,gálsá,karmoy,karmøy,kautokeino,guovdageaidnu,klepp,klabu,klæbu,kongsberg,kongsvinger,kragero,kragerø,kristiansand,kristiansund,krodsherad,krødsherad,kvalsund,rahkkeravju,ráhkkerávju,kvam,kvinesdal,kvinnherad,kviteseid,kvitsoy,kvitsøy,kvafjord,kvæfjord,giehtavuoatna,kvanangen,kvænangen,navuotna,návuotna,kafjord,kåfjord,gaivuotna,gáivuotna,larvik,lavangen,lavagis,loabat,loabát,lebesby,davvesiida,leikanger,leirfjord,leka,leksvik,lenvik,leangaviika,leaŋgaviika,lesja,levanger,lier,lierne,lillehammer,lillesand,lindesnes,lindas,lindås,lom,loppa,lahppi,láhppi,lund,lunner,luroy,lurøy,luster,lyngdal,lyngen,ivgu,lardal,lerdal,lærdal,lodingen,lødingen,lorenskog,lørenskog,loten,løten,malvik,masoy,måsøy,muosat,muosát,mandal,marker,marnardal,masfjorden,meland,meldal,melhus,meloy,meløy,meraker,meråker,moareke,moåreke,midsund,midtre-gauldal,modalen,modum,molde,moskenes,moss,mosvik,malselv,målselv,malatvuopmi,málatvuopmi,namdalseid,aejrie,namsos,namsskogan,naamesjevuemie,nååmesjevuemie,laakesvuemie,nannestad,narvik,narviika,naustdal,nedre-eiker,akershus(1:nes),buskerud(1:nes),nesna,nesodden,nesseby,unjarga,unjárga,nesset,nissedal,nittedal,nord-aurdal,nord-fron,nord-odal,norddal,nordkapp,davvenjarga,davvenjárga,nordre-land,nordreisa,raisa,ráisa,nore-og-uvdal,notodden,naroy,nærøy,notteroy,nøtterøy,odda,oksnes,øksnes,oppdal,oppegard,oppegård,orkdal,orland,ørland,orskog,ørskog,orsta,ørsta,hedmark(3:os,valer,våler),hordaland(1:os),osen,osteroy,osterøy,ostre-toten,østre-toten,overhalla,ovre-eiker,øvre-eiker,oyer,øyer,oygarden,øygarden,oystre-slidre,øystre-slidre,porsanger,porsangu,porsáŋgu,porsgrunn,radoy,radøy,rakkestad,rana,ruovat,randaberg,rauma,rendalen,rennebu,rennesoy,rennesøy,rindal,ringebu,ringerike,ringsaker,rissa,risor,risør,roan,rollag,rygge,ralingen,rælingen,rodoy,rødøy,romskog,rømskog,roros,røros,rost,røst,royken,røyken,royrvik,røyrvik,rade,råde,salangen,siellak,saltdal,salat,sálát,sálat,samnanger,vestfold(1:sande),sandefjord,sandnes,sandoy,sandøy,sarpsborg,sauda,sauherad,sel,selbu,selje,seljord,sigdal,siljan,sirdal,skaun,skedsmo,ski,skien,skiptvet,skjervoy,skjervøy,skierva,skiervá,skjak,skjåk,skodje,skanland,skånland,skanit,skánit,smola,smøla,snillfjord,snasa,snåsa,snoasa,snaase,snåase,sogndal,sokndal,sola,solund,songdalen,sortland,spydeberg,stange,stavanger,steigen,steinkjer,stjordal,stjørdal,stokke,stor-elvdal,stord,stordal,storfjord,omasvuotna,strand,stranda,stryn,sula,suldal,sund,sunndal,surnadal,sveio,svelvik,sykkylven,sogne,søgne,somna,sømna,sondre-land,søndre-land,sor-aurdal,sør-aurdal,sor-fron,sør-fron,sor-odal,sør-odal,sor-varanger,sør-varanger,matta-varjjat,mátta-várjjat,sorfold,sørfold,sorreisa,sørreisa,sorum,sørum,tana,deatnu,time,tingvoll,tinn,tjeldsund,dielddanuorri,tjome,tjøme,tokke,tolga,torsken,tranoy,tranøy,tromso,tromsø,tromsa,romsa,trondheim,troandin,trysil,trana,træna,trogstad,trøgstad,tvedestrand,tydal,tynset,tysfjord,divtasvuodna,divttasvuotna,tysnes,tysvar,tysvær,tonsberg,tønsberg,ullensaker,ullensvang,ulvik,utsira,vadso,vadsø,cahcesuolo,čáhcesuolo,vaksdal,valle,vang,vanylven,vardo,vardø,varggat,várggát,vefsn,vaapste,vega,vegarshei,vegårshei,vennesla,verdal,verran,vestby,vestnes,vestre-slidre,vestre-toten,vestvagoy,vestvågøy,vevelstad,vik,vikna,vindafjord,volda,voss,varoy,værøy,vagan,vågan,voagat,vagsoy,vågsøy,vaga,vågå,ostfold(1:valer),østfold(1:våler),co),np(1:*),nr(7:biz,info,gov,edu,org,net,com),nu,nz(1:*),om(11:*,mediaphone(1:!),nawrastelecom(1:!),nawras(1:!),omanmobile(1:!),omanpost(1:!),omantel(1:!),rakpetroleum(1:!),siemens(1:!),songfest(1:!),statecouncil(1:!)),org(2:ae,za),pa(11:ac,gob,com,org,sld,edu,net,ing,abo,med,nom),pe(7:edu,gob,nom,mil,org,com,net),pf(3:com,org,edu),pg(1:*),ph(8:com,net,org,gov,edu,ngo,mil,i),pk(14:com,net,edu,org,fam,biz,web,gov,gob,gok,gon,gop,gos,info),pl(171:aid,agro,atm,auto,biz,com,edu,gmina,gsm,info,mail,miasta,media,mil,net,nieruchomosci,nom,org,pc,powiat,priv,realestate,rel,sex,shop,sklep,sos,szkola,targi,tm,tourism,travel,turystyka,6bone,art,mbone,gov(9:uw,um,ug,upow,starostwo,so,sr,po,pa),ngo,irc,usenet,augustow,babia-gora,bedzin,beskidy,bialowieza,bialystok,bielawa,bieszczady,boleslawiec,bydgoszcz,bytom,cieszyn,czeladz,czest,dlugoleka,elblag,elk,glogow,gniezno,gorlice,grajewo,ilawa,jaworzno,jelenia-gora,jgora,kalisz,kazimierz-dolny,karpacz,kartuzy,kaszuby,katowice,kepno,ketrzyn,klodzko,kobierzyce,kolobrzeg,konin,konskowola,kutno,lapy,lebork,legnica,lezajsk,limanowa,lomza,lowicz,lubin,lukow,malbork,malopolska,mazowsze,mazury,mielec,mielno,mragowo,naklo,nowaruda,nysa,olawa,olecko,olkusz,olsztyn,opoczno,opole,ostroda,ostroleka,ostrowiec,ostrowwlkp,pila,pisz,podhale,podlasie,polkowice,pomorze,pomorskie,prochowice,pruszkow,przeworsk,pulawy,radom,rawa-maz,rybnik,rzeszow,sanok,sejny,siedlce,slask,slupsk,sosnowiec,stalowa-wola,skoczow,starachowice,stargard,suwalki,swidnica,swiebodzin,swinoujscie,szczecin,szczytno,tarnobrzeg,tgory,turek,tychy,ustka,walbrzych,warmia,warszawa,waw,wegrow,wielun,wlocl,wloclawek,wodzislaw,wolomin,wroclaw,zachpomor,zagan,zarow,zgora,zgorzelec,gda,gdansk,gdynia,med,sopot,gliwice,krakow,poznan,wroc,zakopane,co),pn(5:gov,co,org,edu,net),pr(13:com,net,org,gov,edu,isla,pro,biz,info,name,est,prof,ac),pro(7:aca,bar,cpa,jur,law,med,eng),ps(7:edu,gov,sec,plo,com,org,net),pt(8:net,gov,org,edu,int,publ,com,nome),pw(6:co,ne,or,ed,go,belau),py(1:*),qa(1:*),re(3:com,asso,nom),ro(11:com,org,tm,nt,nom,info,rec,arts,firm,store,www),rs(6:co,org,edu,ac,gov,in),ru(133:ac,com,edu,int,net,org,pp,adygeya,altai,amur,arkhangelsk,astrakhan,bashkiria,belgorod,bir,bryansk,buryatia,cbg,chel,chelyabinsk,chita,chukotka,chuvashia,dagestan,dudinka,e-burg,grozny,irkutsk,ivanovo,izhevsk,jar,joshkar-ola,kalmykia,kaluga,kamchatka,karelia,kazan,kchr,kemerovo,khabarovsk,khakassia,khv,kirov,koenig,komi,kostroma,krasnoyarsk,kuban,kurgan,kursk,lipetsk,magadan,mari,mari-el,marine,mordovia,mosreg,msk,murmansk,nalchik,nnov,nov,novosibirsk,nsk,omsk,orenburg,oryol,palana,penza,perm,pskov,ptz,rnd,ryazan,sakhalin,samara,saratov,simbirsk,smolensk,spb,stavropol,stv,surgut,tambov,tatarstan,tom,tomsk,tsaritsyn,tsk,tula,tuva,tver,tyumen,udm,udmurtia,ulan-ude,vladikavkaz,vladimir,vladivostok,volgograd,vologda,voronezh,vrn,vyatka,yakutia,yamal,yaroslavl,yekaterinburg,yuzhno-sakhalinsk,amursk,baikal,cmw,fareast,jamal,kms,k-uralsk,kustanai,kuzbass,magnitka,mytis,nakhodka,nkz,norilsk,oskol,pyatigorsk,rubtsovsk,snz,syzran,vdonsk,zgrad,gov,mil,test),rw(9:gov,net,edu,ac,com,co,int,mil,gouv),sa(8:com,net,org,gov,med,pub,edu,sch),sb(5:com,edu,gov,net,org),sc(5:com,gov,net,org,edu),sd(7:com,net,org,edu,med,gov,info),se(40:a,ac,b,bd,brand,c,d,e,f,fh,fhsk,fhv,g,h,i,k,komforb,kommunalforbund,komvux,l,lanbib,m,n,naturbruksgymn,o,org,p,parti,pp,press,r,s,sshn,t,tm,u,w,x,y,z),sg(6:com,net,org,gov,edu,per),sh,si,sk,sl(5:com,net,edu,gov,org),sm,sn(7:art,com,edu,gouv,org,perso,univ),so(3:com,net,org),sr,st(12:co,com,consulado,edu,embaixada,gov,mil,net,org,principe,saotome,store),su,sv(1:*),sy(6:edu,gov,net,mil,com,org),sz(3:co,ac,org),tc,td,tel,tf,tg,th(7:ac,co,go,in,mi,net,or),tj(15:ac,biz,co,com,edu,go,gov,int,mil,name,net,nic,org,test,web),tk,tl(1:gov),tm,tn(20:com,ens,fin,gov,ind,intl,nat,net,org,info,perso,tourism,edunet,rnrt,rns,rnu,mincom,agrinet,defense,turen),to(6:com,gov,net,org,edu,mil),tr(3:*,nic(1:!),nc(1:gov)),travel,tt(17:co,com,org,net,biz,info,pro,int,coop,jobs,mobi,travel,museum,aero,name,gov,edu),tv,tw(13:edu,gov,mil,com,net,org,idv,game,ebiz,club,網路,組織,商業),tz(7:ac,co,go,mil,ne,or,sc),ua(52:com,edu,gov,in,net,org,cherkassy,chernigov,chernovtsy,ck,cn,crimea,cv,dn,dnepropetrovsk,donetsk,dp,if,ivano-frankivsk,kh,kharkov,kherson,khmelnitskiy,kiev,kirovograd,km,kr,ks,kv,lg,lugansk,lutsk,lviv,mk,nikolaev,od,odessa,pl,poltava,rovno,rv,sebastopol,sumy,te,ternopil,uzhgorod,vinnica,vn,zaporizhzhe,zp,zhitomir,zt),ug(6:co,ac,sc,go,ne,or),uk(14:*,sch(1:*),bl(1:!),british-library(1:!),icnet(1:!),jet(1:!),mod(1:!),nel(1:!),nhs(1:!),nic(1:!),nls(1:!),national-library-scotland(1:!),parliament(1:!),police(1:!)),us(60:dni,fed,isa,kids,nsn,ak(3:k12,cc,lib),al(3:k12,cc,lib),ar(3:k12,cc,lib),as(3:k12,cc,lib),az(3:k12,cc,lib),ca(3:k12,cc,lib),co(3:k12,cc,lib),ct(3:k12,cc,lib),dc(3:k12,cc,lib),de(3:k12,cc,lib),fl(3:k12,cc,lib),ga(3:k12,cc,lib),gu(3:k12,cc,lib),hi(2:cc,lib),ia(3:k12,cc,lib),id(3:k12,cc,lib),il(3:k12,cc,lib),in(3:k12,cc,lib),ks(3:k12,cc,lib),ky(3:k12,cc,lib),la(3:k12,cc,lib),ma(3:k12(3:pvt,chtr,paroch),cc,lib),md(3:k12,cc,lib),me(3:k12,cc,lib),mi(3:k12,cc,lib),mn(3:k12,cc,lib),mo(3:k12,cc,lib),ms(3:k12,cc,lib),mt(3:k12,cc,lib),nc(3:k12,cc,lib),nd(3:k12,cc,lib),ne(3:k12,cc,lib),nh(3:k12,cc,lib),nj(3:k12,cc,lib),nm(3:k12,cc,lib),nv(3:k12,cc,lib),ny(3:k12,cc,lib),oh(3:k12,cc,lib),ok(3:k12,cc,lib),or(3:k12,cc,lib),pa(3:k12,cc,lib),pr(3:k12,cc,lib),ri(3:k12,cc,lib),sc(3:k12,cc,lib),sd(3:k12,cc,lib),tn(3:k12,cc,lib),tx(3:k12,cc,lib),ut(3:k12,cc,lib),vi(3:k12,cc,lib),vt(3:k12,cc,lib),va(3:k12,cc,lib),wa(3:k12,cc,lib),wi(3:k12,cc,lib),wv(3:k12,cc,lib),wy(3:k12,cc,lib)),uy(1:*),uz(2:com,co),va,vc(6:com,net,org,gov,mil,edu),ve(1:*),vg,vi(5:co,com,k12,net,org),vn(12:com,net,org,edu,gov,int,ac,biz,info,name,pro,health),vu,ws(5:com,net,org,gov,edu),امارات,বাংলা,中国,中國,الجزائر,مصر,გე,香港,भारत,بھارت,భారత్,ભારત,ਭਾਰਤ,ভারত,இந்தியா,ایران,ايران,الاردن,한국,ලංකා,இலங்கை,المغرب,عمان,فلسطين,срб,рф,قطر,السعودية,السعودیة,السعودیۃ,السعوديه,سورية,سوريا,新加坡,சிங்கப்பூர்,ไทย,تونس,台灣,台湾,臺灣,укр,اليمن,xxx,ye(1:*),yu(1:*),za(1:*),zm(1:*),zw(1:*))";

