let startBtn = document.getElementById('start');
let stopBtn = document.getElementById('stop');
let resetBtn = document.getElementById('reset');

let hour = 11;
let minute = 59;
let second = 59;
let count = 00;

startBtn.addEventListener('click', function () {
	timer = true
	stopWatch();
});

stopBtn.addEventListener('click', function () {
	timer = false;
});

resetBtn.addEventListener('click', function () {
	timer = false;
	hour = 11;
	minute = 59;
	second = 59;
	count = 0;
	document.getElementById('hr').innerHTML = "11";
	document.getElementById('min').innerHTML = "59";
	document.getElementById('sec').innerHTML = "59";
	document.getElementById('count').innerHTML = "00";
	document.getElementById('time').innerHTML = "PM";
});

function stopWatch() {
	if (timer) {
		count++;

		if (count == 100) {
			second++;
			count = 0;
		}

		if (second == 60) {
			minute++;
			second = 0;
		}

		if (minute == 60) {
			hour++;
			minute = 0;
			second = 0;
	    }
		
		let hrString = hour;
		let minString = minute;
		let secString = second;
		let countString = count;

		if (hour>=12){
			document.getElementById('time').innerHTML = "PM";
				if (hour > 12){
					hrString = hour - 12;
					document.getElementById('time').innerHTML = "PM";
				}
		}
		else{
			document.getElementById('time').innerHTML = "AM";
		}

		if (hrString < 10){
			hrString = "0" + hrString;
		}

		if (hour < 10) {
			hrString = "0" + hour;
		}

		if (minute < 10) {
			minString = "0" + minString;
		}

		if (second < 10) {
			secString = "0" + secString;
		}

		if (count < 10) {
			countString = "0" + countString;
		}

		document.getElementById('hr').innerHTML = hrString;
		document.getElementById('min').innerHTML = minString;
		document.getElementById('sec').innerHTML = secString;
		document.getElementById('count').innerHTML = countString;
		setTimeout(stopWatch, 10);
	}
}
