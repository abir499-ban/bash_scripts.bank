set ns [new Simulator]

set namfile [open out.nam w]

$ns namtrace-all $namfile

set n0 [$ns node]
set n1 [$ns node]

$ns duplex-link $n0 $n1 1Mb 500ms DropTail

set udp [new Agent/UDP]
set null [new Agent/Null]

$ns attach-agent $n0 $udp
$ns attach-agent $n1 $null
$ns connect $udp $null 

set cbr [new Application/Traffic/CBR]
$cbr attach-agent $udp

proc finish {} {
    global ns namfile
    $ns flush-trace
    close $namfile
    exec nam out.nam & 
    exit 0
}

$ns at 0.5 "$cbr start"
$ns at 4.5 "$cbr stop"
$ns at 5.0 "finish"
$ns run