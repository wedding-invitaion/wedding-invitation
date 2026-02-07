<!DOCTYPE html>
<html lang="id">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Wedding Invitation</title>

<style>
@import url('https://fonts.googleapis.com/css2?family=Playfair+Display:wght@600&family=Poppins:wght@300;500&display=swap');

/* RESET */
*{
  margin:0;
  padding:0;
  box-sizing:border-box;
  font-family:'Poppins',sans-serif;
}

/* BODY */
body{
  background:#05010d;
  overflow:hidden;
}

/* BACKGROUND */
#lockScreen{
  position:fixed;
  inset:0;
  background:radial-gradient(circle at top,#40345f,#120a25,#05010d);
  display:flex;
  justify-content:center;
  align-items:center;
  transition:1.2s ease;
}

/* PARTICLES */
.particle{
  position:absolute;
  top:-10px;
  width:5px;
  height:5px;
  background:radial-gradient(circle,#fff,#ffd98a);
  border-radius:50%;
  opacity:.85;
  filter:blur(.6px);
  animation:fall linear infinite;
}

@keyframes fall{
  to{
    transform:translateY(110vh);
    opacity:0;
  }
}

/* FRAME */
.frame{
  padding:6px;
  border-radius:30px;
  background:linear-gradient(
    270deg,
    #ffd98a,
    #6a5acd,
    #00c6ff,
    #ffd98a
  );
  background-size:600% 600%;
  animation:borderMove 6s ease infinite;
}

@keyframes borderMove{
  0%{background-position:0% 50%}
  50%{background-position:100% 50%}
  100%{background-position:0% 50%}
}

/* CARD */
.card{
  background:linear-gradient(180deg,#0e1a25,#05010d);
  border-radius:26px;
  padding:36px 28px;
  width:340px;
  text-align:center;
  color:#fff;
  position:relative;
  animation:breathingLight 6s ease-in-out infinite;
}

@keyframes breathingLight{
  0%,100%{
    box-shadow:0 0 22px rgba(255,217,138,.3);
  }
  50%{
    box-shadow:0 0 60px rgba(255,217,138,.6);
  }
}

/* HALO */
.card::after{
  content:'';
  position:absolute;
  inset:-18px;
  border-radius:34px;
  background:radial-gradient(circle,rgba(255,217,138,.45),transparent 70%);
  filter:blur(22px);
  z-index:-1;
  animation:haloPulse 6s ease-in-out infinite;
}

@keyframes haloPulse{
  0%,100%{opacity:.4}
  50%{opacity:.9}
}

/* INNER FRAME */
.card::before{
  content:'';
  position:absolute;
  inset:12px;
  border-radius:20px;
  border:1px solid rgba(255,215,150,.25);
}

/* MOON */
.moon{
  position:absolute;
  top:14px;
  right:22px;
  font-size:22px;
  color:rgba(255,217,138,.6);
}

/* FOTO PASANGAN */
.photo-single{
  width:220px;
  height:260px;
  margin:0 auto 26px;
  border-radius:50% / 40%;
  overflow:hidden;
  position:relative;
  box-shadow:
    0 0 35px rgba(255,217,138,.8),
    0 0 90px rgba(255,217,138,.45);
  animation:floatPhoto 7s ease-in-out infinite;
}

@keyframes floatPhoto{
  0%,100%{transform:translateY(0)}
  50%{transform:translateY(-10px)}
}

.photo-single img{
  width:100%;
  height:100%;
  object-fit:cover;
}

/* SHIMMER FOTO */
.photo-single::after{
  content:'';
  position:absolute;
  inset:0;
  background:linear-gradient(
    120deg,
    transparent,
    rgba(255,255,255,.25),
    transparent
  );
  transform:translateX(-100%);
  animation:shine 4.5s infinite;
}

@keyframes shine{
  to{transform:translateX(100%)}
}

/* TEXT */
h1{
  font-family:'Playfair Display',serif;
  font-size:26px;
  color:#ffd98a;
  margin-bottom:6px;
  animation:glow 3s ease-in-out infinite alternate;
}

@keyframes glow{
  from{text-shadow:0 0 6px rgba(255,217,138,.4)}
  to{text-shadow:0 0 24px rgba(255,217,138,1)}
}

p{
  font-size:14px;
  letter-spacing:2px;
  color:#ccc;
  margin-bottom:24px;
}

/* BUTTON */
button{
  padding:14px 34px;
  border:none;
  border-radius:40px;
  background:linear-gradient(135deg,#ffd98a,#d4af37);
  font-weight:600;
  cursor:pointer;
  animation:pulse 2.5s infinite;
}

@keyframes pulse{
  0%{box-shadow:0 0 0 0 rgba(255,217,138,.6)}
  70%{box-shadow:0 0 0 18px rgba(255,217,138,0)}
  100%{box-shadow:0 0 0 0 rgba(255,217,138,0)}
}
</style>
</head>

<body>

<audio id="bgm" src="music.mp3" loop></audio>

<div id="lockScreen">

<script>
for(let i=0;i<45;i++){
  const p=document.createElement("div");
  p.className="particle";
  p.style.left=Math.random()*100+"%";
  p.style.animationDuration=(Math.random()*6+6)+"s";
  p.style.animationDelay=(Math.random()*6)+"s";
  document.getElementById("lockScreen").appendChild(p);
}
</script>

<div class="frame">
  <div class="card">
    <div class="moon">☾</div>

    <div class="photo-single">
      <img src="1.png">
    </div>

    <h1>Sophia & Ethan</h1>
    <p>WEDDING INVITATION</p>

    <button onclick="openInvite()">Buka Undangan</button>
  </div>
</div>
</div>

<script>
function openInvite(){
  document.getElementById("bgm").play();
  const lock=document.getElementById("lockScreen");
  lock.style.opacity="0";
  lock.style.transform="scale(1.1)";
  setTimeout(()=>lock.style.display="none",1200);
}
</script>

</body>
</html>
