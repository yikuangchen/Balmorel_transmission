* Location of parameter definitions used in add-ons

%ONOFFDATALISTING%

$ifi %dflexquant%==yes             $include "../../base/addons/demandflexquant/dflexquant_par.inc";

$ifi %FLOWBASED%==yes $include    "../../base/addons/flowbased/flowbased_pardefine.inc";
*$ifi not %forcedoutage%==''    $include "../../base/addons/forcedoutage/forcedoutage_par.inc";

$ifi %BB4%==yes $goto beginbb4

$ifi %HYDROGEN%==yes  $include   "../../base/addons/hydrogen/hydrogen_pardefine.inc";
*This is only tested for BB1 and BB2:
$ifi %COMBTECH%==yes  $include   "../../base/addons/combtech/combtech_pardefine.inc";

$ifi not %BB4%==yes $goto endoffile

$label  beginbb4

$ifi %X3V%==yes  $include   "../../base/addons/x3v/bb4/x3v_pardefine.inc";
$ifi %HYDROGEN%==yes  $include   "../../base/addons/hydrogen/bb4/hydrogen_pardefine.inc";
$ifi %AGKNDISC%==yes  $include   "../../base/addons/AGKNdisc/bb4/agkndisc_pardefine.inc";
$ifi %COMBTECH%==yes  $include   "../../base/addons/combtech/bb4/combtech_pardefine.inc";
$ifi %STEPWISEPRICE%==yes  $include   "../../base/addons/stepwiseprice/stepwiseprice_pardefine.inc";
$ifi %LIMITSFORFUELS%==yes  $include   "../../base/addons/limitsforfuels/bb4/limitsforfuels_pardefine.inc";
$ifi %UnitComm%==yes  $include   "../../base/addons/unitcommitment/bb4/uc_pardefine.inc";
$ifi %GRIDTARIFFS%==yes  $include   "../../base/addons/GridTariffs/GridTariffs_pardefine.inc";
$ifi %EV%==yes      $include        "../../base/addons/EV/bb4/EV_pardefine.inc";
$ifi %DEMANDRESPONSE%==yes      $include        "../../base/addons/demandresponse/bb4/dr_pardefine.inc";
$ifi %AREA_AGGREGATION%==yes      $include        "../../base/addons/area_aggregation/aa_pardefine.inc";
$ifi %FBEU%==yes      $include        "../../base/addons/FlowBased_EU/bb4/flowbased_eu_pardefine.inc";
$ifi %STEPWISEKPOT%==YES    $include   "../../base/addons/stepwisekpot/steppot_pardefine.inc";

$ifi %SCENARIO3OR4%==YES $include        "../../base/addons/scenario3_4/scen34_pardefine.inc";
$label endoffile

