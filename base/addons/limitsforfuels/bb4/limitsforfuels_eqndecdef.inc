Equations
   QLIMITSFORFUELS_GMAXCF(Y,C,LIMITSFORFUELS_NUMCONMAX)       'Maximum fuel usage per country for a shared max for three fuels'
;

QLIMITSFORFUELS_GMAXCF(IY411,C,LIMITSFORFUELS_INUMCONMAXC)..
    SUM(FFF$(LIMITSFORFUELS_GMAXFSET(LIMITSFORFUELS_INUMCONMAXC,C,FFF)),IGMAXF(IY411,C,FFF)
    + VLIMITSFORFUELS_QGMAXCF(IY411,C,FFF,LIMITSFORFUELS_INUMCONMAXC,'IPLUS') )
         =G=
    SUM(IA$ICA(C,IA),
     SUM(FFF$LIMITSFORFUELS_VGFSET(LIMITSFORFUELS_INUMCONMAXC,C,FFF),
$ifi %VGF%==ST      SUM(G$(IAGK_HASORPOT(IY411,IA,G) AND (GDATA(G,'GDFUEL') EQ FDATA(FFF,'FDACRONYM'))), 1/(1$(LIMITSFORFUELS_CONVFACTOR(FFF)=0)+LIMITSFORFUELS_CONVFACTOR(FFF))*IOF3P6 * SUM((IS3,T), IHOURSINST(IS3,T) * VGF_T(IY411,IA,G,IS3,T)))
$ifi %VGF%==Y      SUM(G$(IAGK_HASORPOT(IY411,IA,G) AND (GDATA(G,'GDFUEL') EQ FDATA(FFF,'FDACRONYM'))), 1/(1$(LIMITSFORFUELS_CONVFACTOR(FFF)=0)+LIMITSFORFUELS_CONVFACTOR(FFF))*IOF3P6 *  VGF_T(IY411,IA,G))
     )
    );