local floatD = 5
local dadY = 0
function onCreate()
    -- background shit
    makeLuaSprite('redsky', 'redsky', -600, -300);
    setScrollFactor('redsky', 0.9, 0.9);
    addWavyShader('redsky')

    addLuaSprite('redsky', false);
  
end
function onBeatHit( ... )--for every beat
   -- body
end

function onStepHit( ... )--for every step
	-- body
end

function onUpdate( ... )
	-- body
end

function onUpdate()
	floatD = floatD + 25
	dadY = getProperty('dad.y')
	setProperty('dad.y',  dadY + math.sin(floatD))
end