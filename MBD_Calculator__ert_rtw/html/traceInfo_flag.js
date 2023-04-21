function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["session1_MBD_Calculator_.c:41c70"]=1;
    this.traceFlag["session1_MBD_Calculator_.c:49c70"]=1;
    this.traceFlag["session1_MBD_Calculator_.c:57c70"]=1;
    this.traceFlag["session1_MBD_Calculator_.c:65c70"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["session1_MBD_Calculator_.c:41"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:42"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:49"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:50"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:57"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:58"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:65"]=1;
    this.lineTraceFlag["session1_MBD_Calculator_.c:66"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
