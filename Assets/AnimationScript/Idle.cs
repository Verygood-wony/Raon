using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

public class Idle : StateMachineBehaviour
{
    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    //override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    
    //}

    // OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    //override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    
    //}

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    //override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    
    //}

    // OnStateMove is called right after Animator.OnAnimatorMove()
    //override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that processes and affects root motion
    //}

    // OnStateIK is called right after Animator.OnAnimatorIK()
    //override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that sets up animation IK (inverse kinematics)
    //}
    public float minimumIdleGruntTime = 2.0f;
    public float maximumIdleGruntTime = 5.0f;

    protected float remainingToNextGrunt = 0.0f;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        if (minimumIdleGruntTime > maximumIdleGruntTime)
            minimumIdleGruntTime = maximumIdleGruntTime;

        remainingToNextGrunt = Random.Range(minimumIdleGruntTime, maximumIdleGruntTime);
    }
}

/*namespace Gamekit3D
{
    public class ChomperSMBIdle : SceneLinkedSMB<ChomperBehavior>
    {
        public float minimumIdleGruntTime = 2.0f;
        public float maximumIdleGruntTime = 5.0f;

        protected float remainingToNextGrunt = 0.0f;

        public override void OnStateMachineEnter(Animator animator, int stateMachinePathHash)
        {
            if (minimumIdleGruntTime > maximumIdleGruntTime)
                minimumIdleGruntTime = maximumIdleGruntTime;

            remainingToNextGrunt = Random.Range(minimumIdleGruntTime, maximumIdleGruntTime);
        }

        public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
        {
            base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);

            remainingToNextGrunt -= Time.deltaTime;

            if (remainingToNextGrunt < 0)
            {
                remainingToNextGrunt = Random.Range(minimumIdleGruntTime, maximumIdleGruntTime);
                m_MonoBehaviour.Grunt();
            }

            m_MonoBehaviour.FindTarget();
            if (m_MonoBehaviour.target != null)
            {
                m_MonoBehaviour.StartPursuit();
            }
        }
    }
}*/