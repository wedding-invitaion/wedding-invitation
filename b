<!DOCTYPE html>
<html lang="id">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Wedding Invitation</title>

<style>
@import url('https://fonts.googleapis.com/css2?family=Playfair+Display:wght@600&family=Poppins:wght@300;500&display=swap');

*{
  margin:0;
  padding:0;
  box-sizing:border-box;
  font-family:'Poppins',sans-serif;
}

body{
  background:#05010d;
  overflow:hidden;
}

/* 🌌 BACKGROUND MOTIF */
#lockScreen{
  position:fixed;
  inset:0;
  background:
    radial-gradient(circle at top,#2d1b5a,#05010d);
  display:flex;
  justify-content:center;
  align-items:center;
}

/* ✨ ANIMATED BORDER */
.frame{
  position:relative;
  padding:6px;
  border-radius:30px;
  background:linear-gradient(
    270deg,
    #d4af37,
    #6a5acd,
    #00c6ff,
    #d4af37
  );
  background-size:600% 600%;
  animation:borderMove 6s ease infinite;
}

@keyframes borderMove{
  0%{background-position:0% 50%}
  50%{background-position:100% 50%}
  100%{background-position:0% 50%}
}

/* 💎 CARD UTAMA */
.card{
  background:rgba(0,0,0,.9);
  border-radius:26px;
  padding:36px 28px;
  width:340px;
  text-align:center;
  color:#fff;
  position:relative;
}

/* 🌙 MOTIF ISLAMI */
.card::before{
  content:'';
  position:absolute;
  inset:12px;
  border-radius:20px;
  border:1px solid rgba(255,215,150,.25);
  pointer-events:none;
}

/* 📸 FOTO GALERI */
.photos{
  display:flex;
  justify-content:center;
  gap:18px;
  margin-bottom:22px;
}

.photo{
  width:125px;
  height:170px;
  border-radius:20px;
  overflow:hidden;
  position:relative;
  box-shadow:0 0 20px rgba(212,175,55,.6);
}

.photo img{
  width:100%;
  height:100%;
  object-fit:cover;
}

/* ✨ SHIMMER EFFECT */
.photo::after{
  content:'';
  position:absolute;
  inset:0;
  background:linear-gradient(
    120deg,
    transparent,
    rgba(255,255,255,.35),
    transparent
  );
  transform:translateX(-100%);
  animation:shine 3.5s infinite;
}

@keyframes shine{
  to{transform:translateX(100%)}
}

/* 💍 TEKS */
h1{
  font-family:'Playfair Display',serif;
  font-size:26px;
  color:#ffd98a;
  margin-bottom:6px;
}

p{
  font-size:14px;
  letter-spacing:2px;
  color:#ccc;
  margin-bottom:26px;
}

/* 💌 BUTTON */
button{
  padding:14px 34px;
  border:none;
  border-radius:40px;
  background:linear-gradient(135deg,#ffd98a,#d4af37);
  font-weight:600;
  cursor:pointer;
  transition:.35s;
}

button:hover{
  transform:scale(1.12);
  box-shadow:0 0 25px rgba(255,217,138,.9);
}

/* ✨ FLOATING PARTICLES */
.particle{
  position:absolute;
  width:6px;
  height:6px;
  background:#ffd98a;
  border-radius:50%;
  opacity:.7;
  animation:float 8s infinite;
}

@keyframes float{
  from{transform:translateY(0)}
  to{transform:translateY(-800px);opacity:0}
}
</style>
</head>

<body>

<div id="lockScreen">
  <!-- PARTICLES -->
  <div class="particle" style="left:20%;bottom:-10px;animation-delay:0s"></div>
  <div class="particle" style="left:50%;bottom:-10px;animation-delay:2s"></div>
  <div class="particle" style="left:80%;bottom:-10px;animation-delay:4s"></div>

  <div class="frame">
    <div class="card">

      <div class="photos">
        <div class="photo">
          <img src="pria.jpg">
        </div>
        <div class="photo">
          <img src="wanita.jpg">
        </div>
      </div>

      <h1>Sophia & Ethan</h1>
      <p>WEDDING INVITATION</p>

      <button onclick="openInvite()">💌 Buka Undangan</button>
    </div>
  </div>
</div>

<script>
function openInvite(){
  document.getElementById("lockScreen").style.display="none";
}
</script>

</body>
</html>