** Variable operation costs
  +  SUM((IA,DR_TECH)$IADR(Y,IA,DR_TECH), DR_DATA(DR_TECH,'DROMVCOST') * SUM((IS3,T), IHOURSINST(IS3,T) * VDR_DOWN(Y,IA,DR_TECH,IS3,T)))

** Fixed operation costs for technologies with investment cost and without
  +  SUM((IA,DR_TECH)$(IADR(Y,IA,DR_TECH) AND DR_DATA(DR_TECH,'DROMFCOST') AND DR_DATA(DR_TECH,'DRINVCOST')), DR_DATA(DR_TECH,'DROMFCOST')  * VDRKN_ACCUMNET(Y,IA,DR_TECH))
  +  SUM((IA,DR_TECH)$(IADR(Y,IA,DR_TECH) AND DR_DATA(DR_TECH,'DROMFCOST') AND NOT DR_DATA(DR_TECH,'DRINVCOST')), DR_DATA(DR_TECH,'DROMFCOST')  * IDR_FX(Y,IA,DR_TECH))

** Investment costs
  +  SUM((IA,DR_TECH)$(IADR(Y,IA,DR_TECH) AND DR_DATA(DR_TECH,'DRINVCOST')),ANNUITYDR(DR_TECH) * DR_DATA(DR_TECH,'DRINVCOST')  * VDRKN_ACCUMNET(Y,IA,DR_TECH))

** Utility loss of delay
*  + SUM(IADR(Y,IA,DR_TECH_SHIFT), DR_DATA(DR_TECH_SHIFT,'DRUTLOSS') * SUM((IS3,T), IHOURSINST(IS3,T) *  VDR_STORE_NEG(Y,IA,DR_TECH_SHIFT,IS3,T)))


