#!/bin/bash
export PATH="$SCRIPTS_ROOT/tools/pixmoving_run:$PATH"
source $SCRIPTS_ROOT/tools/pixmoving_api.sh

_pixmoving_completions() {
    local cur prev
    COMPREPLY=()
    cur="${COMP_WORDS[COMP_CWORD]}"
    prev="${COMP_WORDS[COMP_CWORD-1]}"
    cmd="${COMP_WORDS[0]}"

    case "$cmd" in
        pixmoving-test-ota)
            # first_level_opts="push  pull reset status_disk status_local status_remote"
            first_level_opts="push  pull"
            ;;
        pixmovingOta)
            first_level_opts="autoware-robobus autoware-robobus.dev Autonomous-Ops-Platform autoware-robobus-tools.master  autoware_data_1.0 autoware_data_2.0 HMI help"
            second_level_opts="sync status backup recover"
            third_level_opts="to_remote from_remote"
            ;;
        pixmovingOtaV2)
            first_level_opts="push pull"
            second_level_opts="autoware-robobus.master autoware-robobus.dev-master Autonomous-Ops-Platform autoware-robobus-tools.master autoware_data_1.0  autoware_data_2.0 ScreenHMI"
            ;;
        *)
            return 0
            ;;
    esac

    if [[ ${COMP_CWORD} -eq 1 ]]; then
        COMPREPLY=( $(compgen -W "${first_level_opts}" -- ${cur}) )
    elif [[ ${COMP_CWORD} -eq 2 && " ${first_level_opts} " =~ " ${prev} " ]]; then
        COMPREPLY=( $(compgen -W "${second_level_opts}" -- ${cur}) )
    elif [[ ${COMP_CWORD} -eq 3 && " ${second_level_opts} " =~ " ${prev} " ]]; then
        COMPREPLY=( $(compgen -W "${third_level_opts}" -- ${cur}) )
    fi

    return 0
}

complete -F _pixmoving_completions pixmoving-ota
complete -F _pixmoving_completions pixmovingOta
complete -F _pixmoving_completions pixmovingOtaV2
