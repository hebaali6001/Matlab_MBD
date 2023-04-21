function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "session1_MBD_Calculator_"};
	this.sidHashMap["session1_MBD_Calculator_"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "session1_MBD_Calculator_:1"};
	this.sidHashMap["session1_MBD_Calculator_:1"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "session1_MBD_Calculator_:2"};
	this.sidHashMap["session1_MBD_Calculator_:2"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "session1_MBD_Calculator_:3"};
	this.sidHashMap["session1_MBD_Calculator_:3"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "session1_MBD_Calculator_:4"};
	this.sidHashMap["session1_MBD_Calculator_:4"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "session1_MBD_Calculator_:5"};
	this.sidHashMap["session1_MBD_Calculator_:5"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "session1_MBD_Calculator_:6"};
	this.sidHashMap["session1_MBD_Calculator_:6"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Out SUM"] = {sid: "session1_MBD_Calculator_:7"};
	this.sidHashMap["session1_MBD_Calculator_:7"] = {rtwname: "<Root>/Out SUM"};
	this.rtwnameHashMap["<Root>/Out SUB"] = {sid: "session1_MBD_Calculator_:8"};
	this.sidHashMap["session1_MBD_Calculator_:8"] = {rtwname: "<Root>/Out SUB"};
	this.rtwnameHashMap["<Root>/Out MUL"] = {sid: "session1_MBD_Calculator_:9"};
	this.sidHashMap["session1_MBD_Calculator_:9"] = {rtwname: "<Root>/Out MUL"};
	this.rtwnameHashMap["<Root>/Out DIV "] = {sid: "session1_MBD_Calculator_:10"};
	this.sidHashMap["session1_MBD_Calculator_:10"] = {rtwname: "<Root>/Out DIV "};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();