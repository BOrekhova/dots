if status is-interactive
	starship init fish | source
	set -U fish_greeting ""
	alias v "nvim"
	alias ls "lsd -1"
	alias son "systemctl suspend"
end

function bat
    cat /sys/class/power_supply/BAT0/capacity
end 

