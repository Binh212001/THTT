function phuongphapchiadoi() {
  let a, b, c, d, x, y, k, n;
  n = document.getElementById("n").value;
  a = document.getElementById("a").value;
  b = document.getElementById("b").value;
  c = document.getElementById("c").value;
  d = document.getElementById("d").value;
  x = document.getElementById("x").value;
  y = document.getElementById("y").value;
  k = x + y;
  console.log("🚀 ~ phuongphapchiadoi ~ j:", j);

  for (i = 0; i < n; i++) {
    value1 = ((a * x) ^ 3) + ((b * x) ^ 2) + c * x + d;
    value2 = ((a * y) ^ 3) + ((b * y) ^ 2) + c * y + d;
    if (value1 > 0 && value2 > 0) {
      x = k;
    } else if (value1 < 0 && value2 < 0) {
      x = k;
    } else {
      y = k;
    }
    k = x + y;
    console.log(`${x} ----------${y}-------------${k}`);
  }
}
