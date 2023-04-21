function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Session3_MBD_Factorial_Stateflow"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Session3_MBD_Factorial_Stateflow:1"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Session3_MBD_Factorial_Stateflow:2"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:2"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Session3_MBD_Factorial_Stateflow:1"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Session3_MBD_Factorial_Stateflow:3"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:3"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:27"] = {sid: "Session3_MBD_Factorial_Stateflow:1:27"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1:27"] = {rtwname: "<S1>:27"};
	this.rtwnameHashMap["<S1>:28"] = {sid: "Session3_MBD_Factorial_Stateflow:1:28"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1:28"] = {rtwname: "<S1>:28"};
	this.rtwnameHashMap["<S1>:29"] = {sid: "Session3_MBD_Factorial_Stateflow:1:29"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1:29"] = {rtwname: "<S1>:29"};
	this.rtwnameHashMap["<S1>:30"] = {sid: "Session3_MBD_Factorial_Stateflow:1:30"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1:30"] = {rtwname: "<S1>:30"};
	this.rtwnameHashMap["<S1>:31"] = {sid: "Session3_MBD_Factorial_Stateflow:1:31"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1:31"] = {rtwname: "<S1>:31"};
	this.rtwnameHashMap["<S1>:32"] = {sid: "Session3_MBD_Factorial_Stateflow:1:32"};
	this.sidHashMap["Session3_MBD_Factorial_Stateflow:1:32"] = {rtwname: "<S1>:32"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();