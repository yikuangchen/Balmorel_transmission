* Location of internal parameter delarations used in add-ons
$ifi %BB4%==yes $goto beginbb4

$ifi %HYDROGEN%==yes   $include   "../../base/addons/hydrogen/hydrogen_ipardecdef.inc";

$ifi not %BB4%==yes $goto endoffile

$label  beginbb4

$ifi %HYDROGEN%==yes   $include   "../../base/addons/hydrogen/bb4/hydrogen_ipardecdef.inc";
$ifi %UnitComm%==yes  $include   "../../base/addons/unitcommitment/bb4/uc_ipardecdef.inc";
$ifi %X3V%==yes $include '../../base/addons/x3v/bb4/x3v_ipardecdef.inc';
$ifi %GRIDTARIFFS%==yes  $include   "../../base/addons/GridTariffs/GridTariffs_ipardecdef.inc";
$ifi %TAXES%==yes  $include   "../../base/addons/taxes/tax_ipardecdef.inc";
$ifi %DEMANDRESPONSE%==yes      $include        "../../base/addons/demandresponse/bb4/dr_ipardecdef.inc";
$ifi %FBEU%==yes      $include        "../../base/addons/FlowBased_EU/bb4/flowbased_eu_ipardecdef.inc";
$ifi %STEPWISEKPOT%==YES    $include   "../../base/addons/stepwisekpot/steppot_ipardecdef.inc";
$ifi %VARIABLE_TRIMMING%==yes           $include       "../../base/addons/variable_trimming/bb4/vt_ipardecdef.inc";

$ifi %SCENARIO3OR4%==YES  $include        "../../base/addons/scenario3_4/scen34_ipardecdef.inc";
$label endoffile

